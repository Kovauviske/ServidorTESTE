/*
	File: fn_createGang.sqf
	Author: [LLD] Team
	Traduction : Gamewave
	
	Description:
	Functionality meant for creating gangs.
*/
private["_value","_len","_group"];
_value = ctrlText 2522;
_len = [_value] call KRON_StrLen;

if(_len > 25) exitWith {hint "Nom de Gang trop long !"};
if(life_atmcash < 25000) exitWith {hint "Vous n'avez pas assez d'argent sur votre compte pour créer un gang !"};
if(isNil {life_gang_list}) exitWith {hint "Server not authorized for feature."};
if(([_value,life_gang_list] call TON_fnc_index) != -1) exitWith {hint "Ce nom de gang est déjà utilisé !"};

_group = createGroup civilian;

//Set Array
life_gang_list set[count life_gang_list,[_value,_group,false,str(player),getPlayerUID player]];
publicVariable "life_gang_list";
[player] joinSilent _group;
player setRank "COLONEL";
life_my_gang = _group;
if(!isNull life_my_gang) then
{
	life_atmcash = life_atmcash - 25000;
	closeDialog 0;
	createDialog "Life_My_Gang_DiagOld";
	publicVariable "life_gang_list";
};
closeDialog 0;