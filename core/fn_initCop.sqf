#include <macro.h>
/*
	File: fn_initCop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Cop Initialization file.
*/
private["_end"];
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};
_end = false;
if(life_blacklisted) exitWith
{
	["Blacklisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(__GETC__(life_coplevel) == 0) then {
	["NotWhitelisted",false,true] call BIS_fnc_endMission;
	sleep 30;
};

if(str(player) in ["admin_1","admin_2","admin_3","admin_4","admin_5"]) then {
	if((__GETC__(life_coplevel) == 0) || (__GETC__(life_adminlevel) == 0)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 30;
	};
};

switch (__GETC__(life_coplevel)) do 
{
	 case 1: {life_paycheck = life_paycheck + 1000;}; // Rank 1
	 case 2: {life_paycheck = life_paycheck + 2000;}; // Rank 2
	 case 3: {life_paycheck = life_paycheck + 3000;}; // Rank 3
	 case 4: {life_paycheck = life_paycheck + 4000;}; // Rank 4
	 case 5: {life_paycheck = life_paycheck + 5000;}; // Rank 5 
	 case 6: {life_paycheck = life_paycheck + 6000;}; // Rank 6
	 case 7: {life_paycheck = life_paycheck + 7000;}; // Rank 7
};


player setVariable["rank",(__GETC__(life_coplevel)),true];
[] call life_fnc_spawnMenu;
[] spawn life_fnc_placeablesInit;
titleText ["", "BLACK FADED", 9];
titleText ["Serveur Linox Life v3.5", "BLACK IN", 6];
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

[player] call life_fnc_updateClothing;