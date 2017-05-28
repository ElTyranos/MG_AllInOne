// UCP //
class haxey_US_Army_Base: B_soldier_F
{
	author = "haxey";
	scope = 2;
	side = 1;
	attendant = 1;
	canDeactivateMines = 1;
	engineer = 1;
	faceType = "Man_A3";
	uniformClass = "rhs_uniform_cu_ucp";
}
class haxey_US_Army_UCP_Infantry_CompCom: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_HQMen";
	displayName = "Company commander";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_M4A1","Leupold_Mk4","Throw","Put"};
	respawnWeapons[] = {"haxey_M4A1","Leupold_Mk4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	linkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_UCP_Infantry_ExecOff: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_HQMen";
	displayName = "Executive officer";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_M4A1","Leupold_Mk4","Throw","Put"};
	respawnWeapons[] = {"haxey_M4A1","Leupold_Mk4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	linkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_UCP_Infantry_1stSerg: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_HQMen";
	displayName = "1st Sergeant";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_M4A1","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_M4A1","Binocular","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_UCP_Infantry_PL: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Platoon Leader";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_M4A1","lerca_1200_black","Throw","Put"};
	respawnWeapons[] = {"haxey_M4A1","lerca_1200_black","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	linkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_UCP_Infantry_SL: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Squad Leader";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_M4A1","lerca_1200_black","Throw","Put"};
	respawnWeapons[] = {"haxey_M4A1","lerca_1200_black","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0,GRE_US_1};
	linkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Squadleader","rhsusf_ach_helmet_headset_ucp",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_UCP_Infantry_TL: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Team Leader";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4M203","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4M203","Binocular","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Teamleader","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_GL";
};
class haxey_US_Army_UCP_Infantry_heli: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Air crew";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_M4A1","Throw","Put"};
	respawnWeapons[] = {"haxey_M4A1","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp","rhsusf_hgu56p",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp","rhsusf_hgu56p",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_US_Army_UCP_Infantry_crew: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Crew";
	Items[] = {ITEMS_ACE_1};
	RespawnItems[] = {ITEMS_ACE_1};
	weapons[] = {"haxey_M4A1","Throw","Put"};
	respawnWeapons[] = {"haxey_M4A1","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp","rhsusf_cvc_green_ess",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp","rhsusf_cvc_green_ess",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_US_Army_UCP_Infantry_AR: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Autorifleman";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M249","Throw","Put"};
	respawnWeapons[] = {"haxey_M249","Throw","Put"};
	magazines[] = {DOT_US_556MG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556MG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_SAW","rhsusf_ach_helmet_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_SAW","rhsusf_ach_helmet_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_AR";
};
class haxey_US_Army_UCP_Infantry_exp: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Explosive specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Repair","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Repair","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_exp";
};
class haxey_US_Army_UCP_Infantry_medic: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Combat Life Saver";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Medic","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Medic","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_Med";
};
class haxey_US_Army_UCP_Infantry_GL: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Grenadier";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4M203","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4M203","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Grenadier","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Grenadier","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_GL";
};
class haxey_US_Army_UCP_Infantry_AT: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Anti-tank";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","rhs_weap_M136","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","rhs_weap_M136","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_US_Army_UCP_Infantry_M: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Marksman";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M14","Throw","Put"};
	respawnWeapons[] = {"haxey_M14","Throw","Put"};
	magazines[] = {DOT_US_762DMR_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_762DMR_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_US_Army_UCP_Infantry_SAT: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-tank specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","CUP_launch_M47","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","CUP_launch_M47","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_Carryall_cbr_SAT";
};
class haxey_US_Army_UCP_Infantry_ASAT: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Assistant anti-tank specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_Carryall_cbr_SAT";
};
class haxey_US_Army_UCP_Infantry_Spotter: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Spotter";
	Items[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	RespawnItems[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	weapons[] = {"haxey_M24","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"haxey_M24","ACE_Vector","Throw","Put"};
	magazines[] = {DOT_US_762SNP_0,GRE_US_0,GRE_US_1};
	respawnMagazines[] = {DOT_US_762SNP_0,GRE_US_0,GRE_US_1};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_UCP_Infantry_Sniper: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Sniper";
	Items[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	RespawnItems[] = {ITEMS_ACE_0,ITEMS_ACE_2};
	weapons[] = {"haxey_M107","ACE_Vector","Throw","Put"};
	respawnWeapons[] = {"haxey_M107","ACE_Vector","Throw","Put"};
	magazines[] = {DOT_US_50BMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_50BMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_US_Army_UCP_Infantry_HG: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M240B","Throw","Put"};
	respawnWeapons[] = {"haxey_M240B","Throw","Put"};
	magazines[] = {DOT_US_762HMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_762HMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_SAW","rhsusf_ach_helmet_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_SAW","rhsusf_ach_helmet_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_HG";
};
class haxey_US_Army_UCP_Infantry_AHG: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner assistant";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","Binocular","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_HG";
};
class haxey_US_Army_UCP_Infantry_AB: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Ammo Bearer";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_HG";
};
class haxey_US_Army_UCP_Infantry_SAA: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","rhs_weap_fim92","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","rhs_weap_fim92","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_SAA";
};
class haxey_US_Army_UCP_Infantry_ASAA: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_SuppMen";
	displayName = "Assistant anti-air specialist";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_SAA";
};
class haxey_US_Army_UCP_Infantry_rflm: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","rhs_weap_M136","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","rhs_weap_M136","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_UCP_eagleaiii_AR";
};
class haxey_US_Army_UCP_Infantry_lite_rflm: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_US_Army_UCP_Infantry_Mort: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Mortar Gunner";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_US_Army_UCP_Infantry_AMort: haxey_US_Army_Base
{
	faction = "haxey_US_Army_UCP";
	vehicleClass = "H_Men";
	displayName = "Mortar Assistant";
	Items[] = {ITEMS_ACE_0};
	RespawnItems[] = {ITEMS_ACE_0};
	weapons[] = {"haxey_M16A4","Throw","Put"};
	respawnWeapons[] = {"haxey_M16A4","Throw","Put"};
	magazines[] = {DOT_US_556LMG_0,GRE_US_0};
	respawnMagazines[] = {DOT_US_556LMG_0,GRE_US_0};
	linkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ucp_Rifleman","rhsusf_ach_helmet_ESS_ucp",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_support_F";
};


// OCP //
class haxey_US_Army_OCP_Infantry_CompCom: haxey_US_Army_UCP_Infantry_CompCom
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Squadleader","rhsusf_ach_helmet_headset_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Squadleader","rhsusf_ach_helmet_headset_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_ExecOff: haxey_US_Army_UCP_Infantry_ExecOff
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Squadleader","rhsusf_ach_helmet_headset_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Squadleader","rhsusf_ach_helmet_headset_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_1stSerg: haxey_US_Army_UCP_Infantry_1stSerg
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_PL: haxey_US_Army_UCP_Infantry_PL
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Squadleader","rhsusf_ach_helmet_headset_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Squadleader","rhsusf_ach_helmet_headset_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_SL: haxey_US_Army_UCP_Infantry_SL
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Squadleader","rhsusf_ach_helmet_headset_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Squadleader","rhsusf_ach_helmet_headset_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_TL: haxey_US_Army_UCP_Infantry_TL
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Teamleader","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_GL";
};
class haxey_US_Army_OCP_Infantry_heli: haxey_US_Army_UCP_Infantry_heli
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp","rhsusf_hgu56p",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp","rhsusf_hgu56p",LINKED_ITEMS_CREW};
};
class haxey_US_Army_OCP_Infantry_crew: haxey_US_Army_UCP_Infantry_crew
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp","rhsusf_cvc_green_ess",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp","rhsusf_cvc_green_ess",LINKED_ITEMS_CREW};
};
class haxey_US_Army_OCP_Infantry_AR: haxey_US_Army_UCP_Infantry_AR
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_SAW","rhsusf_ach_helmet_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_SAW","rhsusf_ach_helmet_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_AR";
};
class haxey_US_Army_OCP_Infantry_exp: haxey_US_Army_UCP_Infantry_exp
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Repair","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Repair","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_exp";
};
class haxey_US_Army_OCP_Infantry_medic: haxey_US_Army_UCP_Infantry_medic
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Medic","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Medic","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_Med";
};
class haxey_US_Army_OCP_Infantry_GL: haxey_US_Army_UCP_Infantry_GL
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Grenadier","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Grenadier","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_GL";
};
class haxey_US_Army_OCP_Infantry_AT: haxey_US_Army_UCP_Infantry_AT
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_M: haxey_US_Army_UCP_Infantry_M
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_SAT: haxey_US_Army_UCP_Infantry_SAT
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_Carryall_cbr_SAT";
};
class haxey_US_Army_OCP_Infantry_ASAT: haxey_US_Army_UCP_Infantry_ASAT
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_Carryall_cbr_SAT";
};
class haxey_US_Army_OCP_Infantry_Spotter: haxey_US_Army_UCP_Infantry_Spotter
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_camo_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_camo_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_Sniper: haxey_US_Army_UCP_Infantry_Sniper
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_camo_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_camo_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_HG: haxey_US_Army_UCP_Infantry_HG
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_SAW","rhsusf_ach_helmet_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_SAW","rhsusf_ach_helmet_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_HG";
};
class haxey_US_Army_OCP_Infantry_AHG: haxey_US_Army_UCP_Infantry_AHG
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_HG";
};
class haxey_US_Army_OCP_Infantry_AB: haxey_US_Army_UCP_Infantry_AB
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_HG";
};
class haxey_US_Army_OCP_Infantry_SAA: haxey_US_Army_UCP_Infantry_SAA
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_SAA";
};
class haxey_US_Army_OCP_Infantry_ASAA: haxey_US_Army_UCP_Infantry_ASAA
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_SAA";
};
class haxey_US_Army_OCP_Infantry_rflm: haxey_US_Army_UCP_Infantry_rflm
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_OCP_eagleaiii_AR";
};
class haxey_US_Army_OCP_Infantry_lite_rflm: haxey_US_Army_UCP_Infantry_lite_rflm
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
};
class haxey_US_Army_OCP_Infantry_Mort: haxey_US_Army_UCP_Infantry_Mort
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_US_Army_OCP_Infantry_AMort: haxey_US_Army_UCP_Infantry_AMort
{
	faction = "haxey_US_Army_OCP";
	uniformClass = "rhs_uniform_cu_ocp";
	linkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_iotv_ocp_Rifleman","rhsusf_ach_helmet_ESS_ocp",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_support_F";
};

// M81 //
class haxey_US_Army_M81_Infantry_CompCom: haxey_US_Army_UCP_Infantry_CompCom
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_M81_Infantry_ExecOff: haxey_US_Army_UCP_Infantry_ExecOff
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_M81_Infantry_1stSerg: haxey_US_Army_UCP_Infantry_1stSerg
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_teamleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_teamleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_M81_Infantry_PL: haxey_US_Army_UCP_Infantry_PL
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_M81_Infantry_SL: haxey_US_Army_UCP_Infantry_SL
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_squadleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_squadleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_M81_Infantry_TL: haxey_US_Army_UCP_Infantry_TL
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_teamleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_teamleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_GL";
};
class haxey_US_Army_M81_Infantry_heli: haxey_US_Army_UCP_Infantry_heli
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_crewman","rhsusf_hgu56p",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhsusf_spc_crewman","rhsusf_hgu56p",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_US_Army_M81_Infantry_crew: haxey_US_Army_UCP_Infantry_crew
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_crewman","rhsusf_cvc_green_ess",LINKED_ITEMS_CREW};
	respawnLinkedItems[] = {"rhsusf_spc_crewman","rhsusf_cvc_green_ess",LINKED_ITEMS_CREW};
	backpack = "";
};
class haxey_US_Army_M81_Infantry_AR: haxey_US_Army_UCP_Infantry_AR
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_mg","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_mg","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_AR";
};
class haxey_US_Army_M81_Infantry_exp: haxey_US_Army_UCP_Infantry_exp
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_corpsman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_corpsman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_exp";
};
class haxey_US_Army_M81_Infantry_medic: haxey_US_Army_UCP_Infantry_medic
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_Med";
};
class haxey_US_Army_M81_Infantry_GL: haxey_US_Army_UCP_Infantry_GL
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_teamleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_teamleader","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_GL";
};
class haxey_US_Army_M81_Infantry_AT: haxey_US_Army_UCP_Infantry_AT
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_US_Army_M81_Infantry_M: haxey_US_Army_UCP_Infantry_M
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_US_Army_M81_Infantry_SAT: haxey_US_Army_UCP_Infantry_SAT
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_Carryall_cbr_SAT";
};
class haxey_US_Army_M81_Infantry_ASAT: haxey_US_Army_UCP_Infantry_ASAT
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_Carryall_cbr_SAT";
};
class haxey_US_Army_M81_Infantry_Spotter: haxey_US_Army_UCP_Infantry_Spotter
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_camo_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_camo_ocp",LINKED_ITEMS_BASE};
	backpack = "tf_rt1523g_rhs";
};
class haxey_US_Army_M81_Infantry_Sniper: haxey_US_Army_UCP_Infantry_Sniper
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_camo_ocp",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_camo_ocp",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_US_Army_M81_Infantry_HG: haxey_US_Army_UCP_Infantry_HG
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_mg","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_mg","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_HG";
};
class haxey_US_Army_M81_Infantry_AHG: haxey_US_Army_UCP_Infantry_AHG
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_HG";
};
class haxey_US_Army_M81_Infantry_AB: haxey_US_Army_UCP_Infantry_AB
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_HG";
};
class haxey_US_Army_M81_Infantry_SAA: haxey_US_Army_UCP_Infantry_SAA
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_SAA";
};
class haxey_US_Army_M81_Infantry_ASAA: haxey_US_Army_UCP_Infantry_ASAA
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_SAA";
};
class haxey_US_Army_M81_Infantry_rflm: haxey_US_Army_UCP_Infantry_rflm
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "haxey_US_Army_M81_eagleaiii_AR";
};
class haxey_US_Army_M81_Infantry_lite_rflm: haxey_US_Army_UCP_Infantry_lite_rflm
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "";
};
class haxey_US_Army_M81_Infantry_Mort: haxey_US_Army_UCP_Infantry_Mort
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_US_Army_M81_Infantry_AMort: haxey_US_Army_UCP_Infantry_AMort
{
	faction = "haxey_US_Army_M81";
	uniformClass = "rhs_uniform_FROG01_m81";
	linkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	respawnLinkedItems[] = {"rhsusf_spc_rifleman","rhsusf_ach_helmet_M81",LINKED_ITEMS_BASE};
	backpack = "O_Mortar_01_support_F";
};
