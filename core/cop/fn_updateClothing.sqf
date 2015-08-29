#include <macro.h>
/*

	Updates player clothing by replacing vanilla by custom ones

*/

private["_uniform"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
if (isNull _unit) exitWith {};

_police = (side _unit == west);
_medic = (side _unit == independent);
_civilian = (side _unit == civilian);
_isNpc = false;

if (["npc_",str _unit] call BIS_fnc_inString && !isPlayer _unit) then 
{
	_isNpc = true;
	if (["cop",str _unit] call BIS_fnc_inString) then 
	{
		_police = true;
		_medic = false;
	} else {
		if (["medic",str _unit] call BIS_fnc_inString) then 
		{
			_medic = true;
			_police = false;
		};
	};
};

///Uniform
_uniform = uniform _unit;

switch(true) do
{
	case (_police && _uniform == "U_Rangemaster"):
	{
		_unit setObjectTextureGlobal  [0, "textures\cop_skins\uniforme\police_uniform.paa"];
	};
	case (_police && _uniform == "U_B_CTRG_1"):
	{
		_unit setObjectTextureGlobal  [0, "textures\cop_skins\uniforme\police_gen.paa"];
	};
	case (_medic && _uniform == "U_Rangemaster"):
	{
		_unit setObjectTextureGlobal  [0, "textures\medic_uniform.jpg"];
	};
	case (_police && _uniform == "U_B_CombatUniform_mcam_vest"):
	{
		_unit setObjectTextureGlobal  [0, "textures\cop_skins\uniforme\police_com.paa"];
	};
	case (_police && _uniform == "U_B_CTRG_3"):
	{
		_unit setObjectTextureGlobal  [0, "textures\cop_skins\uniforme\police_lieu.paa"];
	};
	case (_police && _uniform == "U_B_SpecopsUniform_sgg"):
	{
		_unit setObjectTextureGlobal  [0, "textures\cop_skins\uniforme\police_cap.paa"];
	};
	case (_civilian && _uniform == "U_C_WorkerCoveralls"):
	{
		_unit setObjectTextureGlobal  [0, "textures\civ_skins\uniforme\prisoner_uniform.paa"];
	};
	case (_civilian && _uniform == "U_C_Scientist"):
	{
		_unit setObjectTextureGlobal  [0, "textures\civ_skins\uniforme\civ_habbit_depanneur.paa"];
	};
};
