/*
	File: welcome.sqf
	Author: Desconhecido
*/

_onScreenTime = 5;

_role1 = "Bem vindo ao DANTAS LIFE Server";
_role1names = ["Tenha um ótimo divertimento!"];
_role2 = "Servidor com muitas novidades";
_role2names = ["Penitenciária Nova","Ponte do Tráfico","Consumo de Combustível","Skins Personalizadas","Gás Natural","Paraquedismo","Rapel"];
_role3 = "Nosso Ts";
_role3names = ["dantashost.ts3dns.com"];

{
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='0.99' color='#FFCC00' align='center'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.99' color='#FFFFFF' align='center'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.9);
[
_finalText,
[safezoneX + safezoneW - 1.6,0.70], //DEFAULT: 0.8,0.50
[safezoneY + safezoneH - 1.1,0.7], //DEFAULT: 0.8,0.7
_onScreenTime,
0.6
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
//The list below should have exactly the same amount of roles as the list above
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names]
];

sleep 3;

_role1 = "Ponte do Tráfico em Gaza";
_role1names = ["Traficante foi alocado em um galpão sobre uma ponte sem segurança, localizada próximo a faixa de Gaza.<br/>Agradecimento BR Team"];
_role2 = "Penitenciária da Papuda";
_role2names = ["A nova Penitenciária foi alocada em alto mar.<br/>Agradecimentos Br Team"];
_role3 = "ROLEPLAY";
_role3names = ["Levamos a sério o RolePlay. Esperamos que você também!"];
_role4 = "AGRADECIMENTO ESPECIAL!!!!";
_role4names = ["A todos vocês que entram diariamente no servidor!<br/>OBRIGADO!"];
{
sleep 2;
_memberFunction = _x select 0;
_memberNames = _x select 1;
_finalText = format ["<t size='.75' color='#FFCC00' align='right'>%1<br /></t>", _memberFunction];
_finalText = _finalText + "<t size='0.65' color='#FFFFFF'' align='right'>";
{_finalText = _finalText + format ["%1<br />", _x]} forEach _memberNames;
_finalText = _finalText + "</t>";
_onScreenTime + (((count _memberNames) - 1) * 0.5);
[
_finalText,
[safezoneX + safezoneW - 0.8,0.50],
[safezoneY + safezoneH - 0.8,0.7],
_onScreenTime,
0.5
] spawn BIS_fnc_dynamicText;
sleep (_onScreenTime);
} forEach [
[_role1, _role1names],
[_role2, _role2names],
[_role3, _role3names],
[_role4, _role4names]
];