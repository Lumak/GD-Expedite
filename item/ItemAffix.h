#pragma once

//=============================================================================
//=============================================================================
struct ItemLvlName
{
	unsigned int lvl_;
	const char *name_;
};

struct ItemAffix
{
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
	Ring		= 0x0001,
	Medal		= 0x0002,
	Amulet		= 0x0004,

	AllJewelry = Ring | Medal | Amulet,

	Belt		= 0x0008,

	Helm		= 0x0010,
	Jacket		= 0x0020,
	Shoulder	= 0x0040,
	Gloves		= 0x0080,
	Pants		= 0x0100,
	Boots		= 0x0200,

	AllArmorNoBelt = Helm | Jacket | Shoulder | Gloves | Pants  | Boots,

    Shield		= 0x0400,
    Blunt1h		= 0x0800
};
