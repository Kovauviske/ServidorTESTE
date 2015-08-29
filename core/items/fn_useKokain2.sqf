/*
	File: fn_useKokain2.sqf
	By: Fuzz for LLD
	Description:
	Une belle petite Effet pour la Cocaine :P
*/
private["_dmg","_count"];

if(life_drugged_cocaine < 1) then { life_drugged_cocaine = 1; } else {life_drugged_cocaine = life_drugged_cocaine + 1;};

// Overdose
if ( life_drugged_cocaine > 2) then
{
	_dmg = (damage player) + 0.5;
	life_drugged_cocaine = life_drugged_cocaine - 1;
	
	if (_dmg < 1.0) then
	{
		hint "Vous allez souffrir des dommages interne en raison d'une overdose!";
		player setFatigue 1;
		player setDamage _dmg;
	} else {
		hint "Vous allez mourrir d'une overdose!";
		player setDamage 1;
	};
} else {
	sleep 5;
	titleText["Vous obtenez des «super pouvoirs» pendant 10 minutes! Faites attention à votre faim!","PLAIN"];
	player enableFatigue false;
	player setDamage 0;
	player setVariable["drug_cocaine",true,true];

	for [{_x=0},{_x < life_drugged_cocaine_duration * 4 && Alive player},{_x=_x+1}] do
	{
		if(_x % 4 == 0) then
		{
			life_hunger = life_hunger - 5;
			[] spawn life_fnc_hudUpdate;
		};
		sleep 15;	
	};
	
	life_drugged_cocaine = life_drugged_cocaine - 1;

	_count = 0;
	while{life_drugged_cocaine < 1 && Alive player} do 
	{
		player enableFatigue true;
		if(life_drugged_cocaine < 0 OR _count > 100) exitWith { life_drugged_cocaine = -1; hint "Vous n'êtes plus accro à la cocaïne.";};
		
		if(_count < 1) then {hint "Vous êtes maintenant épuisé et affaibli en raison d'une overdose! Fumer un joint ou prennez plus de temps pour vous reposer";};
		
		if(_count % 10 == 0) then
		{
			player setFatigue 1;
			player setDamage (damage player) + 0.1;	
			[] spawn life_fnc_hudUpdate;
		};
		
		_count = _count + 1;
		
		sleep 12;
	};
	
	if(life_drugged_cocaine < 0 || !Alive player) then { player setVariable["drug_cocaine",false,true]; life_drugged_cocaine = -1; };

};