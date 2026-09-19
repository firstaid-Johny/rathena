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

	{ "mail_enable",                        &battle_config.mail_enable,                     1,      0,      2,              },
	{ "reset_sp_on_pvp_gvg_exit",           &battle_config.reset_sp_on_pvp_gvg_exit,        0,      0,      1,              },
	{ "max_subrace",                       &battle_config.max_subrace,                    80,     0,      100,            },
	{ "max_subsize",                       &battle_config.max_subsize,                    80,     0,      100,            },
	{ "max_subele",                        &battle_config.max_subele,                     80,     0,      100,            },
	{ "max_long_attack_def",               &battle_config.max_long_attack_def,            80,     0,      100,            },
