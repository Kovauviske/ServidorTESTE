/*
	File: fn_clothing_reb.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration file for Reb shop.
*/
private["_filter"];
_filter = [_this,0,0,[0]] call BIS_fnc_param;
//Classname, Custom Display name (use nil for Cfg->DisplayName, price

//Shop Title Name
ctrlSetText[3103,"Mohammed's Jihadi Shop"];

switch (_filter) do
{
	//Uniforms
	case 0:
	{
		[
			//shirt
			["U_I_G_Story_Protagonist_F",nil,10000],
			["U_I_G_resistanceLeader_F",nil,10000],
			["U_IG_Guerilla1_1",nil,10000],
			["U_B_CTRG_2",nil,10000],
			["U_B_CombatUniform_mcam_tshirt",nil,10000],
			["U_B_survival_uniform",nil,13500],
			//combat uniform
			["U_B_CombatUniform_mcam_vest",nil,20000],
			["U_B_CombatUniform_mcam",nil,20000],
			["U_I_CombatUniform_tshirt",nil,20000],
			["U_I_CombatUniform",nil,20000],
			["U_B_CTRG_3",nil,20000],
			["U_B_CTRG_1",nil,20000],
			["U_O_SpecopsUniform_ocamo",nil,20000],
			["U_O_CombatUniform_oucamo",nil,20000],
			["U_I_OfficerUniform",nil,30000],
			["U_O_OfficerUniform_ocamo",nil,30000],
			["U_IG_leader",nil,30000],
			//Pilot
			["U_B_HeliPilotCoveralls",nil,40000],
			["U_I_HeliPilotCoveralls",nil,40000],
			["U_B_PilotCoveralls",nil,40000],
			//Ghillie
			["U_O_GhillieSuit",nil,50000],
			["U_B_GhillieSuit",nil,50000],
			["U_I_GhillieSuit",nil,50000],
			["U_I_FullGhillie_ard",nil,50000],
			["U_O_FullGhillie_ard",nil,50000],
			["U_B_FullGhillie_ard",nil,50000],
			["U_I_FullGhillie_lsh",nil,50000],
			["U_O_FullGhillie_lsh",nil,50000],
			["U_B_FullGhillie_lsh",nil,50000],
			["U_I_FullGhillie_sard",nil,50000],
			["U_O_FullGhillie_sard",nil,50000],
			["U_B_FullGhillie_sard",nil,50000]
			
		];
	};
	
	//Hats
	case 1:
	{
		[
			["H_HelmetSpecO_ocamo","Casque Assassin",1250],
			["H_Bandanna_khk","Bandanna Khaki",500],
			["H_HelmetB_black","Casque Noir",850],
			["H_HelmetIA_camo","Casque MICH",1000],
			["H_PilotHelmetFighter_B","Casque Pilote de Chasse",1250],
			["H_PilotHelmetHeli_B","Casque Pilote Helico",1250],
			["H_Shemag_khk","Shemag Khaki",500],
			["H_Shemag_tan","Shemag Tan",500],
			["H_ShemagOpen_tan",nil,850],
			["H_Shemag_olive",nil,850],
			["H_ShemagOpen_khk",nil,800],
			["H_HelmetO_ocamo",nil,2500],
			["H_MilCap_oucamo",nil,1200],
			["H_CrewHelmetHeli_I","Masque A Gaz",32000],
			["H_Bandanna_camo",nil,650]
		];
	};
	
	//Glasses
	case 2:
	{
		[
			["G_Bandanna_aviator",nil,55],
			["G_Bandanna_beast",nil,55],
			["G_Bandanna_blk",nil,55],
			["G_Bandanna_khk",nil,55],
			["G_Bandanna_oli",nil,55],
			["G_Bandanna_shades",nil,55],
			["G_Bandanna_sport",nil,55],
			["G_Bandanna_tan",nil,55],
			["G_Shades_Black","Lunettes fumées noires",25],
			["G_Shades_Blue","Lunettes fumées bleues",20],
			["G_Sport_Blackred","Lunettes fumées volcan",20],
			["G_Sport_Checkered","Lunettes fumées à damiers",20],
			["G_Sport_Blackyellow","Lunettes fumées noir/jaune",20],
			["G_Sport_BlackWhite","Lunettes fumées noir/blanc",20],
			["G_Squares","Lunettes fumées carrées",10],
			["G_Aviator","Lunettes d'aviateur",100],
			["G_Lowprofile","Lunettes tactiques",30],
			["G_Combat","Lunettes de combat",55]
		];
	};
	
	//Vest
	case 3:
	{
		[
			["V_BandollierB_blk","Bandouliere Noire",4500],
			["V_BandollierB_khk","Bandouliere Khaki",4500],
			["V_I_G_resistanceLeader_F","Veste Tactique",7000],
			//20/100/1
			["V_Chestrig_blk",nil,7500],
			["V_Chestrig_khk",nil,7500],
			["V_Chestrig_oli",nil,7500],
			["V_Chestrig_rgr",nil,7500],
			//40/120/2
			["V_HarnessO_brn",nil,10000],
			["V_HarnessO_gry",nil,10000],
			["V_HarnessOGL_gry",nil,10000],
			["V_HarnessOGL_brn","Harnais Grenadier",6500],
			["V_HarnessOSpec_brn",nil,10000],
			["V_HarnessOSpec_gry",nil,10000],
			//60/100/3
			["V_TacVest_blk",nil,12500],
			["V_TacVest_brn",nil,12500],
			["V_TacVest_camo",nil,12500],
			["V_TacVest_khk",nil,12500],
			["V_TacVest_oli",nil,12500],
			["V_TacVestCamo_khk",nil,12500],
			["V_TacVestIR_blk",nil,12500],
			//80/100/4
			["V_PlateCarrier1_blk",nil,15000],
			["V_PlateCarrier1_rgr",nil,15000],
			["V_PlateCarrier2_rgr",nil,15000],
			["V_PlateCarrierIA1_dgtl",nil,15000]
		];
	};
	
	//Backpacks
	case 4:
	{
		[
			["B_AssaultPack_cbr","Sac d'assault",2500],
			["B_Kitbag_mcamo","Sac camouflage",4500],
			["B_TacticalPack_oli","Sac tactique olive",3500],
			["B_FieldPack_ocamo","Sac compact",3000],
			["B_Bergen_sgg","Sac tactique beige",4500],
			["B_Kitbag_cbr","Sac beige",4500],
			["B_Carryall_oli","Gros sac olive",5000],
			["B_Carryall_khk","Gros sac khaki",5000]
		];
	};
};