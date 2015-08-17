waitUntil {!isNull player && player == player};
if(player diarySubjectExists "Regras")exitwith{};

player createDiarySubject ["safe","Áreas Seguras"];
player createDiarySubject ["regras","Regras"];
player createDiarySubject ["trabalhos","Trabalhos"];
player createDiarySubject ["doadores","Doadores"];
player createDiarySubject ["controles","Controles"];
player createDiarySubject ["teamspeak","Team Speak 3"];
player createDiarySubject ["updates","Atualizações"];



	player createDiaryRecord ["safe",
		[
			"Areas Segura",
				"
				<br/>
				<br/>
				>>>>> Áreas Seguras/Safe Zones<br/>
				* Cidades de Kavala e Athira<br/>
				* Todos os HQS Policiais<br/>
				* Base da Brasforte<br/>
				* Posto Rebelde Norte e Sul<br/>
				"
		]
	];
	
	
	
	player createDiaryRecord ["regras",
		[
			"Regras do Servidor",
				"
				<br/>
				<br/>
				>>>>> Regras do Servidor<br/>
				TeamSpeak3- dantashost.ts3dns.com<br/>
				<br/><br/>
				"
		]
	];
	
	
	player createDiaryRecord ["trabalhos",
		[
			"Preço dos Trabalhos",
				"
				<br/>
				>>>>> Trabalhos e Itens Legais<br/>
				01.  R$    100 = Maça | Peso: 1<br/>
				02. R$    150 = Pêssego | Peso: 1<br/>
				03. R$  1.000 = Peixes | Peso: 3<br/>
				04. R$  1.300 = Ferro | Peso: 5 | 3<br/>
				05. R$  1.400 = Vidro | Peso: 3 | 2<br/>
				06. R$  1.500 = Cobre | Peso: 4 | 2<br/>			
				07. R$  2.000 = Cimento | Peso: 4 | 3<br/>
				08. R$  2.100 = Sal | Peso: 3 | 2<br/>				
				09. R$  2.800 = Diamante | Peso: 4 | 2<br/>
				10. R$  3.000 = Cana de Açucar| Peso: 4 | 3<br/>
				11. R$  3.500 = Petróleo | Peso: 5 | 3<br/>
				12. R$  3.500 = Gás Natural | Peso: 4 | 3<br/>
			   	<br/>							
				>>>>> Trabalhos e Itens Ilegais<br/>
				01.  R$  4.500 = Maconha | Peso: 4 | 3<br/>
				02. R$  5.500 = Heroina | Peso: 6 | 4<br/>
				03. R$  6.000 = Cocaina | Peso: 6 | 4<br/>
				04. R$  7.000 = Metanfetamina | Peso: 6 | 4<br/>	
				05. R$  15.000 = Tartarugas | Peso: 15<br/>					
				06. R$ 95.000 = Barra de Ouro | Peso: 15<br/>
						
				"
		]
	];
	
// Controls Section

	player createDiaryRecord ["controles",
		[
			"Controles",
				"
				<br/>
				>>>>> Controles<br/>
				Y: Abrir menu do PLAYER.<br/>
				U: Tranca e destranca Veículos/Casas.<br/>
				F: Sirene (Polícia e Resgate).<br/>
				M: Acessa o Mapa.<br/>
				T: Porta mala de carros e helicópteros.<br/>
				Shift Esquerdo + L: Giroflex (Polícia e Resgate).<br/>
				Shift Esquerdo + R: Algemar.<br/>
				Shift Esquerdo + K: Render-se.<br/>
				Shift Esquerdo + H: Guardar arma.<br/>
				Shift Esquerdo + P: Reduz o som em 90%.<br/>
				Shift Esquerdo + R: Nocautear [Roubar Dinheiro/Roubar Orgãos/Iniciar Sequestro].<br/>
				Shift Esquerdo + barra de espaço: Pular.<br/><br/>
				A tecla de interação voltou a ser o Botão Windows do<br/>
				Teclado.<br/>
				Olhando para o Player: Reviver (Medico/Cop) | Abre o<br/>
				menu de interação em veiculos/players, etc.<br/>
				Olhando para Casas: Abre menu de Opções/Compras.<br/><br/>
				"
		]
	];

	player createDiaryRecord ["teamspeak",
		[
			"Teamspeak 3",
				"
				<br/>
				>>>>> TeamSpeak 3<br/>
				Utilize nosso teamspeak para se comunicar com os admins e também seus amigos<br/>
				** TS: heisenbergts.ddns.net<br/><br/>
				"
		]
	];


	player createDiaryRecord ["doadores",
		[
			"Doadores",
				"
				<br/>
				>>>>> Doações<br/>
				* As doações são para manter o custo do servidor.<br/>
				* As doações são seguras, são feitas através do Paypal, PagSeguro e Deposito Bancario.<br/>
				* Ser doador lhe concede vantagens como armas mais baratas, armas exclusivas, veículos mais baratos, veículos exclusivos e dinheiro extra no jogo.<br/>
				"
		]
	];
	
		player createDiaryRecord ["updates",
		[
			"Updates",
				"
	<br/>
    Update 1.0<br/>
    * Adic. a Versão 4.0 do Altis Life<br/>
    * Trabalhos Legais e Ilegais Remanejados<br/>
    * Adic. Metanfetamina<br/>
    * Adic. Plataforma de Petróleo<br/>
    * Adic. Nova Mina de Sal<br/>
    * Adic. Área de Doadores<br/>
    * Adic. Estacionamento de Kavala<br/>
 	  * Praça de Kavala Reformulada<br/>
	   * Corrigidos vários bugs da versão 4.0<br/>
    <br/>                                                        
    Update 1.1<br/>
    * Novas SKINS da SUV para Civil e Vip<br/>
    * Novas SKINS da Offroad para Civil e Vip<br/>
    * Nova SKIN do Hathback sport para Vip<br/>
    * Adic. Empresa de Segurança [BRASFORTE]<br/>
    * Adic. Nova Prisão [PENITENCIÁRIA DA PAPUDA]<br/>
    <br/>
    Update 1.2<br/>
    * Corrigido Bugs do Sistema de Casas<br/>
    * Adic. Novos Icons de Itens<br/>
    * Novo Uniforme da Polícia<br/>
    * Nova Sirene da Polícia<br/>
    * Nova Sirene do Resgate<br/>
    * Faixa de Gaza (PVP LIVRE)<br/>
	<br/>
    Update 1.3<br/>
	   * Corrigido Bugs dos Esconderijos de Gangue<br/>
	   * Corrigido Bugs da Pesca e Venda de Tartarugas<br/>
	   * Corrigido Bugs da Pesca e Venda de Peixes<br/>
    * Corrigido Bugs do Banco da BrasForte<br/>
	   * Implementado Sistema de Consumo de Combustível<br/>
	   * Adic. Paraquedismo<br/>
	<br/>
    Update 1.4<br/>
	   * Adic. Sistema de Sequestro [Rebeldes/Doadores]<br/>
	   * Adic. a DLC de Armas [Marksmen]<br/>
	   * Adic. Novas Skins do Little Bird [Civil/Doadores]<br/>
	<br/>   
	  Update 1.5<br/>
	   * Corrigido Bugs de Pegar dinheiro e itens do Chão<br/>
	   * Corridigo Bugs de todas as Garagens<br/>
	   * Adic. a DLC de Helicópteros [Civil/Doadores]<br/>
	   * Adic. Mercado normal para BrasForte<br/>
	   <br/>
	  Update 1.6<br/>
	   * Adic. Sistema de Apreender Itens/Armas [Polícia]<br/>
	   * Corridigo Bugs de Entrar/Sair forçado [Polícia]<br/>
	   * Corrigido Bugs de Roubo de Dinheiro<br/>
	   <br/>   
	  Update 1.7<br/>
	   * Adic. Traficante de Orgãos<br/>
	   * Adic. Sistema de Algemas para BrasForte<br/>
	   * Render-se [Shift esquerdo + K]<br/>
	   * Comprador de Diamante Remanejado<br/>		   
		<br/>   
	  Update 1.8<br/>
	   * Campo de Maconha, Cocaina e Efedrina Remanejados<br/>
	   * Campo e Plataforma de Petróleo Remanejados<br/>
	   * Campos Duplicados [Cocaina, Maconha e Efedrina]<br/>
	   * Processador de Cobre Remanejado<br/>
	   * Campo e Processador de Cobre em Área Segura<br/>
	   * Mercado de Peixes de Kavala Remanejado<br/>	   
	   * Adic. Sistema de Apreender Carros [Resgate]<br/>
	   * Adic. Sistema de Revistar Mochilas [Polícia]<br/>
	   * Adic. Novo Farm [CANA DE AÇUCAR]<br/>
	   * Preços e Pesos do Farms Atualizados<br/>
	   * Adic. Posto Policial<br/>
	   * Adic. Posto Avançado da PRF<br/>
	   <br/> 
	  Update 1.9<br/>
	   * Adic. Torremão Night Club<br/>
	   * Adic. Cassino<br/>
	   * Adic. HellCat para BrasForte<br/>
	   <br/> 
		 Update 2.0<br/>
	   * Reformulação do Estacionamento de Kavala<br/>
	   * Reformulação do HQ de Pyrgos<br/>
	   * Reformulação do Hospital de Kavala<br/>
	   * Correção de Bugs<br/>
	   * Redução do Som [Shift Esquerdo + P]<br/>
	   * Side Channel Desabilitado [VOZ]<br/>
	   * Adic. Novo Spawn Menu<br/>
	   * Adic. Tempo p/ Solicitação do Resgate [8 minutos]<br/>
	   * Adic. Relógio p/ Cumprimento da Regra dos 15 Minutos<br/>
	   * Adic. Fronteira na Faixa de Gaza<br/>
	   * Adic. Ponte da Pedreira<br/>
	   <br/> 	   
		 Update 2.1<br/>
	   * Adic. Lista de Procurado Permanente<br/>
	   * Adic. Anti-Dupping de Farmes<br/>
	   * Adic. Roubo a caixa registradora do Postos de Combust.<br/>
	   * Adic. Roubo ao Banco do BR. TEAM<br/>
	   * Adic. Consumo de Drogas<br/>
	   * Adic. Uso/Consumo de Drogas<br/>
	   * Correção de Bugs da Reserva Federal<br/>
	   * Desmanche - Valores atualizados<br/>
	   * Novo esquema de Segurança na Prisão<br/>
	   <br/> 
	    Update 2.2<br/>
      * Novas Skins para o Caminhão Bau<br/>
	   * Removido o HQ Aéreo<br/>
	   * Adic. Base Operacional da Polícia<br/>
	   * Adic. Fronteira na Reserva Federeal<br/>
	   * Adic. Nova Penitenciária da Papuda <br/>
	   * Comprador de Cobre/Ferro Remanejados<br/>
	   * Adic. Sistema de Entrar/Sair forçado [Resgate]<br/>
	   * Adic. Ponte do Tráfico próximo a faixa de Gaza<br/>
	   * Adic. Rapel<br/>
	   <br/>
		Update 2.3<br/>
	   * Adic. Novo Farm [GÁS NATURAL]<br/>
	   * Adic. Pista de Kart<br/>
	   * Adic. Nova Base do Resgate/Mecânico<br/>
	   * Adic. Sistema de Reboque [MECÂNICOS]<br/>
	   * Adic. Roupa e Mochila para Mecânico<br/>
	   <br/> 	   
	Atenciosamente,<br/>
	Baga<br/>				
    " 
		]
	];