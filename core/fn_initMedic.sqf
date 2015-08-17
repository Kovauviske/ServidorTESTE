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
		waitUntil {backpack player == "B_Kitbag_cbr"}; 
		(backpackContainer player) setObjectTextureGlobal [0,"textures\mochilas\medico.paa"];
		waitUntil {backpack player != "B_Kitbag_cbr"};
	};
};

[] spawn
{
while {true} do
	{
		waitUntil {backpack player == "B_Bergen_sgg"}; 
		(backpackContainer player) setObjectTextureGlobal [0,"textures\mochilas\mecanico.paa"];
		waitUntil {backpack player != "B_Bergen_sgg"};		
	};
};

[] spawn
{
	private["_texture"];
	while {true} do
	{
		waitUntil{uniform player == "U_Rangemaster"};
		_texture =
		switch (FETCH_CONST(life_mediclevel)) do
		{
			case 1: {"textures\uniformes\resgate\medico.jpg"};
			case 2: {"textures\uniformes\resgate\medico.jpg"};
			case 3: {"textures\uniformes\resgate\medico.jpg"};
			case 4: {"textures\uniformes\resgate\medico.jpg"};
			case 5: {"textures\uniformes\resgate\medico.jpg"};
		};
		
		player setObjectTextureGlobal [0,_texture];
		waitUntil{uniform player != "U_Rangemaster"};
	};
};

[] spawn
{
	private["_texture"];
	while {true} do
	{
		waitUntil{uniform player == "U_C_WorkerCoveralls"};
		_texture =
		switch (FETCH_CONST(life_mediclevel)) do
		{
			case 1: {"textures\uniformes\mecanico\mecanico.jpg"};
			case 2: {"textures\uniformes\mecanico\mecanico.jpg"};
			case 3: {"textures\uniformes\mecanico\mecanico.jpg"};
			case 4: {"textures\uniformes\mecanico\mecanico.jpg"};
			case 5: {"textures\uniformes\mecanico\mecanico.jpg"};
		};
		
		player setObjectTextureGlobal [0,_texture];
		waitUntil{uniform player != "U_C_WorkerCoveralls"};
	};
};