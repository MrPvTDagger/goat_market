class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_APC_Tracked_01_AA_F", "" },
			{ "O_APC_Tracked_02_AA_F", "" },
			{ "B_APC_Wheeled_01_cannon_F", "" },
			{ "O_APC_Tracked_02_cannon_F", "" },
			{ "I_APC_tracked_03_cannon_F", "" },
			{ "B_APC_Tracked_01_rcws_F", "" },
			{ "B_APC_Tracked_01_CRV_F", "" },
			{ "O_APC_Wheeled_02_rcws_F", "" },
			{ "I_APC_Wheeled_03_cannon_F", "" },
			{ "O_MBT_02_arty_F", "" },
			{ "B_MBT_01_mlrs_F", "" },
			{ "B_MBT_01_arty_F", "" },
			{ "I_MRAP_03_F", "" },
			{ "I_MRAP_03_hmg_F", "" },
			{ "I_MRAP_03_gmg_F", "" },
			{ "C_Van_01_fuel_F", "" },
			{ "C_Hatchback_01_F", "" },
			{ "C_Hatchback_01_sport_F", "" },
			{ "B_Truck_01_covered_F", "" },
			{ "C_Offroad_02_unarmed_F_black", "" },
			{ "C_Truck_02_covered_F", "" },
			{ "B_MRAP_01_F", "" },
			{ "B_MRAP_01_hmg_F", "" },
			{ "B_MRAP_01_gmg_F", "" },
			{ "B_G_Offroad_01_F", "" },
			{ "B_G_Offroad_01_armed_F", "" },
			{ "B_T_LSV_01_unarmed_F", "" },
			{ "B_T_LSV_01_armed_F", "" },
			{ "O_MRAP_02_F", "" },
			{ "O_MRAP_02_hmg_F", "" },
			{ "O_MRAP_02_gmg_F", "" },
			{ "O_T_LSV_02_unarmed_F", "" },
			{ "B_Quadbike_01_F", "" },
			{ "C_SUV_01_F", "" },
			{ "O_Truck_03_covered_F", "" },
			{ "C_Van_01_transport_F", "" },
			{ "B_MBT_01_TUSK_F", "" },
			{ "B_MBT_01_cannon_F", "" },
			{ "I_MBT_03_cannon_F", "" },
			{ "O_MBT_02_cannon_F", "" }

        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "I_Heli_Transport_02_F", "" },
			{ "I_Heli_light_03_unarmed_F", "" },
			{ "I_Plane_Fighter_03_dynamicLoadout_F", "" },
			{ "C_Plane_Civil_01_F", "" },
			{ "C_Plane_Civil_01_racing_F", "" },
			{ "O_Heli_Light_02_dynamicLoadout_F", "" },
			{ "O_Heli_Light_02_unarmed_F", "" },
			{ "O_T_VTOL_02_infantry_dynamicLoadout_F", "" },
			{ "O_T_VTOL_02_vehicle_dynamicLoadout_F", "" },
			{ "B_T_VTOL_01_infantry_F", "" },
			{ "B_T_VTOL_01_vehicle_F", "" },
			{ "B_T_VTOL_01_armed_F", "" },
			{ "B_Plane_CAS_01_F", "" },
			{ "B_Heli_Light_01_armed_F", "" },
			{ "B_Heli_Light_01_F", "" },
			{ "B_Heli_Transport_01_F", "" },
			{ "B_Heli_Transport_03_F", "" },
			{ "B_Heli_Attack_01_dynamicLoadout_F", "" },
			{ "C_Heli_Light_01_civil_F", "" },
			{ "I_C_Plane_Civil_01_F", "" },
			{ "B_UAV_01_F", "" },
			{ "B_UGV_01_rcws_F", "" },
			{ "B_UAV_02_dynamicLoadout_F", "" },
			{ "O_T_UAV_04_CAS_F", "" },
			{ "B_T_UAV_03_F", "" },
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
			{ "B_Lifeboat", "" },
			{ "B_Boat_Armed_01_minigun_F", "" },
			{ "B_SDV_01_F", "" },
			{ "C_Boat_Civil_01_F", "" },
			{ "C_Boat_Transport_02_F", "" },
			{ "C_Scooter_Transport_01_F", "" },
			
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};

    };
    class B_APC_Tracked_01_AA_F /* BARDELAS */{
        vItemSpace = 100;
        conditions = "";
        price = 1600000;
        textures[] = {};
        
    };
	    class O_APC_Tracked_02_AA_F /* TIGRIS */{
        vItemSpace = 100;
        conditions = "";
        price = 1850000;
        textures[] = {};
        
    };
		class B_APC_Wheeled_01_cannon_F /* BADGER IFV */{
        vItemSpace = 100;
        conditions = "";
        price = 1875000;
        textures[] = {};
        
    };
		class O_APC_Tracked_02_cannon_F /* BM-2T STALKER */{
        vItemSpace = 100;
        conditions = "";
        price = 1750000;
        textures[] = {};
        
    };
		class I_APC_tracked_03_cannon_F /* FV510 WARRIOR */{
        vItemSpace = 100;
        conditions = "";
        price = 2405000;
        textures[] = {};
        
    };
		class B_APC_Tracked_01_rcws_F /* NAMER */{
        vItemSpace = 100;
        conditions = "";
        price = 3000000;
        textures[] = {};
        
    };
		class B_APC_Tracked_01_CRV_F /* NAMMERA */{
        vItemSpace = 100;
        conditions = "";
        price = 3500000;
        textures[] = {};
        
    };
		class O_APC_Wheeled_02_rcws_F /* OTOKAR ARMA */{
        vItemSpace = 100;
        conditions = "";
        price = 1800000;
        textures[] = {};
        
    };
		class I_APC_Wheeled_03_cannon_F /* PANDUR II */{
        vItemSpace = 100;
        conditions = "";
        price = 1350000;
        textures[] = {};
        
    };
		class O_MBT_02_arty_F /* 2S9 SOCHOR */{
        vItemSpace = 100;
        conditions = "";
        price = 1300000;
        textures[] = {};
        
    };
		class B_MBT_01_mlrs_F /* SEARA */{
        vItemSpace = 100;
        conditions = "";
        price = 2500000;
        textures[] = {};
        
    };
		class B_MBT_01_arty_F /* SHOLEF */{
        vItemSpace = 100;
        conditions = "";
        price = 2215000;
        textures[] = {};
        
    };
		class I_MRAP_03_F /* FENNEK */{
        vItemSpace = 100;
        conditions = "";
        price = 920000;
        textures[] = {};
        
    };
		class I_MRAP_03_hmg_F /* FENNEK HMG */{
        vItemSpace = 100;
        conditions = "";
        price = 950000;
        textures[] = {};
        
    };
		class I_MRAP_03_gmg_F /* FENNEK GMG */{
        vItemSpace = 100;
        conditions = "";
        price = 970000;
        textures[] = {};
        
    };
		class C_Van_01_fuel_F /* FUEL TRUCK */{
        vItemSpace = 100;
        conditions = "";
        price = 13500;
        textures[] = {};
        
    };
		class C_Hatchback_01_F /* HATCHBACK */{
        vItemSpace = 100;
        conditions = "";
        price = 20000;
        textures[] = {};
        
    };
		class C_Hatchback_01_sport_F /* HATCHBACK SPORT */{
        vItemSpace = 100;
        conditions = "";
        price = 25000;
        textures[] = {};
        
    };
		class B_Truck_01_covered_F /* HEMMT */{
        vItemSpace = 100;
        conditions = "";
        price = 450000;
        textures[] = {};
        
    };
		class C_Offroad_02_unarmed_F_black /* JEEP WRANGLER */{
        vItemSpace = 100;
        conditions = "";
        price = 18000;
        textures[] = {};
        
    };
		class C_Truck_02_covered_F /* KAMAZ */{
        vItemSpace = 100;
        conditions = "";
        price = 350000;
        textures[] = {};
        
    };
		class B_MRAP_01_F /* M-ATV */{
        vItemSpace = 100;
        conditions = "";
        price = 470000;
        textures[] = {};
        
    };
		class B_MRAP_01_hmg_F /* M-ATV HMG */{
        vItemSpace = 100;
        conditions = "";
        price = 480000;
        textures[] = {};
        
    };
		class B_MRAP_01_gmg_F /* M-ATV GMG */{
        vItemSpace = 100;
        conditions = "";
        price = 485000;
        textures[] = {};
        
    };
		class B_G_Offroad_01_F /* OFFROAD UNARMED */{
        vItemSpace = 100;
        conditions = "";
        price = 15000;
        textures[] = {};
        
    };
		class B_G_Offroad_01_armed_F /* OFFROAD ARMED */{
        vItemSpace = 100;
        conditions = "";
        price = 20000;
        textures[] = {};
        
    };
		class B_T_LSV_01_unarmed_F /* PROWLER UNARMED */{
        vItemSpace = 100;
        conditions = "";
        price = 145000;
        textures[] = {};
        
    };
		class B_T_LSV_01_armed_F /* PROWLER ARMED */{
        vItemSpace = 100;
        conditions = "";
        price = 150000;
        textures[] = {};
        
    };
		class O_MRAP_02_F /* PUNISHER IFRIT */{
        vItemSpace = 100;
        conditions = "";
        price = 300000;
        textures[] = {};
        
    };
		class O_MRAP_02_hmg_F /* PUNISHER IFRIT HMG */{
        vItemSpace = 100;
        conditions = "";
        price = 330000;
        textures[] = {};
        
    };
		class O_MRAP_02_gmg_F /* PUNISHER IFRIT GMG */{
        vItemSpace = 100;
        conditions = "";
        price = 350000;
        textures[] = {};
        
    };
		class O_T_LSV_02_unarmed_F /* QILLIN UNARMED*/{
        vItemSpace = 100;
        conditions = "";
        price = 170000;
        textures[] = {};
        
    };
	    class B_Quadbike_01_F /* QUADBIKE */{
        vItemSpace = 100;
        conditions = "";
        price = 2000;
        textures[] = {};
        
    };
		class C_SUV_01_F /* SUV */{
        vItemSpace = 100;
        conditions = "";
        price = 22000;
        textures[] = {};
        
    };
		class O_Truck_03_covered_F /* TYPHOON */{
        vItemSpace = 100;
        conditions = "";
        price = 350000;
        textures[] = {};
        
    };
		class C_Van_01_transport_F /* TRUCK */{
        vItemSpace = 100;
        conditions = "";
        price = 12000;
        textures[] = {};
        
    };
		class B_MBT_01_TUSK_F /* MERKAVA MK IV LIC */{
        vItemSpace = 100;
        conditions = "";
        price = 4300000;
        textures[] = {};
        
    };
		class B_MBT_01_cannon_F /* MERKAVA MK IV M */{
        vItemSpace = 100;
        conditions = "";
        price = 4400000;
        textures[] = {};
        
    };
		class I_MBT_03_cannon_F /* LEOPARD 2SG */{
        vItemSpace = 100;
        conditions = "";
        price = 5740000;
        textures[] = {};
        
    };
		class O_MBT_02_cannon_F /* T100 BLACK EAGLE */{
        vItemSpace = 100;
        conditions = "";
        price = 4350000;
        textures[] = {};
        
    };
		class I_Heli_Transport_02_F /* AW101 MERLIN */{
        vItemSpace = 100;
        conditions = "";
        price = 25000000;
        textures[] = {};
        
    };
		class I_Heli_light_03_unarmed_F /* AW159 WILDCAT UNARMED */{
        vItemSpace = 100;
        conditions = "";
        price = 31000000;
        textures[] = {};
        
    };
		class I_Plane_Fighter_03_dynamicLoadout_F /* L159 CAS */{
        vItemSpace = 100;
        conditions = "";
        price = 16000000;
        textures[] = {};
        
    };
		class C_Plane_Civil_01_F /* CESSNA TTX */{
        vItemSpace = 100;
        conditions = "";
        price = 289500;
        textures[] = {};
        
    };
		class C_Plane_Civil_01_racing_F /* CESSNA TTX RACING */{
        vItemSpace = 100;
        conditions = "";
        price = 364000;
        textures[] = {};
        
    };
		class O_Heli_Light_02_dynamicLoadout_F /* KA-60 KASATKA ARMED */{
        vItemSpace = 100;
        conditions = "";
        price = 12000000;
        textures[] = {};
        
    };
		class O_Heli_Light_02_unarmed_F /* KA-60 KASATKA UNARMED */{
        vItemSpace = 100;
        conditions = "";
        price = 10000000;
        textures[] = {};
        
    };
		class O_T_VTOL_02_infantry_dynamicLoadout_F /* Y-32 XI'AN INFANTRY */{
        vItemSpace = 100;
        conditions = "";
        price = 62000000;
        textures[] = {};
        
    };
		class O_T_VTOL_02_vehicle_dynamicLoadout_F /* Y-32 XI'AN VEHICLE */{
        vItemSpace = 100;
        conditions = "";
        price = 67000000;
        textures[] = {};
        
    };
		class B_T_VTOL_01_infantry_F /* BLACKFISH INFANTRY */{
        vItemSpace = 100;
        conditions = "";
        price = 50000000;
        textures[] = {};
        
    };
		class B_T_VTOL_01_vehicle_F /* BLACKFISH VEHICLE */{
        vItemSpace = 100;
        conditions = "";
        price = 55000000;
        textures[] = {};
        
    };
		class B_T_VTOL_01_armed_F /* BLACKFISH ARMED */{
        vItemSpace = 100;
        conditions = "";
        price = 60000000;
        textures[] = {};
        
    };
		class B_Plane_CAS_01_F /* A-10D THUNDERBOLT II */{
        vItemSpace = 100;
        conditions = "";
        price = 20000000;
        textures[] = {};
        
    };
		class B_Heli_Light_01_armed_F /* AH-6 LITTLE BIRD */{
        vItemSpace = 100;
        conditions = "";
        price = 1260000;
        textures[] = {};
        
    };
		class B_Heli_Light_01_F /* MH-6 LITTLE BIRD TRANSPORT */{
        vItemSpace = 100;
        conditions = "";
        price = 1250000;
        textures[] = {};
        
    };
		class B_Heli_Transport_01_F /* UH-80 GHOST HAWK */{
        vItemSpace = 100;
        conditions = "";
        price = 15000000;
        textures[] = {};
        
    };
		class B_Heli_Transport_03_F /* CH-47 CHINOOK */{
        vItemSpace = 100;
        conditions = "";
        price = 40000000;
        textures[] = {};
        
    };
		class B_Heli_Attack_01_dynamicLoadout_F /* RAH-66 COMANCHE */{
        vItemSpace = 100;
        conditions = "";
        price = 30000000;
        textures[] = {};
        
    };
		class C_Heli_Light_01_civil_F /* M900 */{
        vItemSpace = 100;
        conditions = "";
        price = 1500000;
        textures[] = {};
        
    };
		class I_C_Plane_Civil_01_F /* CEASAR BTT */{
        vItemSpace = 100;
        conditions = "";
        price = 310000;
        textures[] = {};
        
    };
		class B_Boat_Transport_01_F /* ASSAULT BOAT */{
        vItemSpace = 100;
        conditions = "";
        price = 20000;
        textures[] = {};
        
    };
		class B_Lifeboat /* RESCUE BOAT */{
        vItemSpace = 100;
        conditions = "";
        price = 2000;
        textures[] = {};
        
    };
		class B_Boat_Armed_01_minigun_F /* SPEEDBOAT MINIGUN */{
        vItemSpace = 100;
        conditions = "";
        price = 30000;
        textures[] = {};
        
    };
		class B_SDV_01_F /* SDV */{
        vItemSpace = 100;
        conditions = "";
        price = 12500;
        textures[] = {};
        
    };
		class C_Boat_Civil_01_F /* MOTORBOAT */{
        vItemSpace = 100;
        conditions = "";
        price = 10000;
        textures[] = {};
        
    };
		class C_Boat_Transport_02_F /* RHIB */{
        vItemSpace = 100;
        conditions = "";
        price = 4000;
        textures[] = {};
        
    };
		class C_Scooter_Transport_01_F /* JETSKI */{
        vItemSpace = 100;
        conditions = "";
        price = 1500;
        textures[] = {};
        
    };
		class B_UAV_01_F /* AR-2 DARTER */{
        vItemSpace = 100;
        conditions = "";
        price = 1500;
        textures[] = {};
        
    };
		class B_UGV_01_rcws_F /* UGV STOMPER RCWS */{
        vItemSpace = 100;
        conditions = "";
        price = 250000;
        textures[] = {};
        
    };
		class B_UAV_02_dynamicLoadout_F /* YABHON R-3 CAS */{
        vItemSpace = 100;
        conditions = "";
        price = 2500000;
        textures[] = {};
        
    };
		class O_T_UAV_04_CAS_F /* BURRAQ UCAV */{
        vItemSpace = 100;
        conditions = "";
        price = 3000000;
        textures[] = {};
        
    };
		class B_T_UAV_03_F /* MQ-12 FALCON */{
        vItemSpace = 100;
        conditions = "";
        price = 4500000;
        textures[] = {};
        
    };
};
