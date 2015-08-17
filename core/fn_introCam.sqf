/*
	File: fn_serverIntro.sqf
*/
 
private ["_xCord","_yCord","_camera","_camDistance"];
_camDistance = 5;
_xCord = random 10000;if(_xCord < 8000) then {_xCord = 8000;};//-----------------CHANGE THESE NUMBERS BACK TO 8000(Purge)
_yCord = random 10000;if(_yCord < 8000) then {_yCord = 8000;};
waitUntil { alive player };
//waituntil {!isnull (finddisplay 46)};
showCinemaBorder true;
camUseNVG false;

player allowDamage false;

[] execVM "core\welcomecredits.sqf";

_camera = "camera" camCreate [(position player select 0)+_xCord, (position player select 1)+_yCord,(position player select 2)+(_camDistance*2)];
_camera cameraEffect ["internal","back"];
 
_camera camSetFOV 2.000;
_camera camCommit 0;
waitUntil {camCommitted _camera};

_UID = getPlayerUID player;
validUIDList = 
["0","0"];//Added zero to each one(Purge)

if(!(_UID in validUIDList)) then {

_camera camSetTarget [(position player select 0), (position player select 1)+2,(position player select 2)+(_camDistance/2)];
_camera camSetRelPos [0,0,(_camDistance)];
_camera camCommit 6;
waitUntil {camCommitted _camera};

}
else
{
_camera camSetTarget [(position player select 0), (position player select 1)+2,(position player select 2)+(_camDistance/2)];
_camera camSetRelPos [0,0,(_camDistance)];
_camera camCommit 1;//CHANGE TO 1
waitUntil {camCommitted _camera};
};

_camera camSetTarget vehicle player;
_camera camSetRelPos [0,0,(_camDistance)];//Did say (/4)
_camera camCommit 4;//CHANGE TO 2
waitUntil {camCommitted _camera};

_camera camSetTarget vehicle player;
_camera camSetRelPos [0,0,2];
_camera camCommit 1;//CHANGE TO 1
waitUntil {camCommitted _camera};

vehicle player switchCamera "EXTERNAL";
_camera cameraEffect ["terminate","back"];
camDestroy _camera;
sleep 1;

player allowDamage true;
enableEnvironment false;