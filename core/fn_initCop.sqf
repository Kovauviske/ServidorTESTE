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

[] spawn
{
while {true} do
	{
		waitUntil {backpack player == "B_Carryall_khk"}; 
		(backpackContainer player) setObjectTextureGlobal [0,"textures\mochilas\policia.paa"];
		waitUntil {backpack player != "B_Carryall_khk"};
	};
};


[] spawn
{
while {true} do
	{
		waitUntil {vest player == "V_TacVest_blk_POLICE"}; 
		(vestContainer player) setObjectTextureGlobal [0,"textures\uniformes\policia\colete.paa"];
		waitUntil {vest player != "V_TacVest_blk_POLICE"};
	};
};

//Recruta
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_Rangemaster"};
player setObjectTextureGlobal [0,"textures\uniformes\policia\recruta.jpg"];
waitUntil {uniform player != "U_Rangemaster"};
};
};

//Soldado
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_Rangemaster"};
player setObjectTextureGlobal [0,"textures\uniformes\policia\soldado.jpg"];
waitUntil {uniform player != "U_Rangemaster"};
};
};

//Sargento
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_Rangemaster"};
player setObjectTextureGlobal [0,"textures\uniformes\policia\sargento.jpg"];
waitUntil {uniform player != "U_Rangemaster"};
};
};

//Tenente
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_B_SpecopsUniform_sgg"};
player setObjectTextureGlobal [0,"textures\uniformes\policia\tenente.jpg"];
waitUntil {uniform player != "U_B_SpecopsUniform_sgg"};
};
};


//Capitao
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_B_SpecopsUniform_sgg"};
player setObjectTextureGlobal [0,"textures\uniformes\policia\capitao.jpg"];
waitUntil {uniform player != "U_B_SpecopsUniform_sgg"};
};
};

//Major
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_B_SpecopsUniform_sgg"};
player setObjectTextureGlobal [0,"textures\uniformes\policia\major.jpg"];
waitUntil {uniform player != "U_B_SpecopsUniform_sgg"};
};
};

//Coronel
[] spawn
{
while {true} do
{
waitUntil {uniform player == "U_B_SpecopsUniform_sgg"};
player setObjectTextureGlobal [0,"textures\uniformes\policia\coronel.jpg"];
waitUntil {uniform player != "U_B_SpecopsUniform_sgg"};
};
};

[] call life_fnc_reloadUniforms;
[] spawn life_fnc_placeablesInit;
