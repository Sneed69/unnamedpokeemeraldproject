#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Inner Focus prevents intimidate")
{
    s16 turnOneHit;
    s16 turnTwoHit;

    GIVEN {
        ASSUME(B_UPDATED_INTIMIDATE >= GEN_8);
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_SHED_SKIN); };
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE); };
        OPPONENT(SPECIES_ZUBAT) { Ability(ABILITY_INNER_FOCUS); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
        TURN { SWITCH(player, 1); MOVE(opponent, MOVE_TACKLE); }

    } SCENE {
        HP_BAR(player, captureDamage: &turnOneHit);
        ABILITY_POPUP(player, ABILITY_INTIMIDATE);
        NONE_OF { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player); }
        ABILITY_POPUP(opponent, ABILITY_INNER_FOCUS);
        MESSAGE("Foe Zubat's Inner Focus prevents stat loss!");
        HP_BAR(player, captureDamage: &turnTwoHit);
    } THEN {
        EXPECT_EQ(turnOneHit, turnTwoHit);
    }
}

SINGLE_BATTLE_TEST("Inner Focus prevents flinching")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ZUBAT) { Ability(ABILITY_INNER_FOCUS); };
    } WHEN {
        TURN { MOVE(player, MOVE_FAKE_OUT);
               MOVE(opponent, MOVE_TACKLE);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FAKE_OUT, player);
        NONE_OF { MESSAGE("Foe Zubat flinched!"); }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
    }
}

SINGLE_BATTLE_TEST("Inner Focus is ignored by Mold Breaker")
{
    GIVEN {
        PLAYER(SPECIES_PINSIR) { Ability(ABILITY_MOLD_BREAKER); };
        OPPONENT(SPECIES_ZUBAT) { Ability(ABILITY_INNER_FOCUS); };
    } WHEN {
        TURN { MOVE(player, MOVE_FAKE_OUT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FAKE_OUT, player);
        MESSAGE("Foe Zubat flinched!");
    }
}

SINGLE_BATTLE_TEST("Inner Focus prevents self stat drops")
{
    u32 move;

    PARAMETRIZE { move = MOVE_V_CREATE; }
    PARAMETRIZE { move = MOVE_CURSE; }
    PARAMETRIZE { move = MOVE_CLOSE_COMBAT; }
    PARAMETRIZE { move = MOVE_TOPPLE_PSYCHE; }
    PARAMETRIZE { move = MOVE_DRACO_METEOR; }
    PARAMETRIZE { move = MOVE_HAMMER_ARM; }
    PARAMETRIZE { move = MOVE_SUPERPOWER; }

    GIVEN {
        OPPONENT(SPECIES_ALAKAZAM) { HP(500); }
        PLAYER(SPECIES_DRAGONITE) { Ability(ABILITY_INNER_FOCUS); };
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        ABILITY_POPUP(player, ABILITY_INNER_FOCUS);
        MESSAGE("Dragonite's Inner Focus prevents lowering its own stats!");
        NOT ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
    } THEN {
        int i;

        for (i = STAT_ATK; i < NUM_STATS; i++)
        {
            EXPECT_GE(player->statStages[i], DEFAULT_STAT_STAGE);
        }
    }
}