#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TAILWIND].effect == EFFECT_TAILWIND);
}

SINGLE_BATTLE_TEST("Tailwind applies for 4 turns")
{
    GIVEN {
        ASSUME(B_TAILWIND_TURNS >= GEN_5);
        PLAYER(SPECIES_ALAKAZAM) { Speed(10); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(15); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_TAILWIND); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Foe Alakazam used Celebrate!");
        MESSAGE("Alakazam used Tailwind!");

        MESSAGE("Alakazam used Celebrate!");
        MESSAGE("Foe Alakazam used Celebrate!");

        MESSAGE("Alakazam used Celebrate!");
        MESSAGE("Foe Alakazam used Celebrate!");

        MESSAGE("Alakazam used Celebrate!");
        MESSAGE("Foe Alakazam used Celebrate!");

        MESSAGE("Foe Alakazam used Celebrate!");
        MESSAGE("Alakazam used Celebrate!");
    }
}

DOUBLE_BATTLE_TEST("Tailwind affects partner on first turn")
{
    GIVEN {
        ASSUME(B_RECALC_TURN_AFTER_ACTIONS);
        PLAYER(SPECIES_ALAKAZAM) { Speed(20); }
        PLAYER(SPECIES_ABRA) { Speed(10); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(15); }
        OPPONENT(SPECIES_ABRA) { Speed(14); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_TAILWIND); }
    } SCENE {
        MESSAGE("Alakazam used Tailwind!");
        MESSAGE("Abra used Celebrate!");
        MESSAGE("Foe Alakazam used Celebrate!");
        MESSAGE("Foe Abra used Celebrate!");
    }
}
