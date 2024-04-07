SpecialMart_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	goto_if_set FLAG_VISITED_SOOTOPOLIS_CITY, SpecialMart_Sootopolis
	goto_if_set FLAG_VISITED_MOSSDEEP_CITY, SpecialMart_Mossdeep
	goto_if_set FLAG_VISITED_FORTREE_CITY, SpecialMart_Fortree
	goto_if_set FLAG_VISITED_FALLARBOR_TOWN, SpecialMart_Fallarbor
	goto_if_set FLAG_RECEIVED_TM_STRENGTH, SpecialMart_Strength
	goto_if_set FLAG_VISITED_VERDANTURF_TOWN, SpecialMart_Verdanturf
	goto_if_set FLAG_VISITED_SLATEPORT_CITY, SpecialMart_Slateport
	goto_if_set FLAG_ADVENTURE_STARTED, SpecialMart_Start
	pokemart SpecialItems_Limited
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SpecialMart_Sootopolis::
	pokemart SpecialItems_Sootopolis
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SpecialMart_Mossdeep::
	pokemart SpecialItems_Mossdeep
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SpecialMart_Fortree::
	pokemart SpecialItems_Fortree
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
SpecialMart_Fallarbor::
	pokemart SpecialItems_Fallarbor
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SpecialMart_Strength::
	pokemart SpecialItems_Strength
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
SpecialMart_Verdanturf::
	pokemart SpecialItems_Verdanturf
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
SpecialMart_Slateport::
	pokemart SpecialItems_Slateport
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

SpecialMart_Start::
	pokemart SpecialItems_Base
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
.align 2
SpecialItems_Sootopolis:
    .2byte ITEM_HEAL_BALL
    .2byte ITEM_LUXURY_BALL
    .2byte ITEM_LITTLE_BALL
    .2byte ITEM_DREAM_BALL
    .2byte ITEM_NEST_BALL
    .2byte ITEM_REPEAT_BALL
    .2byte ITEM_TIMER_BALL
    .2byte ITEM_WING_BALL
    .2byte ITEM_NET_BALL
    .2byte ITEM_DIVE_BALL
    .2byte ITEM_QUICK_BALL
    .2byte ITEM_DUSK_BALL
    .2byte ITEM_HEAVY_BALL
    .2byte ITEM_FOCUS_SASH
    .2byte ITEM_AIR_BALLOON
    .2byte ITEM_RED_CARD
    .2byte ITEM_NORMAL_GEM
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end
		
.align 2
SpecialItems_Mossdeep:
    .2byte ITEM_HEAL_BALL
    .2byte ITEM_LUXURY_BALL
    .2byte ITEM_LITTLE_BALL
    .2byte ITEM_DREAM_BALL
    .2byte ITEM_NEST_BALL
    .2byte ITEM_REPEAT_BALL
    .2byte ITEM_TIMER_BALL
    .2byte ITEM_WING_BALL
    .2byte ITEM_NET_BALL
    .2byte ITEM_DIVE_BALL
    .2byte ITEM_FOCUS_SASH
    .2byte ITEM_AIR_BALLOON
    .2byte ITEM_RED_CARD
    .2byte ITEM_NORMAL_GEM
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end
	
.align 2
SpecialItems_Fortree:
    .2byte ITEM_HEAL_BALL
    .2byte ITEM_LUXURY_BALL
    .2byte ITEM_LITTLE_BALL
    .2byte ITEM_DREAM_BALL
    .2byte ITEM_NEST_BALL
    .2byte ITEM_REPEAT_BALL
    .2byte ITEM_TIMER_BALL
    .2byte ITEM_WING_BALL
    .2byte ITEM_FOCUS_SASH
    .2byte ITEM_AIR_BALLOON
    .2byte ITEM_RED_CARD
    .2byte ITEM_NORMAL_GEM
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end
		
.align 2
SpecialItems_Fallarbor:
    .2byte ITEM_HEAL_BALL
    .2byte ITEM_LUXURY_BALL
    .2byte ITEM_LITTLE_BALL
    .2byte ITEM_DREAM_BALL
    .2byte ITEM_NEST_BALL
    .2byte ITEM_REPEAT_BALL
    .2byte ITEM_TIMER_BALL
    .2byte ITEM_FOCUS_SASH
    .2byte ITEM_RED_CARD
    .2byte ITEM_NORMAL_GEM
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end
	
.align 2
SpecialItems_Strength:
    .2byte ITEM_HEAL_BALL
    .2byte ITEM_LUXURY_BALL
    .2byte ITEM_LITTLE_BALL
    .2byte ITEM_DREAM_BALL
    .2byte ITEM_NEST_BALL
    .2byte ITEM_REPEAT_BALL
    .2byte ITEM_TIMER_BALL
    .2byte ITEM_FOCUS_SASH
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end
	
.align 2
SpecialItems_Verdanturf:
    .2byte ITEM_HEAL_BALL
    .2byte ITEM_LUXURY_BALL
    .2byte ITEM_LITTLE_BALL
    .2byte ITEM_DREAM_BALL
    .2byte ITEM_NEST_BALL
    .2byte ITEM_FOCUS_SASH
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end
	end
	
.align 2
SpecialItems_Slateport:
    .2byte ITEM_HEAL_BALL
    .2byte ITEM_LUXURY_BALL
    .2byte ITEM_LITTLE_BALL
    .2byte ITEM_DREAM_BALL
    .2byte ITEM_NEST_BALL
    .2byte ITEM_FOCUS_SASH
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end
	
.align 2
SpecialItems_Base:
    .2byte ITEM_HEAL_BALL
    .2byte ITEM_LUXURY_BALL
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end

.align 2
SpecialItems_Limited:
    .2byte ITEM_FLUFFY_TAIL
    .2byte ITEM_NONE
	release
	end
