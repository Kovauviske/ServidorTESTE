/*
File: fn_seizePlayerWeapon.sqf
    Author: Skalicon
    
    Description:
    Preforms the seizePlayerWeaponAction script on the cursorTarget
*/
[[],"life_fnc_seizePlayerWeaponAction",cursorTarget,false] spawn life_fnc_MP;
//titleText format["Peguei uma arma de %1", name cursorTarget];
[[52, player, format["%1 foi desarmado", name cursorTarget]],"TON_fnc_logIt",false,false] spawn life_fnc_MP;