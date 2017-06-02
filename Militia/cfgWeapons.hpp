class rhs_weap_m76;
class haxey_m76: rhs_weap_m76 {
	scope = 1;
	class LinkedItems
	{
		class LinkedItemsOptic
		{
		slot = "CowsSlot";
		item = "rhs_acc_pso1m21";
		};
	};
};

class ItemCore;
class Vest_Camo_Base : ItemCore {
	class ItemInfo;
};
class haxey_invisible_vest: Vest_Camo_Base
{
	scope = 2;
	author = "El Tyranos";
	displayName = "Taliban invisible vest";
	picture = "\rhsafrf\addons\rhs_infantry\Data\inventory\gear_icon_6sh46_ca.paa";
	model = "";
	hiddenSelectionsTextures[] = {};
	descriptionShort = "No Armor";
	class ItemInfo: ItemInfo
	{
		uniformModel = "";
		containerClass = "Supply120";
		mass = 15;
		class HitpointsProtectionInfo
		{
			class Body
			{
				hitpointName = "HitBody";
				armor = 0;
				passThrough = 1;
			};
		};
	};
};