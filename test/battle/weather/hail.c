#include "global.h"
#include "test/battle.h"

// Please add Hail interactions with move, item and ability effects on their respective files.
SINGLE_BATTLE_TEST("Hail deals 1/16 damage per turn")
{
    s16 hailDamage;

    GIVEN {
        PLAYER(SPECIES_GLALIE);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        MESSAGE("Foe Alakazam is pelted by Hail!");
        HP_BAR(opponent, captureDamage: &hailDamage);
   } THEN { EXPECT_EQ(hailDamage, opponent->maxHP / 16); }
}

SINGLE_BATTLE_TEST("Hail damage does not affect Ice-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_GLALIE].types[0] == TYPE_ICE);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_GLALIE);
    } WHEN {
        TURN {MOVE(player, MOVE_HAIL);}
    } SCENE {
        NOT MESSAGE("Foe Glalie is pelted by Hail!");
    }
}

SINGLE_BATTLE_TEST("Hail fails if Desolate Land or Primordial Sea are active")
{
    u32 species;

    PARAMETRIZE { species = SPECIES_ALAKAZAM; }
    PARAMETRIZE { species = SPECIES_GROUDON; }
    PARAMETRIZE { species = SPECIES_KYOGRE; }

    GIVEN {
        PLAYER(species);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_HAIL); }
    } SCENE {
        if (species == SPECIES_GROUDON || species == SPECIES_KYOGRE) {
            NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, opponent);
        } else {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_HAIL, opponent);
        }
    }
}
