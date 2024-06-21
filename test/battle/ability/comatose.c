#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Comatose prevents status-inducing moves")
{
    u32 move;

    PARAMETRIZE { move = MOVE_TOXIC; }
    PARAMETRIZE { move = MOVE_POISONPOWDER; }
    PARAMETRIZE { move = MOVE_SLEEP_POWDER; }
    PARAMETRIZE { move = MOVE_THUNDER_WAVE; }

    GIVEN {
        PLAYER(SPECIES_LINOONE) { Ability(ABILITY_COMATOSE); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        MESSAGE("Linoone is drowsing!");

        NOT ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        ABILITY_POPUP(player, ABILITY_COMATOSE);
        MESSAGE("It doesn't affect Linoone…");
    }
}

/*SINGLE_BATTLE_TEST("Comatose may be suppressed if pokemon transformed into a pokemon with Comatose ability and was under the effects of Gastro Acid")
{
    u32 move;

    PARAMETRIZE { move = MOVE_TOXIC; }
    PARAMETRIZE { move = MOVE_POISONPOWDER; }
    PARAMETRIZE { move = MOVE_SLEEP_POWDER; }
    PARAMETRIZE { move = MOVE_THUNDER_WAVE; }

    GIVEN {
        PLAYER(SPECIES_LINOONE) { Ability(ABILITY_COMATOSE); Speed(30); }
        OPPONENT(SPECIES_DITTO) { Speed(20); }
    } WHEN {
        TURN { MOVE(player, MOVE_GASTRO_ACID); MOVE(opponent, MOVE_TRANSFORM); }
        TURN { MOVE(player, move); }
    } SCENE {
        MESSAGE("Linoone is drowsing!");
        MESSAGE("Linoone used Gastro Acid!");
        MESSAGE("Foe Ditto used Transform!");
        MESSAGE("Foe Ditto transformed into Linoone!");

        ANIMATION(ANIM_TYPE_MOVE, move, player);
        if (move == MOVE_POISONPOWDER)      { STATUS_ICON(opponent, poison: TRUE); }
        else if (move == MOVE_TOXIC)        { STATUS_ICON(opponent, badPoison: TRUE); }
        else if (move == MOVE_THUNDER_WAVE) { STATUS_ICON(opponent, paralysis: TRUE); }
        else if (move == MOVE_SLEEP_POWDER) { STATUS_ICON(opponent, sleep: TRUE); }
    }
}*/
