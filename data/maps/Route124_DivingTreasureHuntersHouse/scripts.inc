Route124_DivingTreasureHuntersHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route124_DivingTreasureHuntersHouse_OnTransition
	.byte 0

Route124_DivingTreasureHuntersHouse_OnTransition:
	setflag FLAG_LANDMARK_HUNTERS_HOUSE
	end

EventScript_EggMoveTutor::
	lock
	faceplayer
	goto_if_set FLAG_TEMP_1, EventScript_EggMoveTutor_AskTeachMove
	msgbox EggMoveTutor_Text_ImTheMoveTutor, MSGBOX_DEFAULT
	setflag FLAG_TEMP_1
	goto EventScript_EggMoveTutor_AskTeachMove
	end

EventScript_EggMoveTutor_AskTeachMove::
	msgbox EggMoveTutor_Text_WantMeToTeachMove, MSGBOX_YESNO
	switch VAR_RESULT
	case NO, EventScript_EggMoveTutor_Farewell
	goto EventScript_EggMoveTutor_ChooseMon
	end

EventScript_EggMoveTutor_ChooseMon::
	msgbox EggMoveTutor_Text_TutorWhichMon, MSGBOX_DEFAULT
	setvar VAR_TUTOR_TYPE TUTOR_EGG_MOVE
	special ChooseMonForMoveRelearner
	waitstate
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, EventScript_EggMoveTutor_Farewell
	special IsSelectedMonEgg
	goto_if_eq VAR_RESULT, TRUE, EventScript_EggMoveTutor_CantTeachEgg
	goto_if_eq VAR_0x8005, 0, EventScript_EggMoveTutor_NoMoveToTeachMon
	goto EventScript_EggMoveTutor_ChooseMove
	end

EventScript_EggMoveTutor_ChooseMove::
	msgbox EggMoveTutor_Text_TeachWhichMove, MSGBOX_DEFAULT
	special TeachMoveRelearnerMove
	waitstate
	goto_if_eq VAR_0x8004, 0, EventScript_EggMoveTutor_ChooseMon
	goto EventScript_EggMoveTutor_Farewell
	end

EventScript_EggMoveTutor_NoMoveToTeachMon::
	msgbox EggMoveTutor_Text_DontHaveMoveToTeachPokemon, MSGBOX_DEFAULT
	goto EventScript_EggMoveTutor_ChooseMon
	end

EventScript_EggMoveTutor_CantTeachEgg::
	msgbox EggMoveTutor_Text_CantTeachEgg, MSGBOX_DEFAULT
	goto EventScript_EggMoveTutor_ChooseMon
	end

EventScript_EggMoveTutor_Farewell::
	msgbox EggMoveTutor_Text_Farewell, MSGBOX_DEFAULT
	releaseall
	end

EggMoveTutor_Text_ImTheMoveTutor:
	.string "I'm the Unlikely Move Tutor.\p"
	.string "I teach Pokémon moves that they\n"
	.string "usually do not learn on their own\l"
	.string "or by using a TM.\p"
	.string "I can teach a move to a Pokémon\n"
	.string "of yours if you wish.$"

EggMoveTutor_Text_WantMeToTeachMove:
	.string "Need a move taught?$"

EggMoveTutor_Text_TutorWhichMon:
	.string "Which Pokémon seeks tutoring?$"

EggMoveTutor_Text_TeachWhichMove:
	.string "Which move?$"

EggMoveTutor_Text_DontHaveMoveToTeachPokemon:
	.string "It doesn't appear as if there is any\n"
	.string "move I can teach this Pokémon.$"

EggMoveTutor_Text_Farewell:
	.string "I'll be here when you return.$"

EggMoveTutor_Text_CantTeachEgg:
	.string "That is an Egg.$"
