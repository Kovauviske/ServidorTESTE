#include <macro.h>
/*
 Author: Fuzz
 Description: Choix de des factions soit medic ou policier.
*/
if(playerSide == civilian) exitWith {hint "Vous devez etre medecin ou policier pour pouvoir faire des barrages routier"};

if(playerSide == west) then 
{
	[] spawn life_fnc_placeablesMenu;
};
if(playerSide == independent) then 
{
	[] spawn life_fnc_placeablesMenuMEDIC;
};