class WeaponShops { 
    //Armory Shops
    class gun {
        name = "Loja de Armas";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_Katiba_GL_F", "Katiba", 70000 },
            { "30Rnd_65x39_caseless_green", "Munição Katiba", 600 },
            { "arifle_MXC_F", "MXC", 100000 },
            { "30Rnd_65x39_caseless_mag", "Munição MXC", 700 },                       
            { "SMG_01_F", "", 45000 },
            { "30Rnd_45ACP_Mag_SMG_01", "Munição SMG", 500 },  
            { "hgun_PDW2000_F", "", 20000 },
            { "30Rnd_9x21_Mag", "Munição PDW", 200}, 
            { "hgun_Pistol_heavy_02_F", "MAGNUM 45", 15000 },
            { "6Rnd_45ACP_Cylinder", "Munição MAGNUM 45",250 }, 
            { "hgun_ACPC2_F", "", 11500 },
            { "9Rnd_45ACP_Mag", "Munição PISTOLA  45", 1500 },
            { "optic_Yorris", "RED DOT", 2500 },
            { "optic_ACO_grn_smg", "ACO", 2500 },
            { "optic_Holosight", "HOLOGRAP", 2500 }
        };
    };
    class rebel {
        name = "Loja de Armas Rebeldes";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "Rangefinder", "", 50000 },
            { "arifle_TRG20_F", "TRG20", 90000 },
            { "30Rnd_556x45_Stanag", "MAG TRG20", 700 },
            { "arifle_Mk20_F", "MK20", 95000 },
            { "30Rnd_556x45_Stanag", "MAG MK20", 750 },
            { "arifle_SDAR_F", "SDAR", 60000 },
            { "30Rnd_556x45_Stanag", "MAG SDAR", 650 },
            { "arifle_MXM_F","MXM", 100000 },
            { "30Rnd_65x39_caseless_mag", "MAG MXM",800 },
            { "LMG_Mk200_F", "MK 200", 150000 },
            { "200Rnd_65x39_cased_Box", "MAG MK 200", 1000 },
            { "srifle_DMR_01_F", "RAHIM", 250000 },
            { "10Rnd_762x54_Mag", "MAG RAHIM", 1500 },
            { "LMG_Zafir_F", "ZAFIR", 400000 },
            { "150Rnd_762x54_Box_Tracer", "MAG ZAFIR", 2000 },
            { "hgun_Rook40_F", "Rook 40",10000 },
            { "30Rnd_9x21_Mag","MAG Rook40", 100 },
            { "hgun_Pistol_heavy_02_F", "MAGNUM 45", 11000 },
            { "6Rnd_45ACP_Cylinder", "MAG 45", 150 },
            { "srifle_DMR_05_hex_F", "CYRUS", 700000 },
            { "10Rnd_93x64_DMR_05_Mag", "MAG CYRUS", 1500 },
            { "srifle_DMR_06_olive_F", "MK-14", 350000 },
            { "20Rnd_762x51_Mag", "MAG MK-14", 1000 },
            { "optic_ACO_grn", "ACO", 7000 },
            { "optic_Holosight", "HOLOGRAP", 5500 },
            { "optic_SOS", "", 25000 },
            { "optic_AMS_khk", "", 18000 },
            { "optic_KHS_hex", "", 15000 },
            { "acc_flashlight", "LANTERNA", 2000 },
            { "optic_Hamr", "RCO", 7500 }

        };
    };
    class gang {
        name = "Loja de Gangue";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "SMG_02_ACO_F", "STINGER", 60000 },
            { "30Rnd_9x21_Mag", "MAG STINGER", 500 },
            { "arifle_TRG20_F", "TRG", 90000 },
            { "30Rnd_556x45_Stanag", "MAG TRG", 700 },
            { "hgun_ACPC2_F", " .45", 4500 },
            { "9Rnd_45ACP_Mag", "MAG .45", 300 },
            { "optic_ACO_grn_smg", "", 5000 }
        };
    };
        
         class donator_gun {
        name = "Loja de Armas Civil";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "arifle_Katiba_GL_F", "Katiba", 49000 },
            { "30Rnd_65x39_caseless_green", "Munição Katiba", 420 },
            { "arifle_MXC_F", "MXC", 70000 },
            { "30Rnd_65x39_caseless_mag", "Munição MXC", 490 },                       
            { "SMG_01_F", "", 31500 },
            { "30Rnd_45ACP_Mag_SMG_01", "Munição SMG", 350 },  
            { "hgun_PDW2000_F", "", 14000 },
            { "30Rnd_9x21_Mag", "Munição PDW", 140}, 
            { "hgun_Pistol_heavy_02_F", "MAGNUM 45", 10500 },
            { "6Rnd_45ACP_Cylinder", "Munição MAGNUM 45",175 }, 
            { "hgun_ACPC2_F", "", 8050 },
            { "9Rnd_45ACP_Mag", "Munição PISTOLA  45", 105 },
            { "optic_Yorris", "RED DOT", 1750 },
            { "optic_ACO_grn_smg", "ACO", 1750 },
            { "optic_Holosight", "HOLOGRAP", 1750 }
        };
    };
           class donator_reb {
        name = "Loja de Armas Rebelde";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
                        { "hgun_Rook40_F", "Rook 40",7000 },
            { "30Rnd_9x21_Mag","MAG Rook40", 70 },
            { "hgun_Pistol_heavy_02_F", "MAGNUM 45", 7700 },
            { "6Rnd_45ACP_Cylinder", "MAG 45", 105 },
            { "arifle_TRG20_F", "TRG20", 63000 },
            { "30Rnd_556x45_Stanag", "MAG TRG20", 490 },
            { "arifle_Mk20_F", "MK20", 66500 },
            { "30Rnd_556x45_Stanag", "MAG MK20", 525 },
            { "arifle_SDAR_F", "SDAR", 42000 },
            { "30Rnd_556x45_Stanag", "MAG SDAR", 455 },
            { "arifle_MXM_F","MXM", 70000 },
            { "30Rnd_65x39_caseless_mag", "MAG MXM",560 },
            { "arifle_MX_F", "MX F",80000 },
            { "30Rnd_65x39_caseless_mag"," MX F", 560 },
            { "arifle_MX_SW_F", "MX SW", 100000 },
            { "100Rnd_65x39_caseless_mag_Tracer", "MAG MX SW", 600 },
            { "LMG_Mk200_F", "MK 200", 105000 },
            { "200Rnd_65x39_cased_Box", "MAG MK 200", 700 },
            { "srifle_DMR_01_F", "RAHIM", 200000 },
            { "10Rnd_762x54_Mag", "MAG RAHIM", 1600 },
            { "LMG_Zafir_F", "ZAFIR", 300000 },
            { "150Rnd_762x54_Box_Tracer", "MAG ZAFIR", 1400 },
            { "srifle_LRR_F", "M320", 2000000 },
            { "7Rnd_408_Mag", "MAG M320", 160000 }, 
            { "srifle_DMR_02_camo_F", "MAR-10", 800000 },
            { "10Rnd_338_Mag", "MAG MAR-10", 900 },
            { "srifle_DMR_05_hex_F", "CYRUS", 320000 },
            { "10Rnd_93x64_DMR_05_Mag", "MAG CYRUS", 1000 },
            { "srifle_DMR_06_olive_F", "MK-14", 245000 },
            { "20Rnd_762x51_Mag", "MAG MK-14", 700 },
            { "MMG_01_hex_F", "NAVID", 700000 },
            { "150Rnd_93x64_Mag", "MAG NAVID", 1600 },
            { "MMG_02_camo_F", "SPMG", 600000 },
            { "130Rnd_338_Mag", "MAG SMPG", 1900 },
            { "srifle_DMR_04_F", "", 320000 },
            { "10Rnd_127x54_Mag", "", 1900 },
            { "srifle_DMR_03_F", "", 275000 },
            { "20Rnd_762x51_Mag", "", 1900 },
            { "optic_ACO_grn", "ACO", 4900 }, 
            { "optic_NVS", "NVS", 10000 },
            { "optic_DMS", "DMS", 12000 },
            { "optic_LRPS", "LRPS", 15000 }, 
            { "optic_SOS", "", 15000 },
            { "optic_AMS_khk", "", 13000 },
            { "optic_KHS_hex", "", 10000 },
            { "optic_Holosight", "HOLOGRAP",3850 },
            { "acc_flashlight", "LANTERNA", 1400 },
            { "optic_Hamr", "RCO", 5250 }
        };
    };
                        
    //Basic Shops
    class genstore { // Ítens civis
        name = "Loja Geral";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "Binocular", "BINOCULOS", 200 },
                        { "ItemGPS", "GPS", 300 },
                        { "ToolKit", "KIT FERRAMENTAS ", 2000 },
                        { "FirstAidKit", "BAND-AID", 1500 },
                        { "NVGoggles", "NIGHT VISION", 5000 },
                        { "Chemlight_red", "SINALIZADOR", 50 },
                        { "Chemlight_yellow", "SINALIZADOR", 50 },
                        { "Chemlight_green", "SINALIZADOR", 50 },
                        { "Chemlight_blue", "SINALIZADOR", 50 }
        };
    };
    class genstore_donator { // Ítens civis
        name = "Loja Geral";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
                                                { "Binocular", "BINOCULOS", 200 },
                        { "Rangefinder", "", 25000 },
                        { "ItemGPS", "GPS", 300 },
                        { "ToolKit", "KIT FERRAMENTAS ", 2000 },
                        { "FirstAidKit", "BAND-AID", 1500 },
                        { "NVGoggles", "NIGHT VISION", 5000 },
                        { "Chemlight_red", "SINALIZADOR", 50 },
                        { "Chemlight_yellow", "SINALIZADOR", 50 },
                        { "Chemlight_green", "SINALIZADOR", 50 },
                        { "Chemlight_blue", "SINALIZADOR", 50 }
        };
    };        
        
                //Basic Brasforte Shop
            class brasforte { // Loja de Armas da Brasforte
        name = "Loja de Armas";
        side = "adac";
        license = "";
        level = 1;
        msg = "Você precisa ser um Brasforte";
        items[] = {
                       { "hgun_P07_snds_F", "P07 9 mm", 10000 },
            { "30Rnd_9x21_Mag", "MAG P07 9 mm", 250 }, 
            { "arifle_MX_GL_Hamr_pointer_F", "MX", 30000 },
            { "30Rnd_65x39_caseless_mag", "MAG MX", 500 },
            { "3Rnd_UGL_FlareGreen_F", "MAG GRANADA", 700 }, 
            { "muzzle_snds_H", "SILENCIADOR MX", 1000 },            
            { "arifle_MX_SW_Black_F", "", 45000 },
            { "100Rnd_65x39_caseless_mag", "MAG SW", 500 }, 
            { "muzzle_snds_H", "SILENCIADOR SW", 1000 },
            { "LMG_Mk200_pointer_F", "MK200", 50000 },
            { "200Rnd_65x39_cased_Box", "MAG MK200", 700 }, 
            { "srifle_DMR_06_olive_F", "MAG MK14",60000 }, 
            { "20Rnd_762x51_Mag", "MAG MK14", 1000 }, 
            { "srifle_DMR_03_F", "MAG MK1", 65000 }, 
            { "20Rnd_762x51_Mag", "MAG MK1", 1000 }, 
            { "srifle_DMR_06_camo_F", "MAG MK14", 60000 }, 
            { "20Rnd_762x51_Mag", "MAG MK200", 1000 }, 
            { "srifle_DMR_05_blk_F", "CYRUS", 60000 }, 
            { "10Rnd_93x64_DMR_05_Mag", "MAG CYRUS", 1000 },                         
            { "LMG_Zafir_F", "ZAFIR", 60000 }, 
            { "150Rnd_762x54_Box", "MAG ZAFIR", 1000 },                         
            { "muzzle_snds_H_MG", "SILENCIADOR MK200", 1500 }, 
            { "optic_Hamr", "RCO", 5000 },
                    { "optic_AMS", "", 5000 },
            { "optic_Arco", "ARCO", 4000 },
            { "optic_Holosight", "HOLOGRAP", 2500 }
        };
    };        
        
           class brasforte_basic {
        name = "Loja Geral";
        side = "adac";
        license = "";
        level = -1; // Qualquer Brasforte
        msg = "Você precisa ser um Brasforte";
        items[] = {
                        { "Binocular", "", 150 },
                        { "ItemGPS", "", 100 },
                        { "NVGoggles", "", 2000 },
                        { "ToolKit", "", 250 },
                        { "FirstAidKit", "", 150 }
         };
    };
        
    //Cop Shops
    class cop_basic {
        name = "Loja de Armas da Polícia";
        side = "cop";
        license = "";
        level = -1; // Qualquer COP
        msg = "";
        items[] = {
                        { "arifle_sdar_F", "Taser Rifle", 20000 }, // Taser Aquatico
                        { "hgun_P07_snds_F", "Stun Pistol", 2000 }, // Pistola Taser
                        { "hgun_P07_F", "", 7500 },
                        { "HandGrenade_Stone", "Flashbang", 1700 },
                        { "Binocular", "", 150 },
                        { "ItemGPS", "", 100 },
                        { "ToolKit", "", 250 },
                        { "muzzle_snds_L", "", 650 },
                        { "FirstAidKit", "", 150 },
                        { "Medikit", "", 1000 },
                        { "NVGoggles", "", 2000 },
                        { "16Rnd_9x21_Mag", "", 50 }, 
                        { "20Rnd_556x45_UW_mag", "Taser Rifle Magazine", 125 }
         };
    };
    class cop_patrol {
        name = "Loja de Armas da PRF";
        side = "cop";
        license = "";
        level = 1; // Recruta acima
        msg = "Você precisa ser um recruta";
        items[] = {
                        { "NVGoggles","NVG Brown", 2000 },
                        { "ItemGPS", "", 100 },
                        { "Medikit", "", 1000 },
                        { "ToolKit", "", 250 },
                        { "Binocular", "", 150 },
                        { "Rangefinder", "", 25000 },
                        { "SmokeShell","Granada de Fumaça Branca", 2000 },
                        { "SmokeShellRed","Granada de Fumaça Vermelha", 2000 },
                        { "SmokeShellGreen","Granada de Fumaça Verde", 2000 },
                        { "SmokeShellYellow","Granada de Fumaça Amarela", 2000 },
                        { "SmokeShellPurple","Granada de Fumaça Roxa", 2000 },
                        { "SmokeShellBlue","Granada de Fumaça Azul", 2000 },
                        { "SmokeShellOrange","Granada de Fumaça Laranja", 2000 },
                        { "HandGrenade_Stone","Flashbang", 1700 },
                        { "hgun_P07_snds_F","Pistola Teaser", 2000 },
                        { "30Rnd_9x21_Mag", "", 100 },        
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "20Rnd_556x45_UW_mag","Munição Rifle Teaser", 150 },   
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "arifle_MXC_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "LMG_Mk200_F", "", 50000 },
                        { "200Rnd_65x39_cased_Box", "", 500 },
                          { "srifle_DMR_02_camo_AMS_LP_F", "", 10000 },
            { "10Rnd_338_Mag", "", 1000 },
            { "srifle_DMR_03_DMS_snds_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "srifle_DMR_04_SOS_F", "", 100000 },
            { "10Rnd_127x54_Mag", "", 1000 },
            { "srifle_DMR_05_DMS_snds_F", "", 100000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 },
            { "srifle_DMR_06_camo_khs_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "MMG_01_hex_ARCO_LP_F", "",100000 },
            { "150Rnd_93x64_Mag", "", 1000 },
            { "MMG_02_black_RCO_BI_F", "", 100000 },
            { "130Rnd_338_Mag", "", 1000 },
                        { "acc_flashlight", "", 750 },
                            { "bipod_01_F_blk", "", 1000 },
                        { "bipod_02_F_blk", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_KHS_blk", "", 1000 },
                        { "optic_KHS_hex", "", 1000 },
                        { "optic_KHS_old", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_AMS_khk", "", 1000 },
                        { "optic_AMS_snd", "", 1000 },
                        { "acc_flashlight", "", 1000 },
                        { "acc_pointer_IR", "", 1000 },
                        { "optic_MRCO", "", 1000 },
                        { "optic_Holosight", "", 1000 },
                        { "optic_MRD", "", 1000 },
                        { "optic_NVS", "", 1000 },
                        { "optic_SOS", "", 1000 },
                        { "optic_LRPS", "", 1000 },
                        { "optic_ACO_grn", "", 1000 },
                        { "optic_Aco", "", 1000 },
                        { "optic_Hamr", "", 1000 },
                        { "optic_Arco", "", 1000 },
                        { "optic_DMS", "", 1000 },
                         { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_acp", "", 1000 },
                        { "muzzle_snds_L", "", 1000 },
                        { "muzzle_snds_M", "", 1000 },
                        { "muzzle_snds_H", "", 1000 },
                        { "muzzle_snds_H_MG", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_93mmg", "", 1000 },
                        { "muzzle_snds_338_black", "SILEN MAR 1", 1000 },
                        { "muzzle_snds_B", "", 1000 }   
 
        };
    };        
    class cop_recruta {
        name = "Loja de Armas de Recruta";
        side = "cop";
        license = "";
        level = 1; // Recruta acima
        msg = "Você precisa ser um recruta";
        items[] = {
                        { "NVGoggles","NVG Brown", 2000 },
                        { "ItemGPS", "", 100 },
                        { "Medikit", "", 1000 },
                        { "ToolKit", "", 250 },
                        { "Binocular", "", 150 },
                        { "Rangefinder", "", 25000 },
                        { "SmokeShell","Granada de Fumaça Branca", 2000 },
                        { "SmokeShellRed","Granada de Fumaça Vermelha", 2000 },
                        { "SmokeShellGreen","Granada de Fumaça Verde", 2000 },
                        { "SmokeShellYellow","Granada de Fumaça Amarela", 2000 },
                        { "SmokeShellPurple","Granada de Fumaça Roxa", 2000 },
                        { "SmokeShellBlue","Granada de Fumaça Azul", 2000 },
                        { "SmokeShellOrange","Granada de Fumaça Laranja", 2000 },
                        { "HandGrenade_Stone","Flashbang", 1700 },
                        { "hgun_P07_snds_F","Pistola Teaser", 2000 },
                        { "30Rnd_9x21_Mag", "", 100 },        
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "20Rnd_556x45_UW_mag","Munição Rifle Teaser", 150 },   
                        { "arifle_MXC_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "LMG_Mk200_F", "", 50000 },
                        { "arifle_MX_SW_Black_F", "", 20000 },
                        { "100Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_MXM_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 100 },
                        { "200Rnd_65x39_cased_Box", "", 500 },
                         { "srifle_DMR_02_camo_AMS_LP_F", "", 10000 },
            { "10Rnd_338_Mag", "", 1000 },
            { "srifle_DMR_03_DMS_snds_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "srifle_DMR_04_SOS_F", "", 100000 },
            { "10Rnd_127x54_Mag", "", 1000 },
            { "srifle_DMR_05_DMS_snds_F", "", 100000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 },
            { "srifle_DMR_06_camo_khs_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "MMG_01_hex_ARCO_LP_F", "",100000 },
            { "150Rnd_93x64_Mag", "", 1000 },
            { "MMG_02_black_RCO_BI_F", "", 100000 },
            { "130Rnd_338_Mag", "", 1000 },
                        { "acc_flashlight", "", 750 },
                        { "bipod_01_F_blk", "", 1000 },
                        { "bipod_02_F_blk", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_KHS_blk", "", 1000 },
                        { "optic_KHS_hex", "", 1000 },
                        { "optic_KHS_old", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_AMS_khk", "", 1000 },
                        { "optic_AMS_snd", "", 1000 },
                        { "acc_flashlight", "", 1000 },
                        { "acc_pointer_IR", "", 1000 },
                        { "optic_MRCO", "", 1000 },
                        { "optic_Holosight", "", 1000 },
                        { "optic_MRD", "", 1000 },
                        { "optic_NVS", "", 1000 },
                        { "optic_SOS", "", 1000 },
                        { "optic_LRPS", "", 1000 },
                        { "optic_ACO_grn", "", 1000 },
                        { "optic_Aco", "", 1000 },
                        { "optic_Hamr", "", 1000 },
                        { "optic_Arco", "", 1000 },
                        { "optic_DMS", "", 1000 },
                         { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_acp", "", 1000 },
                        { "muzzle_snds_L", "", 1000 },
                        { "muzzle_snds_M", "", 1000 },
                        { "muzzle_snds_H", "", 1000 },
                        { "muzzle_snds_H_MG", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_93mmg", "", 1000 },
                        { "muzzle_snds_338_black", "SILEN MAR 1", 1000 },
                        { "muzzle_snds_B", "", 1000 }   
        };
    };
    class cop_soldado {
        name = "Loja de Armas de Soldado";
        side = "cop";
        license = "";
        level = 2; // Soldado
        msg = "Você precisa ser um soldado!";
        items[] = {
                        { "NVGoggles","NVG Brown", 2000 },
                        { "ItemGPS", "", 100 },
                        { "Medikit", "", 1000 },
                        { "ToolKit", "", 250 },
                        { "Binocular", "", 150 },
                        { "Rangefinder", "", 25000 },
                        { "SmokeShell","Granada de Fumaça Branca", 2000 },
                        { "SmokeShellRed","Granada de Fumaça Vermelha", 2000 },
                        { "SmokeShellGreen","Granada de Fumaça Verde", 2000 },
                        { "SmokeShellYellow","Granada de Fumaça Amarela", 2000 },
                        { "SmokeShellPurple","Granada de Fumaça Roxa", 2000 },
                        { "SmokeShellBlue","Granada de Fumaça Azul", 2000 },
                        { "SmokeShellOrange","Granada de Fumaça Laranja", 2000 },
                        { "HandGrenade_Stone","Flashbang", 1700 },
                        { "hgun_P07_snds_F","Pistola Teaser", 2000 },
                        { "30Rnd_9x21_Mag", "", 100 },
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "20Rnd_556x45_UW_mag","Munição Rifle Teaser", 150 },
                        { "arifle_MXC_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_MX_GL_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "3Rnd_UGL_FlareYellow_F", "", 10 },
                        { "UGL_FlareRed_F", "", 10 },
                        { "arifle_Katiba_GL_ACO_pointer_snds_F", "", 30000 },
                        { "30Rnd_65x39_caseless_green", "", 100 },
                        { "UGL_FlareYellow_F", "", 200 },
                        { "LMG_Mk200_F", "", 50000 },
                        { "200Rnd_65x39_cased_Box", "", 500 },
                         { "srifle_DMR_02_camo_AMS_LP_F", "", 10000 },
            { "10Rnd_338_Mag", "", 1000 },
            { "srifle_DMR_03_DMS_snds_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "srifle_DMR_04_SOS_F", "", 100000 },
            { "10Rnd_127x54_Mag", "", 1000 },
            { "srifle_DMR_05_DMS_snds_F", "", 100000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 },
            { "srifle_DMR_06_camo_khs_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "MMG_01_hex_ARCO_LP_F", "",100000 },
            { "150Rnd_93x64_Mag", "", 1000 },
            { "MMG_02_black_RCO_BI_F", "", 100000 },
            { "130Rnd_338_Mag", "", 1000 },
                        { "acc_flashlight", "", 750 },
                            { "bipod_01_F_blk", "", 1000 },
                        { "bipod_02_F_blk", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_KHS_blk", "", 1000 },
                        { "optic_KHS_hex", "", 1000 },
                        { "optic_KHS_old", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_AMS_khk", "", 1000 },
                        { "optic_AMS_snd", "", 1000 },
                        { "acc_flashlight", "", 1000 },
                        { "acc_pointer_IR", "", 1000 },
                        { "optic_MRCO", "", 1000 },
                        { "optic_Holosight", "", 1000 },
                        { "optic_MRD", "", 1000 },
                        { "optic_NVS", "", 1000 },
                        { "optic_SOS", "", 1000 },
                        { "optic_LRPS", "", 1000 },
                        { "optic_ACO_grn", "", 1000 },
                        { "optic_Aco", "", 1000 },
                        { "optic_Hamr", "", 1000 },
                        { "optic_Arco", "", 1000 },
                         { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_acp", "", 1000 },
                        { "muzzle_snds_L", "", 1000 },
                        { "muzzle_snds_M", "", 1000 },
                        { "muzzle_snds_H", "", 1000 },
                        { "muzzle_snds_H_MG", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_93mmg", "", 1000 },
                        { "muzzle_snds_338_black", "SILEN MAR 1", 1000 },
                        { "muzzle_snds_B", "", 1000 }   
                                                                
        };
    };        
    class cop_sergeant {
        name = "Loja de Armas de Sargento";
        side = "cop";
        license = "";
        level = 3;
        msg = "Você precisa ser um sargento!";
        items[] = {
                        { "NVGoggles","NVG Brown", 2000 },
                        { "ItemGPS", "", 100 },
                        { "Medikit", "", 1000 },
                        { "ToolKit", "", 250 },
                        { "Binocular", "", 150 },
                        { "Rangefinder", "", 25000 },
                        { "SmokeShell","Granada de Fumaça Branca", 2000 },
                        { "SmokeShellRed","Granada de Fumaça Vermelha", 2000 },
                        { "SmokeShellGreen","Granada de Fumaça Verde", 2000 },
                        { "SmokeShellYellow","Granada de Fumaça Amarela", 2000 },
                        { "SmokeShellPurple","Granada de Fumaça Roxa", 2000 },
                        { "SmokeShellBlue","Granada de Fumaça Azul", 2000 },
                        { "SmokeShellOrange","Granada de Fumaça Laranja", 2000 },
                        { "HandGrenade_Stone","Flashbang", 1700 },
                        { "hgun_P07_snds_F","Pistola Teaser", 2000 },
                        { "30Rnd_9x21_Mag", "", 100 },  
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "20Rnd_556x45_UW_mag","Munição Rifle Teaser", 150 },
                        { "arifle_MXC_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_MX_GL_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "3Rnd_UGL_FlareYellow_F", "", 10 },
                        { "UGL_FlareRed_F", "", 10 },
                        { "arifle_MX_SW_Black_F", "", 20000 },
                        { "100Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_Katiba_GL_ACO_pointer_snds_F", "", 30000 },
                        { "30Rnd_65x39_caseless_green", "", 100 },
                        { "UGL_FlareYellow_F", "", 200 },
                        { "LMG_Mk200_F", "", 50000 },
                        { "200Rnd_65x39_cased_Box", "", 500 },
                        { "srifle_EBR_DMS_pointer_snds_F", "", 50000 },
                        { "20Rnd_762x51_Mag", "", 500 },
                          { "srifle_DMR_02_camo_AMS_LP_F", "", 10000 },
            { "10Rnd_338_Mag", "", 1000 },
            { "srifle_DMR_03_DMS_snds_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "srifle_DMR_04_SOS_F", "", 100000 },
            { "10Rnd_127x54_Mag", "", 1000 },
            { "srifle_DMR_05_DMS_snds_F", "", 100000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 },
            { "srifle_DMR_06_camo_khs_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "MMG_01_hex_ARCO_LP_F", "",100000 },
            { "150Rnd_93x64_Mag", "", 1000 },
            { "MMG_02_black_RCO_BI_F", "", 100000 },
            { "130Rnd_338_Mag", "", 1000 },
                        { "acc_flashlight", "", 750 },
                           { "bipod_01_F_blk", "", 1000 },
                        { "bipod_02_F_blk", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_KHS_blk", "", 1000 },
                        { "optic_KHS_hex", "", 1000 },
                        { "optic_KHS_old", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_AMS_khk", "", 1000 },
                        { "optic_AMS_snd", "", 1000 },
                        { "acc_flashlight", "", 1000 },
                        { "acc_pointer_IR", "", 1000 },
                        { "optic_MRCO", "", 1000 },
                        { "optic_Holosight", "", 1000 },
                        { "optic_MRD", "", 1000 },
                        { "optic_NVS", "", 1000 },
                        { "optic_SOS", "", 1000 },
                        { "optic_LRPS", "", 1000 },
                        { "optic_ACO_grn", "", 1000 },
                        { "optic_Aco", "", 1000 },
                        { "optic_Hamr", "", 1000 },
                        { "optic_Arco", "", 1000 },
                         { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_acp", "", 1000 },
                        { "muzzle_snds_L", "", 1000 },
                        { "muzzle_snds_M", "", 1000 },
                        { "muzzle_snds_H", "", 1000 },
                        { "muzzle_snds_H_MG", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_93mmg", "", 1000 },
                        { "muzzle_snds_338_black", "SILEN MAR 1", 1000 },
                        { "muzzle_snds_B", "", 1000 }   
                                                     
        };
    };
    class cop_tenente {
        name = "Loja de Armas de Tenente";
        side = "cop";
        license = "";
        level = 4;
        msg = "Você precisa ser um tenente!";
        items[] = {
                        { "NVGoggles","NVG Brown", 2000 },
                        { "ItemGPS", "", 100 },
                        { "Medikit", "", 1000 },
                        { "ToolKit", "", 250 },
                        { "Binocular", "", 150 },
                        { "Rangefinder", "", 25000 },
                        { "SmokeShell","Granada de Fumaça Branca", 2000 },
                        { "SmokeShellRed","Granada de Fumaça Vermelha", 2000 },
                        { "SmokeShellGreen","Granada de Fumaça Verde", 2000 },
                        { "SmokeShellYellow","Granada de Fumaça Amarela", 2000 },
                        { "SmokeShellPurple","Granada de Fumaça Roxa", 2000 },
                        { "SmokeShellBlue","Granada de Fumaça Azul", 2000 },
                        { "SmokeShellOrange","Granada de Fumaça Laranja", 2000 },
                        { "HandGrenade_Stone","Flashbang", 1700 },
                        { "hgun_P07_snds_F","Pistola Teaser", 2000 },
                        { "30Rnd_9x21_Mag", "", 100 },
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "20Rnd_556x45_UW_mag","Munição Rifle Teaser", 150 },
                        { "arifle_MXC_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_MX_GL_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "3Rnd_UGL_FlareYellow_F", "", 10 },
                        { "UGL_FlareRed_F", "", 10 },
                        { "arifle_MX_SW_Black_F", "", 20000 },
                        { "100Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_Katiba_GL_ACO_pointer_snds_F", "", 30000 },
                        { "30Rnd_65x39_caseless_green", "", 100 },
                        { "UGL_FlareYellow_F", "", 200 },
                        { "LMG_Mk200_F", "", 50000 },
                        { "200Rnd_65x39_cased_Box", "", 500 },
                        { "srifle_EBR_DMS_pointer_snds_F", "", 50000 },
                        { "20Rnd_762x51_Mag", "", 500 },
                         { "srifle_DMR_02_camo_AMS_LP_F", "", 10000 },
            { "10Rnd_338_Mag", "", 1000 },
            { "srifle_DMR_03_DMS_snds_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "srifle_DMR_04_SOS_F", "", 100000 },
            { "10Rnd_127x54_Mag", "", 1000 },
            { "srifle_DMR_05_DMS_snds_F", "", 100000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 },
            { "srifle_DMR_06_camo_khs_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "MMG_01_hex_ARCO_LP_F", "",100000 },
            { "150Rnd_93x64_Mag", "", 1000 },
            { "MMG_02_black_RCO_BI_F", "", 100000 },
            { "130Rnd_338_Mag", "", 1000 },
                        { "acc_flashlight", "", 750 },
                             { "bipod_01_F_blk", "", 1000 },
                        { "bipod_02_F_blk", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_KHS_blk", "", 1000 },
                        { "optic_KHS_hex", "", 1000 },
                        { "optic_KHS_old", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_AMS_khk", "", 1000 },
                        { "optic_AMS_snd", "", 1000 },
                        { "acc_flashlight", "", 1000 },
                        { "acc_pointer_IR", "", 1000 },
                        { "optic_MRCO", "", 1000 },
                        { "optic_Holosight", "", 1000 },
                        { "optic_MRD", "", 1000 },
                        { "optic_NVS", "", 1000 },
                        { "optic_SOS", "", 1000 },
                        { "optic_LRPS", "", 1000 },
                        { "optic_ACO_grn", "", 1000 },
                        { "optic_Aco", "", 1000 },
                        { "optic_Hamr", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_acp", "", 1000 },
                        { "muzzle_snds_L", "", 1000 },
                        { "muzzle_snds_M", "", 1000 },
                        { "muzzle_snds_H", "", 1000 },
                        { "muzzle_snds_H_MG", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_93mmg", "", 1000 },
                        { "muzzle_snds_338_black", "SILEN MAR 1", 1000 },
                        { "muzzle_snds_B", "", 1000 }   
                                                                
        };
    };
    class cop_capitao {
        name = "Loja de Armas de Capitão";
        side = "cop";
        license = "";
        level = 5;
        msg = "Você precisa ser um capitão!";
        items[] = {
                        { "NVGoggles","NVG Brown", 2000 },
                        { "ItemGPS", "", 100 },
                        { "Medikit", "", 1000 },
                        { "ToolKit", "", 250 },
                        { "Binocular", "", 150 },
                        { "Rangefinder", "", 25000 },
                        { "SmokeShell","Granada de Fumaça Branca", 2000 },
                        { "SmokeShellRed","Granada de Fumaça Vermelha", 2000 },
                        { "SmokeShellGreen","Granada de Fumaça Verde", 2000 },
                        { "SmokeShellYellow","Granada de Fumaça Amarela", 2000 },
                        { "SmokeShellPurple","Granada de Fumaça Roxa", 2000 },
                        { "SmokeShellBlue","Granada de Fumaça Azul", 2000 },
                        { "SmokeShellOrange","Granada de Fumaça Laranja", 2000 },
                        { "HandGrenade_Stone","Flashbang", 1700 },
                        { "hgun_P07_snds_F","Pistola Teaser", 2000 },
                        { "30Rnd_9x21_Mag", "", 100 },
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "20Rnd_556x45_UW_mag","Munição Rifle Teaser", 150 },
                        { "arifle_MXC_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_MX_GL_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "3Rnd_UGL_FlareYellow_F", "", 10 },
                        { "UGL_FlareRed_F", "", 10 },
                        { "arifle_TRG20_F", "", 20000 },
                        { "30Rnd_556x45_Stanag", "", 100 },
                        { "arifle_Mk20C_F", "", 20000 }, 
                        { "30Rnd_556x45_Stanag", "", 100 },
                        { "arifle_MX_SW_Black_F", "", 20000 },
                        { "100Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_Katiba_GL_ACO_pointer_snds_F", "", 30000 },
                        { "30Rnd_65x39_caseless_green", "", 100 },
                        { "UGL_FlareYellow_F", "", 200 },
                        { "LMG_Mk200_F", "", 50000 },
                        { "200Rnd_65x39_cased_Box", "", 500 },
                        { "srifle_EBR_DMS_pointer_snds_F", "", 50000 },
                        { "20Rnd_762x51_Mag", "", 500 },
                         { "srifle_DMR_02_camo_AMS_LP_F", "", 10000 },
            { "10Rnd_338_Mag", "", 1000 },
            { "srifle_DMR_03_DMS_snds_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "srifle_DMR_04_SOS_F", "", 100000 },
            { "10Rnd_127x54_Mag", "", 1000 },
            { "srifle_DMR_05_DMS_snds_F", "", 100000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 },
            { "srifle_DMR_06_camo_khs_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "MMG_01_hex_ARCO_LP_F", "",100000 },
            { "150Rnd_93x64_Mag", "", 1000 },
            { "MMG_02_black_RCO_BI_F", "", 100000 },
            { "130Rnd_338_Mag", "", 1000 },
                        { "acc_flashlight", "", 750 },
                            { "bipod_01_F_blk", "", 1000 },
                        { "bipod_02_F_blk", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_KHS_blk", "", 1000 },
                        { "optic_KHS_hex", "", 1000 },
                        { "optic_KHS_old", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_AMS_khk", "", 1000 },
                        { "optic_AMS_snd", "", 1000 },
                        { "acc_flashlight", "", 1000 },
                        { "acc_pointer_IR", "", 1000 },
                        { "optic_MRCO", "", 1000 },
                        { "optic_Holosight", "", 1000 },
                        { "optic_MRD", "", 1000 },
                        { "optic_NVS", "", 1000 },
                        { "optic_SOS", "", 1000 },
                        { "optic_LRPS", "", 1000 },
                        { "optic_ACO_grn", "", 1000 },
                        { "optic_Aco", "", 1000 },
                        { "optic_Hamr", "", 1000 },
                        { "optic_Arco", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_acp", "", 1000 },
                        { "muzzle_snds_L", "", 1000 },
                        { "muzzle_snds_M", "", 1000 },
                        { "muzzle_snds_H", "", 1000 },
                        { "muzzle_snds_H_MG", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_93mmg", "", 1000 },
                        { "muzzle_snds_338_black", "SILEN MAR 1", 1000 },
                        { "muzzle_snds_B", "", 1000 }                       
                                           
        };
    };
    class cop_major {
        name = "Loja de Armas de Major";
        side = "cop";
        license = "";
        level = 6;
        msg = "Você precisa ser um major!";
        items[] = {
                        { "NVGoggles_OPFOR","NVG Black", 2000 },
                        { "ItemGPS", "", 100 },
                        { "Medikit", "", 1000 },
                        { "ToolKit", "", 250 },
                        { "Rangefinder", "", 25000 },
                        { "Binocular", "", 150 },
                        { "Rangefinder", "", 25000 },
                        { "SmokeShell","Granada de Fumaça Branca", 2000 },
                        { "SmokeShellRed","Granada de Fumaça Vermelha", 2000 },
                        { "SmokeShellGreen","Granada de Fumaça Verde", 2000 },
                        { "SmokeShellYellow","Granada de Fumaça Amarela", 2000 },
                        { "SmokeShellPurple","Granada de Fumaça Roxa", 2000 },
                        { "SmokeShellBlue","Granada de Fumaça Azul", 2000 },
                        { "SmokeShellOrange","Granada de Fumaça Laranja", 2000 },
                        { "HandGrenade_Stone","Flashbang", 1700 },
                        { "hgun_P07_snds_F","Pistola Teaser", 2000 },
                        { "30Rnd_9x21_Mag", "", 100 },
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "20Rnd_556x45_UW_mag","Munição Rifle Teaser", 150 },
                        { "arifle_MXC_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_MX_GL_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 130 },
                        { "3Rnd_UGL_FlareYellow_F", "", 10 },
                        { "UGL_FlareRed_F", "", 10 },
                        { "arifle_TRG20_F", "", 20000 },
                        { "30Rnd_556x45_Stanag", "", 100 },
                        { "arifle_Mk20C_F", "", 20000 }, 
                        { "30Rnd_556x45_Stanag", "", 100 },
                        { "arifle_MX_SW_Black_F", "", 20000 },
                        { "100Rnd_65x39_caseless_mag", "", 130 },
                        { "arifle_Katiba_GL_ACO_pointer_snds_F", "", 30000 },
                        { "30Rnd_65x39_caseless_green", "", 100 },
                        { "UGL_FlareYellow_F", "", 200 },
                        { "LMG_Mk200_F", "", 50000 },
                        { "200Rnd_65x39_cased_Box", "", 500 },
                        { "srifle_EBR_DMS_pointer_snds_F", "", 50000 },
                        { "20Rnd_762x51_Mag", "", 500 },
                        { "srifle_LRR_SOS_F", "", 100000 },
                        { "7Rnd_408_Mag", "", 400 },
                         { "srifle_DMR_02_camo_AMS_LP_F", "", 10000 },
            { "10Rnd_338_Mag", "", 1000 },
            { "srifle_DMR_03_DMS_snds_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "srifle_DMR_04_SOS_F", "", 100000 },
            { "10Rnd_127x54_Mag", "", 1000 },
            { "srifle_DMR_05_DMS_snds_F", "", 100000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 },
            { "srifle_DMR_06_camo_khs_F", "", 100000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "MMG_01_hex_ARCO_LP_F", "",100000 },
            { "150Rnd_93x64_Mag", "", 1000 },
            { "MMG_02_black_RCO_BI_F", "", 100000 },
            { "130Rnd_338_Mag", "", 1000 },
                        { "acc_flashlight", "", 1000 },
                        { "acc_pointer_IR", "", 1000 },
                        { "optic_MRCO", "", 1000 },
                        { "optic_Holosight", "", 1000 },
                        { "optic_MRD", "", 1000 },
                        { "optic_NVS", "", 1000 },
                        { "optic_SOS", "", 1000 },
                        { "optic_LRPS", "", 1000 },
                        { "optic_ACO_grn", "", 1000 },
                        { "optic_Aco", "", 1000 },
                        { "optic_Hamr", "", 1000 },
                        { "optic_Arco", "", 1000 },
                        { "optic_DMS", "", 1000 },
                         { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_acp", "", 1000 },
                        { "muzzle_snds_L", "", 1000 },
                        { "muzzle_snds_M", "", 1000 },
                        { "muzzle_snds_H", "", 1000 },
                        { "muzzle_snds_H_MG", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_93mmg", "", 1000 },
                        { "muzzle_snds_338_black", "SILEN MAR 1", 1000 },
                        { "muzzle_snds_B", "", 1000 }                        
        };
    };
    class cop_coronel {
        name = "Loja de Armas de Coronel";
        side = "cop";
        license = "";
        level = 7;
        msg = "Você precisa ser um coronel!";
        items[] = {
                        { "NVGoggles_OPFOR","NVG Black", 2000 },
                        { "ItemGPS", "", 100 },
                        { "Medikit", "", 1000 },
                        { "ToolKit", "", 250 },
                        { "Binocular", "", 150 }, 
                        { "Rangefinder", "", 25000 },
                        { "B_UavTerminal", "", 50 }, 
                        { "O_UavTerminal", "", 50 }, 
                        { "I_UavTerminal", "", 50 }, 
                        { "SmokeShell","Granada de Fumaça Branca", 2000 },
                        { "SmokeShellRed","Granada de Fumaça Vermelha", 2000 },
                        { "SmokeShellGreen","Granada de Fumaça Verde", 2000 },
                        { "SmokeShellYellow","Granada de Fumaça Amarela", 2000 },
                        { "SmokeShellPurple","Granada de Fumaça Roxa", 2000 },
                        { "SmokeShellBlue","Granada de Fumaça Azul", 2000 },
                        { "SmokeShellOrange","Granada de Fumaça Laranja", 2000 },
                        { "HandGrenade_Stone","Flashbang", 2000 },
                        { "MineDetector", "", 1000 },
                        { "hgun_ACPC2_F", "", 5000 },
                        { "9Rnd_45ACP_Mag", "", 200 },
                        { "hgun_P07_snds_F","Pistola Teaser", 2000 },
                        { "30Rnd_9x21_Mag", "", 100 },
                        { "arifle_sdar_F","Rifle Teaser", 20000 },
                        { "20Rnd_556x45_UW_mag","Munição Rifle Teaser", 150 },
                        { "arifle_TRG20_F", "", 20000 },
                        { "30Rnd_556x45_Stanag", "", 100 },
                        { "arifle_Mk20C_F", "", 20000 }, 
                        { "30Rnd_556x45_Stanag", "", 100 },
                        { "arifle_MX_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 100 },
                        { "arifle_MXC_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 100 },
                        { "arifle_MXM_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 100 },
                        { "arifle_MX_GL_Black_F", "", 30000 },
                        { "30Rnd_65x39_caseless_mag", "", 100 },
                        { "3Rnd_UGL_FlareCIR_F", "", 100 },
                        { "arifle_MX_SW_Black_F", "", 30000 },
                        { "100Rnd_65x39_caseless_mag", "", 100 },
                        { "arifle_Katiba_GL_ACO_pointer_snds_F", "", 30000 },
                        { "30Rnd_65x39_caseless_green", "", 100 },
                        { "UGL_FlareYellow_F", "", 200 },
                        { "LMG_Mk200_F", "", 30000 },
                        { "200Rnd_65x39_cased_Box", "", 200 },
                        { "srifle_EBR_DMS_pointer_snds_F", "", 20000 },
                        { "20Rnd_762x51_Mag", "", 4000 },
                        { "srifle_LRR_SOS_F", "", 100000 },
                        { "7Rnd_408_Mag", "", 400 },
                        { "srifle_GM6_SOS_F", "", 100000 },
                        { "5Rnd_127x108_Mag", "", 1000 },
                        { "launch_NLAW_F", "", 100000 },
                        { "NLAW_F", "", 2000 },        
                        { "launch_RPG32_F", "", 100000 },        
                        { "RPG32_F", "", 2000 },        
                        { "launch_B_Titan_F", "", 100000 },        
                        { "Titan_AA", "", 2000 },
            { "srifle_DMR_02_camo_AMS_LP_F", "", 1000 },
            { "10Rnd_338_Mag", "", 1000 },
            { "srifle_DMR_03_DMS_snds_F", "", 1000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "srifle_DMR_04_SOS_F", "", 1000 },
            { "10Rnd_127x54_Mag", "", 1000 },
            { "srifle_DMR_05_DMS_snds_F", "", 1000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1000 },
            { "srifle_DMR_06_camo_khs_F", "", 1000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "MMG_01_hex_ARCO_LP_F", "", 1000 },
            { "150Rnd_93x64_Mag", "", 1000 },
            { "MMG_02_black_RCO_BI_F", "", 1000 },
            { "130Rnd_338_Mag", "", 1000 },
                        { "LMG_Mk200_LP_BI_F", "", 1000 },
                        { "200Rnd_65x39_cased_Box", "", 1000 },
                        { "bipod_01_F_blk", "", 1000 },
                        { "bipod_02_F_blk", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_KHS_blk", "", 1000 },
                        { "optic_KHS_hex", "", 1000 },
                        { "optic_KHS_old", "", 1000 },
                        { "bipod_03_F_blk", "", 1000 },
                        { "optic_AMS", "", 1000 },
                        { "optic_AMS_khk", "", 1000 },
                        { "optic_AMS_snd", "", 1000 },
                        { "acc_flashlight", "", 1000 },
                        { "acc_pointer_IR", "", 1000 },
                        { "optic_MRCO", "", 1000 },
                        { "optic_Holosight", "", 1000 },
                        { "optic_MRD", "", 1000 },
                        { "optic_NVS", "", 1000 },
                        { "optic_SOS", "", 1000 },
                        { "optic_LRPS", "", 1000 },
                        { "optic_ACO_grn", "", 1000 },
                        { "optic_Aco", "", 1000 },
                        { "optic_Hamr", "", 1000 },
                        { "optic_Arco", "", 1000 },
                        { "optic_DMS", "", 1000 },
                        { "optic_Nightstalker", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_acp", "", 1000 },
                        { "muzzle_snds_L", "", 1000 },
                        { "muzzle_snds_M", "", 1000 },
                        { "muzzle_snds_H", "", 1000 },
                        { "muzzle_snds_H_MG", "", 1000 },
                        { "muzzle_snds_H_SW", "", 1000 },
                        { "muzzle_snds_93mmg", "", 1000 },
                        { "muzzle_snds_338_black", "SILEN MAR 1", 1000 },
                        { "muzzle_snds_B", "", 1000 }                      
        };
    };       
    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        license = "";
        level = -1;
        items[] = {
                        { "U_Rangemaster", "Uniforme do Resgate", 1200 },
                                                { "B_Kitbag_cbr", "Mochila do Resgate", 1200 }, 
                                                { "U_C_WorkerCoveralls", "Uniforme do Mecânico", 1200 }, 
                                                { "B_Bergen_sgg", "Mochila do Mecânico", 1200 }, 
                                                { "ItemGPS", "GPS", 150 },
                        { "Binocular", "Binócolo", 150 },
                        { "ToolKit", "Kit de Ferramentas", 500 },
                        { "FirstAidKit", "Kit de Primeiros Soccros", 500 },
                        { "Medikit", "Kit de Primeiros Soccros", 500 },
                        { "NVGoggles", "Visão Noturna", 500 }             
                
        };
    };
};
