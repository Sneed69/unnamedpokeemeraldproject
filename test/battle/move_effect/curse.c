#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_CURSE].effect == EFFECT_CURSE);
}

SINGLE_BATTLE_TEST("Curse lowers Speed, raises Attack, and raises Defense when used by non-Ghost-types")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CURSE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
        MESSAGE("Alakazam's Speed fell!");
        MESSAGE("Alakazam's Attack rose!");
        MESSAGE("Alakazam's Defense rose!");
    }
}

SINGLE_BATTLE_TEST("Curse cuts the user's HP in half when used by Ghost-types")
{
    GIVEN {
        PLAYER(SPECIES_MISDREAVUS);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_CURSE); }
    } SCENE {
        s32 maxHP = GetMonData(&PLAYER_PARTY[0], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CURSE, player);
        if (maxHP % 2 == 0)
            HP_BAR(player, hp: maxHP / 2);
        else
            HP_BAR(player, hp: maxHP / 2 + 1);
    }
}
