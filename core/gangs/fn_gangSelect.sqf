






if((player getVariable "restrained")) exitWith {hint "Vous êtes attaché !";closeDialog 0;closeDialog 0;};

if(isNil "life_action_gangInUse") then {

	if(isNil {(group player) getVariable "gang_owner"} && isNull life_my_gang) then {
		createDialog "life_Gang_Select";
		} 
		else 
		{
		 if (!isNull life_my_gang)then
			{
			createDialog "Life_My_Gang_DiagOld";
			}
			else
			{	 
			[] spawn life_fnc_gangMenu;
			};
		};
	};
	


//else{
//if(!isNull life_my_gang) then
//{
//	createDialog "Life_My_Gang_DiagOld";
//}
//	else
//{
//	createDialog "life_Gang_Select";
//};