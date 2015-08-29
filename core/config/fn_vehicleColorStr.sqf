/*
	File: fn_vehicleColorStr.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for color strings depending on their index location.
*/
private["_vehicle","_color","_index"];
_vehicle = [_this,0,"",[""]] call BIS_fnc_param;
_index = [_this,1,-1,[0]] call BIS_fnc_param;
_color = "";

switch (_vehicle) do
{
	case "C_Offroad_01_F" :
	{
		switch (_index) do
		{
			case 0: {_color = "Red";};
			case 1: {_color = "Yellow";};
			case 2: {_color = "White";};
			case 3: {_color = "Blue";};
			case 4: {_color = "Dark Red";};
			case 5: {_color = "Blue / White"};
			case 6: {_color = "Rockstar"};
			case 7: {_color = "Dodge Ram"};
			case 8: {_color = "Monster"};
			case 9: {_color = "Police"};
			case 10: {_color = "Medecin"};
		};
	};
	
	case "C_Hatchback_01_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Beige";};
			case 1: {_color = "Green";};
			case 2: {_color = "Blue";};
			case 3: {_color = "Dark Blue";};
			case 4: {_color = "Yellow";};
			case 5: {_color = "White"};
			case 6: {_color = "Grey"};
			case 7: {_color = "Black"};
			case 8: {_color = "Porsche"};
			case 9: {_color = "Rockstar"};
			case 10: {_color = "Feu"};
			case 11: {_color = "Metallica"};
			case 12: {_color = "Tribal Vert"};
			case 13: {_color = "Stripe Orange"};
			case 14: {_color = "Kenblock"};
			case 15: {_color = "Police"};
		};
	};
	
	case "C_Hatchback_01_sport_F":
	{
		switch(_index) do
		{
			case 0: {_color = "Red"};
			case 1: {_color = "Dark Blue"};
			case 2: {_color = "Orange"};
			case 3: {_color = "Black / White"};
			case 4: {_color = "Tan"};
			case 5: {_color = "Green"};
			case 6: {_color = "Porsche"};
			case 7: {_color = "Rockstar"};
			case 10: {_color = "Feu"};
			case 11: {_color = "Metallica"};
			case 12: {_color = "Tribal Vert"};
			case 13: {_color = "Stripe Orange"};
			case 14: {_color = "Kenblock"};
			case 15: {_color = "Police"};
		};
	};
	
	case "C_SUV_01_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Dark Red";};
			case 1: {_color = "Black";};
			case 2: {_color = "Silver";};
			case 3: {_color = "Orange";};
			case 4: {_color = "Flame";};
			case 5: {_color = "Flame BLeu";};
			case 6: {_color = "Ghostrider";};
			case 7: {_color = "Junker";};
			case 5: {_color = "Ferrari";};
			case 6: {_color = "Monster Energy";};
			case 7: {_color = "Fast";};
			case 8: {_color = "Taxi";};
			case 9: {_color = "Camo Jaune/Vert";};
			case 10: {_color = "Camo Brun";};
			case 11: {_color = "Camo Gris";};
			case 12: {_color = "Camo Vert";};
			case 13: {_color = "Police";};
			case 14: {_color = "Medecin";};
		};
	};
	
	case "C_Van_01_box_F":
	{
		switch (_index) do
		{
			case 0: {_color = "White"};
			case 1: {_color = "Red"};
			case 2: {_color = "Medecin"};
		};
	};
	
	case "C_Van_01_transport_F":
	{
		switch (_index) do
		{
			case 0: {_color = "White"};
			case 1: {_color = "Red"};
		};
	};
	
	case "C_Van_01_fuel_F":
	{
		switch (_index) do
		{
			case 0: {_color = "White"};
			case 1: {_color = "Red"};
		};
	};
	
	case "B_Quadbike_01_F" :
	{
		switch (_index) do
		{
			case 0: {_color = "Brown"};
			case 1: {_color = "Digi Desert"};
			case 2: {_color = "Black"};
			case 3: {_color = "Blue"};
			case 4: {_color = "Red"};
			case 5: {_color = "White"};
			case 6: {_color = "Digi Green"};
			case 7: {_color = "Hunter Camo"};
			case 8: {_color = "Rebel Camo"};
		};
	};
	
	case "B_Heli_Light_01_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Sheriff"};
			case 1: {_color = "Black"};
			case 2: {_color = "Civ Blue"};
			case 3: {_color = "Civ Red"};
			case 4: {_color = "Digi Green"};
			case 5: {_color = "Blueline"};
			case 6: {_color = "Elliptical"};
			case 7: {_color = "Furious"};
			case 8: {_color = "Jeans Blue"};
			case 9: {_color = "Speedy Redline"};
			case 10: {_color = "Sunset"};
			case 11: {_color = "Vrana"};
			case 12: {_color = "Waves Blue"};
			case 13: {_color = "Rebel Digital"};
			case 14: {_color = "Redbull"};
			case 15: {_color = "Abeille"};
			case 16: {_color = "Camo Blanc"};
			case 17: {_color = "Police"};
			case 18: {_color = "Medecin"};
		};
	};
	
	case "O_Heli_Light_02_unarmed_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Black"};
			case 1: {_color = "White / Blue"};
			case 2: {_color = "Digi Green"};
			case 3: {_color = "Desert Digi"};
			case 4: {_color = "Camo Blanc"};
			case 5: {_color = "Medecin"};
		};
	};
	
	case "B_MRAP_01_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Police"};
		};
	};
	
	case "I_MRAP_03_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Camo Vert"};
			case 1: {_color = "Camo Blanc"};
			case 2: {_color = "Camo brun"};
			case 3: {_color = "Camo Noir"};
		};
	};
	
	case "O_MRAP_02_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Camo Brun"};
			case 1: {_color = "Urban Camo"};
			case 2: {_color = "Rouge Camo"};
			case 3: {_color = "Bleu Camo"};
			case 4: {_color = "Vert Camo"};
		};
	};
	
	case "I_Truck_02_covered_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Orange"};
			case 1: {_color = "Bleu"};
			case 2: {_color = "Vert"};
			case 3: {_color = "Rouge"};
			case 4: {_color = "Jaune"};
			case 5: {_color = "Police"};
		};
	};
	
	case "I_Truck_02_transport_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Orange"};
			case 1: {_color = "Bleu"};
			case 2: {_color = "Vert"};
			case 3: {_color = "Rouge"};
			case 4: {_color = "Jaune"};
		};
	};
	
	case "I_Truck_02_box_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Pegasus"};
			case 1: {_color = "Bleu"};
			case 2: {_color = "Vert"};
			case 3: {_color = "Rouge"};
			case 4: {_color = "Jaune"};
		};
	};
	
	case "I_Heli_Transport_02_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Camo Vert"};
			case 1: {_color = "Camo Blanc"};
			case 3: {_color = "Ion"};
			case 4: {_color = "Dahoman"};
		};
	};
	
	case "B_Truck_01_box_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Standard"};
			case 1: {_color = "Kitty"};
			case 2: {_color = "Devil"};
		};
	};

	case "B_Truck_01_covered_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Standard"};
			case 1: {_color = "Kitty"};
			case 2: {_color = "Devil"};
		};
	};
	
	case "B_Truck_01_ammo_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Standard"};
			case 1: {_color = "Kitty"};
			case 2: {_color = "Devil"};
		};
	};
	
	case "B_Truck_01_fuel_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Standard"};
			case 1: {_color = "Kitty"};
			case 2: {_color = "Devil"};
		};
	};	
	
	case "I_Heli_light_03_unarmed_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Police"};
		};
	};
	
	case "B_Heli_Transport_01_F":
	{
		switch (_index) do
		{
			case 0: {_color = "Police"};
		};
	};
};

_color;