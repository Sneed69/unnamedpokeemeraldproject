Common_EventScript_PkmnCenterNurse::
	lock
	faceplayer
	goto_if_unset FLAG_TEMP_1, EventScript_PkmnCenterNurse_HelloAndWelcome
	message gText_WouldYouLikeToTeachMove
	goto_if_set FLAG_TEMP_1, EventScript_PkmnCenterNurse_WaitMessage
EventScript_PkmnCenterNurse_HelloAndWelcome:
	message gText_HelloAndWelcome
	setflag FLAG_TEMP_1
EventScript_PkmnCenterNurse_WaitMessage:
	waitmessage
	dynmultipush gText_RemindMoves, TUTOR_REMINDER
	specialvar VAR_RESULT, PlayerHasTMs
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_CheckForEggMoveItem
	dynmultipush gText_TeachTMs, TUTOR_TM
EventScript_PkmnCenterNurse_CheckForEggMoveItem:
	checkitem ITEM_MIND_EXPANDER
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_ShowMultichoice
	dynmultipush gText_SpecialMoves, TUTOR_EGG_MOVE
EventScript_PkmnCenterNurse_ShowMultichoice:
	dynmultipush gText_Quit, TUTOR_TYPE_COUNT
	dynmultistack 0, 0, 0, 4, 0, 0, DYN_MULTICHOICE_CB_NONE
	goto_if_ge VAR_RESULT, TUTOR_TYPE_COUNT, EventScript_PkmnCenterNurse_Goodbye
	copyvar VAR_TUTOR_TYPE VAR_RESULT
EventScript_PkmnCenterNurse_ChooseMon:
	msgbox gText_ChooseMon, MSGBOX_DEFAULT
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_PkmnCenterNurse_Goodbye
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, EventScript_PkmnCenterNurse_NoMoveToTeachMon
EventScript_PkmnCenterNurse_ChooseMove::
	msgbox gText_ChooseMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_ChooseMon
EventScript_PkmnCenterNurse_Goodbye::
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	msgbox gText_WeHopeToSeeYouAgain, MSGBOX_DEFAULT
	waitmovement 0
	release
	end

EventScript_PkmnCenterNurse_NoMoveToTeachMon::
	msgbox gTextDontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto EventScript_PkmnCenterNurse_ChooseMon
	end

EventScript_PkmnCenterNurse_CantTeachEgg::
	msgbox gText_CantTeachEgg, MSGBOX_DEFAULT
	goto EventScript_PkmnCenterNurse_ChooseMon
	end

@ VAR_0x8004 is 1 when player has Gold Card; jumps are identical
EventScript_PkmnCenterNurse_HealPkmn::
	incrementgamestat GAME_STAT_USED_POKECENTER
	call_if_eq VAR_0x8004, 0, EventScript_PkmnCenterNurse_IllTakeYourPkmn
	call_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_IllTakeYourPkmn2
	waitmessage
	call EventScript_PkmnCenterNurse_TakeAndHealPkmn
	goto_if_unset FLAG_POKERUS_EXPLAINED, EventScript_PkmnCenterNurse_CheckPokerus
	goto EventScript_PkmnCenterNurse_ReturnPkmn
	end

EventScript_PkmnCenterNurse_IllTakeYourPkmn::
	message gText_IllTakeYourPkmn
	return

EventScript_PkmnCenterNurse_IllTakeYourPkmn2::
	message gText_IllTakeYourPkmn2
	return

EventScript_PkmnCenterNurse_TakeAndHealPkmn::
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	dofieldeffect FLDEFF_POKECENTER_HEAL
	waitfieldeffect FLDEFF_POKECENTER_HEAL
	applymovement VAR_0x800B, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	special HealPlayerParty
	return

EventScript_PkmnCenterNurse_CheckTrainerHillAndUnionRoom::
	specialvar VAR_RESULT, PlayerNotAtTrainerHillEntrance
	goto_if_eq VAR_RESULT, 0, EventScript_PkmnCenterNurse_ReturnPkmn
	specialvar VAR_RESULT, BufferUnionRoomPlayerName
	copyvar VAR_0x8008, VAR_RESULT
	goto_if_eq VAR_0x8008, 0, EventScript_PkmnCenterNurse_ReturnPkmn
	goto_if_eq VAR_0x8008, 1, EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom
	end

@ VAR_0x8004 is 1 when player has Gold Card
EventScript_PkmnCenterNurse_ReturnPkmn::
	goto_if_eq VAR_0x8004, 1, EventScript_PkmnCenterNurse_ReturnPkmn2
	message gText_RestoredPkmnToFullHealth
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	message gText_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_ReturnPkmn2::
	message gText_ThankYouForWaiting
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	message gText_WeHopeToSeeYouAgain2
	return

EventScript_PkmnCenterNurse_PlayerWaitingInUnionRoom::
	goto_if_set FLAG_NURSE_UNION_ROOM_REMINDER, EventScript_PkmnCenterNurse_ReturnPkmn
	msgbox gText_RestoredPkmnToFullHealth, MSGBOX_DEFAULT
	setflag FLAG_NURSE_UNION_ROOM_REMINDER
	message CableClub_Text_PlayerIsWaiting
	waitmessage
	applymovement VAR_0x800B, Movement_PkmnCenterNurse_Bow
	waitmovement 0
	message gText_WeHopeToSeeYouAgain
	return

EventScript_PkmnCenterNurse_CheckPokerus::
	specialvar VAR_RESULT, IsPokerusInParty
	goto_if_eq VAR_RESULT, TRUE, EventScript_PkmnCenterNurse_ExplainPokerus
	goto_if_eq VAR_RESULT, FALSE, EventScript_PkmnCenterNurse_ReturnPkmn
	end

EventScript_PkmnCenterNurse_ExplainPokerus::
	message gText_PokerusExplanation
	setflag FLAG_POKERUS_EXPLAINED
	return

EventScript_PkmnCenterNurse_GoldCard::
	goto_if_set FLAG_NURSE_MENTIONS_GOLD_CARD, EventScript_PkmnCenterNurse_AskForUsual
	setflag FLAG_NURSE_MENTIONS_GOLD_CARD
	msgbox gText_WelcomeCutShort, MSGBOX_DEFAULT
	playse SE_PIN
	applymovement VAR_0x800B, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement VAR_0x800B, Common_Movement_Delay48
	waitmovement 0
	msgbox gText_NoticesGoldCard, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message gText_WeHopeToSeeYouAgain2
	return

EventScript_PkmnCenterNurse_AskForUsual::
	msgbox gText_YouWantTheUsual, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, EventScript_PkmnCenterNurse_GoldCardHealPkmn
	message gText_WeHopeToSeeYouAgain2
	return

EventScript_PkmnCenterNurse_GoldCardHealPkmn::
	setvar VAR_0x8004, 1
	goto EventScript_PkmnCenterNurse_HealPkmn
	end

Movement_PkmnCenterNurse_Bow:
	nurse_joy_bow
	delay_4
	step_end
