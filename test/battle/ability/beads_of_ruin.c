#include "global.h"
#include "test/battle.h"
/*
ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_WATER_GUN].category == DAMAGE_CATEGORY_SPECIAL);
    ASSUME(gMovesInfo[MOVE_ROLE_PLAY].effect == EFFECT_ROLE_PLAY);
}

SINGLE_BATTLE_TEST("Beads of Ruin reduces Sp. Def if opposing mon's ability doesn't match")
{
    s16 damage[2];

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Ability(ABILITY_BEADS_OF_RUIN); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_WATER_GUN); MOVE(opponent, MOVE_ROLE_PLAY); }
        TURN { MOVE(player, MOVE_WATER_GUN); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_BEADS_OF_RUIN);
        MESSAGE("Alakazam's Beads of Ruin weakened the Sp. Def of all surrounding Pokémon!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, player);
        HP_BAR(opponent, captureDamage: &damage[0]);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROLE_PLAY, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_WATER_GUN, player);
        HP_BAR(opponent, captureDamage: &damage[1]);
    } THEN {
        EXPECT_MUL_EQ(damage[1], Q_4_12(1.33), damage[0]);
    }
}

SINGLE_BATTLE_TEST("Beads of Ruin's message displays correctly after all battlers fainted - Player")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_ALAKAZAM) { HP(1);}
        PLAYER(SPECIES_ALAKAZAM) { Ability(ABILITY_BEADS_OF_RUIN); };
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EXPLOSION); SEND_OUT(player, 1); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); MOVE(opponent, MOVE_RUINATION); }
    } SCENE {
        HP_BAR(opponent, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, opponent);
        // Everyone faints.
        SEND_IN_MESSAGE("Alakazam");
        ABILITY_POPUP(player, ABILITY_BEADS_OF_RUIN);
        MESSAGE("Alakazam's Beads of Ruin weakened the Sp. Def of all surrounding Pokémon!");
        MESSAGE("2 sent out Alakazam!");
    }
}

SINGLE_BATTLE_TEST("Beads of Ruin's message displays correctly after all battlers fainted - Opponent")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { HP(1);}
        OPPONENT(SPECIES_ALAKAZAM) { Ability(ABILITY_BEADS_OF_RUIN); };
    } WHEN {
        TURN { MOVE(player, MOVE_EXPLOSION); SEND_OUT(player, 1); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_RUINATION); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(player, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, player);
        // Everyone faints.
        SEND_IN_MESSAGE("Alakazam");
        MESSAGE("2 sent out Alakazam!");
        ABILITY_POPUP(opponent, ABILITY_BEADS_OF_RUIN);
        MESSAGE("Foe Alakazam's Beads of Ruin weakened the Sp. Def of all surrounding Pokémon!");
    }
}*/
