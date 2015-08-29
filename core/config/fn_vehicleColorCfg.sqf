/*
	File: fn_vehicleColorCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for vehicle colors.
*/
private["_vehicle","_ret","_path"];
_vehicle = [_this,0,"",[""]] call BIS_fnc_param;
if(_vehicle == "") exitWith {[]};
_ret = [];

switch (_vehicle) do
{
	case "I_Heli_Transport_02_F":
	{
		_path = "\a3\air_f_beta\Heli_Transport_02\Data\Skins\";
		_path2 = "\a3\air_f_beta\Heli_Transport_02\Data\";
		_ret =
		[
			[_path2 + "heli_transport_02_1_indp_co.paa","reb",_path2 + "heli_transport_02_2_indp_co.paa",_path2 + "heli_transport_02_3_indp_co.paa"],		
			["textures\reb_skins\mohawkcamoblanc1.jpg","reb","textures\reb_skins\mohawkcamoblanc2.jpg","textures\reb_skins\mohawkcamoblanc3.jpg"],
			[_path + "heli_transport_02_1_ion_co.paa","civ",_path + "heli_transport_02_2_ion_co.paa",_path + "heli_transport_02_3_ion_co.paa"],
			[_path + "heli_transport_02_1_dahoman_co.paa","civ",_path + "heli_transport_02_2_dahoman_co.paa",_path + "heli_transport_02_3_dahoman_co.paa"]
		];
	};
	
	case "C_Hatchback_01_sport_F":
	{
		_path = "\a3\soft_f_gamma\Hatchback_01\data\";
		_ret =
		[
			[_path + "hatchback_01_ext_sport01_co.paa","civ"],
			[_path + "hatchback_01_ext_sport02_co.paa","civ"],
			[_path + "hatchback_01_ext_sport03_co.paa","civ"],
			[_path + "hatchback_01_ext_sport04_co.paa","civ"],
			[_path + "hatchback_01_ext_sport05_co.paa","civ"],
			[_path + "hatchback_01_ext_sport06_co.paa","civ"],
			["textures\civ_skins\hatch_porche.jpg","civ"],
			["textures\civ_skins\Hatchback_rockstar.jpg","civ"],
			["textures\civ_skins\civ_hatchback_fire.jpg","civ"],
			["textures\civ_skins\civ_hatchback_metallica.jpg","civ"],
			["textures\civ_skins\hatchback_green_tribal.jpg","civ"],
			["textures\civ_skins\hatchback_orange_stripes.jpg","civ"],
			["textures\civ_skins\hayonsport_kenblock.jpg","civ"],
			["textures\cop_skins\police_hb.jpg","cop"]
		];
	};
		
	case "C_Offroad_01_F":
	{
		_ret = 
		[
			["\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa", "civ"], 
			["\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa", "civ"],
			["\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa", "civ"],
			["\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa","civ"],
			["\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa","civ"],
			["\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa","civ"],
			["textures\civ_skins\offroad_rockstar.jpg","civ"],
			["textures\civ_skins\offroad_dodge.jpg","civ"],
			["textures\civ_skins\offroad_monster.jpg","civ"],
			["textures\cop_skins\police_offroad.jpg","cop"],
			["textures\med_skins\offroad_med.jpg","med"]
		];
	};
	
	case "C_Hatchback_01_F":
	{
		_ret =
		[
			["\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa","civ"],
			["\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa","civ"],
			["\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa","civ"],
			["\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa","civ"],
			["\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa","civ"],
			["\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa","civ"],
			["\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa","civ"],
			["\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa","civ"],
			["textures\civ_skins\hatch_porche.jpg","civ"],
			["textures\civ_skins\Hatchback_rockstar.jpg","civ"],
			["textures\civ_skins\civ_hatchback_fire.jpg","civ"],
			["textures\civ_skins\civ_hatchback_metallica.jpg","civ"],
			["textures\civ_skins\hatchback_green_tribal.jpg","civ"],
			["textures\civ_skins\hatchback_orange_stripes.jpg","civ"],
			["textures\civ_skins\hayonsport_kenblock.jpg","civ"],
			["textures\cop_skins\police_hb.jpg","cop"]
		];
	};
	
	case "C_SUV_01_F":
	{
		_ret =
		[
			["\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa","civ"],
			["\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_02_co.paa","civ"],
			["\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa","civ"],
			["\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa","civ"],
			["textures\civ_skins\suv_flame.jpg","civ"],
			["textures\civ_skins\suv_bluflame.jpg","civ"],
			["textures\civ_skins\suv_ghostrider.jpg","civ"],
			["textures\civ_skins\suv_junker.jpg","civ"],
			["textures\civ_skins\civ_suv_ferrari.jpg","civ"],
			["textures\civ_skins\civ_suv_monster.jpg","civ"],
			["textures\civ_skins\suv_fast.jpg","civ"],
			["textures\civ_skins\SUV_Taxi.jpg","civ"],
			["textures\reb_skins\suv_camo.jpg","reb"],
			["textures\reb_skins\suv_reb.jpg","reb"],
			["textures\reb_skins\suv_wood.jpg","reb"],
			["textures\reb_skins\rebel_suv.jpg","reb"],
			["textures\cop_skins\police_suv.jpg","cop"],
			["textures\med_skins\med_suv.jpg","med"]
		];
	};
	
	case "C_Van_01_box_F":
	{
		_ret = 
		[
			["\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa","civ"],
			["\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa","civ"],
			["textures\med_skins\van_medic.jpg","med","textures\med_skins\van_medic2.jpg"]
		];
	};
	
	case "C_Van_01_transport_F":
	{
		_ret = 
		[
			["\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa","civ"],
			["\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa","civ"]
		];
	};
	
	case "B_Quadbike_01_F":
	{
		_ret = 
		[
			["\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa","cop"],
			["\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa","reb"],
			["\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa","civ"],
			["\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa","civ"],
			["\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa","civ"],
			["\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa","civ"],
			["\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa","civ"],
			["\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa","civ"],
			["\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa","reb"]
		];
	};
	
	case "B_Heli_Light_01_F":
	{
		_ret = 
		[
			["\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa","reb"],
			["\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa","reb"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa","civ"],
			["\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa","reb"],
			["textures\civ_skins\civ_hummingbird_redbull.jpg","civ"],
			["textures\civ_skins\hummingbird_bee.jpg","civ"],
			["textures\reb_skins\hummingbirdcamoblanc.jpg","reb"],
			["textures\cop_skins\police_humming.jpg","cop"],
			["textures\med_skins\littlebird_medic.jpg","med"]
		];
	};
	
	case "O_Heli_Light_02_unarmed_F":
	{
		_ret = 
		[
			["\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa","cop"],
			["\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa","civ"],
			["\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa","reb"],
			["\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa","reb"],
			["textures\reb_skins\orcacamoblanc.jpg","reb"],
			["textures\med_skins\med_orca.jpg","med"]
		];
	};
	
	case "B_MRAP_01_F":
	{
		_ret = 
		[
			["textures\cop_skins\hunter_police.jpg","cop","textures\cop_skins\hunter_swat2.jpg"]
		];
	};
	
	case "I_MRAP_03_F":
	{
		_ret = 
		[
			["\a3\soft_f_beta\MRAP_03\Data\mrap_03_ext_indp_co.paa","reb"],
			["textures\reb_skins\Stridercamoblanc.jpg","reb"],
			["textures\reb_skins\StriderCamo.jpg","reb"],
			["textures\reb_skins\StriderCamoblack.jpg","reb"]
		];
	};
	
	case "O_MRAP_02_F":
	{
		_ret = 
		[
			["\a3\soft_f\MRAP_02\Data\mrap_02_ext_01_co.paa","reb","\a3\soft_f\MRAP_02\Data\mrap_02_ext_02_co.paa"],
			["textures\reb_skins\ifritcamoblancfront.jpg","reb","textures\reb_skins\ifritcamoblancback.jpg"],
			["textures\reb_skins\ifritcamorougefront.jpg","reb","textures\reb_skins\ifritcamorougeback.jpg"],
			["textures\reb_skins\ifritcamobleufront.jpg","reb","textures\reb_skins\ifritcamobleuback.jpg"],
			["textures\reb_skins\ifritcamovertfront.jpg","reb","textures\reb_skins\ifritcamovertback.jpg"]
		];
	};
	
	case "I_Truck_02_covered_F":
	{
		_ret = 
		[
			["\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\civ_skins\zamak_blue.jpg","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\civ_skins\zamak_green.jpg","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\civ_skins\zamak_red.jpg","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\civ_skins\zamak_yellow.jpg","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\cop_skins\ZAMAKPOPO1.jpg","cop","textures\cop_skins\ZAMAKPOPO2.jpg"]
			
		];
	};
	
	case "I_Truck_02_box_F":
	{
		_ret = 
		[
			["textures\civ_skins\truck_Pegasus.jpg","civ","textures\civ_skins\truck_Pegasus2.jpg"],
			["textures\civ_skins\zamak_blue.jpg","civ","textures\civ_skins\truck_Pegasus2.jpg"],
			["textures\civ_skins\zamak_green.jpg","civ","textures\civ_skins\truck_Pegasus2.jpg"],
			["textures\civ_skins\zamak_red.jpg","civ","textures\civ_skins\truck_Pegasus2.jpg"],
			["textures\civ_skins\zamak_yellow.jpg","civ","textures\civ_skins\truck_Pegasus2.jpg"]
		];
	};
	
	case "I_Truck_02_transport_F":
	{
		_ret = 
		[
			["\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\civ_skins\zamak_blue.jpg","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\civ_skins\zamak_green.jpg","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\civ_skins\zamak_red.jpg","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"],
			["textures\civ_skins\zamak_yellow.jpg","civ","\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"]
		];
	};
	
	case "B_Truck_01_covered_F":
	{
			_ret =
			[
					["\A3\Soft_F_Beta\Truck_01\data\truck_01_ext_01_co.paa","civ","\a3\soft_f_beta\Truck_01\data\truck_01_ext_02_co.paa"],
					["textures\civ_skins\civ_hemtt_kitty_0.jpg","civ","textures\civ_skins\civ_hemtt_kitty_1.jpg","textures\civ_skins\civ_hemtt_kitty_1.jpg"],
					["textures\civ_skins\civ_hemtt_devil_0.jpg","civ","textures\civ_skins\civ_hemtt_devil_1.jpg","textures\civ_skins\civ_hemtt_devil_1.jpg"]
			];
	};
	
	case "B_Truck_01_ammo_F":
	{
			_ret =
			[
					["\A3\Soft_F_Beta\Truck_01\data\truck_01_ext_01_co.paa","civ","\a3\soft_f_beta\Truck_01\data\truck_01_ext_02_co.paa"],
					["textures\civ_skins\civ_hemtt_kitty_0.jpg","civ","textures\civ_skins\civ_hemtt_kitty_1.jpg","textures\civ_skins\civ_hemtt_kitty_1.jpg"],
					["textures\civ_skins\civ_hemtt_devil_0.jpg","civ","textures\civ_skins\civ_hemtt_devil_1.jpg","textures\civ_skins\civ_hemtt_devil_1.jpg"]
			];
	};
	
	case "B_Truck_01_fuel_F":
	{
			_ret =
			[
					["\A3\Soft_F_Beta\Truck_01\data\truck_01_ext_01_co.paa","civ","\a3\soft_f_beta\Truck_01\data\truck_01_ext_02_co.paa"],
					["textures\civ_skins\civ_hemtt_kitty_0.jpg","civ","textures\civ_skins\civ_hemtt_kitty_1.jpg","textures\civ_skins\civ_hemtt_kitty_1.jpg"],
					["textures\civ_skins\civ_hemtt_devil_0.jpg","civ","textures\civ_skins\civ_hemtt_devil_1.jpg","textures\civ_skins\civ_hemtt_devil_1.jpg"]
			];
	};
	
	case "I_Heli_light_03_unarmed_F":
	{
		_ret = 
		[
			["textures\cop_skins\police_hellcat.jpg","cop"]
		];
	};
	
	case "B_MRAP_01_hmg_F":
	{
		_ret = 
		[
			["textures\cop_skins\hunter_police.jpg","cop","textures\cop_skins\hunter_swat2.jpg","textures\cop_skins\hunter_swat2.jpg"]
		];
	};
	
	case "B_Heli_Transport_01_F":
	{
		_ret = 
		[
			["textures\cop_skins\police_ghosthawk_1.paa","cop","textures\cop_skins\police_ghosthawk_2.paa"]
		];
	};
};

_ret;