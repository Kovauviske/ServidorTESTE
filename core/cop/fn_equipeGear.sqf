#include <macro.h>
/*
	File: fn_equipGear.sqf
	Author: John "Paratus" VanderZwet

	Description:
	Initializes custom gear textures
*/

//Retexturing of units clothing, vanilla files only retexture the EMS unit.
switch(playerSide) do {
	case independent: {

		if (uniform player == "U_B_CombatUniform_mcam_vest") then
			{
			player setObjectTextureGlobal [0,"textures\Uniformes\Samu\uniforme.paa"];
		};

	};
	case west: {
		(unitBackpack player) setObjectTextureGlobal [0, ""];
         
		if(uniform player == "U_Rangemaster") then {
			switch (FETCH_CONST(life_coplevel)) do
			{
				case 1:	{player setObjectTextureGlobal[0,"textures\Uniformes\Policia\roupa_recruta.paa"];};
				case 2:	{player setObjectTextureGlobal[0,"textures\Uniformes\Policia\roupa_soldado.paa"];};
				case 3:	{player setObjectTextureGlobal[0,"textures\Uniformes\Policia\roupa_sargento.paa"];};
				case 4:	{player setObjectTextureGlobal[0,"textures\Uniformes\Policia\roupa_tenente.paa"];};
				case 5:	{player setObjectTextureGlobal[0,"textures\Uniformes\Policia\roupa_capitao.paa"];};
				case 6:	{player setObjectTextureGlobal[0,"textures\Uniformes\Policia\roupa_major.paa"];};
				case 7:	{player setObjectTextureGlobal[0,"textures\Uniformes\Policia\roupa_Coronel.paa"];};
			};
		};
        if (license_cop_bope) then
			{
			(unitBackpack player) setObjectTextureGlobal [0, ""];
		    if (uniform player == "U_I_CombatUniform_shortsleeve") then
				{
				player setObjectTextureGlobal [0,"textures\Roupas\Policia\roupa_bope.paa"];
			};	
		};
	};	