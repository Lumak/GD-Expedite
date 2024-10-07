#include <windows.h>
#include <stdio.h>

#include "options.h"

//=============================================================================
//=============================================================================
void Options::GetOptions(int argc, char *argv[])
{
    //it's valid to pass no arguments
    if (argc > 1)
    {
        for (int i = 1; i < argc; ++i)
        {
            if (argv[i][0] == '-')
            {
                char option = tolower(argv[i][1]);
                char *strPtr = (i + 1 < argc) ? argv[i + 1] : NULL;

                if (option == '?' || option == 'h')
                {
                    ShowHelp();
                    break;
                }

                //error checking
                if (!strPtr)
                {
                    return;
                }

                if (option == 'x')
                {
                    expMultiplier = max(atoi(strPtr), 0);
                }
                else if (option == 'f')
                {
                    factionFriendMultiplier = max(atoi(strPtr), 0);
                }
                else if (option == 'e')
                {
                    factionEnemyMultiplier = max(atoi(strPtr), 0);
                }
                else if (option == 'o')
                {
                    oneDropDupe = atoi(strPtr);
                }
                else if (option == 'p')
                {
                    prefixChange = atoi(strPtr);
                }
                else if (option == 's')
                {
                    suffixChange = atoi(strPtr);
                }
            }
        }
    }
}

void Options::ShowHelp()
{
    printf("GDExpLoader [-option n] [-option n] ... [-option n]\n\n");
    printf("calling GDExpLoader will only load the dll once, all subsequent commands call an export fn\n");
    printf("by default all stackable items > 1 dropped will be doubled\n");
    printf("to change affixes on a gear or swap it out, drop the gear on the ground\n");
    printf("  -x n\t/experience gain multiplier n\n");
    printf("  \t/n=0 zero gain\n");

    printf("  -f n\t/faction rep gain multiplier n\n");
    printf("  \t/n=0 zero gain\n");
    printf("  -e n\t/enemy infamy gain multiplier n\n");
    printf("  \t/n=0 zero gain\n");

    printf("  -p n\t/prefix n=-1 remove prefix from an item dropped\n");
    printf("  \t/n=0 do nothing\n");
    printf("  \t/n=1 change prefix of an item dropped from a list\n");
    printf("  \t/n>1 swapId, swap item dropped with an item in the list\n");
    
    printf("  -s n\t/suffix n=-1 remove suffix from an item dropped\n");
    printf("  \t/n=0 do nothing\n");
    printf("  \t/n=1 change suffix of an item dropped from a list\n");

    printf("  -h,-?\t/this help output\n");
    printf("to add your own list of affixes or swap list, run DebugView and drop items to capture the record info.\n");
    printf("then go to grimtools to see the type of gear the affix applies to and get the level info.\n\n");
}
