/*
	Will be revised later
*/
if(!("Medikit" in (items player))) exitWith {};
if (damage player > 0) then {
player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
sleep 3;
player setDamage 0;
} else {
	_unit = cursortarget;
	if (!(_unit isKindOf "Man")) exitWith {}; 
	if (damage _unit == 0) exitWith {};
	player playMove "AinvPknlMstpSnonWnonDnon_medic_1";
	sleep 3;
	_unit setDamage 0;
};