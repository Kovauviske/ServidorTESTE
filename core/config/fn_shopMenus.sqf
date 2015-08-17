#include <macro.h>
/*
	File: fn_shopMenus.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master config for a thing that will be gone eventually..
*/
private["_shop"];
_shop = [_this,0,"",[""]] call BIS_fnc_param;
if(_shop == "") exitWith {closeDialog 0;};

if(!dialog) then {
	if(!(createDialog "shop_menu")) exitWith {};
};
disableSerialization;
ctrlSetText[601,format["Cash: $%1",[CASH] call life_fnc_numberText]];

switch (_shop) do
{
	case "reb":
	{
		ctrlSetText[2505,"Loja Rebelde"];
		ctrlShow[2503,false];
		ctrlShow[2513,false];
		ctrlShow[2514,false];
	};
	
	case "cop":
	{
		ctrlSetText[2505,"Loja Policial"];
		ctrlShow[2503,false];
	};
	
	case "adac":
	{
		ctrlSetText[2505,"Loja Brasforte"];
		ctrlShow[2503,false];
	};
	
	case "gun":
	{
		ctrlSetText[2505,"Loja de Armas"];
		ctrlShow[2503,false];
		ctrlShow[2513,false];
		ctrlShow[2514,false];
	};
	
	case "gang":
	{
		ctrlSetText[2505,"Loja de Gangue"];
		ctrlShow[2503,false];
		ctrlShow[2513,false];
		ctrlShow[2514,false];
	};
	
	case "dive":
	{
		ctrlSetText[2505,"Loja de Mergulho"];
		ctrlShow[2503,false];
		ctrlShow[2510,false];
		ctrlShow[2511,false];
		ctrlShow[2513,false];
	};
	
	case "donator":
	{
		ctrlSetText[2505,"Loja VIP"];
	};
	
	case "recruta":
	{
		ctrlSetText[2505,"Loja de Recruta"];
		ctrlShow[2503,false];
	};	
	
	case "soldado":
	{
		ctrlSetText[2505,"Loja de Soldado"];
		ctrlShow[2503,false];
	};	
	
	case "sergeant":
	{
		ctrlSetText[2505,"Loja de Sargento"];
		ctrlShow[2503,false];
	};
	
	case "tenente":
	{
		ctrlSetText[2505,"Loja de Tenente"];
		ctrlShow[2503,false];
	};
	
	case "capitao":
	{
		ctrlSetText[2505,"Loja de Capitão"];
		ctrlShow[2503,false];
	};
	
	case "major":
	{
		ctrlSetText[2505,"Loja de Major"];
		ctrlShow[2503,false];
	};
	
	case "coronel":
	{
		ctrlSetText[2505,"Loja de Coronel"];
		ctrlShow[2503,false];
	};	
	
	case "gen":
	{
		ctrlSetText[2505,"Altis General Store"];
		ctrlShow[2503,false];
	};
	
	case "officer":
	{
		ctrlSetText[2505,"Loja da PRF"];
		ctrlShow[2503,false];
	};
	
	case "admin":
	{
		ctrlSetText[2505,"Loja de Admin"];
	};
};

["guns"] call life_fnc_shops_changeMenu;
