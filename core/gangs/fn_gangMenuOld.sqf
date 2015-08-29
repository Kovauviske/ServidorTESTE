/*
	File: fn_gangMenu.sqf
	Author: [LLD] Team
	
	Description:
	Checks whether it needs to open the gang management menu or the choice menu.
*/
if((player getVariable "restrained")) exitWith {hint "Vous êtes attaché !";closeDialog 0;};
if(!isNull life_my_gang) then
{
	createDialog "Life_My_Gang_DiagOld";
}
	else
{
	createDialog "Life_Gang_Prompt";
};