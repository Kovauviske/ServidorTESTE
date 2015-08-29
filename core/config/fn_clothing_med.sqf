#include <macro.h>
/*
	File: fn_clothing_med.sqf
	Author: (SOA) Fuzz
	
	Description:
	Master config file for Cop clothing store.
*/
private["_filter","_ret"];
_filter = [_this,0,0,[0]] call BIS_fnc_param;
//Classname, Custom Display name (use nil for Cfg->DisplayName, price

//Shop Title Name
ctrlSetText[3103,"Altis Infirmier Department Shop"];

_ret = [];
switch (_filter) do
{
	//Uniforms
	case 0:
	{
		_ret pushBack ["U_Rangemaster","Uniforme Médecin",25];
	};
	
	//Hats
	case 1:
	{
		_ret = 
		[
			["H_Cap_red",nil,250],
			["H_Cap_blu",nil,250],
			["H_Cap_blk",nil,250],
			["H_Cap_brn_SPECOPS",nil,250],
			["H_Cap_oli_hs",nil,250]
		];
	};
	
	//Glasses
	case 2:
	{
		_ret = 
		[
			["G_Shades_Black",nil,25],
			["G_Shades_Blue",nil,20],
			["G_Sport_Blackred",nil,20],
			["G_Sport_Checkered",nil,20],
			["G_Sport_Blackyellow",nil,20],
			["G_Sport_BlackWhite",nil,20],
			["G_Aviator",nil,75],
			["G_Squares",nil,10],
			["G_Lowprofile",nil,30]
		];
	};
	
	//Vest
	case 3:
	{
		_ret pushBack ["V_BandollierB_blk",nil,800];
	};
	
	//Backpacks
	case 4:
	{
		_ret =
		[
			["B_FieldPack_ocamo",nil,3000]
		];
	};
};

_ret;