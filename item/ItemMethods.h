#pragma once

#include "ItemReplicaInfo.h"

//=============================================================================
//=============================================================================
namespace ItemMethods
{
    void ModifyAffixType(int val);
    bool PrefixChange(unsigned int lvl, ItemReplicaInfo &replicaInfo);
    bool SuffixChange(unsigned int lvl, ItemReplicaInfo &replicaInfo);
    bool SwapItem(int id, ItemReplicaInfo &replicaInfo);
}

