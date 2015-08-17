#include <macro.h>
/*
	File: fn_chopShopSell.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Sells the selected vehicle off.
*/
disableSerialization;
private["_control","_price","_vehicle","_nearVehicles","_price2","_text","_className","_displayName"];

if(!allowedToChop) exitWith {hint localize "STR_NOTF_Sell_Vehicle_Stop";};
if(allowedToChop) then {
	allowedToChop = false;
	[] spawn {
		sleep 60;
		allowedToChop = true;
	};
};
_control = CONTROL(39400,39402);
_price = _control lbValue (lbCurSel _control);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format["%1", _vehicle];
_nearVehicles = nearestObjects [getMarkerPos life_chopShop,["Car","Truck","Air"],25];
_vehicle = SEL(_nearVehicles,_vehicle);
if(isNull _vehicle) exitWith {};

_owners = _vehicle getVariable "vehicle_info_owners";
if(isNil {_owners}) exitWith {
	// Log: CHOP CHEAT
	[format ["WARNING: %1 hat versucht ein %2 ohne Owner zu verkaufen.", name player, typeOf _vehicle],"zo_log"] call BIS_fnc_MP;
	hint format ["Du kannst dieses Fahrzeug nicht verkaufen. Ein Administrator wurde informiert. Es besteht akuter Verdacht des Hackings."]; deleteVehicle _vehicle;
};

hint localize "STR_Shop_ChopShopSelling";
life_action_inUse = true;
_price2 = CASH + _price;
[[player,_vehicle,_price,_price2],"TON_fnc_chopShopSell",false,false] call life_fnc_MP;
closeDialog 0;