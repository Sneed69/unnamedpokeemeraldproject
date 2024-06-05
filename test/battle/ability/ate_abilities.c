#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TACKLE].type == TYPE_NORMAL);
    ASSUME(gMovesInfo[MOVE_TACKLE].power > 0);
}

SINGLE_BATTLE_TEST("Galvanize can not turn certain moves into Electric type moves")
{
    u32 move;

    PARAMETRIZE { move = MOVE_HIDDEN_POWER; }
    PARAMETRIZE { move = MOVE_WEATHER_BALL; }
    PARAMETRIZE { move = MOVE_MULTI_ATTACK; }

    ASSUME(gMovesInfo[MOVE_HIDDEN_POWER].effect == EFFECT_HIDDEN_POWER);
    ASSUME(gMovesInfo[MOVE_WEATHER_BALL].effect == EFFECT_WEATHER_BALL);
    ASSUME(gMovesInfo[MOVE_MULTI_ATTACK].effect == EFFECT_CHANGE_TYPE_ON_ITEM);
    GIVEN {
        PLAYER(SPECIES_CORPHISH);
        OPPONENT(SPECIES_GEODUDE) { Ability(ABILITY_GALVANIZE); }
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        NOT MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Galvanize turns a normal type move into Electric")
{
    GIVEN {
        PLAYER(SPECIES_CORPHISH);
        OPPONENT(SPECIES_GEODUDE) { Ability(ABILITY_GALVANIZE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Pixilate turns a normal type move into Fairy")
{
    GIVEN {
        PLAYER(SPECIES_DRAGONITE);
        OPPONENT(SPECIES_ALTARIA) { Ability(ABILITY_PIXILATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Refrigerate turns a normal type move into Ice")
{
    GIVEN {
        PLAYER(SPECIES_MEGANIUM);
        OPPONENT(SPECIES_AMAURA) { Ability(ABILITY_REFRIGERATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}

SINGLE_BATTLE_TEST("Aerilate turns a normal type move into Flying")
{
    GIVEN {
        PLAYER(SPECIES_MEGANIUM);
        OPPONENT(SPECIES_SALAMENCE) { Ability(ABILITY_AERILATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        MESSAGE("It's super effective!");
    }
}
