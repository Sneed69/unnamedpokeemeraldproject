#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Swarm boosts Bug-type moves based on missing HP", s16 damage)
{
    u16 hp;
    PARAMETRIZE { hp = 99; }
    PARAMETRIZE { hp = 66; }
    PARAMETRIZE { hp = 33; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_BUG_BITE].type == TYPE_BUG);
        ASSUME(gMovesInfo[MOVE_BUG_BITE].power == 60);
        ASSUME(gMovesInfo[MOVE_BUG_BITE].category == DAMAGE_CATEGORY_PHYSICAL);
        ASSUME(gSpeciesInfo[SPECIES_WURMPLE].types[0] == TYPE_BUG);
        ASSUME(gSpeciesInfo[SPECIES_ALAKAZAM].types[0] == TYPE_PSYCHIC);
        ASSUME(gSpeciesInfo[SPECIES_ALAKAZAM].types[1] == TYPE_PSYCHIC);
        PLAYER(SPECIES_WURMPLE) { Ability(ABILITY_SWARM); MaxHP(99); HP(hp); Attack(45); }
        OPPONENT(SPECIES_ALAKAZAM) { Defense(121); }
    } WHEN {
        TURN { MOVE(player, MOVE_BUG_BITE); }
    } SCENE {
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_LT(results[0].damage, results[1].damage);
        EXPECT_LT(results[1].damage, results[2].damage);
    }
}
