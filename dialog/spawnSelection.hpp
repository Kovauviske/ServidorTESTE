class life_spawn_selection
{
	idd = 38500;
	movingEnabled = false;
	enableSimulation = true;
	
	class controlsBackground
	{
		class IGUIBack_22070: Life_RscPicture
		{
			idc = 22070;
			text = "textures\bgS.jpg";
			x = -0.015625 * safezoneW + safezoneX;
			y = -0.00599999 * safezoneH + safezoneY;
			w = 1.01578 * safezoneW;
			h = 1.012 * safezoneH;
		};
		
		class RscPicture_12501: Life_RscPicture
		{
			idc = 12501;
			text = "textures\WindowSU.paa";
			x = 0.144219 * safezoneW + safezoneX;
			y = 0.16 * safezoneH + safezoneY;
			w = 0.185625 * safezoneW;
			h = 0.473 * safezoneH;
		};

		class RscPicture_129501: Life_RscPicture
		{
			idc = 129501;
			text = "textures\windowL.paa";
			x = 0.371093 * safezoneW + safezoneX;
			y = 0.207 * safezoneH + safezoneY;
			w = 0.33 * safezoneW;
			h = 0.473 * safezoneH;
		};
		
		class MapView : Life_RscMapControl 
		{
			idc = 38502;
			x = 0.374251 * safezoneW + safezoneX;
			y = 0.227 * safezoneH + safezoneY;
			w = 0.314531 * safezoneW;
			h = 0.447 * safezoneH;
			maxSatelliteAlpha = 0.75;
			alphaFadeStartScale = 1.15;
			alphaFadeEndScale = 1.29;
		};
	};
	
	class controls
	{	
		class SpawnPointList: Life_RscListNBox
		{
			idc = 38510;
			text = "";
			sizeEx = 0.025;
			coloumns[] = {0,0,0.9};
			drawSideArrows = false;
			idcLeft = -1;
			idcRight = -1;
			rowHeight = 0.050;
			x = 0.159687 * safezoneW + safezoneX;
			y = 0.290 * safezoneH + safezoneY;
			w = 0.0876563 * safezoneW;
			h = 0.33 * safezoneH;
			onLBSelChanged = "_this call life_fnc_spawnPointSelected;";
		};
		
		class spawnButton : MyActiveText
		{
			idc = -1;
			text = "textures\spawnB.paa";
			onButtonClick = "[] call life_fnc_spawnConfirm";
			x = 0.257656 * safezoneW + safezoneX;
			y = 0.570 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.11 * safezoneH;
		};	
	};
};