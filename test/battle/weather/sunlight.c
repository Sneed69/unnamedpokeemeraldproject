#include "global.h"
#include "test/battle.h"

// Please add Sunlight interactions with move, item and ability effects on their respective files.
ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_EMBER].type == TYPE_FIRE);
    ASSUME(gMovesInfo[MOVE_WATER_GUN].type == TYPE_WATER);
}

SINGLE_BATTLE_TEST("Sunlight multiplies the power of Fire-type moves by 1.5x", s16 damage)
{
    u32 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY; }
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
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sunlight multiplies the power of Water-type moves by 0.5x", s16 damage)
{
    u32 setupMove;
    PARAMETRIZE { setupMove = MOVE_CELEBRATE; }
    PARAMETRIZE { setupMove = MOVE_SUNNY_DAY; }
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
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(0.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Sunny Day fails if Primordial Sea is active")
{
    u32 ability;

    PARAMETRIZE { ability = ABILITY_WATER_ABSORB; }
    PARAMETRIZE { ability = ABILITY_PRIMORDIAL_SEA; }

    GIVEN {
        PLAYER(SPECIES_KYOGRE) { Ability(ability); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); }
    } SCENE {
        if (ability == ABILITY_PRIMORDIAL_SEA) {
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNNY_DAY, opponent);
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNNY_DAY, opponent);
        }
    }
}
