#include "global.h"
#include "test/battle.h"

// Please add Rain interactions with move, item and ability effects on their respective files.
ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_EMBER].type == TYPE_FIRE);
    ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
}

SINGLE_BATTLE_TEST("Rain multiplies the power of Fire-type moves by 0.5x", s16 damage)
{
    u32 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_RAIN_DANCE; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_EMBER); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Rain multiplies the power of Water-type moves by 1.5x", s16 damage)
{
    u32 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_RAIN_DANCE; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, setupMove); }
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Drizzle fails if Desolate Land is active")
{
    u32 ability;

    PARAMETRIZE { ability = ABILITY_NONE; }
    PARAMETRIZE { ability = ABILITY_DESOLATE_LAND; }

    GIVEN {
        PLAYER(SPECIES_GROUDON) { Ability(ability); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_RAIN_DANCE); }
    } SCENE {
        if (ability == ABILITY_DESOLATE_LAND) {
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_RAIN_DANCE, opponent);
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_RAIN_DANCE, opponent);
        }
    }
}
