/*
	Author: Bryan "Tonic" Boardwine
	
	Description:
	For the mean time it blocks the player from opening another persons backpack
*/
private["_container","_unit"];
if(count _this == 1) exitWith {false};
_unit = _this select 0;
_container = _this select 1;

if (life_action_inUse) exitWith {
	hint "!Anti-Glitch! Attendez 1 secondes sans ouvrir d'inventaire pour éviter tous problème.";
	[] spawn {
		for "_x" from 5 to 0 step -1 do {
			closeDialog 0;
			uiSleep .1;
		};
		life_action_inUse = false;
		life_interrupted = false;
	};
};


life_action_inUse = true; //Block spamming inventory to glitch into crate

_isPack = getNumber(configFile >> "CfgVehicles" >> (typeOf _container) >> "isBackpack");
if(_isPack == 1) then {
	hint localize "STR_MISC_Backpack";
	[] spawn {
		waitUntil {!isNull (findDisplay 602)};
		closeDialog 0;
	};
};

if((typeOf _container) in ["Box_IND_Grenades_F","B_supplyCrate_F"]) exitWith {
	_house = nearestObject [(getPosATL player), "House_F"];
	if(!(_house in life_vehicles) && {(_house getVariable ["locked",false])}) then {
		hint localize "STR_House_ContainerDeny";
		[] spawn {
			waitUntil {!isNull (findDisplay 602)};
			closeDialog 0;
		};
	};
};

if(_container isKindOf "LandVehicle" OR _container isKindOf "Ship" OR _container isKindOf "Air") exitWith {
	if(!(_container in life_vehicles) && {(locked _container) == 2}) exitWith {
		hint localize "STR_MISC_VehInventory";
		[] spawn {
			waitUntil {!isNull (findDisplay 602)};
			closeDialog 0;
		};
	};
};

//Allow alive players who've been knocked out to be looted, just not the dead ones
if(_container isKindOf "Man" && !alive _container) exitWith {
	hint localize "STR_NOTF_NoLootingPerson";
	_timer = 2;
	[] spawn {
		waitUntil {!isNull (findDisplay 602)};
		closeDialog 0;
	};
	_timer spawn {
		uiSleep _this;
		life_action_inUse = false;
		life_interrupted = false;
	};
};

life_action_inUse = false;
life_interrupted = false;