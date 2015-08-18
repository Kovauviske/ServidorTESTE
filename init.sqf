StartProgress = false;
enableSaving[false,false];

life_versionInfo = "Altis Life RPG v4.0";
[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";
[] execVM "scripts\fn_disableAnimals.sqf";
[] execVM "scripts\nosidechat.sqf";
[] execVM "scripts\welcome.sqf";
[] execVM "scripts\fn_statusBar.sqf";
[] execVM "scripts\safeZone.sqf";
[] execVM "scripts\zlt_fastrope.sqf";

StartProgress = true;
