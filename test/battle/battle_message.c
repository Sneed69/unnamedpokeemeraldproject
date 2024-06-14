#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Battle Message: Send-in message depends on foe HP")
{
    u32 hp;

    PARAMETRIZE { hp = 100; }
    PARAMETRIZE { hp = 69; }
    PARAMETRIZE { hp = 39; }
    PARAMETRIZE { hp = 9; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM) { HP(hp); MaxHP(100); }
    } WHEN {
        TURN { SWITCH(player, 1);  }
    } SCENE {
        if (hp > 69)
            MESSAGE("Go! Abra!");
        else if (hp > 39)
            MESSAGE("Do it! Abra!");
        else if (hp > 9)
            MESSAGE("Go for it, Abra!");
        else
            MESSAGE("Your foe's weak! Get 'em, Abra!");
    }
}

TO_DO_BATTLE_TEST("Battle Message: Switch-out message changes based on conditions")
/*{
    GIVEN {
        PLAYER(SPECIES_ABRA);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { SWITCH(player, 1);  }
    } SCENE {
        if (???)
            MESSAGE("Abra, that's enough! Come back!");
        else if (???)
            MESSAGE("Abra, come back!");
        else if (???)
            MESSAGE("Abra, OK! Come back!");
        else
            MESSAGE("Abra, good! Come back!");
    }
}*/
