// Copyright (c) rAthena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom battle config structure
 * Place the definition of custom battle configuration structure members in this file.
 *
 * Make sure that the name you want is not already taken by looking into battle.hpp
 * Do not forget to add initilization logic to battle_config_init.inc
 *
 * Format:
 *	 <datatype> name;
 **/

	int32 mail_enable;
	int32 reset_sp_on_pvp_gvg_exit;
	int32 max_subrace;
	int32 max_subsize;
	int32 max_subele;
	int32 max_long_attack_def;
	int32 npc_sell_price_cap[IT_MAX];
	int32 npc_sell_overcharge_enable;
	int32 drop_effect_weapon;
	int32 drop_effect_armor;
	int32 drop_effect_card;
	int32 vip_weight_increase;
int party_bonus_system_enable;
int party_bonus_same_map_minimum;
