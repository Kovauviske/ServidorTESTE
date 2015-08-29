#include <macro.h>
/*
	File: fn_vehInvSearch.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Searches the vehicle for illegal items.
*/
private["_vehicle","_vehicleInfo","_value"];
_vehicle = cursorTarget;
if(isNull _vehicle) exitWith {};
if(!((_vehicle isKindOf "Air") OR (_vehicle isKindOf "Ship") OR (_vehicle isKindOf "LandVehicle"))) exitWith {};

_vehicleInfo = _vehicle getVariable ["Trunk",[]];
if(count _vehicleInfo == 0) exitWith {hint localize "STR_Cop_VehEmpty"};

_vehChance = switch (true) do {
	case (["_Heli_",str _vehicle] call BIS_fnc_inString): {75};		//HELI
	case (["_Kart_",str _vehicle] call BIS_fnc_inString): {100};		//KART
	case (["_Boat_",str _vehicle] call BIS_fnc_inString OR _vehicle in ["C_Rubberboat","B_SDV_01_F"]): {65};//BOAT
	case (["C_Van_",str _vehicle] call BIS_fnc_inString): {35}; 		//TRUCK
	case (["I_Truck_",str _vehicle] call BIS_fnc_inString): {50}; 		//ZAMAK
	case (["B_Truck_",str _vehicle] call BIS_fnc_inString): {65}; 		//HEMTT
	case (["O_Truck_",str _vehicle] call BIS_fnc_inString): {65}; 		//TEMPEST
	default {25};
};

_value = 0;
_chance = random 100;

if (_chance <= _vehChance) then {
	{
		_var = _x select 0;
		_val = _x select 1;
		
		_index = [_var,life_illegal_items] call TON_fnc_index;
		if(_index != -1) then
		{
			_value = _value + round (_val * ((life_illegal_items select _index) select 1));
		};
	} foreach (_vehicleInfo select 0);
};

if(_value > 0) then
{
	[[0,"STR_NOTF_VehContraband",true,[[_value] call life_fnc_numberText]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;
	life_atmcash_LoL = life_atmcash_LoL + _value;
	_vehicle setVariable["Trunk",[],true];
}
	else
{
	hint localize "STR_Cop_NoIllegalVeh";
};