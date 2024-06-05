#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Magician does not get self-damage recoil after stealing Life Orb")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_LIFE_ORB].holdEffect == HOLD_EFFECT_LIFE_ORB);
        ASSUME(gMovesInfo[MOVE_TACKLE].power != 0);
        PLAYER(SPECIES_NINETALES) { Ability(ABILITY_MAGICIAN); Item(ITEM_NONE); }
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_LIFE_ORB); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        // 1st turn
        MESSAGE("Ninetales used Tackle!");
        ABILITY_POPUP(player, ABILITY_MAGICIAN);
        MESSAGE("Ninetales stole Foe Alakazam's Life Orb!");
        NONE_OF {
            HP_BAR(player);
            MESSAGE("Ninetales was hurt by its Life Orb!");
        }
        // 2nd turn - Life Orb recoil happens now
        MESSAGE("Ninetales used Tackle!");
        HP_BAR(player);
        MESSAGE("Ninetales was hurt by its Life Orb!");
    }
}

