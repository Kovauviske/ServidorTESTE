/*
	File: fn_licenses.sqf
	Author: John "Paratus" VanderZwet
	
	Description:
	Views all current licenses
*/
private["_dialog","_lic"];

disableSerialization;
waitUntil {!isNull findDisplay 2001};

[] call life_fnc_p_updateMenu;

_dialog = findDisplay 2001;
_lic = _dialog displayCtrl 2014;

_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"med"};};

{
	if((_x select 1) == _side) then
	{
		_str = [_x select 0] call life_fnc_varToStr;
		_val = missionNamespace getVariable [(_x select 0), false];
		if(_val && typeName _str == "STRING") then
		{
			_lic lbAdd _str;
		};
	};
} foreach life_licenses;