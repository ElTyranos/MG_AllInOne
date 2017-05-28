class O_Soldier_base_F;
class O_soldier_F: O_Soldier_base_F {
	class EventHandlers;
};
class haxey_RU_Base: O_soldier_F {
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faceType = "Man_A3";
};
class haxey_MSV_Base: haxey_RU_Base {
	faction = "haxey_faction_MSV_EMR";
	uniformClass = "rhs_uniform_msv_emr";
};
class haxey_MSV_EMR_Infantry_CompCom: haxey_MSV_Base {
	vehicleClass = "H_HQMen";
	displayName = "Company commander";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0,GRE_RU_1};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0,GRE_RU_1};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_EMR_Infantry_DeputyOff: haxey_MSV_Base {
	displayName = "Deputy officer";
};
class haxey_MSV_EMR_Infantry_1stSerg: haxey_MSV_Base {
	vehicleClass = "H_HQMen";
	displayName = "1st Sergeant";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0,GRE_RU_1};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0,GRE_RU_1};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_EMR_Infantry_PL: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Platoon Leader";
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0,GRE_RU_1};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0,GRE_RU_1};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
};
class haxey_MSV_EMR_Infantry_APL: haxey_MSV_Base {
	displayName = "Assistant Platoon Leader";
};
class haxey_MSV_EMR_Infantry_SL: haxey_MSV_Base {
	displayName = "Squad Leader";
};
class haxey_MSV_EMR_Infantry_TL: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Team Leader";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_EMR_Infantry_heli: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Air crew";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_crew: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Crew";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_AR: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Autorifleman";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_RPK74M","Throw","Put"};
	respawnWeapons[] = {"haxey_RPK74M","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnMagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_EMR_Infantry_exp: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Explosive specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_engineer","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_engineer","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_exp";
};
class haxey_MSV_EMR_Infantry_medic: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Combat Life Saver";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_medic","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_medic","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_Med";
};
class haxey_MSV_EMR_Infantry_GL: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Grenadier";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_EMR_Infantry_AT: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Anti-tank";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_rhs_rpg_AT";
};
class haxey_MSV_EMR_Infantry_M: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Marksman";
	Items[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	RespawnItems[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	weapons[] = {"haxey_SVD","Throw","Put"};
	respawnWeapons[] = {"haxey_SVD","Throw","Put"};
	magazines[] = {DOT_RU_762DMR_0,GRE_RU_0};
	respawnMagazines[] = {DOT_RU_762DMR_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_SAT: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Anti-tank specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_Carryall_SAT";
};
class haxey_MSV_EMR_Infantry_ASAT: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Assistant anti-tank specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_Carryall_SAT";
};
class haxey_MSV_EMR_Infantry_Spotter: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Spotter";
	Items[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	RespawnItems[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	weapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_EMR_Infantry_Sniper: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Sniper";
	Items[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	RespawnItems[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	weapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	magazines[] = {" "," "," "," "," "," ",GRE_RU_0};
	respawnMagazines[] = {" "," "," "," "," "," ",GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_HG: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Gunner";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] = {DOT_RU_762HMG_0,GRE_RU_0};
	respawnMagazines[] = {DOT_RU_762HMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_EMR_Infantry_AHG: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Gunner assistant";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_EMR_Infantry_AB: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Ammo Bearer";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_EMR_Infantry_SAA: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_EMR_Infantry_ASAA: haxey_MSV_Base {
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_EMR_Infantry_rflm: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_Rflm";
};
class haxey_MSV_EMR_Infantry_lite_rflm: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_Mort: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Mortar Gunner";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_MSV_EMR_Infantry_AMort: haxey_MSV_Base {
	vehicleClass = "H_Men";
	displayName = "Mortar Assistant";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	respawnmagazines[] = {DOT_RU_545LMG_0,GRE_RU_0};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_support_F";
};

class haxey_MSV_Flora_Infantry_CompCom: haxey_MSV_EMR_Infantry_CompCom {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_DeputyOff: haxey_MSV_EMR_Infantry_DeputyOff {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_1stSerg: haxey_MSV_EMR_Infantry_1stSerg {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_PL: haxey_MSV_EMR_Infantry_PL {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_APL: haxey_MSV_EMR_Infantry_APL {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_SL: haxey_MSV_EMR_Infantry_SL {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_TL: haxey_MSV_EMR_Infantry_TL {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_vog_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_vog_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_Flora_Infantry_heli: haxey_MSV_EMR_Infantry_heli {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_crew: haxey_MSV_EMR_Infantry_crew {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_AR: haxey_MSV_EMR_Infantry_AR {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_Flora_Infantry_exp: haxey_MSV_EMR_Infantry_exp {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_engineer","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_engineer","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_exp";
};
class haxey_MSV_Flora_Infantry_medic: haxey_MSV_EMR_Infantry_medic {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_medic","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_medic","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_Med";
};
class haxey_MSV_Flora_Infantry_GL: haxey_MSV_EMR_Infantry_GL {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_vog","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_vog","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_Flora_Infantry_AT: haxey_MSV_EMR_Infantry_AT {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_rhs_rpg_AT";
};
class haxey_MSV_Flora_Infantry_M: haxey_MSV_EMR_Infantry_M {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_SAT: haxey_MSV_EMR_Infantry_SAT {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_MSV_Flora_Infantry_ASAT: haxey_MSV_EMR_Infantry_ASAT {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_MSV_Flora_Infantry_Spotter: haxey_MSV_EMR_Infantry_Spotter {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_Sniper: haxey_MSV_EMR_Infantry_Sniper {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_HG: haxey_MSV_EMR_Infantry_HG {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_Flora_Infantry_AHG: haxey_MSV_EMR_Infantry_AHG {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_Flora_Infantry_AB: haxey_MSV_EMR_Infantry_AB {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_Flora_Infantry_SAA: haxey_MSV_EMR_Infantry_SAA {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_Flora_Infantry_ASAA: haxey_MSV_EMR_Infantry_ASAA {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_Flora_Infantry_rflm: haxey_MSV_EMR_Infantry_rflm {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_Rflm";
};
class haxey_MSV_Flora_Infantry_lite_rflm: haxey_MSV_EMR_Infantry_lite_rflm {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_Mort: haxey_MSV_EMR_Infantry_Mort {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_MSV_Flora_Infantry_AMort: haxey_MSV_EMR_Infantry_AMort {
	faction = "haxey_faction_MSV_Flora";
	uniformClass = "rhs_uniform_flora";
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_support_F";
};


class haxey_MSV_M88_Infantry_CompCom: haxey_MSV_EMR_Infantry_CompCom {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_DeputyOff: haxey_MSV_EMR_Infantry_DeputyOff {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_1stSerg: haxey_MSV_EMR_Infantry_1stSerg {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_PL: haxey_MSV_EMR_Infantry_PL {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_APL: haxey_MSV_EMR_Infantry_APL {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_SL: haxey_MSV_EMR_Infantry_SL {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_TL: haxey_MSV_EMR_Infantry_TL {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_M88_Infantry_heli: haxey_MSV_EMR_Infantry_heli {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_MSV_M88_Infantry_crew: haxey_MSV_EMR_Infantry_crew {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_MSV_M88_Infantry_AR: haxey_MSV_EMR_Infantry_AR {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_M88_Infantry_exp: haxey_MSV_EMR_Infantry_exp {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_engineer","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_engineer","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_exp";
};
class haxey_MSV_M88_Infantry_medic: haxey_MSV_EMR_Infantry_medic {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_medic","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_medic","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_Med";
};
class haxey_MSV_M88_Infantry_GL: haxey_MSV_EMR_Infantry_GL {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_vog","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_M88_Infantry_AT: haxey_MSV_EMR_Infantry_AT {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_rhs_rpg_AT";
};
class haxey_MSV_M88_Infantry_M: haxey_MSV_EMR_Infantry_M {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_M88_Infantry_SAT: haxey_MSV_EMR_Infantry_SAT {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_MSV_M88_Infantry_ASAT: haxey_MSV_EMR_Infantry_ASAT {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_MSV_M88_Infantry_Spotter: haxey_MSV_EMR_Infantry_Spotter {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess_bala",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess_bala",LINKED_ITEMS_BASE};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_Sniper: haxey_MSV_EMR_Infantry_Sniper {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess_bala",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess_bala",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_M88_Infantry_HG: haxey_MSV_EMR_Infantry_HG {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_M88_Infantry_AHG: haxey_MSV_EMR_Infantry_AHG {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_M88_Infantry_AB: haxey_MSV_EMR_Infantry_AB {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_M88_Infantry_SAA: haxey_MSV_EMR_Infantry_SAA {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_M88_Infantry_ASAA: haxey_MSV_EMR_Infantry_ASAA {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_M88_Infantry_rflm: haxey_MSV_EMR_Infantry_rflm {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_M88_Infantry_lite_rflm: haxey_MSV_EMR_Infantry_lite_rflm {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_MSV_M88_Infantry_Mort: haxey_MSV_EMR_Infantry_Mort {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_MSV_M88_Infantry_AMort: haxey_MSV_EMR_Infantry_AMort {
	faction = "haxey_faction_MSV_M88";
	uniformClass = "rhs_uniform_m88_patchless";
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_support_F";
};
