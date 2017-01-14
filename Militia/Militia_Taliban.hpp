
class haxey_Milice_Taliban_Infantry_Warlord: O_officer_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_Warlord";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_HQMen";
	displayName = "Warlord";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_akm","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm","Binocular","Throw","Put"};
	magazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0,GRE_MIL_1};
	respawnmagazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0,GRE_MIL_1};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {LINKED_ITEMS_MIL};
	backpack = "B_FieldPack_cbr";
};
class haxey_Milice_Taliban_Infantry_VC: haxey_Milice_Taliban_Infantry_Warlord
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_VC";
	displayName = "Village chief";
};
class haxey_Milice_Taliban_Infantry_RH: O_Soldier_TL_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_RH";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_Men";
	displayName = "Right-hand man";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_akm","rhs_weap_rshg2","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm","rhs_weap_rshg2","Binocular","Throw","Put"};
	magazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {LINKED_ITEMS_MIL};
	backpack = "B_FieldPack_cbr";
};
class haxey_Milice_Taliban_Infantry_AR: O_soldier_AR_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_AR";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_Men";
	displayName = "Merchant";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"hlc_rifle_rpk","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
	magazines[] = {DOT_MIL_762MG_0,GRE_MIL_0};
	respawnMagazines[] = {DOT_MIL_762MG_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {LINKED_ITEMS_MIL};
	backpack = "B_FieldPack_cbr";
};
class haxey_Milice_Taliban_Infantry_exp: O_soldier_exp_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_exp";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_Men";
	displayName = "Mechanic";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_aks74u","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {LINKED_ITEMS_MIL};
	backpack = "B_FieldPack_cbr";
};
class haxey_Milice_Taliban_Infantry_AT: O_soldier_LAT_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_AT";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_Men";
	displayName = "Villager Light-AT";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_aks74u","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {LINKED_ITEMS_MIL};
	backpack = "B_FieldPack_cbr";
};
class haxey_Milice_Taliban_Infantry_HG: O_HeavyGunner_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_HG";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_SuppMen";
	displayName = "Villager";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_aks74u","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnMagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {LINKED_ITEMS_MIL};
	backpack = "RHS_DShkM_Gun_Bag";
};
class haxey_Milice_Taliban_Infantry_AHG: O_soldier_AAR_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_AHG";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_SuppMen";
	displayName = "Villager AHG";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_aks74u","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Binocular","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {LINKED_ITEMS_MIL};
	backpack = "RHS_DShkM_TripodHigh_Bag";
};
class haxey_Milice_Taliban_Infantry_AB: O_Soldier_A_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_AB";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_SuppMen";
	displayName = "Carrier Villager";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_m38","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m38","Throw","Put"};
	magazines[] = {DOT_MIL_762R_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_762R_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_MIL};
	backpack = "B_FieldPack_cbr";
};
class haxey_Milice_Taliban_Infantry_rflm: O_soldier_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_Men";
	displayName = "Villager";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_m38","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m38","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {DOT_MIL_762R_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_762R_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_MIL};
	backpack = "B_FieldPack_cbr";
};
class haxey_Milice_Taliban_Infantry_lite_rflm: O_Soldier_lite_F
{
	_generalMacro = "haxey_Milice_Taliban_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	vehicleClass = "H_Men";
	displayName = "Villager";
	uniformClass = "LOP_U_AM_Fatigue_01_2";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_IFA3_fnc_random_gear;};";
	};
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_m38","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_m38","Throw","Put"};
	magazines[] = {DOT_MIL_762R_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_762R_0,GRE_MIL_0};
	linkedItems[] = {LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {LINKED_ITEMS_MIL};
	backpack = "";
};
