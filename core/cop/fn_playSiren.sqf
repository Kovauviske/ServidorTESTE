/*
	File: fn_playSiren.sqf
	Author: Bryan "Tonic" Boardwine
	Modified by: _Fuzz
	
	Description:
	Starts the siren sound for other players
*/
private["_vehicle","_sirenNumber","_sound","_time"];
_vehicle = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_sirenNumber = [_this,1,1,[0]] call BIS_fnc_param;
_sound = [_this,2,"",[""]] call BIS_fnc_param;
_time = _this select 3;
_horn = [_this,4,false,[false]] call BIS_fnc_param;

if(isNull _vehicle) exitWith {};
if(_sound == "") exitWith {};
if (_horn) exitWith {_vehicle say3D _sound; sleep _time;};
_siren = format ["siren%1",_sirenNumber];
if(isNil {_vehicle getVariable _siren}) exitWith {};

while {true} do
{
	if(!(_vehicle getVariable _siren)) exitWith {};
	if(count (crew (_vehicle)) == 0) then {_vehicle setVariable[_siren,false,true]};
	if(!alive _vehicle) exitWith {};
	if(isNull _vehicle) exitWith {};
	_vehicle say3D _sound;
	sleep _time;
	if(!(_vehicle getVariable _siren)) exitWith {};
};