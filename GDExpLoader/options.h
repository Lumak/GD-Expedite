#pragma once
#include <vector>
#include "common.h"

class Options
{
public:
    Options()
    {
        expMultiplier = TYPE_DEFAULT_VALUE;
        factionFriendMultiplier = TYPE_DEFAULT_VALUE;
        factionEnemyMultiplier = TYPE_DEFAULT_VALUE;
        oneDropDupe = TYPE_DEFAULT_VALUE;
        prefixChange = TYPE_DEFAULT_VALUE;
        suffixChange = TYPE_DEFAULT_VALUE;
        randSeedChange = TYPE_DEFAULT_VALUE;
        affixTypeList.clear();
    }

    void GetOptions(int argc, char *argv[]);
    void ShowHelp();

public:
    int expMultiplier;
    int factionFriendMultiplier;
    int factionEnemyMultiplier;
    int oneDropDupe;
    int prefixChange;
    int suffixChange;
    int randSeedChange;
    std::vector<int> affixTypeList;
};