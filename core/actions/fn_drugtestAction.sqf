/*
	File: fn_drugtestAction.sqf
	By: Fuzz for LLD
	Description:
	Prise de Sang pour voir si le Suspect a prit de la Drogue :P
*/
private["_unit","_dText","_weed","_cocaine","_pbrau","_sprit","_heroin","_alk"];

_unit = cursorTarget;
if(isNull _unit) exitWith {};

hint "Prise de Sang en Cours.....";
sleep 2;

if(player distance _unit > 5 || !alive player || !alive _unit) exitWith {hint "Le test a échoué."};

if(_unit getVariable["drug_weed",false]) then { _weed = "Positif"; } else { _weed = "Negatif"; };
if(_unit getVariable["drug_cocaine",false]) then { _cocaine = "Positif"; } else { _cocaine = "Negatif"; };
if(_unit getVariable["drug_heroin",false]) then { _heroin = "Positif"; } else { _heroin = "Negatif"; };

hint parseText format["<t color='#FF0000'><t size='1'>%1</t></t><br/><t color='#FFD700'>Marijuana: </t>%2<br/><t color='#FFD700'>Cocaine: </t>%3<br/><t color='<t color='#FFD700'>Heroine: </t>%4<br/><t color='#FF0000'>%4</t>"
,name _unit,_weed,_cocaine,_heroin];