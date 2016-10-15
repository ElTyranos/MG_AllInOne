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
	backpack = "haxey_VDV_EMR_sidor_GL";
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
	backpack = "haxey_VDV_EMR_sidor_AR";
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
	backpack = "haxey_VDV_EMR_sidor_exp";
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
	backpack = "haxey_VDV_EMR_umbts_Med";
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
	backpack = "haxey_VDV_EMR_sidor_GL";
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
	backpack = "haxey_VDV_EMR_rhs_rpg_AT";
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
	backpack = "haxey_VDV_EMR_Carryall_SAT";
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
	backpack = "haxey_VDV_EMR_Carryall_SAT";
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
	backpack = "haxey_VDV_EMR_sidor_HG";
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
	backpack = "haxey_VDV_EMR_sidor_HG";
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
	backpack = "haxey_VDV_EMR_sidor_AR";
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
	backpack = "haxey_VDV_EMR_umbts_SAA";
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
	backpack = "haxey_VDV_EMR_umbts_SAA";
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
	backpack = "haxey_VDV_EMR_sidor_Rflm";
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
class haxey_VDV_EMR_Carryall_SAT: B_Carryall_oli
{
	_generalMacro = "haxey_VDV_EMR_Carryall_SAT";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_CUP_AT13_M
		{
			count = 1;
			name = "CUP_AT13_M";
		};
	};
};
class haxey_VDV_EMR_umbts_SAA: rhs_assault_umbts
{
	_generalMacro = "haxey_VDV_EMR_umbts_SAA";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_mag_9k38_rocket
		{
			count = 1;
			name = "rhs_mag_9k38_rocket";
		};
	};
};
class haxey_VDV_EMR_rhs_rpg_AT: rhs_rpg_empty
{
	_generalMacro = "haxey_VDV_EMR_rhs_rpg_AT";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_rpg7_PG7VL_mag
		{
			count = 3;
			name = "rhs_rpg7_PG7VL_mag";
		};
		class _xx_tf47_m3maaws_HEDP
		{
			count = 1;
			name = "rhs_rpg7_OG7V_mag";
		};
	};
};
class haxey_VDV_EMR_sidor_exp: rhs_sidor
{
	_generalMacro = "haxey_VDV_EMR_sidor_exp";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			count = 2;
			name = "DemoCharge_Remote_Mag";
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			count = 1;
			name = "SatchelCharge_Remote_Mag";
		};
		class _xx_ACE_Clacker
		{
			count = 1;
			name = "ACE_Clacker";
		};
		class _xx_ACE_DefusalKit
		{
			count = 1;
			name = "ACE_DefusalKit";
		};
	};
};
class haxey_VDV_EMR_sidor_Rflm: rhs_sidor
{
	_generalMacro = "haxey_VDV_EMR_sidor_AR";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_45Rnd_545X39_AK
		{
			count = 5;
			name = "rhs_45Rnd_545X39_AK";
		};
		class _xx_rhs_30Rnd_545x39_AK
		{
			count = 4;
			name = "rhs_30Rnd_545x39_AK";
		};
	};
};
class haxey_VDV_EMR_sidor_AR: rhs_sidor
{
	_generalMacro = "haxey_VDV_EMR_sidor_AR";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_45Rnd_545X39_AK
		{
			count = 7;
			name = "rhs_45Rnd_545X39_AK";
		};
	};
};
class haxey_VDV_EMR_sidor_HG: rhs_sidor
{
	_generalMacro = "haxey_VDV_EMR_sidor_HG";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_100Rnd_762x54mmR
		{
			count = 3;
			name = "rhs_100Rnd_762x54mmR";
		};
	};
};
class haxey_VDV_EMR_sidor_GL: rhs_sidor
{
	_generalMacro = "haxey_VDV_EMR_sidor_GL";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_VOG25
		{
			count = 2;
			name = "rhs_VOG25";
		};
		class _xx_rhs_VOG25P
		{
			count = 1;
			name = "rhs_VOG25P";
		};
		class _xx_rhs_GRD40_White
		{
			count = 5;
			name = "rhs_GRD40_White";
		};
		class _xx_rhs_rhs_GRD40_Red
		{
			count = 5;
			name = "rhs_GRD40_Red";
		};
		class _xx_rhs_30Rnd_545x39_AK
		{
			count = 3;
			name = "rhs_30Rnd_545x39_AK";
		};
	};
};
class haxey_VDV_EMR_umbts_Med: rhs_assault_umbts
{
	_generalMacro = "haxey_VDV_EMR_umbts_Med";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_ACE_fieldDressing
		{
			count = 30;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 15;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 15;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
};

// FLORA //

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
	backpack = "haxey_VDV_Flora_sidor_GL";
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
	backpack = "haxey_VDV_Flora_sidor_AR";
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
	backpack = "haxey_VDV_Flora_sidor_exp";
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
	backpack = "haxey_VDV_Flora_umbts_Med";
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
	backpack = "haxey_VDV_Flora_sidor_GL";
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
	backpack = "haxey_VDV_Flora_rhs_rpg_AT";
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
	backpack = "haxey_VDV_Flora_Carryall_SAT";
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
	backpack = "haxey_VDV_Flora_Carryall_SAT";
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
	backpack = "haxey_VDV_Flora_sidor_HG";
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
	backpack = "haxey_VDV_Flora_sidor_HG";
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
	backpack = "haxey_VDV_Flora_sidor_AR";
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
	backpack = "haxey_VDV_Flora_umbts_SAA";
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
	backpack = "haxey_VDV_Flora_umbts_SAA";
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
	backpack = "haxey_VDV_Flora_sidor_Rflm";
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
class haxey_VDV_Flora_Carryall_SAT: B_Carryall_oli
{
	_generalMacro = "haxey_VDV_Flora_Carryall_SAT";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_CUP_AT13_M
		{
			count = 1;
			name = "CUP_AT13_M";
		};
	};
};
class haxey_VDV_Flora_umbts_SAA: rhs_assault_umbts
{
	_generalMacro = "haxey_VDV_Flora_umbts_SAA";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_mag_9k38_rocket
		{
			count = 1;
			name = "rhs_mag_9k38_rocket";
		};
	};
};
class haxey_VDV_Flora_rhs_rpg_AT: rhs_rpg_empty
{
	_generalMacro = "haxey_VDV_Flora_rhs_rpg_AT";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_rpg7_PG7VL_mag
		{
			count = 3;
			name = "rhs_rpg7_PG7VL_mag";
		};
		class _xx_tf47_m3maaws_HEDP
		{
			count = 1;
			name = "rhs_rpg7_OG7V_mag";
		};
	};
};
class haxey_VDV_Flora_sidor_exp: rhs_sidor
{
	_generalMacro = "haxey_VDV_Flora_sidor_exp";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			count = 2;
			name = "DemoCharge_Remote_Mag";
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			count = 1;
			name = "SatchelCharge_Remote_Mag";
		};
		class _xx_ACE_Clacker
		{
			count = 1;
			name = "ACE_Clacker";
		};
		class _xx_ACE_DefusalKit
		{
			count = 1;
			name = "ACE_DefusalKit";
		};
	};
};
class haxey_VDV_Flora_sidor_Rflm: rhs_sidor
{
	_generalMacro = "haxey_VDV_Flora_sidor_AR";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_45Rnd_545X39_AK
		{
			count = 5;
			name = "rhs_45Rnd_545X39_AK";
		};
		class _xx_rhs_30Rnd_545x39_AK
		{
			count = 4;
			name = "rhs_30Rnd_545x39_AK";
		};
	};
};
class haxey_VDV_Flora_sidor_AR: rhs_sidor
{
	_generalMacro = "haxey_VDV_Flora_sidor_AR";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_45Rnd_545X39_AK
		{
			count = 7;
			name = "rhs_45Rnd_545X39_AK";
		};
	};
};
class haxey_VDV_Flora_sidor_HG: rhs_sidor
{
	_generalMacro = "haxey_VDV_Flora_sidor_HG";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_100Rnd_762x54mmR
		{
			count = 3;
			name = "rhs_100Rnd_762x54mmR";
		};
	};
};
class haxey_VDV_Flora_sidor_GL: rhs_sidor
{
	_generalMacro = "haxey_VDV_Flora_sidor_GL";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_VOG25
		{
			count = 2;
			name = "rhs_VOG25";
		};
		class _xx_rhs_VOG25P
		{
			count = 1;
			name = "rhs_VOG25P";
		};
		class _xx_rhs_GRD40_White
		{
			count = 5;
			name = "rhs_GRD40_White";
		};
		class _xx_rhs_rhs_GRD40_Red
		{
			count = 5;
			name = "rhs_GRD40_Red";
		};
		class _xx_rhs_30Rnd_545x39_AK
		{
			count = 3;
			name = "rhs_30Rnd_545x39_AK";
		};
	};
};
class haxey_VDV_Flora_umbts_Med: rhs_assault_umbts
{
	_generalMacro = "haxey_VDV_Flora_umbts_Med";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_ACE_fieldDressing
		{
			count = 30;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 15;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 15;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
};

// Mountain Flora //

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
	backpack = "haxey_VDV_MountainFlora_sidor_GL";
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
	backpack = "haxey_VDV_MountainFlora_sidor_AR";
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
	backpack = "haxey_VDV_MountainFlora_sidor_exp";
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
	backpack = "haxey_VDV_MountainFlora_umbts_Med";
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
	backpack = "haxey_VDV_MountainFlora_sidor_GL";
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
	backpack = "haxey_VDV_MountainFlora_rhs_rpg_AT";
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
	backpack = "haxey_VDV_MountainFlora_Carryall_SAT";
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
	backpack = "haxey_VDV_MountainFlora_Carryall_SAT";
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
	backpack = "haxey_VDV_MountainFlora_sidor_HG";
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
	backpack = "haxey_VDV_MountainFlora_sidor_HG";
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
	backpack = "haxey_VDV_MountainFlora_sidor_AR";
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
	backpack = "haxey_VDV_MountainFlora_umbts_SAA";
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
	backpack = "haxey_VDV_MountainFlora_umbts_SAA";
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
	backpack = "haxey_VDV_MountainFlora_sidor_Rflm";
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
class haxey_VDV_MountainFlora_Carryall_SAT: B_Carryall_oli
{
	_generalMacro = "haxey_VDV_MountainFlora_Carryall_SAT";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_CUP_AT13_M
		{
			count = 1;
			name = "CUP_AT13_M";
		};
	};
};
class haxey_VDV_MountainFlora_umbts_SAA: rhs_assault_umbts
{
	_generalMacro = "haxey_VDV_MountainFlora_umbts_SAA";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_mag_9k38_rocket
		{
			count = 1;
			name = "rhs_mag_9k38_rocket";
		};
	};
};
class haxey_VDV_MountainFlora_rhs_rpg_AT: rhs_rpg_empty
{
	_generalMacro = "haxey_VDV_MountainFlora_rhs_rpg_AT";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_rpg7_PG7VL_mag
		{
			count = 3;
			name = "rhs_rpg7_PG7VL_mag";
		};
		class _xx_tf47_m3maaws_HEDP
		{
			count = 1;
			name = "rhs_rpg7_OG7V_mag";
		};
	};
};
class haxey_VDV_MountainFlora_sidor_exp: rhs_sidor
{
	_generalMacro = "haxey_VDV_MountainFlora_sidor_exp";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_DemoCharge_Remote_Mag
		{
			count = 2;
			name = "DemoCharge_Remote_Mag";
		};
		class _xx_SatchelCharge_Remote_Mag
		{
			count = 1;
			name = "SatchelCharge_Remote_Mag";
		};
		class _xx_ACE_Clacker
		{
			count = 1;
			name = "ACE_Clacker";
		};
		class _xx_ACE_DefusalKit
		{
			count = 1;
			name = "ACE_DefusalKit";
		};
	};
};
class haxey_VDV_MountainFlora_sidor_Rflm: rhs_sidor
{
	_generalMacro = "haxey_VDV_MountainFlora_sidor_AR";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_45Rnd_545X39_AK
		{
			count = 5;
			name = "rhs_45Rnd_545X39_AK";
		};
		class _xx_rhs_30Rnd_545x39_AK
		{
			count = 4;
			name = "rhs_30Rnd_545x39_AK";
		};
	};
};
class haxey_VDV_MountainFlora_sidor_AR: rhs_sidor
{
	_generalMacro = "haxey_VDV_MountainFlora_sidor_AR";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_45Rnd_545X39_AK
		{
			count = 7;
			name = "rhs_45Rnd_545X39_AK";
		};
	};
};
class haxey_VDV_MountainFlora_sidor_HG: rhs_sidor
{
	_generalMacro = "haxey_VDV_MountainFlora_sidor_HG";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_100Rnd_762x54mmR
		{
			count = 3;
			name = "rhs_100Rnd_762x54mmR";
		};
	};
};
class haxey_VDV_MountainFlora_sidor_GL: rhs_sidor
{
	_generalMacro = "haxey_VDV_MountainFlora_sidor_GL";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_VOG25
		{
			count = 2;
			name = "rhs_VOG25";
		};
		class _xx_rhs_VOG25P
		{
			count = 1;
			name = "rhs_VOG25P";
		};
		class _xx_rhs_GRD40_White
		{
			count = 5;
			name = "rhs_GRD40_White";
		};
		class _xx_rhs_rhs_GRD40_Red
		{
			count = 5;
			name = "rhs_GRD40_Red";
		};
		class _xx_rhs_30Rnd_545x39_AK
		{
			count = 3;
			name = "rhs_30Rnd_545x39_AK";
		};
	};
};
class haxey_VDV_MountainFlora_umbts_Med: rhs_assault_umbts
{
	_generalMacro = "haxey_VDV_MountainFlora_umbts_Med";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_ACE_fieldDressing
		{
			count = 30;
			name = "ACE_fieldDressing";
		};
		class _xx_ACE_morphine
		{
			count = 15;
			name = "ACE_morphine";
		};
		class _xx_ACE_epinephrine
		{
			count = 15;
			name = "ACE_epinephrine";
		};
		class _xx_ACE_bloodIV
		{
			count = 5;
			name = "ACE_bloodIV";
		};
	};
};