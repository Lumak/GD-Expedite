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
		else if (replicaInfo._itemName.find("necklaces") != std::string::npos)
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
            itemType = Melee1h;
        }
        else if (replicaInfo._itemName.find("dagger") != std::string::npos)
        {
            //dagger is also a 1 hander
            itemType = Dagger | Melee1h;
        }
        else if (replicaInfo._itemName.find("caster") != std::string::npos)
        {
            //scepter is also a 1 hander
            itemType = Scepter | Melee1h;
        }
        else if (replicaInfo._itemName.find("focus") != std::string::npos)
        {
            itemType = Offhand;
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
            //no idea the range of the seed (but keep this as is until the game throws error)
            replicaInfo._itemSeed = (uint32_t)rand() % 0x5FFFF + 0xBFFFFF;
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
			LOGF("SuffixChange: idx[%d] of size=%u, change from: %s to\n\t\t%s", idx, list.size(), replicaInfo._itemSuffix.c_str(), list[idx]);
			replicaInfo._itemSuffix = list[idx];
			status = true;
		}

		return status;
	}


    //kaisan's amulet
    // records/items/gearaccessories/necklaces/b201c_necklace.dbr";
    // records/items/gearaccessories/necklaces/b202c_necklace.dbr

    //Ilgorr's eternal vigil medal
    //[13684]  n=records/items/gearaccessories/medals/b006b_medal.dbr

    //garboyle gaze - cold dmg
    //[15072]  n=records/items/gearhead/b208d_head.dbr
    
    //korvan casque - vit dmg
    //[5776]  n=records/items/gearhead/b203d_head.dbr

    //coerced wraith tome
    //[25784]  n=records/items/gearweapons/focus/b204f_focus.dbr

    bool SwapItem(int id, ItemReplicaInfo &replicaInfo)
    {
		unsigned itemType = GetItemType(replicaInfo);

        for (unsigned i = 0; i < swapList.size(); ++i)
        {
            if (swapList[i]->id_ == id)
            {
                for (int j = 0; j < swapList[i]->size_; ++j)
                {
                    if (swapList[i]->arrayItems_[j].mask_ & itemType)
                    {
                        replicaInfo._itemName = swapList[i]->arrayItems_[j].name_;
                        replicaInfo._itemPrefix = "";
                        replicaInfo._itemSuffix = "";

                        return true;
                    }
                }
            }
        }

        if (itemType == Helm)
        {
            //replicaInfo._itemPrefix = "records/items/lootaffixes/prefix/b_wpn005_melee2h_e.dbr";
            //replicaInfo._itemName = "grimleague/items/gearweapons/melee2h/b701_spear2h_rahnd.dbr";

            //pakla - [20952]  n=records/items/gearhead/b104e_head.dbr
            //gargoyle - [20952]  n=records/items/gearhead/b207e_head.dbr
            //replicaInfo._itemName = "records/items/gearhead/b207a_head.dbr";
            //replicaInfo._itemName = "records/items/gearaccessories/medals/b101b_medal.dbr";
            //replicaInfo._itemName = "records/items/gearlegs/b001b_legs.dbr";
            //replicaInfo._itemPrefix = "records/items/lootaffixes/prefix/b_wpn006_melee1h_g.dbr";
            //[14120]  n=records/items/gearaccessories/rings/b103e_ring.dbr

            //[19772]  n=records/items/gearaccessories/necklaces/b202e_necklace.dbr
            //replicaInfo._itemName = "records/items/gearaccessories/medals/b006e_medal.dbr";
            //replicaInfo._itemName = "records/items/gearaccessories/waist/b201a_waist.dbr";
            replicaInfo._itemName = "records/items/gearhead/b203a_head.dbr";
            //[25612]  n=records/items/gearaccessories/waist/b202d_waist.dbr

            //[27032]  n=records/items/gearaccessories/waist/b201d_waist.dbr

            //replicaInfo._itemSuffix = "records/items/lootaffixes/suffix/b_wpn019_melee1h_g.dbr";


            //[18776]  n=records/items/gearaccessories/medals/b006b_medal.dbr

            //[18396]  n=records/items/gearweapons/swords1h/b003b_sword.dbr


            return true;
        }
        else if (itemType == Amulet)
        {

            //records/items/gearaccessories/necklaces/b202e_necklace.dbr
            replicaInfo._itemName = "records/items/gearaccessories/necklaces/b202e_necklace.dbr";

            return true;
        }
        else if (itemType == Medal)
        {
            //replicaInfo._itemName = "records/items/gearweapons/shields/b014c_shield.dbr";
            replicaInfo._itemName = "records/items/gearaccessories/medals/d207_medal.dbr";
            //
            //[21308]  n=records/items/gearaccessories/medals/d207_medal.dbr

            //[12932]  n=records/items/gearaccessories/medals/b015c_medal.dbr

            //records/items/gearaccessories/necklaces/b009c_necklace.dbr
            //[20484]  n=records/items/gearaccessories/medals/b009d_medal.dbr

            //[24660]  n=records/items/gearweapons/shields/b014d_shield.dbr

            //[26672]  n=grimleague/items/gearweapons/blunt1h/b501_groble_icef.dbr

            return true;
        }
        else if (itemType == Ring)
        {
            //[6248]  n=records/items/gearaccessories/rings/b002b_ring_outlawleader.dbr
            replicaInfo._itemName = "records/items/gearaccessories/rings/b002_ring_outlawleader.dbr";
            return true;
        }
        else if (itemType == Melee1h)
        {
            //[27160]  n=records/items/gearweapons/focus/b015f_focus.dbr
            //[19556]  n=grimleague/items/gearweapons/swords1h/b01_anoxisd.dbr

            replicaInfo._itemName = "grimleague/items/gearweapons/swords1h/b01_anoxisc.dbr";
            return true;
        }
        else if (itemType == Shield)
        {
            //[7992]  n=grimleague/items/gearweapons/shields/b04_skeletons_aetherf.dbr
            replicaInfo._itemName = "grimleague/items/gearweapons/shields/b04_skeletons_aetherc.dbr";
            return true;
        }
        else if (itemType == Offhand)
        {
            //[19552]  n=records/items/gearweapons/focus/b015g_focus.dbr
            replicaInfo._itemName = "records/items/gearweapons/focus/b015a_focus.dbr";

            return true;
        }

		return false;
    }

}
