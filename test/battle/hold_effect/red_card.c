#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gItemsInfo[ITEM_RED_CARD].holdEffect == HOLD_EFFECT_RED_CARD);
}

SINGLE_BATTLE_TEST("Red Card switches the attacker with a random non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_BULBASAUR);
        OPPONENT(SPECIES_CHARMANDER);
        OPPONENT(SPECIES_SQUIRTLE) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        MESSAGE("Foe Bulbasaur was dragged out!");
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

DOUBLE_BATTLE_TEST("Red Card switches the target with a random non-battler, non-fainted replacement")
{
    PASSES_RANDOMLY(1, 2, RNG_FORCE_RANDOM_SWITCH);
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
        OPPONENT(SPECIES_BULBASAUR);
        OPPONENT(SPECIES_CHARMANDER);
        OPPONENT(SPECIES_SQUIRTLE) { HP(0); }
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        MESSAGE("Foe Bulbasaur was dragged out!");
    } THEN {
        EXPECT(playerLeft->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if holder faints")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { HP(1); Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if target is behind a Substitute")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(player, MOVE_SUBSTITUTE); MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        }
    } THEN {
        EXPECT(player->item == ITEM_RED_CARD); // Not activated, so still has the item.
    }
}

SINGLE_BATTLE_TEST("Red Card activates after the last hit of a multi-hit move")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DOUBLE_KICK); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DOUBLE_KICK, opponent);
        HP_BAR(player);
        HP_BAR(player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if no replacements")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        }
    } THEN {
        EXPECT(player->item == ITEM_RED_CARD); // Not activated, so still has the item.
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if replacements fainted")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA) { HP(0); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        }
    } THEN {
        EXPECT(player->item == ITEM_RED_CARD); // Not activated, so still has the item.
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if knocked off")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_KNOCK_OFF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_KNOCK_OFF, opponent);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if stolen by a move")
{
    u32 item;
    bool32 activate;
    PARAMETRIZE { item = ITEM_NONE; activate = FALSE; }
    PARAMETRIZE { item = ITEM_POTION; activate = TRUE; }
    ASSUME(MoveHasAdditionalEffect(MOVE_THIEF, MOVE_EFFECT_STEAL_ITEM) == TRUE);

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM) { Item(item); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_THIEF); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_THIEF, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
            }
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if stolen by Magician")
{
    u32 item;
    bool32 activate;
    PARAMETRIZE { item = ITEM_NONE; activate = FALSE; }
    PARAMETRIZE { item = ITEM_POTION; activate = TRUE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_VULPIX) { Ability(ABILITY_MAGICIAN); Item(item); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Vulpix!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Alakazam held up its Red Card against Foe Vulpix!");
            }
        }
    } THEN {
        EXPECT(player->item == ITEM_NONE);
    }
}

DOUBLE_BATTLE_TEST("Red Card activates for only the fastest target")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(3); Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_ABRA) { Speed(2); Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM) { Speed(5); }
        OPPONENT(SPECIES_ABRA) { Speed(4); }
        OPPONENT(SPECIES_KADABRA) { Speed(1); }
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_ROCK_SLIDE);
            MOVE(opponentRight, MOVE_TACKLE, target: playerRight);
        }
    } SCENE {
        // Fastest target's Red Card activates.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ROCK_SLIDE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        MESSAGE("Foe Kadabra was dragged out!");

        // Slower target's Red Card still able to activate on other battler.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
        MESSAGE("Abra held up its Red Card against Foe Abra!");
        MESSAGE("Foe Alakazam was dragged out!");
    } THEN {
        EXPECT(playerLeft->item == ITEM_NONE);
        EXPECT(playerRight->item == ITEM_NONE);
    }
}

DOUBLE_BATTLE_TEST("Red Card activates but fails if the attacker is rooted")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
        OPPONENT(SPECIES_KADABRA);
    } WHEN {
        TURN { MOVE(opponentLeft, MOVE_INGRAIN); }
        TURN {
            MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft);
            MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        MESSAGE("Foe Alakazam anchored itself with its roots!");

        // Red Card already consumed so cannot activate.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
            MESSAGE("Abra held up its Red Card against Foe Abra!");
        }
    }
}

DOUBLE_BATTLE_TEST("Red Card activates but fails if the attacker has Suction Cups")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_CRADILY) { Ability(ABILITY_SUCTION_CUPS); }
        OPPONENT(SPECIES_ABRA);
        OPPONENT(SPECIES_KADABRA);
    } WHEN {
        TURN {
            MOVE(opponentLeft, MOVE_TACKLE, target: playerLeft);
            MOVE(opponentRight, MOVE_TACKLE, target: playerLeft);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        MESSAGE("Alakazam held up its Red Card against Foe Cradily!");
        MESSAGE("Foe Cradily anchors itself with Suction Cups!");

        // Red Card already consumed so cannot activate.
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponentRight);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerRight);
            MESSAGE("Abra held up its Red Card against Foe Abra!");
        }
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if switched by Dragon Tail")
{
    bool32 hasAbra, activate;
    PARAMETRIZE { hasAbra = TRUE; activate = FALSE; }
    PARAMETRIZE { hasAbra = FALSE; activate = TRUE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        if (hasAbra) PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_DRAGON_TAIL); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_DRAGON_TAIL, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Red Card activates and overrides U-turn")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_U_TURN); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if attacker's Sheer Force applied")
{
    u32 move;
    bool32 activate;
    PARAMETRIZE { move = MOVE_TACKLE; activate = TRUE; }
    PARAMETRIZE { move = MOVE_STOMP; activate = FALSE; }

    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_TAUROS) { Ability(ABILITY_SHEER_FORCE); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, move); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, move, opponent);
        if (activate) {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Tauros!");
        } else {
            NONE_OF {
                ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
                MESSAGE("Alakazam held up its Red Card against Foe Tauros!");
            }
        }
    }
}

SINGLE_BATTLE_TEST("Red Card activates before Emergency Exit")
{
    GIVEN {
        PLAYER(SPECIES_MASQUERAIN) { MaxHP(100); HP(51); Item(ITEM_RED_CARD); Ability(ABILITY_EMERGENCY_EXIT); }
        PLAYER(SPECIES_SURSKIT);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Masquerain held up its Red Card against Foe Alakazam!");
        ABILITY_POPUP(player, ABILITY_EMERGENCY_EXIT);
        SEND_IN_MESSAGE("Surskit");
    }
}

SINGLE_BATTLE_TEST("Red Card is consumed after dragged out replacement has its Speed lowered by Sticky Web")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_STICKY_WEB].effect == EFFECT_STICKY_WEB);
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA) { Moves(MOVE_TACKLE); }
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_STICKY_WEB); }
        TURN { MOVE(player, MOVE_TACKLE); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        // 1st turn Sticky Web
        ANIMATION(ANIM_TYPE_MOVE, MOVE_STICKY_WEB, opponent);
        // 2nd turn Red Card activation
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("Foe Alakazam held up its Red Card against Alakazam!");
        MESSAGE("Abra was dragged out!");
        MESSAGE("Abra was caught in a Sticky Web!");
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        // 3rd turn, Red Card was consumed, it can't trigger again
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
            MESSAGE("Foe Alakazam held up its Red Card against Abra!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
        }
    } THEN {
        EXPECT(opponent->item == ITEM_NONE);
    }
}

SINGLE_BATTLE_TEST("Red Card does not cause the dragged out mon to lose hp due to it's held Life Orb")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ABRA) { Item(ITEM_LIFE_ORB); }
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("Foe Alakazam held up its Red Card against Alakazam!");
        MESSAGE("Abra was dragged out!");
        NOT MESSAGE("Abra was hurt by its Life Orb!");
    }
}

SINGLE_BATTLE_TEST("Red Card does not activate if holder is switched in mid-turn")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { HP(1); Item(ITEM_EJECT_BUTTON); }
        PLAYER(SPECIES_ALAKAZAM) { Item(ITEM_RED_CARD); }
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(player, MOVE_ENDURE); MOVE(opponent, MOVE_TACKLE); SEND_OUT(player, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_ENDURE, player);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
        MESSAGE("Alakazam is switched out with the Eject Button!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, player);
            MESSAGE("Alakazam held up its Red Card against Foe Alakazam!");
        }
    }
}

// SINGLE_BATTLE_TEST("Red Card activates but fails if the attacker has Dynamaxed")
