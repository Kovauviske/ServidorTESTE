/*
File: fn_disableAnimals.sqf
Author: ColinM
Description: Remove ambient snakes and Rabbits.
Credits: Lala14 AddRabbits: Slift (Fr)
*/

[] spawn {
while {true} do {
{
if ((agent _x isKindOf "Snake_random_F") || (agent _x isKindOf "Rabbit_F")) then { deleteVehicle agent _x; };
}forEach agents;
sleep 2;
};
};