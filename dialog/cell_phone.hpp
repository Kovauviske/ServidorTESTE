class Life_cell_phone {
	idd = 3000;
	name= "life_cell_phone";
	movingEnable = false;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_cellphone";
	
	class controlsBackground {
		
		class MainBackground:Life_RscPictureKeepAspect {
			idc = -1;
			text = "images\phone2.paa";			
			colorBackground[] = {0, 0, 0, 0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		
	};
	
	class controls {

		class TextTime : Life_RscStructuredText
		{
			idc = 90035;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.75};
			x = 0; y = 0.128;
			w = 1; h = 0.05;
		};
		
		class TextStatusLeft : Life_RscStructuredText
		{
			idc = 90036;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.75};
			x = 0.51 - (0.08 * 2) - 0.005; y = 0.128;
			w = 0.3; h = 0.05;
		};
		
		class TextStatusRight : Life_RscStructuredText
		{
			idc = 90037;
			text = "";
			colorBackground[] = {0, 0, 0, 0};
			colorText[] = {1, 1, 1, 0.75};
			x = 0.32; y = 0.128;
			w = 1 - (0.34 * 2) - 0.02; h = 0.05;
			class Attributes {
				align = "right";
			};
		};
		
		class TextToSend : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 3002;
			text = "Message a envoyer:";
			x = 0.5 - (0.08 * 2);
			y = 0.23;
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			h = (1 / 25);
		};
		
		class textEdit : Life_RscEdit {
			idc = 3003;
			text = "";
			sizeEx = 0.030;
			x = 0.5 - (0.08 * 2); y = 0.28;
			w = 1 - ((0.5 - (0.08 * 2)) * 2); h = 0.03;
		};
		
		class TextMsgButton : life_RscButtonMenu 
		{
			idc = 3015;
			text = "SMS";
			colorBackground[] = {0,0.6,0.298,0.5};
			onButtonClick = "[] call TON_fnc_cell_textmsg";
			
			x = 1 - 0.34 - 0.075;
			y = 0.35;
			w = 0.075;
			h = (1 / 25);
		};
		
		class PlayerList : Life_RscCombo 
		{
			idc = 3004;
			x = 0.34; y = 0.35;
			w = 1 - ((0.5 - (0.08 * 2)) * 2) - 0.08; h = (1 / 25);
		};

		class TextCopButton : life_RscButtonMenu 
		{
			idc = 3016;
			text = "Envoyer aux Police";
			colorBackground[] = {0,0.6,0.298,0.5};
			onButtonClick = "[] call TON_fnc_cell_textcop";
			
			x = 0.5 - (0.08 * 2);
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			y = 0.4;
			h = (1 / 25);
		};
		
		class TextAdminButton : life_RscButtonMenu 
		{
			idc = 3017;
			text = "Envoyer aux Admin";
			colorBackground[] = {0,0.6,0.298,0.5};
			onButtonClick = "[] call TON_fnc_cell_textadmin";
			
			x = 0.5 - (0.08 * 2);
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			y = 0.45;
			h = (1 / 25);
		};
		
		class MedMsgButton : life_RscButtonMenu 
		{
			idc = 3023;
			text = "Envoyer aux Medecin";
			colorBackground[] = {0,0.6,0.298,0.5};
			onButtonClick = "[] call TON_fnc_cell_emsrequest";
			
			x = 0.5 - (0.08 * 2);
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			y = 0.55;
			h = (1 / 25);
		};
		
		class AdminMsgButton : life_RscButtonMenu 
		{
			idc = 3022;
			text = "Envoyer aux Dépanneur";
			colorBackground[] = {0,0.6,0.298,0.5};
			onButtonClick = "[] call TON_fnc_cell_deprequest";
			
			x = 0.5 - (0.08 * 2);
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			y = 0.5;
			h = (1 / 25);
		};
		
		class AdminMsgAllButton : life_RscButtonMenu 
		{
			idc = 3021;
			text = "Message a Tous";
			colorBackground[] = {0,0.6,0.298,0.5};
			onButtonClick = "[] call TON_fnc_cell_adminmsgall";
			
			x = 0.5 - (0.08 * 2);
			w = 1 - ((0.5 - (0.08 * 2)) * 2);
			y = 0.6;
			h = (1 / 25);
		};
		
		class ButtonClose : Life_RscButtonInvisible {
			idc = -1;
			shortcuts[] = {0x00050000 + 2};
			text = "";
			onButtonClick = "closeDialog 0;";
			tooltip = "Retourner au menu d'aceuille";
			x = 0.5 - ((6.25 / 40) / 2);
			y = 1 - 0.15;
			w = (6.25 / 40);
			h = (6.25 / 40);
		};
	};
};