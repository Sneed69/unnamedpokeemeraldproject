#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_STONE_AXE, MOVE_EFFECT_STEALTH_ROCK) == TRUE);
}

SINGLE_BATTLE_TEST("Stone Axe sets up hazards after hitting the target")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        MESSAGE("Pointed stones float in the air around the opposing team!");
        MESSAGE("2 sent out Alakazam!");
        HP_BAR(opponent, damage: maxHP / B_STEALTH_ROCK_HP_FRACTION);
        MESSAGE("Pointed stones dug into Foe Alakazam!");
    }
}

SINGLE_BATTLE_TEST("Stone Axe can set up pointed stones only once")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Defense(300); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { MOVE(player, MOVE_STONE_AXE); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        s32 maxHP = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        MESSAGE("Pointed stones float in the air around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        NOT MESSAGE("Pointed stones float in the air around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        NOT MESSAGE("Pointed stones float in the air around the opposing team!");

        ANIMATION(ANIM_TYPE_MOVE, MOVE_STONE_AXE, player);
        HP_BAR(opponent);
        NOT MESSAGE("Pointed stones float in the air around the opposing team!");

        MESSAGE("2 sent out Abra!");
        HP_BAR(opponent, damage: maxHP / B_STEALTH_ROCK_HP_FRACTION );
        MESSAGE("Pointed stones dug into Foe Abra!");
    }
}

