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

if((FETCH_CONST(life_medicLevel)) < 1) exitWith {
	["Notwhitelisted",FALSE,TRUE] call BIS_fnc_endMission;
	sleep 35;
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.

[] spawn
{
while {true} do
	{
		waitUntil {backpack player == "B_Carryall_oli"}; 
		(backpackContainer player) setObjectTextureGlobal [0,""];
		waitUntil {backpack player != "B_Carryall_oli"};
	};
};

//Samu
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_B_CombatUniform_mcam_vest"};
player setObjectTextureGlobal [0,"textures\Uniformes\Samu\uniforme.paa"];
waitUntil {uniform player != "U_B_CombatUniform_mcam_vest"};
};
};