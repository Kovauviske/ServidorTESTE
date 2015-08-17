/*
        ARRAY FORMAT:
                0: STRING (Classname)
                1: STRING (Display Name, leave as "" for default)
                2: SCALAR (Price)
                4: ARRAY (This is for limiting items to certain things)
                        0: Variable to read from
                        1: Variable Value Type
                        2: What to compare to
*/
class Clothing {
        class bruce {
                title = "STR_Shops_C_Bruce";
                license = "";
                side = "civ";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_C_Poloshirt_blue", "Polo Azul", 2000, { "", "", -1 } },
                        { "U_C_Poloshirt_burgundy", "Polo Vinho", 2000 , { "", "", -1 } },
                        { "U_C_Poloshirt_redwhite", "Polo Vermelha/Branca", 2000, { "", "", -1 } },
                        { "U_C_Poloshirt_salmon", "Polo Salmon", 2000, { "", "", -1 } },
                        { "U_C_Poloshirt_stripped", "Polo Listrada", 2000, { "", "", -1 } },
                        { "U_C_Poloshirt_tricolour", "Polo Listrada", 2000, { "", "", -1 } },
                        { "U_C_Poor_2", "Camiseta Azul", 3000, { "", "", -1 } },
                        { "U_IG_Guerilla3_1", "Camisa e Jaqueta", 3000, { "", "", -1 } },
                        { "U_IG_Guerilla2_3", "Camisa Preta", 3000, { "", "", -1 } },
                        { "U_C_HunterBody_grn", "Caçador de Recompensas", 3000, { "", "", -1 } }
                };
                
                headgear[] = {
                        { "NONE", "Remove Hat", 0, { "", "", -1 } },
                        { "H_Bandanna_camo", "Camo Bandanna", 120, { "", "", -1 } },
                        { "H_Bandanna_surfer", "Surfer Bandanna", 130, { "", "", -1 } },
                        { "H_Bandanna_gry", "Grey Bandanna", 150, { "", "", -1 } },
                        { "H_Bandanna_cbr", "", 165, { "", "", -1 } },
                        { "H_Bandanna_surfer", "", 135, { "", "", -1 } },
                        { "H_Bandanna_khk", "Khaki Bandanna", 145, { "", "", -1 } },
                        { "H_Bandanna_sgg", "Sage Bandanna", 160, { "", "", -1 } },
                        { "H_StrawHat", "Straw Fedora", 225, { "", "", -1 } },
                        { "H_BandMask_blk", "Hat & Bandanna", 300, { "", "", -1 } },
                        { "H_Booniehat_tan", "", 425, { "", "", -1 } },
                        { "H_Hat_blue", "", 310, { "", "", -1 } },
                        { "H_Hat_brown", "", 276, { "", "", -1 } },
                        { "H_Hat_checker", "", 340, { "", "", -1 } },
                        { "H_Hat_grey", "", 280, { "", "", -1 } },
                        { "H_Hat_tan", "", 265, { "", "", -1 } },
                        { "H_Cap_blu", "", 150, { "", "", -1 } },
                        { "H_Cap_grn", "", 150, { "", "", -1 } },
                        { "H_Cap_grn_BI", "", 150, { "", "", -1 } },
                        { "H_Cap_oli", "", 150, { "", "", -1 } },
                        { "H_Cap_red", "", 150, { "", "", -1 } },
                        { "H_Cap_tan", "", 150, { "", "", -1 } }
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
                        { "G_Shades_Black", "", 25, { "", "", -1 } },
                        { "G_Shades_Blue", "", 20, { "", "", -1 } },
                        { "G_Sport_Blackred", "", 20, { "", "", -1 } },
                        { "G_Sport_Checkered", "", 20, { "", "", -1 } },
                        { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
                        { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
                        { "G_Squares", "", 10, { "", "", -1 } },
                        { "G_Aviator", "", 100, { "", "", -1 } },
                        { "G_Lady_Mirror", "", 150, { "", "", -1 } },
                        { "G_Lady_Dark", "", 150, { "", "", -1 } },
                        { "G_Lady_Blue", "", 150, { "", "", -1 } },
                        { "G_Lowprofile", "", 30, { "", "", -1 } },
                        { "G_Combat", "", 55, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_Press_F", "", 5000, { "", "", -1 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
                        { "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
                        { "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
                        { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
                        { "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
                        { "B_Carryall_khk", "", 5000, { "", "", -1 } }
                };
        };        
        
        class brasforte_roupas {
                title = "STR_Shops_brasforte_roupas";
        license = "";
        side = "adac";

        uniforms[] = {
            { "NONE", "Remove Uniform", 0, { "", "", -1 } },
            { "U_B_HeliPilotCoveralls", "Uniforme da Brasforte", 5000, { "", "", -1 } }
        };
                
        headgear[] = {
            { "NONE", "Remove Hat", 0, { "", "", -1 } },
            { "H_HelmetB_paint", "", 225, { "", "", -1 } },
            { "H_HelmetB_light", "", 425, { "", "", -1 } },
            { "H_MilCap_dgtl", "", 310, { "", "", -1 } },
            { "H_BandMask_reaper", "", 276, { "", "", -1 } },
            { "H_HelmetSpecO_blk", "", 340, { "", "", -1 } },
            { "H_Beret_blk", "", 280, { "", "", -1 } },
                        { "H_Watchcap_blk", "", 265, { "", "", -1 } },
        };

        goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
            { "G_Shades_Black", "", 25, { "", "", -1 } },
            { "G_Shades_Blue", "", 20, { "", "", -1 } },
            { "G_Sport_Blackred", "", 20, { "", "", -1 } },
            { "G_Sport_Checkered", "", 20, { "", "", -1 } },
            { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
            { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
            { "G_Squares", "", 10, { "", "", -1 } },
                        { "G_Aviator", "", 100, { "", "", -1 } },
                        { "G_Lady_Mirror", "", 150, { "", "", -1 } },
                        { "G_Lady_Dark", "", 150, { "", "", -1 } },
                        { "G_Lady_Blue", "", 150, { "", "", -1 } },
                        { "G_Lowprofile", "", 30, { "", "", -1 } },
                        { "G_Combat", "", 55, { "", "", -1 } }
        };

        vests[] = {
            { "NONE", "Remove Vest", 0, { "", "", -1 } },
            { "V_PlateCarrierIAGL_dgtl", "", 5000, { "", "", -1 } },
            { "V_TacVest_khk", "", 5000, { "", "", -1 } },
            { "V_PlateCarrierGL_mtp", "", 6000, { "", "", -1 } },
            { "V_PlateCarrierSpec_mtp", "", 8000, { "", "", -1 } },
            { "V_PlateCarrierIAGL_oli", "", 10000, { "", "", -1 } },
            { "V_PlateCarrierIA1_dgtl", "", 5000, { "", "", -1 } }
                        
        };

        backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
            { "B_Carryall_cbr", "", 4500, { "", "", -1 } },
            { "B_Carryall_oli", "", 4500, { "", "", -1 } },
            { "B_Carryall_khk", "", 4500, { "", "", -1 } }
        };
    };                
        
        class cop {
                title = "STR_Shops_C_Police";
                license = "";
                side = "cop";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_O_Wetsuit", "Unif. de Mergulho", 2550, { "life_coplevel", "SCALAR", -1 } },
                        { "U_RangeMaster", "Unifor. de Recruta", 25, { "life_coplevel", "SCALAR", 1 } },
                        { "U_RangeMaster", "Unifor. de Soldado", 350, { "life_coplevel", "SCALAR", 2 } },
                        { "U_RangeMaster", "Unifor. de Sargento", 550, { "life_coplevel", "SCALAR", 3 } },
                        { "U_RangeMaster", "Unifor. de Tenente", 750, { "life_coplevel", "SCALAR", 4 } },
                        { "U_RangeMaster", "Unifor. de Capitão", 1250, { "life_coplevel", "SCALAR", 5 } },
                        { "U_B_SpecopsUniform_sgg", "Unifor. de Major", 2550, { "life_coplevel", "SCALAR", 6 } },
                        { "U_B_SpecopsUniform_sgg", "Unifor. de Coronel", 3450, { "life_coplevel", "SCALAR", 7 } }
                };

                headgear[] = {
                        { "NONE", "Remove Hat", 0, { "", "", -1 } },
                        { "H_HelmetB_plain_mcamo", "", 75, { "life_coplevel", "SCALAR", 1 } },
                        { "H_Beret_blk_POLICE", "BOINA ", 120, { "life_coplevel", "SCALAR", 1 } },
                        { "H_Beret_02", "BOINA MAJOR ", 100, { "life_coplevel", "SCALAR", 5 } },
                        { "H_CrewHelmetHeli_B", "CAPACETE ", 100, { "life_coplevel", "SCALAR", 7 } },
                        { "H_Beret_Colonel", "BOINA CORONEL", 100, { "life_coplevel", "SCALAR", 7 } }                                
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
                        { "G_Balaclava_blk", "", 25, { "", "", -1 } },
                        { "G_Shades_Black", "", 25, { "", "", -1 } },
                        { "G_Shades_Blue", "", 20, { "", "", -1 } },
                        { "G_Sport_Blackred", "", 20, { "", "", -1 } },
                        { "G_Sport_Checkered", "", 20, { "", "", -1 } },
                        { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
                        { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
                        { "G_Squares", "", 10, { "", "", -1 } },
                        { "G_Aviator", "", 100, { "", "", -1 } },
                        { "G_Lady_Mirror", "", 150, { "", "", -1 } },
                        { "G_Lady_Dark", "", 150, { "", "", -1 } },
                        { "G_Lady_Blue", "", 150, { "", "", -1 } },
                        { "G_Lowprofile", "", 30, { "", "", -1 } },
                        { "G_Diving", "", 30, { "", "", -1 } },
                        { "G_Diving", "", 30, { "", "", -1 } },
                        { "G_Combat", "", 55, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } },
                        { "V_TacVest_blk_POLICE", "", 800, { "", "", -1 } },
                        { "V_Chestrig_blk", "", 800, { "", "", -1 } },
                        { "V_PlateCarrier1_blk", "", 800, { "", "", -1 } },
                        { "V_PlateCarrierGL_blk", "", 6000, { "", "", -1 } },
                        { "V_PlateCarrierSpec_blk", "", 5000, { "", "", -1 } },
                        { "V_PlateCarrierIAGL_oli", "", 2000, { "", "", -1 } },
                        { "U_VirtualMan_F", "", 1500, { "life_coplevel", "SCALAR", 3 } },
                        { "V_RebreatherB", "", 800, { "", "", -1 } },
                        { "V_PlateCarrier1_blk", "", 800, { "", "", -1 } },
                        { "V_PlateCarrier1_blk", "", 800, { "", "", -1 } },
                        { "V_PlateCarrierIA2_dgtl", "", 1500, { "life_coplevel", "SCALAR", 3 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
                        { "B_Carryall_cbr", "", 4500, { "", "", -1 } },
                        { "B_Carryall_oli", "", 4500, { "", "", -1 } },
                        { "B_Carryall_khk", "Mochila Preta", 4500, { "", "", -1 } },
                        { "B_UAV_01_backpack_F", "Drone", 4500, { "life_coplevel", "SCALAR", 7 } },
                        { "B_AssaultPack_blk", "", 5000, { "life_coplevel", "SCALAR", 3 } }
                };
        };        
        
        class dive {
                title = "STR_Shops_C_Diving";
                license = "dive";
                side = "civ";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_B_Wetsuit", "", 2000, { "", "", -1 } }
                };

                headgear[] = {
                        { "NONE", "Remove Hat", 0, { "", "", -1 } }
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
                        { "G_Diving", "", 500, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } },
                        { "V_RebreatherB", "", 5000, { "", "", -1 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } }
                };
        };

        class reb {
                title = "STR_Shops_C_Rebel";
                license = "rebel";
                side = "civ";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_IG_Guerilla1_1", "", 10000, {"", "", -1} },
                        { "U_I_G_Story_Protagonist_F", "", 15000, { "", "", -1 } },
                        { "U_I_G_resistanceLeader_F", "", 25000, { "", "", -1 } },
                        { "U_O_SpecopsUniform_ocamo", "", 40000, { "", "", -1 } },
                        { "U_O_PilotCoveralls", "", 50000, { "", "", -1 } },
                        { "U_IG_leader", "Guerilla Leader", 50000, { "", "", -1 } },
                        { "U_O_GhillieSuit", "", 70000, { "", "", -1 } },
                        { "U_B_Wetsuit", "", 12000, { "", "", -1 } }
                };

                headgear[] = {
                        {"NONE", "Remove Hat", 0, { "", "", -1 } },
                        { "H_ShemagOpen_tan", "", 3000, { "", "", -1 } },
                        { "H_Shemag_olive", "", 4000, { "", "", -1 } },
                        { "H_ShemagOpen_khk", "", 3500, { "", "", -1 } },
                        { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
                        { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
                        { "H_Bandanna_camo", "", 2000, { "", "", -1 } }
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
                        { "G_Shades_Black", "", 100, { "", "", -1 } },
                        { "G_Shades_Blue", "", 150, { "", "", -1 } },
                        { "G_Sport_Blackred", "", 200, { "", "", -1 } },
                        { "G_Sport_Checkered", "", 250, { "", "", -1 } },
                        { "G_Sport_Blackyellow", "", 300, { "", "", -1 } },
                        { "G_Sport_BlackWhite", "", 350, { "", "", -1 } },
                        { "G_Squares", "", 90, { "", "", -1 } },
                        { "G_Lowprofile", "", 300, { "", "", -1 } },
                        { "G_Combat", "", 550, { "", "", -1 } },
                        { "G_Diving", "", 3500, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } },
                        { "V_TacVest_khk", "", 12000, { "", "", -1 } },
                        { "V_PlateCarrierIA2_dgtl", "", 17000, { "", "", -1 } },
                        { "V_PlateCarrierH_CTRG", "", 15000, { "", "", -1 } },
                        { "V_Chestrig_blk", "", 20000, { "", "", -1 } },
                        { "V_PlateCarrier1_blk", "", 20000, { "", "", -1 } },
                        { "V_PlateCarrierGL_blk", "", 20000, { "", "", -1 } },
                        { "V_PlateCarrierSpec_blk", "", 20000, { "", "", -1 } },
                        { "V_RebreatherB", "", 15000, { "", "", -1 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
                        { "B_AssaultPack_cbr", "", 2500, { "", "", -1 } },
                        { "B_TacticalPack_oli", "", 3500, { "", "", -1 } },
                        { "B_FieldPack_ocamo", "", 3000, { "", "", -1 } },
                        { "B_Kitbag_cbr", "", 4500, { "", "", -1 } },
                        { "B_Carryall_khk", "", 5000, { "", "", -1 } }
                };
        };        
        
        class donator_civ {
                title = "STR_Shops_C_Donator_Civ";
                license = "";
                side = "civ";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_C_Poloshirt_blue", "Polo Azul", 700, { "", "", -1 } },
                        { "U_C_Poloshirt_burgundy", "Polo Vinho", 700 , { "", "", -1 } },
                        { "U_C_Poloshirt_redwhite", "Polo Vermelha/Branca", 700, { "", "", -1 } },
                        { "U_C_Poloshirt_salmon", "Polo Salmon", 700, { "", "", -1 } },
                        { "U_C_Poloshirt_stripped", "Polo Listrada", 700, { "", "", -1 } },
                        { "U_C_Poloshirt_tricolour", "Polo Listrada", 700, { "", "", -1 } },
                        { "U_C_Poor_2", "Camiseta Azul", 700, { "", "", -1 } },
                        { "U_IG_Guerilla2_2", "Camisa Xadrez Verde", 700, { "", "", -1 } },
                        { "U_IG_Guerilla3_1", "Camisa e Jaqueta", 700, { "", "", -1 } },
                        { "U_IG_Guerilla2_3", "Camisa Preta", 700, { "", "", -1 } },
                        { "U_C_HunterBody_grn", "Caçador de Recompensas", 3000, { "", "", -1 } },
                        { "U_C_WorkerCoveralls", "Mecânico", 3000, { "", "", -1 } },
                        { "U_OrestesBody", "Surfista", 2000, { "", "", -1 } },
                        { "U_NikosAgedBody", "Empresário", 5000, { "", "", -1 } }
                };

                headgear[] = {
                        { "NONE", "Remove Hat", 0, { "", "", -1 } },
                        { "H_ShemagOpen_tan", "", 850, { "", "", -1 } },
                        { "H_Shemag_olive", "", 850, { "", "", -1 } },
                        { "H_ShemagOpen_khk", "", 800, { "", "", -1 } },
                        { "H_HelmetO_ocamo", "", 2500, { "", "", -1 } },
                        { "H_MilCap_oucamo", "", 1200, { "", "", -1 } },
                        { "H_Bandanna_camo", "", 650, { "", "", -1 } }
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
                        { "G_Shades_Black", "", 25, { "", "", -1 } },
                        { "G_Shades_Blue", "", 20, { "", "", -1 } },
                        { "G_Sport_Blackred", "", 20, { "", "", -1 } },
                        { "G_Sport_Checkered", "", 20, { "", "", -1 } },
                        { "G_Sport_Blackyellow", "", 20, { "", "", -1 } },
                        { "G_Sport_BlackWhite", "", 20, { "", "", -1 } },
                        { "G_Squares", "", 10, { "", "", -1 } },
                        { "G_Lowprofile", "", 30, { "", "", -1 } },
                        { "G_Combat", "", 55, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } },
                        { "V_Press_F", "", 5000, { "", "", -1 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
                        { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
                        { "B_Kitbag_mcamo", "", 2000, { "", "", -1 } },
                        { "B_TacticalPack_oli", "", 2000, { "", "", -1 } },
                        { "B_FieldPack_ocamo", "", 2000, { "", "", -1 } },
                        { "B_Bergen_sgg", "", 2000, { "", "", -1 } },
                        { "B_Kitbag_cbr", "", 2000, { "", "", -1 } },
                        { "B_Carryall_oli", "", 2000, { "", "", -1 } },
                        { "B_Carryall_khk", "", 2000, { "", "", -1 } },
                    { "B_Carryall_cbr", "", 2000, { "", "", -1 } }
                };
        };        
        
        class donator_reb {
                title = "STR_Shops_C_Donator_Reb";
                license = "";
                side = "civ";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_IG_Guerilla1_1", "", 5000, {"", "", -1 } },
                        { "U_I_G_Story_Protagonist_F", "", 10000, { "", "", -1 } },
                        { "U_I_G_resistanceLeader_F", "", 15000, { "", "", -1 } },
                        { "U_O_SpecopsUniform_ocamo", "", 20000, { "", "", -1 } },
                        { "U_O_PilotCoveralls", "", 35000, { "", "", -1 } },
                        { "U_IG_leader", "Guerilla Leader", 35000, { "", "", -1 } },
                        { "U_O_GhillieSuit", "", 50000, { "", "", -1 } },
                        { "U_O_FullGhillie_sard", "", 50000, { "", "", -1 } },
                        { "U_O_FullGhillie_ard", "", 50000, { "", "", -1 } },
                        { "U_O_FullGhillie_lsh", "", 50000, { "", "", -1 } },                        
                        { "U_B_Wetsuit", "", 10000, { "", "", -1 } }
                };

                headgear[] = {
                        { "NONE", "Remove Hat", 0, { "", "", -1 } },
                        { "H_ShemagOpen_tan", "", 2100, { "", "", -1 } },
                        { "H_Shemag_olive", "", 2800, { "", "", -1 } },
                        { "H_ShemagOpen_khk", "", 2450, { "", "", -1 } },
                        { "H_HelmetO_ocamo", "", 1750, { "", "", -1 } },
                        { "H_MilCap_oucamo", "", 850, { "", "", -1 } },
                        { "H_Bandanna_camo", "", 1400, { "", "", -1 } }
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } },
                        { "G_Shades_Black", "", 70, { "", "", -1 } },
                        { "G_Shades_Blue", "", 105, { "", "", -1 } },
                        { "G_Sport_Blackred", "", 140, { "", "", -1 } },
                        { "G_Sport_Checkered", "", 175, { "", "", -1 } },
                        { "G_Sport_Blackyellow", "", 210, { "", "", -1 } },
                        { "G_Sport_BlackWhite", "", 245, { "", "", -1 } },
                        { "G_Squares", "", 63, { "", "", -1 } },
                        { "G_Lowprofile", "", 210, { "", "", -1 } },
                        { "G_Combat", "", 385, { "", "", -1 } },
                        { "G_Diving", "", 3200, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } },
                        { "V_TacVest_khk", "", 8400, { "", "", -1 } },
                        { "V_PlateCarrierIA2_dgtl", "", 19000, { "", "", -1 } },
                        { "V_PlateCarrierH_CTRG", "", 10500, { "", "", -1 } },
                          { "V_Chestrig_blk", "", 10000, { "", "", -1 } },
                        { "V_PlateCarrier1_blk", "", 10000, { "", "", -1 } },
                        { "V_PlateCarrierGL_blk", "", 10000, { "", "", -1 } },
                        { "V_PlateCarrierSpec_blk", "", 10000, { "", "", -1 } },
                        { "V_RebreatherB", "", 12000, { "", "", -1 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } },
                        { "B_AssaultPack_cbr", "", 2000, { "", "", -1 } },
                        { "B_Kitbag_mcamo", "", 2000, { "", "", -1 } },
                        { "B_TacticalPack_oli", "", 2000, { "", "", -1 } },
                        { "B_FieldPack_ocamo", "", 2000, { "", "", -1 } },
                        { "B_Bergen_sgg", "", 2000, { "", "", -1 } },
                        { "B_Kitbag_cbr", "", 2000, { "", "", -1 } },
                        { "B_Carryall_oli", "", 2000, { "", "", -1 } },
                        { "B_Carryall_khk", "", 2000, { "", "", -1 } },
                    { "B_Carryall_cbr", "", 2000, { "", "", -1 } }
                };
        };        
        
        class kart {
                title = "STR_Shops_C_Kart";
                license = "";
                side = "civ";

                uniforms[] = {
                        { "NONE", "Remove Uniform", 0, { "", "", -1 } },
                        { "U_C_Driver_1_black", "", 1500, { "", "", -1 } },
                        { "U_C_Driver_1_blue", "", 1500, { "", "", -1 } },
                        { "U_C_Driver_1_red", "", 1500, { "", "", -1 } },
                        { "U_C_Driver_1_orange", "", 1500, { "", "", -1 } },
                        { "U_C_Driver_1_green", "", 1500, { "", "", -1 } },
                        { "U_C_Driver_1_white", "", 1500, { "", "", -1 } },
                        { "U_C_Driver_1_yellow", "", 1500, { "", "", -1 } },
                        { "U_C_Driver_2", "", 3500, { "", "", -1 } },
                        { "U_C_Driver_1", "", 3600, { "", "", -1 } },
                        { "U_C_Driver_3", "", 3700, { "", "", -1 } },
                        { "U_C_Driver_4", "", 3700, { "", "", -1 } }
                };

                headgear[] = {
                        { "NONE", "Remove Hat", 0, { "", "", -1 } },
                        { "H_RacingHelmet_1_black_F", "", 1000, { "", "", -1 } },
                        { "H_RacingHelmet_1_red_F", "", 1000, { "", "", -1 } },
                        { "H_RacingHelmet_1_white_F", "", 1000, { "", "", -1 } },
                        { "H_RacingHelmet_1_blue_F", "", 1000, { "", "", -1 } },
                        { "H_RacingHelmet_1_yellow_F", "", 1000, { "", "", -1 } },
                        { "H_RacingHelmet_1_green_F", "", 1000, { "", "", -1 } },
                        { "H_RacingHelmet_1_F", "", 2500, { "", "", -1 } },
                        { "H_RacingHelmet_2_F", "", 2500, { "", "", -1 } },
                        { "H_RacingHelmet_3_F", "", 2500, { "", "", -1 } },
                        { "H_RacingHelmet_4_F", "", 2500, { "", "", -1 } }
                };

                goggles[] = {
                        { "NONE", "Remove Glasses", 0, { "", "", -1 } }
                };

                vests[] = {
                        { "NONE", "Remove Vest", 0, { "", "", -1 } }
                };

                backpacks[] = {
                        { "NONE", "Remove Backpack", 0, { "", "", -1 } }
                };
        };
};





