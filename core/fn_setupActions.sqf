/*
	File: fn_setupActions.sqf
	
	Description:
	Master addAction file handler for all client-based actions.
*/
switch (playerSide) do
{
	case civilian:
	{
		//Drop fishing net
		life_actions = [player addAction[localize "STR_pAct_DropFishingNet",life_fnc_dropFishingNet,"",0,false,false,"",'
		(surfaceisWater (getPos vehicle player)) && (vehicle player isKindOf "Ship") && life_carryWeight < life_maxWeight && speed (vehicle player) < 2 && speed (vehicle player) > -1 && !life_net_dropped ']];
		//Rob person
		life_actions = life_actions + [player addAction[localize "STR_pAct_RobPerson",life_fnc_robAction,"",0,false,false,"",'
		!isNull cursorTarget && player distance cursorTarget < 3.5 && isPlayer cursorTarget && animationState cursorTarget == "Incapacitated" && !(cursorTarget getVariable["robbed",FALSE]) ']];
	};
	case west:
	{
		//éparpiller la boucanne
		life_actions = [player addAction["<t color='#FF0000'>Éparpiller la boucanne</t>",life_fnc_extinguishJoint,"",6, false, true, "",' !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && animationState cursorTarget == "AmovPercMstpSnonWnonDnon_Ease" && (cursorTarget getVariable ["restrained",false]) && (side cursorTarget == civilian) && player distance cursorTarget < 2.5 && (cursorTarget getVariable ["smoke_weed",false]) && (cursorTarget getVariable ["restrained",false]) ']];
		//test de Drogue
		life_actions = [player addAction["Test de drogues",life_fnc_drugtestAction,cursorTarget,0,false,true,"",' !isNull cursorTarget && cursorTarget isKindOf "Man" && (isPlayer cursorTarget) && animationState cursorTarget == "AmovPercMstpSnonWnonDnon_Ease" && (cursorTarget getVariable ["restrained",false]) && (side cursorTarget == civilian) && player distance cursorTarget < 2.5 && !(cursorTarget getVariable "Escorting") ']];
		
		//Reprendre la herse
		life_actions = life_actions + [player addAction["<t color='#FFFF33'>Remballer la herse</t>",life_fnc_packupSpikes,"",140,false,false,"",' _spikes = nearestObjects[getPos player,["Land_Razorwire_F"],8] select 0; !isNil "_spikes" && !isNil {(_spikes getVariable "item")}']];
		// se soigner
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Soigner</t>",life_fnc_heal,"",99,false,false,"",' vehicle player == player && ((damage player) > 0 OR (damage cursortarget > 0 && cursortarget isKindOf "Man" && alive cursortarget)) && ("Medikit" in (items player))']];
		// enlever ovjet a terre
		life_actions = life_actions + [player addAction["Enlever les Objets par Terre",life_fnc_seizeObjects,cursorTarget,0,false,false,"",'count(nearestObjects [player,["weaponholder"],3])>0']];
	};
	case independent:
	{
		// se soigner
		life_actions = life_actions + [player addAction["<t color='#FF0000'>Soigner</t>",life_fnc_heal,"",99,false,false,"",' vehicle player == player && ((damage player) > 0 OR (damage cursortarget > 0 && cursortarget isKindOf "Man" && alive cursortarget)) && ("Medikit" in (items player))']];
	};
};