#pragma once

#include <cstdint>
#include <string>
#include <vector>

inline std::vector<char*> m_models = {
		"240sx",
		"300c",
		"350z",
		"997gt3rs",
		"angie",
		"angie_casino",
		"angie_casinoai",
		"bmwm3gtre46",
		"bmwm3gtre46_crosschase",
		"brera",
		"camaro",
		"camaron",
		"carrera_grnp7",
		"carreragt",
		"caymans",
		"challenger71",
		"challengern",
		"charger06",
		"charger69",
		"clio",
		"clk500",
		"colin",
		"corolla",
		"corvettez06",
		"cross",
		"cuda",
		"darius",
		"darius_ai",
		"db9",
		"eclipse",
		"eclipsegt",
		"elise",
		"europa",
		"footman",
		"fordgt",
		"g35",
		"gallardo",
		"gto",
		"imprezawrxsti",
		"is300",
		"jaguarxk",
		"kenji",
		"kenji_casino",
		"lancerevo9",
		"m3gtrcareerstart",
		"mazdaspeed3",
		"monaro",
		"mr2",
		"murcielago",
		"murcielago640",
		"mustanggt",
		"mustangshlbyn",
		"mustangshlbyo",
		"nikki",
		"r32",
		"r8",
		"rival_kenji",
		"roadrunner",
		"rx7",
		"rx8",
		"samsom",
		"skyline",
		"sl65",
		"slr",
		"supra",
		"t1_exotic_neville",
		"t1_muscle_neville",
		"t1_tuner_neville",
		"temp_exotic_03",
		"temp_muscle_01",
		"temp_muscle_02",
		"viper",
		"wolf",
		"wolf_casino",
		"wrx_red",
		"yumi",
		"zonda",
		"copcross",
		"copghost",
		"copgto",
		"copgtoghost",
		"copmidsize",
		"copmidsize_weak",
		"copsport",
		"copsportghost",
		"copsporthench",
		"copsuv",
		"copsuvl",
		"copsuvpatrol",
		"copheli",
		"copter",
		"traf4dseda",
		"traf4dsedb",
		"traf4dsedc",
		"trafamb",
		"trafcamper",
		"trafcemtr",
		"trafcourt",
		"trafdmptr",
		"trafficcoup",
		"traffire",
		"trafgarb",
		"trafha",
		"trafminivan",
		"trafnews",
		"trafpickupa",
		"trafstwag",
		"trafsuva",
		"traftaxi",
		"trafvanb",
		"semi",
		"semia",
		"semib",
		"semibox",
		"semicmt",
		"semicon",
		"semicrate",
		"semilog",
		"trailera",
		"trailerb",
		"trailerbox",
		"trailercmt",
		"trailercon",
		"trailercrate",
		"trailerlog",
};

class debug_vehicle_selection {
public:
	static inline debug_vehicle_selection*& instance = *(debug_vehicle_selection**)0xB74BE8;

	void switch_model(char* model)
	{
		((void(__thiscall*)(debug_vehicle_selection*, char*))(0x7D4E40))(this, model);
	}
};