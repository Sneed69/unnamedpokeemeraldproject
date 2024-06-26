#include "global.h"
#include "test/battle.h"

SINGLE_BATTLE_TEST("Frostbite reduces the special attack by 50 percent")
{
    s16 reducedDamage;
    s16 normalDamage;

    GIVEN {
        ASSUME(gMovesInfo[MOVE_SWIFT].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Status1(STATUS1_FROSTBITE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SWIFT); MOVE(player, MOVE_FLAME_WHEEL); }
        TURN { MOVE(opponent, MOVE_SWIFT); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWIFT, opponent);
        HP_BAR(player, captureDamage: &reducedDamage);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FLAME_WHEEL, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SWIFT, opponent);
        HP_BAR(player, captureDamage: &normalDamage);
   } THEN { EXPECT_MUL_EQ(reducedDamage, UQ_4_12(2.0), normalDamage); }
}

SINGLE_BATTLE_TEST("Frostbite deals 1/16 damage to effected pokemon")
{
    s16 frostbiteDamage;

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Status1(STATUS1_FROSTBITE); }
    } WHEN {
        TURN {}
    } SCENE {
        MESSAGE("Foe Alakazam is hurt by its frostbite!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
        HP_BAR(opponent, captureDamage: &frostbiteDamage);
   } THEN { EXPECT_EQ(frostbiteDamage, opponent->maxHP / 16); }
}

SINGLE_BATTLE_TEST("Frostbite is healed if hit with a thawing move")
{
    u32 move;

    PARAMETRIZE { move = MOVE_FLAME_WHEEL; }
    PARAMETRIZE { move = MOVE_SACRED_FIRE; }
    PARAMETRIZE { move = MOVE_FLARE_BLITZ; }
    PARAMETRIZE { move = MOVE_FUSION_FLARE; }
    PARAMETRIZE { move = MOVE_EMBER; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Status1(STATUS1_FROSTBITE); }
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        if (move == MOVE_EMBER) {
            NONE_OF {
                MESSAGE("Foe Alakazam's frostbite was healed!");
            }
        } else {
            MESSAGE("Foe Alakazam's frostbite was healed!");
        }
   }
}

SINGLE_BATTLE_TEST("Frostbite is healed when the user uses a thawing move")
{
    u32 move;

    PARAMETRIZE { move = MOVE_FLAME_WHEEL; }
    PARAMETRIZE { move = MOVE_SACRED_FIRE; }
    PARAMETRIZE { move = MOVE_FLARE_BLITZ; }
    PARAMETRIZE { move = MOVE_FUSION_FLARE; }
    PARAMETRIZE { move = MOVE_EMBER; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Status1(STATUS1_FROSTBITE); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent);
        if (move == MOVE_EMBER) {
            MESSAGE("Alakazam is hurt by its frostbite!");
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, player);
        } else {
            NONE_OF {
                MESSAGE("Alakazam is hurt by its frostbite!");
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, player);
            }
        }
   }
}
