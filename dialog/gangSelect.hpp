#define GUI_GRID_X	(0)
#define GUI_GRID_Y	(0)
#define GUI_GRID_W	(0.025)
#define GUI_GRID_H	(0.04)
#define GUI_GRID_WAbs	(1)
#define GUI_GRID_HAbs	(1)
class Life_Gang_Select {
	idd = 2620;
	name= "life_Gang_Select";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "";
	
	class controlsBackground
	{
		class Life_RscTitleBackground: Life_RscText
		{
			idc = -1;

			x = 8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorBackground[] = {0,0.6,0.298,1};
		};
		class MainBackground: Life_RscText
		{
			idc = -1;

			x = 8.5 * GUI_GRID_W + GUI_GRID_X;
			y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 24 * GUI_GRID_W;
			h = 2 * GUI_GRID_H;
			colorBackground[] = {0,0,0,0.7};
		};
		class Title: Life_RscTitle
		{
			idc = 2629;
			text = "Selection type de Gang";

			x = 8 * GUI_GRID_W + GUI_GRID_X;
			y = 9.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 25 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {0.95,0.95,0.95,1};
		};
		class CloseLoadMenu: Life_RscButtonMenu
		{
			onButtonClick = "closeDialog 0;[] call life_fnc_p_updateMenu";

			idc = 1004;
			text = "Fermer"; //--- ToDo: Localize;
			x = 26 * GUI_GRID_W + GUI_GRID_X;
			y = 12.5 * GUI_GRID_H + GUI_GRID_Y;
			w = 6.25 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0,0,0.8};
		};
		class GangPerm: Life_RscButtonMenu
		{
			idc = 2622;
			onButtonClick = "createDialog ""Life_Create_Gang_Diag"";";
			
			text = "Familles"; //--- ToDo: Localize;
			x = 9.5 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 10.5 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0.6,0.298,0.5};
		};
		class GangOld: Life_RscButtonMenu
		{
			idc = 2624;
			onButtonClick = "[] call life_fnc_gangMenuOld";

			text = "Groupe"; //--- ToDo: Localize;
			x = 22 * GUI_GRID_W + GUI_GRID_X;
			y = 11 * GUI_GRID_H + GUI_GRID_Y;
			w = 10 * GUI_GRID_W;
			h = 1 * GUI_GRID_H;
			colorText[] = {1,1,1,1};
			colorBackground[] = {0,0.6,0.298,0.5};
		};
		};
};
////////////////////////////////////////////////////////
// GUI EDITOR OUTPUT END
////////////////////////////////////////////////////////
