#include <macro.h>
/*
	File: fn_initMedic.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the medic..
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if(str(player) in ["hc_1"]) then {
	if((__GETC__(life_medicLevel) < 6)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 30;
	};
};

if((__GETC__(life_medicLevel)) < 1) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};

switch (__GETC__(life_medicLevel)) do 
{
	 case 1: {life_paycheck = life_paycheck + 1000;}; // Rank 1
	 case 2: {life_paycheck = life_paycheck + 2000;}; // Rank 2
	 case 3: {life_paycheck = life_paycheck + 3000;}; // Rank 3
	 case 4: {life_paycheck = life_paycheck + 4000;}; // Rank 4
	 case 5: {life_paycheck = life_paycheck + 5000;}; // Rank 5 
};

[] call life_fnc_spawnMenu;
[] call life_fnc_placeablesInitMEDIC;
titleText ["", "BLACK FADED", 9];
titleText ["Serveur Linox Life v3.5", "BLACK IN", 6];
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[player] call life_fnc_updateClothing;