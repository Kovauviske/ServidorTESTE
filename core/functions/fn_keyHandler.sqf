#include <macro.h>
/*
	File: fn_keyHandler.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Main key handler for event 'keyDown'
*/
private ["_handled","_shift","_alt","_code","_ctrl","_alt","_ctrlKey","_veh","_locked","_interactionKey","_mapKey","_interruptionKeys"];
_ctrl = _this select 0;
_code = _this select 1;
_shift = _this select 2;
_ctrlKey = _this select 3;
_alt = _this select 4;
_speed = speed cursorTarget;
_handled = false;

_interactionKey = if(count (actionKeys "User10") == 0) then {219} else {(actionKeys "User10") select 0};
_mapKey = actionKeys "ShowMap" select 0;
//hint str _code;
_interruptionKeys = [17,30,31,32]; //A,S,W,D

//Vault handling...
if((_code in (actionKeys "GetOver") || _code in (actionKeys "salute")) && {(player getVariable ["restrained",false])}) exitWith {
	true;
};

if(life_action_inUse) exitWith {
	if(!life_interrupted && _code in _interruptionKeys) then {life_interrupted = true;};
	_handled;
};

//Hotfix for Interaction key not being able to be bound on some operation systems.
if(count (actionKeys "User10") != 0 && {(inputAction "User10" > 0)}) exitWith {
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	if(!life_action_inUse) then {
		[] spawn 
		{
			private["_handle"];
			_handle = [] spawn life_fnc_actionKeyHandler;
			waitUntil {scriptDone _handle};
			Sleep 3;
			life_action_inUse = false;
		};
	};
	true;
};

switch (_code) do
{
	//Space key for Jumping
	case 57:
	{
		if(isNil "jumpActionTime") then {jumpActionTime = 0;};
		if(_shift && {animationState player != "AovrPercMrunSrasWrflDf"} && {isTouchingGround player} && {stance player == "STAND"} && {speed player > 2} && {!life_is_arrested} && {(velocity player) select 2 < 2.5} && {time - jumpActionTime > 1.5}) then {
			jumpActionTime = time; //Update the time.
			[player,true] spawn life_fnc_jumpFnc; //Local execution
			[[player,false],"life_fnc_jumpFnc",nil,FALSE] call life_fnc_MP; //Global execution 
			_handled = true;
		};
	};
	
	//Map Key
	case _mapKey:
	{
		switch (playerSide) do 
		{
			case west: {if(!visibleMap) then {[] spawn life_fnc_copMarkers;}};
			case independent: {if(!visibleMap) then {[] spawn life_fnc_medicMarkers;}};
			case civilian: {if(!visibleMap) then {[] spawn life_fnc_gangMarkers;}};
		};
	};
	
	//Holster / recall weapon.
	case 35:
	{
		if(_shift && !_ctrlKey && currentWeapon player != "") then {
			life_curWep_h = currentWeapon player;
			player action ["SwitchWeapon", player, player, 100];
			player switchcamera cameraView;
		};
		
		if(!_shift && _ctrlKey && !isNil "life_curWep_h" && {(life_curWep_h != "")}) then {
			if(life_curWep_h in [primaryWeapon player,secondaryWeapon player,handgunWeapon player]) then {
				player selectWeapon life_curWep_h;
			};
		};
	};
	
	//Interaction key (default is Left Windows, can be mapped via Controls -> Custom -> User Action 10)
	case _interactionKey:
	{
		if(!life_action_inUse) then {
			[] spawn 
			{
				private["_handle"];
				_handle = [] spawn life_fnc_actionKeyHandler;
				waitUntil {scriptDone _handle};
				life_action_inUse = false;
			};
		};
	};
	
	 //Restraining or robbing (Shift + R)
	case 19:
	{
		if(_shift) then {_handled = true;};
		if(_shift && playerSide == west && !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && (side cursorTarget == civilian) && alive cursorTarget && cursorTarget distance player < 3.5 && !(cursorTarget getVariable "Escorting") && !(cursorTarget getVariable "restrained") && speed cursorTarget < 1) then
		{
			[] call life_fnc_restrainAction;
		};
		
    //Robbing
		if(_shift && playerSide == civilian && !isNull cursorTarget && cursorTarget isKindOf "Man" && isPlayer cursorTarget && alive cursorTarget && cursorTarget distance player < 4 && speed cursorTarget < 1) then
		{
			if ({player distance getMarkerPos (_x select 0) < _x select 1} count __GETC__(life_safe_points) > 0) then
			{
				 hint "Vous êtes dans une safezone! Vous ne pouvez pas assomer quelqu'un.";
			} else {
				if((animationState cursorTarget) != "Incapacitated" && (currentWeapon player == primaryWeapon player OR currentWeapon player == handgunWeapon player) && currentWeapon player != "" && !life_knockout && !(player getVariable["restrained",false]) && !life_istazed && !(player getVariable["surrender",false])) then
				{
					[cursorTarget] spawn life_fnc_knockoutAction;
					if("ItemRadio" in assignedItems cursorTarget) then {
					cursorTarget removeweapon "ItemRadio";
					hint "Le Cellulaire de ton hotage es par terre !.";
					_defenceplace1 = "Item_ItemRadio" createVehicle (player modelToWorld[0,0,0]);}
					else { hint "Votre otage n'a pas de Cellulaire!"};
				};
				_handled = true;
			};
		};
	};
	
	//surrender... shift + g
	case 34:
	{
		if(_shift) then {_handled = true;};

		if (_shift) then
		{
			if (vehicle player == player && !(player getVariable ["restrained", false]) && (animationState player) != "Incapacitated" && !life_istazed) then
			{
				if (player getVariable ["surrender", false]) then
				{
					player setVariable ["surrender", false, true];
				} else
				{
					[] spawn life_fnc_surrender;
				};
			};
		};
	};   

	//T Key (Trunk)
	case 20:
	{
		if(!_alt && !_ctrlKey) then
		{
			if(vehicle player != player && alive vehicle player) then
			{
				if((vehicle player) in life_vehicles) then
				{
					[vehicle player] call life_fnc_openInventory;
				};
			}
				else
			{
				if((cursorTarget isKindOf "Car" OR cursorTarget isKindOf "Air" OR cursorTarget isKindOf "Ship" OR cursorTarget isKindOf "House_F") && player distance cursorTarget < 7 && vehicle player == player && alive cursorTarget) then
				{
					if(cursorTarget in life_vehicles OR {!(cursorTarget getVariable ["locked",true])}) then
					{
						[cursorTarget] call life_fnc_openInventory;
					};
				};
			};
		};
	};
	//L Key?
	case 38: 
	{
		//If cop run checks for turning lights on.
		if(_shift && playerSide in [west,independent]) then {
			if(vehicle player != player && (typeOf vehicle player) in ["C_Offroad_01_F","B_MRAP_01_F","C_SUV_01_F"]) then {
				if(!isNil {vehicle player getVariable "lights"}) then {
					if(playerSide == west) then {
						[vehicle player] call life_fnc_sirenLights;
					} else {
						[vehicle player] call life_fnc_medicSirenLights;
					};
					_handled = true;
				};
			};
		};
		
		if(!_alt && !_ctrlKey) then { [] call life_fnc_radar; };
	};
	
	//F Key
	case 33: {
		if(!_shift && !_ctrlKey) then 
        {    
			if(playerSide in [west,independent] && vehicle player != player && !life_siren_active && ((driver vehicle player) == player)) then
			{
				_veh = vehicle player;
				if(playerSide == west) then {
					[[_veh,0,"horn",0.75,true],"life_fnc_playSiren",nil,true] spawn life_fnc_MP;
				} else {
					[[_veh,0,"horn",0.75,true],"life_fnc_playSiren",nil,true] spawn life_fnc_MP;
				};
			};		
		};
		if(_shift) then	
		{
			if(playerSide in [west,independent] && vehicle player != player && !life_siren_active && ((driver vehicle player) == player)) then
			{
				[] spawn
				{
					life_siren_active = true;
					sleep 4.7;
					life_siren_active = false;
				};
				_veh = vehicle player;
				if(isNil {_veh getVariable "siren1"}) then {_veh setVariable["siren1",false,true];};
				if((_veh getVariable "siren1")) then
				{
					titleText [localize "STR_MISC_SirensOFF","PLAIN"];
					_veh setVariable["siren1",false,true];
				} else {
					titleText [localize "STR_MISC_SirensON","PLAIN"];
					_veh setVariable["siren1",true,true];
					if(playerSide == west) then {
						[[_veh,1,"SirenLong",4.7],"life_fnc_playSiren",nil,true] spawn life_fnc_MP;
					} else {
						[[_veh,1,"MedicSiren",0.31794],"life_fnc_playSiren",nil,true] spawn life_fnc_MP;
					};
				};
			};
		};
		if (_ctrlKey) then
		{
			if(playerSide in [west,independent] && vehicle player != player && !life_siren_active && ((driver vehicle player) == player)) then
			{
				[] spawn
				{
					life_siren_active = true;
					sleep 1;
					life_siren_active = false;
				};
				_veh = vehicle player;
				if(isNil {_veh getVariable "siren2"}) then {_veh setVariable["siren2",false,true];};
				if((_veh getVariable "siren2")) then
				{
					titleText [localize "STR_MISC_SirensOFF","PLAIN"];
					_veh setVariable["siren2",false,true];
				} else {
					titleText [localize "STR_MISC_SirensON","PLAIN"];
					_veh setVariable["siren2",true,true];
					if(playerSide == west) then {
						[[_veh,2,"Phaser",1.2],"life_fnc_playSiren",nil,true] spawn life_fnc_MP;
					} else {
						[[_veh,2,"Hilow",0.99],"life_fnc_playSiren",nil,true] spawn life_fnc_MP;
					};
				};
			};
		};
	};
	
	//Y Player Menu
	case 21:
	{
		if(!_alt && !_ctrlKey) then
		{
			[] call life_fnc_p_openMenu;
		};
	};
	//U Key
	case 22:
	{
		if(!_alt && !_ctrlKey) then {
			if(vehicle player == player) then {
				_veh = cursorTarget;
			} else {
				_veh = vehicle player;
			};
			
			if(_veh isKindOf "House_F") then {
				if(_veh in life_vehicles && player distance _veh < 15) then {
					_door = [_veh] call life_fnc_nearestDoor;
					if(_door == 0) exitWith {hint "You are not near a door!"};
					_locked = _veh getVariable [format["bis_disabled_Door_%1",_door],0];
					if(_locked == 0) then {
						_veh setVariable[format["bis_disabled_Door_%1",_door],1,true];
						_veh animate [format["door_%1_rot",_door],0];
						systemChat "You have locked that door.";
					} else {
						_veh setVariable[format["bis_disabled_Door_%1",_door],0,true];
						_veh animate [format["door_%1_rot",_door],1];
						systemChat "You have unlocked that door.";
					};
				};
			} else {
				_locked = locked _veh;
				if(_veh in life_vehicles && player distance _veh < 8) then {
					if(_locked == 2) then {
						if(local _veh) then {
							_veh lock 0;
						} else {
							[[_veh,0],"life_fnc_lockVehicle",_veh,false] spawn life_fnc_MP;
						};
						hint composeText [ image "icons\unlock.paa", " Véhicule Ouvert" ];
						[[_veh, "car_unlock",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
					} else {
						if(local _veh) then {
							_veh lock 2;
						} else {
							[[_veh,2],"life_fnc_lockVehicle",_veh,false] spawn life_fnc_MP;
						};	
						hint composeText [ image "icons\lock.paa", " Véhicule Fermé" ];
						[[_veh, "car_lock",10],"life_fnc_playSound",true,false] spawn life_fnc_MP;
					};
				};
			};
		};
	};
	//Touche [S] BipBip camion by Fuzz
    case 31:
    {
	    if (!BipBipOn && vehicle player != player && (driver vehicle player) == player && (typeOf vehicle player) in ["C_Van_01_transport_F","C_Van_01_box_F","I_Truck_02_covered_F","I_Truck_02_transport_F","I_Truck_02_ammo_F","I_Truck_02_box_F","I_Truck_02_medical_F","I_Truck_02_fuel_F","B_Truck_01_transport_F","B_Truck_01_box_F","B_Truck_01_covered_F","B_Truck_01_mover_F","B_Truck_01_Repair_F","B_Truck_01_ammo_F","B_Truck_01_fuel_F","B_Truck_01_medical_F","O_Truck_02_covered_F","O_Truck_02_transport_F","O_Truck_03_transport_F","O_Truck_03_covered_F","O_Truck_03_repair_F","O_Truck_03_ammo_F","O_Truck_03_fuel_F","O_Truck_03_medical_F","O_Truck_03_device_F","O_Truck_02_box_F","O_Truck_02_medical_F","O_Truck_02_Ammo_F","O_Truck_02_fuel_F"]) then {
		    _Automobile = [vehicle player,0] call BIS_fnc_param;
		    _VitesseX = speed _Automobile;
		
		    if (_VitesseX < 0) then {
			    BipBipOn = true;
			    [_Automobile] call life_fnc_BipBipCamion;
			};
		};
	};
	
	case 46:
	{
		if (life_barrier_active) then
		{
			[] spawn life_fnc_placeablesPlaceComplete;
		};
		true;
	};
};

if (!_handled && _code <= 11 && _code >= 2) then
{
	Arsenal_menu = [
		["Arsenal",false],
		["Key 1", [2], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"],
		["Key 2", [3], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"],
		["Key 3", [4], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"],
		["Key 4", [5], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"],
		["Key 5", [6], "", -5, [["expression", "fixme = [] spawn life_fnc_earplugInit;"]], "1", "1"],
		["Key 6", [7], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"],
		["Key 7", [8], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"],
		["Key 8", [9], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"],
		["Key 9", [10], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"],
		["Key 0", [11], "", -5, [["expression", "fixme = [] spawn {};"]], "1", "1"]
	];
	
	showCommandingMenu "#USER:Arsenal_menu";
};

_handled;