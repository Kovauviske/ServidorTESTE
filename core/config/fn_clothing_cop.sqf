#include <macro.h>
/*
	File: fn_clothing_cop.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master config file for Cop clothing store.
*/
private["_filter","_ret"];
_filter = [_this,0,0,[0]] call BIS_fnc_param;
//Classname, Custom Display name (use nil for Cfg->DisplayName, price

//Shop Title Name
ctrlSetText[3103,"Altis Police Department Shop"];

_ret = [];
switch (_filter) do
{
	//Uniforms
	case 0:
	{
		_ret pushBack ["U_Rangemaster","Uniforme de Police",25];
		if(__GETC__(life_coplevel) == 4) then
		{
			_ret pushBack ["U_B_CTRG_3",nil,350];
		};
		if(__GETC__(life_coplevel) == 5) then
		{
			_ret pushBack ["U_B_SpecopsUniform_sgg",nil,350];
		};
		if(__GETC__(life_coplevel) == 6) then
		{
			_ret pushBack ["U_B_CombatUniform_mcam_vest",nil,350];
		};
		if(__GETC__(life_coplevel) == 7) then
		{
			_ret pushBack ["U_B_CTRG_1",nil,550];
		};
	};
	
	//Hats
	case 1:
	{
		_ret pushBack ["H_Cap_police","Casquette de Police",175];
		if(__GETC__(life_coplevel) > 1) then
		{
			_ret pushBack ["H_Booniehat_dgtl","Chapeau Camo",300];
		};
		if(__GETC__(life_coplevel) > 3) then
		{
			_ret pushBack ["H_HelmetB_black","Casque Tactique",300];
			_ret pushBack ["H_HelmetSpecB_blk","Casque Tactique2",300];
			_ret pushBack ["H_HelmetB_light_black","Casque Tactique Leger",300];
		};
		if(__GETC__(life_coplevel) > 4) then
		{
			_ret pushBack ["H_CrewHelmetHeli_B","Masque a Gaz",3000];
		};
		if(__GETC__(life_coplevel) > 6) then
		{
			_ret pushBack ["H_Beret_02","Beret Chef-police",300];
		};
	};
	
	//Glasses
	case 2:
	{
		if(__GETC__(life_coplevel) > 0) then
		{
			_ret pushBack ["G_Shades_Black",nil,25];
			_ret pushBack ["G_Shades_Blue",nil,20];
			_ret pushBack ["G_Sport_Blackred",nil,20];
			_ret pushBack ["G_Sport_Checkered",nil,20];
			_ret pushBack ["G_Sport_Blackyellow",nil,20];
			_ret pushBack ["G_Sport_BlackWhite",nil,20];
			_ret pushBack ["G_Aviator",nil,75];
			_ret pushBack ["G_Squares",nil,10];
			_ret pushBack ["G_Lowprofile",nil,30];
			_ret pushBack ["G_Combat",nil,55];
		};
		if(__GETC__(life_coplevel) > 3) then
		{
			_ret pushBack ["G_Balaclava_blk","Cagoule",25];
			_ret pushBack ["G_Bandanna_blk","Bandana Noir",25];
		};
	};
	
	//Vest
	case 3:
	{
		_ret pushBack ["V_TacVest_blk_POLICE",nil,2500];
		if(__GETC__(life_coplevel) > 6) then
		{
			_ret pushBack ["V_PlateCarrierGL_blk","Veste d'intervention Tactique Ultra-lourd",800];
			_ret pushBack ["V_PlateCarrier1_blk","Veste d'intervention Tactique",800];
			_ret pushBack ["V_PlateCarrierH_CTRG","Veste d'intervention Tactique Lourd",800];
			_ret pushBack ["V_PlateCarrierSpec_blk","Veste d'intervention Tactique Lourd2",800];
		};
		
	};
	
	//Backpacks
	case 4:
	{
		_ret =
		[
			["B_Kitbag_cbr","Sac beige",0],
			["B_FieldPack_cbr","Sac compact",0],
			["B_AssaultPack_cbr","Sac d'assault",0],
			["B_Bergen_sgg","Sac tactique",0],
			["B_Carryall_cbr","Gros sac",1500]
		];
	};
};

_ret;