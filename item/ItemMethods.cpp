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
		else if (replicaInfo._itemName.find("medals") != std::string::npos)
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
			itemType = Gloves;
		}
		else if (replicaInfo._itemName.find("shields") != std::string::npos)
		{
			itemType = Shield;
		}
		else if (replicaInfo._itemName.find("blunt1h") != std::string::npos)
		{
			itemType = Blunt1h;
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
			if (prefixList[i]->mask_ & itemType)
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
			if (suffixList[i]->mask_ & itemType)
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

    bool SwapItem(int id, ItemReplicaInfo &replicaInfo)
    {
		bool status = false;
		unsigned itemType = GetItemType(replicaInfo);

		for (unsigned i = 0; i < swapList.size() && !status; ++i)
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
						status = true;
						break;
					}
				}
			}
        }

		return status;
    }

}
