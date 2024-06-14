#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Snow Cloak prevents damage from hail")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Ability(ABILITY_SNOW_CLOAK); }
        OPPONENT(SPECIES_GLACEON);
    } WHEN {
        TURN;
    } SCENE {
        NONE_OF { HP_BAR(player); }
    }
}

SINGLE_BATTLE_TEST("Snow Cloak increases Sp. Def during hail", s16 damage)
{
    u32 ability;

    PARAMETRIZE{ ability = ABILITY_CRYOPHILIC; }
    PARAMETRIZE{ ability = ABILITY_SNOW_CLOAK; }
    GIVEN {
        PLAYER(SPECIES_GLACEON) { Ability(ability); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
        TURN { MOVE(opponent, MOVE_ROUND); }
    } SCENE {
        HP_BAR(player, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_GT(results[0].damage, results[1].damage);
    }
}
