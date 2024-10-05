//#include "GameAPI.h"

//

//amulet
	//of the dranghoul - all jewelry, belts
	//"records/items/lootaffixes/suffix/b_ar048_je.dbr"
	//stonefaced - all jewelry, belts
	//of amarasta's flurry - all jewelry, belts
	//of arcane balance - all armor, all jewelry

//medal
	//tempest - all armor, all jewelry
	//"records/items/lootaffixes/prefix/b_ar009_ar_b.dbr"

//ring
    //unyielindg- all jewelry, belts
	//"records/items/lootaffixes/prefix/b_ar020_je_b.dbr"
	//of the winter storm
	//"records/items/lootaffixes/prefix/b_ar039_ar_b.dbr"
	//of nature's bounty - rings
	//"records/items/lootaffixes/suffix/b_ar052_je_b.dbr"
    //of oleron's wrath - rings
	//of scorched ends - all armor, all jewelry
	//of scorched runes - all armor, all jewelry
	//of shadows - all jewelry, belts
	//of supremacy - all jewelry, belts
	//of the basilik - ring

//waist
	//harmonious- all jewelry, belts
	//"records/items/lootaffixes/prefix/b_ar005_je.dbr"
	//of the gildam arcanum
	//"records/items/lootaffixes/prefix/b_ar009_je.dbr"

//pants
	//stonehide
	//"records/items/lootaffixes/prefix/b_ar028_ar_b.dbr"
	//devastating - all armor, all jewelry
	//"records/items/lootaffixes/prefix/b_ar007_ar.dbr"
	//rampage
	//"records/items/lootaffixes/prefix/b_ar002_ar.dbr"
	//resonant
	//"records/items/lootaffixes/prefix/b_ar021_ar.dbr"

	//of blades
	//"records/items/lootaffixes/suffix/b_ar012_to_c.dbr"
	// of reptilian resiliance
	//"records/items/lootaffixes/suffix/b_ar060_ar_b.dbr"
	// of the flesh hulk - all armor (except belts)
	//"records/items/lootaffixes/suffix/b_ar024_ar_f.dbr"
	// of nature's bounty - all armor (except belts)
	//"records/items/lootaffixes/suffix/b_ar007_arje_b.dbr"
	// of balanced steel
	//"records/items/lootaffixes/suffix/b_ar026_ar_b.dbr"
	// of ruin
	//"records/items/lootaffixes/suffix/a028e_off_dmg&phys_03_ar.dbr"
	// of kings - all armor (except belts)
	// of destruction - all armor (except belts)
	// of oleron's wrath - all armor (except belts)
	// of the dranghoul - all armor (except belts)
	// of blades - all armor (except belts)


//aggressive - all jewelry, belts - no lvl limit

//of readiness - all jewelry, gloves, belts
	//"records/items/lootaffixes/suffix/a020b_ch_oada_06.dbr"

// of attack - all jewelry, gloves, belts

namespace GameAPI
{
#if 0
void GetItemReplicaInfo(void* item, ItemReplicaInfo& info)
{
    typedef void(__thiscall* GetItemReplicaInfoProto)(void*, ItemReplicaInfo&);

    HMODULE gameDLL = GetModuleHandle(TEXT("Game.dll"));
    if ((!gameDLL) || (!item))
        return;

    GetItemReplicaInfoProto callback = (GetItemReplicaInfoProto)GetProcAddress(gameDLL, GAPI_NAME_GET_ITEM_REPLICA_INFO);
    if (!callback)
        return;

    callback(item, info);
}

void* CreateItem(const ItemReplicaInfo& info)
{
    typedef void* (__thiscall* CreateItemProto)(const ItemReplicaInfo&);

    HMODULE gameDLL = GetModuleHandle(TEXT("Game.dll"));
    if (!gameDLL)
        return nullptr;

    CreateItemProto callback = (CreateItemProto)GetProcAddress(gameDLL, GameAPI::GAPI_NAME_CREATE_ITEM);
    if (!callback)
        return nullptr;

    return callback(info);
}
#endif
}