#pragma once

#include <stdint.h>
#include <string>
#include "Item.h"

struct ItemReplicaInfo
{
    ItemReplicaInfo() {}
    ItemReplicaInfo(const Item& item)
    {
        *this = item;
    }

    ItemReplicaInfo& operator=(const Item& item)
    {
        _itemName = item._itemName;
        _itemPrefix = item._itemPrefix;
        _itemSuffix = item._itemSuffix;
        _itemModifier = item._itemModifier;
        _itemIllusion = item._itemIllusion;
        _itemComponent = item._itemComponent;
        _itemCompletion = item._itemCompletion;
        _itemAugment = item._itemAugment;
        _itemSeed = item._itemSeed;
        _itemComponentSeed = item._itemComponentSeed;
        _unk3 = item._itemUnk1;
        _itemAugmentSeed = item._itemAugmentSeed;
        _unk4 = item._itemUnk2;
        _itemStackCount = item._itemStackCount;

        _unk1 = 0;
        _unk2 = 0;
        _unk5 = 0;
#ifdef X64
		_unk6[0] = 0;
		_unk6[1] = 0;
#endif
        _unk7 = 0;
        return *this;
    }

	ItemReplicaInfo& operator=(const ItemReplicaInfo& rhs)
	{
		_itemName = rhs._itemName;
		_itemPrefix = rhs._itemPrefix;
		_itemSuffix = rhs._itemSuffix;
		_itemModifier = rhs._itemModifier;
		_itemIllusion = rhs._itemIllusion;
		_itemComponent = rhs._itemComponent;
		_itemCompletion = rhs._itemCompletion;
		_itemAugment = rhs._itemAugment;
		_itemSeed = rhs._itemSeed;
		_itemComponentSeed = rhs._itemComponentSeed;
		_unk3 = 0;// rhs._itemUnk1;
		_itemAugmentSeed = rhs._itemAugmentSeed;
		_unk4 = 0;// item._itemUnk2;
		_itemStackCount = rhs._itemStackCount;

		_unk1 = 0;
		_unk2 = 0;
		_unk5 = 0;
#ifdef X64
		_unk6[0] = 0;
		_unk6[1] = 0;
#endif
		_unk7 = 0;
		return *this;
	}

    operator Item() const
    {
        Item item;

        item._itemName = _itemName;
        item._itemPrefix = _itemPrefix;
        item._itemSuffix = _itemSuffix;
        item._itemModifier = _itemModifier;
        item._itemIllusion = _itemIllusion;
        item._itemComponent = _itemComponent;
        item._itemCompletion = _itemCompletion;
        item._itemAugment = _itemAugment;
        item._itemSeed = _itemSeed;
        item._itemComponentSeed = _itemComponentSeed;
        item._itemUnk1 = _unk3;
        item._itemAugmentSeed = _itemAugmentSeed;
        item._itemUnk2 = _unk4;
        item._itemStackCount = _itemStackCount;

        return item;
    }

    uint32_t    _itemID;
    std::string _itemName;
    std::string _itemPrefix;
    std::string _itemSuffix;
    uint32_t    _itemSeed;
    uint32_t    _unk1;
    std::string _itemModifier;
    std::string _itemComponent;
    std::string _itemCompletion;
    uint32_t    _itemComponentSeed;
    uint32_t    _unk2;
    std::string _itemAugment;
    uint32_t    _unk3;
    uint32_t    _itemAugmentSeed;
    std::string _itemIllusion;
    uint32_t    _unk4;
    uint32_t    _unk5;

	//originally, the _unk6 was defined as uint64_t and assumed the size of 8 bytes, but the 
	//even address alignment requirement on x86 makes it 12 bytes (for this particular struct) 
	//changing it to uint32_t _unk6[2] allows not having to configure misc. padding
#ifdef X64
	uint32_t    _unk6[2];
#endif
    uint32_t    _unk7;
    uint32_t    _itemStackCount;
};
