#pragma once

//=============================================================================
//=============================================================================
enum PropertyType
{
                                //0 - revert to default generat stat
    ColdDamage      = 0x0001,   //1 
    FireDamage      = 0x0002,   //2
    LightningDamage = 0x0004,   //3
    ElementalDamage = 0x0008,   //4
    PierceDamage    = 0x0010,   //5
    BleedDamage     = 0x0020,   //6
    ChaosDamage     = 0x0040,   //7
    AetherDamage    = 0x0080,   //8
    VitalityDamage  = 0x0100,   //9 
    PoisAcidDamage  = 0x0200,   //10
    PhysicalDamage  = 0x0400,   //11
    AllDamage       = (ColdDamage | FireDamage | LightningDamage | ElementalDamage | PierceDamage | BleedDamage |
                      ChaosDamage | AetherDamage | VitalityDamage | PoisAcidDamage | PhysicalDamage),
    PetType         = 0x0800,   //12
    OffenseType     = 0x1000,   //13
    DefenseType     = 0x2000,   //14
    RetaliationType = 0x4000,   //15
    GeneratStat     = 0x8000,   //16 *this mask is permanent part of the evaluation and cannot be removed
};

const unsigned intToAffixMask[GeneratStat + 1] =
{
    GeneratStat, 
    ColdDamage,
    FireDamage,
    LightningDamage,
    ElementalDamage,

    PierceDamage,
    BleedDamage,
    ChaosDamage,
    AetherDamage,
    VitalityDamage,
    PoisAcidDamage,
    PhysicalDamage,

    PetType,
    OffenseType,
    DefenseType,
    RetaliationType,
    0, //GeneratStat *this mask is permanent part of the evaluation and cannot be removed
};

const char* intToAffinityStr[GeneratStat + 1] =
{
    "GeneratStat",
    "ColdDamage",
    "FireDamage",
    "LightningDamage",
    "ElementalDamage",

    "PierceDamage",
    "BleedDamage",
    "ChaosDamage",
    "AetherDamage",
    "VitalityDamage",
    "PoisAcidDamage",
    "PhysicalDamage",

    "PetType",
    "OffenseType",
    "DefenseType",
    "Retaliation",
    "GeneratStat", //*this mask is permanent part of the evaluation and cannot be removed
};

struct ItemLvlName
{
	unsigned int lvl_;
	const char *name_;
};

struct ItemAffix
{
    unsigned affixType_;
	unsigned mask_;
	int size_;
	const ItemLvlName *arrayItems_;
};

struct ItemData
{
    unsigned mask_;
    const char *name_;
};

struct ItemArray
{
	int id_;
    int size_;
    const ItemData *arrayItems_;
};

enum ItemTypes
{  
	Ring		= 0x00000001,
	Medal		= 0x00000002,
	Amulet		= 0x00000004,

	AllJewelry = Ring | Medal | Amulet,

	Belt		= 0x00000008,

	Helm		= 0x00000010,
	Jacket		= 0x00000020,
	Shoulder	= 0x00000040,
	Gloves		= 0x00000080,
	Pants		= 0x00000100,
	Boots		= 0x00000200,

	AllArmorNoBelt = Helm | Jacket | Shoulder | Gloves | Pants  | Boots,

    Shield		= 0x00000400,
    Melee1h     = 0x00000800,
    Melee2h     = 0x00001000,
    Offhand     = 0x00002000,
    Range1h     = 0x00004000,
    Range2h     = 0x00008000,

    Sword1h     = 0x00010000,
    Axe1h       = 0x00020000,
    Mace1h      = 0x00040000,
    Dagger      = 0x00080000,
    Scepter     = 0x00100000,
};

