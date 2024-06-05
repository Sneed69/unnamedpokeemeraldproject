#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
    ASSUME(gMovesInfo[MOVE_ROUND].category == DAMAGE_CATEGORY_SPECIAL);
}

SINGLE_BATTLE_TEST("Protosynthesis boosts the highest stat")
{
    GIVEN {
        PLAYER(SPECIES_GYARADOS) { Ability(ABILITY_PROTOSYNTHESIS); Attack(400); SpAttack(401); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_SUNNY_DAY); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNNY_DAY, player);
        ABILITY_POPUP(player, ABILITY_PROTOSYNTHESIS);
        MESSAGE("The harsh sunlight activated Gyarados's Protosynthesis!");
        MESSAGE("Gyarados's Sp. Atk was heightened!");
    }
}

SINGLE_BATTLE_TEST("Protosynthesis boosts either Attack or Special Attack, not both")
{
    u16 species;
    u32 move, attack, spAttack;
    s16 damage[2];

    PARAMETRIZE { species = SPECIES_HYDREIGON; move = MOVE_TACKLE; attack = 401; spAttack = 400; }
    PARAMETRIZE { species = SPECIES_HYDREIGON; move = MOVE_ROUND; attack = 401; spAttack = 400; }

    PARAMETRIZE { species = SPECIES_GYARADOS; move = MOVE_TACKLE; attack = 400; spAttack = 401; }
    PARAMETRIZE { species = SPECIES_GYARADOS; move = MOVE_ROUND; attack = 400; spAttack = 401; }

    GIVEN {
        PLAYER(species) { Ability(ABILITY_PROTOSYNTHESIS); Attack(attack); SpAttack(spAttack); }
        OPPONENT(SPECIES_ALAKAZAM) { HP(400); }
    } WHEN {
        TURN { MOVE(player, move); }
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNNY_DAY, opponent);
        ANIMATION(ANIM_TYPE_MOVE, move, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        if ((move == MOVE_TACKLE && species == SPECIES_HYDREIGON) || (move == MOVE_ROUND && species == SPECIES_GYARADOS))
            EXPECT_LT(damage[0], damage[1]);
        else
            EXPECT_EQ(damage[0], damage[1]);
    }
}

SINGLE_BATTLE_TEST("Protosynthesis ability pop up activates only once during the duration of sunny day")
{
    u16 turns;

    GIVEN {
        PLAYER(SPECIES_GYARADOS) { Ability(ABILITY_PROTOSYNTHESIS); Attack(400); SpAttack(401);}
        OPPONENT(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); };
    } WHEN {
        for (turns = 0; turns < 5; turns++)
            TURN {}
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_DROUGHT);
        ABILITY_POPUP(player, ABILITY_PROTOSYNTHESIS);
        MESSAGE("The harsh sunlight activated Gyarados's Protosynthesis!");
        MESSAGE("Gyarados's Sp. Atk was heightened!");
        NONE_OF {
            for (turns = 0; turns < 4; turns++) {
                ABILITY_POPUP(player, ABILITY_PROTOSYNTHESIS);
                MESSAGE("The harsh sunlight activated Gyarados's Protosynthesis!");
                MESSAGE("Gyarados's Sp. Atk was heightened!");
            }
        }
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SUNNY_DAY, opponent);
        ABILITY_POPUP(player, ABILITY_PROTOSYNTHESIS);
        MESSAGE("The harsh sunlight activated Gyarados's Protosynthesis!");
        MESSAGE("Gyarados's Sp. Atk was heightened!");
    }
}

SINGLE_BATTLE_TEST("Protosynthesis activates on switch-in")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_HYDREIGON) { Ability(ABILITY_PROTOSYNTHESIS); Attack(401); SpAttack(400);}
        OPPONENT(SPECIES_NINETALES) { Ability(ABILITY_DROUGHT); };
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(opponent, ABILITY_DROUGHT);
        ABILITY_POPUP(player, ABILITY_PROTOSYNTHESIS);
        MESSAGE("The harsh sunlight activated Hydreigon's Protosynthesis!");
        MESSAGE("Hydreigon's Attack was heightened!");
    }
}
