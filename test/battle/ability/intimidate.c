#include "global.h"
#include "test/battle.h"

ASSUMPTIONS
{
    ASSUME(gMovesInfo[MOVE_TACKLE].category == DAMAGE_CATEGORY_PHYSICAL);
}

SINGLE_BATTLE_TEST("Intimidate (opponent) lowers player's attack after switch out", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ARBOK) { Ability(ability); }
    } WHEN {
        TURN { SWITCH(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        if (ability == ABILITY_INTIMIDATE)
        {
            ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Foe Arbok's Intimidate cuts Alakazam's Attack!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

SINGLE_BATTLE_TEST("Intimidate (opponent) lowers player's attack after KO", s16 damage)
{
    u32 ability;
    PARAMETRIZE { ability = ABILITY_INTIMIDATE; }
    PARAMETRIZE { ability = ABILITY_SHED_SKIN; }
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM) { Speed(2); }
        OPPONENT(SPECIES_ALAKAZAM) { HP(1); Speed(1); }
        OPPONENT(SPECIES_ARBOK) { Ability(ability); Speed(1); }
    } WHEN {
        TURN { MOVE(player, MOVE_TACKLE); SEND_OUT(opponent, 1); }
        TURN { MOVE(player, MOVE_TACKLE); }
    } SCENE {
        HP_BAR(opponent);
        if (ability == ABILITY_INTIMIDATE)
        {
            ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Foe Arbok's Intimidate cuts Alakazam's Attack!");
        }
        HP_BAR(opponent, captureDamage: &results[i].damage);
    } FINALLY {
        EXPECT_MUL_EQ(results[0].damage, Q_4_12(1.5), results[1].damage);
    }
}

DOUBLE_BATTLE_TEST("Intimidate doesn't activate on an empty field in a double battle")
{
    GIVEN {
        ASSUME(gMovesInfo[MOVE_EXPLOSION].effect == EFFECT_EXPLOSION);
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_ALAKAZAM) { HP(1); }
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE); }
        PLAYER(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM) { HP(1); }
        OPPONENT(SPECIES_ALAKAZAM) { HP(1); }
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_ABRA);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_EXPLOSION); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); SEND_OUT(playerRight, 3); SEND_OUT(opponentRight, 3); }
        TURN { MOVE(playerLeft, MOVE_CELEBRATE); }
    } SCENE {
        HP_BAR(playerLeft, hp: 0);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_EXPLOSION, playerLeft);
        // Everyone faints.

        MESSAGE("Go! Ekans!");
        MESSAGE("2 sent out Arbok!");
        MESSAGE("Go! Abra!");
        MESSAGE("2 sent out Abra!");

        NONE_OF {
            ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentLeft);
            MESSAGE("Ekans's Intimidate cuts Foe Arbok's Attack!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
            MESSAGE("Ekans's Intimidate cuts Foe Abra's Attack!");

            ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
            MESSAGE("Foe Arbok's Intimidate cuts Ekans's Attack!");
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerRight);
            MESSAGE("Foe Arbok's Intimidate cuts Abra's Attack!");
        }
    }
}

SINGLE_BATTLE_TEST("Intimidate and Eject Button force the opponent to Attack")
{
    GIVEN {
        ASSUME(gItemsInfo[ITEM_EJECT_BUTTON].holdEffect == HOLD_EFFECT_EJECT_BUTTON);
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM) { Item(ITEM_EJECT_BUTTON); }
        OPPONENT(SPECIES_SALAMENCE) { Moves(MOVE_TACKLE); }
    } WHEN {
        TURN {
           MOVE(player, MOVE_QUICK_ATTACK);
           MOVE(opponent, MOVE_TACKLE);
           SEND_OUT(opponent, 1);
        }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_QUICK_ATTACK, player);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, opponent);
        MESSAGE("Foe Alakazam is switched out with the Eject Button!");
        MESSAGE("2 sent out Hitmontop!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        MESSAGE("Foe Hitmontop's Intimidate cuts Alakazam's Attack!");
        NONE_OF {
            ANIMATION(ANIM_TYPE_MOVE, MOVE_TACKLE, opponent);
            MESSAGE("Foe Hitmontop used Tackle!");
        }
    }
}

DOUBLE_BATTLE_TEST("Intimidate activates on an empty slot")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_CROAGUNK);
        PLAYER(SPECIES_ABRA);
        PLAYER(SPECIES_SALAMENCE) { Ability(ABILITY_INTIMIDATE); }
        OPPONENT(SPECIES_RALTS);
        OPPONENT(SPECIES_AZURILL);
    } WHEN {
        TURN {
            SWITCH(playerLeft, 2);
            MOVE(playerRight, MOVE_GUNK_SHOT, target: opponentLeft);
            MOVE(opponentRight, MOVE_SPLASH);
        }
        TURN {
            SWITCH(playerLeft, 3);
            MOVE(playerRight, MOVE_SPLASH);
            }


    } SCENE {
        MESSAGE("Alakazam, that's enough! Come back!");
        MESSAGE("Go! Abra!");
        ANIMATION(ANIM_TYPE_MOVE, MOVE_GUNK_SHOT, playerRight);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_SPLASH, opponentRight);
        MESSAGE("Abra, that's enough! Come back!");
        MESSAGE("Go! Hitmontop!");
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        NONE_OF {
            MESSAGE("Hitmontop's Intimidate cuts Foe Ralts's Attack!");
        }
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, opponentRight);
        MESSAGE("Hitmontop's Intimidate cuts Foe Azurill's Attack!");
    }
}

DOUBLE_BATTLE_TEST("Intimidate activates immediately after the mon was switched in as long as one opposing mon is alive")
{
    GIVEN {
        PLAYER(SPECIES_TAPU_KOKO) { Ability(ABILITY_ELECTRIC_SURGE); };
        PLAYER(SPECIES_ALAKAZAM);
        PLAYER(SPECIES_EKANS) { Ability(ABILITY_INTIMIDATE); Item(ITEM_ELECTRIC_SEED); }
        OPPONENT(SPECIES_ABRA) { HP(1); }
        OPPONENT(SPECIES_ABRA);
        OPPONENT(SPECIES_ALAKAZAM);
    } WHEN {
        TURN { MOVE(playerLeft, MOVE_U_TURN, target: opponentLeft); SEND_OUT(playerLeft, 2); SEND_OUT(opponentLeft, 2); }
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_ELECTRIC_SURGE);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_U_TURN, playerLeft);
        HP_BAR(opponentLeft);
        ABILITY_POPUP(playerLeft, ABILITY_INTIMIDATE);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_HELD_ITEM_EFFECT, playerLeft);
        ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, playerLeft);
    } THEN {
        EXPECT_EQ(playerLeft->statStages[STAT_DEF], DEFAULT_STAT_STAGE + 1);
    }
}

SINGLE_BATTLE_TEST("Intimidate can not further lower opponents Atk stat if it is at minimum stages")
{
    GIVEN {
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { MOVE(opponent, MOVE_CHARM); }
        TURN { SWITCH(opponent, 1); }
    } SCENE {
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ANIMATION(ANIM_TYPE_MOVE, MOVE_CHARM, opponent);
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        NONE_OF {
            ANIMATION(ANIM_TYPE_GENERAL, B_ANIM_STATS_CHANGE, player);
            MESSAGE("Foe Arbok's Intimidate cuts Alakazam's Attack!");
        }
        MESSAGE("Alakazam's Attack won't go lower!");
    } THEN {
        EXPECT_EQ(player->statStages[STAT_ATK], MIN_STAT_STAGE);
    }
}

SINGLE_BATTLE_TEST("Intimidate activates when it's no longer effected by Neutralizing Gas")
{
    GIVEN {
        PLAYER(SPECIES_WEEZING) { Ability(ABILITY_NEUTRALIZING_GAS); }
        PLAYER(SPECIES_ALAKAZAM);
        OPPONENT(SPECIES_ARBOK) { Ability(ABILITY_INTIMIDATE); }
    } WHEN {
        TURN { SWITCH(player, 1); }
    } SCENE {
        ABILITY_POPUP(player, ABILITY_NEUTRALIZING_GAS);
        MESSAGE("Neutralizing Gas filled the area!");
        MESSAGE("Weezing, that's enough! Come back!");
        MESSAGE("The effects of Neutralizing Gas wore off!");
        ABILITY_POPUP(opponent, ABILITY_INTIMIDATE);
        MESSAGE("Go! Alakazam!");
    }
}
