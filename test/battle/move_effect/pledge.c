#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_WATER_PLEDGE].effect == EFFECT_PLEDGE);
    ASSUME(gMovesInfo[MOVE_FIRE_PLEDGE].effect == EFFECT_PLEDGE);
    ASSUME(gMovesInfo[MOVE_GRASS_PLEDGE].effect == EFFECT_PLEDGE);
}

DOUBLE_BATTLE_TEST("Water and Fire Pledge create a rainbow on the user's side of the field for four turns")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(8); }
        OPPONENT(SPECIES_ABRA) { Speed(5); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WATER_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_FIRE_PLEDGE, target: opponentRight);
        }
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Alakazam used Water Pledge!");
        MESSAGE("Alakazam is waiting for Abra's move…{PAUSE 16}");
        MESSAGE("Abra used Fire Pledge!");
        MESSAGE("The two moves become one! It's a combined move!{PAUSE 16}");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_PLEDGE, playerRight);
        HP_BAR(opponentRight);
        MESSAGE("A rainbow appeared in the sky on your team's side!");
        MESSAGE("The rainbow on your side disappeared!");
    }
}

DOUBLE_BATTLE_TEST("Rainbow doubles the chance of secondary move effects")
{
    PASSES_RANDOMLY(20, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_EMBER, MOVE_EFFECT_BURN) == TRUE);
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(8); }
        OPPONENT(SPECIES_ABRA) { Speed(5); HP(400); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WATER_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_FIRE_PLEDGE, target: opponentRight);
        }
        TURN { MOVE(playerLeft, MOVE_EMBER, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_PLEDGE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EMBER, playerLeft);
        MESSAGE("Foe Abra was burned!");
    }
}

DOUBLE_BATTLE_TEST("Rainbow flinch chance does not stack with Serene Grace")
{
    PASSES_RANDOMLY(60, 100, RNG_SECONDARY_EFFECT);
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(MOVE_BITE, MOVE_EFFECT_FLINCH) == TRUE);
        PLAYER(SPECIES_TOGEPI) { Speed(8); Ability(ABILITY_SERENE_GRACE); }
        PLAYER(SPECIES_ALAKAZAM) { Speed(5); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(4); }
        OPPONENT(SPECIES_ABRA) { Speed(3); HP(300); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WATER_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_FIRE_PLEDGE, target: opponentRight);
        }
        TURN { MOVE(playerLeft, MOVE_BITE, target: opponentRight); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_PLEDGE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_BITE, playerLeft);
        MESSAGE("Foe Abra flinched!");
    }
}

DOUBLE_BATTLE_TEST("Fire and Grass Pledge summons Sea Of Fire for four turns that damages the opponent")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(8); }
        OPPONENT(SPECIES_ABRA) { Speed(5); HP(400); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FIRE_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_GRASS_PLEDGE, target: opponentRight);
        }
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Alakazam used Fire Pledge!");
        MESSAGE("Alakazam is waiting for Abra's move…{PAUSE 16}");
        MESSAGE("Abra used Grass Pledge!");
        MESSAGE("The two moves become one! It's a combined move!{PAUSE 16}");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIRE_PLEDGE, playerRight);
        HP_BAR(opponentRight);
        MESSAGE("A sea of fire enveloped the opposing team!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_SEA_OF_FIRE, opponentRight);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentLeft);
        MESSAGE("The opposing Foe Alakazam was hurt by the sea of fire!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentRight);
        MESSAGE("The opposing Foe Abra was hurt by the sea of fire!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentLeft);
        MESSAGE("The opposing Foe Alakazam was hurt by the sea of fire!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentRight);
        MESSAGE("The opposing Foe Abra was hurt by the sea of fire!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentLeft);
        MESSAGE("The opposing Foe Alakazam was hurt by the sea of fire!");
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_BRN, opponentRight);
        MESSAGE("The opposing Foe Abra was hurt by the sea of fire!");
        MESSAGE("The sea of fire around the opposing team disappeared!");
    }
}

DOUBLE_BATTLE_TEST("Sea Of Fire deals 1/8th damage per turn")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(8); }
        OPPONENT(SPECIES_ABRA) { Speed(5); HP(400); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FIRE_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_GRASS_PLEDGE, target: opponentRight);
        }
    } SCENE {
        s32 maxHPopponentLeft = GetMonData(&OPPONENT_PARTY[0], MON_DATA_MAX_HP);
        s32 maxHPopponentRight = GetMonData(&OPPONENT_PARTY[1], MON_DATA_MAX_HP);
        HP_BAR(opponentLeft, damage: maxHPopponentLeft / 8);
        HP_BAR(opponentRight, damage: maxHPopponentRight / 8);
    }
}

DOUBLE_BATTLE_TEST("Grass and Water Pledge create a swamp on the user's side of the field for four turns")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(8); }
        OPPONENT(SPECIES_ABRA) { Speed(5); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_GRASS_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_WATER_PLEDGE, target: opponentRight);
        }
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        MESSAGE("Alakazam used Grass Pledge!");
        MESSAGE("Alakazam is waiting for Abra's move…{PAUSE 16}");
        MESSAGE("Abra used Water Pledge!");
        MESSAGE("The two moves become one! It's a combined move!{PAUSE 16}");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GRASS_PLEDGE, playerRight);
        HP_BAR(opponentRight);
        MESSAGE("A swamp enveloped the opposing team!");
        MESSAGE("The swamp around the opposing team disappeared!");
    }
}

DOUBLE_BATTLE_TEST("Swamp reduces the speed of the effected side by 1/4th")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(5); }
        PLAYER(SPECIES_ABRA) { Speed(4); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(12); }
        OPPONENT(SPECIES_ABRA) { Speed(8); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_GRASS_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_WATER_PLEDGE, target: opponentRight);
        }
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GRASS_PLEDGE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentLeft);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CELEBRATE, opponentRight);
    }
}

DOUBLE_BATTLE_TEST("The base power of a combined pledge move effect is 150")
{
    s16 hyperBeamDamage;
    s16 combinedPledgeDamage;

    GIVEN {
        ASSUME(gMovesInfo[MOVE_CHLOROBLAST].power == 150);
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(8); }
        OPPONENT(SPECIES_ABRA) { Speed(5); Ability(ABILITY_MAGIC_GUARD); }
    } WHEN {
        TURN { MOVE(opponentRight, MOVE_CHLOROBLAST, target: playerRight);
               MOVE(playerLeft, MOVE_WATER_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_FIRE_PLEDGE, target: opponentRight);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHLOROBLAST, opponentRight);
        HP_BAR(playerRight, captureDamage: &hyperBeamDamage);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_PLEDGE, playerRight);
        HP_BAR(opponentRight, captureDamage: &combinedPledgeDamage);
    } THEN {
        EXPECT_EQ(hyperBeamDamage, combinedPledgeDamage);
    }
}

DOUBLE_BATTLE_TEST("Pledge moves can not be redirected by absorbing abilities")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_LILEEP) { Ability(ABILITY_STORM_DRAIN); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_WATER_PLEDGE, target: opponentRight);}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_PLEDGE, playerLeft);
        HP_BAR(opponentRight);
    }
}

DOUBLE_BATTLE_TEST("Pledge status timer does not reset if combined move is used again")
{
    u16 pledgeMove1, pledgeMove2;

    PARAMETRIZE { pledgeMove1 = MOVE_WATER_PLEDGE; pledgeMove2 = MOVE_FIRE_PLEDGE; }
    PARAMETRIZE { pledgeMove1 = MOVE_FIRE_PLEDGE; pledgeMove2 = MOVE_GRASS_PLEDGE; }
    PARAMETRIZE { pledgeMove1 = MOVE_GRASS_PLEDGE; pledgeMove2 = MOVE_WATER_PLEDGE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(8); }
        OPPONENT(SPECIES_ABRA) { Speed(5); }
    } WHEN {
        TURN { MOVE(playerLeft, pledgeMove1, target: opponentLeft);
               MOVE(playerRight, pledgeMove2, target: opponentRight);
        }
        TURN { MOVE(playerLeft, pledgeMove1, target: opponentLeft);
               MOVE(playerRight, pledgeMove2, target: opponentRight);
        }
        TURN {}
        TURN {}
        TURN {}
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, pledgeMove1, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, pledgeMove1, playerRight);
        if (pledgeMove1 == MOVE_WATER_PLEDGE && pledgeMove2 == MOVE_FIRE_PLEDGE)
        {
            NOT MESSAGE("A rainbow appeared in the sky on your team's side!");
            MESSAGE("The rainbow on your side disappeared!");
        }
        if (pledgeMove1 == MOVE_FIRE_PLEDGE && pledgeMove2 == MOVE_GRASS_PLEDGE)
        {
            NOT MESSAGE("A sea of fire enveloped the opposing team!");
            MESSAGE("The sea of fire around the opposing team disappeared!");
        }
        if (pledgeMove1 == MOVE_GRASS_PLEDGE && pledgeMove2 == MOVE_WATER_PLEDGE)
        {
            NOT MESSAGE("A swamp enveloped the opposing team!");
            MESSAGE("The swamp around the opposing team disappeared!");
        }
    }
}

DOUBLE_BATTLE_TEST("Pledge moves get same attack type bonus from partner", s16 damage)
{
    u32 species;

    PARAMETRIZE { species = SPECIES_ALAKAZAM; }
    PARAMETRIZE { species = SPECIES_CHARMANDER; }

    GIVEN {
        PLAYER(species) { Speed(4); }
        PLAYER(SPECIES_ABRA) { Speed(3); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(8); }
        OPPONENT(SPECIES_ABRA) { Speed(5); HP(200); }
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_FIRE_PLEDGE, target: opponentLeft);
               MOVE(playerRight, MOVE_GRASS_PLEDGE, target: opponentRight);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FIRE_PLEDGE, playerRight);
        HP_BAR(opponentRight, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

/*
DOUBLE_BATTLE_TEST("Damage calculation: Combined pledge move")
{
    s16 dmg;
    s16 expectedDamage;
    PARAMETRIZE { expectedDamage = 159; }
    PARAMETRIZE { expectedDamage = 156; }
    PARAMETRIZE { expectedDamage = 154; }
    PARAMETRIZE { expectedDamage = 153; }
    PARAMETRIZE { expectedDamage = 151; }
    PARAMETRIZE { expectedDamage = 150; }
    PARAMETRIZE { expectedDamage = 148; }
    PARAMETRIZE { expectedDamage = 147; }
    PARAMETRIZE { expectedDamage = 145; }
    PARAMETRIZE { expectedDamage = 144; }
    PARAMETRIZE { expectedDamage = 142; }
    PARAMETRIZE { expectedDamage = 141; }
    PARAMETRIZE { expectedDamage = 139; }
    PARAMETRIZE { expectedDamage = 138; }
    PARAMETRIZE { expectedDamage = 136; }
    PARAMETRIZE { expectedDamage = 135; }
    GIVEN {
        ASSUME(gMovesInfo[MOVE_GRASS_PLEDGE].category == DAMAGE_CATEGORY_SPECIAL);
        PLAYER(SPECIES_ALAKAZAM) { Speed(4); }
        PLAYER(SPECIES_ALAKAZAM) { HP(521); SpDefense(152); Speed(3); }
        OPPONENT(SPECIES_CHARIZARD) { Speed(8); }
        OPPONENT(SPECIES_EEVEE) { SpAttack(126); Speed(5); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_FIRE_PLEDGE, target: playerLeft, WITH_RNG(RNG_DAMAGE_MODIFIER, i));
               MOVE(opponentRight, MOVE_GRASS_PLEDGE, target: playerRight, WITH_RNG(RNG_DAMAGE_MODIFIER, i));
        }
    }
    SCENE {
        HP_BAR(playerRight, captureDamage: &dmg);
    }
    THEN {
        EXPECT_EQ(expectedDamage, dmg);
    }
}*/
