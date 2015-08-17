/*
    file: fn_takeOrgans.sqf
    author: [midgetgrimm] - www.grimmlife.com
    
    taken from the same idea of robbing script by tonic
*/
private["_unit"];
_unit = cursorTarget;
if(isNull _unit) exitWith {};
if((_unit getVariable ["missingOrgan",FALSE])) exitWith {};
if((player getVariable ["hasOrgan",FALSE])) exitWith {};
if((animationState _unit != "Incapacitated")) exitWith {};
if(!([false,"scalpel",1] call life_fnc_handleInv)) exitWith {hint "Você não tem Bisturí!"};
if(player == _unit) exitWith {};
if(!isPlayer _unit) exitWith {};
if(life_inv_kidney >= 2) exitWith {hint"Este jogador não tem orgãos!"};
if(!([true,"kidney",1] call life_fnc_handleInv)) exitWith {hint "Não há espaço para orgãos."};
life_action_inUse = true;
player setVariable["hasOrgan",true,true];
player playMove "AinvPknlMstpSnonWnonDnon_medic";
_unit say3D "punch_break";
sleep 3;
_unit setVariable["missingOrgan",true,true];
life_action_inUse = false;
[[player], "life_fnc_hasOrgan", _unit, false] spawn life_fnc_MP;