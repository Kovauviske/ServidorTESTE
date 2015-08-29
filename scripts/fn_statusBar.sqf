#include <macro.h>

waitUntil {!(isNull (findDisplay 46))};
disableSerialization;

4 cutRsc ["osefStatusBar","PLAIN"]; 

[] spawn {
	sleep 5;
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 10;
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetStructuredText
    parseText format["<t color='#0cc40c'>www.linox.org</t> | <t color='#0cc40c'>FPS: %1</t> | <t color='#0d4bc8'>Police: %2</t> | <t color='#a03586'>Civs: %3</t> | <t color='#db0d0d'>Medic: %4</t> | <t color='#818181'>ARGENT: %5</t> | <t color='#818181'>BANQUE: %6</t> | <t color='#0cc40c'>TS: linoxtrinity.ts3serv.com:10042</t>", round diag_fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits,[life_cash] call life_fnc_numberText,[life_atmcash] call life_fnc_numberText,mapGridPosition player];
	}; 
};