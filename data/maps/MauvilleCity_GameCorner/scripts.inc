MauvilleCity_GameCorner_MapScripts::
	.byte 0

MauvilleCity_GameCorner_EventScript_CoinsClerk::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner, MSGBOX_DEFAULT
	release
	end


MauvilleCity_GameCorner_EventScript_PrizeCornerDolls::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemartdecoration MauvilleCity_GameCorner_PokemartDecor
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
MauvilleCity_GameCorner_PokemartDecor:
	.2byte DECOR_TREECKO_DOLL
	.2byte DECOR_TORCHIC_DOLL
	.2byte DECOR_MUDKIP_DOLL
	.2byte DECOR_NONE
	release
	end
	
MauvilleCity_GameCorner_EventScript_PrizeCornerTMs::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart MauvilleCity_GameCorner_PokemartTMs
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
	.align 2
MauvilleCity_GameCorner_PokemartTMs:
	.2byte ITEM_TM_THUNDER_FANG
	.2byte ITEM_TM_ICE_FANG
	.2byte ITEM_TM_FIRE_FANG
	.2byte ITEM_TM_THUNDER_PUNCH
	.2byte ITEM_TM_ICE_PUNCH
	.2byte ITEM_TM_FIRE_PUNCH
	.2byte ITEM_TM_ZEN_HEADBUTT
	.2byte ITEM_TM_SEED_BOMB
	.2byte ITEM_NONE
	release
	end

MauvilleCity_GameCorner_EventScript_Woman2::
	msgbox MauvilleCity_GameCorner_Text_WinnersTip, MSGBOX_NPC
	end

MauvilleCity_GameCorner_EventScript_Gentleman::
	msgbox MauvilleCity_GameCorner_Text_RouletteOnlyLuck, MSGBOX_NPC
	end

MauvilleCity_GameCorner_EventScript_Girl::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_STARTER_DOLL, MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	msgbox MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MauvilleCity_GameCorner_EventScript_DeclineStarterDoll
	switch VAR_STARTER_MON
	case 0, MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll
	case 1, MauvilleCity_GameCorner_EventScript_GiveTorchicDoll
	case 2, MauvilleCity_GameCorner_EventScript_GiveMudkipDoll
	end

MauvilleCity_GameCorner_EventScript_GiveTreeckoDoll::
	bufferdecorationname STR_VAR_2, DECOR_TREECKO_DOLL
	checkdecorspace DECOR_TREECKO_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
	givedecoration DECOR_TREECKO_DOLL
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_GiveTorchicDoll::
	bufferdecorationname STR_VAR_2, DECOR_TORCHIC_DOLL
	checkdecorspace DECOR_TORCHIC_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
	givedecoration DECOR_TORCHIC_DOLL
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_GiveMudkipDoll::
	bufferdecorationname STR_VAR_2, DECOR_MUDKIP_DOLL
	checkdecorspace DECOR_MUDKIP_DOLL
	goto_if_eq VAR_RESULT, FALSE, MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll
	msgbox MauvilleCity_GameCorner_Text_HereYouGo2, MSGBOX_DEFAULT
	givedecoration DECOR_MUDKIP_DOLL
	setflag FLAG_RECEIVED_STARTER_DOLL
	goto MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll
	end

MauvilleCity_GameCorner_EventScript_NoRoomForStarterDoll::
	call Common_EventScript_NoRoomForDecor
	msgbox MauvilleCity_GameCorner_Text_YouWantItButNotNow, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_DeclineStarterDoll::
	msgbox MauvilleCity_GameCorner_Text_DontBeNegative, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_ReceivedStarterDoll::
	msgbox MauvilleCity_GameCorner_Text_CantWinJackpot, MSGBOX_DEFAULT
	release
	end

MauvilleCity_GameCorner_EventScript_PokefanM::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_ClearEntrance, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_OldMan::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_RouletteDrink, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_Cook::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_Man::
	lock
	msgbox MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed, MSGBOX_DEFAULT
	closemessage
	release
	end

MauvilleCity_GameCorner_EventScript_NPCReturnToSlots::
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MauvilleCity_GameCorner_EventScript_Maniac::
	lock
	msgbox MauvilleCity_GameCorner_Text_DifficultToStopOn7, MSGBOX_DEFAULT
	closemessage
	release
	end

MauvilleCity_GameCorner_EventScript_Woman::
	lock
	faceplayer
	msgbox MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone, MSGBOX_DEFAULT
	goto MauvilleCity_GameCorner_EventScript_NPCReturnToSlots
	end

MauvilleCity_GameCorner_EventScript_SlotMachine::
	lockall
	msgbox MauvilleCity_GameCorner_Text_CantPlay, MSGBOX_DEFAULT
	releaseall
	end

MauvilleCity_GameCorner_Text_ThisIsMauvilleGameCorner:
	.string "Welcome to the Mauville Game Corner.\p"
	.string "Sorry kid, you have to be 21 or older\n"
	.string "to gamble here.\p"
	.string "You are still allowed to purchase our\n"
	.string "merchandise, of course.\p"
	.string "Just the TMs or the dolls, no alcohol!$"
	
MauvilleCity_GameCorner_Text_GotTwoOfSameDollWantOne:
	.string "I made a mistake and got two of\n"
	.string "the same dolls.\p"
	.string "Would you like one of them?$"

MauvilleCity_GameCorner_Text_HereYouGo2:
	.string "Here you go!$"

MauvilleCity_GameCorner_Text_YouWantItButNotNow:
	.string "Huh?\n"
	.string "You want it, but not right now?$"

MauvilleCity_GameCorner_Text_DontBeNegative:
	.string "Oh, don't be so negative!\n"
	.string "You can have this!$"

MauvilleCity_GameCorner_Text_CantWinJackpot:
	.string "There's a prize I want, but I can't win\n"
	.string "the jackpot.$"

MauvilleCity_GameCorner_Text_ClearEntrance:
	.string "Move along, don't block the entrance.$"

MauvilleCity_GameCorner_Text_LuckOnlyLastSoLongTakeCoins:
	.string "My luck can only last so long.\n"
	.string "This is too much for me.\l"
	.string "Here, take some COINS!$"

MauvilleCity_GameCorner_Text_MauvilleSomethingForEveryone:
	.string "Mauville has something for\n"
	.string "everyone.\p"
	.string "For me, it's the Game Corner.$"

MauvilleCity_GameCorner_Text_RouletteDrink:
	.string "Yes? Waitress?\n"
	.string "Where's my drink?$"

MauvilleCity_GameCorner_Text_EasyToLoseTrackOfTime:
	.string "It's easy to lose track of time in here. \n"
	.string "I should get back to work.$"

MauvilleCity_GameCorner_Text_WinnersTip:
	.string "Winners usually tip very well.$"

MauvilleCity_GameCorner_Text_RouletteOnlyLuck:
	.string "This roulette thing…\n"
	.string "It's rather demanding.\p"
	.string "Win or lose, it's only by luck.$"

MauvilleCity_GameCorner_Text_UpTo3CoinsCanBeUsed:
	.string "Three Azurills! Ahahahaha!$"

MauvilleCity_GameCorner_Text_DifficultToStopOn7:
	.string "One seven…\n"
	.string "Two sevens… Come on…\p"
	.string "Lotad…$"

MauvilleCity_GameCorner_Text_CantPlay:
	.string "You are too young to gamble here!$"

