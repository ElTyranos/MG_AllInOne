class CfgPatches
{
	class BG21_BTC_Unlock
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"btc_militia_am"};
		authors[] = {"ElTyranos"};
		authorUrl = "www.battlegroup21.com";		
	};
};
class CfgVehicles
{
	class O_Soldier_base_F;
	class btc_am_base: O_Soldier_base_F
	{
		modelSides[] = {3,2,1,0};
	};
	class btc_am_tl: btc_am_base
	{
		modelSides[] = {3,2,1,0};
	};
	class btc_ac_1: btc_am_tl
	{
		modelSides[] = {3,2,1,0};
	};
};
class CfgWeapons
{
	class ItemCore;
	class HelmetBase: ItemCore
	{
		class ItemInfo;
	};
	class btc_h_afghan_01: HelmetBase
	{
		class ItemInfo: ItemInfo
		{
			modelSides[] = {3,2,1,0};
		};
	};
	class btc_h_afghan_02: HelmetBase
	{
		class ItemInfo: ItemInfo
		{
			modelSides[] = {3,2,1,0};
		};
	};
	class btc_h_afghan_03: HelmetBase
	{
		class ItemInfo: ItemInfo
		{
			modelSides[] = {3,2,1,0};
		};
	};
	class btc_h_afghan_04: HelmetBase
	{
		class ItemInfo: ItemInfo
		{
			modelSides[] = {3,2,1,0};
		};
	};
	class btc_h_afghan_05: HelmetBase
	{
		class ItemInfo: ItemInfo
		{
			modelSides[] = {3,2,1,0};
		};
	};
	class btc_h_afghan_06: HelmetBase
	{
		class ItemInfo: ItemInfo
		{
			modelSides[] = {3,2,1,0};
		};
	};
};
