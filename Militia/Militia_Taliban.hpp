class haxey_Taliban_base: O_soldier_F {
	author = "haxey";
	scope = 1;
	side = 2;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faction = "haxey_faction_Milice_Taliban";
	uniformClass = "btc_u_afghan_01";
	class EventHandlers: EventHandlers
	{
		init = "if (local (_this select 0)) then {[(_this select 0), 'MIL_TAL'] call BG21_MG_fnc_random_gear;};";
	};
	backpack = "";
};
class haxey_Milice_Taliban_Infantry_PL: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_HQMen";
	displayName = "Warlord";
	Items[] = {ITEMS_ACE_3,ACRE_PRC343};
	RespawnItems[] = {ITEMS_ACE_3,ACRE_PRC343};
	weapons[] = {"rhs_weap_akm","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm","Binocular","Throw","Put"};
	magazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0,GRE_MIL_1};
	respawnmagazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0,GRE_MIL_1};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_MIL};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_MIL};
};
class haxey_Milice_Taliban_Infantry_SL: haxey_Milice_Taliban_Infantry_PL {
	scope = 2;
	displayName = "Moudjahid Party Leader";
	weapons[] = {"rhs_weap_aks74_2","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74_2","Binocular","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};	
};
class haxey_Milice_Taliban_Infantry_TL: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_Men";
	displayName = "Moudjahid Team Leader";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_akms","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akms","Binocular","Throw","Put"};
	magazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest","haxey_invisible_vest",LINKED_ITEMS_BASE};
};

class haxey_Milice_Taliban_Infantry_AR: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_Men";
	displayName = "Moudjahid (RPK 47)";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"hlc_rifle_rpk","Throw","Put"};
	respawnWeapons[] = {"hlc_rifle_rpk","Throw","Put"};
	magazines[] = {DOT_MIL_762MG_0,GRE_MIL_0};
	respawnMagazines[] = {DOT_MIL_762MG_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
};
class haxey_Milice_Taliban_Infantry_M: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_Men";
	displayName = "Moudjahid (Marksman)";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"haxey_m76","Throw","Put"};
	respawnWeapons[] = {"haxey_m76","Throw","Put"};
	magazines[] = {DOT_MIL_762DMR_0,GRE_MIL_0};
	respawnMagazines[] = {DOT_MIL_762DMR_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
};
class haxey_Milice_Taliban_Infantry_exp: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_Men";
	displayName = "Martyr (Explosives specialist)";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_ak74_2","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_ak74_2","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	backpack = "haxey_B_FieldPack_cbr_IED";
};
class haxey_Milice_Taliban_Infantry_LAT: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_Men";
	displayName = "Moudjahid (RPG-26)";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_ak74_2","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_ak74_2","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
};
class haxey_Milice_Taliban_Infantry_AT: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_Men";
	displayName = "Moudjahid (AT)";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_aks74_2","rhs_weap_rpg7","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74_2","rhs_weap_rpg7","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	backpack = "haxey_O_rhs_rpg_AT";
};

class haxey_Milice_Taliban_Infantry_rflm_1: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_Men";
	displayName = "Moudjahid";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_akms","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akms","Throw","Put"};
	magazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_762LMG_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
};
class haxey_Milice_Taliban_Infantry_rflm_2: haxey_Milice_Taliban_Infantry_rflm_1 {
	weapons[] = {"rhs_weap_akm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_akm","Throw","Put"};
};
class haxey_Milice_Taliban_Infantry_rflm_3: haxey_Milice_Taliban_Infantry_rflm_1 {
	weapons[] = {"rhs_weap_aks74_2","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74_2","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};	
};
class haxey_Milice_Taliban_Infantry_rflm_4: haxey_Milice_Taliban_Infantry_rflm_3 {
	weapons[] = {"rhs_weap_ak74_2","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_ak74_2","Throw","Put"};
};

class haxey_Milice_Taliban_Infantry_HG: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_SuppMen";
	displayName = "Moudjahid (PKM)";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] = {DOT_MIL_762HMG_0,GRE_MIL_0};
	respawnMagazines[] = {DOT_MIL_762HMG_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_HG";
};
class haxey_Milice_Taliban_Infantry_AHG: haxey_Milice_Taliban_Infantry_HG {
	displayName = "Moudjahid (Assist. PKM)";
	weapons[] = {"rhs_weap_aks74u","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Binocular","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnmagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
};

class haxey_Milice_Taliban_Infantry_DShKM: haxey_Taliban_base {
	scope = 2;
	vehicleClass = "H_SuppMen";
	displayName = "Moudjahid (DShKM)";
	Items[] = {ITEMS_ACE_3};
	RespawnItems[] = {ITEMS_ACE_3};
	weapons[] = {"rhs_weap_aks74u","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Throw","Put"};
	magazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	respawnMagazines[] = {DOT_MIL_545LMG_0,GRE_MIL_0};
	linkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"haxey_invisible_vest",LINKED_ITEMS_BASE};
	backpack = "RHS_DShkM_Gun_Bag";
};
class haxey_Milice_Taliban_Infantry_ADShKM: haxey_Milice_Taliban_Infantry_DShKM {
	displayName = "Moudjahid (Assist. DShKM)";
	weapons[] = {"rhs_weap_aks74u","Binocular","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_aks74u","Binocular","Throw","Put"};
	backpack = "RHS_DShkM_TripodHigh_Bag";
};