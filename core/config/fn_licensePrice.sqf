/*
	File: fn_licensePrice.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Returns the license price.
*/
private["_type"];
_type = [_this,0,"",[""]] call BIS_fnc_param;
if(_type == "") exitWith {-1};

switch (_type) do
{
	case "driver": {7500}; //Drivers License cost
	case "boat": {50000}; //Boating license cost
	case "pilot": {65000}; //Pilot/air license cost
	case "gun": {75000}; //Firearm/gun license cost
	case "dive": {30000}; //Diving license cost
	case "oil": {6000}; //Oil processing license cost
	case "cair": {15000}; //Cop Pilot License cost
	case "swat": {35000}; //Swat License cost
	case "cg": {8000}; //Coast guard license cost
	case "heroin": {50000}; //Heroin processing license cost
	case "marijuana": {25000}; //Marijuana processing license cost
	case "medmarijuana": {1500}; //Medical Marijuana processing license cost
	case "gang": {10000}; //Gang license cost
	case "rebel": {1500000}; //Rebel license cost
	case "truck": {35000}; //Truck license cost
	case "diamond": {10000};
	case "salt": {5000};
	case "cocaine": {40000};
	case "sand": {7500};
	case "iron": {4000};
	case "copper": {7000};
	case "cement": {5000};
	case "mair": {15000};
	case "home": {250000};
};