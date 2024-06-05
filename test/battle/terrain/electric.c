#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Electric Terrain protects battlers from falling asleep")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_CLAYDOL) { Ability(ABILITY_LEVITATE); }
    } WHEN {
        TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); MOVE(opponent, MOVE_SPORE); }
        TURN { MOVE(player, MOVE_SPORE); }
    } SCENE {
        MESSAGE("Alakazam used Electrifying Aura!");
        MESSAGE("Foe Claydol used Spore!");
        MESSAGE("The electrifying aura prevents sleep!");
        MESSAGE("Alakazam used Spore!");
        MESSAGE("The electrifying aura prevents sleep!");
        NONE_OF { STATUS_ICON(opponent, sleep: TRUE); }
    }
}

SINGLE_BATTLE_TEST("Electric Terrain activates Electric Seed and Mimicry")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_ELECTRIC_SEED].holdEffect == HOLD_EFFECT_SEEDS);
        ASSUME(gItemsInfo[ITEM_ELECTRIC_SEED].holdEffectParam == HOLD_EFFECT_PARAM_ELECTRIC_TERRAIN);
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_ELECTRIC_SEED); }
        OPPONENT(SPECIES_PIKACHU) { Ability(ABILITY_MIMICRY); }
    } WHEN {
        TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        MESSAGE("Using Electric Seed, the Defense of Alakazam rose!");
        ABILITY_POPUP(opponent);
        MESSAGE("Foe Pikachu's type changed to Electric!");
    } THEN {
        EXPECT_EQ(gBattleMons[B_POSITION_OPPONENT_LEFT].type1, TYPE_ELECTRIC);
    }
}

SINGLE_BATTLE_TEST("Electric Terrain increases power of Electric-type moves by 30/50 percent", s16 damage)
{
    bool32 terrain;
    PARAMETRIZE { terrain = FALSE; }
    PARAMETRIZE { terrain = TRUE; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        if (terrain)
            TURN { MOVE(player, MOVE_ELECTRIC_TERRAIN); }
        TURN { MOVE(player, MOVE_THUNDER_SHOCK); }
    } SCENE {
        MESSAGE("Alakazam used Thunder Shock!");
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        if (B_TERRAIN_TYPE_BOOST >= GEN_8)
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.3), results[1].damage);
        else
            EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Electric Terrain lasts for 5 turns")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_CELEBRATE); MOVE(player, MOVE_ELECTRIC_TERRAIN); }
        TURN {}
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Foe Alakazam used Celebrate!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ELECTRIC_TERRAIN, player);
        MESSAGE("An electrifying aura envelops the battlefield!");

        MESSAGE("Alakazam used Celebrate!");
        MESSAGE("Foe Alakazam used Celebrate!");

        MESSAGE("Alakazam used Celebrate!");
        MESSAGE("Foe Alakazam used Celebrate!");

        MESSAGE("Alakazam used Celebrate!");
        MESSAGE("Foe Alakazam used Celebrate!");

        MESSAGE("The electrifying aura disappeared.");
    }
}
