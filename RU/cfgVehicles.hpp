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

class rhs_sidor;
class B_Carryall_oli;
class rhs_assault_umbts;
class rhs_rpg_empty;
class haxey_O_Carryall_SAT: B_Carryall_oli
{
	_generalMacro = "haxey_O_Carryall_SAT";
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
class haxey_O_umbts_SAA: rhs_assault_umbts
{
	_generalMacro = "haxey_O_umbts_SAA";
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
class haxey_O_rhs_rpg_AT: rhs_rpg_empty
{
	_generalMacro = "haxey_O_rhs_rpg_AT";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_rpg7_PG7VL_mag
		{
			count = 3;
			name = "rhs_rpg7_PG7VL_mag";
		};
		class _xx_rhs_rpg7_OG7V_mag
		{
			count = 1;
			name = "rhs_rpg7_OG7V_mag";
		};
	};
};
class haxey_O_sidor_exp: rhs_sidor
{
	_generalMacro = "haxey_O_sidor_exp";
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
class haxey_O_sidor_Rflm: rhs_sidor
{
	_generalMacro = "haxey_O_sidor_AR";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_45Rnd_545X39_AK
		{
			count = 3;
			name = "rhs_45Rnd_545X39_AK";
		};
		class _xx_rhs_30Rnd_545x39_AK
		{
			count = 1;
			name = "rhs_30Rnd_545x39_AK";
		};
	};
};
class haxey_O_sidor_AR: rhs_sidor
{
	_generalMacro = "haxey_O_sidor_AR";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_45Rnd_545X39_AK
		{
			count = 3;
			name = "rhs_45Rnd_545X39_AK";
		};
	};
};
class haxey_O_sidor_HG: rhs_sidor
{
	_generalMacro = "haxey_O_sidor_HG";
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_rhs_100Rnd_762x54mmR
		{
			count = 1;
			name = "rhs_100Rnd_762x54mmR";
		};
	};
};
class haxey_O_sidor_GL: rhs_sidor
{
	_generalMacro = "haxey_O_sidor_GL";
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
	};
};
class haxey_O_umbts_Med: rhs_assault_umbts
{
	_generalMacro = "haxey_O_umbts_Med";
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

#define MACRO_RU_TRANSPORTITEMS \
	class TransportItems \
	{ \
		class _xx_rhs_30Rnd_545x39_AK_green \
		{ \
			name = "rhs_30Rnd_545x39_AK_green"; \
			count = 10; \
		}; \
		class _xx_rhs_45Rnd_545X39_AK_Green \
		{ \
			name = "rhs_45Rnd_545X39_AK_Green"; \
			count = 5; \
		}; \
		class _xx_rhs_100Rnd_762x54mmR_green \
		{ \
			name = "rhs_100Rnd_762x54mmR_green"; \
			count = 5; \
		}; \
		class _xx_rhs_10Rnd_762x54mmR_7N1 \
		{ \
			name = "rhs_10Rnd_762x54mmR_7N1"; \
			count = 5; \
		}; \
		class _xx_rhs_mag_rdg2_white \
		{ \
			name = "rhs_mag_rdg2_white"; \
			count = 10; \
		}; \
		class _xx_rhs_mag_nspd \
		{ \
			name = "rhs_mag_nspd"; \
			count = 10; \
		}; \
		class _xx_ACE_HandFlare_White \
		{ \
			name = "ACE_HandFlare_White"; \
			count = 10; \
		}; \
		class _xx_ACE_HandFlare_Green \
		{ \
			name = "ACE_HandFlare_Green"; \
			count = 10; \
		}; \
		class _xx_Chemlight_green \
		{ \
			name = "Chemlight_green"; \
			count = 10; \
		}; \
		class _xx_rhs_VG40OP_white \
		{ \
			name = "rhs_VG40OP_white"; \
			count = 10; \
		}; \
		class _xx_rhs_GRD40_White \
		{ \
			name = "rhs_GRD40_White"; \
			count = 10; \
		}; \
		class _xx_rhs_GRD40_Red \
		{ \
			name = "rhs_GRD40_Red"; \
			count = 10; \
		}; \
		class _xx_ACE_fieldDressing \
		{ \
			count = 20; \
			name = "ACE_fieldDressing"; \
		}; \
		class _xx_ACE_morphine \
		{ \
			count = 5; \
			name = "ACE_morphine"; \
		}; \
		class _xx_ACE_epinephrine \
		{ \
			count = 2; \
			name = "ACE_epinephrine"; \
		}; \
		class _xx_ACE_bloodIV \
		{ \
			count = 5; \
			name = "ACE_bloodIV"; \
		}; \
	}; \
	class TransportMagazines {}; \
	class TransportWeapons {}; \
	class TransportBackpacks {};

#define MACRO_RU_TRANSPORTITEMS_AIR \
	class TransportItems \
	{ \
		class _xx_rhs_30Rnd_545x39_AK_green \
		{ \
			name = "rhs_30Rnd_545x39_AK_green"; \
			count = 10; \
		}; \
		class _xx_rhs_45Rnd_545X39_AK_Green \
		{ \
			name = "rhs_45Rnd_545X39_AK_Green"; \
			count = 5; \
		}; \
		class _xx_rhs_100Rnd_762x54mmR_green \
		{ \
			name = "rhs_100Rnd_762x54mmR_green"; \
			count = 5; \
		}; \
		class _xx_rhs_10Rnd_762x54mmR_7N1 \
		{ \
			name = "rhs_10Rnd_762x54mmR_7N1"; \
			count = 5; \
		}; \
		class _xx_rhs_mag_rdg2_white \
		{ \
			name = "rhs_mag_rdg2_white"; \
			count = 10; \
		}; \
		class _xx_rhs_mag_nspd \
		{ \
			name = "rhs_mag_nspd"; \
			count = 10; \
		}; \
		class _xx_ACE_HandFlare_White \
		{ \
			name = "ACE_HandFlare_White"; \
			count = 10; \
		}; \
		class _xx_ACE_HandFlare_Green \
		{ \
			name = "ACE_HandFlare_Green"; \
			count = 10; \
		}; \
		class _xx_Chemlight_green \
		{ \
			name = "Chemlight_green"; \
			count = 10; \
		}; \
		class _xx_rhs_VG40OP_white \
		{ \
			name = "rhs_VG40OP_white"; \
			count = 10; \
		}; \
		class _xx_rhs_GRD40_White \
		{ \
			name = "rhs_GRD40_White"; \
			count = 10; \
		}; \
		class _xx_rhs_GRD40_Red \
		{ \
			name = "rhs_GRD40_Red"; \
			count = 10; \
		}; \
		class _xx_ACE_fieldDressing \
		{ \
			count = 20; \
			name = "ACE_fieldDressing"; \
		}; \
		class _xx_ACE_morphine \
		{ \
			count = 5; \
			name = "ACE_morphine"; \
		}; \
		class _xx_ACE_epinephrine \
		{ \
			count = 2; \
			name = "ACE_epinephrine"; \
		}; \
		class _xx_ACE_bloodIV \
		{ \
			count = 5; \
			name = "ACE_bloodIV"; \
		}; \
	}; \
	class TransportMagazines {}; \
	class TransportWeapons {}; \
		class TransportBackpacks \
	{ \
		class _xx_B_Parachute \
		{ \
			backpack = "B_Parachute"; \
			count = 28; \
		}; \
	};

#include "Men_MSV.hpp"
#include "Vhl_MSV.hpp"

#include "Men_VDV.hpp"
#include "Vhl_VDV.hpp"

#include "Vhl_VVS.hpp"