/*
	File: fn_fadeSound.sqf
	Auhtor: Michael Francis
	
	Description:
	Fades out sound.
*/
life_fadeSound = !life_fadeSound;

if (life_fadeSound) then 
{
	1 fadeSound 0.1; // Faded to 10%
	titleText ["Seu Som foi reduzido em 90%.", "PLAIN"];
}
else
{
	1 fadeSound 1; // Returned to 100%
	titleText ["Som de volta ao normal.", "PLAIN"];
};