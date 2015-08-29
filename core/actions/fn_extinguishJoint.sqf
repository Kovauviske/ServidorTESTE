/*
	File: fn_extinguishJoint.sqf
	By: Fuzz for LLD
	Description:
	de la Fumée ? ou ca ? :P
*/

private["_unit"];

if(player getVariable ["smoke_weed",false]) then
{
	player setVariable["smoke_weed",false,true];
} else {
	_unit = cursorTarget;
	if(isNull _unit) exitWith {}; //Not valid
	if(!(_unit getVariable ["smoke_weed",false])) exitWith {};
	if(side _unit == west) exitWith {};
	if(player == _unit) exitWith {};
	if(!isPlayer _unit) exitWith {};
	_unit setVariable["smoke_weed",false,true];
};