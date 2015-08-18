class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        license = "gun";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 6500 },
            { "hgun_Pistol_heavy_02_F", "", 9850 },
            { "hgun_ACPC2_F", "", 11500 },
            { "hgun_PDW2000_F", "", 20000 },
            { "optic_ACO_grn_smg", "", 2500 },
            { "V_Rangemaster_belt", "", 4900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    class rebel {
        name = "Loja de Armas Rebeldes";
        side = "civ";
        license = "rebel";
        level = -1;
        msg = "";
        items[] = {
            { "Rangefinder", "", 15000 },
            { "arifle_TRG20_F", "", 45000 },
            { "30Rnd_556x45_Stanag", "", 700 },
            { "arifle_Mk20_F", "MK20", 50000 },
            { "30Rnd_556x45_Stanag", "", 750 },
            { "arifle_SDAR_F", "SDAR", 35000 },
            { "30Rnd_556x45_Stanag", "", 650 },
            { "arifle_MXM_F","", 95000 },
            { "30Rnd_65x39_caseless_mag", "",800 },
            { "srifle_DMR_01_F", "", 100000 },
            { "10Rnd_762x54_Mag", "", 1500 },
            { "LMG_Zafir_F", "", 250000 },
            { "150Rnd_762x54_Box_Tracer", "", 2000 },
            { "hgun_Rook40_F", "",10000 },
            { "30Rnd_9x21_Mag","", 100 },
            { "hgun_Pistol_heavy_02_F", "", 11000 },
            { "6Rnd_45ACP_Cylinder", "", 150 },
            { "srifle_DMR_05_hex_F", "", 450000 },
            { "10Rnd_93x64_DMR_05_Mag", "", 1500 },
            { "srifle_DMR_06_olive_F", "", 350000 },
            { "20Rnd_762x51_Mag", "", 1000 },
            { "optic_ACO_grn", "", 5000 },
            { "optic_Holosight", "", 2500 },
            { "optic_SOS", "", 10000 },
            { "optic_AMS_khk", "", 18000 },
            { "optic_KHS_hex", "", 15000 },
            { "acc_flashlight", "", 2000 },
            { "optic_Hamr", "", 5000 }
        };
    };
	
	class gang {
        name = "Hideout Armament";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500 },
            { "hgun_Pistol_heavy_02_F", "", 2500 },
            { "hgun_ACPC2_F", "", 4500 },
            { "hgun_PDW2000_F", "", 9500 },
            { "optic_ACO_grn_smg", "", 950 },
            { "V_Rangemaster_belt", "", 1900 },
            { "16Rnd_9x21_Mag", "", 25 },
            { "9Rnd_45ACP_Mag", "", 45 },
            { "6Rnd_45ACP_Cylinder", "", 50 },
            { "30Rnd_9x21_Mag", "", 75 }
        };
    };
    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        license = "";
        level = -1;
        msg = "";
        items[] = {
			{ "ItemGPS", "", 100 },
			{ "ToolKit", "", 5000 },
			{ "FirstAidKit", "", 1000 },
			{ "NVGoggles", "", 2000 },
			{ "Chemlight_red", "", 300 },
			{ "Chemlight_yellow", "", 300 },
			{ "Chemlight_green", "", 300 },
			{ "Chemlight_blue", "", 300 }
        };
    };
    //Cop Shops
    class cop_basic {
        name = "Loja de Equipamentos";
        side = "cop";
        license = "";
        level = -1;
        msg = "";
        items[] = {
        	{ "arifle_sdar_F", "Rifle Teaser", 20000 },
			{ "20Rnd_556x45_UW_mag", "Munição Rifle Teaser", 125 },
			{ "hgun_P07_snds_F", "Pistola Teaser", 2000 },
			{ "muzzle_snds_L", "", 650 },
			{ "16Rnd_9x21_Mag", "Munição Pistola Teaser", 150 },
			{ "HandGrenade_Stone", "Flashbang", 1700 },
			{ "Rangefinder", "", 150 },
			{ "ItemGPS", "", 100 },
			{ "ItemWatch", "", 100 },
		    { "ItemCompass", "", 100 },
		    { "ItemMap", "", 100 },
			{ "ToolKit", "", 5000 },
			{ "Medikit", "", 1000 },
			{ "NVGoggles_OPFOR", "", 2000 }
        };
    };
    class cop_recruit {
        name = "Loja de Recruta";
        side = "cop";
        license = "";
        level = 1;
        msg = "Você não faz parte da Polícia!!";
        items[] = {
			{ "arifle_Mk20_GL_F", "", 30000 },
			{ "30Rnd_556x45_Stanag", "", 1500 },
			{ "30Rnd_556x45_Stanag_Tracer_Green", "", 1500 },
			{ "muzzle_snds_M", "", 3000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_MRCO", "", 15000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_Arco", "", 2500 },
			{ "UGL_FlareRed_F", "", 100 },
			{ "UGL_FlareCIR_F", "", 100 },
			{ "SmokeShellOrange", "Fumaça Laranja", 250 }
        };
    };
    class cop_soldier {
        name = "Loja de Soldado/Cabo";
        side = "cop";
        license = "";
        level = 2;
        msg = "Você não é um Soldado/Cabo!!";
        items[] = {
			{ "arifle_Mk20_GL_F", "", 20000 },
			{ "arifle_Mk20_plain_F", "", 1500 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "arifle_MX_F", "", 5000 },
			{ "30Rnd_65x39_caseless_mag", "", 2000 },
			{ "arifle_MXM_F", "", 500 },
			{ "30Rnd_65x39_caseless_mag", "", 5000 },
			{ "muzzle_snds_H", "", 1000 },
			{ "acc_flashlight", "", 750 },
			{ "optic_MRCO", "", 30000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_Hamr", "", 2500 },
			{ "optic_DMS", "", 2500 }
        };
    };
	class cop_sergeant {
        name = "Loja de Sargento";
        side = "cop";
        license = "";
        level = 3;
        msg = "Você não é um Sargento!!";
        items[] = {
			{ "arifle_Mk20_GL_F", "", 5000 },
			{ "arifle_Mk20_plain_F", "", 2000 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "arifle_MX_F", "", 30000 },
			{ "30Rnd_65x39_caseless_mag", "", 1500 },
			{ "muzzle_snds_H", "", 10000 },
			{ "arifle_MX_SW_F", "", 45000 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 3000 },
			{ "muzzle_snds_H", "", 10000 },
			{ "srifle_EBR_F", "", 45000 },
			{ "srifle_DMR_03_F", "", 50000 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "muzzle_snds_B", "", 750 },
			{ "acc_flashlight", "", 4000 },
			{ "acc_pointer_IR", "", 4000 },
			{ "optic_MRCO", "", 5000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_MRD", "", 5000 },
			{ "optic_NVS", "", 5000 },
			{ "optic_SOS", "", 5000 },
			{ "optic_LRPS", "", 10000 },
			{ "optic_ACO_grn", "", 5000 },
			{ "optic_Aco", "", 3500 },
			{ "optic_Hamr", "", 7500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_DMS", "", 4000 },
			{ "HandGrenade_Stone", "Flashbang", 300 }
        };
    };
	class cop_tenent {
        name = "Loja de Tenente";
        side = "cop";
        license = "";
        level = 4;
        msg = "Você não é um Tenente!!";
        items[] = {
			{ "arifle_Mk20_GL_F", "", 5000 },
			{ "arifle_Mk20_plain_F", "", 2000 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "arifle_MX_F", "", 30000 },
			{ "30Rnd_65x39_caseless_mag", "", 1500 },
			{ "muzzle_snds_H", "", 10000 },
			{ "arifle_MX_SW_F", "", 45000 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 3000 },
			{ "muzzle_snds_H", "", 10000 },
			{ "srifle_EBR_F", "", 45000 },
			{ "srifle_DMR_03_F", "", 50000 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "muzzle_snds_B", "", 10000 },
			{ "LMG_Zafir_F", "", 45000 },
			{ "150Rnd_762x54_Box", "", 2000 },
			{ "150Rnd_762x54_Box_Tracer", "", 2500 },
			{ "acc_flashlight", "", 4000 },
			{ "acc_pointer_IR", "", 4000 },
			{ "optic_MRCO", "", 5000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_MRD", "", 5000 },
			{ "optic_NVS", "", 5000 },
			{ "optic_SOS", "", 5000 },
			{ "optic_LRPS", "", 10000 },
			{ "optic_ACO_grn", "", 5000 },
			{ "optic_Aco", "", 3500 },
			{ "optic_Hamr", "", 7500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_DMS", "", 4000 },
			{ "HandGrenade_Stone", "Flashbang", 300 }
        };
    };
	class cop_captain {
        name = "Loja de Capitão";
        side = "cop";
        license = "";
        level = 5;
        msg = "Você não é um Capitão!!";
        items[] = {
			{ "arifle_Mk20_GL_F", "", 5000 },
			{ "arifle_Mk20_plain_F", "", 2000 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "arifle_MX_F", "", 30000 },
			{ "30Rnd_65x39_caseless_mag", "", 1500 },
			{ "muzzle_snds_H", "", 10000 },
			{ "arifle_MX_SW_F", "", 45000 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 3000 },
			{ "muzzle_snds_H", "", 10000 },
			{ "srifle_EBR_F", "", 45000 },
			{ "srifle_DMR_03_F", "", 50000 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "muzzle_snds_B", "", 750 },
			{ "LMG_Zafir_F", "", 65000 },
			{ "150Rnd_762x54_Box", "", 2000 },
			{ "150Rnd_762x54_Box_Tracer", "", 2500 },
			{ "LMG_Mk200_F", "", 45000 },
			{ "200Rnd_65x39_cased_Box", "", 2000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
			{ "muzzle_snds_H_MG", "", 1000 },
			{ "srifle_DMR_05_blk_F", "", 50000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 2500 },
			{ "muzzle_snds_93mmg", "", 1000 },
			{ "acc_flashlight", "", 4000 },
			{ "acc_pointer_IR", "", 4000 },
			{ "optic_MRCO", "", 5000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_MRD", "", 5000 },
			{ "optic_NVS", "", 5000 },
			{ "optic_SOS", "", 5000 },
			{ "optic_LRPS", "", 10000 },
			{ "optic_ACO_grn", "", 5000 },
			{ "optic_Aco", "", 3500 },
			{ "optic_Hamr", "", 7500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_DMS", "", 4000 },
			{ "HandGrenade_Stone", "Flashbang", 300 }
        };
    };
	class cop_major {
        name = "Loja de Major";
        side = "cop";
        license = "";
        level = 6;
        msg = "Você não é um Major!!";
        items[] = {
			{ "arifle_Mk20_GL_F", "", 5000 },
			{ "arifle_Mk20_plain_F", "", 2000 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "arifle_MX_F", "", 30000 },
			{ "30Rnd_65x39_caseless_mag", "", 1500 },
			{ "muzzle_snds_H", "", 10000 },
			{ "arifle_MX_SW_F", "", 45000 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 3000 },
			{ "muzzle_snds_H", "", 10000 },
			{ "srifle_EBR_F", "", 45000 },
			{ "srifle_DMR_03_F", "", 50000 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "muzzle_snds_B", "", 750 },
			{ "LMG_Zafir_F", "", 65000 },
			{ "150Rnd_762x54_Box", "", 2000 },
			{ "150Rnd_762x54_Box_Tracer", "", 2500 },
			{ "LMG_Mk200_F", "", 45000 },
			{ "200Rnd_65x39_cased_Box", "", 2000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
			{ "muzzle_snds_H_MG", "", 1000 },
			{ "srifle_DMR_05_blk_F", "", 50000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 2500 },
			{ "muzzle_snds_93mmg", "", 1000 },
			{ "srifle_DMR_02_F", "", 65000 },
			{ "10Rnd_338_Mag", "", 2500 },
			{ "muzzle_snds_338_black", "", 1000 },
			{ "acc_flashlight", "", 4000 },
			{ "acc_pointer_IR", "", 4000 },
			{ "optic_MRCO", "", 5000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_MRD", "", 5000 },
			{ "optic_NVS", "", 5000 },
			{ "optic_SOS", "", 5000 },
			{ "optic_LRPS", "", 10000 },
			{ "optic_ACO_grn", "", 5000 },
			{ "optic_Aco", "", 3500 },
			{ "optic_Hamr", "", 7500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_DMS", "", 4000 },
			{ "HandGrenade_Stone", "Flashbang", 300 }
        };
    };
	class cop_coronel {
        name = "Loja de Coronel";
        side = "cop";
        license = "";
        level = 7;
        msg = "Você não é um Coronel!!";
        items[] = {
			{ "arifle_Mk20_GL_F", "", 5000 },
			{ "arifle_Mk20_plain_F", "", 2000 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "arifle_MX_F", "", 30000 },
			{ "30Rnd_65x39_caseless_mag", "", 1500 },
			{ "muzzle_snds_H", "", 10000 },
			{ "arifle_MX_SW_F", "", 45000 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 3000 },
			{ "muzzle_snds_H", "", 10000 },
			{ "srifle_EBR_F", "", 45000 },
			{ "srifle_DMR_03_F", "", 50000 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "muzzle_snds_B", "", 750 },
			{ "LMG_Zafir_F", "", 65000 },
			{ "150Rnd_762x54_Box", "", 2000 },
			{ "150Rnd_762x54_Box_Tracer", "", 2500 },
			{ "LMG_Mk200_F", "", 45000 },
			{ "200Rnd_65x39_cased_Box", "", 2000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
			{ "muzzle_snds_H_MG", "", 1000 },
			{ "srifle_DMR_05_blk_F", "", 50000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 2500 },
			{ "muzzle_snds_93mmg", "", 1000 },
			{ "srifle_DMR_02_F", "", 65000 },
			{ "10Rnd_338_Mag", "", 2500 },
			{ "muzzle_snds_338_black", "", 1000 },
			{ "MMG_02_black_F", "", 95000 },
			{ "130Rnd_338_Mag", "", 2500 },
			{ "muzzle_snds_338_black", "", 1000 },
			{ "acc_flashlight", "", 4000 },
			{ "acc_pointer_IR", "", 4000 },
			{ "optic_MRCO", "", 5000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_MRD", "", 5000 },
			{ "optic_NVS", "", 5000 },
			{ "optic_SOS", "", 5000 },
			{ "optic_LRPS", "", 10000 },
			{ "optic_ACO_grn", "", 5000 },
			{ "optic_Aco", "", 3500 },
			{ "optic_Hamr", "", 7500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_DMS", "", 4000 },
			{ "HandGrenade_Stone", "Flashbang", 300 }
        };
    };
	class cop_swat {
        name = "Loja da ROTA";
        side = "cop";
        license = "swat";
        level = 3;
        msg = "Você não faz parte da ROTA!!";
        items[] = {
            { "U_Competitor", "Roupa ROTA", 2500 },
			{ "V_PlateCarrier1_blk", "Colete ROTA", 5000 },
			{ "H_Beret_blk_POLICE", "", 150 },
			{ "arifle_Mk20_GL_F", "", 5000 },
			{ "arifle_Mk20_plain_F", "", 2000 },
			{ "30Rnd_556x45_Stanag_Tracer_Red", "", 500 },
			{ "muzzle_snds_M", "", 2500 },
			{ "arifle_MX_F", "", 30000 },
			{ "30Rnd_65x39_caseless_mag", "", 1500 },
			{ "muzzle_snds_H", "", 10000 },
			{ "arifle_MX_SW_F", "", 45000 },
			{ "100Rnd_65x39_caseless_mag_Tracer", "", 3000 },
			{ "muzzle_snds_H_SW", "", 10000 },
			{ "srifle_EBR_F", "", 45000 },
			{ "srifle_DMR_03_F", "", 50000 },
			{ "20Rnd_762x51_Mag", "", 500 },
			{ "muzzle_snds_B", "", 750 },
			{ "LMG_Zafir_F", "", 65000 },
			{ "150Rnd_762x54_Box", "", 2000 },
			{ "150Rnd_762x54_Box_Tracer", "", 2500 },
			{ "LMG_Mk200_F", "", 45000 },
			{ "200Rnd_65x39_cased_Box", "", 2000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "", 2500 },
			{ "muzzle_snds_H_MG", "", 1000 },
			{ "srifle_DMR_05_blk_F", "", 50000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 2500 },
			{ "muzzle_snds_93mmg", "", 1000 },
			{ "srifle_DMR_02_F", "", 65000 },
			{ "10Rnd_338_Mag", "", 2500 },
			{ "muzzle_snds_338_black", "", 1000 },
			{ "MMG_02_black_F", "", 95000 },
			{ "130Rnd_338_Mag", "", 2500 },
			{ "muzzle_snds_338_black", "", 1000 },
			{ "acc_flashlight", "", 4000 },
			{ "acc_pointer_IR", "", 4000 },
			{ "optic_MRCO", "", 5000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_MRD", "", 5000 },
			{ "optic_NVS", "", 5000 },
			{ "optic_SOS", "", 5000 },
			{ "optic_LRPS", "", 10000 },
			{ "optic_ACO_grn", "", 5000 },
			{ "optic_Aco", "", 3500 },
			{ "optic_Hamr", "", 7500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_DMS", "", 4000 },
			{ "HandGrenade_Stone", "Flashbang", 300 }
        };
    };
	class cop_donator {
        name = "Loja de doador COP";
        side = "cop";
        license = "donator_cop";
        level = 2;
        msg = "Você não é Doador COP";
        items[] = {
           { "Binocular", "Binóculos", 150 },
            { "ItemCompass", "Bussula", 150 },
            { "ItemWatch", "Relógio", 150 },
            { "ItemMap", "Mapa", 150 },
            { "ItemGPS", "GPS", 150 },
            { "Toolkit", "Kit de Reparo", 2500 },
            { "FirstAidKit", "Kit 1 socorros", 150 },
            { "NVGoggles_OPFOR", "NVG", 2000 },
            { "Rangefinder", "RangeFinder", 3000 },
            { "Medikit", "Kit Medico", 2000 },
            { "NVGoggles_OPFOR", "NVG", 2000 },
            { "SmokeShell", "Fumaça Branca", 300 },
			{ "HandGrenade_Stone", "Flashbang", 500 },
            { "SmokeShell", "Fumaça Branca", 300 },
			{ "hgun_ACPC2_F", "",5000 },
			{ "9Rnd_45ACP_Mag", "",200 },
			{ "srifle_EBR_F", "MK18",35000 },
			{ "20Rnd_762x51_Mag", "Munição MK18",300 },
			{ "srifle_DMR_03_F", "MK-1 EMR",50000 },
			{ "20Rnd_762x51_Mag", "Munição MK-1 EMR",300 },
			{ "srifle_DMR_01_F", "Rahim",35000 },
			{ "10Rnd_762x54_Mag", "Munição Rahim",500 },
			{ "LMG_Zafir_F", "Zafir",50000 },
			{ "150Rnd_762x54_Box", "Munição Zafir",800 },
			{ "LMG_Mk200_F", "MK-200",50000 },
			{ "200Rnd_65x39_cased_Box", "Munição MK-200",800 },
			{ "srifle_DMR_05_blk_F", "",60000 },
			{ "10Rnd_93x64_DMR_05_Mag", "Munição Cyrus",1500 },
			{ "muzzle_snds_93mmg", "",10000 },
			{ "muzzle_snds_L", "",1000 },
			{ "muzzle_snds_acp", "",1500 },
			{ "muzzle_snds_H", "",3000 },
			{ "muzzle_snds_B", "",5000 },
			{ "MineDetector", "",5000 },
			{ "acc_flashlight", "", 4000 },
			{ "acc_pointer_IR", "", 4000 },
			{ "optic_MRCO", "", 5000 },
			{ "optic_Holosight", "", 3500 },
			{ "optic_MRD", "", 5000 },
			{ "optic_NVS", "", 5000 },
			{ "optic_SOS", "", 5000 },
			{ "optic_LRPS", "", 10000 },
			{ "optic_ACO_grn", "", 5000 },
			{ "optic_Aco", "", 3500 },
			{ "optic_Hamr", "", 7500 },
			{ "optic_Arco", "", 2500 },
			{ "optic_DMS", "", 4000 }
        };
    };
    //Medic Shops
    class med_basic {
        name = "Loja de Equipamentos";
        side = "med";
        license = "";
        level = -1;
        items[] = {
            { "ItemGPS", "", 100 },
			{ "U_B_CombatUniform_mcam_vest", "Uniforme SAMU", 2500 },
			{ "Rangefinder", "", 10000 },
			{ "ToolKit", "", 5000 },
			{ "Medikit", "", 7500 },
			{ "FirstAidKit", "", 150 },
			{ "NVGoggles", "", 2000 },
			{ "B_Carryall_oli", "", 3000 }
        };
    };
	 //Donator Shops
	 class donator {
        name = "Loja de Armas Rebelde";
        side = "civ";
        license = "donator";
        level = -1;
        msg = "";
        items[] = {
            { "Binocular", "Binoculos", 150 },
			{ "Rangefinder", "RangeFinder", 3000 },
			{ "ItemMap", "Mapa", 100 },
            { "ItemGPS", "GPS", 100 },
            { "ItemRadio", "Smartphone", 150 },
            { "ToolKit", "Kit de Reparo", 2500 },
            { "FirstAidKit", "Kit 1 socorros", 150 },
			{ "NVGoggles_OPFOR", "NVG", 2000 },
            { "hgun_Pistol_heavy_01_MRD_F", "", 2850 },
            { "SMG_01_Holo_F", "",9025 },
			{ "SMG_02_F", "",9500 },
			{ "hgun_PDW2000_F", "",9500 },
			{ "srifle_EBR_F", "",55100 },
			{ "arifle_TRG20_F", "",17955 },
			{ "LMG_Mk200_F", "",49875 },
			{ "LMG_Zafir_F", "",61750 },
			{ "srifle_DMR_01_F", "",36575 },
			{ "arifle_Katiba_F", "",13300 },
			{ "arifle_MX_SW_F", "", 33250 },
			{ "arifle_MXM_F", "", 33250 },
			{ "arifle_MXC_F", "", 29925 },
			{ "optic_MRD", "",1000 },
			{ "srifle_DMR_03_F", "", 66500 },
			{ "20Rnd_762x51_Mag", "", 1000 },
			{ "srifle_DMR_06_camo_F", "", 166250 },
			{ "20Rnd_762x51_Mag", "", 1000 },
			{ "srifle_DMR_05_tan_F", "", 266000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 11000 },
			{ "optic_KHS_hex", "", 3000 },
			{ "optic_AMS_snd", "", 30000 },
			{ "optic_Holosight", "",1000 },
			{ "optic_MRD", "",1000 },
			{ "optic_ACO_grn", "",10000 },
			{ "optic_Aco", "",10000 },
			{ "optic_Hamr", "",1000 },
			{ "optic_SOS", "",40000 },
			{ "optic_NVS", "",50000 },
			{ "acc_flashlight", "",1000 },
			{ "acc_pointer_IR", "",4000 },
			{ "muzzle_snds_acp", "",500 },
			{ "muzzle_snds_H", "",23000 },
			{ "muzzle_snds_B", "",23000 },
			{ "muzzle_snds_M", "",20000 },
			{ "bipod_02_F_tan", "", 3000 },
			{ "bipod_01_F_snd", "", 3000 },
			{ "bipod_03_F_oli", "", 3000 },
			{ "muzzle_snds_M", "",20000 },
			{ "muzzle_snds_H", "",23000 },
			{ "muzzle_snds_B", "",23000 },
			{ "30Rnd_9x21_Mag", "",500 },
			{ "20Rnd_556x45_UW_mag", "",250 },
			{ "30Rnd_556x45_Stanag", "",500 },
			{ "30Rnd_65x39_caseless_mag", "",500 },
			{ "30Rnd_65x39_caseless_green", "",500 },
			{ "30Rnd_556x45_Stanag_Tracer_Green","Munição MK20",500 },
			{ "100Rnd_65x39_caseless_mag", "",500 },
			{ "10Rnd_762x54_Mag", "",500 },
			{ "20Rnd_762x51_Mag", "",500 },
			{ "150Rnd_762x54_Box_Tracer", "",1000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "",1000 },
			{ "11Rnd_45ACP_Mag", "",150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "",175 },
			{ "SmokeShell","Granada de Fuapple Branca",2000 },
			{ "SmokeShellRed","Granada de Fuapple Vermelha",2000 },
			{ "SmokeShellYellow","Granada de Fuapple Amarela",2000 },
			{ "SmokeShellBlue","Granada de Fuapple Azul",2000 },
			{ "U_B_CombatUniform_mcam_tshirt", "",7000 },
			{ "U_B_CombatUniform_mcam", "", 5000 },
			{ "U_B_CombatUniform_mcam_vest", "", 5000 },
			{ "U_O_CombatUniform_ocamo", "", 5000 },
			{ "U_O_CombatUniform_oucamo", "", 200 },
			{ "U_I_GhillieSuit", "",5000 },
			{ "U_O_Wetsuit", "", 5000 },
			{ "U_I_G_resistanceLeader_F", "",5000 },
			{ "U_B_PilotCoveralls", "", 2000 },
			{ "U_O_PilotCoveralls", "", 5000 },
			{ "U_C_Journalist", "",5000 },
			{ "U_C_Poloshirt_redwhite", "",200 },
			{ "U_B_GhillieSuit", "",7000 },
			{ "U_B_Wetsuit", "",7000 },
			{ "V_RebreatherB", "",6000 },
			{ "V_RebreatherIR", "",4000 },
			{ "V_RebreatherIA", "",4000 },
			{ "U_NikosAgedBody", "",5000 },
			{ "U_C_Poloshirt_blue", "",400 },
			{ "U_C_Poloshirt_burgundy", "",400 },
			{ "U_C_Poloshirt_stripped", "",400 },
			{ "U_C_Poloshirt_tricolour", "", 200 },
			{ "U_C_Poloshirt_redwhite", "", 200 },
			{ "U_NikosBody", "",400 },
			{ "U_OrestesBody", "",400 },
			{ "H_HelmetB", "",400 },
			{ "H_HelmetB_camo", "",100 },
			{ "H_HelmetB_paint", "",100 },
			{ "H_HelmetB_light", "",100 },
			{ "V_BandollierB_khk", "",6000 },
			{ "V_BandollierB_oli", "",6000 },
			{ "H_HelmetB_plain_mcamo", "",100 },
			{ "H_HelmetSpecB", "",100 },
			{ "H_HelmetSpecB_paint1", "",100 },
			{ "H_HelmetSpecB_paint2", "",100 },
			{ "H_HelmetIA", "", 100 },
			{ "H_HelmetIA_net", "", 100 },
			{ "H_HelmetIA_camo", "", 100 },
			{ "H_Helmet_Kerry", "", 100 },
			{ "H_HelmetB_grass", "",100 },
			{ "H_Cap_brn_SPECOPS", "", 100 },
			{ "H_Cap_tan_specops_US", "",100 },
			{ "H_Cap_khaki_specops_UK", "", 100 },
			{ "H_Cap_blk_Raven", "", 100 },
			{ "H_MilCap_ocamo", "", 100 },
			{ "H_MilCap_oucamo", "", 100 },
			{ "H_MilCap_rucamo", "", 100 },
			{ "H_MilCap_gry", "", 100 },
			{ "H_MilCap_dgtl", "", 100 },
			{ "H_MilCap_blue", "", 100 },
			{ "H_HelmetCrew_O", "", 100 },
			{ "H_HelmetCrew_B", "", 100 },
			{ "H_PilotHelmetHeli_B", "", 100 },
			{ "H_PilotHelmetHeli_I", "", 100 },
			{ "H_Watchcap_blk", "", 100 },
			{ "V_BandollierB_oli", "",4000 },
			{ "V_BandollierB_cbr", "",4000 },
			{ "V_BandollierB_rgr", "",4000 },
			{ "V_PlateCarrier1_rgr", "", 4000 },
			{ "V_PlateCarrier2_rgr", "", 4000 },
			{ "V_PlateCarrier3_rgr", "",6000 },
			{ "V_PlateCarrierGL_rgr", "",6000 },
			{ "V_PlateCarrierSpec_rgr", "", 4000 },
			{ "V_TacVest_khk", "",6000 },
			{ "V_TacVest_camo", "",6000 },
			{ "V_TacVestIR_blk", "",6000 },
			{ "V_TacVestCamo_khk", "",6000 },
			{ "HandGrenade", "Granada", 28500 },
			{ "ATMine_Range_Mag", "", 50000 }
        };
    };
	 class donator_diamond {
        name = "Loja de Doador Diamante";
        side = "civ";
        license = "donator_diamond";
        level = -1;
        msg = "Você não é Doador Diamante";
        items[] = {
			{ "Binocular", "Binoculos", 150 },
			{ "Rangefinder", "RangeFinder", 3000 },
			{ "ItemMap", "Mapa", 100 },
            { "ItemGPS", "GPS", 100 },
            { "ItemRadio", "Smartphone", 150 },
            { "ToolKit", "Kit de Reparo", 2500 },
            { "FirstAidKit", "Kit 1 socorros", 150 },
			{ "NVGoggles_OPFOR", "NVG", 2000 },
            { "hgun_Pistol_heavy_01_MRD_F", "", 2850 },
            { "SMG_01_Holo_F", "",9025 },
			{ "SMG_02_F", "",9500 },
			{ "hgun_PDW2000_F", "",9500 },
			{ "srifle_EBR_F", "",55100 },
			{ "arifle_TRG20_F", "",17955 },
			{ "LMG_Mk200_F", "",49875 },
			{ "LMG_Zafir_F", "",61750 },
			{ "srifle_DMR_01_F", "",36575 },
			{ "arifle_Katiba_F", "",13300 },
			{ "arifle_MX_SW_F", "", 33250 },
			{ "arifle_MXM_F", "", 33250 },
			{ "arifle_MXC_F", "", 29925 },
			{ "optic_MRD", "",1000 },
			{ "MMG_02_sand_F", "", 566000 },
			{ "130Rnd_338_Mag", "", 54000 },
			{ "srifle_DMR_03_F", "", 66500 },
			{ "20Rnd_762x51_Mag", "", 1000 },
			{ "srifle_LRR_F", "", 532500 },
			{ "7Rnd_408_Mag", "", 55000 },
			{ "srifle_DMR_02_sniper_F", "", 532500 },
			{ "10Rnd_338_Mag", "", 55000 },			
			{ "srifle_DMR_06_camo_F", "", 166250 },
			{ "20Rnd_762x51_Mag", "", 1000 },
			{ "srifle_DMR_05_tan_F", "", 266000 },
			{ "10Rnd_93x64_DMR_05_Mag", "", 11000 },
			{ "optic_KHS_hex", "", 3000 },
			{ "optic_AMS_snd", "", 30000 },
			{ "optic_LRPS", "", 50000 },
			{ "optic_Holosight", "",1000 },
			{ "optic_MRD", "",1000 },
			{ "optic_ACO_grn", "",10000 },
			{ "optic_Aco", "",10000 },
			{ "optic_Hamr", "",1000 },
			{ "optic_SOS", "",40000 },
			{ "optic_NVS", "",50000 },
			{ "acc_flashlight", "",1000 },
			{ "acc_pointer_IR", "",4000 },
			{ "muzzle_snds_acp", "",500 },
			{ "muzzle_snds_H", "",23000 },
			{ "muzzle_snds_B", "",23000 },
			{ "muzzle_snds_M", "",20000 },
			{ "bipod_02_F_tan", "", 3000 },
			{ "bipod_01_F_snd", "", 3000 },
			{ "bipod_03_F_oli", "", 3000 },
			{ "muzzle_snds_M", "",20000 },
			{ "muzzle_snds_H", "",23000 },
			{ "muzzle_snds_B", "",23000 },
			{ "30Rnd_9x21_Mag", "",500 },
			{ "20Rnd_556x45_UW_mag", "",250 },
			{ "30Rnd_556x45_Stanag", "",500 },
			{ "30Rnd_65x39_caseless_mag", "",500 },
			{ "30Rnd_65x39_caseless_green", "",500 },
			{ "30Rnd_556x45_Stanag_Tracer_Green","Munição MK20",500 },
			{ "100Rnd_65x39_caseless_mag", "",500 },
			{ "10Rnd_762x54_Mag", "",500 },
			{ "20Rnd_762x51_Mag", "",500 },
			{ "150Rnd_762x54_Box_Tracer", "",1000 },
			{ "200Rnd_65x39_cased_Box_Tracer", "",1000 },
			{ "11Rnd_45ACP_Mag", "",150 },
			{ "30Rnd_45ACP_Mag_SMG_01", "",175 },
			{ "SmokeShell","Granada de Fuapple Branca",2000 },
			{ "SmokeShellRed","Granada de Fuapple Vermelha",2000 },
			{ "SmokeShellYellow","Granada de Fuapple Amarela",2000 },
			{ "SmokeShellBlue","Granada de Fuapple Azul",2000 },
			{ "U_B_CombatUniform_mcam_tshirt", "",7000 },
			{ "U_B_CombatUniform_mcam", "", 5000 },
			{ "U_B_CombatUniform_mcam_vest", "", 5000 },
			{ "U_O_CombatUniform_ocamo", "", 5000 },
			{ "U_O_CombatUniform_oucamo", "", 200 },
			{ "U_I_GhillieSuit", "",5000 },
			{ "U_O_Wetsuit", "", 5000 },
			{ "U_I_G_resistanceLeader_F", "",5000 },
			{ "U_B_PilotCoveralls", "", 2000 },
			{ "U_O_PilotCoveralls", "", 5000 },
			{ "U_C_Journalist", "",5000 },
			{ "U_C_Poloshirt_redwhite", "",200 },
			{ "U_B_GhillieSuit", "",7000 },
			{ "U_B_Wetsuit", "",7000 },
			{ "V_RebreatherB", "",6000 },
			{ "V_RebreatherIR", "",4000 },
			{ "V_RebreatherIA", "",4000 },
			{ "U_NikosAgedBody", "",5000 },
			{ "U_C_Poloshirt_blue", "",400 },
			{ "U_C_Poloshirt_burgundy", "",400 },
			{ "U_C_Poloshirt_stripped", "",400 },
			{ "U_C_Poloshirt_tricolour", "", 200 },
			{ "U_C_Poloshirt_redwhite", "", 200 },
			{ "U_NikosBody", "",400 },
			{ "U_OrestesBody", "",400 },
			{ "H_HelmetB", "",400 },
			{ "H_HelmetB_camo", "",100 },
			{ "H_HelmetB_paint", "",100 },
			{ "H_HelmetB_light", "",100 },
			{ "V_BandollierB_khk", "",6000 },
			{ "V_BandollierB_oli", "",6000 },
			{ "H_HelmetB_plain_mcamo", "",100 },
			{ "H_HelmetSpecB", "",100 },
			{ "H_HelmetSpecB_paint1", "",100 },
			{ "H_HelmetSpecB_paint2", "",100 },
			{ "H_HelmetIA", "", 100 },
			{ "H_HelmetIA_net", "", 100 },
			{ "H_HelmetIA_camo", "", 100 },
			{ "H_Helmet_Kerry", "", 100 },
			{ "H_HelmetB_grass", "",100 },
			{ "H_Cap_brn_SPECOPS", "", 100 },
			{ "H_Cap_tan_specops_US", "",100 },
			{ "H_Cap_khaki_specops_UK", "", 100 },
			{ "H_Cap_blk_Raven", "", 100 },
			{ "H_MilCap_ocamo", "", 100 },
			{ "H_MilCap_oucamo", "", 100 },
			{ "H_MilCap_rucamo", "", 100 },
			{ "H_MilCap_gry", "", 100 },
			{ "H_MilCap_dgtl", "", 100 },
			{ "H_MilCap_blue", "", 100 },
			{ "H_HelmetCrew_O", "", 100 },
			{ "H_HelmetCrew_B", "", 100 },
			{ "H_PilotHelmetHeli_B", "", 100 },
			{ "H_PilotHelmetHeli_I", "", 100 },
			{ "H_Watchcap_blk", "", 100 },
			{ "V_BandollierB_oli", "",4000 },
			{ "V_BandollierB_cbr", "",4000 },
			{ "V_BandollierB_rgr", "",4000 },
			{ "V_PlateCarrier1_rgr", "", 4000 },
			{ "V_PlateCarrier2_rgr", "", 4000 },
			{ "V_PlateCarrier3_rgr", "",6000 },
			{ "V_PlateCarrierGL_rgr", "",6000 },
			{ "V_PlateCarrierSpec_rgr", "", 4000 },
			{ "V_TacVest_khk", "",6000 },
			{ "V_TacVest_camo", "",6000 },
			{ "V_TacVestIR_blk", "",6000 },
			{ "V_TacVestCamo_khk", "",6000 },
			{ "HandGrenade", "Granada", 28500 },
			{ "ATMine_Range_Mag", "", 50000 }
		};
    };
};
