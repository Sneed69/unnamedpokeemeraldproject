#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Hydration cures non-volatile Status conditions and restores HP if it is raining")
{
    GIVEN {
        PLAYER(SPECIES_VAPOREON) { HP(1); Ability(ABILITY_HYDRATION); Status1(STATUS1_FROSTBITE); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_RAIN_DANCE); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_HYDRATION);
        MESSAGE("Vaporeon's Hydration restored its HP!");
        MESSAGE("Vaporeon's Hydration cured its frostbite problem!");
        STATUS_ICON(player, none: TRUE);
    }
}
