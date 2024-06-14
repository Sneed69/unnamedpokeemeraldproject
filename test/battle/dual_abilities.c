#include "global.h"
#include "test/battle.h"

DOUBLE_BATTLE_TEST("Dual Abilities: Allow 2 switch abilities per battler")
{    
    GIVEN {
        PLAYER(SPECIES_TORKOAL) { Speed(4); Ability(ABILITY_DROUGHT); Innate(ABILITY_SHINING_BEACON); }
        PLAYER(SPECIES_DELCATTY) { Speed(2); Ability(ABILITY_UNTHREATENING); Innate(ABILITY_DRIZZLE); }
        OPPONENT(SPECIES_ARBOK) { Speed(1); Ability(ABILITY_INTIMIDATE); Innate(ABILITY_UNNERVE); }
        OPPONENT(SPECIES_SYLVEON) { Speed(3); Ability(ABILITY_MISTY_SURGE); Innate(ABILITY_MOLD_BREAKER); }
    } WHEN {
        TURN;
    } SCENE {
        ABILITY_POPUP(playerLeft, ABILITY_DROUGHT);
        ABILITY_POPUP(playerLeft, ABILITY_SHINING_BEACON);
        ABILITY_POPUP(opponentRight, ABILITY_MISTY_SURGE);
        ABILITY_POPUP(opponentRight, ABILITY_MOLD_BREAKER);
        ABILITY_POPUP(playerRight, ABILITY_UNTHREATENING);
        ABILITY_POPUP(playerRight, ABILITY_DRIZZLE);
        ABILITY_POPUP(opponentLeft, ABILITY_INTIMIDATE);
        ABILITY_POPUP(opponentLeft, ABILITY_UNNERVE);
    }
}
