#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Flawless Creation recovers 1/16th of max HP at the end of each turn")
{
    GIVEN {
        PLAYER(SPECIES_LUDICOLO) { Ability(ABILITY_FLAWLESS_CREATION); HP(1); MaxHP(100); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN;
    } SCENE {
        ABILITY_POPUP(player, ABILITY_FLAWLESS_CREATION);
        MESSAGE("Ludicolo's Flawless Creation restored its HP a little!");
        HP_BAR(player, damage: -(100 / 16));
    }
}
