ColossusGrotto_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, ColossusGrotto_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, ColossusGrotto_OnTransition
	.byte 0

ColossusGrotto_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, ColossusGrotto_EventScript_TryRemoveRegigigas
	end

ColossusGrotto_EventScript_TryRemoveRegigigas::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

ColossusGrotto_OnTransition:
	setflag FLAG_LANDMARK_COLOSSUS_GROTTO
	call_if_unset FLAG_DEFEATED_REGIGIGAS, ColossusGrotto_EventScript_ShowRegigigas
	end

ColossusGrotto_EventScript_ShowRegigigas::
	clearflag FLAG_HIDE_REGIGIGAS
	return

ColossusGrotto_EventScript_Regigigas::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setflag B_SMART_WILD_AI_FLAG
	settotemboost B_POSITION_OPPONENT_LEFT, 1, 4, 1, 1, 4
	setwildbattle SPECIES_REGIGIGAS, 70
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	clearflag B_SMART_WILD_AI_FLAG
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, ColossusGrotto_EventScript_DefeatedRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, ColossusGrotto_EventScript_RanFromRegigigas
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, ColossusGrotto_EventScript_RanFromRegigigas
	setflag FLAG_DEFEATED_REGIGIGAS
	release
	end

ColossusGrotto_EventScript_DefeatedRegigigas::
	setflag FLAG_DEFEATED_REGIGIGAS
	goto Common_EventScript_RemoveStaticPokemon
	end

ColossusGrotto_EventScript_RanFromRegigigas::
	setvar VAR_0x8004, SPECIES_REGIGIGAS
	goto Common_EventScript_LegendaryFlewAway
	end
