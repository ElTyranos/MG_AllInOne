class O_officer_F;
class O_Soldier_SL_F;
class O_Soldier_TL_F;
class O_helicrew_F;
class O_crew_F;
class O_soldier_AR_F;
class O_soldier_exp_F;
class O_medic_F;
class O_Soldier_GL_F;
class O_soldier_LAT_F;
class O_soldier_M_F;
class O_soldier_AT_F;
class O_spotter_F;
class O_sniper_F;
class O_HeavyGunner_F;
class O_soldier_AAR_F;
class O_Soldier_A_F;
class O_soldier_AA_F;
class O_soldier_AAA_F;
class O_soldier_F;
class O_Soldier_lite_F;
class O_soldier_AAT_F;
class O_support_Mort_F;
class O_support_AMort_F;
class haxey_MSV_EMR_Infantry_CompCom: O_officer_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_CompCom";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_HQMen";
	displayName = "Company commander";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_EMR_Infantry_DeputyOff: haxey_MSV_EMR_Infantry_CompCom
{
	_generalMacro = "haxey_MSV_EMR_Infantry_DeputyOff";
	displayName = "Deputy officer";
};
class haxey_MSV_EMR_Infantry_1stSerg: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_1stSerg";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_HQMen";
	displayName = "1st Sergeant";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_EMR_Infantry_PL: haxey_MSV_EMR_Infantry_1stSerg
{
	_generalMacro = "haxey_MSV_EMR_Infantry_PL";
	vehicleClass = "H_Men";
	displayName = "Platoon Leader";
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
};
class haxey_MSV_EMR_Infantry_APL: haxey_MSV_EMR_Infantry_PL
{
	_generalMacro = "haxey_MSV_EMR_Infantry_APL";
	displayName = "Assistant Platoon Leader";
};
class haxey_MSV_EMR_Infantry_SL: haxey_MSV_EMR_Infantry_PL
{
	_generalMacro = "haxey_MSV_EMR_Infantry_SL";
	displayName = "Squad Leader";
};
class haxey_MSV_EMR_Infantry_TL: O_Soldier_TL_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_TL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Team Leader";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_sidor_GL";
};
class haxey_MSV_EMR_Infantry_heli: O_helicrew_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_heli";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Air crew";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_crew: O_crew_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_crew";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Crew";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_AR: O_soldier_AR_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_AR";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Autorifleman";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_RPK74M","Throw","Put"};
	respawnWeapons[] = {"haxey_RPK74M","Throw","Put"};
	magazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_sidor_AR";
};
class haxey_MSV_EMR_Infantry_exp: O_soldier_exp_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_exp";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Explosive specialist";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_engineer","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_engineer","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_sidor_exp";
};
class haxey_MSV_EMR_Infantry_medic: O_medic_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_medic";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Combat Life Saver";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_medic","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_medic","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_umbts_Med";
};
class haxey_MSV_EMR_Infantry_GL: O_Soldier_GL_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_GL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Grenadier";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_sidor_GL";
};
class haxey_MSV_EMR_Infantry_AT: O_soldier_LAT_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_AT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Anti-tank";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_rhs_rpg_AT";
};
class haxey_MSV_EMR_Infantry_M: O_soldier_M_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_M";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Marksman";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_SVD","Throw","Put"};
	respawnWeapons[] = {"haxey_SVD","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_SAT: O_soldier_AT_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_SAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-tank specialist";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_Carryall_SAT";
};
class haxey_MSV_EMR_Infantry_ASAT: O_soldier_AAT_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_ASAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Assistant anti-tank specialist";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_Carryall_SAT";
};
class haxey_MSV_EMR_Infantry_Spotter: O_spotter_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_Spotter";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Spotter";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_EMR_Infantry_Sniper: O_sniper_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_Sniper";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Sniper";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	magazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_HG: O_HeavyGunner_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_HG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_sidor_HG";
};
class haxey_MSV_EMR_Infantry_AHG: O_soldier_AAR_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_AHG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner assistant";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_sidor_HG";
};
class haxey_MSV_EMR_Infantry_AB: O_Soldier_A_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_AB";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Ammo Bearer";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_sidor_AR";
};
class haxey_MSV_EMR_Infantry_SAA: O_soldier_AA_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_SAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_umbts_SAA";
};
class haxey_MSV_EMR_Infantry_ASAA: O_soldier_AAA_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_ASAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_umbts_SAA";
};
class haxey_MSV_EMR_Infantry_rflm: O_soldier_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_MSV_EMR_sidor_Rflm";
};
class haxey_MSV_EMR_Infantry_lite_rflm: O_Soldier_lite_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_EMR_Infantry_Mort: O_support_Mort_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_Mort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Mortar Gunner";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_MSV_EMR_Infantry_AMort: O_support_AMort_F
{
	_generalMacro = "haxey_MSV_EMR_Infantry_AMort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Men";
	displayName = "Mortar Assistant";
	uniformClass = "rhs_uniform_msv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_support_F";
};
class RHS_UAZ_MSV_01;
class rhs_tigr_msv;
class rhs_gaz66_msv;
class rhs_uaz_open_MSV_01;
class rhs_btr80_msv;
class rhs_btr80a_msv;
class haxey_MSV_EMR_RHS_UAZ_MSV_01: RHS_UAZ_MSV_01
{
	_generalMacro = "haxey_MSV_EMR_RHS_UAZ_MSV_01";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "UAZ MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 20;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	 };
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_tigr_msv: rhs_tigr_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_tigr_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "GAZ Tigr MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_gaz66_msv: rhs_gaz66_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_gaz66_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "GAZ-66 MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_uaz_open_MSV_01: rhs_uaz_open_MSV_01
{
	_generalMacro = "haxe_rhs_uaz_open_MSV_01";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "UAZ MSV (open)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_btr80_msv: rhs_btr80_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_btr80_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80 MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_btr80a_msv: rhs_btr80a_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_btr80a_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80A MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class rhs_bmp1k_msv;
class rhs_bmp2k_msv;
class rhs_brm1k_msv;
class rhs_prp3_msv;
class rhs_bmp1d_msv;
class rhs_bmp1p_msv;
class rhs_bmp2_msv;
class rhs_bmp2d_msv;
class rhs_bmp3_late_msv;
class rhs_bmp3m_msv;
class rhs_bmp3mera_msv;
class haxey_MSV_EMR_RHS_bmp1k_msv: rhs_bmp1k_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp1k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_bmp2k_msv: rhs_bmp2k_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp2k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_brm1k_msv: rhs_brm1k_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp1k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BRM-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_prp3_msv: rhs_prp3_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_prp3_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "PRP-3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_bmp1d_msv: rhs_bmp1d_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp1d_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1D";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_bmp1p_msv: rhs_bmp1p_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp1p_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1P";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_bmp2_msv: rhs_bmp2_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp2_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_bmp2d_msv: rhs_bmp2d_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp2d_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2D";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_bmp3_late_msv: rhs_bmp3_late_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp3_late_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_bmp3m_msv: rhs_bmp3m_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp3m_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_bmp3mera_msv: rhs_bmp3mera_msv
{
	_generalMacro = "haxey_MSV_EMR_RHS_bmp3mera_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3M (Kaktus ERA)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class rhs_t72bc_tv;
class rhs_t72bd_tv;
class rhs_t80a;
class rhs_t80bv;
class rhs_t80bvk;
class rhs_t80u;
class rhs_t80uk;
class rhs_t90a_tv;
class rhs_zsu234_aa;
class haxey_MSV_EMR_RHS_zsu234_aa: rhs_zsu234_aa
{
	_generalMacro = "haxey_MSV_EMR_RHS_zsu234_aa";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "ZSU-23-4V";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_t72bc_tv: rhs_t72bc_tv
{
	_generalMacro = "haxey_MSV_EMR_RHS_t72bc_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "T-73B";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_t72bd_tv: rhs_t72bd_tv
{
	_generalMacro = "haxey_MSV_EMR_RHS_t72bd_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "T-72B3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_t80a: rhs_t80a
{
	_generalMacro = "haxey_MSV_EMR_RHS_t80a";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "T-80A";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_t80bv: rhs_t80bv
{
	_generalMacro = "haxey_MSV_EMR_RHS_t80bv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "T-80BV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_t80bvk: rhs_t80bvk
{
	_generalMacro = "haxey_MSV_EMR_RHS_t80bvk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "T-80BVK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_t80u: rhs_t80u
{
	_generalMacro = "haxey_MSV_EMR_RHS_t80u";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "T-80U";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_t80uk: rhs_t80uk
{
	_generalMacro = "haxey_MSV_EMR_RHS_t80uk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "T-80UK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_t90a_tv: rhs_t90a_tv
{
	_generalMacro = "haxey_MSV_EMR_RHS_t90a_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Armored";
	displayName = "T-90A";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class RHS_Mi8mt_vvsc;
class rhs_ka60_grey;
class RHS_Mi8MTV3_UPK23_vvsc;
class RHS_Mi24Vt_vvs;
class RHS_Mi24P_AT_vvsc;
class RHS_Mi24V_UPK23_vvsc;
class RHS_Mi24V_AT_vvsc;
class RHS_Ka52_UPK23_vvsc;
class haxey_MSV_EMR_RHS_Mi8mt_vvsc: RHS_Mi8mt_vvsc
{
	_generalMacro = "haxey_MSV_EMR_RHS_Mi8mt_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-8MT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_ka60_grey: rhs_ka60_grey
{
	_generalMacro = "haxey_MSV_EMR_RHS_ka60_grey";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Air";
	displayName = "Ka-60";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 16;
		};
	};
};
class haxey_MSV_EMR_RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_EMR_RHS_Mi8MTV3_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-8MTV3 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 28;
		};
	};
};
class haxey_MSV_EMR_RHS_Mi24Vt_vvs: RHS_Mi24Vt_vvs
{
	_generalMacro = "haxey_MSV_EMR_RHS_Mi24Vt_vvs";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-24VT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvsc
{
	_generalMacro = "haxey_MSV_EMR_RHS_Mi24P_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-24P (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 16;
		};
	};
};
class haxey_MSV_EMR_RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_EMR_RHS_Mi24V_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (UPK))";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 28;
		};
	};
};
class haxey_MSV_EMR_RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvsc
{
	_generalMacro = "haxey_MSV_EMR_RHS_Mi24V_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_EMR_RHS_Ka52_UPK23_vvsc: RHS_Ka52_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_EMR_RHS_Ka52_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_EMR";
	vehicleClass = "H_Air";
	displayName = "Ka-52 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_Infantry_CompCom: O_officer_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_CompCom";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_HQMen";
	displayName = "Company commander";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_DeputyOff: O_officer_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_DeputyOff";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_HQMen";
	displayName = "Deputy officer";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_1stSerg: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_1stSerg";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_HQMen";
	displayName = "1st Sergeant";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_PL: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Platoon Leader";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_APL: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Assistant Platoon Leader";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_SL: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_SL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Squad Leader";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_TL: O_Soldier_TL_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_TL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Team Leader";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_vog_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_vog_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_Flora_Infantry_heli: O_helicrew_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_heli";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Air crew";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_crew: O_crew_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_crew";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Crew";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_AR: O_soldier_AR_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_AR";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Autorifleman";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_RPK74M","Throw","Put"};
	respawnWeapons[] = {"haxey_RPK74M","Throw","Put"};
	magazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_Flora_Infantry_exp: O_soldier_exp_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_exp";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Explosive specialist";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_engineer","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_engineer","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_exp";
};
class haxey_MSV_Flora_Infantry_medic: O_medic_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_medic";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Combat Life Saver";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_medic","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_medic","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_Med";
};
class haxey_MSV_Flora_Infantry_GL: O_Soldier_GL_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_GL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Grenadier";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_vog","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_vog","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_Flora_Infantry_AT: O_soldier_LAT_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_AT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Anti-tank";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_rhs_rpg_AT";
};
class haxey_MSV_Flora_Infantry_M: O_soldier_M_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_M";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Marksman";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_SVD","Throw","Put"};
	respawnWeapons[] = {"haxey_SVD","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_SAT: O_soldier_AT_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_SAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-tank specialist";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_MSV_Flora_Infantry_ASAT: O_soldier_AAT_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_ASAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Assistant anti-tank specialist";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_MSV_Flora_Infantry_Spotter: O_spotter_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_Spotter";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Spotter";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_Flora_Infantry_Sniper: O_sniper_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_Sniper";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Sniper";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	magazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_HG: O_HeavyGunner_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_HG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_Flora_Infantry_AHG: O_soldier_AAR_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_AHG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner assistant";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_Flora_Infantry_AB: O_Soldier_A_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_AB";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Ammo Bearer";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_Flora_Infantry_SAA: O_soldier_AA_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_SAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_Flora_Infantry_ASAA: O_soldier_AAA_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_ASAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_Flora_Infantry_rflm: O_soldier_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_Rflm";
};
class haxey_MSV_Flora_Infantry_lite_rflm: O_Soldier_lite_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_Flora_Infantry_Mort: O_support_Mort_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_Mort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Mortar Gunner";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_MSV_Flora_Infantry_AMort: O_support_AMort_F
{
	_generalMacro = "haxey_MSV_Flora_Infantry_AMort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Men";
	displayName = "Mortar Assistant";
	uniformClass = "rhs_uniform_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_support_F";
};
class haxey_MSV_Flora_RHS_UAZ_MSV_01: RHS_UAZ_MSV_01
{
	_generalMacro = "haxey_MSV_Flora_RHS_UAZ_MSV_01";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "UAZ MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 20;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	 };
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_tigr_msv: rhs_tigr_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_tigr_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "GAZ Tigr MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_gaz66_msv: rhs_gaz66_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_gaz66_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "GAZ-66 MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_uaz_open_MSV_01: rhs_uaz_open_MSV_01
{
	_generalMacro = "haxey_MSV_Flora_RHS_uaz_open_MSV_01";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "UAZ MSV (open)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_btr80_msv: rhs_btr80_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_btr80_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80 MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_btr80a_msv: rhs_btr80a_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_btr80a_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80A MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp1k_msv: rhs_bmp1k_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp1k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp2k_msv: rhs_bmp2k_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp2k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_brm1k_msv: rhs_brm1k_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp1k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BRM-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_prp3_msv: rhs_prp3_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_prp3_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "PRP-3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp1d_msv: rhs_bmp1d_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp1d_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1D";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp1p_msv: rhs_bmp1p_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp1p_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1P";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp2_msv: rhs_bmp2_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp2_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp2d_msv: rhs_bmp2d_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp2d_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2D";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp3_late_msv: rhs_bmp3_late_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp3_late_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp3m_msv: rhs_bmp3m_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp3m_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_bmp3mera_msv: rhs_bmp3mera_msv
{
	_generalMacro = "haxey_MSV_Flora_RHS_bmp3mera_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3M (Kaktus ERA)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_zsu234_aa: rhs_zsu234_aa
{
	_generalMacro = "haxey_MSV_Flora_RHS_zsu234_aa";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "ZSU-23-4V";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_t72bc_tv: rhs_t72bc_tv
{
	_generalMacro = "haxey_MSV_Flora_RHS_t72bc_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "T-73B";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_t72bd_tv: rhs_t72bd_tv
{
	_generalMacro = "haxey_MSV_Flora_RHS_t72bd_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "T-72B3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_t80a: rhs_t80a
{
	_generalMacro = "haxey_MSV_Flora_RHS_t80a";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "T-80A";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_t80bv: rhs_t80bv
{
	_generalMacro = "haxey_MSV_Flora_RHS_t80bv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "T-80BV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_t80bvk: rhs_t80bvk
{
	_generalMacro = "haxey_MSV_Flora_RHS_t80bvk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "T-80BVK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_t80u: rhs_t80u
{
	_generalMacro = "haxey_MSV_Flora_RHS_t80u";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "T-80U";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_t80uk: rhs_t80uk
{
	_generalMacro = "haxey_MSV_Flora_RHS_t80uk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "T-80UK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_t90a_tv: rhs_t90a_tv
{
	_generalMacro = "haxey_MSV_Flora_RHS_t90a_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Armored";
	displayName = "T-90A";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_Mi8mt_vvsc: RHS_Mi8mt_vvsc
{
	_generalMacro = "haxey_MSV_Flora_RHS_Mi8mt_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-8MT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_ka60_grey: rhs_ka60_grey
{
	_generalMacro = "haxey_MSV_Flora_RHS_ka60_grey";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Air";
	displayName = "Ka-60";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 16;
		};
	};
};
class haxey_MSV_Flora_RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_Flora_RHS_Mi8MTV3_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-8MTV3 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 28;
		};
	};
};
class haxey_MSV_Flora_RHS_Mi24Vt_vvs: RHS_Mi24Vt_vvs
{
	_generalMacro = "haxey_MSV_Flora_RHS_Mi24Vt_vvs";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-24VT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvsc
{
	_generalMacro = "haxey_MSV_Flora_RHS_Mi24P_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-24P (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 16;
		};
	};
};
class haxey_MSV_Flora_RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_Flora_RHS_Mi24V_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (UPK))";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 28;
		};
	};
};
class haxey_MSV_Flora_RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvsc
{
	_generalMacro = "haxey_MSV_Flora_RHS_Mi24V_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_Flora_RHS_Ka52_UPK23_vvsc: RHS_Ka52_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_Flora_RHS_Ka52_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_Flora";
	vehicleClass = "H_Air";
	displayName = "Ka-52 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_Infantry_CompCom: O_officer_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_CompCom";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_HQMen";
	displayName = "Company commander";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_DeputyOff: O_officer_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_DeputyOff";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_HQMen";
	displayName = "Deputy officer";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_1stSerg: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_1stSerg";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_HQMen";
	displayName = "1st Sergeant";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_PL: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Platoon Leader";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_APL: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Assistant Platoon Leader";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_SL: O_Soldier_SL_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_SL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Squad Leader";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_TL: O_Soldier_TL_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_TL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Team Leader";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_M88_Infantry_heli: O_helicrew_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_heli";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Air crew";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_M88_Infantry_crew: O_crew_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_crew";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Crew";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_M88_Infantry_AR: O_soldier_AR_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_AR";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Autorifleman";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_RPK74M","Throw","Put"};
	respawnWeapons[] = {"haxey_RPK74M","Throw","Put"};
	magazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_M88_Infantry_exp: O_soldier_exp_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_exp";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Explosive specialist";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_engineer","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_engineer","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_exp";
};
class haxey_MSV_M88_Infantry_medic: O_medic_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_medic";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Combat Life Saver";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_medic","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_medic","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_Med";
};
class haxey_MSV_M88_Infantry_GL: O_Soldier_GL_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_GL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Grenadier";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_vog","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_MSV_M88_Infantry_AT: O_soldier_LAT_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_AT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Anti-tank";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_rhs_rpg_AT";
};
class haxey_MSV_M88_Infantry_M: O_soldier_M_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_M";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Marksman";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_SVD","Throw","Put"};
	respawnWeapons[] = {"haxey_SVD","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_M88_Infantry_SAT: O_soldier_AT_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_SAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-tank specialist";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_MSV_M88_Infantry_ASAT: O_soldier_AAT_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_ASAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Assistant anti-tank specialist";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_MSV_M88_Infantry_Spotter: O_spotter_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_Spotter";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Spotter";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_MSV_M88_Infantry_Sniper: O_sniper_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_Sniper";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Sniper";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	magazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_M88_Infantry_HG: O_HeavyGunner_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_HG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_M88_Infantry_AHG: O_soldier_AAR_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_AHG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner assistant";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_M88_Infantry_AB: O_Soldier_A_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_AB";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Ammo Bearer";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_MSV_M88_Infantry_SAA: O_soldier_AA_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_SAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_M88_Infantry_ASAA: O_soldier_AAA_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_ASAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_MSV_M88_Infantry_rflm: O_soldier_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_MSV_M88_Infantry_lite_rflm: O_Soldier_lite_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_MSV_M88_Infantry_Mort: O_support_Mort_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_Mort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Mortar Gunner";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_MSV_M88_Infantry_AMort: O_support_AMort_F
{
	_generalMacro = "haxey_MSV_M88_Infantry_AMort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Men";
	displayName = "Mortar Assistant";
	uniformClass = "rhs_uniform_m88_patchless";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_support_F";
};
class haxey_MSV_M88_RHS_UAZ_MSV_01: RHS_UAZ_MSV_01
{
	_generalMacro = "haxey_MSV_M88_RHS_UAZ_MSV_01";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Motorized";
	displayName = "UAZ MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 20;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	 };
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_tigr_msv: rhs_tigr_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_tigr_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Motorized";
	displayName = "GAZ Tigr MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_gaz66_msv: rhs_gaz66_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_gaz66_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Motorized";
	displayName = "GAZ-66 MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_uaz_open_MSV_01: rhs_uaz_open_MSV_01
{
	_generalMacro = "haxey_MSV_M88_RHS_uaz_open_MSV_01";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Motorized";
	displayName = "UAZ MSV (open)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_btr80_msv: rhs_btr80_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_btr80_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80 MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_btr80a_msv: rhs_btr80a_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_btr80a_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80A MSV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp1k_msv: rhs_bmp1k_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp1k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp2k_msv: rhs_bmp2k_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp2k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_brm1k_msv: rhs_brm1k_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp1k_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BRM-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_prp3_msv: rhs_prp3_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_prp3_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "PRP-3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp1d_msv: rhs_bmp1d_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp1d_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1D";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp1p_msv: rhs_bmp1p_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp1p_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-1P";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp2_msv: rhs_bmp2_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp2_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp2d_msv: rhs_bmp2d_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp2d_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-2D";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp3_late_msv: rhs_bmp3_late_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp3_late_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp3m_msv: rhs_bmp3m_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp3m_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_bmp3mera_msv: rhs_bmp3mera_msv
{
	_generalMacro = "haxey_MSV_M88_RHS_bmp3mera_msv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Mecanized";
	displayName = "BMP-3M (Kaktus ERA)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_zsu234_aa: rhs_zsu234_aa
{
	_generalMacro = "haxey_MSV_M88_RHS_zsu234_aa";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "ZSU-23-4V";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_t72bc_tv: rhs_t72bc_tv
{
	_generalMacro = "haxey_MSV_M88_RHS_t72bc_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "T-73B";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_t72bd_tv: rhs_t72bd_tv
{
	_generalMacro = "haxey_MSV_M88_RHS_t72bd_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "T-72B3";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_t80a: rhs_t80a
{
	_generalMacro = "haxey_MSV_M88_RHS_t80a";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "T-80A";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_t80bv: rhs_t80bv
{
	_generalMacro = "haxey_MSV_M88_RHS_t80bv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "T-80BV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_t80bvk: rhs_t80bvk
{
	_generalMacro = "haxey_MSV_M88_RHS_t80bvk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "T-80BVK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_t80u: rhs_t80u
{
	_generalMacro = "haxey_MSV_M88_RHS_t80u";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "T-80U";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_t80uk: rhs_t80uk
{
	_generalMacro = "haxey_MSV_M88_RHS_t80uk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "T-80UK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_t90a_tv: rhs_t90a_tv
{
	_generalMacro = "haxey_MSV_M88_RHS_t90a_tv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Armored";
	displayName = "T-90A";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_Mi8mt_vvsc: RHS_Mi8mt_vvsc
{
	_generalMacro = "haxey_MSV_M88_RHS_Mi8mt_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Air";
	displayName = "Mi-8MT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_ka60_grey: rhs_ka60_grey
{
	_generalMacro = "haxey_MSV_M88_RHS_ka60_grey";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Air";
	displayName = "Ka-60";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 16;
		};
	};
};
class haxey_MSV_M88_RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_M88_RHS_Mi8MTV3_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Air";
	displayName = "Mi-8MTV3 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 28;
		};
	};
};
class haxey_MSV_M88_RHS_Mi24Vt_vvs: RHS_Mi24Vt_vvs
{
	_generalMacro = "haxey_MSV_M88_RHS_Mi24Vt_vvs";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Air";
	displayName = "Mi-24VT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvsc
{
	_generalMacro = "haxey_MSV_M88_RHS_Mi24P_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Air";
	displayName = "Mi-24P (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 16;
		};
	};
};
class haxey_MSV_M88_RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_M88_RHS_Mi24V_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (UPK))";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 28;
		};
	};
};
class haxey_MSV_M88_RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvsc
{
	_generalMacro = "haxey_MSV_M88_RHS_Mi24V_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_MSV_M88_RHS_Ka52_UPK23_vvsc: RHS_Ka52_UPK23_vvsc
{
	_generalMacro = "haxey_MSV_M88_RHS_Ka52_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_MSV_M88";
	vehicleClass = "H_Air";
	displayName = "Ka-52 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};














// VDV //
class haxey_VDV_EMR_Infantry_CompCom: O_officer_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_CompCom";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_HQMen";
	displayName = "Company commander";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_EMR_Infantry_DeputyOff: O_officer_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_DeputyOff";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_HQMen";
	displayName = "Deputy officer";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_EMR_Infantry_1stSerg: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_1stSerg";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_HQMen";
	displayName = "1st Sergeant";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_EMR_Infantry_PL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Platoon Leader";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_EMR_Infantry_APL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Assistant Platoon Leader";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_EMR_Infantry_SL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_SL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Squad Leader";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset_mapcase","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_EMR_Infantry_TL: O_Soldier_TL_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_TL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Team Leader";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_VDV_EMR_Infantry_heli: O_helicrew_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_heli";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Air crew";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_EMR_Infantry_crew: O_crew_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_crew";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Crew";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_EMR_Infantry_AR: O_soldier_AR_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_AR";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Autorifleman";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_RPK74M","Throw","Put"};
	respawnWeapons[] = {"haxey_RPK74M","Throw","Put"};
	magazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_VDV_EMR_Infantry_exp: O_soldier_exp_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_exp";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Explosive specialist";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_engineer","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_engineer","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_exp";
};
class haxey_VDV_EMR_Infantry_medic: O_medic_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_medic";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Combat Life Saver";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_medic","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_medic","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_Med";
};
class haxey_VDV_EMR_Infantry_GL: O_Soldier_GL_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_GL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Grenadier";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_vog","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_VDV_EMR_Infantry_AT: O_soldier_LAT_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_AT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Anti-tank";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_rhs_rpg_AT";
};
class haxey_VDV_EMR_Infantry_M: O_soldier_M_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_M";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Marksman";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_SVD","Throw","Put"};
	respawnWeapons[] = {"haxey_SVD","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_EMR_Infantry_SAT: O_soldier_AT_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_SAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Anti-tank specialist";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_VDV_EMR_Infantry_ASAT: O_soldier_AAT_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_ASAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Assistant anti-tank specialist";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_VDV_EMR_Infantry_Spotter: O_spotter_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_Spotter";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Spotter";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_EMR_Infantry_Sniper: O_sniper_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_Sniper";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Sniper";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	magazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_EMR_Infantry_HG: O_HeavyGunner_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_HG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Gunner";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_VDV_EMR_Infantry_AHG: O_soldier_AAR_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_AHG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Gunner assistant";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_VDV_EMR_Infantry_AB: O_Soldier_A_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_AB";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Ammo Bearer";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_VDV_EMR_Infantry_SAA: O_soldier_AA_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_SAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_VDV_EMR_Infantry_ASAA: O_soldier_AAA_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_ASAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Motorized";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_VDV_EMR_Infantry_rflm: O_soldier_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_Rflm";
};
class haxey_VDV_EMR_Infantry_lite_rflm: O_Soldier_lite_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_EMR_Infantry_Mort: O_support_Mort_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_Mort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Mortar Gunner";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_VDV_EMR_Infantry_AMort: O_support_AMort_F
{
	_generalMacro = "haxey_VDV_EMR_Infantry_AMort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "Mortar Assistant";
	uniformClass = "rhs_uniform_vdv_emr";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_digi_6sh92_headset","rhs_6b27m_digi_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_support_F";
};

class rhs_uaz_vdv;
class rhs_tigr_vdv;
class rhs_gaz66_vdv;
class rhs_uaz_open_vdv;
class rhs_btr80_vdv;
class rhs_btr80a_vdv;
class haxey_VDV_EMR_RHS_UAZ_VDV: rhs_uaz_vdv
{
	_generalMacro = "haxey_VDV_EMR_RHS_UAZ_VDV";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "UAZ VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 20;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	 };
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_tigr_vdv: rhs_tigr_vdv
{
	_generalMacro = "haxey_VDV_EMR_RHS_tigr_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "GAZ Tigr VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_gaz66_vdv: rhs_gaz66_vdv
{
	_generalMacro = "haxey_VDV_EMR_RHS_gaz66_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "GAZ-66 VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_uaz_open_VDV: rhs_uaz_open_vdv
{
	_generalMacro = "haxe_rhs_uaz_open_VDV";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "UAZ VDV (open)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_btr80_vdv: rhs_btr80_vdv
{
	_generalMacro = "haxey_VDV_EMR_RHS_btr80_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "BTR-80 VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_btr80a_vdv: rhs_btr80a_vdv
{
	_generalMacro = "haxey_VDV_EMR_RHS_btr80a_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Men";
	displayName = "BTR-80A VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class rhs_bmd1;
class rhs_bmd1k;
class rhs_bmd1p;
class rhs_bmd1pk;
class rhs_bmd2;
class rhs_bmd2k;
class rhs_bmd2m;
class rhs_bmd4_vdv;
class rhs_bmd4m_vdv;
class rhs_bmd4ma_vdv;
class haxey_VDV_EMR_rhs_bmd1: rhs_bmd1
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd1";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd1k: rhs_bmd1k
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd1k";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd1p: rhs_bmd1p
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd1p";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1P";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd1pk: rhs_bmd1pk
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd1pk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1PK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd2: rhs_bmd2
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd2";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd2k: rhs_bmd2k
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd2k";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd2m: rhs_bmd2m
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd2m";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd4_vdv: rhs_bmd4_vdv
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd4_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd4m_vdv: rhs_bmd4m_vdv
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd4m_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_rhs_bmd4ma_vdv: rhs_bmd4ma_vdv
{
	_generalMacro = "haxey_VDV_EMR_rhs_bmd4ma_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4M (A)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class rhs_sprut_vdv;
class haxey_VDV_EMR_rhs_sprut_vdv: rhs_sprut_vdv
{
	_generalMacro = "haxey_VDV_EMR_rhs_sprut_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Armored";
	displayName = "2S25";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_Mi8mt_vvsc: RHS_Mi8mt_vvsc
{
	_generalMacro = "haxey_VDV_EMR_RHS_Mi8mt_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-8MT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_ka60_grey: rhs_ka60_grey
{
	_generalMacro = "haxey_VDV_EMR_RHS_ka60_grey";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Air";
	displayName = "Ka-60";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 10;
		};
	};
};
class haxey_VDV_EMR_RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_EMR_RHS_Mi8MTV3_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-8MTV3 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 15;
		};
	};
};
class haxey_VDV_EMR_RHS_Mi24Vt_vvs: RHS_Mi24Vt_vvs
{
	_generalMacro = "haxey_VDV_EMR_RHS_Mi24Vt_vvs";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-24VT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvsc
{
	_generalMacro = "haxey_VDV_EMR_RHS_Mi24P_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-24P (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 10;
		};
	};
};
class haxey_VDV_EMR_RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_EMR_RHS_Mi24V_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (UPK))";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 10;
		};
	};
};
class haxey_VDV_EMR_RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvsc
{
	_generalMacro = "haxey_VDV_EMR_RHS_Mi24V_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_EMR_RHS_Ka52_UPK23_vvsc: RHS_Ka52_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_EMR_RHS_Ka52_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_EMR";
	vehicleClass = "H_Air";
	displayName = "Ka-52 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_Infantry_CompCom: O_officer_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_CompCom";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_HQMen";
	displayName = "Company commander";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_Flora_Infantry_DeputyOff: O_officer_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_DeputyOff";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_HQMen";
	displayName = "Deputy officer";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_Flora_Infantry_1stSerg: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_1stSerg";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_HQMen";
	displayName = "1st Sergeant";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_Flora_Infantry_PL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Platoon Leader";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_Flora_Infantry_APL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Assistant Platoon Leader";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_Flora_Infantry_SL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_SL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Squad Leader";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset_mapcase","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_Flora_Infantry_TL: O_Soldier_TL_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_TL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Team Leader";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_vog_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_vog_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_VDV_Flora_Infantry_heli: O_helicrew_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_heli";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Air crew";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_Flora_Infantry_crew: O_crew_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_crew";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Crew";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_Flora_Infantry_AR: O_soldier_AR_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_AR";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Autorifleman";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_RPK74M","Throw","Put"};
	respawnWeapons[] = {"haxey_RPK74M","Throw","Put"};
	magazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_VDV_Flora_Infantry_exp: O_soldier_exp_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_exp";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Explosive specialist";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_engineer","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_engineer","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_exp";
};
class haxey_VDV_Flora_Infantry_medic: O_medic_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_medic";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Combat Life Saver";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_medic","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_medic","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_Med";
};
class haxey_VDV_Flora_Infantry_GL: O_Soldier_GL_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_GL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Grenadier";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_vog","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_vog","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_VDV_Flora_Infantry_AT: O_soldier_LAT_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_AT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Anti-tank";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_rhs_rpg_AT";
};
class haxey_VDV_Flora_Infantry_M: O_soldier_M_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_M";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Marksman";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_SVD","Throw","Put"};
	respawnWeapons[] = {"haxey_SVD","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_Flora_Infantry_SAT: O_soldier_AT_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_SAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-tank specialist";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_VDV_Flora_Infantry_ASAT: O_soldier_AAT_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_ASAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Assistant anti-tank specialist";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_VDV_Flora_Infantry_Spotter: O_spotter_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_Spotter";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Spotter";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_Flora_Infantry_Sniper: O_sniper_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_Sniper";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Sniper";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	magazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_Flora_Infantry_HG: O_HeavyGunner_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_HG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_VDV_Flora_Infantry_AHG: O_soldier_AAR_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_AHG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner assistant";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_VDV_Flora_Infantry_AB: O_Soldier_A_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_AB";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Ammo Bearer";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_VDV_Flora_Infantry_SAA: O_soldier_AA_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_SAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_VDV_Flora_Infantry_ASAA: O_soldier_AAA_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_ASAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_VDV_Flora_Infantry_rflm: O_soldier_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_Rflm";
};
class haxey_VDV_Flora_Infantry_lite_rflm: O_Soldier_lite_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_Flora_Infantry_Mort: O_support_Mort_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_Mort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Mortar Gunner";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_VDV_Flora_Infantry_AMort: O_support_AMort_F
{
	_generalMacro = "haxey_VDV_Flora_Infantry_AMort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Men";
	displayName = "Mortar Assistant";
	uniformClass = "rhs_uniform_vdv_flora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_6sh92_headset","rhs_6b26_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_support_F";
};
class haxey_VDV_Flora_RHS_UAZ_VDV: rhs_uaz_vdv
{
	_generalMacro = "haxey_VDV_Flora_RHS_UAZ_VDV";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "UAZ VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 20;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	 };
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_tigr_vdv: rhs_tigr_vdv
{
	_generalMacro = "haxey_VDV_Flora_RHS_tigr_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "GAZ Tigr VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_gaz66_vdv: rhs_gaz66_vdv
{
	_generalMacro = "haxey_VDV_Flora_RHS_gaz66_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "GAZ-66 VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_uaz_open_VDV: rhs_uaz_open_vdv
{
	_generalMacro = "haxe_rhs_uaz_open_VDV_01";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "UAZ VDV (open)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_btr80_vdv: rhs_btr80_vdv
{
	_generalMacro = "haxey_VDV_Flora_RHS_btr80_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80 VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_btr80a_vdv: rhs_btr80a_vdv
{
	_generalMacro = "haxey_VDV_Flora_RHS_btr80a_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80A VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd1: rhs_bmd1
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd1";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd1k: rhs_bmd1k
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd1k";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd1p: rhs_bmd1p
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd1p";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1P";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd1pk: rhs_bmd1pk
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd1pk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1PK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd2: rhs_bmd2
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd2";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd2k: rhs_bmd2k
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd2k";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd2m: rhs_bmd2m
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd2m";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd4_vdv: rhs_bmd4_vdv
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd4_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd4m_vdv: rhs_bmd4m_vdv
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd4m_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_bmd4ma_vdv: rhs_bmd4ma_vdv
{
	_generalMacro = "haxey_VDV_Flora_rhs_bmd4ma_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4M (A)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_rhs_sprut_vdv: rhs_sprut_vdv
{
	_generalMacro = "haxey_VDV_Flora_rhs_sprut_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Armored";
	displayName = "2S25";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_Mi8mt_vvsc: RHS_Mi8mt_vvsc
{
	_generalMacro = "haxey_VDV_Flora_RHS_Mi8mt_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-8MT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_ka60_grey: rhs_ka60_grey
{
	_generalMacro = "haxey_VDV_Flora_RHS_ka60_grey";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Air";
	displayName = "Ka-60";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 10;
		};
	};
};
class haxey_VDV_Flora_RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_Flora_RHS_Mi8MTV3_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-8MTV3 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 15;
		};
	};
};
class haxey_VDV_Flora_RHS_Mi24Vt_vvs: RHS_Mi24Vt_vvs
{
	_generalMacro = "haxey_VDV_Flora_RHS_Mi24Vt_vvs";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-24VT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvsc
{
	_generalMacro = "haxey_VDV_Flora_RHS_Mi24P_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-24P (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 10;
		};
	};
};
class haxey_VDV_Flora_RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_Flora_RHS_Mi24V_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (UPK))";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 15;
		};
	};
};
class haxey_VDV_Flora_RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvsc
{
	_generalMacro = "haxey_VDV_Flora_RHS_Mi24V_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_Flora_RHS_Ka52_UPK23_vvsc: RHS_Ka52_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_Flora_RHS_Ka52_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_Flora";
	vehicleClass = "H_Air";
	displayName = "Ka-52 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_Infantry_CompCom: O_officer_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_CompCom";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_HQMen";
	displayName = "Company commander";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_MountainFlora_Infantry_DeputyOff: O_officer_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_DeputyOff";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_HQMen";
	displayName = "Deputy officer";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_MountainFlora_Infantry_1stSerg: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_1stSerg";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_HQMen";
	displayName = "1st Sergeant";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_MountainFlora_Infantry_PL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Platoon Leader";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_MountainFlora_Infantry_APL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_PL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Assistant Platoon Leader";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_MountainFlora_Infantry_SL: O_Soldier_SL_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_SL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Squad Leader";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset_mapcase","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_MountainFlora_Infantry_TL: O_Soldier_TL_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_TL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Team Leader";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_VDV_MountainFlora_Infantry_heli: O_helicrew_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_heli";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Air crew";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23","rhs_zsh7a_mike","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_MountainFlora_Infantry_crew: O_crew_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_crew";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Crew";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	RespawnItems[] = {"ACE_microDAGR","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_crewofficer","rhs_tsh4","ItemRadio","ItemMap","ItemCompass","rhsusf_ANPVS_15","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_MountainFlora_Infantry_AR: O_soldier_AR_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_AR";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Autorifleman";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_RPK74M","Throw","Put"};
	respawnWeapons[] = {"haxey_RPK74M","Throw","Put"};
	magazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_45Rnd_545X39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_VDV_MountainFlora_Infantry_exp: O_soldier_exp_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_exp";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Explosive specialist";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_engineer","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_engineer","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_exp";
};
class haxey_VDV_MountainFlora_Infantry_medic: O_medic_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_medic";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Combat Life Saver";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_M136_hedp","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_medic","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_medic","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_Med";
};
class haxey_VDV_MountainFlora_Infantry_GL: O_Soldier_GL_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_GL";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Grenadier";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m_gp25","rhs_weap_rshg2","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_vog","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_vog","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_GL";
};
class haxey_VDV_MountainFlora_Infantry_AT: O_soldier_LAT_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_AT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Anti-tank";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","haxey_RPG7","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_rhs_rpg_AT";
};
class haxey_VDV_MountainFlora_Infantry_M: O_soldier_M_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_M";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Marksman";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_SVD","Throw","Put"};
	respawnWeapons[] = {"haxey_SVD","Throw","Put"};
	magazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","CUP_10Rnd_762x54_SVD_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_MountainFlora_Infantry_SAT: O_soldier_AT_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_SAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-tank specialist";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","CUP_launch_Metis","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_VDV_MountainFlora_Infantry_ASAT: O_soldier_AAT_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_ASAT";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Assistant anti-tank specialist";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_B_Carryall_SAT";
};
class haxey_VDV_MountainFlora_Infantry_Spotter: O_spotter_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_Spotter";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Spotter";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","ACE_Yardage450","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "tf_mr3000_rhs";
};
class haxey_VDV_MountainFlora_Infantry_Sniper: O_sniper_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_Sniper";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Sniper";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_microDAGR","ACE_RangeCard","ACE_Kestrel4500","ACE_ATragMX","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	respawnWeapons[] = {"haxey_KSVK","ACE_Yardage450","Throw","Put"};
	magazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","CUP_5Rnd_127x108_KSVK_M","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b26_bala","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_MountainFlora_Infantry_HG: O_HeavyGunner_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_HG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"rhs_weap_pkm","Throw","Put"};
	respawnWeapons[] = {"rhs_weap_pkm","Throw","Put"};
	magazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnMagazines[] = {"rhs_100Rnd_762x54mmR","rhs_100Rnd_762x54mmR","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_VDV_MountainFlora_Infantry_AHG: O_soldier_AAR_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_AHG";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Gunner assistant";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Binocular","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_HG";
};
class haxey_VDV_MountainFlora_Infantry_AB: O_Soldier_A_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_AB";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Ammo Bearer";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_AR";
};
class haxey_VDV_MountainFlora_Infantry_SAA: O_soldier_AA_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_SAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_igla","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_VDV_MountainFlora_Infantry_ASAA: O_soldier_AAA_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_ASAA";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_SuppMen";
	displayName = "Anti-Air specialist";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_umbts_SAA";
};
class haxey_VDV_MountainFlora_Infantry_rflm: O_soldier_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","rhs_weap_rpg26","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "haxey_O_sidor_Rflm";
};
class haxey_VDV_MountainFlora_Infantry_lite_rflm: O_Soldier_lite_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_rflm";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Rifleman";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "";
};
class haxey_VDV_MountainFlora_Infantry_Mort: O_support_Mort_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_Mort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Mortar Gunner";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_weapon_F";
};
class haxey_VDV_MountainFlora_Infantry_AMort: O_support_AMort_F
{
	_generalMacro = "haxey_VDV_MountainFlora_Infantry_AMort";
	author = "haxey";
	scope = 2;
	side = 0;
	attendant = 1;
	canDeactivateMines = true;
	engineer = true;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Men";
	displayName = "Mortar Assistant";
	uniformClass = "rhs_uniform_vdv_mflora";
	faceType = "Man_A3";
	Items[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	RespawnItems[] = {"ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_fieldDressing","ACE_MapTools","ACE_epinephrine","ACE_epinephrine","ACE_morphine","ACE_morphine","ACE_EarPlugs","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
	weapons[] = {"haxey_ak74m","Throw","Put"};
	respawnWeapons[] = {"haxey_ak74m","Throw","Put"};
	magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	respawnmagazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5"};
	linkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	respawnLinkedItems[] = {"rhs_6b23_ML_6sh92_headset","rhs_6b27m_ml_ess","ItemRadio","ItemMap","ItemCompass","tf_microdagr"};
	backpack = "O_Mortar_01_support_F";
};
class haxey_VDV_MountainFlora_RHS_UAZ_VDV: rhs_uaz_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_UAZ_VDV";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Motorized";
	displayName = "UAZ VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 20;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	 };
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_tigr_vdv: rhs_tigr_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_tigr_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Motorized";
	displayName = "GAZ Tigr VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_gaz66_vdv: rhs_gaz66_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_gaz66_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Motorized";
	displayName = "GAZ-66 VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_uaz_open_VDV: rhs_uaz_open_vdv
{
	_generalMacro = "haxe_rhs_uaz_open_VDV_01";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Motorized";
	displayName = "UAZ VDV (open)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_btr80_vdv: rhs_btr80_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_btr80_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80 VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_btr80a_vdv: rhs_btr80a_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_btr80a_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Motorized";
	displayName = "BTR-80A VDV";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd1: rhs_bmd1
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd1";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd1k: rhs_bmd1k
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd1k";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd1p: rhs_bmd1p
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd1p";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1P";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd1pk: rhs_bmd1pk
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd1pk";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-1PK";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd2: rhs_bmd2
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd2";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd2k: rhs_bmd2k
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd2k";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2K";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd2m: rhs_bmd2m
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd2m";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-2M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd4_vdv: rhs_bmd4_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd4_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd4m_vdv: rhs_bmd4m_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd4m_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4M";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_bmd4ma_vdv: rhs_bmd4ma_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_bmd4ma_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Mecanized";
	displayName = "BMD-4M (A)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_CUP_10Rnd_762x54_SVD_M
		{
			name = "CUP_10Rnd_762x54_SVD_M";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_rhs_sprut_vdv: rhs_sprut_vdv
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_sprut_vdv";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Armored";
	displayName = "2S25";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_Mi8mt_vvsc: RHS_Mi8mt_vvsc
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_Mi8mt_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Air";
	displayName = "Mi-8MT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_ka60_grey: rhs_ka60_grey
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_ka60_grey";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Air";
	displayName = "Ka-60";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 10;
		};
	};
};
class haxey_VDV_MountainFlora_RHS_Mi8MTV3_UPK23_vvsc: RHS_Mi8MTV3_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_Mi8MTV3_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Air";
	displayName = "Mi-8MTV3 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 15;
		};
	};
};
class haxey_VDV_MountainFlora_RHS_Mi24Vt_vvs: RHS_Mi24Vt_vvs
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_Mi24Vt_vvs";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Air";
	displayName = "Mi-24VT";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_Mi24P_AT_vvsc: RHS_Mi24P_AT_vvsc
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_Mi24P_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Air";
	displayName = "Mi-24P (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 10;
		};
	};
};
class haxey_VDV_MountainFlora_RHS_Mi24V_UPK23_vvsc: RHS_Mi24V_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_Mi24V_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (UPK))";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_45Rnd_545X39_AK
		{
			name = "rhs_45Rnd_545X39_AK";
			count = 5;
		};
		class _xx_rhs_100Rnd_762x54mmR
		{
			name = "rhs_100Rnd_762x54mmR";
			count = 5;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_rhs_VG40OP_white
		{
			name = "rhs_VG40OP_white";
			count = 10;
		};
		class _xx_rhs_GRD40_White
		{
			name = "rhs_GRD40_White";
			count = 10;
		};
		class _xx_rhs_GRD40_Red
		{
			name = "rhs_GRD40_Red";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks
	{
		class _xx_B_Parachute
		{
			name = "B_Parachute";
			count = 15;
		};
	};
};
class haxey_VDV_MountainFlora_RHS_Mi24V_AT_vvsc: RHS_Mi24V_AT_vvsc
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_Mi24V_AT_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Air";
	displayName = "Mi-24V (AT)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};
class haxey_VDV_MountainFlora_RHS_Ka52_UPK23_vvsc: RHS_Ka52_UPK23_vvsc
{
	_generalMacro = "haxey_VDV_MountainFlora_RHS_Ka52_UPK23_vvsc";
	author = "haxey";
	scope = 2;
	side = 0;
	faction = "haxey_faction_VDV_MountainFlora";
	vehicleClass = "H_Air";
	displayName = "Ka-52 (UPK)";
	crew = "";
	class TransportItems
	{
		class _xx_rhs_30Rnd_545x39_AK
		{
			name = "rhs_30Rnd_545x39_AK";
			count = 10;
		};
		class _xx_rhs_mag_rdg2_white
		{
			name = "rhs_mag_rdg2_white";
			count = 10;
		};
		class _xx_rhs_mag_nspd
		{
			name = "rhs_mag_nspd";
			count = 10;
		};
		class _xx_ACE_HandFlare_White
		{
			name = "ACE_HandFlare_White";
			count = 10;
		};
		class _xx_ACE_HandFlare_Green
		{
			name = "ACE_HandFlare_Green";
			count = 10;
		};
		class _xx_Chemlight_green
		{
			name = "Chemlight_green";
			count = 10;
		};
		class _xx_ACE_fieldDressing
		{
			count = 20;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 5;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 2;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
	class TransportMagazines {};
	class TransportWeapons {};
	class TransportBackpacks {};
};

# include "RU_backpacks.hpp"