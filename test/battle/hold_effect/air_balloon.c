#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_AIR_BALLOON].holdEffect == HOLD_EFFECT_AIR_BALLOON);
    ASSUME(gMovesInfo[MOVE_EARTHQUAKE].type == TYPE_GROUND);
    ASSUME(gMovesInfo[MOVE_TACKLE].type != TYPE_GROUND);
    ASSUME(gMovesInfo[MOVE_RECYCLE].effect == EFFECT_RECYCLE);
}

SINGLE_BATTLE_TEST("Air Balloon prevents the holder from taking damage from ground type moves")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        MESSAGE("Alakazam floats in the air with its Air Balloon!");
        MESSAGE("Foe Alakazam used Earthquake!");
        NOT ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        MESSAGE("It doesn't affect Alakazam…");
    }
}

SINGLE_BATTLE_TEST("Air Balloon pops when the holder is hit by a move that is not ground type")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Alakazam floats in the air with its Air Balloon!");
        MESSAGE("Foe Alakazam used Tackle!");
        MESSAGE("Alakazam's Air Balloon popped!");
    }
}

SINGLE_BATTLE_TEST("Air Balloon no longer prevents the holder from taking damage from ground type moves once it has been popped")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
        TURN { MOVE(opponent, MOVE_EARTHQUAKE); }
    } SCENE {
        MESSAGE("Alakazam floats in the air with its Air Balloon!");
        MESSAGE("Foe Alakazam used Tackle!");
        MESSAGE("Alakazam's Air Balloon popped!");
        MESSAGE("Foe Alakazam used Earthquake!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EARTHQUAKE, opponent);
        NOT MESSAGE("It doesn't affect Alakazam…");
    }
}

SINGLE_BATTLE_TEST("Air Balloon can not be restored with Recycle after it has been popped")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN {
            MOVE(opponent, MOVE_TACKLE);
            MOVE(player, MOVE_RECYCLE);
        }
    } SCENE {
        MESSAGE("Alakazam floats in the air with its Air Balloon!");
        MESSAGE("Foe Alakazam used Tackle!");
        MESSAGE("Alakazam's Air Balloon popped!");
        MESSAGE("Alakazam used Recycle!");
        MESSAGE("But it failed!");
    }
}

/*SINGLE_BATTLE_TEST("Air Balloon prevents the user from being healed by Grassy Terrain")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); MaxHP(100); HP(1); };
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(player, MOVE_GRASSY_TERRAIN); }
    } SCENE {
        MESSAGE("Alakazam floats in the air with its Air Balloon!");
        NOT MESSAGE("Alakazam is healed by the verdant aura!");
    }
}*/

SINGLE_BATTLE_TEST("Air Balloon pops before it can be stolen with Magician")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_NINETALES) { Ability(ABILITY_MAGICIAN); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        MESSAGE("Alakazam floats in the air with its Air Balloon!");
        MESSAGE("Alakazam's Air Balloon popped!");
        NOT ABILITY_POPUP(opponent, ABILITY_MAGICIAN);
    }
}

SINGLE_BATTLE_TEST("Air Balloon pops before it can be stolen with Thief or Covet")
{
    u32 move;
    KNOWN_FAILING;
    PARAMETRIZE { move = MOVE_THIEF; }
    PARAMETRIZE { move = MOVE_COVET; }
    GIVEN {
        ASSUME(MoveHasAdditionalEffect(move, MOVE_EFFECT_STEAL_ITEM) == TRUE);
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_AIR_BALLOON); };
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        MESSAGE("Alakazam floats in the air with its Air Balloon!");
        MESSAGE("Alakazam's Air Balloon popped!");
        NOT MESSAGE("Foe Alakazam stole Alakazam's Air Balloon!");
    }
}
