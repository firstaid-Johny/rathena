// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config initializations
 * Place the definition of custom battle configuration initializations in this file.
 *
 * Do not forget to add a comma at the end of the line, if you want to add another config
 *
 * Format:
 *	 { "name", &battle_config.<variable name>, <default value>, <minimum value>, <maximum value> },
 **/

	{ "drop_effect_weapon", &battle_config.drop_effect_weapon, -1, -1, DROPEFFECT_MAX - 1 },
	{ "drop_effect_armor", &battle_config.drop_effect_armor, -1, -1, DROPEFFECT_MAX - 1 },
	{ "drop_effect_card", &battle_config.drop_effect_card, -1, -1, DROPEFFECT_MAX - 1 },

	{ "npc_sell_overcharge_enable", &battle_config.npc_sell_overcharge_enable, 1, 0, 1 },
	{ "vip_weight_increase", &battle_config.vip_weight_increase, 300, 0, INT_MAX },

	{ "mail_enable",						&battle_config.mail_enable,                    		1,      	0,      	2,              },
	{ "reset_sp_on_pvp_gvg_exit",			&battle_config.reset_sp_on_pvp_gvg_exit,       		0,      	0,      	1,              },
	{ "max_subrace",						&battle_config.max_subrace,                    		80,     	0,      	100,            },
	{ "max_subsize",						&battle_config.max_subsize,                    		80,     	0,      	100,            },
	{ "max_subele",							&battle_config.max_subele,                     		80,     	0,      	100,            },
	{ "max_long_attack_def",				&battle_config.max_long_attack_def,            		80,     	0,      	100,            },
	{ "npc_sell_cap_healing",				&battle_config.npc_sell_price_cap[IT_HEALING], 		-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_usable",				&battle_config.npc_sell_price_cap[IT_USABLE], 		-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_etc",					&battle_config.npc_sell_price_cap[IT_ETC], 			-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_armor",					&battle_config.npc_sell_price_cap[IT_ARMOR], 		-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_weapon",				&battle_config.npc_sell_price_cap[IT_WEAPON], 		-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_card",					&battle_config.npc_sell_price_cap[IT_CARD], 		-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_petegg",				&battle_config.npc_sell_price_cap[IT_PETEGG], 		-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_petarmor",				&battle_config.npc_sell_price_cap[IT_PETARMOR], 	-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_ammo",					&battle_config.npc_sell_price_cap[IT_AMMO], 		-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_delayconsume",			&battle_config.npc_sell_price_cap[IT_DELAYCONSUME], -1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_shadowgear",			&battle_config.npc_sell_price_cap[IT_SHADOWGEAR], 	-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_cash",					&battle_config.npc_sell_price_cap[IT_CASH], 		-1, 		-1, 		MAX_ZENY 		},
	{ "npc_sell_cap_unknown",				&battle_config.npc_sell_price_cap[IT_UNKNOWN], 		-1, 		-1, 		MAX_ZENY 		},
{ "party_bonus_system_enable", &battle_config.party_bonus_system_enable, 0, 0, 1 },
{ "party_bonus_same_map_minimum", &battle_config.party_bonus_same_map_minimum, 1, 1, MAX_PARTY },
