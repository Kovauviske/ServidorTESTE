#include <macro.h>
/*
	File: fn_weaponShopCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration file for the weapon shops.
	
	Return:
	String: Close the menu
	Array: 
	[Shop Name,
	[ //Array of items to add to the store
		[classname,Custom Name (set nil for default),price]
	]]
*/
private["_shop"];
_shop = [_this,0,"",[""]] call BIS_fnc_param;
if(_shop == "") exitWith {closeDialog 0}; //Bad shop type passed.

switch(_shop) do
{
	case "med_basic":
	{
		switch (true) do 
		{
			case (playerSide != independent): {"You are not an EMS Medic"};
			default {
				["Hospital EMS Shop",
					[
						["ItemGPS",nil,100],
						["ItemRadio","Iphone avec Fido",250],
						["ItemRadio","Iphone avec Rogers",250],
						["ItemRadio","Iphone avec Bell",250],
						["ItemRadio","Iphone avec Telus",250],
						["ItemRadio","Iphone avec Koodo",250],
						["ItemRadio","Iphone avec Videotron",250],
						["Rangefinder",nil,150],
						["ToolKit",nil,250],
						["FirstAidKit",nil,150],
						["Medikit",nil,500],
						["NVGoggles",nil,1200]
					]
				];
			};
		};
	};

	case "cop_equipment":
	{
		switch(true) do
		{
			case (playerside !=west):{"Vous n'êtes pas policier!"};
			case (__GETC__(life_coplevel) == 0):{"Vous n'êtes pas policier!"};
			
			default
			{
				["Équipement Policier",
					[
						["ItemRadio","Iphone avec Fido",250],
						["ItemRadio","Iphone avec Rogers",250],
						["ItemRadio","Iphone avec Bell",250],
						["ItemRadio","Iphone avec Telus",250],
						["ItemRadio","Iphone avec Koodo",250],
						["ItemRadio","Iphone avec Videotron",250],
						["NVGoggles",nil,2000],
						["ToolKit",nil,500],
						["Medikit",nil,1000],
						["ItemGPS",nil,100],
						["ItemMap",nil,50],
						["ItemCompass",nil,100],	
						["Chemlight_red",nil,300],
						["Chemlight_yellow",nil,300],
						["Chemlight_green",nil,300],
						["Chemlight_blue",nil,300]
					]
				];
			};
		};
	
	};
	
	case "cop_weapon":
	{
		switch(true) do
		{
			case (playerSide != west): {"Vous n'êtes pas policier!"};
			case (__GETC__(life_coplevel) == 0): {"Vous n'êtes pas sur la liste blanche du service de police"};
			
			default
			{
				_ret = [];
				_ret pushBack ["hgun_P07_snds_F","tazer silencieux",2000];					//Stun Pistol
				_ret pushBack ["30Rnd_9x21_Mag","Tazer pistol magazine",150];
				_ret pushBack ["arifle_sdar_F","SDAR Létal",5000];
				_ret pushBack ["20Rnd_556x45_UW_mag","Magazine de SDAR",150];
				_ret pushBack ["SMG_01_F",nil,20000];								//Vermin SMG .45 ACP
				_ret pushBack ["30Rnd_45ACP_Mag_SMG_01","Chargeur Vermin",150];	
				_ret pushBack ["SMG_02_F",nil,17000];
				_ret pushBack ["30Rnd_9x21_Mag","Chargeur Sting",150];					
				
				if(__GETC__(life_coplevel) > 1) then //Agent
				{
					_ret pushBack ["hgun_PDW2000_F",nil,17000];							//PDW2000 9 mm
					_ret pushBack ["30Rnd_9x21_Mag","Chargeur PDW2000",150];							//MAG// 9 mm
					_ret pushBack ["arifle_MX_RCO_pointer_snds_F",nil,45000];//MX full equip
					_ret pushBack ["30Rnd_65x39_caseless_mag","Chargeur MX",150];
					_ret pushBack ["arifle_MXC_Black_F",nil,35000];
					_ret pushBack ["30Rnd_65x39_caseless_mag",nil,150];
				};
				
				if(__GETC__(life_coplevel) > 2) then //Sergent
				{
					//5.56mm
					_ret pushBack ["arifle_MXM_Black_F",nil,45000];
					_ret pushBack ["30Rnd_65x39_caseless_mag",nil,150];
					_ret pushBack ["arifle_TRG20_ACO_Flash_F",nil,25000];//TRG-20 5.56 mm
					_ret pushBack ["arifle_TRG21_ARCO_pointer_F",nil,40000];//TRG-21 EGLM 5.56 mm
					_ret pushBack ["30Rnd_556x45_Stanag","Chargeur TRG20",150];//TRG-21 5.56 mm
					//.
					_ret pushback ["Laserdesignator_03",nil,350];
					if(__GETC__(life_coplevel) > 3) then //Lieutenant
					{
						_ret pushBack ["arifle_Mk20_MRCO_plain_F",nil,40000];
						_ret pushBack ["30Rnd_556x45_Stanag",nil,150];
						_ret pushBack ["srifle_DMR_02_F",nil,57000];
						_ret pushBack ["10Rnd_338_Mag",nil,150];
						_ret pushBack ["srifle_DMR_06_camo_F",nil,30000];
						_ret pushBack ["20Rnd_762x51_Mag",nil,150];
						
					};
				};
				
				if(__GETC__(life_coplevel) > 4) then //Capitaine
				{
					_ret pushBack ["arifle_Katiba_ARCO_pointer_snds_F",nil,45000];
					_ret pushBack ["30Rnd_65x39_caseless_green",nil,150];
					_ret pushBack ["arifle_MX_SW_Black_Hamr_pointer_F",nil,60000];
					_ret pushBack ["100Rnd_65x39_caseless_mag",nil,150];
					_ret pushBack ["srifle_DMR_05_blk_F",nil,80000];
					_ret pushBack ["10Rnd_93x64_DMR_05_Mag",nil,150];
					_ret pushBack ["srifle_EBR_ARCO_pointer_snds_F",nil,57000];
					_ret pushBack ["20Rnd_762x51_Mag",nil,150];
					_ret pushBack ["srifle_LRR_F",nil,48000];
					_ret pushBack ["7Rnd_408_Mag",nil,50];
					_ret pushBack ["MMG_01_tan_F",nil,60000];
					_ret pushBack ["150Rnd_93x64_Mag",nil,150];
				};
				
				if(__GETC__(life_coplevel) > 5) then //Commandant
				{
					_ret pushBack ["LMG_Zafir_pointer_F",nil,50000];
					_ret pushBack ["150Rnd_762x54_Box",nil,150];
					_ret pushBack ["srifle_GM6_camo_F",nil,55000];
					_ret pushBack ["5Rnd_127x108_Mag",nil,150];
					_ret pushBack ["srifle_DMR_04_F",nil,60000];
					_ret pushBack ["10Rnd_127x54_Mag",nil,150];
				};
				if(__GETC__(life_coplevel) > 6) then //Général
				{
					_ret pushBack ["srifle_DMR_03_F",nil,50000];
					_ret pushBack ["20Rnd_762x51_Mag",nil,150];
					_ret pushBack ["MMG_02_black_RCO_BI_F",nil,40000];
					_ret pushBack ["130Rnd_338_Mag",nil,150];
					_ret pushBack ["launch_NLAW_F",nil,400000];
					_ret pushBack ["NLAW_F",nil,150000];
				};
				
			//Optics/////
			
				_ret pushBack ["optic_Aco",nil,500];
				_ret pushBack ["optic_ACO_grn",nil,500];
				
				if(__GETC__(life_coplevel) > 1) then //Agent
				{
					_ret pushBack ["optic_Holosight",nil,1000];
					_ret pushBack ["optic_MRCO",nil,2000];
					_ret pushBack ["optic_SOS",nil,7500];
					_ret pushBack ["optic_Arco",nil,750];
					_ret pushBack ["optic_DMS",nil,4500];
					_ret pushBack ["optic_NVS",nil,7500];
					_ret pushBack ["optic_AMS_snd",nil,7500];
					_ret pushBack ["optic_AMS",nil,7500];
					_ret pushBack ["optic_AMS_khk",nil,7500];
					_ret pushBack ["optic_KHS_blk",nil,7500];
					_ret pushBack ["optic_KHS_hex",nil,7500];
					_ret pushBack ["optic_KHS_old",nil,7500];
					_ret pushBack ["optic_KHS_tan",nil,7500];
					_ret pushBack ["optic_LRPS",nil,7500];
				};
				
			//Accessories//////
				//Recrue
				_ret pushBack ["muzzle_snds_L",nil,750];
				//Agent
				if(__GETC__(life_coplevel) > 1) then
				{
					_ret pushBack ["muzzle_snds_M",nil,2750];
					_ret pushBack ["muzzle_snds_acp",nil,2750];
					_ret pushBack ["muzzle_snds_H",nil,7500];
					_ret pushBack ["muzzle_snds_93mmg",nil,7500];
					_ret pushBack ["muzzle_snds_B",nil,2750];
					_ret pushBack ["muzzle_snds_338_black",nil,2750];
					_ret pushBack ["acc_pointer_IR",nil,250];
				};
				if(__GETC__(life_coplevel) > 2) then
				{
					_ret pushBack ["HandGrenade_Stone","Flashbang",1700];
					_ret pushBack ["SmokeShellBlue","Lacrymogene",1700];
					//Flare Grenade
					_ret pushBack ["UGL_FlareWhite_F","Grenade Flare Blanche",1700];
					_ret pushBack ["UGL_FlareGreen_F","Grenade Flare Vert",1700];
					_ret pushBack ["UGL_FlareRed_F","Grenade Flare Rouge",1700];
					_ret pushBack ["UGL_FlareYellow_F","Grenade Flare Jaune",1700];
					_ret pushBack ["UGL_FlareCIR_F","Grenade Flare",1700];
					//Smoke Granade
					_ret pushBack ["1Rnd_Smoke_Grenade_shell","Granade Smoke Blanche",1700];
					_ret pushBack ["1Rnd_SmokeRed_Grenade_shell","Granade Smoke Rouge",1700];
					_ret pushBack ["1Rnd_SmokeGreen_Grenade_shell","Granade Smoke Vert",1700];
					_ret pushBack ["1Rnd_SmokeYellow_Grenade_shell","Granade Smoke Jaune",1700];
					_ret pushBack ["1Rnd_SmokePurple_Grenade_shell","Granade Smoke Mauve",1700];
					_ret pushBack ["1Rnd_SmokeBlue_Grenade_shell","Granade Smoke Bleu",1700];
					_ret pushBack ["1Rnd_SmokeOrange_Grenade_shell","Granade Smoke Orange",1700];
					//Bipod
					_ret pushBack ["bipod_02_F_blk",nil,250];
					_ret pushBack ["bipod_03_F_blk",nil,250];
					_ret pushBack ["bipod_01_F_blk",nil,250];
					_ret pushBack ["bipod_02_F_hex",nil,250];
					_ret pushBack ["bipod_01_F_mtp",nil,250];
					_ret pushBack ["bipod_03_F_oli",nil,250];
					_ret pushBack ["bipod_01_F_snd",nil,250];
					_ret pushBack ["bipod_02_F_tan",nil,250];
				};
				//Sortie
				switch (__GETC__(life_coplevel)) do
				{
					case (1): {["Armurerie Recrue",_ret]};
					case (2): {["Armurerie Agent",_ret]};
					case (3): {["Armurerie Sergent",_ret]};
					case (4): {["Armurerie Lieutenant",_ret]};
					case (5): {["Armurerie Capitaine",_ret]};
					case (6): {["Armurerie Commandant",_ret]};
					case (7): {["Armurerie Général",_ret]};
				};
			};
		};
	};
	
	case "rebel":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"Vous n'etes pas un civil!"};
			case (!license_civ_rebel): {"Vous n'avez pas la license rebelle!"};
			default
			{
				["Mohammed's Jihadi Shop",
					[
						//Équipement
						["Rangefinder","Rangefinder",550],
						["ItemGPS","GPS",100],
						["ToolKit","Kit de réparation",250],
						["FirstAidKit","Trousse de premiers soins",150],
						["NVGoggles","Jumelles de vision nocturne",2000],
						["ItemRadio","Iphone avec Fido",250],
						["ItemRadio","Iphone avec Rogers",250],
						["ItemRadio","Iphone avec Bell",250],
						["ItemRadio","Iphone avec Telus",250],
						["ItemRadio","Iphone avec Koodo",250],
						["ItemRadio","Iphone avec Videotron",250],
						["arifle_TRG20_F",nil,30000],
						["30Rnd_556x45_Stanag",nil,350],
						["arifle_TRG21_F",nil,32000],
						["LMG_Zafir_pointer_F",nil,225000],
					    ["150Rnd_762x54_Box",nil,150],
						["30Rnd_556x45_Stanag",nil,350],
						["arifle_Mk20_F",nil,40000],
						["30Rnd_556x45_Stanag",nil,350],
						["arifle_Katiba_GL_F",nil,70000],
						["30Rnd_65x39_caseless_green",nil,350],
						["arifle_MXM_F",nil,85000],
						["30Rnd_65x39_caseless_mag",nil,350],
						["srifle_DMR_01_F",nil,150000],
						["10Rnd_762x54_Mag",nil,350],
						["srifle_EBR_F",nil,175000],
						["20Rnd_762x51_Mag",nil,350],
						["srifle_LRR_F",nil,675000],
						["7Rnd_408_Mag",nil,750],
						["srifle_GM6_camo_F",nil,1750000],
						["5Rnd_127x108_Mag",nil,2500],
						["srifle_DMR_06_camo_F",nil,165000],
						["20Rnd_762x51_Mag",nil,350],
						["srifle_DMR_06_olive_F",nil,165000],
						["20Rnd_762x51_Mag",nil,500],
						["srifle_DMR_04_Tan_F",nil,700000],
						["10Rnd_127x54_Mag",nil,800],
						["MMG_02_camo_F",nil,650000],
						["130Rnd_338_Mag",nil,600],
						["srifle_DMR_02_F",nil,257000],
						["10Rnd_338_Mag",nil,500],
						["srifle_DMR_03_woodland_F",nil,200000],
						["20Rnd_762x51_Mag",nil,500],
						["hgun_Pistol_heavy_02_F",nil,39850],
						["6Rnd_45ACP_Cylinder",nil,50],						
						["hgun_ACPC2_F",nil,11500],
						["9Rnd_45ACP_Mag",nil,45],
						["optic_MRCO",nil,2000],
						["optic_ACO_grn",nil,3500],
						["optic_Holosight",nil,3600],
						["acc_flashlight",nil,1000],
						["acc_pointer_IR",nil,250],
						["optic_Hamr",nil,7500],
						["optic_LRPS",nil,7500],
						["muzzle_snds_M",nil,2750],
						["muzzle_snds_H",nil,7500],
						["bipod_02_F_blk",nil,250],
						["bipod_03_F_blk",nil,250],
						["bipod_01_F_blk",nil,250],
						["bipod_02_F_hex",nil,250],
						["bipod_01_F_mtp",nil,250],
						["bipod_03_F_oli",nil,250],
						["bipod_01_F_snd",nil,250],
						["bipod_02_F_tan",nil,250],
						["optic_SOS",nil,7500],
						["optic_NVS",nil,7500],
						["optic_AMS_snd",nil,7500],
						["optic_AMS",nil,7500],
						["optic_AMS_khk",nil,7500],
						["optic_KHS_blk",nil,7500],
						["optic_KHS_hex",nil,7500],
						["optic_KHS_old",nil,7500],
						["optic_KHS_tan",nil,7500],
						//Flare Grenade
						["UGL_FlareWhite_F","Grenade Flare Blanche",1700],
						["UGL_FlareGreen_F","Grenade Flare Vert",1700],
						["UGL_FlareRed_F","Grenade Flare Rouge",1700],
						["UGL_FlareYellow_F","Grenade Flare Jaune",1700],
						["UGL_FlareCIR_F","Grenade Flare",1700],
						//Smoke Granade
						["1Rnd_Smoke_Grenade_shell","Granade Smoke Blanche",1700],
						["1Rnd_SmokeRed_Grenade_shell","Granade Smoke Rouge",1700],
						["1Rnd_SmokeGreen_Grenade_shell","Granade Smoke Vert",1700],
						["1Rnd_SmokeYellow_Grenade_shell","Granade Smoke Jaune",1700],
						["1Rnd_SmokePurple_Grenade_shell","Granade Smoke Mauve",1700],
						["1Rnd_SmokeBlue_Grenade_shell","Granade Smoke Bleu",1700],
						["1Rnd_SmokeOrange_Grenade_shell","Granade Smoke Orange",1700]
					]
				];
			};
		};
	};
	
	case "gun":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			case (!license_civ_gun): {"You don't have a Firearms license!"};
			default
			{
				["Billy Joe's Firearms",
					[
						["hgun_Rook40_F",nil,6500],
						["16Rnd_9x21_Mag",nil,25],
						["SMG_01_F",nil,40000],
						["30Rnd_45ACP_Mag_SMG_01",nil,25],
						["arifle_SDAR_F",nil,50000],
						["20Rnd_556x45_UW_mag",nil,125],
						["hgun_PDW2000_F",nil,20000],
						["30Rnd_9x21_Mag",nil,75],
						["hgun_Pistol_heavy_02_F",nil,20000],
						["6Rnd_45ACP_Cylinder",nil,75],
						["optic_ACO_grn_smg",nil,2500],
						["hgun_Pistol_Signal_F","Lance Fusée",10000],
						["6Rnd_GreenSignal_F",nil,500],
						["6Rnd_RedSignal_F",nil,500],
						["V_Rangemaster_belt",nil,4900]
					]
				];
			};
		};
	};
	
	case "gang":
	{
		switch(true) do
		{
			case (playerSide != civilian): {"You are not a civilian!"};
			default
			{
				["Hideout Armament",
					[
						["hgun_Rook40_F",nil,1500],
						["hgun_Pistol_heavy_02_F",nil,2500],
						["hgun_ACPC2_F",nil,4500],
						["hgun_PDW2000_F",nil,9500],
						["optic_ACO_grn_smg",nil,950],
						["V_Rangemaster_belt",nil,1900],
						["16Rnd_9x21_Mag",nil,25],
						["9Rnd_45ACP_Mag",nil,45],
						["6Rnd_45ACP_Cylinder",nil,50],
						["30Rnd_9x21_Mag",nil,75]
					]
				];
			};
		};
	};
	
	case "cellshop":
	{
		["Magasin de Cellulaire d'Altis",
			[
				["ItemRadio","Iphone avec Fido",250],
				["ItemRadio","Iphone avec Rogers",250],
				["ItemRadio","Iphone avec Bell",250],
				["ItemRadio","Iphone avec Telus",250],
				["ItemRadio","Iphone avec Koodo",250],
				["ItemRadio","Iphone avec Videotron",250]
			]
		];
	};
	
	case "genstore":
	{
		["Altis General Store",
			[
				["Rangefinder",nil,150],
				["ItemGPS",nil,100],
				["ToolKit",nil,250],
				["FirstAidKit",nil,150],
				["NVGoggles",nil,2000],
				["Chemlight_red",nil,300],
				["Chemlight_yellow",nil,300],
				["Chemlight_green",nil,300],
				["Chemlight_blue",nil,300]
			]
		];
	};
};
