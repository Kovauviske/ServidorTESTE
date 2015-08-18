/*
    GrenadeStop v0.8 for ArmA 3 Alpha by Bake (tweaked slightly by Rarek)
    
    DESCRIPTION:
    Stops players from throwing grenades in safety zones.
    
    CONFIGURATION:
    Edit the #defines below.
*/

#define SAFETY_ZONES [["safe_kavala", 800], ["safe_donator", 150], ["safe_rebeldesul", 80], ["safe_rebeldenorte", 130], ["safe_rebeldecentral", 200]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]
#define MESSAGE "Você está em uma Área Segura!!!"

if (isDedicated) exitWith {};
waitUntil {!isNull player};

switch (playerSide) do
{
	case west:
	{};
	
	case civilian:
	{
     player addEventHandler ["Fired", {
            if ({(_this select 0) distance getMarkerPos (_x select 0) < _x select 1} count SAFETY_ZONES > 0) then
            {
             deleteVehicle (_this select 6);
             titleText [MESSAGE, "PLAIN", 3];
             };
        }];  
	};
	
	case east:
	{};	
};