	class rhs_weap_ak74m;
	class rhs_weap_ak74m_gp25;
	class hlc_rifle_rpk74n;
	class rhs_weap_svdp;
	class CUP_srifle_ksvk;
	class rhs_weap_rpg7;
	class haxey_ak74m: rhs_weap_ak74m
    {
        scope = 2;
        displayName = "AK74M";
		    class LinkedItems
        {
            class LinkedItemsOptic
         {
            slot = "CowsSlot";
            item = "rhs_acc_ekp1";
         };
            class LinkedItemsMuzzle
         {
            slot = "MuzzleSlot";
            item = "rhs_acc_dtk";
         };

            class LinkedItemsAcc
         {
            slot = "PointerSlot";
            item = "";
         };
        };
    };
	class haxey_ak74m_gp25: rhs_weap_ak74m_gp25
    {
        scope = 2;
        displayName = "AK74M - GP25";
		class LinkedItems
        {
            class LinkedItemsOptic
         {
            slot = "CowsSlot";
            item = "rhs_acc_ekp1";
         };
            class LinkedItemsMuzzle
         {
            slot = "MuzzleSlot";
            item = "rhs_acc_dtk";
         };

            class LinkedItemsAcc
         {
            slot = "PointerSlot";
            item = "";
         };
        };
    };
	class haxey_RPK74M: hlc_rifle_rpk74n
    {
        scope = 2;
        displayName = "RPK74M";
		class LinkedItems
        {
            class LinkedItemsOptic
         {
            slot = "CowsSlot";
            item = "CUP_optic_Kobra";
         };
            class LinkedItemsMuzzle
         {
            slot = "MuzzleSlot";
            item = "";
         };

            class LinkedItemsAcc
         {
            slot = "PointerSlot";
            item = "";
         };
        };
    };
	class haxey_SVD: rhs_weap_svdp
    {
        scope = 2;
        displayName = "SVD";
		class LinkedItems
        {
            class LinkedItemsOptic
         {
            slot = "CowsSlot";
            item = "rhs_acc_pso1m2";
         };
            class LinkedItemsMuzzle
         {
            slot = "MuzzleSlot";
            item = "";
         };

            class LinkedItemsAcc
         {
            slot = "PointerSlot";
            item = "";
         };
        };
    };
	class haxey_KSVK: CUP_srifle_ksvk
    {
        scope = 2;
        displayName = "KSVK";
		class LinkedItems
        {
            class LinkedItemsOptic
         {
            slot = "CowsSlot";
            item = "CUP_optic_PSO_1";
         };
            class LinkedItemsMuzzle
         {
            slot = "MuzzleSlot";
            item = "";
         };

            class LinkedItemsAcc
         {
            slot = "PointerSlot";
            item = "";
         };
        };
    };
	class haxey_RPG7: rhs_weap_rpg7
    {
        scope = 2;
        displayName = "RPG7";
		class LinkedItems
        {
            class LinkedItemsOptic
         {
            slot = "CowsSlot";
            item = "rhs_acc_pgo7v";
         };
            class LinkedItemsMuzzle
         {
            slot = "MuzzleSlot";
            item = "";
         };

            class LinkedItemsAcc
         {
            slot = "PointerSlot";
            item = "";
         };
        };
    };
