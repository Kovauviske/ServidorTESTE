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

if(!(str(player) in ["cop_99"])) then {
//if(!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
	if((FETCH_CONST(life_coplevel) == 0) && (FETCH_CONST(life_adminlevel) == 0)) then {
		["NotWhitelisted",false,true] call BIS_fnc_endMission;
		sleep 35;
	};
};


player setVariable["rank",(FETCH_CONST(life_coplevel)),true];
[] call life_fnc_spawnMenu;
waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
[] spawn life_fnc_placeablesInit;

[] spawn
{
while {true} do
	{
		waitUntil {backpack player == "B_Carryall_cbr"}; 
		(backpackContainer player) setObjectTextureGlobal [0,""];
		waitUntil {backpack player != "B_Carryall_cbr"};
	};
};


//Recruta
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_Rangemaster"};
player setObjectTextureGlobal [0,"textures\Uniformes\Policia\roupa_recruta.paa"];
waitUntil {uniform player != "U_Rangemaster"};
};
};

//Soldado
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_I_G_resistanceLeader_F"};
player setObjectTextureGlobal [0,"textures\Uniformes\Policia\roupa_soldado.paa"];
waitUntil {uniform player != "U_I_G_resistanceLeader_F"};
};
};

//Sargento
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_B_CTRG_1"};
player setObjectTextureGlobal [0,"textures\Uniformes\Policia\roupa_sargento.paa"];
waitUntil {uniform player != "U_B_CTRG_1"};
};
};

//Tenente
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_B_CTRG_1"};
player setObjectTextureGlobal [0,"textures\Uniformes\Policia\roupa_sargento.paa"];
waitUntil {uniform player != "U_B_CTRG_1"};
};
};


//Capitao
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_I_CombatUniform"};
player setObjectTextureGlobal [0,"textures\uniformes\Policia\roupa_cot.paa"];
waitUntil {uniform player != "U_I_CombatUniform"};
};
};

//Major
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_I_CombatUniform"};
player setObjectTextureGlobal [0,"textures\Uniformes\Policia\roupa_cot.paa"];
waitUntil {uniform player != "U_I_CombatUniform"};
};
};

//Coronel
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_B_CombatUniform_mcam"};
player setObjectTextureGlobal [0,"textures\Uniformes\Policia\roupa_coronel.paa"];
waitUntil {uniform player != "U_B_CombatUniform_mcam"};
};
};

//ROTA
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_Competitor"};
player setObjectTextureGlobal [0,"textures\Uniformes\Policia\roupa_bope.paa"];
waitUntil {uniform player != "U_Competitor"};
};
};

[] call life_fnc_reloadUniforms;
[] spawn life_fnc_placeablesInit;