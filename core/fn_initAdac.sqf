#include <macro.h>
/*
	File: fn_initAdac.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Initializes the PMC
*/
private["_end"];
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};
if(!(str(player) in ["adac_99"])) then {
//if(!(str(player) in ["adac_1","adac_2","adac_3","adac_4"])) then {
	if((FETCH_CONST(life_adaclevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 35;
	};
};

[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done. 

[] spawn
{
	private["_texture"];
	while {true} do
	{
		waitUntil{uniform player == "U_B_HeliPilotCoveralls"};
		_texture =
		switch (FETCH_CONST(life_adaclevel)) do
		{
			case 1: {"textures\uniformes\brasforte\brasforte.paa"};
			case 2: {"textures\uniformes\brasforte\brasforte.paa"};
			case 3: {"textures\uniformes\brasforte\brasforte.paa"};
			case 4: {"textures\uniformes\brasforte\brasforte.paa"};
			case 5: {"textures\uniformes\brasforte\brasforte.paa"};
		};
		
		player setObjectTextureGlobal [0,_texture];
		waitUntil{uniform player != "U_B_HeliPilotCoveralls"};
	};
};

