waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
	File: fn_statusBar.sqf
	Author: Some French Guy named Osef I presume, given the variable on the status bar
	Edited by: [midgetgrimm]
	Description: Puts a small bar in the bottom right of screen to display in-game information

*/
_rscLayer = "osefStatusBar" call BIS_fnc_rscLayer;
_rscLayer cutRsc["osefStatusBar","PLAIN"];
systemChat format["[HS] - Carregando informações do jogo...", _rscLayer];

[] spawn {
	sleep 5;
	_counter = 180;
	_timeSinceLastUpdate = 0;
	while {true} do
	{
		sleep 1;
		_uptime = [time,"HH:MM:SS"] call BIS_fnc_secondsToString;
		_counter = _counter - 1;
		((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetText format["FPS: %1 | UpTime: %2 | Policiais: %3 | BrasForte %4 | Resgate: %5 | Civis: %6 | Dinheiro: %7 | Banco: %8 | MAPA: %9", round diag_fps, _uptime, west countSide playableUnits, east countSide playableUnits, independent countSide playableUnits, civilian countSide playableUnits, [life_cash] call life_fnc_numberText, [life_atmbank] call life_fnc_numberText, mapGridPosition player, _counter]; 
	}; 
};


