/*
    File: fn_seizePlayerWeaponAction.sqf
    Author: Skalicon
    Description:
    Removes the players weapons client side
*/
removeAllWeapons player;
removeuniform player;
removevest player;
removebackpack player;
removeheadgear player;
removegoggles player;
[] call life_fnc_civFetchGear;
[] call life_fnc_sessionUpdate; //Should make weapon remove persistent
[] call life_fnc_civLoadGear;
titleText["Suas armas e itens foram apreendidos.","PLAIN"];