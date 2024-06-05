#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Frisk does not trigger when pokemon hold no items")
{
    GIVEN {
        PLAYER(SPECIES_YANMA) { Ability(ABILITY_FRISK); };
        PLAYER(SPECIES_YANMA) { Ability(ABILITY_FRISK); };
        OPPONENT(SPECIES_YANMEGA) { Ability(ABILITY_FRISK); };
        OPPONENT(SPECIES_YANMEGA) { Ability(ABILITY_FRISK); };
    } WHEN {
        TURN { ; }
    } SCENE {
        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_FRISK);
            ABILITY_POPUP(playerRight, ABILITY_FRISK);
            ABILITY_POPUP(opponentLeft, ABILITY_FRISK);
            ABILITY_POPUP(opponentRight, ABILITY_FRISK);
        }
    }
}

SINGLE_BATTLE_TEST("Frisk triggers in a Single Battle")
{
    GIVEN {
        PLAYER(SPECIES_YANMA) { Ability(ABILITY_FRISK); Item(ITEM_POTION); };
        OPPONENT(SPECIES_YANMEGA) { Ability(ABILITY_FRISK); Item(ITEM_POTION); };
    } WHEN {
        TURN { ; }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_FRISK);
        MESSAGE("Yanma frisked Foe Yanmega and disabled its Potion!");
        ABILITY_POPUP(opponent, ABILITY_FRISK);
        MESSAGE("Foe Yanmega frisked Yanma and disabled its Potion!");
    }
}

DOUBLE_BATTLE_TEST("Frisk triggers for player in a Double Battle after switching-in after fainting")
{
    struct BattlePokemon *target = NULL;
    PARAMETRIZE { target = playerLeft; }
    PARAMETRIZE { target = playerRight; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_POUND].power != 0);
        PLAYER(SPECIES_ALAKAZAM) { HP(1); }
        PLAYER(SPECIES_ALAKAZAM) { HP(1); }
        PLAYER(SPECIES_YANMA) { Ability(ABILITY_FRISK); };
        OPPONENT(SPECIES_ABRA) { Item(ITEM_POTION); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_POUND, target: target); SEND_OUT(target, 2); }
    } SCENE {
        MESSAGE("Foe Abra used Pound!");
        MESSAGE("Alakazam fainted!");
        ABILITY_POPUP(target, ABILITY_FRISK);
        MESSAGE("Yanma frisked Foe Abra and disabled its Potion!");
    }
}

DOUBLE_BATTLE_TEST("Frisk triggers for opponent in a Double Battle after switching-in after fainting")
{
    struct BattlePokemon *target = NULL;
    PARAMETRIZE { target = opponentLeft; }
    PARAMETRIZE { target = opponentRight; }

    GIVEN {
        ASSUME(gMovesInfo[MOVE_POUND].power != 0);
        PLAYER(SPECIES_ABRA) { Item(ITEM_POTION); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM) { HP(1); }
        OPPONENT(SPECIES_ALAKAZAM) { HP(1); }
        OPPONENT(SPECIES_YANMA) { Ability(ABILITY_FRISK); };
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_POUND, target: target); SEND_OUT(target, 2); }
    } SCENE {
        MESSAGE("Abra used Pound!");
        MESSAGE("Foe Alakazam fainted!");
        ABILITY_POPUP(target, ABILITY_FRISK);
        MESSAGE("Foe Yanma frisked Abra and disabled its Potion!");
    }
}
