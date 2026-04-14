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
                else if (option == 't')
                {
                    affixTypeList.push_back(atoi(strPtr));
                }
                else if (option == 'r')
                {
                    randSeedChange = atoi(strPtr);
                }
            }
        }
    }
}

void Options::ShowHelp()
{
    printf("GDExpLoader [-option n] [-option n] ... [-option n]\n\n");
    printf("calling GDExpLoader will only load the dll once, all subsequent commands call an export fn\n");
    printf("stackable items: split and restack in your inventory or bag\n");
    printf("to change affixes/seed on a gear or swap it out, drop the gear on the ground\n");
    printf("  -x n\t/experience gain multiplier n\n");
    printf("  \t/n=0 zero gain\n");

    printf("  -f n\t/faction rep gain multiplier n\n");
    printf("  \t/n=0 zero gain\n");
    printf("  -e n\t/enemy infamy gain multiplier n\n");
    printf("  \t/n=0 zero gain\n");

    printf("  -p n\t/prefix n=1 change prefix of an item from prefix table list, see -t option\n");
    printf("  \t/n=0 clear prefix change\n");
    printf("  \t/n=-1 remove prefix\n");
    printf("  \t/n>1 swapId, swap item dropped with an item in the list\n");
    
    printf("  -s n\t/suffix n=1 change suffix of an item from suffix table list, see -t option\n");
    printf("  \t/n=0 clear suffix change\n");
    printf("  \t/n=-1 remove suffix\n");

    printf("  -t n\t/include affix type: n=0 reset to general stats (default, always inclusive)\n");
    printf("  \t/1=cold, 2=fire, 3=lightning, 4=elemental\n");
    printf("  \t/5=pierce, 6=bleed, 7=chaos, 8=aether\n");
    printf("  \t/9=vitality, 10=poison/acid, 11=physical, 12=pet type\n");
    printf("  \t/13=offensive type, 14=defensive type, 15=retaliation type\n");
    printf("  \t/-n remove the affix type previously set\n");
    printf("  \t/multiple affix types can be set in a single call, example: GDExpLoader -t 0 -t 1 -t 4 \n  \t -> reset then include cold + elemental\n");

    printf("  -r n\t/seed n=1 change item seed. this option takes precedence and ignores affix option when set\n");
    printf("  \t/n=0 clear seed change\n");

    printf("  -h,-?\t/this help output\n");
    printf("to add your own list of affixes or a swap list, run DebugView and drop items to capture the record info.\n");
    printf("then go to grimtools to see the type of gear the affix applies to and its levels\n\n");
}
