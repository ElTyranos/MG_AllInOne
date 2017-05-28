class B_FieldPack_cbr;
class haxey_B_FieldPack_cbr: B_FieldPack_cbr
{
	author = "haxey";
	scope = 1;
	class TransportItems
	{
		class _xx_ACE_Cellphone
		{
			count = 1;
			name = "ACE_Cellphone";
		};
		class _xx_IEDUrbanSmall_Remote_Mag
		{
			count = 2;
			name = "IEDUrbanSmall_Remote_Mag";
		};
		class _xx_IEDUrbanBig_Remote_Mag
		{
			count = 1;
			name = "IEDUrbanBig_Remote_Mag";
		};
	};
};

#define MACRO_MIL_TRANSPORTITEMS \
	class TransportItems \
	{ \
		class _xx_rhsgref_5Rnd_792x57_kar98k \
		{ \
			name = "rhsgref_5Rnd_792x57_kar98k"; \
			count = 5; \
		}; \
		class _xx_rhsgref_5Rnd_762x54_m38 \
		{ \
			name = "rhsgref_5Rnd_762x54_m38"; \
			count = 5; \
		}; \
		class _xx_hlc_30Rnd_762x39_t_ak \
		{ \
			name = "hlc_30Rnd_762x39_t_ak"; \
			count = 5; \
		}; \
		class _xx_rhs_30Rnd_545x39_AK_green \
		{ \
			name = "rhs_30Rnd_545x39_AK_green"; \
			count = 5; \
		}; \
		class _xx_hlc_45Rnd_762x39_t_rpk \
		{ \
			name = "hlc_45Rnd_762x39_t_rpk"; \
			count = 5; \
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


#include "Militia_Taliban.hpp"
#include "Vhl_Taliban.hpp"
