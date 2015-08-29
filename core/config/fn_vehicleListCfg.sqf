#include <macro.h>
/*
	File:
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration list / array for buyable vehicles & prices and their shop.
*/
private["_shop","_return"];
_shop = [_this,0,"",[""]] call BIS_fnc_param;
if(_shop == "") exitWith {[]};
_return = [];
switch (_shop) do
{
	case "kart_shop":
	{
		_return = [
			["C_Kart_01_Blu_F",15000],
			["C_Kart_01_Fuel_F",15000],
			["C_Kart_01_Red_F",15000],
			["C_Kart_01_Vrana_F",15000]
		];
	};
	case "med_shop":
	{
		if (playerSide != independent) exitWith {hint "Vous n'êtes pas un Medecin!";};
		_return pushBack
		["C_Offroad_01_F",12000];
		if(__GETC__(life_mediclevel) > 1) then
		{
			_return pushBack
			["C_SUV_01_F",25000];
		};
		if(__GETC__(life_mediclevel) > 2) then
		{
			_return pushBack
			["C_Van_01_box_F",45000];
		};
		if(__GETC__(life_mediclevel) > 4) then
		{
			_return pushBack
			["O_Truck_02_medical_F",55000];
		};
	};
	
	case "med_air_hs": 
	{
		if (playerSide != independent) exitWith {hint "Vous n'êtes pas un Medecin!";};
		if(__GETC__(life_mediclevel) > 2) then
		{
			_return pushBack
			["B_Heli_Light_01_F",20000];
		};
		if(__GETC__(life_mediclevel) > 3) then
		{
			_return pushBack
			["O_Heli_Light_02_unarmed_F",50000];
		};
	};
	
	case "civ_car":
	{
		_return = 
		[
			["B_Quadbike_01_F",2500],
			["C_Hatchback_01_F",9500],
			["C_Hatchback_01_sport_F",100500],
			["C_Offroad_01_F",12500],
			["C_SUV_01_F",35000],
			["C_Van_01_transport_F",40000]
		];
	};
	
	case "civ_truck":
	{
		_return =
		[
			["C_Van_01_box_F",80000],
			["I_Truck_02_transport_F",106000],
			["I_Truck_02_covered_F",132000],
			["I_Truck_02_box_F",184000],
			["O_Truck_03_transport_F",158000],
			["O_Truck_03_covered_F",258000],
			["B_Truck_01_covered_F",388000],
			["B_Truck_01_fuel_F",500000],
			["B_Truck_01_ammo_F",635000],
			["B_Truck_01_box_F",855000]
		];	
	};
	
	
	case "reb_car":
	{
		_return =
		[
			["B_Quadbike_01_F",2500],
			["B_G_Offroad_01_F",20000],
			["O_Truck_03_device_F",1700000],
			["O_MRAP_02_F",500000],
			["I_MRAP_03_F",2000000],
			["B_G_Offroad_01_armed_F",1000000]
		];
	};
	
	case "cop_car":
	{
		if (playerSide != west) exitWith {hint "Vous n'êtes pas un policier!";};
		_return pushBack
		["C_Hatchback_01_F",12500];
		if(__GETC__(life_coplevel) > 1) then
		{
			_return pushBack
			["C_Offroad_01_F",20000];
		};
		if(__GETC__(life_coplevel) > 2) then
		{
			_return pushBack
			["C_SUV_01_F",25000];
		};
		if(__GETC__(life_coplevel) > 3) then
		{
			_return pushBack
			["C_Hatchback_01_sport_F",30000];
			_return pushBack
			["I_Truck_02_covered_F",110000];
		};
		if(__GETC__(life_coplevel) > 3) then
		{
			_return pushBack
		    ["B_MRAP_01_F",50000];
		};
		if(__GETC__(life_coplevel) > 5) then
		{
			_return pushBack
		    ["I_MRAP_03_F",80000];
			_return pushBack
		    ["B_MRAP_01_hmg_F",125000];
		};
	};
	
	case "civ_air":
	{
		_return pushBack
		["B_Heli_Light_01_F",170000];
		_return pushBack
		["O_Heli_Light_02_unarmed_F",260000];
		if(license_civ_rebel) then
		{
			_return pushBack
		    ["I_Heli_Transport_02_F",1200000];
			_return pushBack
		    ["B_Heli_Transport_03_unarmed_F",2200000];
			_return pushBack
			["O_Heli_Transport_04_F",3000000];
			_return pushBack
			["O_Heli_Transport_04_ammo_F",360000];
			_return pushBack
			["O_Heli_Transport_04_bench_F",160000];
			_return pushBack
			["O_Heli_Transport_04_box_F",380000];
			_return pushBack
			["O_Heli_Transport_04_covered_F",360000];
			_return pushBack
			["O_Heli_Transport_04_fuel_F",365000];
			_return pushBack
			["O_Heli_Transport_04_repair_F",350000];
		};
	};
	
	case "cop_air":
	{
		if (playerSide != west) exitWith {hint "Vous n'êtes pas un policier!";};
		if (!license_cop_air) exitWith {hint "Vous n'avez pas de license de pilote!";};
		//Officier
		if(__GETC__(life_coplevel) > 2) then
		{
			_return pushBack
		    ["B_Heli_Light_01_F",60000];
		};
		//Lientenant
		if(__GETC__(life_coplevel) > 4) then
		{
			_return pushBack
			["B_Heli_Transport_01_F",160000];
			_return pushBack
			["O_Heli_Transport_04_F",260000];
		};
		//Capitaine
		if(__GETC__(life_coplevel) > 5) then
		{
			_return pushBack
			["I_Heli_light_03_unarmed_F",240000];
			_return pushBack
			["B_Heli_Transport_03_black_F",240000];
		};
	};
	
	case "cop_airhq":
	{
		_return pushBack
		["B_Heli_Light_01_F",75000];
		if(__GETC__(life_coplevel) > 2) then
		{
			_return pushBack
			["B_Heli_Transport_01_F",200000];
			_return pushBack
			["B_MRAP_01_hmg_F",750000];
		};
	};
	
	case "civ_ship":
	{
		_return =
		[
			["C_Rubberboat",5000],
			["C_Boat_Civil_01_F",22000],
			["C_Boat_Civil_01_rescue_F",680000]
		];
	};

	case "cop_ship":
	{
		_return =
		[
			["B_Boat_Transport_01_F",3000],
			["C_Boat_Civil_01_police_F",20000],
			["B_Boat_Armed_01_minigun_F",75000]
		];
	};
};

_return;
