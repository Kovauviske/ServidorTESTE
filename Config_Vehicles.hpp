class CarShops {
        /*
                Format:
                { Classname, rental price, license required, { varname, >= value } }

                { varname, >= value} this is a "level" requirement mainly used by cops and rebels, do not fill this in if you are not utilizing it.
        */
        class civ_car {
                side = "civ";
                vehicles[] = {
                        { "B_Quadbike_01_F", 2500, "" }, 
						{ "C_SUV_01_F", 13330, "driver" },
                        { "C_Hatchback_01_F", 16660, "driver" },                 
                        { "C_Offroad_01_F", 26700, "driver" }
                };
        };

        class kart_shop {
                side = "civ";
                vehicles[] = {
                        { "C_Kart_01_Blu_F",6670 , "driver" },
                        { "C_Kart_01_Fuel_F", 6670, "driver" },
                        { "C_Kart_01_Red_F", 6670, "driver" },
                        { "C_Kart_01_Vrana_F", 6670, "driver" }
                };
        };

        class med_shop {
                side = "med";
                vehicles[] = {
                        { "B_Truck_01_mover_F", 10000, "" },         	  // Reboque
                        { "C_Offroad_01_F", 10000, "" },                  // Offroad
                        { "C_SUV_01_F", 30000, "" },                  	  // SUV                        
                        { "O_MRAP_02_F", 180000, "" }                 	  // Ifrit
                };
        };

        class med_air_hs {
                side = "med";
                vehicles[] = {
                        { "B_Heli_Light_01_F", 50000, "mAir" },            // Little Bird
                        { "O_Heli_Light_02_unarmed_F", 75000, "mAir" }     // Orca
                        
                };
        };

        class civ_truck {
                side = "civ";
                vehicles[] = {
						{ "C_Van_01_transport_F", 120000, "driver" },      // Caminhão
						{ "B_G_Van_01_fuel_F", 150000, "trucking" },       // Caminhão de Combustivel
                        { "C_Van_01_box_F", 167000, "trucking" },          // Caminhão Bau        
                        { "I_Truck_02_transport_F", 367000, "trucking" },  // Zamak Aberto
                        { "I_Truck_02_covered_F", 400000, "trucking" },    // Zamak Coberto
                        { "O_Truck_02_fuel_F", 417000, "trucking" },       // Zamak Combutivel        
                        { "O_Truck_02_Ammo_F", 434000, "trucking" },       // Zamak Munição                        
						{ "O_Truck_03_device_F", 1000000, "trucking" }     // Tempest Device
                   
                };
        };
        
        class donator_truck {
                side = "civ";
                vehicles[] = {
                        { "C_Van_01_transport_F", 84000, "driver" },       // Caminhão
						{ "B_G_Van_01_fuel_F", 105000, "trucking" },       // Caminhão de Combustivel
                        { "C_Van_01_box_F", 116900, "trucking" },          // Caminhão Bau        
                        { "I_Truck_02_transport_F", 256900, "trucking" },  // Zamak Aberto
                        { "I_Truck_02_covered_F", 280000, "trucking" },    // Zamak Coberto
                        { "O_Truck_02_fuel_F", 291900, "trucking" },       // Zamak Combutivel        
                        { "O_Truck_02_Ammo_F", 303800, "trucking" },       // Zamak Munição                        
                        { "O_Truck_03_transport_F", 330000, "trucking" },  // Tempest Aberto
                        { "O_Truck_03_covered_F", 374000, "trucking" },    // Tempest Coberto
						{ "O_Truck_03_device_F", 700000, "trucking" },     // Tempest Device
						{ "B_Truck_01_transport_F", 513700, "trucking" },  // Hemit Aberto
						{ "B_Truck_01_covered_F", 497200, "trucking" },    // Hemit Coberto
						{ "B_Truck_01_fuel_F",528000, "trucking" },        // Hemit Combustivel
						{ "B_Truck_01_ammo_F", 587400, "trucking" },       // Hemit Munição
                        { "B_Truck_01_box_F", 550000, "trucking" }         // Hemit Box
                        
                };
        };        

        class reb_car { 
                side = "civ";
                vehicles[] = {
                        { "B_Quadbike_01_F", 5000, "" },
                        { "B_G_Offroad_01_F", 33333, "" },
                        { "O_MRAP_02_F", 3340000, "" },                // Ifrit
                        { "O_G_Offroad_01_armed_F", 3340000, "" },     // offroad armada
                        { "B_Heli_Light_01_F", 1000000, "" },          // Little Bird
                        { "O_Heli_Light_02_unarmed_F", 1666000, "" }   // Orca                                        
                };
        };

        class cop_car {
                side = "cop";
                vehicles[] = {
                        { "B_Quadbike_01_F", 5000, "" },
                        { "C_Hatchback_01_sport_F", 5000, ""},                                 // Hatchback Sport
                        { "C_Offroad_01_F", 5000, ""},                                         // Offroad
                        { "C_SUV_01_F", 5000, "", { "life_coplevel", 2 } },                    // SUV
                        { "I_MRAP_03_F", 5000, "", { "life_coplevel", 2 } },                   // Stride
                        { "B_MRAP_01_F", 5000, "", { "life_coplevel", 2 } },                   // Hunter
                        { "B_APC_Wheeled_01_cannon_F", 5000, "", { "life_coplevel", 7 } }      // Marshall					
                };
        };

        class adac_car {
                side = "adac";
                vehicles[] = {
						{ "B_Truck_01_mover_F", 10000, "bcar",  },                                  // Reboque    
						{ "C_Offroad_01_F", 7500, "bcar", { "life_adaclevel", 2 } },                // Offroad
                        { "B_MRAP_01_F", 30000, "bcar", { "life_adaclevel", 2 } },                  // Hunter
                        { "O_Truck_03_device_F", 60000, "bcar", { "life_adaclevel", 2 } }           // Tempest Device

                                        
                };
        };        
        
        class civ_air {
                side = "civ";
                vehicles[] = {
                        { "B_Heli_Light_01_F", 667000, "pilot" },                           // Little Bird
                        { "O_Heli_Light_02_unarmed_F", 1334000, "pilot" },                  // Orca
                        { "I_Heli_Transport_02_F", 4000000, "pilot" },                      // Mohawk
                        { "O_Heli_Transport_04_box_F", 4800000, "pilot" },                  // Taru Mohawk carga
                        { "B_Heli_Transport_03_unarmed_green_F", 5700000, "pilot" }         // Huron
                };
        };
        
        class donator_air {
                side = "civ";
                vehicles[] = {
                        { "B_Heli_Light_01_F", 466900, "pilot" },                       // Little Bird
                        { "O_Heli_Light_02_unarmed_F", 933800, "pilot" },               // Orca
						{ "I_Heli_light_03_unarmed_F", 1500000, "pilot" },              // Hellcat
                        { "I_Heli_Transport_02_F", 2800000, "pilot" },                  // Mohawk
                        { "O_Heli_Transport_04_bench_F", 3350000, "pilot" },            // Taru banco
                        { "O_Heli_Transport_04_box_F", 3350000, "pilot" },              // Taru Mohawk carga
                        { "O_Heli_Transport_04_covered_F", 3350000, "pilot" },          // Taru transporte
					//{ "O_Heli_Light_02_F", 4000000, "pilot" },                        // Orca armado
                        { "B_Heli_Transport_03_unarmed_green_F", 4000000, "pilot" },    // Huron
						{ "B_Heli_Transport_03_F", 6000000, "pilot" }	                // Huron armado                                                
                };
        };        
        
        class donator_car {
                side = "civ";
                vehicles[] = {
                        { "B_Quadbike_01_F", 750, "driver" }, 
                        { "C_SUV_01_F", 4000, "driver" },
                        { "C_Hatchback_01_F", 5000, "driver" },  
                        { "C_Hatchback_01_sport_F", 18700, "driver" },        
                        { "C_Offroad_01_F", 18700, "driver" },
                        { "O_MRAP_02_F", 2338000, "driver" },                        // Ifrit
                        { "O_G_Offroad_01_armed_F", 2338000, "driver" }              // offroad armada
                                        
                };
        };        

        class cop_air {
                side = "cop";
                vehicles[] = {
                        { "B_Heli_Light_01_F", 75000, "cAir", { "life_coplevel", 2 } },                           // Little Bird
                        { "I_Heli_light_03_unarmed_F", 150000, "cAir", { "life_coplevel", 2 } },                  // Hellcat
                        { "O_Heli_Light_02_unarmed_F", 750000, "cAir", { "life_coplevel", 2 } },                  // Orca
                        { "I_Heli_Transport_02_F", 300000, "cAir", { "life_coplevel", 3 } },                      // Mohawk                        
                        { "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } },                      // Ghost Hawk
                        { "B_Heli_Transport_03_black_F", 200000, "cAir", { "life_coplevel", 3 } },                // Huron armado
                        { "B_Heli_Transport_03_unarmed_green_F", 200000, "cAir", { "life_coplevel", 3 } },        // Huron
                        { "B_UAV_02_F", 200000, "cAir", { "life_coplevel", 7 } },              
                        { "B_Heli_Attack_01_F", 300000, "cAir", { "life_coplevel", 6 } }                          // Black Foot					
           
                };
        };
        
        class adac_air {
                side = "adac";
                vehicles[] = {
                        { "B_Heli_Light_01_F", 75000, "bair" },          // Little Bird
                        { "I_Heli_light_03_unarmed_F", 75000, "bair" }   // Hellcat
                };
        };

        class cop_airhq {
                side = "civ";
                vehicles[] = {
                        { "B_Heli_Light_01_F", 75000, "cAir" },                                   // Little Bird
                        { "I_Heli_light_03_unarmed_F", 150000, "cAir", { "life_coplevel", 2 } },  // Hellcat
                        { "B_Heli_Transport_01_F", 200000, "cAir", { "life_coplevel", 3 } }       // Ghost Hawk
        
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
                storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
                insurance = 2500;
                chopShop = 1200;
                textures[] = {};
        };

        class C_Rubberboat {
        vItemSpace = 45;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2500;
        textures[] = { };
    };

        class B_Heli_Transport_01_F {
                vItemSpace = 200;
                storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
                insurance = 16000;
                chopShop = 0;
                textures[] = {};
        };

        class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 0;
        textures[] = { };
    };

        class B_Boat_Transport_01_F {
        vItemSpace = 45;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
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

        class I_G_Van_01_transport_F {
        vItemSpace = 100;
        storageFee[] = { 10, 10, 10, 10 };
        insurance = 2500;
        chopShop = 54000;
        textures[] = { };
    };

        class C_Boat_Civil_01_F {
        vItemSpace = 85;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

        class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };

        class C_Boat_Civil_01_rescue_F { 
        vItemSpace = 85;
        storageFee[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5000;
        textures[] = { };
    };
        
        class C_Van_01_transport_F {   // Caminhão
        vItemSpace = 100;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 54000;
        textures[] = {
                        { "Preto", "civ", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
                { "Branco", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Vermelho", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

        class B_G_Van_01_fuel_F {   // Caminhão Combustivel
        vItemSpace = 115;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 67000;
        textures[] = {
            { "Preto", "civ", {
            "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
                { "Branco", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Vermelho", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };

        class C_Van_01_box_F {  // Caminhão com Bau
        vItemSpace = 120;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 75550;
        textures[] = {
            { "Preto", "civ", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },
                        { "Peitinhos", "civ", {
                "textures\veiculos\civil\bau_sexy_1.paa",
                                "textures\veiculos\civil\bau_sexy_2.paa"                            
            } },
                        { "Pixxel Gamer", "civ", {
                "textures\veiculos\civil\bau_pixxelgamer_1.paa",
                                "textures\veiculos\civil\bau_pixxelgamer_2.paa"                                 
            } },                        
                { "Branco", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            } },
            { "Vermelho", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            } }
        };
    };
        
    class I_Truck_02_transport_F {          // Zamak Aberto
        vItemSpace = 250;
        storageFee[] = { 10, 10, 10, 10 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 165150;
        textures[] = { };
    };                
                
        class I_Truck_02_covered_F {  // Zamak Coberto
        vItemSpace = 290;
        storageFee[] = { 10, 10, 10, 10 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 6500;
        chopShop = 180000;
        textures[] = {
                { "Laranja", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            } },
            { "Federal", "fed", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }
        };
    };

    class O_Truck_02_fuel_F {  // Zamak Combustivel
                vItemSpace = 310;
                storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
                insurance = 2500;
                chopShop = 187650;
                textures[] = {};
   };

          class B_G_Offroad_01_F {
                vItemSpace = 65;
                storageFee[] = { 100, 100, 100, 100 };
                garageSell[] = { 0, 0, 0, 0 };
                insurance = 2500;
                chopShop = 15000;
                textures[] = { };
        }; 
   
          class O_G_Offroad_01_armed_F {  //off road armada
                vItemSpace = 65;
                storageFee[] = { 100, 100, 100, 100 };
                garageSell[] = { 0, 0, 0, 0 };
                insurance = 2500;
                chopShop = 1501300;
                textures[] = { };
                  }; 
   
        class I_MRAP_03_F {  // Stride        
                vItemSpace = 100;
                storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 10, 10, 10 };
                insurance = 2500;
                chopShop = 0;
                textures[] = {
                { "Policia", "cop", {
                "textures\veiculos\policia\strider.jpg"
                        } }
        };
    };

   
        class O_Truck_02_Ammo_F {  // Zamak Munição        
                vItemSpace = 320;
                storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
                insurance = 2500;
                chopShop = 195300;
                textures[] = {};
    };
        
             class B_Truck_01_mover_F {  // Reboque        
                vItemSpace = 320;
                storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
                insurance = 2500;
                chopShop = 195300;
                textures[] = {
                { "Reboque", "med", {
                "textures\veiculos\mecanico\hemit_1.paa",
                                "textures\veiculos\mecanico\hemit_2.paa"
                        } }
        };
    };
                
        class O_Truck_03_transport_F { // Tempest Aberto
        vItemSpace = 400;
        storageFee[] = { 10, 10, 10, 10 };
        insurance = 2500;
        chopShop = 148500;
        textures[] = { };
    };

        class O_Truck_03_covered_F {  // Tempest Coberto
                vItemSpace = 425;
                storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
                insurance = 2500;
                chopShop = 1683000;
                textures[] = {};
        };
        
        class B_Truck_01_transport_F {  // Hemit Aberto
        vItemSpace = 450;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 231168;
        textures[] = { };
    };

        class B_Truck_01_covered_F {  // Hemit Coberto
        vItemSpace = 470;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 223740;
        textures[] = { };
    };

        class B_Truck_01_fuel_F {    // Hemit Combustivel
        vItemSpace = 500;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 237600;
        textures[] = { };
    };
        
        class B_Truck_01_ammo_F {   // Hemit Munição
        vItemSpace = 525;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 264330;
        textures[] = { };
    };

        class B_Truck_01_box_F {   // Hemit Box
        vItemSpace = 550;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 247500;
        textures[] = { };
    };
        
        class O_Truck_03_device_F {   // Tempest Device
        vItemSpace = 350;
        storageFee[] = { 100, 100, 100, 100 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 25000;
        chopShop = 450000;
        textures[] = {};
        };
        
        class O_MRAP_02_F { // Ifrit
        vItemSpace = 60;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop =1501300;
        textures[] = {
            { "Policia", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
                 { "Camuflado", "reb", {
                "\A3\soft_F\MRAP_02\Data\mrap_02_ext_01_co.paa",
                "\A3\soft_F\MRAP_02\Data\mrap_02_ext_02_co.paa"
            } },
                 { "Camuflado", "civ", {
                "\A3\soft_F\MRAP_02\Data\mrap_02_ext_01_co.paa",
                "\A3\soft_F\MRAP_02\Data\mrap_02_ext_02_co.paa"
            } },
            { "Resgate", "med", {
                                "textures\veiculos\resgate\ifrit1.paa",
                                "textures\veiculos\resgate\ifrit2.paa"                                                                 
            } }
        };
    };        
        
        class C_Offroad_01_F {
        vItemSpace = 65;
        storageFee[] = { 100, 100, 100, 100 };
        garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 12015;
        textures[] = {
                        { "Laranja 1", "civ", {
                        "textures\veiculos\civil\off3.jpg"
            } },
                        { "Laranja 2", "civ", {
                        "textures\veiculos\civil\off3.jpg"
            } },
                        { "Laranja 3", "civ", {
                        "textures\veiculos\civil\off3.jpg"
                } },
                        { "Laranja", "civ", {
                        "textures\veiculos\civil\off3.jpg"
                } },
                        { "Cruz", "civ", {
                        "textures\veiculos\civil\off2.jpg"
                } },
                        { "Elefante", "civ", {
                        "textures\veiculos\civil\off.jpg"
                } },                        
                { "Vermelha", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            } },
                        { "Amarela", "civ", {
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            } },
                        { "Branca", "civ", {
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            } },
                        { "Azul", "civ", {
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            } },
                        { "Vinho", "civ", {
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            } },
                        { "Azul e Branca", "civ", {
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                        "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            } },
            { "Federal", "fed", {
                        "#(ai,64,64,1)Fresnel(0.3,3)"
            } },
                        { "Polícia", "cop", {
                        //"#(ai,64,64,1)Fresnel(1.3,7)"
                                        "textures\veiculos\policia\offroad.jpg"
            } },
                        { "BrasForte", "adac", {
                        //"#(ai,64,64,1)Fresnel(1.3,7)"
                                        "textures\veiculos\brasforte\offroad.paa"
            } },
                        { "Resgate", "med", {
                        //"#(ai,64,64,1)Fresnel(1.3,7)"
                                        "textures\veiculos\resgate\offroad.paa"
            } },                        
            { "Taxi", "civ", {
                        "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            } }                        
            };
    };
        
        class C_Kart_01_Blu_F {
                vItemSpace = 20;
                storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
                inusrance = 1650;
                chopShop = 0;
                textures[] = {};
        };

        class C_Kart_01_Fuel_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
        class C_Kart_01_Red_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class
        class C_Kart_01_Vrana_F : C_Kart_01_Blu_F {}; //Inherits everything from the above class

        class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 5500;
        chopShop = 8415;
        textures[] = {
                        { "Monster", "civ", {
                "textures\veiculos\civil\ht.jpg"
                        } },
                { "Vermelho", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            } },
                        { "Azul Escuro", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            } },
                        { "Laranja", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            } },
                        { "Preto e Branco", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            } },
                        { "Bege", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            } },
                        { "Verde", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            } },
            { "Policia", "cop", {
                //"#(ai,64,64,1)Fresnel(1.3,7)"
                                "textures\veiculos\policia\hatchback.paa"
            } }
        };
    };

        class B_Quadbike_01_F {
        vItemSpace = 25;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1125;
        textures[] = {
                { "Policia", "cop", {
                //"\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
                                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
                        { "Deserto Digi", "reb", {
                        "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
                } },
                        { "Preto", "civ", {
                        "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
                } },
                        { "Azul", "civ", {
                        "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
                } },
                        { "Vermelho", "civ", {
                        "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
                } },
                        { "Branco", "civ", {
                        "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
                } },
                        { "Verde Digi", "civ", {
                        "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
                } },
                        { "Camuflado", "civ", {
                        "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
                } },
                { "Rebelde", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            } }
        };
    };


        class C_Hatchback_01_F {
        vItemSpace = 40;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 7497;
        textures[] = {
                { "Bege", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            } },
                        { "Verde", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            } },
                        { "Azul", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            } },
                        { "Azul Escuro", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            } },
                        { "Amarelo", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            } },
                        { "Branco", "civ", {
                        "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            } },
                        { "Cinza", "civ", {
                    "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            } },
            { "Preta", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            } },
        };
    };

        class C_SUV_01_F {
        vItemSpace = 50;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 5998;
        textures[] = {
                { "Vermelha", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            } },
                        { "Preta", "cop", {
                        "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa"
            } },
                        { "Prata", "civ", {
                        "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            } },
                        { "Laranja", "civ", {
                        "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            } },
            { "Policia", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            } },
            { "Resgate", "med", {
                "textures\veiculos\resgate\suv.paa"
            } },
                        { "DANTAS", "civ", {
                        "textures\veiculos\civil\especial.jpg"
                } },
                        { "Gatinha", "civ", {
                        "textures\veiculos\civil\gatinha.jpg"
                } }                        
            };
    };
        
        class B_MRAP_01_F { // Hunter
        vItemSpace = 65;
        storageFee[] = { 100, 100, 100, 100 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 0;
        textures[] = {
                { "Policia", "cop", {
                                //"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                                "textures\veiculos\policia\hunter.jpg"
            } },
                        { "BrasForte", "adac", {
                                //"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                                "textures\veiculos\brasforte\hunter1.paa",
                                "textures\veiculos\brasforte\hunter2.paa"
            } },
            { "Federal", "fed", {
                                "\A3\Soft_F\MRAP_01\Data\mrap_01_base_co.paa"
            } }
        };
    };

	    class B_APC_Wheeled_01_cannon_F { // Marshall
        vItemSpace = 350;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2160000;
        textures[] = { };                     
    };
	
        class B_Heli_Light_01_F { // Little Bird
        vItemSpace = 100;
        storageFee[] = { 100, 100, 100, 100 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 300150;
        textures[] = {
                { "Policia", "cop", {
                //"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
                                //"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                                "textures\veiculos\policia\mh9.paa"
            } },
                        { "BrasForte", "adac", {
                //"\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
                                //"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                                "textures\veiculos\brasforte\mh9.paa"
            } },
                        { "Azul Civil", "civ", {
                        "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            } },
                        { "Vermelho Civil", "civ", {
                        "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            } },
                        { "Bombs", "civ", {
                        "textures\veiculos\civil\mh9_bombs.paa"
            } },
                        { "Monster", "civ", {
                        "textures\veiculos\civil\mh9_monster.paa"
            } },
                        { "Mulher 1", "civ", {
                        "textures\veiculos\civil\mh9_mulher1.paa"
            } },
                        { "Mulher 2", "civ", {
                        "textures\veiculos\civil\mh9_mulher2.paa"
            } },                        
                        { "Digital Rebelde", "reb", {
                        "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            } },
            { "Resgate", "med", {
                //"#(argb,8,8,3)color(1,1,1,0.8)"
                                "textures\veiculos\resgate\mh9.paa"
            } }
        };
    };

        class O_Heli_Light_02_unarmed_F { // Orca
        vItemSpace = 150;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 600300;
        textures[] = {
                { "Policia", "cop", {
                                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } },                        
                { "Preto", "fed", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            } },
                        { "Branco / Azul", "civ", {
                        "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"   
            } },
                        { "Verde Digi", "donate", {
                        "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            } },
                        { "Deserto Digi", "reb", {
                        "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa" 
            } },
            { "Branco Resgate", "med", {
                //"#(argb,8,8,3)color(1,1,1,0.8)"
                                "textures\veiculos\resgate\orca.paa"
            } }
        };
    };
	
	class O_Heli_Light_02_F { // Orca armado
        vItemSpace = 150;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 600300;
        textures[] = {
            { "Deserto Digi", "reb", {
                        "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa" 
            } }          
        };
    };
        
        class I_Heli_light_03_unarmed_F { // Hellcat
        vItemSpace = 200;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 675000;
        textures[] = {
                { "Aguia", "civ", {
                                //"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                                "textures\veiculos\civil\hellcat.paa"
                                
            } },
                             { "BrasForte", "adac", {
                                //"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                                "textures\veiculos\brasforte\hellcat.paa"
                                
            } },
                { "Policia", "cop", {
                                //"#(argb,8,8,3)color(0.05,0.05,0.05,1)"
                                "textures\veiculos\policia\hellcat.paa"
            } },
            { "Branco Resgate", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }                        
        };
    };                

        class I_Heli_Transport_02_F { // Mohawk
        vItemSpace = 250;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 1800000;
        textures[] = {
                { "Policia", "cop", {
                "textures\veiculos\policia\mohawk_1.paa",
                "textures\veiculos\policia\mohawk_2.paa",
                "textures\veiculos\policia\mohawk_3.paa"
            } },                        
                { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            } },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            } },
            { "Branco Resgate", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            } }                        
        };
    };        
        
        class O_Heli_Transport_04_covered_F { // Taru Transporte
        vItemSpace = 350;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2160000;
        textures[] = { };                     
    };
        class O_Heli_Transport_04_bench_F { // Taru Banco
        vItemSpace = 350;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2160000;
        textures[] = { };                     
    };        

        class O_Heli_Transport_04_box_F { // Taru BOX
        vItemSpace = 350;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2160000;
        textures[] = { };                     
    };

        class B_Heli_Transport_03_F { // Huron
        vItemSpace = 400;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2565000;
        textures[] = { };                     
    };
        
            class B_Heli_Transport_03_black_F { // Huron
        vItemSpace = 400;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 100000;
        textures[] = { };                     
    };
        
            class B_Heli_Transport_03_unarmed_green_F { // Huron
        vItemSpace = 400;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 2565000;
        textures[] = { };                     
    };
                
        class B_Heli_Attack_01_F { // Black Foot
        vItemSpace = 250;
        storageFee[] = { 10, 10, 10, 10 };
                garageSell[] = { 0, 0, 0, 0 };
        insurance = 2500;
        chopShop = 0;
        textures[] = {
                { "Policia", "cop", {
                                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            } }                        
        };
    };        
        
};
