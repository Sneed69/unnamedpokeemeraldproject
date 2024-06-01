#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_KNOCK_OFF].effect == EFFECT_KNOCK_OFF);
}

SINGLE_BATTLE_TEST("Knock Off knocks a healing berry before it has the chance to activate")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_SITRUS_BERRY); MaxHP(500); HP(255); }
    } WHEN {
        TURN { MOVE(player, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("Foe Alakazam's Sitrus Berry restored health!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
        MESSAGE("Alakazam knocked off Foe Alakazam's Sitrus Berry!");
    } THEN {
        EXPECT(opponent->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Knock Off activates after Rocky Helmet and Weakness Policy")
{
    u16 item = 0;

    PARAMETRIZE { item = ITEM_WEAKNESS_POLICY; }
    PARAMETRIZE { item = ITEM_ROCKY_HELMET; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Item(item); }
    } WHEN {
        TURN { MOVE(player, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        if (item == ITEM_WEAKNESS_POLICY) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE);
            MESSAGE("Using Weakness Policy, the Attack of Foe Alakazam sharply rose!");
            MESSAGE("Using Weakness Policy, the Sp. Atk of Foe Alakazam sharply rose!");
        } else if (item == ITEM_ROCKY_HELMET) {
            HP_BAR(player);
            MESSAGE("Alakazam was hurt by Foe Alakazam's Rocky Helmet!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
            MESSAGE("Alakazam knocked off Foe Alakazam's Rocky Helmet!");
        }
    } THEN {
        EXPECT(opponent->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Knock Off deals additional damage to opponents holding an item in Gen 6+", s16 damage)
{
    u16 item = 0;

    PARAMETRIZE { item = ITEM_NONE; }
    PARAMETRIZE { item = ITEM_LEFTOVERS; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Item(item); };
    } WHEN {
        TURN { MOVE(player, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        HP_BAR(opponent, captureDamage: &results[i].damage);
        if (item != ITEM_NONE)
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
    } FINALLY {
        if (B_KNOCK_OFF_DMG >= GEN_6)
            EXPECT_MUL_EQ(results[0].damage, UQ_4_12(1.5), results[1].damage);
        else
            EXPECT_EQ(results[0].damage, results[1].damage);
    } THEN {
        EXPECT(opponent->item == ITEM_NONE);
    }
}


SINGLE_BATTLE_TEST("Knock Off does not remove items through Substitute")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_LEFTOVERS); };
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); 
               MOVE(player, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        NOT { ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF); }
    } THEN {
        EXPECT(opponent->item == ITEM_LEFTOVERS);
    }
}

SINGLE_BATTLE_TEST("Recycle cannot recover an item removed by Knock Off")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_LEFTOVERS); }
    } WHEN {
        TURN { MOVE(player, MOVE_KNOCK_OFF);
               MOVE(opponent, MOVE_RECYCLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
        MESSAGE("Alakazam knocked off Foe Alakazam's Leftovers!");
        
        MESSAGE("Foe Alakazam used Recycle!");
        MESSAGE("But it failed!");
    } THEN {
        EXPECT(opponent->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Knock Off does not prevent targets from receiving another item in Gen 5+")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_LEFTOVERS); }
    } WHEN {
        TURN { MOVE(player, MOVE_KNOCK_OFF); }
        TURN { MOVE(player, MOVE_BESTOW); }
    } SCENE {
        // turn 1
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
        MESSAGE("Alakazam knocked off Foe Alakazam's Leftovers!");
        // turn 2
        if (B_KNOCK_OFF_REMOVAL >= GEN_5) {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_BESTOW, player);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT);
            MESSAGE("Foe Alakazam's Leftovers restored its HP a little!");
        } else {
            NOT { ANIMATION(ANIM_TYPE_MOVE, MOVE_BESTOW, player); }
            MESSAGE("But it failed!");
        }
    } THEN {
        if (B_KNOCK_OFF_REMOVAL >= GEN_5)
            EXPECT(opponent->item == ITEM_LEFTOVERS);
        else
            EXPECT(opponent->item == ITEM_NONE);
    }
}

// Knock Off triggers Unburden regardless of whether the item is fully removed (Gen 5+) or not.
SINGLE_BATTLE_TEST("Knock Off triggers Unburden")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(60); }
        OPPONENT(SPECIES_ALAKAZAM) { Ability(ABILITY_UNBURDEN); Item(ITEM_LEFTOVERS); Speed(50); }
    } WHEN {
        TURN { MOVE(player, MOVE_KNOCK_OFF); }
        TURN { MOVE(player, MOVE_CELEBRATE); }
    } SCENE {
        // turn 1
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
        MESSAGE("Alakazam knocked off Foe Alakazam's Leftovers!");
        // turn 2
        MESSAGE("Foe Alakazam used Celebrate!");
        MESSAGE("Alakazam used Celebrate!");
    } THEN {
        EXPECT(opponent->item == ITEM_NONE);
    }
}

DOUBLE_BATTLE_TEST("Knock Off does not trigger the opposing ally's Symbiosis")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_LEFTOVERS); }
        PLAYER(SPECIES_FLORGES) { Item(ITEM_LEFTOVERS); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_KNOCK_OFF, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_ITEM_KNOCKOFF);
        MESSAGE("Foe Alakazam knocked off Alakazam's Leftovers!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT);
            MESSAGE("Alakazam's Leftovers restored health!");
        }
    } THEN {
        EXPECT(playerLeft->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Knock Off doesn't knock off items from Pokemon behind substitutes")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_POKE_BALL); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_SUBSTITUTE); MOVE(player, MOVE_KNOCK_OFF); }
    } SCENE {
        NOT MESSAGE("Alakazam knocked off Foe Alakazam's Poké Ball");
    }
}
