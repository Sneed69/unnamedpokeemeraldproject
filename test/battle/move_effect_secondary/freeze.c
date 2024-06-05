#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(MoveHasAdditionalEffect(MOVE_POWDER_SNOW, MOVE_EFFECT_FROSTBITE) == TRUE);
    ASSUME(gMovesInfo[MOVE_BLIZZARD].accuracy == 70);
}

SINGLE_BATTLE_TEST("Powder Snow inflicts frostbite")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_POWDER_SNOW); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POWDER_SNOW, player);
        HP_BAR(opponent);
        ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
        STATUS_ICON(opponent, frostbite: TRUE);
    }
}

SINGLE_BATTLE_TEST("Powder Snow cannot frostbite an Ice-type Pokémon")
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_SNORUNT].types[0] == TYPE_ICE);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_SNORUNT);
    } WHEN {
        TURN { MOVE(player, MOVE_POWDER_SNOW); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_POWDER_SNOW, player);
        HP_BAR(opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
            STATUS_ICON(opponent, frostbite: TRUE);
        }
    }
}

SINGLE_BATTLE_TEST("Frostbite cannot be inflicted in Sunlight")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUNNY_DAY); MOVE(player, MOVE_ICE_BEAM); }
    } SCENE {
        NOT MESSAGE("Alakazam was frozen solid!");
    }
}

SINGLE_BATTLE_TEST("Blizzard bypasses accuracy checks in Hail and Snow")
{
    u32 move;
    PARAMETRIZE { move = MOVE_HAIL; }
    PARAMETRIZE { move = MOVE_SNOWSCAPE; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, move); MOVE(player, MOVE_BLIZZARD); }
    } SCENE {
        NOT MESSAGE("Alakazam's attack missed!");
    }
}

/*#if B_STATUS_TYPE_IMMUNITY > GEN_1
SINGLE_BATTLE_TEST("Freezing Glare should frostbite Psychic-types")
#else
SINGLE_BATTLE_TEST("Freezing Glare shouldn't frostbite Psychic-types")
#endif
{
    GIVEN {
        ASSUME(gSpeciesInfo[SPECIES_ARTICUNO_GALARIAN].types[0] == TYPE_PSYCHIC);
        ASSUME(MoveHasAdditionalEffect(MOVE_FREEZING_GLARE, MOVE_EFFECT_FROSTBITE_OR_FROSTBITE) == TRUE);
        ASSUME(gMovesInfo[MOVE_FREEZING_GLARE].type == TYPE_PSYCHIC);
        PLAYER(SPECIES_ARTICUNO_GALARIAN);
        OPPONENT(SPECIES_ARTICUNO_GALARIAN);
    } WHEN {
        TURN { MOVE(player, MOVE_FREEZING_GLARE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_FREEZING_GLARE, player);
        HP_BAR(opponent);
        #if B_STATUS_TYPE_IMMUNITY > GEN_1
            ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
            STATUS_ICON(opponent, frostbite: TRUE);
        #else
            NONE_OF {
                ANIMATION(ANIM_TYPE_STATUS, B_ANIM_STATUS_FRZ, opponent);
                STATUS_ICON(opponent, frostbite: TRUE);
            }
        #endif
    }
}*/
