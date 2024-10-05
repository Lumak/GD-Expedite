#include <windows.h>
#include <process.h>
#include <cassert>
#include <detours.h>

#include "DetourMain.h"
#include "Logger.h"
#include "proc.h"
#include "DetourUtil.h"

#include "ItemReplicaInfo.h"
#include "common.h"

#include "ItemMethods.h"

//=============================================================================
//=============================================================================
#define XFER_STASH_ALLOW_ALL	0 // testing 

#define DEFAULT_XP_MULTIPLIER	1
#define DEFAULT_XP_LIMITER		100
#define LEVELING_XP_MULTIPLIER	2

#define FACTION_FRIEND_GAIN		1.0f //mandate = 200%
#define FACTION_ENEMY_GAIN		1.0f

//=============================================================================
//=============================================================================
DetourFnData datCharReceiveExp = { "game.dll", NULL, (VoidFn)&DetourMain::DTCharReceiveExp, SYM_CHAR_RECEIVE_EXP };
DetourFnData datFactionAdjustVal = { "game.dll", NULL, (VoidFn)&DetourMain::DTFactionAdjustValue, SYM_FACTION_ADJ_VALUE };
DetourFnData datCanBePlacedInXferStash = { "game.dll", NULL, (VoidFn)&DetourMain::DTCanBePlacedInXferStash, SYM_BE_PLACED_IN_XFER_STASH };
DetourFnData datItemOnDropped = { "game.dll", NULL, (VoidFn)&DetourMain::DTItemOnDropped, SYM_ITEM_ONDROPPED };
DetourFnData datItemGetItemReplicaInfo = { "game.dll", NULL, (VoidFn)&DetourMain::DTItemGetItemReplicaInfo, SYM_ITEM_GETITEMREPLICAINFO };
DetourFnData datItemCreateItem = { "game.dll", NULL, (VoidFn)&DetourMain::DTItemCreateItem, SYM_ITEM_CREATEITEM };
DetourFnData datCharGetCharLevel = { "game.dll", NULL, NULL, SYM_CHAR_GETCHARLEVEL };
DetourFnData datGetObjectName = { "engine.dll", NULL, NULL, SYM_OBJECT_GETOBJECTNAME };


ThisFunc<void, void*, unsigned int, unsigned int, bool> DetourMain::fnCharReceiveExp_;
ThisFunc<void, void*, unsigned int, float, bool> DetourMain::fnFactionAdjustVal_;
ThisFunc<bool, void*> DetourMain::fnCanBePlacedInXferStash_;
ThisFunc<void, void*, void*> DetourMain::fnItemOnDropped_;
ThisFunc<void, void*, unsigned int&> DetourMain::fnItemGetItemReplicaInfo_;
ThisFunc<unsigned int, void*> DetourMain::fnCharGetCharLevel_;
ThisFunc<char const*, void*> DetourMain::fnObjectGetObjectName_;
CdeclFunc<void*, unsigned int&> DetourMain::fnFnItemCreateItem_;


DetourMain *DetourMain::sDetourMain_ = NULL;

//=============================================================================
//=============================================================================
void DetourMain::Init()
{
    if (!sDetourMain_)
    {
        sDetourMain_ = new DetourMain();
		sDetourMain_->SetupDetour();
    }
}

void DetourMain::Close()
{
    if (sDetourMain_)
    {
        delete sDetourMain_;
        sDetourMain_ = NULL;
    }
}

//=============================================================================
//=============================================================================
DetourMain::DetourMain()
{
	charLevel_ = 1;
	charExpMultiplier = DEFAULT_XP_MULTIPLIER;
	factionFriendlyMultiplier = FACTION_FRIEND_GAIN;
	factionEnemyMultiplier = FACTION_ENEMY_GAIN;
	oneDropDupe_ = 0;
	prefixChange_ = 0;
	suffixChange_ = 0;

	itemDropped_ = NULL;
	itemReplica_ = NULL;
}

DetourMain::~DetourMain()
{
}

bool DetourMain::SetupDetour()
{
    int status = 0;

	status += HookDetour(datCharReceiveExp);
	fnCharReceiveExp_.SetFn(datCharReceiveExp.realFn_);

	status += HookDetour(datFactionAdjustVal);
	fnFactionAdjustVal_.SetFn(datFactionAdjustVal.realFn_);

	status += HookDetour(datCanBePlacedInXferStash);
	fnCanBePlacedInXferStash_.SetFn(datCanBePlacedInXferStash.realFn_);

	status += HookDetour(datItemOnDropped);
	fnItemOnDropped_.SetFn(datItemOnDropped.realFn_);

	status += HookDetour(datItemGetItemReplicaInfo);
	fnItemGetItemReplicaInfo_.SetFn(datItemGetItemReplicaInfo.realFn_);

	status += HookDetour(datItemCreateItem);
	fnFnItemCreateItem_.SetFn(datItemCreateItem.realFn_);

	status += HookDetour(datCharGetCharLevel);
	fnCharGetCharLevel_.SetFn(datCharGetCharLevel.realFn_);

	status += HookDetour(datGetObjectName);
	fnObjectGetObjectName_.SetFn(datGetObjectName.realFn_);

	if (status != 0)
    {
        SetError("Error in DetourMain::SetupDetour()");
    }

    return status == 0;
}

int DetourMain::HookDetour(DetourFnData &detour)
{
    int error = 0;

    detour.realFn_ = (VoidFn)DetourFindFunction(detour.dllName_, detour.mangleName_);

    if (detour.realFn_ == NULL)
    {
        return 1;
    }

    if (detour.detourFn_)
    {
        DetourTransactionBegin();
        DetourUpdateThread(GetCurrentThread());
        DetourAttach((PVOID*)&detour.realFn_, detour.detourFn_);

        error = DetourTransactionCommit();
        if (error < 0) error = -error;
    }

    return error;
}

void DetourMain::SetError(const char *err)
{
    DWORD ForegroundWindowProcessID;
    DWORD procId = GetProcId(L"Grim Dawn.exe");
    HWND hwnd = 0;

    if (procId == 0)
    {
        ExitProcess(EXIT_SUCCESS);
    }

    while (true)
    {
        GetWindowThreadProcessId(GetForegroundWindow(), &ForegroundWindowProcessID);

        if (ForegroundWindowProcessID == procId)
        {
            hwnd = GetForegroundWindow();
            break;
        }
    }

    MessageBoxA(hwnd, err, "Error", MB_OK | MB_ICONERROR);
    ExitProcess(EXIT_SUCCESS);
}

//==============================================================
// override fns
//==============================================================
void DetourMain::SetOption(int val[])
{
	LOGF("SetOption: val[0]=%u, val[1]=%u\n", val[0], val[1]);
	
	switch (val[0])
	{
	case TYPE_CHAR_MX:
		charExpMultiplier = min(val[1], DEFAULT_XP_LIMITER);
		LOGF("  char xp multiplier=%u\n", charExpMultiplier);
		break;
	
	case TYPE_FRIENDFACTION_MX:
		factionFriendlyMultiplier = (float)val[1];
		LOGF("  faction friend multiplier=%1.1f\n", factionFriendlyMultiplier);
		break;

	case TYPE_ENEMYFACTION_MX:
		factionEnemyMultiplier = (float)val[1];
		LOGF("  faction enemy multiplier=%1.1f\n", factionEnemyMultiplier);
		break;

	case TYPE_ONEDROP_DUPE:
		oneDropDupe_ = val[1];
		LOGF("  one item drop dupe=%d\n", oneDropDupe_);
		break;

	case TYPE_PREFIX_CHANGE:
		prefixChange_ = val[1];
		LOGF("  prefix change=%d\n", prefixChange_);
		break;

	case TYPE_SUFFIX_CHANGE:
		suffixChange_ = val[1];
		LOGF("  suffix change=%d\n", suffixChange_);
		break;
	}
}

void DetourMain::CharAdjustReceiveExp(unsigned int &adjusted)
{
	//charExpMultiplier = 0 means the char will not receive any xp
	if (charExpMultiplier != DEFAULT_XP_MULTIPLIER)
	{
		adjusted *= charExpMultiplier;
	}
}

void DetourMain::FactionAdjustValue(float &b)
{
	// if > 0 then friendly faction
	// if < 0 then enemy faction
	if (b > 0.0f)
	{
		b *= factionFriendlyMultiplier;
	}
	else if (b < 0.0f)
	{
		b *= factionEnemyMultiplier;
	}
}

void DetourMain::ItemOnDropped(void* This, void* charPtr)
{
	charLevel_ = fnCharGetCharLevel_.Fn_(charPtr);

	itemDropped_ = This;
}

void DetourMain::ItemGetItemReplicaInfo(void* This, unsigned int &itemRep)
{
	if (itemDropped_ == This)
	{
		itemReplica_ = &itemRep;
	}
}

bool DetourMain::ItemCreateItem(unsigned int& itemReplica)
{
	bool status = false;

	if (itemReplica_ == &itemReplica)
	{
		ItemReplicaInfo *itemRep = (ItemReplicaInfo*)&itemReplica;
		LOGF("ItemCreateItem: itemReplica=0x%p, count=%u", &itemReplica, itemRep->_itemStackCount );
		LOGF("\tn=%s", itemRep->_itemName.c_str());
		if (!itemRep->_itemPrefix.empty())
		{
			LOGF("\tp=%s", itemRep->_itemPrefix.c_str());
		}
		if (!itemRep->_itemSuffix.empty())
		{
			LOGF("\ts=%s", itemRep->_itemSuffix.c_str());
		}

		// check stack count
		if (itemRep->_itemStackCount > 1)
		{
			itemRep->_itemStackCount = min(itemRep->_itemStackCount * 2, 1000);
		}
		else
		{
			//non-zero prefix and suffix take precedence over drop dupe
			if (prefixChange_ != 0 || suffixChange_ != 0)
			{
				//prefixChange > 1 means prefixChange = swapId
                if (prefixChange_ > 1)
                {
                    ItemMethods::SwapItem(prefixChange_, *itemRep);
                }
				//clear affix
				else if (prefixChange_ < 0 || suffixChange_ < 0)
				{
					if (prefixChange_ < 0)
					{
						itemRep->_itemPrefix = "";
					}
					if (suffixChange_ < 0)
					{
						itemRep->_itemSuffix = "";
					}
				}
				//ignore item sw/o any affix - assume elite or legendary gear
				else if (!itemRep->_itemPrefix.empty() || !itemRep->_itemSuffix.empty())
				{
					if (prefixChange_ == 1)
					{
						ItemMethods::PrefixChange(charLevel_, *itemRep);
					}
					if (suffixChange_ == 1)
					{
						ItemMethods::SuffixChange(charLevel_, *itemRep);
					}
				}
                else
				{
					LOGF("  no affix found (assume epic or legendary gear), skip");
				}
			}
			else if (oneDropDupe_ == 1)
			{
				itemRep->_itemStackCount = 2;
				status = true;
			}
		}

		itemDropped_ = NULL;
		itemReplica_ = NULL;
	}

	return status;
}

void DetourMain::GetObjectName(void* obj, std::string &name)
{
	const char *objname = fnObjectGetObjectName_.Fn_(obj);

	if (objname)
	{
		std::string strName = std::string(objname);
		std::size_t pos = strName.find_last_of("/");
		if (pos != std::string::npos)
		{
			//omit the path and the extension(.dbr): len - (pos + 1) - 4
			name = strName.substr(pos + 1, strName.length() - pos - 5);
		}
		else
		{
			name = "unknown";
		}
	}
	else
	{
		name = " ";
	}
}


//==============================================================
// dll export fn
//==============================================================
void GLSetOption(int val[])
{
	DetourMain::GetInstance().SetOption(val);
}

//==============================================================
// static detour fns
//==============================================================
void DetourMain::DTCharReceiveExp(VoidArg, unsigned int a, unsigned int enumType, bool b)
{
	unsigned int adjusted = a;

	//adjust the xp value
	GetInstance().CharAdjustReceiveExp(adjusted);

	//return w/o calling the real fn if adj value = 0
	if (adjusted != 0)
	{
		fnCharReceiveExp_.Fn_(This, adjusted, enumType, b);
	}
}

void DetourMain::DTFactionAdjustValue(VoidArg, unsigned int a, float b, bool c)
{
	GetInstance().FactionAdjustValue(b);

	fnFactionAdjustVal_.Fn_(This, a, b, c);
}

bool DetourMain::DTCanBePlacedInXferStash(void* This)
{
	bool b = fnCanBePlacedInXferStash_.Fn_(This);

	// allow everything to be placed in xfer stash
#if (XFER_STASH_ALLOW_ALL == 1)
	return true;
#else
	return b;
#endif
}

void DetourMain::DTItemOnDropped(VoidArg, void* charPtr)
{
	GetInstance().ItemOnDropped(This, charPtr);

	fnItemOnDropped_.Fn_(This, charPtr);
}

void DetourMain::DTItemGetItemReplicaInfo(VoidArg, unsigned int& itemRep)
{
	GetInstance().ItemGetItemReplicaInfo(This, itemRep);

	fnItemGetItemReplicaInfo_.Fn_(This, itemRep);
}

void* DetourMain::DTItemCreateItem(unsigned int& item)
{
	GetInstance().ItemCreateItem(item);

	void *v = fnFnItemCreateItem_.Fn_(item);

	return v;
}

