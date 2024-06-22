#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Mold Breaker does not ignore the attacker's own abilities", s16 damage)
{
    u32 innate;

    PARAMETRIZE { innate = ABILITY_SAND_RUSH; }
    PARAMETRIZE { innate = ABILITY_MOLD_BREAKER; }
    
    ASSUME(gAbilitiesInfo[ABILITY_UNAWARE].breakable);
    ASSUME(gMovesInfo[MOVE_IRON_DEFENSE].effect == EFFECT_DEFENSE_UP_2);

    GIVEN {
        PLAYER(SPECIES_EXCADRILL) { Speed(1); Innate(innate); Ability(ABILITY_UNAWARE); }
        OPPONENT(SPECIES_BLASTOISE) { Speed(2); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_IRON_DEFENSE); MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_EQ(results[0].damage, results[1].damage);
    }
}
