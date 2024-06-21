LavaridgeTown_HerbShop_MapScripts::
	.byte 0

LavaridgeTown_HerbShop_EventScript_Clerk::
	lock
	faceplayer
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart LavaridgeTown_HerbShop_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
LavaridgeTown_HerbShop_EventScript_ClerkBerryPhysical::
	lock
	faceplayer
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart LavaridgeTown_HerbShop_BerriesPhysical
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end
	
LavaridgeTown_HerbShop_EventScript_ClerkBerrySpecial::
	lock
	faceplayer
	message LavaridgeTown_HerbShop_Text_WelcomeToHerbShop
	waitmessage
	pokemart LavaridgeTown_HerbShop_BerriesSpecial
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
LavaridgeTown_HerbShop_Pokemart:
    .2byte ITEM_ORAN_BERRY
    .2byte ITEM_CHERI_BERRY
    .2byte ITEM_PECHA_BERRY
    .2byte ITEM_RAWST_BERRY
    .2byte ITEM_ASPEAR_BERRY
    .2byte ITEM_CHESTO_BERRY
    .2byte ITEM_PERSIM_BERRY
	.2byte ITEM_NONE
	release
	end
	
	.align 2
LavaridgeTown_HerbShop_BerriesPhysical:
	.2byte ITEM_CHOPLE_BERRY
	.2byte ITEM_COBA_BERRY
	.2byte ITEM_KEBIA_BERRY
	.2byte ITEM_SHUCA_BERRY
	.2byte ITEM_CHARTI_BERRY
	.2byte ITEM_TANGA_BERRY
	.2byte ITEM_KASIB_BERRY
	.2byte ITEM_BABIRI_BERRY
	.2byte ITEM_NONE
	release
	end
	
	.align 2
LavaridgeTown_HerbShop_BerriesSpecial:
	.2byte ITEM_OCCA_BERRY
	.2byte ITEM_PASSHO_BERRY
	.2byte ITEM_RINDO_BERRY
	.2byte ITEM_WACAN_BERRY
	.2byte ITEM_PAYAPA_BERRY
	.2byte ITEM_YACHE_BERRY
	.2byte ITEM_HABAN_BERRY
	.2byte ITEM_COLBUR_BERRY
	.2byte ITEM_ROSELI_BERRY
	.2byte ITEM_NONE
	release
	end

LavaridgeTown_HerbShop_EventScript_ExpertM::
	msgbox LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike, MSGBOX_NPC
	end

LavaridgeTown_HerbShop_EventScript_OldMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_WHITE_HERB, LavaridgeTown_HerbShop_EventScript_ExplainCharcoal
	msgbox LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine, MSGBOX_DEFAULT
	giveitem ITEM_WHITE_HERB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_WHITE_HERB
	release
	end

LavaridgeTown_HerbShop_EventScript_ExplainCharcoal::
	msgbox LavaridgeTown_HerbShop_Text_ExplainCharcoal, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_HerbShop_Text_WelcomeToHerbShop:
	.string "Welcome to the Berry Shop, home\n"
	.string "of exotic specialty berries!$"

LavaridgeTown_HerbShop_Text_YouveComeToLookAtHerbalMedicine:
	.string "You've come to look at specialty\n"
	.string "berries in Lavaridge?\p"
	.string "That's rather commendable.\p"
	.string "I like you! Take this!$"

LavaridgeTown_HerbShop_Text_ExplainCharcoal:
	.string "Flannery, the new Gym Leader, uses\n"
	.string "herbs during battles at the Gym.$"

LavaridgeTown_HerbShop_Text_HerbalMedicineWorksButMonWillDislike:
	.string "Some berries can confuse\n"
	.string "Pokémon in battle.\p"
	.string "Make sure you know what flavors your\n"
	.string "little buddies like and dislike!$"
