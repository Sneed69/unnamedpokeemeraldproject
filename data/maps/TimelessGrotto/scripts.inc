TimelessGrotto_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, TimelessGrotto_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, TimelessGrotto_OnTransition
	.byte 0

TimelessGrotto_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, TimelessGrotto_EventScript_TryRemoveRegigigas
	end

TimelessGrotto_EventScript_TryRemoveRegigigas::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

TimelessGrotto_OnTransition:
	setflag FLAG_LANDMARK_TIMELESS_GROTTO
	call_if_unset FLAG_DEFEATED_REGIGIGAS, TimelessGrotto_EventScript_ShowRegigigas
	end

TimelessGrotto_EventScript_ShowRegigigas::
	clearflag FLAG_HIDE_REGIGIGAS
	return

TimelessGrotto_EventScript_Regigigas::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIGIGAS, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, TimelessGrotto_EventScript_DefeatedRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, TimelessGrotto_EventScript_RanFromRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, TimelessGrotto_EventScript_RanFromRegigigas
	setflag FLAG_DEFEATED_REGIGIGAS
	release
	end

TimelessGrotto_EventScript_DefeatedRegigigas::
	setflag FLAG_DEFEATED_REGIGIGAS
	goto Common_EventScript_RemoveStaticPokemon
	end

TimelessGrotto_EventScript_RanFromRegigigas::
	setvar VAR_0x8004, SPECIES_REGIGIGAS
	goto Common_EventScript_LegendaryFlewAway
	end
