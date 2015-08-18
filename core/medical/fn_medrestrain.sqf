#include <macro.h>
/*
	File: fn_restrain.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Retrains the client.
*/
private["_med","_player"];
__med = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
_player = player;
if(isNull __med) exitWith {};

//Monitor excessive restrainment
[] spawn {
	private "_time";
	while {true} do {
		_time = time;
		waitUntil {(time - _time) > (5 * 60)};
		
		if(!(player GVAR ["restrained",FALSE])) exitWith {};
		if(!([east,getPos player,30] call life_fnc_nearUnits) && (player GVAR ["restrained",FALSE]) && vehicle player == player) exitWith {
			player SVAR ["restrained",FALSE,TRUE];
			player SVAR ["Escorting",FALSE,TRUE];
			player SVAR ["transporting",false,true];
			detach player;
			titleText[localize "STR_Med_ExcessiveRestrain","PLAIN"];
		};
	};
};

if((player GVAR["surrender",FALSE])) then { player SVAR["surrender",FALSE,TRUE]; player switchMove ""; };

titleText[format[localize "STR_Med_Retrained",__med GVAR ["realname",name __med]],"PLAIN"];
				
while {player GVAR  "restrained"} do {
	if(vehicle player == player) then {
		player playMove "AmovPercMstpSnonWnonDnon_Ease";
	};
	
	_state = vehicle player;
	waitUntil {animationState player != "AmovPercMstpSnonWnonDnon_Ease" || !(player GVAR "restrained") || vehicle player != _state};
			
	if(!alive player) exitWith {
		player SVAR ["restrained",false,true];
		player SVAR ["Escorting",false,true];
		player SVAR ["transporting",false,true];
		detach _player;
	};
	
	if(!alive __med) exitWith {
		player SVAR ["Escorting",false,true];
		detach player;
	};
	
	if(vehicle player != player) then {
		//disableUserInput true;
		if(driver (vehicle player) == player) then {player action["eject",vehicle player];};
	};
};

//disableUserInput false;
		
if(alive player) then {
	player switchMove "AmovPercMstpSlowWrflDnon_SaluteIn";
	player SVAR ["Escorting",false,true];
	player SVAR ["transporting",false,true];
	detach player;
};