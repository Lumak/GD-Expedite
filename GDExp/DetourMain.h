#pragma once
#include <vector>
#include <map>

//=============================================================================
//=============================================================================
#ifdef X64
#define SYM_CHAR_RECEIVE_EXP "?ReceiveExperience@Character@GAME@@QEAAXIW4ExperienceSource@Bonus@2@_N@Z"
//void __thiscall GAME::Character::ReceiveExperience(unsigned int,enum GAME::Bonus::ExperienceSource,bool)
#define SYM_FACTION_ADJ_VALUE "?AdjustValue@FactionPack@GAME@@QEAAXW4FactionType@2@M_N@Z"
//void __thiscall GAME::FactionPack::AdjustValue(enum GAME::FactionType,float,bool)
#define SYM_BE_PLACED_IN_XFER_STASH "?CanBePlacedInTransferStash@Item@GAME@@UEBA_NXZ"
//virtual bool __thiscall GAME::Item::CanBePlacedInTransferStash(void)const
#define SYM_ITEM_ONDROPPED "?OnDropped@Item@GAME@@UEAAXPEAVCharacter@2@@Z"
//public: virtual void __thiscall GAME::Item::OnDropped(class GAME::Character *)
#define SYM_ITEM_GETITEMREPLICAINFO "?GetItemReplicaInfo@Item@GAME@@UEBAXAEAUItemReplicaInfo@2@@Z"
//virtual void __thiscall GAME::Item::GetItemReplicaInfo(struct GAME::ItemReplicaInfo &)const
#define SYM_ITEM_CREATEITEM "?CreateItem@Item@GAME@@SAPEAV12@AEBUItemReplicaInfo@2@@Z"
//static class GAME::Item * __cdecl GAME::Item::CreateItem(struct GAME::ItemReplicaInfo const &)
#define SYM_CHAR_GETCHARLEVEL "?GetCharLevel@Character@GAME@@QEBA?BIXZ"
//public: unsigned int const __cdecl GAME::Character::GetCharLevel(void)const __ptr64
#define SYM_OBJECT_GETOBJECTNAME "?GetObjectName@Object@GAME@@QEBAPEBDXZ"
//"public: char const * __thiscall GAME::Object::GetObjectName(void)const
#else
#define SYM_CHAR_RECEIVE_EXP "?ReceiveExperience@Character@GAME@@QAEXIW4ExperienceSource@Bonus@2@_N@Z"
//void __thiscall GAME::Character::ReceiveExperience(unsigned int,enum GAME::Bonus::ExperienceSource,bool)
#define SYM_FACTION_ADJ_VALUE "?AdjustValue@FactionPack@GAME@@QAEXW4FactionType@2@M_N@Z"
//void __thiscall GAME::FactionPack::AdjustValue(enum GAME::FactionType,float,bool)
#define SYM_BE_PLACED_IN_XFER_STASH "?CanBePlacedInTransferStash@Item@GAME@@UBE_NXZ"
//virtual bool __thiscall GAME::Item::CanBePlacedInTransferStash(void)const
#define SYM_ITEM_ONDROPPED "?OnDropped@Item@GAME@@UAEXPAVCharacter@2@@Z"
//public: virtual void __thiscall GAME::Item::OnDropped(class GAME::Character *)
#define SYM_ITEM_GETITEMREPLICAINFO "?GetItemReplicaInfo@Item@GAME@@UBEXAAUItemReplicaInfo@2@@Z"
//virtual void __thiscall GAME::Item::GetItemReplicaInfo(struct GAME::ItemReplicaInfo &)const
#define SYM_ITEM_CREATEITEM "?CreateItem@Item@GAME@@SAPAV12@ABUItemReplicaInfo@2@@Z"
//static class GAME::Item * __cdecl GAME::Item::CreateItem(struct GAME::ItemReplicaInfo const &)
#define SYM_CHAR_GETCHARLEVEL "?GetCharLevel@Character@GAME@@QBE?BIXZ"
//public: unsigned int const __cdecl GAME::Character::GetCharLevel(void)const __ptr64
#define SYM_OBJECT_GETOBJECTNAME "?GetObjectName@Object@GAME@@QBEPBDXZ"

#endif

//=============================================================================
// dll export fn
//=============================================================================
extern "C"
{
	__declspec(dllexport) void GLSetOption(int val[]);
}

//=============================================================================
//=============================================================================
typedef void(__thiscall *VoidFn)();
#ifdef X64
#define VoidArg void *This
#else					
#define VoidArg void *This, void*
#endif

struct DetourFnData
{
	DetourFnData(const char *name, VoidFn real, VoidFn det, const char *mangle)
	{
		dllName_ = name;
		realFn_ = real;
		detourFn_ = det;
		mangleName_ = mangle;
	}

	const char *dllName_;
	VoidFn realFn_;
	VoidFn detourFn_;
	const char *mangleName_;
};

template <typename R, typename ...Args>
class ThisFunc
{
public:
	typedef R(__thiscall *Fn)(Args...);

	ThisFunc() : Fn_(NULL) {};

	void SetFn(VoidFn rhs)
	{
		Fn_ = (Fn)rhs;
	}

	Fn Fn_;
};

template <typename R, typename ...Args>
class CdeclFunc
{
public:
	typedef R(__cdecl *Fn)(Args...);

	CdeclFunc() : Fn_(NULL) {};

	void SetFn(VoidFn rhs)
	{
		Fn_ = (Fn)rhs;
	}

	Fn Fn_;
};

//=============================================================================
//=============================================================================
class DetourMain
{
public:
    DetourMain();
    ~DetourMain();

    static void Init();
    static void Close();

    static DetourMain& GetInstance(){ return *sDetourMain_; }

	void CharAdjustReceiveExp(unsigned int &adjustVal);
	void SetOption(int val[]);
	void FactionAdjustValue(float &val);
	void ItemOnDropped(void* This, void* charPtr);
	void ItemGetItemReplicaInfo(void* This, unsigned int &refItemRep);
	bool ItemCreateItem(unsigned int&);

private:
    bool SetupDetour();
    int HookDetour(DetourFnData &detourData);
    void SetError(const char *err);
	void GetObjectName(void* obj, std::string &name);

public:
    //static fns
	static void __fastcall DTCharReceiveExp(VoidArg, unsigned int, unsigned int, bool);
	static void __fastcall DTFactionAdjustValue(VoidArg, unsigned int, float, bool);
	static bool __fastcall DTCanBePlacedInXferStash(void*);
	static void __fastcall DTItemOnDropped(VoidArg, void*);
	static void __fastcall DTItemGetItemReplicaInfo(VoidArg, unsigned int&);
	static void* __cdecl DTItemCreateItem(unsigned int&);
  
private:
    // static vars
    static DetourMain *sDetourMain_;

	//char exp
	unsigned int charLevel_;
	int charExpMultiplier;
	float factionFriendlyMultiplier;
	float factionEnemyMultiplier;
	int oneDropDupe_;
	int prefixChange_;
	int suffixChange_;

	void *itemDropped_;
	void *itemReplica_;

    // static fn vars
	static ThisFunc<void, void*, unsigned int, unsigned int, bool> fnCharReceiveExp_;
	static ThisFunc<void, void*, unsigned int, float, bool> fnFactionAdjustVal_;
	static ThisFunc<bool, void*> fnCanBePlacedInXferStash_;
    static ThisFunc<void, void*, void*> fnItemOnDropped_;
    static ThisFunc<void, void*, unsigned int&> fnItemGetItemReplicaInfo_;
    static CdeclFunc<void*, unsigned int&> fnFnItemCreateItem_;
	static ThisFunc<unsigned int, void*> fnCharGetCharLevel_;
	static ThisFunc<char const*, void*> fnObjectGetObjectName_;
};



