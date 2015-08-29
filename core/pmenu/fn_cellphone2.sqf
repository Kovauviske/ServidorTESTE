/*
File: fn_cellphone2.sqf
Author: Fuzz
 
Description:
With no radio cant use Cellphone
*/
 
 
if("ItemRadio" in assignedItems player) then {
	createDialog "Life_cell_phone";
}else{
 
hint parseText format ["<t size='1.30' font='puristaMedium' align='center' color='#0D82DF'>Pas de Cellulaire</t><br/><br/>
<t size='0.90 'font='puristaLight' align='left'>Vous devez avoir un téléphone cellulaire pour appeler. Vous Pouvez lacheter dans le magasin general</t><br/>"];
};