class CarShops {
	/*
		Format:
		{ Classname, rental price, license required, { varname, >= value } }

		{ varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
	*/
	class civ_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "" }, 
			{ "C_Hatchback_01_F", 15000, "driver" }, 
			{ "C_Offroad_01_F", 22500, "driver" },
			{ "C_SUV_01_F", 30000, "driver" },
			{ "C_Van_01_transport_F", 120000, "driver" }
		};
	};

	class kart_shop {
		side = "civ";
		vehicles[] = {
			{ "C_Kart_01_Blu_F", 15000 , "driver" },
			{ "C_Kart_01_Fuel_F", 15000, "driver" },
			{ "C_Kart_01_Red_F", 15000, "driver" },
			{ "C_Kart_01_Vrana_F", 15000, "driver" }
		};
	};

	class med_shop {
		side = "med";
		vehicles[] = {
			{ "C_Offroad_01_F", 15000, "" },
			{ "C_Hatchback_01_sport_F", 25000, "" },
			{ "O_MRAP_02_F", 60000, "" },
		};
	};

	class med_air_hs {
		side = "med";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 100000, "mAir" },
			{ "O_Heli_Light_02_unarmed_F", 250000, "mAir", { "life_medlevel", 2 } },
		};
	};

	class civ_truck {
		side = "civ";
		vehicles[] = {
			{ "C_Van_01_box_F", 120000, "trucking" },
			{ "I_Truck_02_transport_F", 250000, "trucking" },
			{ "I_Truck_02_covered_F", 300000, "trucking" },
			{ "B_Truck_01_transport_F", 450000, "trucking" },
			{ "B_Truck_01_box_F", 1125000, "trucking" },
		};
	};
	
	class donator_truck {
                side = "civ";
                vehicles[] = {     
                        { "C_Van_01_box_F", 75000, "trucking" },         
                        { "I_Truck_02_transport_F", 200000, "trucking" },
                        { "I_Truck_02_covered_F", 250000, "trucking" },                        
                        { "O_Truck_03_covered_F", 370000, "trucking" },
            { "O_Truck_03_device_F", 700000, "trucking" },
                    { "B_Truck_01_transport_F", 350000, "trucking" },
            { "B_Truck_01_covered_F", 500000, "trucking" },
                        { "B_Truck_01_box_F", 750000, "trucking" }
                        
                };
        };        

	class reb_car {
		side = "civ";
		vehicles[] = {
			{ "B_Quadbike_01_F", 5000, "" },
			{ "B_G_Offroad_01_F", 15000, "rebel" },
			{ "O_MRAP_02_F", 1500000, "rebel" },
			{ "B_Heli_Light_01_F", 2500000, "rebel" },
			{ "B_G_Offroad_01_armed_F", 1125000, "rebel" }
		};
	};

	class cop_car {
		side = "cop";
		vehicles[] = {
			{ "C_Offroad_01_F", 15000, ""},
			{ "C_SUV_01_F", 17500, ""},
			{ "C_Hatchback_01_sport_F", 20000, ""},
			{ "B_MRAP_01_F", 30000, "", { "life_coplevel", 3 } }
		};
	};
	
	class donator_car {
                side = "civ";
                vehicles[] = {
                        { "B_Quadbike_01_F", 750, "driver" }, 
                        { "C_SUV_01_F", 4000, "driver" },
                        { "C_Hatchback_01_F", 7500, "driver" },  
                        { "C_Hatchback_01_sport_F", 20000, "driver" },        
                        { "C_Offroad_01_F", 15000, "driver" },
                        { "O_MRAP_02_F", 2500000, "driver" },                  
                        { "O_G_Offroad_01_armed_F", 1500000, "driver" }
                                        
                };
        };        

	class civ_air {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 1500000, "pilot" },
			{ "O_Heli_Light_02_unarmed_F", 3000000, "pilot" }
		};
	};
	
	class donator_air {
                side = "civ";
                vehicles[] = {
                        { "B_Heli_Light_01_F", 500000, "pilot" },
                        { "O_Heli_Light_02_unarmed_F", 850000, "pilot" },
                        { "I_Heli_light_03_unarmed_F", 1500000, "pilot" },
                        { "I_Heli_Transport_02_F", 2800000, "pilot" },
                        { "O_Heli_Transport_04_bench_F", 3350000, "pilot" },
                        { "O_Heli_Transport_04_box_F", 3350000, "pilot" },
                        { "O_Heli_Transport_04_covered_F", 3350000, "pilot" }, 
                        { "B_Heli_Transport_03_unarmed_F", 4000000, "pilot" }
                };
        };        

	class cop_air {
		side = "cop";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 320000, "cAir", { "life_coplevel", 3 } },
			{ "C_Heli_Light_01_civil_F", 320000, "cAir", { "life_coplevel", 3 } },
			{ "I_Heli_light_03_unarmed_F", 700000, "cAir", { "life_coplevel", 4 } },
			{ "B_Heli_Transport_01_F", 920000, "cAir", { "life_coplevel", 6 } },
			{ "B_Heli_Attack_01_F", 800000, "cAir", { "life_coplevel", 7 } }
		};
	};

	class cop_airhq {
		side = "civ";
		vehicles[] = {
			{ "B_Heli_Light_01_F", 75000, "cAir" },
			{ "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } },
			{ "B_MRAP_01_hmg_F", 750000, "", { "life_coplevel", 3 } }
		};
	};

	class cop_ship {
		side = "cop";
		vehicles[] = {
			{ "B_Boat_Transport_01_F", 3000, "coastguard" },
			{ "C_Boat_Civil_01_police_F", 20000, "coastguard" },
			{ "B_Boat_Armed_01_minigun_F", 75000, "coastguard" },
			{ "B_SDV_01_F", 100000, "coastguard" }
		};
	};

	class civ_ship {
		side = "civ";
		vehicles[] = {
			{ "C_Rubberboat", 5000, "boat" },
			{ "C_Boat_Civil_01_F", 22000, "boat" },
			{ "B_SDV_01_F", 150000, "boat" }
		};
	};
};

/*
	Vehicle Configs (Contains textures and other stuff)

	storageFee (Getting vehicles out of garage) format:
		INDEX 0: Civilian Price
		INDEX 1: Cop Price
		INDEX 3: EMS Price
		INDEX 4: OPFOR Price (Not implemented in vanilla but still leaving support

	Textures config follows { Texture Name, side, {texture(s)path}}
	Texture(s)path follows this format:
		INDEX 0: Texture Layer 0
		INDEX 1: Texture Layer 1
		INDEX 2: Texture Layer 2
		etc etc etc
*/
class CfgVehicles {
	class Default {
		vItemSpace = -1;
		storageFee[] = { 1000, 1000, 1000, 1000 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 1200;
		textures[] = {};
	};

	class I_Truck_02_medical_F : Default {
		vItemSpace = 150;
		storageFee[] = { 0, 0, 1500, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 3000;
	};

	class O_Truck_03_medical_F : Default {
		vItemSpace = 200;
		storageFee[] = { 0, 0, 3000, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 7500;
	};

	class B_Truck_01_medical_F : Default {
		vItemSpace = 250;
		storageFee[] = { 0, 0, 6500, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		chopShop = 12500;
	};

	class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 400, 300, 0, 0 };
		garageSell[] = { 0, 350, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Heli_Transport_01_F {
		vItemSpace = 200;
		storageFee[] = { 0, 50000, 0, 0 };
		garageSell[] = { 0, 85000, 0, 0 };
		insurance = 16000;
		chopShop = 45000;
		extures[] = {
            { "BOPE", "cop", {
                "textures\Veiculos\Policia\ghostwawk.jpg"
            } }
        };
    };

	class B_MRAP_01_hmg_F : Default {
		vItemSpace = 100;
	};

	class O_Boat_Armed_01_hmg_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Armed_01_minigun_F {
        vItemSpace = 40;
        storageFee[] = { 0, 16500, 0, 0 };
		garageSell[] = { 0, 21000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class I_Boat_Armed_01_minigun_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 0, 450, 0, 0 };
		garageSell[] = { 0, 850, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class O_Truck_03_transport_F {
        vItemSpace = 285;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 50000;
        textures[] = { };
    };
	
	class B_Truck_01_covered_F {
        vItemSpace = 450;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 75000;
        textures[] = { };
    };

	class O_Truck_03_device_F {
        vItemSpace = 450;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 185000;
        textures[] = { };
    };
	
	class B_G_Van_01_fuel_F {
        vItemSpace = 100;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 40000;
        textures[] = { };
    };

	class Land_CargoBox_V1_F : Default {
        vItemSpace = 5000;
    };

	class Box_IND_Grenades_F : Default {
        vItemSpace = 350;
    };

	class B_supplyCrate_F {
        vItemSpace = 700;
    };

	class B_G_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_G_Offroad_01_armed_F : B_G_Offroad_01_F {};

	class I_G_Van_01_transport_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 25000;
        textures[] = { };
    };

	class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 2500, 0, 0 };
		garageSell[] = { 0, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 0, 3500, 0, 0 };
		garageSell[] = { 0, 4950, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class C_Boat_Civil_01_rescue_F {
        vItemSpace = 85;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

	class B_Truck_01_box_F {
        vItemSpace = 700;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 300000;
        textures[] = { };
    };
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 600;
        storageFee[] = { 10000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 3000000;
        textures[] = { };
    };
	
	class O_G_Offroad_01_armed_F {
        vItemSpace = 65;
        storageFee[] = { 250000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 50000;
        textures[] = { };
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 500;
        storageFee[] = { 10000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000000;
        textures[] = { };
    };
	
	class O_Heli_Transport_04_box_F {
        vItemSpace = 550;
        storageFee[] = { 10000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000000;
        textures[] = { };
    };
	
	class O_Heli_Transport_04_bench_F {
        vItemSpace = 70;
        storageFee[] = { 10000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000000;
        textures[] = { };
    };
	
	class O_Heli_Transport_04_covered_F {
        vItemSpace = 100;
        storageFee[] = { 10000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1000000;
        textures[] = { };
    };

	class B_Truck_01_transport_F {
        vItemSpace = 450;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = { };
    };

	class O_MRAP_02_F {
        vItemSpace = 60;
        storageFee[] = { 45000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500000;
        textures[] = { };
    };

	class I_MRAP_03_F {
        vItemSpace = 58;
        storageFee[] = { 1000, 0, 0, 0 };
        insurance = 2500;
        chopShop = 500000;
        textures[] = { };
    };

	class C_Offroad_01_F {
        vItemSpace = 60;
        storageFee[] = { 1000, 500, 650, 1000 };
		garageSell[] = { 0, 2500, 0, 0 };
        insurance = 2500;
        chopShop = 6500;
        textures[] = {
        	{ "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
			{ "White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
			{ "Blue", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
			{ "Dark Red", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
			{ "Blue / White", "civ", {
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
	                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Fed", "fed", {
	                "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
            { "Taxi", "civ", {
	                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
			} },
			{ "Polícia", "cop", {
					"textures\Veiculos\Policia\offroad.paa"
			} },
            { "SAMU", "med", {
	                "textures\Veiculos\Samu\offroad.paa"
            } }
	    };
    };

	class C_Kart_01_Blu_F {
		vItemSpace = 10;
		storageFee[] = { 1500, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		inusrance = 1650;
		chopShop = 3500;
		textures[] = {};
	};

	class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
	class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

	class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 2500, 1000, 0, 0 };
		garageSell[] = { 0, 7500, 0, 0 };
        insurance = 5500;
        chopShop = 10000;
        textures[] = {
        	{ "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
			{ "Black / White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
			{ "Beige", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
			} },
			{ "SAMU", "med", {
				"textures\Veiculos\Samu\hatchback.paa"
            } },
            { "Polícia", "cop", {
				"textures\Veiculos\Policia\hatchback.paa"
            } }
        };
    };

	class B_Quadbike_01_F {
        vItemSpace = 60;
        storageFee[] = { 500, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = {
        	{ "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            } },
			{ "Digi Desert", "reb", {
	                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
	        } },
			{ "Black", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
	        } },
			{ "Blue", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
	        } },
			{ "Red", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
	        } },
			{ "White", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
	        } },
			{ "Digi Green", "civ", {
	                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
	        } },
			{ "Hunter Camo", "civ", {
	                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
	        } },
	        { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };

	class I_Truck_02_covered_F {
        vItemSpace = 275;
        storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 6500;
        chopShop = 150000;
        textures[] = {
        	{ "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class I_Truck_02_transport_F : I_Truck_02_covered_F {
        vItemSpace = 200;
        storageFee[] = { 12000, 0, 0, 0 };
		garageSell[] = { 0, 3500, 0, 0 };
    };

	class O_Truck_03_covered_F {
		vItemSpace = 300;
		storageFee[] = { 5000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
		insurance = 2500;
		chopShop = 100000;
		textures[] = {};
	};

	class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 3500, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
			{ "Green", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
			{ "Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
			{ "Dark Blue", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
			{ "Yellow", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
			{ "White", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
			{ "Grey", "civ", {
	                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } }
        };
    };

	class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 500, 0, 0, 0 };
		garageSell[] = { 0, 5000, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = {
        	{ "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
			{ "Preta", "cop", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
			{ "Silver", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
			{ "Orange", "civ", {
	                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Apenas ROTA", "cop", {
                "textures\Veiculos\Policia\suv.paa"
            } }
	        };
    };

	class C_Van_01_transport_F {
        vItemSpace = 120;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 25000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

	class C_Van_01_box_F {
        vItemSpace = 150;
        storageFee[] = { 1000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 25000;
        textures[] = {
        	{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };
	class B_MRAP_01_F {
        vItemSpace = 65;
        storageFee[] = { 0, 2500, 0, 0 };
		garageSell[] = { 0, 10000, 0, 0 };
        insurance = 2500;
        chopShop = 10000;
        textures[] = {
        	{ "Polícia", "cop", {
                "textures\Veiculos\Policia\hunter.paa"
            } },
            { "Black", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

	class B_Heli_Light_01_F {
        vItemSpace = 150;
        storageFee[] = { 25000, 25000, 0, 0 };
		garageSell[] = { 0, 35000, 0, 0 };
        insurance = 2500;
        chopShop = 57000;
        textures[] = {
        	{ "Polícia", "cop", {
                "textures\Veiculos\Policia\littlebird.paa"
            } },
			{ "Black", "fed", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            } },
			{ "Civ Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
			{ "Civ Red", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            } },
			{ "Blueline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            } },
			{ "Elliptical", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            } },
			{ "Furious", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            } },
			{ "Jeans Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            } },
			{ "Speedy Redline", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            } },
			{ "Sunset", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            } },
			{ "Vrana", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            } },
			{ "Waves Blue", "civ", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            } },
			{ "Rebel Digital", "reb", {
	                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "SAMU", "med", {
                "textures\Veiculos\Samu\littlebird.paa"
            } }
        };
    };

	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 350;
        storageFee[] = { 50000, 0, 22000, 0 };
		garageSell[] = { 0, 0, 35000, 0 };
        insurance = 2500;
        chopShop = 72500;
        textures[] = {
        	{ "Black", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
			{ "White / Blue", "civ", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
			{ "Digi Green", "donate", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
			{ "Desert Digi", "reb", {
	                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "SAMU", "med", {
                "textures\Veiculos\Samu\orca.paa"
            } }
        };
    };

	class I_Heli_Transport_01_F {
        vItemSpace = 100;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {
            { "BOPE", "cop", {
                "textures\Veiculos\Policia\ghostwawk.jpg"
            } }
        };
    };

	class I_Heli_light_03_unarmed_F {
        vItemSpace = 450;
        storageFee[] = { 75000, 0, 0, 0 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 125000;
        textures[] = {
        	{ "Shark", "civ", {
                "textures\Veiculos\Civil\hellcat.jpg"
            } },
            { "Polícia", "cop", {
                "textures\Veiculos\Policia\hellcat.paa"
            } }
        };
    };
	
	class C_Heli_Light_01_civil_F {
        vItemSpace = 150;
        storageFee[] = { 25000, 25000, 25000, 25000 };
		garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 45000;
        textures[] = {
            { "Polícia", "cop", {
                "textures\Veiculos\Policia\littlebird.paa"
            } }
        };
    };
};