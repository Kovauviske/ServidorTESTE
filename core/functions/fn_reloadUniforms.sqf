#include <macro.h>
/*
	COP UNIFORM SCRIPT
	Author: coldgas (http://altis.newhopeoutfit.de)
	Created for www.altisliferpg.com
*/
#define FETCH_CONST(var) (call var)

if(side player == west) then {
	// Basic cop uniform.
	if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) == 1)) then { 
		player setObjectTextureGlobal [0,"textures\uniformes\policia\recruta.jpg"];
	};
	// Basic cop uniform.
	if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) == 2)) then { 
		player setObjectTextureGlobal [0,"textures\uniformes\policia\soldado.jpg"];
	};
	// Basic cop uniform.
	if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) == 3)) then { 
		player setObjectTextureGlobal [0,"textures\uniformes\policia\sargento.jpg"];
	};
	// Basic cop uniform.
	if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) == 4)) then { 
		player setObjectTextureGlobal [0,"textures\uniformes\policia\tenente.jpg"];
	};
	// Basic cop uniform.
	if (uniform player == "U_Rangemaster" && (FETCH_CONST(life_coplevel) == 5)) then { 
		player setObjectTextureGlobal [0,"textures\uniformes\policia\capitao.jpg"];
	};
	// Basic cop uniform.
	if (uniform player == "U_B_SpecopsUniform_sgg" && (FETCH_CONST(life_coplevel) == 6)) then { 
		player setObjectTextureGlobal [0,"textures\uniformes\policia\major.jpg"];
	};
	// Basic cop uniform.
	if (uniform player == "U_B_SpecopsUniform_sgg" && (FETCH_CONST(life_coplevel) == 7)) then { 
		player setObjectTextureGlobal [0,"textures\uniformes\policia\coronel.jpg"];
	};
};

if(side player == civilian) then {
	// Prisoner 
	if(side player == civilian && uniform player == "U_C_WorkerCoveralls") then {
	player setObjectTextureGlobal [0, "textures\prisoneiro.jpg"];
	};
};