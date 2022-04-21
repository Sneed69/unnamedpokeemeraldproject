MauvilleCity_House2_MapScripts::
	.byte 0

MauvilleCity_House2_EventScript_Woman::
	lock
	faceplayer
	msgbox MauvilleCity_House2_Text_BuyHarborMailAtSlateport, MSGBOX_DEFAULT
	release
	end

MauvilleCity_House2_Text_BuyHarborMailAtSlateport:
	.string "I'm losing this house because of my\n"
	.string "gambling debts.\p"
	.string "I will have to move into a Secret Base\n"
	.string "with my Pokémon…\p"
	.string "Know any good spots?$"
