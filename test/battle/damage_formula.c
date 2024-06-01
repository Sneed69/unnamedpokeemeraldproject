#include "global.h"
#include "test/battle.h"

// From https://bulbapedia.bulbagarden.net/wiki/Damage#Example

SINGLE_BATTLE_TEST("Damage calculations are correct (Base)")
{
    s16 dmg;
    s16 expectedDamage;
    PARAMETRIZE { expectedDamage = 136; }
    PARAMETRIZE { expectedDamage = 132; }
    PARAMETRIZE { expectedDamage = 132; }
    PARAMETRIZE { expectedDamage = 132; }
    PARAMETRIZE { expectedDamage = 132; }
    PARAMETRIZE { expectedDamage = 124; }
    PARAMETRIZE { expectedDamage = 124; }
    PARAMETRIZE { expectedDamage = 124; }
    PARAMETRIZE { expectedDamage = 124; }
    PARAMETRIZE { expectedDamage = 120; }
    PARAMETRIZE { expectedDamage = 120; }
    PARAMETRIZE { expectedDamage = 120; }
    PARAMETRIZE { expectedDamage = 120; }
    PARAMETRIZE { expectedDamage = 120; }
    PARAMETRIZE { expectedDamage = 112; }
    PARAMETRIZE { expectedDamage = 112; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ICE_FANG].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_GLACEON) { Attack(123); }
        OPPONENT(SPECIES_GARCHOMP) { Defense(163); Item(ITEM_ASPEAR_BERRY); }
    } WHEN {
        TURN {
            MOVE(player, MOVE_ICE_FANG, WITH_RNG(RNG_DAMAGE_MODIFIER, i));
        }
    }
    SCENE {
        MESSAGE("Glaceon used Ice Fang!");
        HP_BAR(opponent, captureDamage: &dmg);
    }
    THEN {
        EXPECT_EQ(expectedDamage, dmg);
    }
}

SINGLE_BATTLE_TEST("Damage calculations are correct (Muscle Band, crit)")
{
    s16 dmg;
    s16 expectedDamage;
    PARAMETRIZE { expectedDamage = 220; }
    PARAMETRIZE { expectedDamage = 216; }
    PARAMETRIZE { expectedDamage = 216; }
    PARAMETRIZE { expectedDamage = 208; }
    PARAMETRIZE { expectedDamage = 208; }
    PARAMETRIZE { expectedDamage = 208; }
    PARAMETRIZE { expectedDamage = 204; }
    PARAMETRIZE { expectedDamage = 204; }
    PARAMETRIZE { expectedDamage = 204; }
    PARAMETRIZE { expectedDamage = 196; }
    PARAMETRIZE { expectedDamage = 196; }
    PARAMETRIZE { expectedDamage = 192; }
    PARAMETRIZE { expectedDamage = 192; }
    PARAMETRIZE { expectedDamage = 192; }
    PARAMETRIZE { expectedDamage = 184; }
    PARAMETRIZE { expectedDamage = 184; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_ICE_FANG].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_GLACEON) { Attack(123); Item(ITEM_MUSCLE_BAND); }
        OPPONENT(SPECIES_GARCHOMP) { HP(300); Defense(163); Item(ITEM_ASPEAR_BERRY); }
    } WHEN {
        TURN {
            MOVE(player, MOVE_ICE_FANG, WITH_RNG(RNG_DAMAGE_MODIFIER, i), criticalHit: TRUE);
        }
    }
    SCENE {
        MESSAGE("Glaceon used Ice Fang!");
        HP_BAR(opponent, captureDamage: &dmg);
    }
    THEN {
        EXPECT_EQ(expectedDamage, dmg);
    }
}

/*SINGLE_BATTLE_TEST("Damage calculations are correct (Marshadow vs Mawile)")
{
    s16 dmg;
    s16 expectedDamage;
    PARAMETRIZE { expectedDamage = 145; }
    PARAMETRIZE { expectedDamage = 144; }
    PARAMETRIZE { expectedDamage = 142; }
    PARAMETRIZE { expectedDamage = 141; }
    PARAMETRIZE { expectedDamage = 139; }
    PARAMETRIZE { expectedDamage = 138; }
    PARAMETRIZE { expectedDamage = 136; }
    PARAMETRIZE { expectedDamage = 135; }
    PARAMETRIZE { expectedDamage = 133; }
    PARAMETRIZE { expectedDamage = 132; }
    PARAMETRIZE { expectedDamage = 130; }
    PARAMETRIZE { expectedDamage = 129; }
    PARAMETRIZE { expectedDamage = 127; }
    PARAMETRIZE { expectedDamage = 126; }
    PARAMETRIZE { expectedDamage = 124; }
    PARAMETRIZE { expectedDamage = 123; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_SPECTRAL_THIEF].category == DAMAGE_CATEGORY_PHYSICAL);
        PLAYER(SPECIES_MARSHADOW) { Level(100); Attack(286); }
        OPPONENT(SPECIES_MAWILE) { Level(100); Defense(226); HP(241); }
    } WHEN {
        TURN {
            MOVE(player, MOVE_SPECTRAL_THIEF, WITH_RNG(RNG_DAMAGE_MODIFIER, i), criticalHit: FALSE);
        }
    }
    SCENE{
        MESSAGE("Marshadow used Spectral Thief!");
        HP_BAR(opponent, captureDamage: &dmg);
    }
    THEN{
        EXPECT_EQ(expectedDamage, dmg);
    }
}*/
