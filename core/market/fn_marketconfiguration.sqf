/*

	Main configuration for non-persistent market system
	Will need triggers to hook into vanilla pricing methods

*/

////////////MAIN CONFIG

life_market_resources = [

	//Schema: SHORTNAME, Default, Min, Max, changes in action, [Sales multiplied by 1, Purchase multiplied by -1]
	//["gold", 1500, 450, 2300, 8, 5],
	
	["oilp", 3200, 1600, 4600, 5, 5,
		[
			["diamondc",1], 
			["iron_r",1],
			["copper_r",1],
			["salt_r",1],
			["cement",1],
			["glass",1]
		]
	],
	
	["iron_r", 1100, 925, 1925, 5, 5,   
		[ 
			["diamondc",1], 
			["oilp",1],
			["copper_r",1],
			["salt_r",1],
			["cement",1],
			["glass",1]
		] 
	],
	
	["diamondc", 4200, 3150, 5250, 5, 5, 
		[ 
			["oilp",1],
			["iron_r",1],
			["copper_r",1],
			["salt_r",1],
			["cement",1],
			["glass",1]
		] 
	],
	
	["copper_r", 1500, 750, 2100, 5, 5, 
		[ 
			["diamondc",1], 
			["oilp",1],
			["iron_r",1],
			["salt_r",1],
			["cement",1],
			["glass",1]
		] 
	],
	
	["salt_r", 1500, 1125, 1875, 5, 5, 
		[ 
			["diamondc",1], 
			["oilp",1],
			["iron_r",1],
			["copper_r",1],
			["cement",1],
			["glass",1 ]
		] 
	],
	
	["glass", 1200, 900, 1500, 5, 5,
		[ 
			["diamondc",1], 
			["oilp",1],
			["iron_r",1],
			["copper_r",1],
			["salt_r",1],
			["cement",1]
		] 
	],
	
	["cement", 1200, 900, 1500, 5, 5, 
		[ 
			["diamondc",1], 
			["oilp",1],
			["iron_r",1],
			["copper_r",1],
			["salt_r",1],
			["glass",1]
		] 
	],
	
	////////////////ILLEGAL///////////////////
	
	["turtle", 13000, 9750, 16250, 4, 8,
		[ 
			["marijuana",1], 
			["cocainep",1],
			["heroinp",1]
		] 
	],

	["marijuana", 3700, 2500, 4800, 5, 5,   
		[ 
			["turtle",1], 
			["cocainep",1],
			["heroinp",1]
		] 
	],
	
	["cocainep", 5000, 3000, 7000, 5, 5,      
		[ 
			["marijuana",1], 
			["heroinp",1],
			["turtle",1]
		] 
	],

	["heroinp", 7000, 9000, 5000, 5, 5,     
		[ 
			["marijuana",1], 
			["cocainep",1],
			["turtle",1]
		] 
	]
];
publicVariable "life_market_resources";

////////////GENERATED CONFIG
//life_market_changes = []; //[SHORTNAME,SELL,BUY]
life_market_shortnames = []; //shortnames if in market
//life_market_clampprices = []; //[SHORTNAME,MIN,MAX]

{
	life_market_shortnames set [count life_market_shortnames, _x select 0];
	//life_market_clampprices set [count life_market_clampprices, [_x select 0, _x select 2, _x select 3] ];
	//life_market_changes set [count life_market_changes, [_x select 0, _x select 4, _x select 5] ];
}
foreach life_market_resources;

publicVariable "life_market_shortnames";
//publicVariable "life_market_clampprices";

//SYNC PRICES WITH SERVER IF EMPTY
if(isNil("life_market_prices")) then
{
	life_market_prices = []; //[SHORTNAME,CURRENTPRICE,DIRECTIONGLOBAL,DIRECTIONLOCAL]
	{
	
		life_market_prices set [count life_market_prices, [_x select 0, _x select 1, 0, 0] ];
	}
	foreach life_market_resources;
	
	publicVariable "life_market_prices";
	
	systemChat "Market Prices Generated!";
};