/*
	File: fn_vehicleWeightCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for vehicle weight.
*/
private["_className"];
_className = [_this,0,"",[""]] call BIS_fnc_param;

switch (_className) do
{
	//Civil car
	case "B_Quadbike_01_F": {25};
	case "C_Offroad_01_F": {65};
	case "C_Hatchback_01_F": {40};
	case "C_Hatchback_01_sport_F": {45};
	case "C_SUV_01_F": {50};
	case "C_Van_01_transport_F": {100};
	case "B_G_Offroad_01_F": {65};
	case "B_MRAP_01_F": {65};
	case "I_MRAP_03_F": {65};
	case "O_MRAP_02_F": {65};
	case "O_G_Offroad_01_armed_F": {65};
	//Truck
	case "I_Truck_02_covered_F": {250};
	case "I_Truck_02_transport_F": {200};
	case "C_Van_01_box_F": {150};
	case "O_Truck_03_transport_F": {300};
	case "O_Truck_03_covered_F": {400};
	case "O_Truck_03_device_F": {550};
	case "B_Truck_01_fuel_F": {600};
	case "B_Truck_01_ammo_F": {700};
	case "B_Truck_01_box_F": {800};
	case "B_Truck_01_covered_F": {500};
	case "B_Truck_01_transport_F": {450};
	case "I_Truck_02_box_F": {350};
	//Bateaux
	case "C_Boat_Civil_01_F": {85};
	case "C_Boat_Civil_01_police_F": {85};
	case "C_Boat_Civil_01_rescue_F": {450};
	case "C_Rubberboat": {45};
	case "B_G_Boat_Transport_01_F": {45};
	case "B_Boat_Transport_01_F": {45};
	//Boite maison
	case "Land_CargoBox_V1_F": {5000};
	case "Box_IND_Grenades_F": {700};
	//Helico
	case "C_Heli_Light_01_civil_F": {50};
	case "B_Heli_Light_01_F": {50};
	case "O_Heli_Light_02_unarmed_F": {100};
	case "I_Heli_Transport_02_F": {400};
	case "B_Heli_Transport_03_unarmed_F": {400};
	case "I_Heli_light_03_unarmed_F": {130};
	case "O_Heli_Light_02_v2_F": {100};
	case "O_Heli_Transport_04_F": {65};
	case "O_Heli_Transport_04_ammo_F": {150};
	case "O_Heli_Transport_04_bench_F": {65};
	case "O_Heli_Transport_04_box_F": {170};
	case "O_Heli_Transport_04_covered_F": {150};
	case "O_Heli_Transport_04_fuel_F": {160};
	case "O_Heli_Transport_04_repair_F": {140};
	
	default {-1};
};