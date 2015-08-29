#include <macro.h>
/*
	File: fn_p_updateMenu.sqf
	Author: [LLD] Team
	
	Description:
	Updates the player menu (Virtual Interaction Menu)
*/
private["_dialog","_time","_left","_right","_inv","_lic","_licenses","_near","_near_units","_mstatus","_shrt","_side","_talents"];
disableSerialization;

_dialog = findDisplay 3000; // Messaging
if (isNull _dialog) then { _dialog = findDisplay 2001; }; // Inventory / Money / Licenses
if (isNull _dialog) then { _dialog = findDisplay 2700; }; // Key chain
if (isNull _dialog) then { _dialog = findDisplay 2900; }; // Settings
if (isNull _dialog) then { _dialog = findDisplay 90000; }; // Home screen
_time = _dialog displayCtrl 90035;
_left = _dialog displayCtrl 90036;
_right = _dialog displayCtrl 90037;

// Statusbar text
_hour = date select 3;
_min = date select 4;
if (_hour < 10) then { _hour = format["0%1", _hour]; };
if (_min < 10) then { _min = format["0%1", _min]; };
_DoG = " <t color='#01B0F0'>Linox</t>";
_time ctrlSetStructuredText parseText format["<t align='center' shadow='0' size='0.75'>%1:%2</t>", _hour, _min];
_cashNum = 0;
_cashText = "";
if(life_cash > 5000000) then 
{
	_cashNum = round(life_cash / 1000000);
	_cashText = format["%1M", _cashNum];
} else {
	if(life_cash > 500000) then 
	{
		_cashNum = round(life_cash / 1000);
	_cashText = format["%1K", _cashNum];
	} else {
		_cashText = format["%1", [life_cash] call life_fnc_numberText];
	};
};
_left ctrlSetStructuredText parseText format["<t shadow='0' size='0.75'>$%1%2</t>", _cashText, _DoG];
_right ctrlSetStructuredText parseText format["<t shadow='0' size='0.75'>%1/%2</t>", life_carryWeight, life_maxWeight];