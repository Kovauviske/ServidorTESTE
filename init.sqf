enableSaving [false, false];

X_Server = false;
X_Client = false;
X_JIP = false;
StartProgress = false;

//get rit of the grass
setTerrainGrid 25;    //(Hi)12.5 or 25(Med) or 50(Low)

if(!isDedicated) then { X_Client = true;};
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v3.1.4.8";
[] execVM "briefing.sqf";
[] execVM "KRON_Strings.sqf";
if(isDedicated && isNil("life_market_prices")) then
{
	[] call life_fnc_marketconfiguration;
	diag_log "Market prices generated!";
	
	"life_market_prices" addPublicVariableEventHandler
	{
		diag_log format["Market prices updated! %1", _this select 1];
	};
	
	[] execFSM "core\fsm\server.fsm";
	diag_log "Server FSM executed";
};
//Custom
[] execVM "Scripts\0snake&rabbit.sqf";
[] execVM "Scripts\init_weather.sqf";
[] execVM "Scripts\fn_keyrestore.sqf";
[] execVM "Scripts\teargas.sqf";
[] execVM "Scripts\fn_statusBar.sqf";
StartProgress = true;

"BIS_fnc_MP_packet" addPublicVariableEventHandler {_this call life_fnc_MPexec};

if (isServer) then {
    [] execVM "antihack.sqf";
} else {
    "AHAH" addPublicVariableEventHandler
{[] spawn (_this select 1);
};
    clientStarted = player;
 
    publicVariableServer "clientStarted";
};