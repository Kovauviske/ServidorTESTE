/*file:fn_breathalyzer author:[midgetgrimm] descrip:allows cop to breathalyze player*/
private["_cop","_drinky"];
_cop = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if(isNull _cop) exitWith {};
_drinky = life_drink;
if(_drinky > 0.04) then {
[[1,format["Teste de álcool do jogado: %1 \n\n Teor alcolico: %2 \n\n Ele está acima do limite ",name player,[_drinky] call life_fnc_numberText]],"life_fnc_broadcast",_cop,false] spawn life_fnc_MP;
} else {
[[1,format["Teste de álcool %1 \n\n Teor alcolico: %2 \n\n Ele está abaixo do limite",name player,[_drinky] call life_fnc_numberText]],"life_fnc_broadcast",_cop,false] spawn life_fnc_MP;
};