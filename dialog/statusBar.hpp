#define ST_RIGHT 0x01

class osefStatusBar {
	idd = -1;
	onLoad = "uiNamespace setVariable ['osefStatusBar', _this select 0]";
	onUnload = "uiNamespace setVariable ['osefStatusBar', objNull]";
	onDestroy = "uiNamespace setVariable ['osefStatusBar', objNull]";
	fadein = 0;
	fadeout = 0;
	duration = 10e10;
	movingEnable = 0;
	controlsBackground[] = {};
	objects[] = {};
	class controls {
		class statusBarText {
			idc = 1000;
			x = safezoneX + safezoneW - 1.3;
			y = safezoneY + safezoneH - 0.08;
			w = 1.3;
			h = 0.03;
			shadow = 2;
			colorBackground[] = { 1, 0.3, 0, 0.0 };  // uncomment and increase 4th number to have a background
			font = "Arial";
			size = 0.031;
			type = 13;
			style = 1;
			text="Carregando StatusBar...";
			class Attributes {
				align="right";
				color = "#FFA500";
			};
		};
	};
};