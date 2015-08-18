/*
	File: fn_openInventory.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Starts the initialization of vehicle virtual inventory menu.
*/
private["_vehicle","_veh_data"];
if(dialog) exitWith {};
_vehicle = [_this,0,Objnull,[Objnull]] call BIS_fnc_param;
if(isNull _vehicle OR !(_vehicle isKindOf "Car" OR _vehicle isKindOf "Air" OR _vehicle isKindOf "Ship" OR _vehicle isKindOf "House_F")) exitWith {}; //Either a null or invalid vehicle type.

if((_vehicle getVariable ["trunk_in_use",false])) exitWith {hint localize "STR_MISC_VehInvUse"};

_vehicle setVariable["trunk_user",name player, true];
_vehicle setVariable["trunk_in_use",true,true];

CheckInvDupe = {
	private["_curveh"];
	_curveh = _this select 0;
	_nbmsg = 0;
	_flagcheater = false;

	sleep (0.2);

	while {!isNull (findDisplay 3500)} do
		{
		sleep (0.5);

		if (_curveh getVariable["trunk_user",name player] != name player && _curveh getVariable["trunk_user", name player] != "") then
			{

			if ((_curveh getVariable["trunk_simu_access",0]) < 4) then
				{
				_curveh setVariable["trunk_simu_access",(_curveh getVariable["trunk_simu_access",0]) + 1, true];

				//systemChat format["trunk simu access : %1", _curveh getVariable["trunk_simu_access",0]];

				_curveh setVariable["trunk_in_use",false,true];
				closeDialog 0;
				sleep (0.5);
				}
			else
				{

				[[[0,1],format["%1 e %2 estão tentando bugar o inventário do veículo, avise a um admin !!",name player, _curveh getVariable "trunk_user"]],"life_fnc_broadcast",true,false] spawn life_fnc_MP;

				_flagcheater = true;
				_nbmsg = _nbmsg + 1;

				sleep (0.5);
				if (_nbmsg > 6) then
					{
					closeDialog 0;
					};
				};
			};

		};

	//_curveh setVariable["trunk_user","", true];

	if (_flagcheater) then
			{
			//_curveh setDamage 1; // booom !
			//systemChat "BOOOOOOOOOOOOOOOOOOM Trapaceiro pegamos você !!! ! " ;
			/*life_atmcash = 0;
			life_cash = 0;
			[] call SOCK_fnc_updateRequest;*/
			};

};

/*if((_vehicle getVariable ["trunk_in_use",false])) exitWith {hint localize "STR_MISC_VehInvUse"};
_vehicle setVariable["trunk_in_use",true,true];*/



if(!createDialog "TrunkMenu") exitWith {hint localize "STR_MISC_DialogError";}; //Couldn't create the menu?
disableSerialization;

if(_vehicle isKindOf "House_F") then {
	ctrlSetText[3501,format[(localize "STR_MISC_HouseStorage")+ " - %1",getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName")]];
} else {
	ctrlSetText[3501,format[(localize "STR_MISC_VehStorage")+ " - %1",getText(configFile >> "CfgVehicles" >> (typeOf _vehicle) >> "displayName")]];
};

[_vehicle] spawn CheckInvDupe;

if(_vehicle isKindOf "House_F") then {
	private["_mWeight"];
	_mWeight = 0;
	{_mWeight = _mWeight + ([(typeOf _x)] call life_fnc_vehicleWeightCfg);} foreach (_vehicle getVariable["containers",[]]);
	_veh_data = [_mWeight,(_vehicle getVariable["Trunk",[[],0]]) select 1];
} else {
	_veh_data = [_vehicle] call life_fnc_vehicleWeight;
};

if(_vehicle isKindOf "House_F" && {count (_vehicle getVariable ["containers",[]]) == 0}) exitWith {hint localize "STR_MISC_NoStorageWarn"; closeDialog 0; _vehicle setVariable["trunk_in_use",false,true];};
if(_veh_data select 0 == -1 && {!(_vehicle isKindOf "House_F")}) exitWith {closeDialog 0; _vehicle setVariable["trunk_in_use",false,true]; hint localize "STR_MISC_NoStorageVeh";};

ctrlSetText[3504,format[(localize "STR_MISC_Weight")+ " %1/%2",_veh_data select 1,_veh_data select 0]];
[_vehicle] call life_fnc_vehInventory;
life_trunk_vehicle = _vehicle;

_vehicle spawn
{
	waitUntil {isNull (findDisplay 3500)};
	_this setVariable["trunk_in_use",false,true];
	if(_this isKindOf "House_F") then {
		[[_this],"TON_fnc_updateHouseTrunk",false,false] call life_fnc_MP;
	};
};