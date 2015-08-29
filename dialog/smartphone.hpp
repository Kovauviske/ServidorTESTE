class smartphone {

	idd = 90000;
	movingEnable = false;
	enableSimulation = true;
	
	class controlsBackground {
		
		class MainBackground:Life_RscPictureKeepAspect {
			idc = -1;
			text = "images\phone.paa";			
			colorBackground[] = {0, 0, 0, 0};
			x = 0;
			y = 0;
			w = 1;
			h = 1;
		};
		
	};
	
	class controls
	{
	
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
		
		class IconSyncData : Life_RscStructuredText {
			idc = 90010;
			x = 0.5 - (0.08 * 2);
			y = 1 - 0.22;
			w = 0.08;
			h = 0.11;
		};
		
		class IconMoney : Life_RscStructuredText {
			idc = 90015;
			x = 0.5 - (0.08 * 1);
			y = 1 - 0.22;
			w = 0.08;
			h = 0.11;
		};
		
		class IconMessage : Life_RscStructuredText {
			idc = 90020;
			x = 0.5;
			y = 1 - 0.22;
			w = 0.08;
			h = 0.11;
		};
		
		class IconInventory : Life_RscStructuredText {
			idc = 90025;
			x = 0.5 + (0.08 * 1);
			y = 1 - 0.22;
			w = 0.08;
			h = 0.11;
		};
		
		class IconAdmin : Life_RscStructuredText {
			idc = 90030;
			x = 0.5 - (0.08 * 2);
			y = 0.20;
			w = 0.08;
			h = 0.11;
		};
		
		class IconGang : Life_RscStructuredText {
			idc = 90034;
			x = 0.5 - (0.08 * 1);
			y = 0.20;
			w = 0.08;
			h = 0.11;
		};
		
		class IconKeychain : Life_RscStructuredText {
			idc = 90040;
			x = 0.5;
			y = 0.20;
			w = 0.08;
			h = 0.11;
		};
		
		class IconLicences : Life_RscStructuredText {
			idc = 90045;
			x = 0.5 + (0.08 * 1);
			y = 0.20;
			w = 0.08;
			h = 0.11;
		};
		
		class IconSettings : Life_RscStructuredText {
			idc = 90050;
			x = 0.5 - (0.08 * 2);
			y = 0.33;
			w = 0.08;
			h = 0.11;
		};
		
		class IconWanted : Life_RscStructuredText {
			idc = 90055;
			x = 0.5 - (0.08 * 1);
			y = 0.33;
			w = 0.08;
			h = 0.11;
		};
		
		class IconWanted2 : Life_RscStructuredText {
			idc = 90060;
			x = 0.5;
			y = 0.33;
			w = 0.08;
			h = 0.11;
		};
		
		class IconBourse : Life_RscStructuredText {
			idc = 90065;
			x = 0.5 + (0.08 * 1);
			y = 0.33;
			w = 0.08;
			h = 0.11;
		};

		class IconCraft : Life_RscStructuredText {
			idc = 90508;
			x = 0.5 - (0.08 * 2);
			y = 0.46;
			w = 0.08;
			h = 0.11;
		};
		
		class IconRoadBlock : Life_RscStructuredText {
			idc = 90509;
			x = 0.5 - (0.08 * 1);
			y = 0.46;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonClose : Life_RscButtonInvisible {
			idc = -1;
			shortcuts[] = {0x00050000 + 2};
			text = "";
			onButtonClick = "closeDialog 0;";
			tooltip = "éteindre ton SmartPhone";
			x = 0.5 - ((6.25 / 40) / 2);
			y = 1 - 0.15;
			w = (6.25 / 40);
			h = (6.25 / 40);
		};
		
		class ButtonCell : Life_RscButtonInvisible {
			idc = 90140;
			text = "";
			onButtonClick = "if (player getVariable[""restrained"",false]) then { hint ""Vous ne Pouvez Utiliser votre téléphone quand vous ete Menotté!""; } else { [] call life_fnc_cellphone2; };";
			tooltip = "Envoyez des messages texte à des joueurs ou de la police";
			x = 0.5;
			y = 1 - 0.22;
			w = 0.08;
			h = 0.11;
		};

		class ButtonSync : Life_RscButtonInvisible {
			idc = 90146;
			text = "";
			onButtonClick = "[] call SOCK_fnc_syncData;";
			tooltip = "Mise à jour avec le serveur de données de votre personnage actuel";
			x = 0.5 - (0.08 * 2);
			y = 1 - 0.22;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonInventory : Life_RscButtonInvisible {
			idc = 90150;
			text = "";
			onButtonClick = "createDialog ""life_inventory_menu"";";
			tooltip = "Affichez et gérez vos article dans votre inventaire virtuel";
			x = 0.5 + (0.08 * 1);
			y = 1 - 0.22;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonMoney : Life_RscButtonInvisible {
			idc = 90145;
			text = "";
			onButtonClick = "createDialog ""life_money_menu"";";
			tooltip = "Échanger votre argent en main";
			x = 0.5 - (0.08 * 1);
			y = 1 - 0.22;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonAdmin : Life_RscButtonInvisible {
			idc = 90600;
			text = "";
			onButtonClick = "createDialog ""life_admin_menu"";";
			tooltip = "Accéder au menu d'administration";
			x = 0.5 - (0.08 * 2);
			y = 0.20;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonGang : Life_RscButtonInvisible {
			idc = 90601;
			text = "";
			onButtonClick = "if(playerside !=civilian) then {hint ""Vous n'etes pas un Civil""; } else { [] call life_fnc_gangSelect; };";
			tooltip = "créer un groupe temporaire ou permanent et Gerez votre Groupe Actuel";
			x = 0.5 - (0.08 * 1);
			y = 0.20;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonKeychain : Life_RscButtonInvisible {
			idc = 90602;
			text = "";
			onButtonClick = "createDialog ""Life_key_management"";";
			tooltip = "Voir et échanger vos clés de voiture";
			x = 0.5;
			y = 0.20;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonLicences : Life_RscButtonInvisible {
			idc = 90603;
			text = "";
			onButtonClick = "createDialog ""life_license_menu"";";
			tooltip = "Voir vos licences existantes";
			x = 0.5 + (0.08 * 1);
			y = 0.20;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonSettings : Life_RscButtonInvisible {
			idc = 90604;
			text = "";
			onButtonClick = "[] call life_fnc_settingsMenu;";
			tooltip = "Modifier les préférences système de votre jeu";
			x = 0.5 - (0.08 * 2);
			y = 0.33;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonWanted : Life_RscButtonInvisible {
			idc = 90605;
			text = "";
			onButtonClick = "if(playerside !=west) then {hint ""Vous n'êtes pas Policier!!""; } else { [] call life_fnc_wantedMenu; };";
			tooltip = "Index des criminels et des bons de souscription";
			x = 0.5 - (0.08 * 1);
			y = 0.33;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonWanted2 : Life_RscButtonInvisible {
			idc = 90606;
			text = "";
			onButtonClick = "if(playerside !=west) then {hint ""Vous n'êtes pas Policier!!""; } else { createDialog ""life_wantedadd2""};";
			tooltip = "Ajout des Criminels Manuellements";
			x = 0.5;
			y = 0.33;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonBourse : Life_RscButtonInvisible {
			idc = 90607;
			text = "";
			onButtonClick = "[] call life_fnc_openMarketView;";
			tooltip = "La Bourse des items du Serveur";
			x = 0.5 + (0.08 * 1);
			y = 0.33;
			w = 0.08;
			h = 0.11;
		};

		class ButtonCraft : Life_RscButtonInvisible {
			idc = 90608;
			text = "";
			onButtonClick = "if(playerside !=civilian) then {hint ""Vous n'êtes pas Civil!!""; } else { createDialog ""Life_craft""};";
			tooltip = "Permet de Crafter Certains Items.";
			x = 0.5 - (0.08 * 2);
			y = 0.46;
			w = 0.08;
			h = 0.11;
		};
		
		class ButtonRoadBlock : Life_RscButtonInvisible {
			idc = 90609;
			text = "";
			onButtonClick = "if(playerside ==civilian) then {hint ""Vous n'êtes pas autorisé a utiliser ceci!""; } else  { [] spawn life_fnc_facinit; };";
			tooltip = "Permet de Faire un barrage routier.";
			x = 0.5 - (0.08 * 1);
			y = 0.46;
			w = 0.08;
			h = 0.11;
		};
	};
};