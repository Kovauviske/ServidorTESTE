#include <macro.h>
/*
	File: fn_pumpRepair.sqf
	
	Description:
	Quick simple action that is only temp.
*/
private["_method"];
if(CASH < 500) then
{
	if(BANK < 500) exitWith {_method = 0;};
	_method = 2;
}
	else
{
	_method = 1;
};

switch (_method) do
{
	case 0: {hint "Você não tem $500 em dinheiro na sua conta bancária."};
	case 1: {vehicle player setDamage 0; SUB(CASH,500); hint "Você reparou o veículo por $500";};
	case 2: {vehicle player setDamage 0; SUB(BANK,500); hint "Você reparou o veículo por $500";};
};