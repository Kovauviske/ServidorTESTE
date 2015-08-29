#include <macro.h>
/*
	Master Life Configuration File
	This file is to setup variables for the client, there are still other configuration files in the system

*****************************
****** Backend Variables *****
*****************************
*/
life_query_time = time;
life_action_delay = time;
life_trunk_vehicle = Objnull;
life_session_completed = false;
life_garage_store = false;
life_session_tries = 0;
life_net_dropped = false;
life_hit_explosive = false;
life_siren_active = false;
life_clothing_filter = 0;
life_clothing_uniform = -1;
life_redgull_effect = time;
life_is_processing = false;
life_bail_paid = false;
life_impound_inuse = false;
life_action_inUse = false;
life_spikestrip = ObjNull;
life_respawn_timer = 2; //Scaled in minutes
life_knockout = false;
life_interrupted = false;
life_respawned = false;
life_removeWanted = false;
life_action_gathering = false;
BipBipOn=false;
life_fouriere_modifier = 15;
life_god = false;
life_frozen = false;
life_markers = false;

//Persistent Saving
__CONST__(life_save_civ,TRUE); //Save weapons for civs?
__CONST__(life_save_yinv,TRUE); //Save Y-Inventory for players?

//Revive constant variables.
__CONST__(life_revive_cops,FALSE); //Set to false if you don't want cops to be able to revive downed players.
__CONST__(life_revive_fee,15000); //Fee for players to pay when revived.

//House Limit
__CONST__(life_houseLimit,5); //Maximum amount of houses a player can buy (TODO: Make Tiered licenses).

//Gang related stuff?
__CONST__(life_gangPrice,75000); //Price for creating a gang (They're all persistent so keep it high to avoid 345345345 gangs).
__CONST__(life_gangUpgradeBase,10000); //MASDASDASD
__CONST__(life_gangUpgradeMultipler,2.5); //BLAH

__CONST__(life_enableFatigue,true); //Enable / Disable the ARMA 3 Fatigue System

//Uniform price (0),Hat Price (1),Glasses Price (2),Vest Price (3),Backpack Price (4)
life_clothing_purchase = [-1,-1,-1,-1,-1];
/*
*****************************
****** Weight Variables *****
*****************************
*/
life_maxWeight = 24; //Identifies the max carrying weight (gets adjusted throughout game when wearing different types of clothing).
life_maxWeightT = 24; //Static variable representing the players max carrying weight on start.
life_carryWeight = 0; //Represents the players current inventory weight (MUST START AT 0).

/*
*****************************
****** Life Variables *******
*****************************
*/
life_net_dropped = false;
life_hit_explosive = false;
life_siren_active = false;
life_bank_fail = false;
life_use_atm = true;
life_is_arrested = false;
life_delivery_in_progress = false;
life_action_in_use = false;
life_thirst = 100;
life_hunger = 100;
__CONST__(life_paycheck_period,5); //Five minutes
life_cash = 0;
__CONST__(life_impound_car,2000);
__CONST__(life_impound_boat,3000);
__CONST__(life_impound_air,5000);
life_istazed = false;
life_my_gang = ObjNull;

life_vehicles = [];
bank_robber = [];
switch (playerSide) do
{
	case west: 
	{
		life_atmcash = 30000; //Starting Bank Money
		life_paycheck = 3000; //Paycheck Amount
	};
	case civilian: 
	{
		life_atmcash = 20000; //Starting Bank Money
		life_paycheck = 1750; //Paycheck Amount
	};
	
	case independent: {
		life_atmcash = 25000;
		life_paycheck = 3000;
	};
};

/*
	Master Array of items?
*/
life_vShop_rentalOnly = ["B_G_Offroad_01_armed_F"];
__CONST__(life_vShop_rentalOnly,life_vShop_rentalOnly); //These vehicles can never be bought and only 'rented'. Used as a balancer & money sink. If you want your server to be chaotic then fine.. Remove it..

life_inv_items = 
[
	"life_inv_oilu",
	"life_inv_oilp",
	"life_inv_heroinu",
	"life_inv_heroinp",
	"life_inv_cannabis",
	"life_inv_marijuana",
	"life_inv_apple",
	"life_inv_rabbit",
	"life_inv_salema",
	"life_inv_ornate",
	"life_inv_mackerel",
	"life_inv_tuna",
	"life_inv_mullet",
	"life_inv_catshark",
	"life_inv_turtle",
	"life_inv_fishingpoles",
	"life_inv_water",
	"life_inv_donuts",
	"life_inv_turtlesoup",
	"life_inv_coffee",
	"life_inv_fuelF",
	"life_inv_fuelE",
	"life_inv_pickaxe",
	"life_inv_copperore",
	"life_inv_ironore",
	"life_inv_ironr",
	"life_inv_copperr",
	"life_inv_sand",
	"life_inv_salt",
	"life_inv_saltr",
	"life_inv_glass",
	"life_inv_tbacon",
	"life_inv_lockpick",
	"life_inv_redgull",
	"life_inv_peach",
	"life_inv_diamond",
	"life_inv_coke",
	"life_inv_cokep",
	"life_inv_diamondr",
	"life_inv_spikeStrip",
	"life_inv_rock",
	"life_inv_cement",
	"life_inv_goldbar",
	"life_inv_blastingcharge",
	"life_inv_boltcutter",
	"life_inv_defusekit",
	"life_inv_storagesmall",
	"life_inv_storagebig",
	//New Resto
	"life_inv_toasty",
	"life_inv_sandwich",
	"life_inv_beer",
	"life_inv_soda",
	"life_inv_redBurger"
];

//Setup variable inv vars.
{missionNamespace setVariable[_x,0];} foreach life_inv_items;
//Licenses [license var, civ/cop]
life_licenses =
[
	["license_cop_air","cop"],
	["license_cop_swat","cop"],
	["license_cop_cg","cop"],
	["license_civ_driver","civ"],
	["license_civ_air","civ"],
	["license_civ_heroin","civ"],
	["license_civ_marijuana","civ"],
	["license_civ_gang","civ"],
	["license_civ_boat","civ"],
	["license_civ_oil","civ"],
	["license_civ_dive","civ"],
	["license_civ_truck","civ"],
	["license_civ_gun","civ"],
	["license_civ_rebel","civ"],
	["license_civ_coke","civ"],
	["license_civ_diamond","civ"],
	["license_civ_copper","civ"],
	["license_civ_iron","civ"],
	["license_civ_sand","civ"],
	["license_civ_salt","civ"],
	["license_civ_cement","civ"],
	["license_med_air","med"],
	["license_civ_home","civ"]
];

//Setup License Variables
{missionNamespace setVariable[(_x select 0),false];} foreach life_licenses;

life_dp_points = ["dp_1","dp_2","dp_3","dp_4","dp_5","dp_6","dp_7","dp_8","dp_9","dp_10","dp_11","dp_12","dp_13","dp_14","dp_15","dp_15","dp_16","dp_17","dp_18","dp_19","dp_20","dp_21","dp_22","dp_23","dp_24","dp_25"];
//[shortVar,reward]
life_illegal_items = [["heroinp",2500],["cocaine",1500],["cocainep",3500],["marijuana",2000],["turtle",3000],["blastingcharge",10000],["boltcutter",500]];


/*
	Sell / buy arrays
*/
sell_array = 
[
	["apple",50],
	["heroinu",1850],
	["heroinp",7000],
	["salema",45],
	["ornate",40],
	["mackerel",175],
	["tuna",700],
	["mullet",250],
	["catshark",300],
	["rabbit",65],
	["oilp",3200],
	["turtle",13000],
	["water",5],
	["coffee",5],
	["turtlesoup",1000],
	["donuts",60],
	["marijuana",3700],
	["tbacon",25],
	["lockpick",75],
	["pickaxe",750],
	["redgull",200],
	["peach",55],
	["cocaine",3000],
	["cocainep",5000],
	["diamond",750],
	["diamondc",4200],
	["iron_r",1100],
	["copper_r",1500],
	["salt_r",1500],
	["glass",1200],
	["fuelF",500],
	["spikeStrip",1200],
	["cement",1200],
	["goldbar",95000],
	//New Resto
	["toasty",5],
	["sandwich",5],
	["soda",2],
	["beer",5],
	["redburger",5]
];
__CONST__(sell_array,sell_array);

buy_array = 
[
	["apple",65],
	["rabbit",75],
	["salema",55],
	["ornate",50],
	["mackerel",200],
	["tuna",900],
	["mullet",300],
	["catshark",350],
	["water",10],
	["turtle",4000],
	["turtlesoup",2500],
	["donuts",120],
	["coffee",10],
	["tbacon",75],
	["lockpick",150],
	["pickaxe",1200],
	["redgull",1500],
	["fuelF",850],
	["peach",68],
	["spikeStrip",2500],
	["blastingcharge",35000],
	["boltcutter",7500],
	["defusekit",2500],
	["storagesmall",75000],
	["storagebig",150000],
	//New Resto
	["soda",5],
	["beer",10],
	["toasty",5],
	["sandwich",5],
	["redburger",5]
];
__CONST__(buy_array,buy_array);

life_weapon_shop_array =
[
	["arifle_sdar_F",7500],
	["hgun_P07_snds_F",650],
	["hgun_P07_F",1500],
	["ItemGPS",45],
	["ToolKit",75],
	["FirstAidKit",65],
	["Medikit",450],
	["NVGoggles",0],
	["16Rnd_9x21_Mag",15],
	["20Rnd_556x45_UW_mag",35],
	["ItemMap",35],
	["ItemCompass",25],
	["Chemlight_blue",50],
	["Chemlight_yellow",50],
	["Chemlight_green",50],
	["Chemlight_red",50],
	["hgun_Rook40_F",500],
	["arifle_Katiba_F",5000],
	["30Rnd_556x45_Stanag",65],
	["20Rnd_762x51_Mag",85],
	["30Rnd_65x39_caseless_green",50],
	["DemoCharge_Remote_Mag",7500],
	["SLAMDirectionalMine_Wire_Mag",2575],
	["optic_ACO_grn",250],
	["acc_flashlight",100],
	["srifle_EBR_F",15000],
	["arifle_TRG21_F",3500],
	["optic_MRCO",1500],
	["optic_Aco",850],
	["arifle_MX_F",7500],
	["arifle_MXC_F",5000],
	["arifle_MXM_F",8500],
	["MineDetector",500],
	["optic_Holosight",275],
	["acc_pointer_IR",175],
	["arifle_TRG20_F",2500],
	["SMG_01_F",1500],
	["arifle_Mk20C_F",4500],
	["30Rnd_45ACP_Mag_SMG_01",60],
	["30Rnd_9x21_Mag",30]
];
__CONST__(life_weapon_shop_array,life_weapon_shop_array);

life_garage_prices2 =
[
	//Kart
	["C_Kart_01_Blu_F",0],
	["C_Kart_01_Fuel_F",0],
	["C_Kart_01_Red_F", 0],
	["C_Kart_01_Vrana_F",0],
	// voiture Medic
	["C_SUV_01_F",0],
	["C_Van_01_box_F",0],
	//Helico medic
	["B_Heli_Light_01_F",0],
	// Voiture civil
	["B_QuadBike_01_F",0],
	["C_Hatchback_01_F",0],
	["C_Offroad_01_F",0],
	["C_Van_01_transport_F",0],
	["B_G_Offroad_01_F",0],
	["C_Hatchback_01_sport_F",0],
	["B_MRAP_01_F",0],
	["I_MRAP_03_F",0],
	["O_MRAP_02_F",0],
	//Truck
	["I_Truck_02_transport_F",0],
	["I_Truck_02_covered_F",0],
	["I_Truck_02_box_F",0],
	["B_Truck_01_transport_F",0],
	["B_Truck_01_covered_F",0],
	["B_Truck_01_fuel_F",0],
	["B_Truck_01_ammo_F",0],
	["B_Truck_01_box_F",0],
	["O_Truck_03_transport_F",0],
	["O_Truck_03_covered_F",0],
	["O_Truck_03_device_F",0],
	//Helico civil
	["C_Heli_Light_01_civil_F",0],
	["O_Heli_Light_02_unarmed_F",0],
	["B_Heli_Transport_01_F",0],
	["B_Heli_Light_01_F",0],
	["I_Heli_light_03_unarmed_F",0],
	["I_Heli_Transport_02_F",0],
	["B_Heli_Transport_03_unarmed_F",0],
	["O_Heli_Light_02_v2_F",0],
	["O_Heli_Transport_04_F",0],
	["O_Heli_Transport_04_ammo_F",0],
	["O_Heli_Transport_04_bench_F",0],
	["O_Heli_Transport_04_box_F",0],
	["O_Heli_Transport_04_covered_F",0],
	["O_Heli_Transport_04_fuel_F",0],
	["O_Heli_Transport_04_repair_F",0],
	//BAteau
	["C_Rubberboat",0],
	["C_Boat_Civil_01_F",0],
	["B_Boat_Transport_01_F",0],
	["C_Boat_Civil_01_police_F",0],
	["C_Boat_Civil_01_rescue_F",0],
	["B_SDV_01_F",0]
];
__CONST__(life_garage_prices2,life_garage_prices2);

life_garage_prices =
[
	//Kart
	["C_Kart_01_Blu_F",3000],
	["C_Kart_01_Fuel_F",3000],
	["C_Kart_01_Red_F", 3000],
	["C_Kart_01_Vrana_F",3000],
	// Voiture civil
	["B_QuadBike_01_F",100],
	["C_Hatchback_01_F",1875],
	["C_SUV_01_F",4875],
	["C_Offroad_01_F",2000],
	["C_Van_01_transport_F",4500],
	["C_Hatchback_01_sport_F",2500],
	//Rebelle
	["I_MRAP_03_F",300000],
	["O_MRAP_02_F",250000],
	["B_G_Offroad_01_F",20000],
	["O_Truck_03_device_F",600000],
	//Truck
	["C_Van_01_box_F",250000],
	["I_Truck_02_transport_F",150000],
	["I_Truck_02_covered_F",200000],
	["I_Truck_02_box_F",270000],
	["B_Truck_01_transport_F",300000],
	["B_Truck_01_covered_F",350000],
	["B_Truck_01_fuel_F",420000],
	["B_Truck_01_ammo_F",480000],
	["B_Truck_01_box_F",550000],
	["O_Truck_03_transport_F",240000],
	["O_Truck_03_covered_F",255000],
	//Helico civil
	["C_Heli_Light_01_civil_F",10000],
	["O_Heli_Light_02_unarmed_F",12500],
	["B_Heli_Light_01_stripped_F",12500],
	["I_Heli_Transport_02_F",55000],
	["B_Heli_Transport_03_unarmed_F",75000],
	["O_Heli_Transport_04_F",75000],
	["O_Heli_Transport_04_ammo_F",30000],
	["O_Heli_Transport_04_bench_F",22500],
	["O_Heli_Transport_04_box_F",35000],
	["O_Heli_Transport_04_covered_F",30000],
	["O_Heli_Transport_04_fuel_F",32500],
	["O_Heli_Transport_04_repair_F",33000],
	["O_MRAP_02_hmg_F",1875000],
	//Bateau
	["C_Rubberboat",750],
	["C_Boat_Civil_01_F",3300],
	["C_Boat_Civil_01_rescue_F",150000]
];
__CONST__(life_garage_prices,life_garage_prices);

life_garage_prices3 =
[
	//Voiture Police
	["C_Hatchback_01_F",750],
	["C_Offroad_01_F",3300],
	["C_SUV_01_F",450],
	["C_Hatchback_01_sport_F",3000],
	["I_Truck_02_covered_F",3000],
	["I_Heli_light_03_unarmed_F",10000],
	["B_Heli_Light_01_F",10000],
	["B_Heli_Transport_01_F",10000],
	["B_MRAP_01_F",15000],
	["I_MRAP_03_F",15000],
	["B_MRAP_01_hmg_F",15000],
	//Helico Police
	["B_Heli_Light_01_F",15000],
	["B_Heli_Transport_01_F",15000],
	["O_Heli_Transport_04_F",15000],
	["I_Heli_light_03_unarmed_F",15000],
	["B_Heli_Transport_03_black_F",15000],
	//Bateau Police
	["B_Boat_Transport_01_F",450],
	["C_Boat_Civil_01_police_F",3000]
];
__CONST__(life_garage_prices3,life_garage_prices3);

life_garage_prices4 =
[
	//Voiture Medic
	["C_Van_01_box_white_F",750],
	["C_Offroad_01_F",3300],
	["C_SUV_01_F",4500],
	["C_Van_01_box_F",5500],
	//Helico Medic
	["C_Heli_light_01_blueLine_F",15000],
	["O_Heli_Light_02_unarmed_F",15000]
];
__CONST__(life_garage_prices4,life_garage_prices4);

life_garage_sell =
[
	//Kart
	["C_Kart_01_Blu_F",10000],
	["C_Kart_01_Fuel_F",10000],
	["C_Kart_01_Red_F", 10000],
	["C_Kart_01_Vrana_F",10000],
	// Voiture civil
	["B_QuadBike_01_F",875],
	["C_Hatchback_01_F",4375],
	["C_SUV_01_F",4375],
	["C_Offroad_01_F",7875],
	["C_Van_01_transport_F",26250],
	["C_Hatchback_01_sport_F",15250],
	//Rebelle
	["B_G_Offroad_01_F",5250],
	["I_MRAP_03_F",450000],
	["O_MRAP_02_F",250000],
	["O_Truck_03_device_F",850000],
	//Truck
	["C_Van_01_box_F",40000],
	["I_Truck_02_transport_F",50000],
	["I_Truck_02_covered_F",60000],
	["I_Truck_02_box_F",90000],
	["O_Truck_03_transport_F",75000],
	["O_Truck_03_covered_F",75000],
	["B_Truck_01_covered_F",140000],
	["B_Truck_01_fuel_F",250000],
	["B_Truck_01_ammo_F",315000],
	["B_Truck_01_box_F",425000],
	//Helico civil
	["C_Heli_Light_01_civil_F",88550],
	["O_Heli_Light_02_unarmed_F",130000],
	//Helico Rebelle
	["B_Heli_Light_01_stripped_F",20000],
	["I_Heli_Transport_02_F",600000],
	["B_Heli_Transport_03_unarmed_F",1100000],
	["O_Heli_Transport_04_F",150000],
	["O_Heli_Transport_04_ammo_F",270000],
	["O_Heli_Transport_04_bench_F",150000],
	["O_Heli_Transport_04_box_F",270000],
	["O_Heli_Transport_04_covered_F",260000],
	["O_Heli_Transport_04_fuel_F",240000],
	["O_Heli_Transport_04_repair_F",190000],
	["O_MRAP_02_hmg_F",3750000],
	//Bateau
	["C_Rubberboat",1750],
	["C_Boat_Civil_01_F",7700],
	["C_Boat_Civil_01_rescue_F",340000]
	
];
__CONST__(life_garage_sell,life_garage_sell);

life_garage_sell2 =
[
	//Voiture Police
	["C_Hatchback_01_green_F",5000],
	["C_Offroad_01_white_F",10000],
	["SUV_01_base_grey_F",12500],
	["C_Hatchback_01_sport_red_F",15000],
	["I_Truck_02_covered_F",55000],
	["B_MRAP_01_F",25000],
	["I_MRAP_03_F",40000],
	["B_MRAP_01_hmg_F",75000],
	["I_MRAP_03_hmg_F",75000],
	["I_MRAP_03_gmg_F",75000],
	["B_MRAP_01_gmg_F",75000],
	//Helico Police
	["B_Heli_Light_01_F",30000],
	["B_Heli_Transport_01_F",80000],
	["O_Heli_Transport_04_F",130000],
	["I_Heli_light_03_unarmed_F",12000],
	["B_Heli_Transport_03_black_F",12000],
	//Bateau Police
	["B_Boat_Transport_01_F",1500],
	["C_Boat_Civil_01_police_F",10000],
	["B_SDV_01_F",50000]
];
__CONST__(life_garage_sell2,life_garage_sell2);

life_garage_sell3 =
[
	//Voiture Medic
	["C_Offroad_01_red_F",6000],
	["SUV_01_base_red_F",12500],
	["C_Van_01_box_white_F",22500],
	["O_Truck_02_medical_F",22500],
	//Helico Medic
	["C_Heli_light_01_blueLine_F",30000],
	["O_Heli_Light_02_unarmed_F",12500]
];
__CONST__(life_garage_sell3,life_garage_sell3);

life_assur_prices =
[
	//Kart
	["C_Kart_01_Blu_F",10000],
	["C_Kart_01_Fuel_F",10000],
	["C_Kart_01_Red_F", 10000],
	["C_Kart_01_Vrana_F",10000],
	// voiture Medic
	["SUV_01_base_red_F",12500],
	["C_Hatchback_01_grey_F",6000],
	["C_Van_01_box_white_F",22500],
	// Voiture civil
	["B_QuadBike_01_F",875],
	["C_Hatchback_01_F",4375],
	["C_Offroad_01_F",7875],
	["C_Van_01_transport_F",26250],
	["B_G_Offroad_01_F",5250],
	["C_Hatchback_01_sport_F",20250],
	["B_MRAP_01_F",45500],
	["I_MRAP_03_F",950000],
	["O_MRAP_02_F",250000],
	//Truck
	["I_Truck_02_transport_F",50000],
	["I_Truck_02_covered_F",60000],
	["I_Truck_02_box_F",90000],
	["O_Truck_03_transport_F",75000],
	["O_Truck_03_covered_F",75000],
	["B_Truck_01_transport_F",125000],
	["B_Truck_01_covered_F",140000],
	["B_Truck_01_fuel_F",250000],
	["B_Truck_01_ammo_F",315000],
	["B_Truck_01_box_F",425000],
	["O_Truck_03_device_F",850000],
	//Helico civil
	["C_Heli_Light_01_civil_F",88550],
	["O_Heli_Light_02_unarmed_F",130000],
	["B_Heli_Transport_01_F",40000],
	["B_Heli_Light_01_F",20000],
	["I_Heli_light_03_unarmed_F",180000],
	["I_Heli_Transport_02_F",600000],
	["B_Heli_Transport_03_unarmed_F",1100000],
	["O_Heli_Light_02_v2_F",30000],
	["O_Heli_Transport_04_F",150000],
	["O_Heli_Transport_04_ammo_F",270000],
	["O_Heli_Transport_04_bench_F",150000],
	["O_Heli_Transport_04_box_F",270000],
	["O_Heli_Transport_04_covered_F",260000],
	["O_Heli_Transport_04_fuel_F",240000],
	["O_Heli_Transport_04_repair_F",190000],
	["O_MRAP_02_hmg_F",5000000],
	//Bateau
	["C_Rubberboat",1750],
	["C_Boat_Civil_01_F",7700],
	["B_Boat_Transport_01_F",1050],
	["C_Boat_Civil_01_police_F",7000],
	["C_Boat_Civil_01_rescue_F",340000],
	["B_SDV_01_F",50000]
];
__CONST__(life_assur_prices,life_assur_prices);

life_assur_prices2 =
[
	//Voiture Police
	["C_Hatchback_01_green_F",5000],
	["C_Offroad_01_white_F",10000],
	["SUV_01_base_grey_F",12500],
	["C_Hatchback_01_sport_red_F",15000],
	["I_Truck_02_covered_F",55000],
	["B_MRAP_01_F",25000],
	["I_MRAP_03_F",40000],
	["B_MRAP_01_hmg_F",75000],
	["I_MRAP_03_hmg_F",75000],
	["I_MRAP_03_gmg_F",75000],
	["B_MRAP_01_gmg_F",75000],
	//Helico Police
	["B_Heli_Light_01_F",30000],
	["B_Heli_Transport_01_F",80000],
	["O_Heli_Transport_04_F",130000],
	["I_Heli_light_03_unarmed_F",12000],
	["B_Heli_Transport_03_black_F",12000],
	//Bateau Police
	["B_Boat_Transport_01_F",1050],
	["C_Boat_Civil_01_police_F",7000],
	["B_SDV_01_F",50000]
];
__CONST__(life_assur_prices2,life_assur_prices2);

life_assur_prices3 =
[
	//Voiture Medic
	["C_Offroad_01_red_F",6000],
	["SUV_01_base_red_F",12500],
	["C_Van_01_box_white_F",22500],
	["O_Truck_02_medical_F",22500],
	//Helico Medic
	["C_Heli_light_01_blueLine_F",30000],
	["O_Heli_Light_02_unarmed_F",12500]
];
__CONST__(life_assur_prices3,life_assur_prices3);
/* Safe Zones
["markername", safe_radius] */
life_safe_points =
	[
		["safezone_kavala", 450],
		["safezone_reb", 100],
		["safezone_reb_1", 100],
		["safezone_reb_2", 100],
		["safezone_HQreb", 170]
	];
__CONST__(life_safe_points,life_safe_points);