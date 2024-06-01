#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Paralysis reduces Speed by 50%")
{
    u16 playerSpeed;
    bool32 playerFirst;
    PARAMETRIZE { playerSpeed = 98; playerFirst = FALSE; }
    PARAMETRIZE { playerSpeed = 102; playerFirst = TRUE; }
    GIVEN {
        ASSUME(B_PARALYSIS_SPEED >= GEN_7);
        PLAYER(SPECIES_ALAKAZAM) { Status1(STATUS1_PARALYSIS); Speed(playerSpeed); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); MOVE(opponent, MOVE_CELEBRATE); }
    } SCENE {
        if (playerFirst) {
            ONE_OF {
                MESSAGE("Alakazam used Celebrate!");
                MESSAGE("Alakazam is paralyzed! It can't move!");
            }
            MESSAGE("Foe Alakazam used Celebrate!");
        } else {
            MESSAGE("Foe Alakazam used Celebrate!");
            ONE_OF {
                MESSAGE("Alakazam used Celebrate!");
                MESSAGE("Alakazam is paralyzed! It can't move!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Paralysis has a 25% chance of skipping the turn")
{
    PASSES_RANDOMLY(25, 100, RNG_PARALYSIS);
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Status1(STATUS1_PARALYSIS); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        MESSAGE("Alakazam is paralyzed! It can't move!");
    }
}
