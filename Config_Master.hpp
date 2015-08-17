#define VITEMMACRO(NAME,DISPLAYNAME,VARNAME,WEIGHT,BUYPRICE,SELLPRICE,ILLEGAL,EDIBLE,ICON) class NAME { \
		variable = VARNAME; \
		weight = WEIGHT; \
		displayName = DISPLAYNAME; \
		buyPrice = BUYPRICE; \
		sellPrice = SELLPRICE; \
		illegal = ILLEGAL; \
		edible = EDIBLE; \
		icon = ICON; \
	};
	
#define LICENSEMACRO(NAME,DISPLAYNAME,VARNAME,PRICE,ILLEGAL,SIDE) class NAME { \
		variable = VARNAME; \
		displayName = DISPLAYNAME; \
		price = PRICE; \
		illegal = ILLEGAL; \
		side = SIDE; \
	};

#define true 1
#define false 0
#include "Config_Clothing.hpp"
#include "Config_Shops.hpp"


/*
	Master settings for various features and functionality	
*/
class Life_Settings {
	/* Persistent Settings */
	save_civ_weapons = true; //Allow civilians to save weapons on them?
	save_virtualItems = true; //Save Virtual items (all sides)?

	/* Revive system settings */
	revive_cops = true; //true to enable cops the ability to revive everyone or false for only medics/ems.
	revive_fee = 12000; //Revive fee that players have to pay and medics / EMS are rewarded
	
	/* House related settings */
	house_limit = 1; //Maximum amount of houses a player can own.

	/* Gang related settings */
	gang_price = 100000; //Price for creating a gang, remember they are persistent so keep it reasonable to avoid millions of gangs.
	gang_upgradeBase = 50000; //The base cost for upgrading slots in a gang
	gang_upgradeMultiplier = 2.5; //Not sure if in use?

	/* Player-related systems */
	enable_fatigue = false; //Set to false to disable the ARMA 3 false system.
	total_maxWeight = 30; //Identifies the max carrying weight (gets adjusted throughout game when wearing different types of clothing).
	total_maxWeightT = 24;  //Static variable for the maximum weight allowed without having a backpack
	paycheck_period = 5; //Scaled in minutes
	
	/* Impound Variables */
	impound_car = 3000; //Price for impounding cars
	impound_boat = 4000; //Price for impounding boats
	impound_air = 5000; //Price for impounding helicopters / planes

	/* Car-shop Settings */
	//vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_G_Offroad_01_armed_F" };
	vehicleShop_rentalOnly[] = { };

	/* Job-related stuff */
	//delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };

	crimes[] = { 
		{"STR_Crime_1","350","1"}, 
		{"STR_Crime_2","1500","2"}, 
		{"STR_Crime_3","2500","3"}, 
		{"STR_Crime_4","3500","4"}, 
		{"STR_Crime_5","10000","5"}, 
		{"STR_Crime_6","5000","6"}, 
		{"STR_Crime_7","10000","7"} 
	};
	
	sellArray[] = {
		{"arifle_sdar_F", 7500},
		{"hgun_P07_snds_F", 650},
		{"hgun_P07_F", 1500},
		{"ItemGPS", 45},
		{"ToolKit", 75},
		{"FirstAidKit", 65},
		{"Medikit", 450},
		{"NVGoggles", 0},
		{"16Rnd_9x21_Mag", 15},
		{"20Rnd_556x45_UW_mag", 35},
		{"ItemMap", 35},
		{"ItemCompass", 25},
		{"Chemlight_blue", 50},
		{"Chemlight_yellow", 50},
		{"Chemlight_green", 50},
		{"Chemlight_red", 50},
		{"hgun_Rook40_F", 500},
		{"arifle_Katiba_F", 5000},
		{"30Rnd_556x45_Stanag", 65},
		{"20Rnd_762x51_Mag", 85},
		{"30Rnd_65x39_caseless_green", 50},
		{"DemoCharge_Remote_Mag", 7500},
		{"SLAMDirectionalMine_Wire_Mag", 2575},
		{"optic_ACO_grn", 250},
		{"acc_flashlight", 100},
		{"srifle_EBR_F", 15000},
		{"arifle_TRG21_F", 3500},
		{"optic_MRCO", 5000},
		{"optic_Aco", 850},
		{"arifle_MX_F", 7500},
		{"arifle_MXC_F", 5000},
		{"arifle_MXM_F", 8500},
		{"MineDetector", 500},
		{"optic_Holosight", 275},
		{"acc_pointer_IR", 175},
		{"arifle_TRG20_F", 2500},
		{"SMG_01_F", 1500},
		{"arifle_Mk20C_F", 4500},
		{"30Rnd_45ACP_Mag_SMG_01", 60},
		{"30Rnd_9x21_Mag", 30}
	};

	allowedSavedVirtualItems[] = { "pickaxe", "fuelEmpty", "fuelFull", "spikeStrip", "lockpick", "defuseKit", "storageSmall", "storageBig", "redgull", "coffee", "waterBottle", "apple", "peach", "tbacon", "donuts", "rabbitGrilled", "salemaGrilled", "ornateGrilled", "mackerelGrilled", "tunaGrilled", "mulletfried", "catsharkfried", "turtleSoup", "henGrilled", "roosterGrilled", "sheepGrilled", "goatGrilled", "handcuffs", "handcuffkeys", "scalpel" };
};

//Virtual Items
class VirtualItems {
	//Misc
	VITEMMACRO(pickaxe, "STR_Item_Pickaxe", "pickaxe", 2, 2000, 500, false, -1, "icons\ico_picareta.paa")
	VITEMMACRO(fuelEmpty, "STR_Item_FuelE", "fuelEmpty", 2, -1, -1, false, -1, "icons\ico_fuelempty.paa")
	VITEMMACRO(fuelFull, "STR_Item_FuelF", "fuelFull", 5, 850, 500, false, -1, "icons\ico_fuel.paa")
	VITEMMACRO(spikeStrip, "STR_Item_SpikeStrip", "spikeStrip", 1, 2500, 150, false, -1, "icons\ico_spikestrip.paa")                               
	VITEMMACRO(lockpick, "STR_Item_Lockpick", "lockpick", 1, 3000, 150, true, -1, "icons\ico_lockpick.paa")
	VITEMMACRO(goldbar, "STR_Item_GoldBar", "goldBar", 15, -1, 95000, true, -1, "icons\ico_goldbar.paa")
	VITEMMACRO(blastingcharge, "STR_Item_BCharge", "blastingCharge", 15, 50000, -1, true, -1, "icons\ico_blastingCharge.paa")
	VITEMMACRO(boltcutter, "STR_Item_BCutter", "boltCutter", 5, 10000, -1, true, -1, "icons\ico_boltcutters.paa")
	VITEMMACRO(defusekit, "STR_Item_DefuseKit", "defuseKit", 2, 2500, -1, false, -1, "icons\defusekit.paa")
	VITEMMACRO(storagesmall, "STR_Item_StorageBS", "storageSmall", 5, 150000, -1, false, -1, "icons\ico_storageSmall.paa")
	VITEMMACRO(storagebig, "STR_Item_StorageBL", "storageBig", 10, 200000, -1, false, -1, "icons\ico_storageBig.paa")
	VITEMMACRO(handcuffs, "STR_Item_Handcuffs", "handcuffs", 1, 5000, -1, true, -1, "icons\ico_algema.paa")
	VITEMMACRO(handcuffkeys, "STR_Item_Handcuffkeys", "handcuffkeys", 1, 1500, -1, false, -1, "icons\ico_chave_algema.paa")
	VITEMMACRO(kidney, "STR_Shops_orgao", "kidney", 15, 35000, 35000, true, -1, "icons\ico_orgao.paa")
	VITEMMACRO(scalpel, "STR_Item_scalpel", "scalpel", 2, 4000, -1, true, -1, "icons\ico_bisturi.paa")

	//Mined Items
	VITEMMACRO(oil_unprocessed, "STR_Item_OilU", "oilUnprocessed", 5, -1, -1, false, -1, "icons\oilu.paa")
	VITEMMACRO(oil_processed, "STR_Item_OilP", "oilProcessed", 3, -1, 3500, false, -1, "icons\oilp.paa")
	VITEMMACRO(copper_unrefined, "STR_Item_CopperOre", "copperUnrefined", 4, -1, -1, false, -1, "icons\ico_cobre.paa")
	VITEMMACRO(copper_refined, "STR_Item_CopperIngot", "copperRefined", 2, -1, 1500, false, -1, "")
	VITEMMACRO(iron_unrefined, "STR_Item_IronOre", "ironUnrefined", 5, -1, -1, false, -1, "icons\ico_ferro.paa")
	VITEMMACRO(iron_refined, "STR_Item_IronIngot", "ironRefined", 3, -1, 1300, false, -1, "icons\ico_ferroprocessado.paa")
	VITEMMACRO(salt_unrefined, "STR_Item_Salt", "saltUnrefined", 3, -1, -1, false, -1, "icons\salt.paa")
	VITEMMACRO(salt_refined, "STR_Item_SaltR", "saltRefined", 2, -1, 2100, false, -1, "icons\saltr.paa")
	VITEMMACRO(sand, "STR_Item_Sand", "sand", 3, -1, -1, false, -1, "icons\sand.paa")
	VITEMMACRO(glass, "STR_Item_Glass", "glass", 2, -1, 1400, false, -1, "icons\glass.paa")
	VITEMMACRO(diamond_uncut, "STR_Item_DiamondU", "diamondUncut", 4, -1, -1, false, -1, "icons\ico_diamantelapidado.paa")
	VITEMMACRO(diamond_cut, "STR_Item_DiamondC", "diamondCut", 2, -1, 2800, false, -1, "icons\ico_diamante.paa")
	VITEMMACRO(rock, "STR_Item_Rock", "rock", 4, -1, -1, false, -1, "icons\rock.paa")
	VITEMMACRO(cement, "STR_Item_CementBag", "cement", 3, -1, 2000, false, -1, "icons\cement.paa")
	VITEMMACRO(cana_refined, "STR_Item_canar", "canaR", 3, -1, 3000, false, -1, "")
	VITEMMACRO(cana_unrefined, "STR_Item_canau", "canaU", 4, -1, -1, false, -1, "")
	VITEMMACRO(gas_refined, "STR_Item_gasr", "gasR", 3, -1, 3500, false, -1, "")
	VITEMMACRO(gas_unrefined, "STR_Item_gasu", "gasU", 4, -1, -1, false, -1, "")

	//Drugs
	VITEMMACRO(heroin_unprocessed, "STR_Item_HeroinU", "heroinUnprocessed", 6, -1, -1, true, -1, "icons\ico_heroina.paa")
	VITEMMACRO(heroin_processed, "STR_Item_HeroinP", "heroinProcessed", 4, -1, 5500, true, -1, "icons\ico_heroinaprocessada.paa")
	VITEMMACRO(meth_unprocessed, "STR_Item_MethU", "methUnprocessed", 6, -1, -1, true, -1, "")
	VITEMMACRO(meth_processed, "STR_Item_MethP", "methProcessed", 4, -1, 7000, true, -1, "icons\ico_meth.paa")
	VITEMMACRO(cannabis, "STR_Item_Cannabis", "cannabis", 4, -1, -1, true, -1, "icons\ico_maconhaprocessada.paa")
	VITEMMACRO(marijuana, "STR_Item_Marijuana", "marijuana", 3, -1, 4500, true, -1, "icons\ico_maconha.paa")
	VITEMMACRO(cocaine_unprocessed, "STR_Item_CocaineU", "cocaineUnprocessed", 6, -1, 3000, true, -1, "icons\ico_cocaina.paa")
	VITEMMACRO(cocaine_processed, "STR_Item_CocaineP", "cocaineProcessed", 4, -1, 6000, true, -1, "icons\ico_cocainaprocessada.paa")
	//Drink
	VITEMMACRO(redgull, "STR_Item_RedGull", "redgull", 1, 2000, 200, false, 100, "icons\ico_redgull.paa")
	VITEMMACRO(coffee, "STR_Item_Coffee", "coffee", 1, 10, 5, false, 100, "icons\ico_coffee.paa")
	VITEMMACRO(waterBottle, "STR_Item_WaterBottle", "waterBottle", 1, 10, 5, false, 100, "icons\ico_waterBottle.paa")

    //Food
        VITEMMACRO(apple, "STR_Item_Apple", "apple", 1, 100, 100, false, 10, "icons\ico_maca.paa")
        VITEMMACRO(peach, "STR_Item_Peach", "peach", 1, 150, 150, false, 10, "icons\ico_peach.paa")
        VITEMMACRO(tbacon, "STR_Item_TBacon", "tbacon", 1, 75, 75, false, 40, "icons\ico_tbacon.paa")
        VITEMMACRO(donuts, "STR_Item_Donuts", "donuts", 1, 120, 120, false, 30, "icons\ico_rosquinha.paa")
        VITEMMACRO(rabbitraw, "STR_Item_Rabbit", "rabbitRaw", 2, -1, 150, false, -1, "icons\food.paa")
        VITEMMACRO(rabbitgrilled, "STR_Item_RabbitGrilled", "rabbitGrilled", 1, 150, 115, false, 20, "icons\ico_cookedMeat.paa")
        VITEMMACRO(salema, "STR_Item_SalemaMeat", "salema", 3, -1, 1000, false, -1, "icons\ico_peixes.paa")  
        VITEMMACRO(salemagrilled, "STR_Item_SalemaGrilled", "salemaGrilled", 1, 1000, 55, false, 30, "icons\ico_cookedMeat.paa")
        VITEMMACRO(ornate, "STR_Item_OrnateMeat", "ornate", 3, -1, 1000, false, -1, "icons\ico_peixes.paa") 
        VITEMMACRO(ornategrilled, "STR_Item_OrnateGrilled", "ornateGrilled", 1, 175, 150, false, 25, "icons\ico_cookedMeat.paa")
        VITEMMACRO(mackerel, "STR_Item_MackerelMeat", "mackerel", 3, -1, 1000, false, -1, "icons\ico_peixes.paa") 
        VITEMMACRO(mackerelgrilled, "STR_Item_MackerelGrilled", "mackerelGrilled", 2, 250, 200, false, 30, "icons\ico_cookedMeat.paa")
        VITEMMACRO(tuna, "STR_Item_TunaMeat", "tuna", 3, -1, 1000, false, -1, "icons\ico_peixes.paa") 
        VITEMMACRO(tunagrilled, "STR_Item_TunaGrilled", "tunaGrilled", 3, 1250, 1000, false, 100, "icons\ico_cookedMeat.paa")
        VITEMMACRO(mullet, "STR_Item_MulletMeat", "mullet", 3, -1, 1000, false, -1, "icons\ico_peixes.paa")  
        VITEMMACRO(mulletfried, "STR_Item_MulletFried", "mulletFried", 2, 1000, 1000, false, 80, "icons\ico_cookedMeat.paa")
        VITEMMACRO(catshark, "STR_Item_CatSharkMeat", "catshark", 3, -1, 1000, false, -1, "icons\ico_peixes.paa")  
        VITEMMACRO(catsharkfried, "STR_Item_CatSharkFried", "catsharkFried", 3, 1000, 1000, false, 100, "icons\ico_cookedMeat.paa")
        VITEMMACRO(turtle, "STR_Item_Turtle", "turtle", 15, 15000, 15000, true, -1, "icons\ico_tartaruga.paa")
        VITEMMACRO(turtlesoup, "STR_Item_TurtleSoup", "turtleSoup", 2, 2500, 1000, false, 100, "icons\ico_cookedMeat.paa")
        VITEMMACRO(hen_raw, "STR_Item_HenRaw", "henRaw", 1, -1, 35, false, -1, "icons\food.paa")
        VITEMMACRO(henGrilled, "STR_Item_HenFried", "henGrilled", 1, 115, 85, false, 65, "icons\ico_cookedMeat.paa")
        VITEMMACRO(rooster_raw, "STR_Item_RoosterRaw", "roosterRaw", 1, -1, 35, false, -1, "icons\food.paa")
        VITEMMACRO(roostergrilled, "STR_Item_RoosterGrilled", "roosterGrilled" 1, 115, 85, false, 65, "icons\ico_cookedMeat.paa")
        VITEMMACRO(sheep_raw, "STR_Item_SheepRaw", "sheepRaw", 2, -1, 50, false, -1, "icons\food.paa")
        VITEMMACRO(sheepgrilled, "STR_Item_SheepGrilled", "sheepGrilled", 2, 155, 115, false, 100, "icons\ico_cookedMeat.paa")
        VITEMMACRO(goat_raw, "STR_Item_GoatRaw", "goatRaw", 2, -1, 75, false, -1, "icons\food.paa")
        VITEMMACRO(goatgrilled, "STR_Item_GoatGrilled", "goatGrilled", 2, 175, 135, false, 100, "icons\ico_cookedMeat.paa")
};


/*
	Licenses
	
	Params:
	CLASS ENTRY,DisplayName,VariableName,price,illegal,side indicator
*/
class Licenses {
	LICENSEMACRO(driver,"STR_License_Driver","driver",1000,false,"civ")
	LICENSEMACRO(boat,"STR_License_Boat","boat",2000,false,"civ")
	LICENSEMACRO(pilot,"STR_License_Pilot","pilot",75000,false,"civ")
	LICENSEMACRO(gun,"STR_License_Firearm","gun",50000,false,"civ")
	LICENSEMACRO(dive,"STR_License_Diving","dive",10000,false,"civ")
	LICENSEMACRO(oil,"STR_License_Oil","oil",10500,false,"civ")
	LICENSEMACRO(cAir,"STR_License_Pilot","cAir",500,false,"cop")
	LICENSEMACRO(coastguard,"STR_License_CG","coastguard",800,false,"cop")
	LICENSEMACRO(bair,"STR_License_Pilot","bair",5000,false,"adac")
	LICENSEMACRO(bcar,"STR_License_Driver","bcar",800,false,"adac")
	LICENSEMACRO(heroin,"STR_License_Heroin","heroin",30000,true,"civ")
	LICENSEMACRO(meth,"STR_License_Meth","meth",40000,true,"civ")
	LICENSEMACRO(marijuana,"STR_License_Marijuana","marijuana",20000,true,"civ")
	LICENSEMACRO(medmarijuana,"STR_License_Medmarijuana","medmarijuana",20000,false,"civ")
	LICENSEMACRO(rebel,"STR_License_Rebel","rebel",500000,true,"civ")
	LICENSEMACRO(trucking,"STR_License_Truck","trucking",50000,false,"civ")
	LICENSEMACRO(diamond,"STR_License_Diamond","diamond",11000,false,"civ")
	LICENSEMACRO(salt,"STR_License_Salt","salt",13000,false,"civ")
	LICENSEMACRO(cocaine,"STR_License_Cocaine","cocaine",40000,false,"civ")
	LICENSEMACRO(sand,"STR_License_Sand","sand",14500,false,"civ")
	LICENSEMACRO(iron,"STR_License_Iron","iron",11500,false,"civ")
	LICENSEMACRO(copper,"STR_License_Copper","copper",8000,false,"civ")
	LICENSEMACRO(cement,"STR_License_Cement","cement",1200,false,"civ")
	LICENSEMACRO(cana,"STR_License_cana","cana",15000,false,"civ")
	LICENSEMACRO(gas,"STR_License_gas","gas",20000,false,"civ")
	LICENSEMACRO(mAir,"STR_License_Pilot","mAir",500,false,"med")
	LICENSEMACRO(home,"STR_License_Home","home",1000000,false,"civ")
	LICENSEMACRO(donator,"STR_License_Donator","donator",75000000,false,"civ")
	LICENSEMACRO(brothers_of_war,"STR_license_civ_Brothers_of_War","brothers_of_war",75000000,false,"civ")
};

class VirtualShops {
	class market {
		name = "STR_Shops_Market";
		items[] = { "waterBottle", "rabbitgrilled", "apple", "redgull", "tbacon", "pickaxe", "fuelFull", "peach", "boltcutter", "storagesmall", "storagebig" };                         
	};
	
	class market_donator {
		name = "STR_Shops_Market";
		items[] = { "waterBottle", "rabbitgrilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "storagesmall", "storagebig", "handcuffs", "handcuffkeys", "scalpel" };
	};	

	class market_brasforte {
		name = "STR_Shops_Market";
		items[] = { "waterBottle", "rabbitgrilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach" };
	};	
	
	class market_resgate {
		name = "STR_Shops_Market";
		items[] = { "waterBottle", "rabbitgrilled", "apple", "redgull", "tbacon", "lockpick", "fuelFull", "peach" };
	};	
	
	class rebel {
		name = "STR_Shops_Rebel";
		items[] = { "waterBottle", "rabbitgrilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach", "boltcutter", "blastingcharge", "handcuffs", "handcuffkeys", "scalpel" };
	};

	class gang {
		name = "STR_Shops_Gang";
		items[] = { "waterBottle", "rabbitgrilled", "apple", "redgull", "tbacon", "lockpick", "pickaxe", "fuelFull", "peach" };
	};

	class wongs {
		name = "STR_Shops_Wongs";
		items[] = { "turtle_soup", "turtle" };
	};

	class coffee {
		name = "STR_Shops_Coffee";
		items[] = { "coffee", "donuts" };
	};
	
	class drugdealer {
		name = "STR_Shops_DrugDealer";
		items[] = { "cocaine_processed", "heroin_processed", "meth_processed", "marijuana" };
	};

	class organ {
		name = "STR_Shops_organ";
		items[] = { "kidney" };
	};
	
	class oil {
		name = "STR_Shops_Oil";
		items[] = { "oil_processed", "pickaxe", "fuelFull" };
	};

	class fishmarket {
		name = "STR_Shops_FishMarket";
		items[] = { "salema", "ornate", "mackerel", "tuna", "mullet", "catshark" };
	};

	class glass {
		name = "STR_Shops_Glass";
		items[] = { "glass" };
	};

	class iron  {
		name = "STR_Shops_Minerals";
		items[] = { "iron_refined", "copper_refined" };
	};

	class diamond {
		name = "STR_Shops_Diamond";
		items[] = { "diamond_uncut", "diamond_cut" };
	};

	class salt {
		name = "STR_Shops_Salt";
		items[] = { "salt_refined" };
	};

	class cop {
		name = "STR_Shops_Cop";
		items[] = { "donuts", "rabbitgrilled", "apple", "waterBottle", "coffee", "redgull", "lockpick", "boltcutter", "spikeStrip", "fuelFull", "defusekit" };
	};

	class cement {
		name = "STR_Shops_Cement";
		items[] = { "cement" };
	};

	class cana {
		name = "STR_Shops_Cana";
		items[] = { "cana_refined" };
	};
	
	class gas {
		name = "STR_Shops_gas";
		items[] = { "gas_refined" };
	};
	
	class gold {
		name = "STR_Shops_Gold";
		items[] = { "goldbar" };
	};
};

#include "Config_Vehicles.hpp"
#include "Config_Houses.hpp"
