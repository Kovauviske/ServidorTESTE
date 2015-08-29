/*
	File: fn_inventory.sqf
	Author: Fuzz
	
	Description:
	Opens player inventory
*/
private["_display","_near","_icon"];

disableSerialization;
waitUntil {!isNull findDisplay 2001};

[] call life_fnc_p_updateMenu;

_display = findDisplay 2001;
_near = _display displayCtrl 2023;
_inv = _display displayCtrl 2005;

_side = switch(playerSide) do {case west:{"cop"}; case civilian:{"civ"}; case independent:{"medic"};};

//Near players
_near_units = [];
{ if(player distance _x < 10) then {_near_units set [count _near_units,_x];};} foreach playableUnits;
{
	if(!isNull _x && alive _x && player distance _x < 10 && _x != player) then
	{
		_near lbAdd format["%1 - %2",name _x, side _x];
		_near lbSetData [(lbSize _near)-1,str(_x)];
	};
} foreach _near_units;

lbClear _inv;
{
	_str = [_x] call life_fnc_varToStr;
	_shrt = [_x,1] call life_fnc_varHandle;
	_icon = [_x] call life_fnc_itemIcon;
	_val = missionNameSpace getVariable _x;
	if(_val > 0) then
	{
		_inv lbAdd format["%2 [x%1]",_val,_str];
		_inv lbSetData [(lbSize _inv)-1,_shrt];
		_inv lbSetPicture [(lbSize _inv)-1,_icon];
	};
} foreach life_inv_items;