/*
Author : Fuzz [DoG]
description: reduire le son dans le jeu.
*/

if (isNil "wakPlugs") then {
wakPlugs = false;
};
if (wakPlugs) then {
    wakPlugs = false;
    0.5 fadeSound 1;
	hint composeText [ image "icons\nobouchon.paa", " Bouchons Retirés" ];
	systemChat "vous avez enlevé les bouchons oreilles.";
} else {
    wakPlugs = true;
    0.5 fadeSound 0.1;
	hint composeText [ image "icons\bouchon.paa", " Bouchons Mis" ];
	systemChat "vous avez mis les bouchons oreilles.";
};