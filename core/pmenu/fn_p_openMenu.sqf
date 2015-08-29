/*
	File: fn_p_openMenu.sqf
	Author: Fuzz
	
	Description:
	Opens the players smartphone
*/

private ["_buttons","_display","_sync","_message","_money","_inventory","_button","_text","_lastButton","_time","_hour","_min","_admin","_gang","_keychain","_licenses","_settings","_wanted","_wanted2","_bourse","_craft","_roadblock"];

if(!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "smartphone";
disableSerialization;

_display = findDisplay 90000;
_sync = _display displayCtrl 90010;
_message = _display displayCtrl 90020;
_money = _display displayCtrl 90015;
_inventory = _display displayCtrl 90025;
_admin = _display displayCtrl 90030;
_gang = _display displayCtrl 90034;
_keychain = _display displayCtrl 90040;
_licenses = _display displayCtrl 90045;
_settings = _display displayCtrl 90050;
_wanted = _display displayCtrl 90055;
_wanted2 = _display displayCtrl 90060;
_bourse = _display displayCtrl 90065;
_craft = _display displayCtrl 90508;
_roadblock = _display displayCtrl 90509;

// Global buttons
_sync ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_sync.paa' /><br /><t size='0.65' color='#FFFFFF'>Sync</t></t>";
_message ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_message.paa' /><br /><t size='0.65' color='#FFFFFF'>Messages</t></t>";
_money ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_money.paa' /><br /><t size='0.65' color='#FFFFFF'>Argent</t></t>";
_inventory ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_inventory.paa' /><br /><t size='0.65' color='#FFFFFF'>Inventaire</t></t>";
_admin ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_admin.paa' /><br /><t size='0.65' color='#000000'>Admin</t></t>";
_gang ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_gang.paa' /><br /><t size='0.65' color='#000000'>Gang</t></t>";
_keychain ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_keychain.paa' /><br /><t size='0.65' color='#000000'>Clé</t></t>";
_licenses ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_licenses.paa' /><br /><t size='0.65' color='#000000'>Licences</t></t>";
_settings ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_settings.paa' /><br /><t size='0.65' color='#000000'>Parametre</t></t>";
_wanted ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_wanted.paa' /><br /><t size='0.65' color='#000000'>Interpol</t></t>";
_wanted2 ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_fingerprint.paa' /><br /><t size='0.65' color='#000000'>Interpol+</t></t>";
_bourse ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_group.paa' /><br /><t size='0.65' color='#000000'>Bourse</t></t>";
_craft ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_crafting.paa' /><br /><t size='0.65' color='#000000'>Crafting</t></t>";
_roadblock ctrlSetStructuredText parseText "<t align='center' shadow='0'><img size='2' image='icons\phone_roadblock.paa' /><br /><t size='0.65' color='#000000'>Barrages</t></t>";

[] spawn
{
	while {!isNull (findDisplay 90000)} do
	{
		[] call life_fnc_p_updateMenu;
		sleep 2;
	};
};