#include <vector>
#include <random>

#include "ItemMethods.h"
#include "ItemAffix.h"
#include "prefixList.h"
#include "suffixList.h"
#include "swapList.h"

#include "Logger.h"

namespace ItemMethods
{
    //=========================================================================
    //=========================================================================
    static unsigned affixMask = GeneratStat;

    void ModifyAffixType(int val)
    {
        int sign = val;
        val = val < 0 ? -val : val;
        val = val > GeneratStat ? 0 : val;
        unsigned mask = intToAffixMask[val];

        LOGF("mod affix() val=%d, mask=0x%04X, affmask=0x%04X", val, mask, affixMask);

        if (val == 0)
        {
            affixMask = GeneratStat;
            LOGF("affix type revert to default, affmask=0x%4X", affixMask);
        }
        else if (sign < 0)
        {
            affixMask &= ~mask;
            LOGF("affix type removed %s, affmask=0x%04X", intToAffinityStr[val], affixMask);
        }
        else
        {
            affixMask |= mask;
            LOGF("affix type added %s, affmask=0x%04X", intToAffinityStr[val], affixMask);
        }
    }

    //=========================================================================
    //=========================================================================
	unsigned int GetItemType(const ItemReplicaInfo &replicaInfo)
	{
		unsigned itemType = 0;

		if (replicaInfo._itemName.find("rings") != std::string::npos)
		{
			itemType = Ring;
		}
		else if (replicaInfo._itemName.find("necklace") != std::string::npos)
		{
			itemType = Amulet;
		}
		else if (replicaInfo._itemName.find("medal") != std::string::npos)
		{
			itemType = Medal;
		}
		else if (replicaInfo._itemName.find("waist") != std::string::npos)
		{
			itemType = Belt;
		}
		else if (replicaInfo._itemName.find("gearhead") != std::string::npos)
		{
			itemType = Helm;
		}
		else if (replicaInfo._itemName.find("geartorso") != std::string::npos)
		{
			itemType = Jacket;
		}
		else if (replicaInfo._itemName.find("gearshoulders") != std::string::npos)
		{
			itemType = Shoulder;
		}
		else if (replicaInfo._itemName.find("gearhands") != std::string::npos)
		{
			itemType = Gloves;
		}
		else if (replicaInfo._itemName.find("gearlegs") != std::string::npos)
		{
			itemType = Pants;
		}
		else if (replicaInfo._itemName.find("gearfeet") != std::string::npos)
		{
			itemType = Boots;
		}
		else if (replicaInfo._itemName.find("shields") != std::string::npos)
		{
			itemType = Shield;
		}
        else if (replicaInfo._itemName.find("melee2h") != std::string::npos)
        {
            itemType = Melee2h;
        }
        else if (replicaInfo._itemName.find("axe1h") != std::string::npos || 
                 replicaInfo._itemName.find("swords1h") != std::string::npos ||
                 replicaInfo._itemName.find("blunt1h") != std::string::npos)
        {
            //base type
            itemType = Melee1h;

            //specific
            if (replicaInfo._itemName.find("axe1h") != std::string::npos)
            {
                itemType |= Axe1h;
            }
            else if (replicaInfo._itemName.find("swords1h") != std::string::npos)
            {
                itemType |= Sword1h;
            }
            else
            { 
                itemType |= Mace1h;
            }

            //file named as a 'sword' but it's a dagger
            if (replicaInfo._itemName.find("b001") != std::string::npos)
            {
                itemType = Dagger | Melee1h;
            }
        }
        else if (replicaInfo._itemName.find("dagger") != std::string::npos)
        {
            itemType = Dagger | Melee1h;
        }
        else if (replicaInfo._itemName.find("caster") != std::string::npos)
        {
            itemType = Scepter | Melee1h;
        }
        else if (replicaInfo._itemName.find("focus") != std::string::npos)
        {
            itemType = Offhand;
        }
        else if (replicaInfo._itemName.find("guns1h") != std::string::npos)
        {
            itemType = Range1h;
        }
        else if (replicaInfo._itemName.find("guns2h") != std::string::npos)
        {
            itemType = Range2h;
        }

		return itemType;
	}

	bool PrefixChange(unsigned int lvl, ItemReplicaInfo &replicaInfo)
	{
		bool status = false;
		unsigned itemType = GetItemType(replicaInfo);
		std::vector<const char*> list;

		for (unsigned i = 0; i < prefixList.size(); ++i)
		{
			if (prefixList[i]->affixType_ & affixMask && prefixList[i]->mask_ & itemType)
			{
				for (int j = prefixList[i]->size_ - 1; j >= 0; --j)
				{
					if (prefixList[i]->arrayItems_[j].lvl_ <= lvl)
					{
						list.push_back(prefixList[i]->arrayItems_[j].name_);
						break;
					}
				}
			}
		}

		if (list.size() > 0)
		{
			int idx = rand() % list.size();
			LOGF("PrefixChange: idx[%d] of size=%u, change from: %s to\n\t\t%s", idx, list.size(), replicaInfo._itemPrefix.c_str(), list[idx]);
			replicaInfo._itemPrefix = list[idx];
            replicaInfo._itemSeed = (uint32_t)rand() % (0x7ffffff - 0x1000000) + 0x1000000;
            //replicaInfo._itemSeed = (uint32_t)rand() % 0x5FFFF + 0xBFFFFF;
			status = true;
		}

		return status;
	}

	bool SuffixChange(unsigned int lvl, ItemReplicaInfo &replicaInfo)
	{
		bool status = false;
		unsigned itemType = GetItemType(replicaInfo);
		std::vector<const char*> list;

		for (unsigned i = 0; i < suffixList.size(); ++i)
		{
			if (suffixList[i]->affixType_ & affixMask && suffixList[i]->mask_ & itemType)
			{
				for (int j = suffixList[i]->size_ - 1; j >= 0; --j)
				{
					if (suffixList[i]->arrayItems_[j].lvl_ <= lvl)
					{
						list.push_back(suffixList[i]->arrayItems_[j].name_);
						break;
					}
				}
			}
		}

		if (list.size() > 0)
		{
			int idx = rand() % list.size();
			LOGF("SuffixChange: type=0x%X, idx[%d] of size=%u, change from: %s to\n\t\t%s", 
                itemType, idx, list.size(), replicaInfo._itemSuffix.c_str(), list[idx]);
			replicaInfo._itemSuffix = list[idx];
			status = true;
		}

		return status;
	}

    //-------------------------------------------------------------------------
    //item swap stuff
    //-------------------------------------------------------------------------

    bool SwapItem(int id, ItemReplicaInfo &replicaInfo)
    {
		unsigned itemType = GetItemType(replicaInfo);

        for (unsigned i = 0; i < itemSwapList.size(); ++i)
        {
            if (itemSwapList[i].id == id)
            {
                replicaInfo._itemName = itemSwapList[i].name;
                
                if (itemSwapList[i].clrAffix)
                {
                    replicaInfo._itemPrefix = "";
                    replicaInfo._itemSuffix = "";
                }
                LOGF("swapped to: %s", replicaInfo._itemName.c_str());
                return true;
            }
        }

		return false;
    }

}
