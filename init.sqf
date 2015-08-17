StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\safeZone.sqf";
[] execVM "scripts\statusBar.sqf";
[] execVM "zlt_fastrope.sqf";
[] execVM "effects.sqf";
_igiload = execVM "scripts\IgiLoad\IgiLoadInit.sqf";
setTerrainGrid 50;

StartProgress = true;

