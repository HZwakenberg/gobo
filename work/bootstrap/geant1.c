#include "geant.h"

#ifdef __cplusplus
extern "C" {
#endif

T0* GE_boxed1(T1 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb1));
	((T0*)(R))->id = 1;
	((Tb1*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed2(T2 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb2));
	((T0*)(R))->id = 2;
	((Tb2*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed3(T3 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb3));
	((T0*)(R))->id = 3;
	((Tb3*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed4(T4 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb4));
	((T0*)(R))->id = 4;
	((Tb4*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed5(T5 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb5));
	((T0*)(R))->id = 5;
	((Tb5*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed6(T6 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb6));
	((T0*)(R))->id = 6;
	((Tb6*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed7(T7 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb7));
	((T0*)(R))->id = 7;
	((Tb7*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed8(T8 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb8));
	((T0*)(R))->id = 8;
	((Tb8*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed9(T9 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb9));
	((T0*)(R))->id = 9;
	((Tb9*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed10(T10 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb10));
	((T0*)(R))->id = 10;
	((Tb10*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed11(T11 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb11));
	((T0*)(R))->id = 11;
	((Tb11*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed12(T12 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb12));
	((T0*)(R))->id = 12;
	((Tb12*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed13(T13 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb13));
	((T0*)(R))->id = 13;
	((Tb13*)(R))->z1 = a1;
	return R;
}

T0* GE_boxed14(T14 a1)
{
	T0* R;
	R = (T0*)GE_alloc(sizeof(Tb14));
	((T0*)(R))->id = 14;
	((Tb14*)(R))->z1 = a1;
	return R;
}

T1 GE_default1 = 0;
T2 GE_default2 = 0;
T3 GE_default3 = 0;
T4 GE_default4 = 0;
T5 GE_default5 = 0;
T6 GE_default6 = 0;
T7 GE_default7 = 0;
T8 GE_default8 = 0;
T9 GE_default9 = 0;
T10 GE_default10 = 0;
T11 GE_default11 = 0;
T12 GE_default12 = 0;
T13 GE_default13 = 0;
T14 GE_default14 = 0;
T15 GE_default15 = {15,0,{0}};
T17 GE_default17 = {17,0,0,0};
T21 GE_default21 = {21,0,0,0,0,0,0,0};
T22 GE_default22 = {22,0,0,0,0,0,0,0,0,0,0,0,0,0};
T23 GE_default23 = {23,0,0};
T24 GE_default24 = {24,0,0,0};
T25 GE_default25 = {25,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T26 GE_default26 = {26,0,0,0,0,0,0,0,0,0,0,0};
T27 GE_default27 = {27,0};
T28 GE_default28 = {28,0,0,0};
T29 GE_default29 = {29,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T30 GE_default30 = {30,0,0};
T31 GE_default31 = {31,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T32 GE_default32 = {32,0,{0}};
T33 GE_default33 = {33,0,0,0};
T34 GE_default34 = {34,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T35 GE_default35 = {35,0,0,0,0,0,0,0,0};
T36 GE_default36 = {36,0,0,0,0};
T37 GE_default37 = {37,0,0,0,0,0,0,0,0,0,0};
T38 GE_default38 = {38,0,0,0,0,0,0,0,0,0,0,0};
T40 GE_default40 = {40,0,0,0};
T45 GE_default45 = {45,0,0,0,0};
T46 GE_default46 = {46};
T47 GE_default47 = {47,0,0,0};
T48 GE_default48 = {48};
T49 GE_default49 = {49,0};
T51 GE_default51 = {51};
T53 GE_default53 = {53,0};
T54 GE_default54 = {54};
T55 GE_default55 = {55,0,0,0,0,0,0,0,0,0};
T56 GE_default56 = {56,0,0,0,0,0,0};
T58 GE_default58 = {58,0};
T59 GE_default59 = {59};
T61 GE_default61 = {61,0,0,0};
T63 GE_default63 = {63,0,{0}};
T64 GE_default64 = {64,0,0,0};
T65 GE_default65 = {65};
T66 GE_default66 = {66};
T68 GE_default68 = {68,0,0,0};
T69 GE_default69 = {69,0,0,0,0,0};
T71 GE_default71 = {71,0,0,0,0,0,0};
T72 GE_default72 = {72,0,0,0};
T73 GE_default73 = {73,0,0,0,0,0,0,0,0};
T74 GE_default74 = {74,0,0,0,0,0,0};
T75 GE_default75 = {75,0,0,0,0,0};
T76 GE_default76 = {76};
T77 GE_default77 = {77,0};
T79 GE_default79 = {79,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T81 GE_default81 = {81,0};
T82 GE_default82 = {82};
T84 GE_default84 = {84,0,0,0,0,0,0};
T85 GE_default85 = {85,0,0};
T86 GE_default86 = {86,0,0};
T88 GE_default88 = {88};
T90 GE_default90 = {90,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T91 GE_default91 = {91,0,0,0,0};
T94 GE_default94 = {94,0,0,0,0,0,0};
T95 GE_default95 = {95,0,0,0,0,0,0};
T96 GE_default96 = {96,0,0,0,0,0,0,0};
T97 GE_default97 = {97,0,0,0};
T99 GE_default99 = {99,0};
T100 GE_default100 = {100,0,0,0,0};
T101 GE_default101 = {101,0,0};
T102 GE_default102 = {102,0};
T103 GE_default103 = {103,0};
T104 GE_default104 = {104,0,0,0};
T106 GE_default106 = {106,0,{0}};
T107 GE_default107 = {107};
T108 GE_default108 = {108,0,0,0};
T109 GE_default109 = {109,0,{0}};
T110 GE_default110 = {110};
T111 GE_default111 = {111,0,0,0,0,0,0};
T113 GE_default113 = {113,0,0,0,0,0,0,0,0,0,0};
T115 GE_default115 = {115,0,0,0,0};
T116 GE_default116 = {116,0,0,0,0,0};
T117 GE_default117 = {117,0,0,0};
T118 GE_default118 = {118,0,0};
T119 GE_default119 = {119,0,{0}};
T121 GE_default121 = {121,0,0,0};
T123 GE_default123 = {123,0,0,0};
T124 GE_default124 = {124};
T125 GE_default125 = {125,0};
T127 GE_default127 = {127,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T128 GE_default128 = {128,0,0,0,0};
T130 GE_default130 = {130,0,0,0,0};
T131 GE_default131 = {131,0,0};
T132 GE_default132 = {132};
T133 GE_default133 = {133,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T135 GE_default135 = {135};
T136 GE_default136 = {136,0,{0}};
T137 GE_default137 = {137};
T138 GE_default138 = {138,0,0,0,0,0};
T139 GE_default139 = {139,0,0,0};
T140 GE_default140 = {140,0,0};
T141 GE_default141 = {141,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T142 GE_default142 = {142,0,0,0,0,0};
T143 GE_default143 = {143,0,0,0,0};
T144 GE_default144 = {144,0,0,0,0,0,0};
T145 GE_default145 = {145,0,0,0,0,0};
T146 GE_default146 = {146,0,{0}};
T147 GE_default147 = {147};
T148 GE_default148 = {148,0,{0}};
T149 GE_default149 = {149};
T150 GE_default150 = {150,0,{0}};
T151 GE_default151 = {151,0,{0}};
T152 GE_default152 = {152};
T153 GE_default153 = {153,0,{0}};
T154 GE_default154 = {154};
T155 GE_default155 = {155,0,{0}};
T156 GE_default156 = {156};
T158 GE_default158 = {158,0,{0}};
T160 GE_default160 = {160,0,{0}};
T161 GE_default161 = {161};
T162 GE_default162 = {162};
T163 GE_default163 = {163,0,{0}};
T164 GE_default164 = {164};
T165 GE_default165 = {165,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T166 GE_default166 = {166};
T168 GE_default168 = {168};
T169 GE_default169 = {169,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T171 GE_default171 = {171,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T172 GE_default172 = {172,0,0,0,0,0,0,0,0};
T173 GE_default173 = {173,0,{0}};
T174 GE_default174 = {174,0,0,0};
T175 GE_default175 = {175,0};
T176 GE_default176 = {176,0,{0}};
T177 GE_default177 = {177};
T179 GE_default179 = {179,0};
T180 GE_default180 = {180,0};
T181 GE_default181 = {181,0,0};
T182 GE_default182 = {182,0,0,0,0,0,0,0,0};
T184 GE_default184 = {184,0,0,0,0,0};
T185 GE_default185 = {185,0,0,0};
T186 GE_default186 = {186,0,0,0,0};
T187 GE_default187 = {187,0};
T189 GE_default189 = {189,0,0,0,0};
T190 GE_default190 = {190,0,0,0,0,0};
T192 GE_default192 = {192,0,0,0};
T193 GE_default193 = {193};
T194 GE_default194 = {194,0,0,0,0,0,0};
T195 GE_default195 = {195,0,0,0,0};
T196 GE_default196 = {196};
T197 GE_default197 = {197};
T198 GE_default198 = {198,0,0,0,0};
T199 GE_default199 = {199,0,0};
T200 GE_default200 = {200,0,0,0};
T202 GE_default202 = {202,0,0};
T203 GE_default203 = {203,0};
T204 GE_default204 = {204,0};
T205 GE_default205 = {205,0,0,0,0,0,0,0,0,0};
T206 GE_default206 = {206,0,0,0,0,0,0,0,0,0,0,0,0};
T209 GE_default209 = {209,0,0};
T210 GE_default210 = {210,0,0,0};
T211 GE_default211 = {211,0,0};
T212 GE_default212 = {212,0,0};
T213 GE_default213 = {213,0,{0}};
T214 GE_default214 = {214,0,0,0};
T216 GE_default216 = {216,0,0,0};
T218 GE_default218 = {218};
T219 GE_default219 = {219,0};
T220 GE_default220 = {220};
T221 GE_default221 = {221,0,0};
T222 GE_default222 = {222,0,0,0,0};
T223 GE_default223 = {223,0,0,0,0,0};
T224 GE_default224 = {224,0,0,0};
T225 GE_default225 = {225,0,0,0,0,0};
T226 GE_default226 = {226,0,0,0,0,0};
T227 GE_default227 = {227,0,0,0};
T228 GE_default228 = {228,0};
T229 GE_default229 = {229,0};
T230 GE_default230 = {230,0};
T231 GE_default231 = {231,0};
T232 GE_default232 = {232,0};
T233 GE_default233 = {233,0};
T234 GE_default234 = {234,0};
T235 GE_default235 = {235,0};
T236 GE_default236 = {236,0};
T237 GE_default237 = {237,0};
T239 GE_default239 = {239,0,0,0};
T240 GE_default240 = {240,0,0,0,0};
T241 GE_default241 = {241,0};
T242 GE_default242 = {242,0,{0}};
T243 GE_default243 = {243,0};
T244 GE_default244 = {244,0};
T247 GE_default247 = {247};
T248 GE_default248 = {248,0,0,0};
T249 GE_default249 = {249};
T250 GE_default250 = {250,0,{0}};
T251 GE_default251 = {251};
T253 GE_default253 = {253,0,0,0};
T254 GE_default254 = {254};
T255 GE_default255 = {255,0,{0}};
T256 GE_default256 = {256,0,0,0};
T257 GE_default257 = {257,0,0,0};
T258 GE_default258 = {258,0,0,0};
T259 GE_default259 = {259,0,0};
T260 GE_default260 = {260,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T261 GE_default261 = {261,0};
T262 GE_default262 = {262,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T263 GE_default263 = {263,0};
T264 GE_default264 = {264,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T266 GE_default266 = {266,0,0};
T267 GE_default267 = {267,0,0};
T268 GE_default268 = {268,0};
T269 GE_default269 = {269,0,0};
T270 GE_default270 = {270,0,0,0};
T271 GE_default271 = {271,0,0,0,0,0};
T273 GE_default273 = {273,0,0,0,0};
T274 GE_default274 = {274,0,0,0,0,0};
T275 GE_default275 = {275,0,0};
T276 GE_default276 = {276,0,0};
T278 GE_default278 = {278,0,0,0};
T279 GE_default279 = {279,0,0,0};
T280 GE_default280 = {280,0,0,0};
T281 GE_default281 = {281,0,0,0};
T282 GE_default282 = {282,0,0,0};
T283 GE_default283 = {283,0,0,0};
T284 GE_default284 = {284,0,0,0};
T285 GE_default285 = {285,0,0,0};
T286 GE_default286 = {286,0,0,0};
T287 GE_default287 = {287,0,0,0};
T288 GE_default288 = {288,0,0,0};
T289 GE_default289 = {289,0,0,0};
T290 GE_default290 = {290,0,0,0};
T291 GE_default291 = {291,0,0,0};
T292 GE_default292 = {292,0,0,0};
T293 GE_default293 = {293,0,0,0};
T294 GE_default294 = {294,0,0,0};
T295 GE_default295 = {295,0,0,0};
T296 GE_default296 = {296,0,0,0};
T297 GE_default297 = {297,0,0,0};
T298 GE_default298 = {298,0,0,0};
T299 GE_default299 = {299,0,0,0};
T300 GE_default300 = {300,0,0,0};
T301 GE_default301 = {301,0,0,0};
T302 GE_default302 = {302,0,0,0};
T303 GE_default303 = {303,0,0,0};
T304 GE_default304 = {304,0,0,0};
T305 GE_default305 = {305};
T306 GE_default306 = {306,0};
T308 GE_default308 = {308,0,0,0};
T310 GE_default310 = {310,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T311 GE_default311 = {311,0,0};
T312 GE_default312 = {312,0,0,0};
T313 GE_default313 = {313,0,0};
T314 GE_default314 = {314,0,0};
T317 GE_default317 = {317,0,0};
T318 GE_default318 = {318,0,0,0,0,0,0,0};
T323 GE_default323 = {323,0,0};
T324 GE_default324 = {324,0,0};
T325 GE_default325 = {325,0,0};
T326 GE_default326 = {326,0};
T327 GE_default327 = {327};
T328 GE_default328 = {328,0};
T329 GE_default329 = {329,0,{0}};
T330 GE_default330 = {330,0,{0}};
T331 GE_default331 = {331,0,0};
T332 GE_default332 = {332};
T333 GE_default333 = {333,0,0,0};
T335 GE_default335 = {335,0,{0}};
T336 GE_default336 = {336,0,0,0};
T337 GE_default337 = {337};
T338 GE_default338 = {338};
T339 GE_default339 = {339,0,0,0};
T341 GE_default341 = {341,0,{0}};
T342 GE_default342 = {342,0,0,0};
T343 GE_default343 = {343};
T344 GE_default344 = {344};
T345 GE_default345 = {345,0,0,0};
T347 GE_default347 = {347,0,{0}};
T348 GE_default348 = {348,0,0,0};
T349 GE_default349 = {349};
T351 GE_default351 = {351,0,0,0};
T352 GE_default352 = {352,0,0,0,0,0,0,0,0};
T353 GE_default353 = {353,0,0,0,0};
T354 GE_default354 = {354,0,0,0,0,0,0,0,0,0,0,0};
T355 GE_default355 = {355,0,0,0,0,0,0,0,0,0,0};
T356 GE_default356 = {356,0,0,0,0,0,0,0,0};
T357 GE_default357 = {357,0,0,0,0,0,0,0,0,0};
T358 GE_default358 = {358,0,0,0,0,0,0};
T359 GE_default359 = {359,0,0,0};
T360 GE_default360 = {360,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T361 GE_default361 = {361,0,0,0,0};
T362 GE_default362 = {362,0,0,0,0};
T363 GE_default363 = {363,0,0,0};
T364 GE_default364 = {364,0,0,0,0,0,0,0,0,0};
T365 GE_default365 = {365,0,0};
T366 GE_default366 = {366,0,0,0,0,0,0,0,0,0,0,0,0,0};
T367 GE_default367 = {367,0,0,0,0,0,0,0,0,0,0};
T368 GE_default368 = {368,0,0,0,0,0,0,0,0,0};
T369 GE_default369 = {369,0,0,0,0,0,0,0,0,0,0,0,0,0};
T370 GE_default370 = {370,0,0,0,0,0,0,0,0,0};
T371 GE_default371 = {371,0,0,0,0};
T372 GE_default372 = {372,0,0,0,0,0};
T373 GE_default373 = {373,0,0,0};
T374 GE_default374 = {374,0,0,0,0,0,0};
T375 GE_default375 = {375,0,0,0};
T376 GE_default376 = {376,0,0,0,0,0,0,0,0,0,0,0,0};
T377 GE_default377 = {377,0,0,0,0,0,0,0};
T378 GE_default378 = {378,0,0,0,0,0,0};
T379 GE_default379 = {379,0,0,0,0};
T380 GE_default380 = {380,0,0,0,0,0,0,0,0,0,0,0,0};
T381 GE_default381 = {381,0,0};
T382 GE_default382 = {382,0,0,0,0,0};
T383 GE_default383 = {383,0,0,0,0,0,0,0,0,0};
T384 GE_default384 = {384,0,0,0};
T385 GE_default385 = {385,0,0,0,0};
T386 GE_default386 = {386,0,0,0,0,0,0};
T387 GE_default387 = {387,0,0,0,0,0,0,0,0};
T388 GE_default388 = {388,0,0,0,0,0,0,0,0,0,0,0};
T389 GE_default389 = {389,0,{0}};
T390 GE_default390 = {390};
T391 GE_default391 = {391,0,0};
T392 GE_default392 = {392};
T393 GE_default393 = {393,0,0};
T394 GE_default394 = {394,0};
T395 GE_default395 = {395,0,0};
T396 GE_default396 = {396,0};
T397 GE_default397 = {397,0,0};
T398 GE_default398 = {398,0};
T402 GE_default402 = {402,0,0,0,0,0};
T403 GE_default403 = {403,0,0,0};
T404 GE_default404 = {404,0,0,0,0,0};
T407 GE_default407 = {407,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T409 GE_default409 = {409,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T411 GE_default411 = {411,0,0,0};
T412 GE_default412 = {412,0,0,0,0,0,0,0,0,0};
T413 GE_default413 = {413,0,0};
T414 GE_default414 = {414};
T415 GE_default415 = {415,0,0,0};
T417 GE_default417 = {417,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T418 GE_default418 = {418,0,0,0,0,0};
T419 GE_default419 = {419,0,{0}};
T420 GE_default420 = {420};
T421 GE_default421 = {421,0};
T422 GE_default422 = {422,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T423 GE_default423 = {423};
T424 GE_default424 = {424,0,0,0,0,0,0,0};
T425 GE_default425 = {425,0};
T429 GE_default429 = {429};
T431 GE_default431 = {431,0,0,0};
T432 GE_default432 = {432,0,{0}};
T433 GE_default433 = {433};
T434 GE_default434 = {434};
T435 GE_default435 = {435,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T436 GE_default436 = {436,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T437 GE_default437 = {437,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T439 GE_default439 = {439,0,0};
T440 GE_default440 = {440};
T441 GE_default441 = {441,0};
T443 GE_default443 = {443,0,0,0,0,0,0};
T444 GE_default444 = {444,0,0};
T445 GE_default445 = {445,0};
T447 GE_default447 = {447,0,{0}};
T448 GE_default448 = {448,0,0,0};
T449 GE_default449 = {449,0};
T450 GE_default450 = {450,0,0,0,0,0,0,0,0};
T451 GE_default451 = {451,0,0,0,0,0};
T452 GE_default452 = {452,0,0,0,0,0,0,0,0,0,0,0,0,0};
T454 GE_default454 = {454,0,0,0};
T455 GE_default455 = {455,0,0};
T456 GE_default456 = {456,0,0,0,0};
T457 GE_default457 = {457,0,0,0,0,0};
T458 GE_default458 = {458,0};
T459 GE_default459 = {459,0,0,0,0,0};
T460 GE_default460 = {460,0,0,0,0,0};
T461 GE_default461 = {461};
T462 GE_default462 = {462,0,0,0};
T463 GE_default463 = {463,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T464 GE_default464 = {464,0,0,0,0,0,0,0,0};
T465 GE_default465 = {465,0,{0}};
T466 GE_default466 = {466};
T467 GE_default467 = {467,0,0};
T468 GE_default468 = {468,0,0};
T469 GE_default469 = {469,0,0,0,0,0,0,0,0,0,0};
T470 GE_default470 = {470,0,{0}};
T471 GE_default471 = {471};
T472 GE_default472 = {472,0};
T473 GE_default473 = {473,0,0,0};
T474 GE_default474 = {474,0};
T475 GE_default475 = {475,0};
T476 GE_default476 = {476,0};
T477 GE_default477 = {477,0};
T478 GE_default478 = {478,0};
T479 GE_default479 = {479,0};
T480 GE_default480 = {480,0};
T481 GE_default481 = {481,0};
T482 GE_default482 = {482,0,{0}};
T483 GE_default483 = {483,0,0,0};
T484 GE_default484 = {484,0,0,0,0,0,0};
T485 GE_default485 = {485,0,0,0,0,0,0};
T486 GE_default486 = {486,0,0,0,0,0};
T487 GE_default487 = {487,0,0,0};
T488 GE_default488 = {488,0,0,0,0,0};
T489 GE_default489 = {489,0,0,0};
T490 GE_default490 = {490,0,0,0,0,0};
T491 GE_default491 = {491,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
T492 GE_default492 = {492,0,0,0,0,0};
T493 GE_default493 = {493,0};
T494 GE_default494 = {494};
T496 GE_default496 = {496,0};
T498 GE_default498 = {498};
T499 GE_default499 = {499,0,{0}};
T500 GE_default500 = {500,0};
T501 GE_default501 = {501};
T502 GE_default502 = {502,0,0,0};
T503 GE_default503 = {503,0,{0}};
T504 GE_default504 = {504};
T505 GE_default505 = {505,0,0,0};
T507 GE_default507 = {507,0,0,0};
T509 GE_default509 = {509,0};
T510 GE_default510 = {510,0};
T511 GE_default511 = {511,0,0};
T513 GE_default513 = {513,0};
T515 GE_default515 = {515,0,0};
T516 GE_default516 = {516,0,0,0};
T517 GE_default517 = {517,0,{0}};
T518 GE_default518 = {518,0,0,0};
T520 GE_default520 = {520,0};
T521 GE_default521 = {521,0};
T522 GE_default522 = {522,0};
T524 GE_default524 = {524,0};
T526 GE_default526 = {526,0,{0}};
T528 GE_default528 = {528};
T529 GE_default529 = {529,0,0,0};
T531 GE_default531 = {531,0,{0}};
T532 GE_default532 = {532};
T533 GE_default533 = {533,0};
T534 GE_default534 = {534,0,0,0};
T535 GE_default535 = {535};
T536 GE_default536 = {536,0};
T538 GE_default538 = {538,0,0,0};
T540 GE_default540 = {540,0,0};
T543 GE_default543 = {543};
T546 GE_default546 = {546};
T549 GE_default549 = {549,0};
T550 GE_default550 = {550,0};
T551 GE_default551 = {551,0,0};
T552 GE_default552 = {552,0};
T553 GE_default553 = {553,0};
T554 GE_default554 = {554,0,0};
T555 GE_default555 = {555,0};
T559 GE_default559 = {559};

T0* GE_ms(char* s, T6 c)
{
	T0* R;
	T0* t1;
	t1 = (T0*)GE_alloc(sizeof(T15)+c*sizeof(T2));
	((T0*)(t1))->id = 15;
	((T15*)(t1))->z1 = (c+1);
	memcpy(((T15*)(t1))->z2, s, c);
	R = (T0*)GE_alloc(sizeof(T17));
	((T0*)(R))->id = 17;
	((T17*)(R))->a1 = t1;
	((T17*)(R))->a2 = (T6)c;
	return R;
}

/* Call to STRING_8.to_c */
T0* T17x1216(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=194) {
if (t1==17) {
	return (T17f11(C));
} else {
	return (T194f19(C));
}
} else {
	return (T454f7(C));
}
}

/* Call to STRING_8.area */
T0* T17x1300(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=194) {
if (t1==17) {
	return (((T17*)(C))->a1);
} else {
	return (((T194*)(C))->a2);
}
} else {
	return (((T454*)(C))->a3);
}
}

/* Call to STRING_8.count */
T6 T17x1235(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=194) {
if (t1==17) {
	return (((T17*)(C))->a2);
} else {
	return (((T194*)(C))->a1);
}
} else {
	return (((T454*)(C))->a1);
}
}

/* Call to ANY.is_equal */
T1 T19x29T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=138) {
if (t1==6) {
	return (T6f28(&(((Tb6*)(C))->z1), ((Tb6*)(a1))->z1));
} else {
	return (T138f10(C, a1));
}
} else {
if (t1==314) {
	return (T314f4(C, a1));
} else {
	return (T413f5(C, a1));
}
}
}

/* Call to ANY.same_type */
T1 T19x28T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=138) {
if (t1<=53) {
if (t1<=17) {
if (t1==6) {
	return ((T1)(((T0*)(GE_void(a1)))->id==6));
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==17));
}
} else {
	return (EIF_FALSE);
}
} else {
if (t1==54) {
	return ((T1)(((T0*)(GE_void(a1)))->id==54));
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==138));
}
}
} else {
if (t1<=413) {
if (t1<=314) {
if (t1==194) {
	return ((T1)(((T0*)(GE_void(a1)))->id==194));
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==314));
}
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==413));
}
} else {
if (t1==484) {
	return ((T1)(((T0*)(GE_void(a1)))->id==484));
} else {
	return ((T1)(((T0*)(GE_void(a1)))->id==485));
}
}
}
}

/* Call to AP_OPTION.short_form */
T2 T42x2426(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a4);
} else {
	return (((T37*)(C))->a5);
}
} else {
	return (((T73*)(C))->a2);
}
}

/* Call to AP_OPTION.long_form */
T0* T42x2421(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a3);
} else {
	return (((T37*)(C))->a7);
}
} else {
	return (((T73*)(C))->a4);
}
}

/* Call to AP_OPTION.has_long_form */
T1 T42x2428(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f10(C));
} else {
	return (T37f12(C));
}
} else {
	return (T73f10(C));
}
}

/* Call to AP_OPTION.example */
T0* T42x2420(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f17(C));
} else {
	return (T37f20(C));
}
} else {
	return (T73f28(C));
}
}

/* Call to AP_OPTION.is_hidden */
T1 T42x2430(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a8);
} else {
	return (((T37*)(C))->a10);
}
} else {
	return (((T73*)(C))->a8);
}
}

/* Call to AP_OPTION.description */
T0* T42x2419(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a2);
} else {
	return (((T37*)(C))->a2);
}
} else {
	return (((T73*)(C))->a1);
}
}

/* Call to AP_OPTION.names */
T0* T42x2423(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f16(C));
} else {
	return (T37f19(C));
}
} else {
	return (T73f23(C));
}
}

/* Call to AP_OPTION.name */
T0* T42x2422(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f15(C));
} else {
	return (T37f11(C));
}
} else {
	return (T73f22(C));
}
}

/* Call to AP_OPTION.needs_parameter */
T1 T42x2432(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f11(C));
} else {
	return (((T37*)(C))->a4);
}
} else {
	return (T73f12(C));
}
}

/* Call to AP_OPTION.has_short_form */
T1 T42x2429(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a5);
} else {
	return (((T37*)(C))->a6);
}
} else {
	return (((T73*)(C))->a3);
}
}

/* Call to AP_OPTION.allows_parameter */
T1 T42x2427(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f12(C));
} else {
	return (T37f17(C));
}
} else {
	return (T73f9(C));
}
}

/* Call to AP_OPTION.maximum_occurrences */
T6 T42x2425(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a7);
} else {
	return (((T37*)(C))->a9);
}
} else {
	return (((T73*)(C))->a7);
}
}

/* Call to AP_OPTION.occurrences */
T6 T42x2424(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a1);
} else {
	return (T37f18(C));
}
} else {
	return (((T73*)(C))->a5);
}
}

/* Call to AP_OPTION.was_found */
T1 T42x2434(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (T35f9(C));
} else {
	return (T37f16(C));
}
} else {
	return (T73f11(C));
}
}

/* Call to AP_OPTION.is_mandatory */
T1 T42x2431(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
	return (((T35*)(C))->a6);
} else {
	return (((T37*)(C))->a8);
}
} else {
	return (((T73*)(C))->a6);
}
}

/* Call to UT_ERROR.default_message */
T0* T50x2979(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=477) {
if (t1<=474) {
if (t1<=472) {
if (t1==49) {
	return (T49f2(C));
} else {
	return (T472f5(C));
}
} else {
	return (T474f5(C));
}
} else {
if (t1<=476) {
if (t1==475) {
	return (T475f5(C));
} else {
	return (T476f5(C));
}
} else {
	return (T477f5(C));
}
}
} else {
if (t1<=480) {
if (t1<=479) {
if (t1==478) {
	return (T478f5(C));
} else {
	return (T479f5(C));
}
} else {
	return (T480f5(C));
}
} else {
if (t1==481) {
	return (T481f5(C));
} else {
	return (T496f5(C));
}
}
}
}

/* Call to DS_SPARSE_TABLE [STRING_8, STRING_8].new_cursor */
T0* T62x1919(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (T25f35(C));
} else {
	return (T29f30(C));
}
} else {
if (t1==34) {
	return (T34f30(C));
} else {
	return (T79f40(C));
}
}
}

/* Call to DS_SPARSE_TABLE [STRING_8, STRING_8].key_equality_tester */
T0* T62x1822(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (((T25*)(C))->a1);
} else {
	return (((T29*)(C))->a7);
}
} else {
if (t1==34) {
	return (((T34*)(C))->a7);
} else {
	return (((T79*)(C))->a1);
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_item */
T0* T79x1929T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (T25f51(C, a1));
} else {
	return (T29f43(C, a1));
}
} else {
if (t1==34) {
	return (T34f44(C, a1));
} else {
	return (T79f27(C, a1));
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_key */
T0* T79x1772T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (T25f46(C, a1));
} else {
	return (T29f38(C, a1));
}
} else {
if (t1==34) {
	return (T34f35(C, a1));
} else {
	return (T79f26(C, a1));
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_after */
T1 T79x1913T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return (T25f45(C, a1));
} else {
	return (T29f37(C, a1));
}
} else {
if (t1==34) {
	return (T34f34(C, a1));
} else {
	return (T79f25(C, a1));
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].before_position */
T6 T79x1877(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
	return ((T6)(GE_int32(-1)));
} else {
	return ((T6)(GE_int32(-1)));
}
} else {
if (t1==34) {
	return ((T6)(GE_int32(-1)));
} else {
	return ((T6)(GE_int32(-1)));
}
}
}

/* Call to XM_EIFFEL_SCANNER.start_condition */
T6 T127x6762(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
	return (T127f43(C));
} else {
	return (T165f61(C));
}
} else {
if (t1==169) {
	return (T169f50(C));
} else {
	return (T171f62(C));
}
}
}

/* Call to XM_EIFFEL_SCANNER.is_applicable_encoding */
T1 T127x6637T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
	return (T127f66(C, a1));
} else {
	return (T165f60(C, a1));
}
} else {
if (t1==169) {
	return (T169f48(C, a1));
} else {
	return (T171f61(C, a1));
}
}
}

/* Call to XM_EIFFEL_SCANNER.end_of_file */
T1 T127x6767(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
	return (T127f65(C));
} else {
	return (T165f59(C));
}
} else {
if (t1==169) {
	return (T169f61(C));
} else {
	return (T171f60(C));
}
}
}

/* Call to XM_EIFFEL_SCANNER.last_value */
T0* T127x6648(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
	return (((T127*)(C))->a2);
} else {
	return (((T165*)(C))->a42);
}
} else {
if (t1==169) {
	return (((T169*)(C))->a2);
} else {
	return (((T171*)(C))->a44);
}
}
}

/* Call to XM_EIFFEL_SCANNER.last_token */
T6 T127x6758(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
	return (((T127*)(C))->a1);
} else {
	return (((T165*)(C))->a41);
}
} else {
if (t1==169) {
	return (((T169*)(C))->a1);
} else {
	return (((T171*)(C))->a43);
}
}
}

/* Call to XM_EIFFEL_SCANNER.error_position */
T0* T127x6646(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
	return (T127f63(C));
} else {
	return (T165f56(C));
}
} else {
if (t1==169) {
	return (T169f55(C));
} else {
	return (T171f57(C));
}
}
}

/* Call to XM_NODE.parent */
T0* T191x5726(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=311) {
if (t1<=189) {
if (t1==96) {
	return (((T96*)(C))->a1);
} else {
	return (((T189*)(C))->a4);
}
} else {
	return (((T311*)(C))->a2);
}
} else {
if (t1==312) {
	return (((T312*)(C))->a3);
} else {
	return (((T313*)(C))->a2);
}
}
}

/* Call to GEANT_TASK.exit_code */
T6 T277x8401(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=291) {
if (t1<=284) {
if (t1<=281) {
if (t1<=279) {
if (t1==278) {
	return (T278f9(C));
} else {
	return (T279f9(C));
}
} else {
if (t1==280) {
	return (T280f9(C));
} else {
	return (T281f9(C));
}
}
} else {
if (t1<=283) {
if (t1==282) {
	return (T282f9(C));
} else {
	return (T283f9(C));
}
} else {
	return (T284f9(C));
}
}
} else {
if (t1<=288) {
if (t1<=286) {
if (t1==285) {
	return (T285f9(C));
} else {
	return (T286f9(C));
}
} else {
if (t1==287) {
	return (T287f9(C));
} else {
	return (T288f9(C));
}
}
} else {
if (t1<=290) {
if (t1==289) {
	return (T289f9(C));
} else {
	return (T290f9(C));
}
} else {
	return (T291f9(C));
}
}
}
} else {
if (t1<=298) {
if (t1<=295) {
if (t1<=293) {
if (t1==292) {
	return (T292f9(C));
} else {
	return (T293f9(C));
}
} else {
if (t1==294) {
	return (T294f9(C));
} else {
	return (T295f9(C));
}
}
} else {
if (t1<=297) {
if (t1==296) {
	return (T296f9(C));
} else {
	return (T297f9(C));
}
} else {
	return (T298f9(C));
}
}
} else {
if (t1<=301) {
if (t1<=300) {
if (t1==299) {
	return (T299f9(C));
} else {
	return (T300f9(C));
}
} else {
	return (T301f9(C));
}
} else {
if (t1<=303) {
if (t1==302) {
	return (T302f9(C));
} else {
	return (T303f9(C));
}
} else {
	return (T304f9(C));
}
}
}
}
}

/* Call to GEANT_TASK.is_enabled */
T1 T277x2239(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=291) {
if (t1<=284) {
if (t1<=281) {
if (t1<=279) {
if (t1==278) {
	return (T278f6(C));
} else {
	return (T279f6(C));
}
} else {
if (t1==280) {
	return (T280f6(C));
} else {
	return (T281f6(C));
}
}
} else {
if (t1<=283) {
if (t1==282) {
	return (T282f6(C));
} else {
	return (T283f6(C));
}
} else {
	return (T284f6(C));
}
}
} else {
if (t1<=288) {
if (t1<=286) {
if (t1==285) {
	return (T285f6(C));
} else {
	return (T286f6(C));
}
} else {
if (t1==287) {
	return (T287f6(C));
} else {
	return (T288f6(C));
}
}
} else {
if (t1<=290) {
if (t1==289) {
	return (T289f6(C));
} else {
	return (T290f6(C));
}
} else {
	return (T291f6(C));
}
}
}
} else {
if (t1<=298) {
if (t1<=295) {
if (t1<=293) {
if (t1==292) {
	return (T292f6(C));
} else {
	return (T293f6(C));
}
} else {
if (t1==294) {
	return (T294f6(C));
} else {
	return (T295f6(C));
}
}
} else {
if (t1<=297) {
if (t1==296) {
	return (T296f6(C));
} else {
	return (T297f6(C));
}
} else {
	return (T298f6(C));
}
}
} else {
if (t1<=301) {
if (t1<=300) {
if (t1==299) {
	return (T299f6(C));
} else {
	return (T300f6(C));
}
} else {
	return (T301f6(C));
}
} else {
if (t1<=303) {
if (t1==302) {
	return (T302f6(C));
} else {
	return (T303f6(C));
}
} else {
	return (T304f6(C));
}
}
}
}
}

/* Call to GEANT_TASK.is_executable */
T1 T277x8400(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=291) {
if (t1<=284) {
if (t1<=281) {
if (t1<=279) {
if (t1==278) {
	return (T278f4(C));
} else {
	return (T279f4(C));
}
} else {
if (t1==280) {
	return (T280f4(C));
} else {
	return (T281f4(C));
}
}
} else {
if (t1<=283) {
if (t1==282) {
	return (T282f4(C));
} else {
	return (T283f4(C));
}
} else {
	return (T284f4(C));
}
}
} else {
if (t1<=288) {
if (t1<=286) {
if (t1==285) {
	return (T285f4(C));
} else {
	return (T286f4(C));
}
} else {
if (t1==287) {
	return (T287f4(C));
} else {
	return (T288f4(C));
}
}
} else {
if (t1<=290) {
if (t1==289) {
	return (T289f4(C));
} else {
	return (T290f4(C));
}
} else {
	return (T291f4(C));
}
}
}
} else {
if (t1<=298) {
if (t1<=295) {
if (t1<=293) {
if (t1==292) {
	return (T292f4(C));
} else {
	return (T293f4(C));
}
} else {
if (t1==294) {
	return (T294f4(C));
} else {
	return (T295f4(C));
}
}
} else {
if (t1<=297) {
if (t1==296) {
	return (T296f4(C));
} else {
	return (T297f4(C));
}
} else {
	return (T298f4(C));
}
}
} else {
if (t1<=301) {
if (t1<=300) {
if (t1==299) {
	return (T299f4(C));
} else {
	return (T300f4(C));
}
} else {
	return (T301f4(C));
}
} else {
if (t1<=303) {
if (t1==302) {
	return (T302f4(C));
} else {
	return (T303f4(C));
}
} else {
	return (T304f4(C));
}
}
}
}
}

/* Call to LX_TRANSITION [LX_NFA_STATE].target */
T0* T512x13144(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=513) {
if (t1==511) {
	return (((T511*)(C))->a2);
} else {
	return (((T513*)(C))->a1);
}
} else {
	return (((T515*)(C))->a2);
}
}

/* Call to LX_TRANSITION [LX_NFA_STATE].labeled */
T1 T512x13147T6(T0* C, T6 a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=513) {
if (t1==511) {
	return (T511f3(C, a1));
} else {
	return (T513f2(C, a1));
}
} else {
	return (T515f3(C, a1));
}
}

/* Call to AP_OPTION.record_occurrence */
void T42x2445T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
		T35f25(C, a1);
} else {
		T37f30(C, a1);
}
} else {
		T73f42(C, a1);
}
}

/* Call to AP_OPTION.reset */
void T42x2446(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=37) {
if (t1==35) {
		T35f23(C);
} else {
		T37f28(C);
}
} else {
		T73f41(C);
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_forth */
void T79x1915T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
		T25f81(C, a1);
} else {
		T29f68(C, a1);
}
} else {
if (t1==34) {
		T34f69(C, a1);
} else {
		T79f55(C, a1);
}
}
}

/* Call to DS_HASH_TABLE [STRING_8, STRING_8].cursor_start */
void T79x1914T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=29) {
if (t1==25) {
		T25f80(C, a1);
} else {
		T29f67(C, a1);
}
} else {
if (t1==34) {
		T34f68(C, a1);
} else {
		T79f54(C, a1);
}
}
}

/* Call to XM_CALLBACKS_FILTER.set_next */
void T92x5130T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f11(C, a1);
} else {
		T97f5(C, a1);
}
} else {
		T172f40(C, a1);
}
}

/* Call to XM_CALLBACKS.on_xml_declaration */
void T93x5147T0T0T1(T0* C, T0* a1, T0* a2, T1 a3)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f23(C, a1, a2, a3);
} else {
		T97f16(C, a1, a2, a3);
}
} else {
if (t1==132) {
		T132f12(C, a1, a2, a3);
} else {
		T172f41(C, a1, a2, a3);
}
}
}

/* Call to XM_CALLBACKS.on_attribute */
void T93x5152T0T0T0T0(T0* C, T0* a1, T0* a2, T0* a3, T0* a4)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f21(C, a1, a2, a3, a4);
} else {
		T97f15(C, a1, a2, a3, a4);
}
} else {
if (t1==132) {
		T132f10(C, a1, a2, a3, a4);
} else {
		T172f34(C, a1, a2, a3, a4);
}
}
}

/* Call to XM_CALLBACKS.on_error */
void T93x5148T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f20(C, a1);
} else {
		T97f14(C, a1);
}
} else {
if (t1==132) {
		T132f11(C, a1);
} else {
		T172f35(C, a1);
}
}
}

/* Call to XM_CALLBACKS.on_end_tag */
void T93x5154T0T0T0(T0* C, T0* a1, T0* a2, T0* a3)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f19(C, a1, a2, a3);
} else {
		T97f13(C, a1, a2, a3);
}
} else {
if (t1==132) {
		T132f8(C, a1, a2, a3);
} else {
		T172f32(C, a1, a2, a3);
}
}
}

/* Call to XM_CALLBACKS.on_start_tag_finish */
void T93x5153(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f18(C);
} else {
		T97f12(C);
}
} else {
if (t1==132) {
		T132f7(C);
} else {
		T172f31(C);
}
}
}

/* Call to XM_CALLBACKS.on_start_tag */
void T93x5151T0T0T0(T0* C, T0* a1, T0* a2, T0* a3)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f17(C, a1, a2, a3);
} else {
		T97f11(C, a1, a2, a3);
}
} else {
if (t1==132) {
		T132f9(C, a1, a2, a3);
} else {
		T172f33(C, a1, a2, a3);
}
}
}

/* Call to XM_CALLBACKS.on_content */
void T93x5155T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f16(C, a1);
} else {
		T97f10(C, a1);
}
} else {
if (t1==132) {
		T132f6(C, a1);
} else {
		T172f30(C, a1);
}
}
}

/* Call to XM_CALLBACKS.on_processing_instruction */
void T93x5149T0T0(T0* C, T0* a1, T0* a2)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f15(C, a1, a2);
} else {
		T97f9(C, a1, a2);
}
} else {
if (t1==132) {
		T132f5(C, a1, a2);
} else {
		T172f29(C, a1, a2);
}
}
}

/* Call to XM_CALLBACKS.on_comment */
void T93x5150T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f14(C, a1);
} else {
		T97f8(C, a1);
}
} else {
if (t1==132) {
		T132f4(C, a1);
} else {
		T172f28(C, a1);
}
}
}

/* Call to XM_CALLBACKS.on_finish */
void T93x5146(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f13(C);
} else {
		T97f7(C);
}
} else {
if (t1==132) {
		T132f3(C);
} else {
		T172f27(C);
}
}
}

/* Call to XM_CALLBACKS.on_start */
void T93x5145(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=97) {
if (t1==94) {
		T94f12(C);
} else {
		T97f6(C);
}
} else {
if (t1==132) {
		T132f2(C);
} else {
		T172f26(C);
}
}
}

/* Call to XM_EIFFEL_SCANNER.close_input */
void T127x6633(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
		T127f199(C);
} else {
		T165f232(C);
}
} else {
if (t1==169) {
		T169f201(C);
} else {
		T171f236(C);
}
}
}

/* Call to XM_EIFFEL_SCANNER.set_input_from_resolver */
void T127x6632T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
		T127f202(C, a1);
} else {
		T165f235(C, a1);
}
} else {
if (t1==169) {
		T169f204(C, a1);
} else {
		T171f239(C, a1);
}
}
}

/* Call to XM_EIFFEL_SCANNER.set_encoding */
void T127x6638T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
		T127f201(C, a1);
} else {
		T165f234(C, a1);
}
} else {
if (t1==169) {
		T169f203(C, a1);
} else {
		T171f238(C, a1);
}
}
}

/* Call to XM_EIFFEL_SCANNER.push_start_condition_dtd_ignore */
void T127x6629(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
		T127f200(C);
} else {
		T165f233(C);
}
} else {
if (t1==169) {
		T169f202(C);
} else {
		T171f237(C);
}
}
}

/* Call to XM_EIFFEL_SCANNER.read_token */
void T127x6773(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
		T127f198(C);
} else {
		T165f231(C);
}
} else {
if (t1==169) {
		T169f200(C);
} else {
		T171f235(C);
}
}
}

/* Call to XM_EIFFEL_SCANNER.set_input_stream */
void T127x6631T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=165) {
if (t1==127) {
		T127f197(C, a1);
} else {
		T165f230(C, a1);
}
} else {
if (t1==169) {
		T169f199(C, a1);
} else {
		T171f234(C, a1);
}
}
}

/* Call to XM_NODE.process */
void T191x5736T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=311) {
if (t1<=189) {
if (t1==96) {
		T96f36(C, a1);
} else {
		T189f7(C, a1);
}
} else {
		T311f6(C, a1);
}
} else {
if (t1==312) {
		T312f7(C, a1);
} else {
		T313f5(C, a1);
}
}
}

/* Call to XM_NODE.node_set_parent */
void T191x5734T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=311) {
if (t1<=189) {
if (t1==96) {
		T96f31(C, a1);
} else {
		T189f6(C, a1);
}
} else {
		T311f5(C, a1);
}
} else {
if (t1==312) {
		T312f6(C, a1);
} else {
		T313f4(C, a1);
}
}
}

/* Call to GEANT_TASK.execute */
void T277x8403(T0* C)
{
	int t1 = ((T0*)(C))->id;
if (t1<=291) {
if (t1<=284) {
if (t1<=281) {
if (t1<=279) {
if (t1==278) {
		T278f35(C);
} else {
		T279f34(C);
}
} else {
if (t1==280) {
		T280f32(C);
} else {
		T281f33(C);
}
}
} else {
if (t1<=283) {
if (t1==282) {
		T282f29(C);
} else {
		T283f23(C);
}
} else {
		T284f23(C);
}
}
} else {
if (t1<=288) {
if (t1<=286) {
if (t1==285) {
		T285f22(C);
} else {
		T286f34(C);
}
} else {
if (t1==287) {
		T287f36(C);
} else {
		T288f33(C);
}
}
} else {
if (t1<=290) {
if (t1==289) {
		T289f33(C);
} else {
		T290f38(C);
}
} else {
		T291f34(C);
}
}
}
} else {
if (t1<=298) {
if (t1<=295) {
if (t1<=293) {
if (t1==292) {
		T292f28(C);
} else {
		T293f22(C);
}
} else {
if (t1==294) {
		T294f25(C);
} else {
		T295f30(C);
}
}
} else {
if (t1<=297) {
if (t1==296) {
		T296f25(C);
} else {
		T297f23(C);
}
} else {
		T298f40(C);
}
}
} else {
if (t1<=301) {
if (t1<=300) {
if (t1==299) {
		T299f27(C);
} else {
		T300f22(C);
}
} else {
		T301f27(C);
}
} else {
if (t1<=303) {
if (t1==302) {
		T302f25(C);
} else {
		T303f31(C);
}
} else {
		T304f30(C);
}
}
}
}
}

/* Call to LX_TRANSITION [LX_NFA_STATE].record */
void T512x13148T0(T0* C, T0* a1)
{
	int t1 = ((T0*)(C))->id;
if (t1<=513) {
if (t1==511) {
		T511f5(C, a1);
} else {
		T513f4(C, a1);
}
} else {
		T515f5(C, a1);
}
}

/* GEANT.make */
T0* T21c20(void)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T21));
	*(T21*)C = GE_default21;
	t1 = (T21f10(C));
	T27f5(GE_void(t1), GE_ms("geant", 5));
	((T21*)(C))->a1 = T28c7();
	T21f21(C);
	if (((T21*)(C))->a2) {
		t1 = (T21f9(C));
		T29f45(GE_void(t1), GE_ms("verbose", 7), GE_ms("true", 4));
	}
	l4 = T25c57();
	l3 = T24c4();
	T24f5(GE_void(l3), ((T21*)(C))->a2);
	T24f6(GE_void(l3), ((T21*)(C))->a3);
	T24f7(GE_void(l3), ((T21*)(C))->a4);
	t2 = ((((T21*)(C))->a5)==(EIF_VOID));
	if (t2) {
		((T21*)(C))->a5 = (T21f8(C));
	}
	l2 = T23c9(((T21*)(C))->a5);
	T23f10(GE_void(l2), l4, l3);
	t1 = (((T23*)(GE_void(l2)))->a1);
	l1 = (((T30*)(GE_void(t1)))->a1);
	T22f25(GE_void(l1));
	t2 = ((((T21*)(C))->a6)!=(EIF_VOID));
	if (t2) {
		t3 = (((((T0*)(GE_void(((T21*)(C))->a6)))->id==17)?((T17*)(((T21*)(C))->a6))->a2:((T194*)(((T21*)(C))->a6))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
	}
	if (t2) {
		t1 = (((T22*)(GE_void(l1)))->a1);
		t2 = (T31f24(GE_void(t1), ((T21*)(C))->a6));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (((T22*)(GE_void(l1)))->a2);
			t4 = (((((T0*)(GE_void(((T21*)(C))->a6)))->id==17)?T17f8(((T21*)(C))->a6, GE_ms("\'", 1)):T194f7(((T21*)(C))->a6, GE_ms("\'", 1))));
			t1 = GE_ma33((T6)4,
GE_ms("Project \'", 9),
t1,
GE_ms("\' does not contain a target named `", 35),
t4);
			T21f22(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (((T22*)(GE_void(l1)))->a1);
		l5 = (T31f28(GE_void(t1), ((T21*)(C))->a6));
		t2 = (T26f29(GE_void(l5)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (T26f30(GE_void(l5)));
			t1 = GE_ma33((T6)3,
GE_ms("target: `", 9),
t1,
GE_ms("\' is not exported.", 18));
			T21f22(C, (T6)(GE_int32(1)), t1);
		}
		T22f26(GE_void(l1), ((T21*)(C))->a6);
	}
	if (((T21*)(C))->a7) {
		T22f27(GE_void(l1));
	} else {
		l5 = (T22f19(GE_void(l1)));
		t1 = (T21f11(C));
		T22f28(GE_void(l1), t1);
	}
	t2 = (((T22*)(GE_void(l1)))->a3);
	t2 = ((T1)(!(t2)));
	if (t2) {
		T21f22(C, (T6)(GE_int32(1)), EIF_VOID);
	}
	return C;
}

/* GEANT_PROJECT.build */
void T22f28(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = GE_ma33((T6)1,
GE_ms("Building Project", 16));
	T22f24(C, t1);
	l1 = (T22f19(C));
	T22f38(C, l1, a1);
}

/* GEANT_PROJECT.build_target */
void T22f38(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	t1 = (T22f18(C));
	T100f9(GE_void(t1), a2);
	l1 = T186c8((T6)(GE_int32(10)));
	T186f9(GE_void(l1), a1);
	T22f39(C, l1);
	l2 = T34c45();
	t1 = (T22f18(C));
	T100f9(GE_void(t1), l2);
	t2 = (((T186*)(GE_void(l1)))->a1);
	t3 = ((t2)==((T6)(GE_int32(1))));
	while (!(t3)) {
		t1 = (T186f5(GE_void(l1)));
		T22f40(C, t1, l2, EIF_FALSE, EIF_TRUE);
		T186f10(GE_void(l1));
		t2 = (((T186*)(GE_void(l1)))->a1);
		t3 = ((t2)==((T6)(GE_int32(1))));
	}
	t1 = (T22f18(C));
	T100f10(GE_void(t1));
	T22f40(C, a1, a2, EIF_TRUE, EIF_TRUE);
	t1 = (T22f18(C));
	T100f10(GE_void(t1));
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].remove */
void T100f10(T0* C)
{
	T0* l1 = 0;
	((T176*)(GE_void(((T100*)(C))->a2)))->z2[((T100*)(C))->a1] = (l1);
	((T100*)(C))->a1 = ((T6)((((T100*)(C))->a1)-((T6)(GE_int32(1)))));
}

/* DS_ARRAYED_STACK [GEANT_TARGET].remove */
void T186f10(T0* C)
{
	T0* l1 = 0;
	((T119*)(GE_void(((T186*)(C))->a2)))->z2[((T186*)(C))->a1] = (l1);
	((T186*)(C))->a1 = ((T6)((((T186*)(C))->a1)-((T6)(GE_int32(1)))));
}

/* GEANT_PROJECT.execute_target */
void T22f40(T0* C, T0* a1, T0* a2, T1 a3, T1 a4)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	t1 = (T26f30(GE_void(a1)));
	t1 = GE_ma33((T6)5,
GE_ms("project \'", 9),
((T22*)(C))->a2,
GE_ms("\': excuting target `", 20),
t1,
GE_ms("\'", 1));
	T22f31(C, t1);
	l1 = ((T22*)(C))->a13;
	if (!(a3)) {
		t3 = (((T26*)(GE_void(a1)))->a9);
		t2 = ((T1)(!(t3)));
	} else {
		t2 = EIF_TRUE;
	}
	if (t2) {
		if (a4) {
			l2 = (T26f32(GE_void(a1)));
		} else {
			l2 = a1;
		}
		((T22*)(C))->a13 = l2;
		t1 = (((T26*)(GE_void(l2)))->a4);
		t2 = ((t1)!=(C));
		if (t2) {
			t1 = (((T26*)(GE_void(l2)))->a4);
			T22f40(GE_void(t1), l2, a2, a3, a4);
		} else {
			t1 = (T22f18(C));
			T100f9(GE_void(t1), a2);
			T26f90(GE_void(l2));
			t1 = (T22f18(C));
			T100f10(GE_void(t1));
		}
	}
	((T22*)(C))->a13 = l1;
}

/* GEANT_TARGET.execute */
void T26f90(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	T1 t4;
	T0* t5;
	t1 = ((T1)(!(((T26*)(C))->a8)));
	if (!(t1)) {
		t1 = ((T1)(!(((T26*)(C))->a9)));
	}
	if (t1) {
		t1 = (T26f42(C));
		if (t1) {
			t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a9);
			t1 = (((T24*)(GE_void(t2)))->a1);
			if (t1) {
				t2 = GE_ma33((T6)1,
GE_ms("", 0));
				T22f24(GE_void(((T26*)(C))->a4), t2);
				t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a2);
				t3 = (T22f20(GE_void(((T26*)(C))->a4), C));
				t2 = GE_ma33((T6)4,
t2,
GE_ms(".", 1),
t3,
GE_ms(":", 1));
				T22f24(GE_void(((T26*)(C))->a4), t2);
				t2 = GE_ma33((T6)1,
GE_ms("", 0));
				T22f24(GE_void(((T26*)(C))->a4), t2);
			}
			t1 = ((((T26*)(C))->a5)!=(EIF_VOID));
			if (t1) {
				t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a2);
				t3 = (T22f20(GE_void(((T26*)(C))->a4), C));
				t2 = GE_ma33((T6)6,
GE_ms("target `", 8),
t2,
GE_ms(".", 1),
t3,
GE_ms("\' is obsolete. ", 15),
((T26*)(C))->a5);
				T22f41(GE_void(((T26*)(C))->a4), t2);
			}
			t2 = (T26f43(C));
			t1 = (T96f20(GE_void(((T26*)(C))->a2), t2));
			if (t1) {
				l5 = T243c7();
				t2 = (T26f28(C));
				t3 = (((T22*)(GE_void(((T26*)(C))->a4)))->a7);
				T58f17(GE_void(t2), t3);
				t2 = (T26f28(C));
				T243f8(GE_void(l5), t2);
				t2 = (T26f43(C));
				t2 = (T96f21(GE_void(((T26*)(C))->a2), t2));
				t2 = (((T189*)(GE_void(t2)))->a3);
				t2 = (((((T0*)(GE_void(t2)))->id==17)?T17f4(t2):T194f16(t2)));
				l3 = (T243f5(GE_void(l5), t2));
				t2 = GE_ma33((T6)3,
GE_ms("changing to directory: \'", 24),
l3,
GE_ms("\'", 1));
				T22f31(GE_void(((T26*)(C))->a4), t2);
				t2 = (T26f44(C));
				l2 = (((((T0*)(GE_void(t2)))->id==53)?T53f26(t2):T54f23(t2)));
				t2 = (T26f44(C));
				t1 = (((((T0*)(GE_void(t2)))->id==53)?T53f27(t2, l3):T54f24(t2, l3)));
				t1 = ((T1)(!(t1)));
				if (t1) {
					t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a2);
					t3 = (T22f20(GE_void(((T26*)(C))->a4), C));
					t2 = GE_ma33((T6)7,
GE_ms("target `", 8),
t2,
GE_ms(".", 1),
t3,
GE_ms("\': directory \'", 14),
l3,
GE_ms("\' does not exist", 16));
					T26f81(C, (T6)(GE_int32(1)), t2);
				}
				t2 = (T26f44(C));
				if (((T0*)(GE_void(t2)))->id==53) {
					T53f37(t2, l3);
				} else {
					T54f33(t2, l3);
				}
				t2 = (T26f44(C));
				t2 = (((((T0*)(GE_void(t2)))->id==53)?T53f26(t2):T54f23(t2)));
				t2 = GE_ma33((T6)3,
GE_ms("current working directory: \'", 28),
t2,
GE_ms("\'", 1));
				T22f31(GE_void(((T26*)(C))->a4), t2);
			}
			t2 = (T26f27(C));
			l6 = (T100f5(GE_void(t2)));
			t2 = (T26f27(C));
			T100f10(GE_void(t2));
			l6 = (T26f45(C, l6));
			t2 = (T26f27(C));
			T100f9(GE_void(t2), l6);
			l4 = (T96f19(GE_void(((T26*)(C))->a2)));
			T190f10(GE_void(l4));
			t1 = (((T190*)(GE_void(l4)))->a1);
			if (!(t1)) {
				t4 = (T26f42(C));
				t1 = ((T1)(!(t4)));
			}
			while (!(t1)) {
				t2 = (T190f8(GE_void(l4)));
				if ((t2)==EIF_VOID) {
					l1 = EIF_VOID;
				} else {
					switch (((T0*)(t2))->id) {
					case 96:
						l1 = t2;
						break;
					default:
						l1 = EIF_VOID;
					}
				}
				t1 = ((l1)!=(EIF_VOID));
				if (t1) {
					t2 = (T26f24(C));
					t3 = (((T96*)(GE_void(l1)))->a3);
					t5 = (T26f19(C));
					t1 = (T76f1(GE_void(t2), t3, t5));
					t1 = ((T1)(!(t1)));
					if (t1) {
						t2 = (T26f24(C));
						t3 = (((T96*)(GE_void(l1)))->a3);
						t5 = (T26f14(C));
						t4 = (T76f1(GE_void(t2), t3, t5));
						t1 = ((T1)(!(t4)));
					}
					if (t1) {
						t2 = (T26f24(C));
						t3 = (((T96*)(GE_void(l1)))->a3);
						t5 = (T26f16(C));
						t4 = (T76f1(GE_void(t2), t3, t5));
						t1 = ((T1)(!(t4)));
					}
					if (t1) {
						T26f94(C, l1);
					}
				}
				T190f11(GE_void(l4));
				t1 = (((T190*)(GE_void(l4)))->a1);
				if (!(t1)) {
					t4 = (T26f42(C));
					t1 = ((T1)(!(t4)));
				}
			}
			t2 = (T26f43(C));
			t1 = (T26f35(C, t2));
			if (t1) {
				t2 = GE_ma33((T6)3,
GE_ms("changing to directory: \'", 24),
l2,
GE_ms("\'", 1));
				T22f31(GE_void(((T26*)(C))->a4), t2);
				t2 = (T26f44(C));
				if (((T0*)(GE_void(t2)))->id==53) {
					T53f37(t2, l2);
				} else {
					T54f33(t2, l2);
				}
			}
			T26f95(C, EIF_TRUE);
		}
	}
}

/* GEANT_TARGET.set_executed */
void T26f95(T0* C, T1 a1)
{
	((T26*)(C))->a9 = a1;
}

/* GEANT_TARGET.has_attribute */
T1 T26f35(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T26*)(C))->a2), a1));
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].forth */
void T190f11(T0* C)
{
	if (((T0*)(GE_void(((T190*)(C))->a3)))->id==96) {
		T96f38(((T190*)(C))->a3, C);
	} else {
		T95f24(((T190*)(C))->a3, C);
	}
}

/* XM_DOCUMENT.cursor_forth */
void T95f24(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T190*)(a1))->a4);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T95*)(C))->a3;
	} else {
		t2 = (((T190*)(a1))->a2);
		l3 = (((T317*)(GE_void(t2)))->a1);
	}
	l2 = ((l3)==(EIF_VOID));
	T190f14(a1, l3, EIF_FALSE, l2);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T95f29(C, a1);
		}
	} else {
		if (l1) {
			T95f28(C, a1);
		}
	}
}

/* XM_DOCUMENT.add_traversing_cursor */
void T95f28(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T95*)(C))->a2));
	if (t1) {
		t2 = (((T190*)(GE_void(((T95*)(C))->a2)))->a5);
		T190f16(a1, t2);
		T190f16(GE_void(((T95*)(C))->a2), a1);
	}
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].set_next_cursor */
void T190f16(T0* C, T0* a1)
{
	((T190*)(C))->a5 = a1;
}

/* XM_DOCUMENT.remove_traversing_cursor */
void T95f29(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T95*)(C))->a2));
	if (t1) {
		l2 = ((T95*)(C))->a2;
		l1 = (((T190*)(GE_void(l2)))->a5);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T190*)(GE_void(l1)))->a5);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T190*)(a1))->a5);
			T190f16(GE_void(l2), t2);
			T190f16(a1, EIF_VOID);
		}
	}
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].set */
void T190f14(T0* C, T0* a1, T1 a2, T1 a3)
{
	((T190*)(C))->a2 = a1;
	((T190*)(C))->a4 = a2;
	((T190*)(C))->a1 = a3;
}

/* XM_ELEMENT.cursor_forth */
void T96f38(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T190*)(a1))->a4);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T96*)(C))->a5;
	} else {
		t2 = (((T190*)(a1))->a2);
		l3 = (((T317*)(GE_void(t2)))->a1);
	}
	l2 = ((l3)==(EIF_VOID));
	T190f14(a1, l3, EIF_FALSE, l2);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T96f42(C, a1);
		}
	} else {
		if (l1) {
			T96f41(C, a1);
		}
	}
}

/* XM_ELEMENT.add_traversing_cursor */
void T96f41(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T96*)(C))->a4));
	if (t1) {
		t2 = (((T190*)(GE_void(((T96*)(C))->a4)))->a5);
		T190f16(a1, t2);
		T190f16(GE_void(((T96*)(C))->a4), a1);
	}
}

/* XM_ELEMENT.remove_traversing_cursor */
void T96f42(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T96*)(C))->a4));
	if (t1) {
		l2 = ((T96*)(C))->a4;
		l1 = (((T190*)(GE_void(l2)))->a5);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T190*)(GE_void(l1)))->a5);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T190*)(a1))->a5);
			T190f16(GE_void(l2), t2);
			T190f16(a1, EIF_VOID);
		}
	}
}

/* GEANT_TARGET.execute_task */
void T26f94(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T0* t3;
	T1 t4;
	T6 t5;
	t1 = (T26f24(C));
	t2 = (((T96*)(GE_void(a1)))->a3);
	t3 = (T26f46(C));
	t4 = (T76f1(GE_void(t1), t2, t3));
	if (t4) {
		l1 = T278c34(((T26*)(C))->a4, a1);
	} else {
		t1 = (T26f24(C));
		t2 = (((T96*)(GE_void(a1)))->a3);
		t3 = (T26f47(C));
		t4 = (T76f1(GE_void(t1), t2, t3));
		if (t4) {
			l1 = T279c33(((T26*)(C))->a4, a1);
		} else {
			t1 = (T26f24(C));
			t2 = (((T96*)(GE_void(a1)))->a3);
			t3 = (T26f48(C));
			t4 = (T76f1(GE_void(t1), t2, t3));
			if (t4) {
				l1 = T280c31(((T26*)(C))->a4, a1);
			} else {
				t1 = (T26f24(C));
				t2 = (((T96*)(GE_void(a1)))->a3);
				t3 = (T26f49(C));
				t4 = (T76f1(GE_void(t1), t2, t3));
				if (t4) {
					l1 = T281c32(((T26*)(C))->a4, a1);
				} else {
					t1 = (T26f24(C));
					t2 = (((T96*)(GE_void(a1)))->a3);
					t3 = (T26f50(C));
					t4 = (T76f1(GE_void(t1), t2, t3));
					if (t4) {
						l1 = T282c28(((T26*)(C))->a4, a1);
					} else {
						t1 = (T26f24(C));
						t2 = (((T96*)(GE_void(a1)))->a3);
						t3 = (T26f51(C));
						t4 = (T76f1(GE_void(t1), t2, t3));
						if (t4) {
							l1 = T283c22(((T26*)(C))->a4, a1);
						} else {
							t1 = (T26f24(C));
							t2 = (((T96*)(GE_void(a1)))->a3);
							t3 = (T26f52(C));
							t4 = (T76f1(GE_void(t1), t2, t3));
							if (t4) {
								l1 = T284c22(((T26*)(C))->a4, a1);
							} else {
								t1 = (T26f24(C));
								t2 = (((T96*)(GE_void(a1)))->a3);
								t3 = (T26f53(C));
								t4 = (T76f1(GE_void(t1), t2, t3));
								if (t4) {
									l1 = T285c21(((T26*)(C))->a4, a1);
								} else {
									t1 = (T26f24(C));
									t2 = (((T96*)(GE_void(a1)))->a3);
									t3 = (T26f54(C));
									t4 = (T76f1(GE_void(t1), t2, t3));
									if (t4) {
										l1 = T286c33(((T26*)(C))->a4, a1);
									} else {
										t1 = (T26f24(C));
										t2 = (((T96*)(GE_void(a1)))->a3);
										t3 = (T26f55(C));
										t4 = (T76f1(GE_void(t1), t2, t3));
										if (t4) {
											l1 = T287c35(((T26*)(C))->a4, a1);
										} else {
											t1 = (T26f24(C));
											t2 = (((T96*)(GE_void(a1)))->a3);
											t3 = (T26f56(C));
											t4 = (T76f1(GE_void(t1), t2, t3));
											if (t4) {
												l1 = T288c32(((T26*)(C))->a4, a1);
											} else {
												t1 = (T26f24(C));
												t2 = (((T96*)(GE_void(a1)))->a3);
												t3 = (T26f57(C));
												t4 = (T76f1(GE_void(t1), t2, t3));
												if (t4) {
													l1 = T289c32(((T26*)(C))->a4, a1);
												} else {
													t1 = (T26f24(C));
													t2 = (((T96*)(GE_void(a1)))->a3);
													t3 = (T26f58(C));
													t4 = (T76f1(GE_void(t1), t2, t3));
													if (t4) {
														l1 = T290c37(((T26*)(C))->a4, a1);
													} else {
														t1 = (T26f24(C));
														t2 = (((T96*)(GE_void(a1)))->a3);
														t3 = (T26f59(C));
														t4 = (T76f1(GE_void(t1), t2, t3));
														if (t4) {
															l1 = T291c33(((T26*)(C))->a4, a1);
														} else {
															t1 = (T26f24(C));
															t2 = (((T96*)(GE_void(a1)))->a3);
															t3 = (T26f60(C));
															t4 = (T76f1(GE_void(t1), t2, t3));
															if (t4) {
																l1 = T292c27(((T26*)(C))->a4, a1);
															} else {
																t1 = (T26f24(C));
																t2 = (((T96*)(GE_void(a1)))->a3);
																t3 = (T26f61(C));
																t4 = (T76f1(GE_void(t1), t2, t3));
																if (t4) {
																	l1 = T293c21(((T26*)(C))->a4, a1);
																} else {
																	t1 = (T26f24(C));
																	t2 = (((T96*)(GE_void(a1)))->a3);
																	t3 = (T26f62(C));
																	t4 = (T76f1(GE_void(t1), t2, t3));
																	if (t4) {
																		l1 = T294c24(((T26*)(C))->a4, a1);
																	} else {
																		t1 = (T26f24(C));
																		t2 = (((T96*)(GE_void(a1)))->a3);
																		t3 = (T26f63(C));
																		t4 = (T76f1(GE_void(t1), t2, t3));
																		if (t4) {
																			l1 = T295c29(((T26*)(C))->a4, a1);
																		} else {
																			t1 = (T26f24(C));
																			t2 = (((T96*)(GE_void(a1)))->a3);
																			t3 = (T26f64(C));
																			t4 = (T76f1(GE_void(t1), t2, t3));
																			if (t4) {
																				l1 = T296c24(((T26*)(C))->a4, a1);
																			} else {
																				t1 = (T26f24(C));
																				t2 = (((T96*)(GE_void(a1)))->a3);
																				t3 = (T26f65(C));
																				t4 = (T76f1(GE_void(t1), t2, t3));
																				if (t4) {
																					l1 = T297c22(((T26*)(C))->a4, a1);
																				} else {
																					t1 = (T26f24(C));
																					t2 = (((T96*)(GE_void(a1)))->a3);
																					t3 = (T26f66(C));
																					t4 = (T76f1(GE_void(t1), t2, t3));
																					if (t4) {
																						l1 = T298c39(((T26*)(C))->a4, a1);
																					} else {
																						t1 = (T26f24(C));
																						t2 = (((T96*)(GE_void(a1)))->a3);
																						t3 = (T26f67(C));
																						t4 = (T76f1(GE_void(t1), t2, t3));
																						if (t4) {
																							l1 = T299c26(((T26*)(C))->a4, a1);
																						} else {
																							t1 = (T26f24(C));
																							t2 = (((T96*)(GE_void(a1)))->a3);
																							t3 = (T26f68(C));
																							t4 = (T76f1(GE_void(t1), t2, t3));
																							if (t4) {
																								l1 = T300c21(((T26*)(C))->a4, a1);
																							} else {
																								t1 = (T26f24(C));
																								t2 = (((T96*)(GE_void(a1)))->a3);
																								t3 = (T26f69(C));
																								t4 = (T76f1(GE_void(t1), t2, t3));
																								if (t4) {
																									l1 = T301c26(((T26*)(C))->a4, a1);
																								} else {
																									t1 = (T26f24(C));
																									t2 = (((T96*)(GE_void(a1)))->a3);
																									t3 = (T26f70(C));
																									t4 = (T76f1(GE_void(t1), t2, t3));
																									if (t4) {
																										l1 = T302c24(((T26*)(C))->a4, a1);
																									} else {
																										t1 = (T26f24(C));
																										t2 = (((T96*)(GE_void(a1)))->a3);
																										t3 = (T26f71(C));
																										t4 = (T76f1(GE_void(t1), t2, t3));
																										if (t4) {
																											l1 = T303c30(((T26*)(C))->a4, a1);
																										} else {
																											t1 = (T26f24(C));
																											t2 = (((T96*)(GE_void(a1)))->a3);
																											t3 = (T26f72(C));
																											t4 = (T76f1(GE_void(t1), t2, t3));
																											if (t4) {
																												l1 = T304c29(((T26*)(C))->a4, a1);
																											} else {
																												l1 = EIF_VOID;
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	t4 = ((l1)==(EIF_VOID));
	if (t4) {
		t1 = (((T96*)(GE_void(a1)))->a3);
		t1 = GE_ma33((T6)2,
GE_ms("unknown task : ", 15),
t1);
		T26f81(C, (T6)(GE_int32(1)), t1);
	}
	t4 = (T277x8400(GE_void(l1)));
	t4 = ((T1)(!(t4)));
	if (t4) {
		t1 = (((T96*)(GE_void(a1)))->a3);
		t1 = GE_ma33((T6)2,
GE_ms("cannot execute task : ", 22),
t1);
		T26f81(C, (T6)(GE_int32(1)), t1);
	}
	t4 = (T277x2239(GE_void(l1)));
	if (t4) {
		T277x8403(GE_void(l1));
		t5 = (T277x8401(GE_void(l1)));
		t4 = ((t5)!=((T6)(GE_int32(0))));
		if (t4) {
			t5 = (T277x8401(GE_void(l1)));
			T26f81(C, t5, EIF_VOID);
		}
	} else {
		t1 = GE_ma33((T6)1,
GE_ms("task is disabled", 16));
		T22f31(GE_void(((T26*)(C))->a4), t1);
	}
}

/* GEANT_REPLACE_TASK.make */
T0* T304c29(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T304));
	*(T304*)C = GE_default304;
	((T304*)(C))->a1 = T388c27(a1);
	T304f31(C, ((T304*)(C))->a1, a2);
	t1 = (T304f11(C));
	t2 = (T304f8(C, t1));
	if (t2) {
		t1 = (T304f11(C));
		l1 = (T304f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f28(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f13(C));
	t2 = (T304f8(C, t1));
	if (t2) {
		t1 = (T304f13(C));
		l1 = (T304f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f29(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f14(C));
	t2 = (T304f8(C, t1));
	if (t2) {
		t1 = (T304f14(C));
		l1 = (T304f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f30(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f15(C));
	t2 = (T304f8(C, t1));
	if (t2) {
		t1 = (T304f15(C));
		l1 = (T304f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f31(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f16(C));
	t2 = (T304f8(C, t1));
	if (t2) {
		t1 = (T304f16(C));
		l1 = (T304f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f32(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f17(C));
	t2 = (T304f8(C, t1));
	if (t2) {
		t1 = (T304f17(C));
		t1 = (T96f21(GE_void(((T304*)(C))->a3), t1));
		l1 = (((T189*)(GE_void(t1)))->a3);
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f33(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f18(C));
	t2 = (T304f8(C, t1));
	if (t2) {
		t1 = (T304f18(C));
		l1 = (T304f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f34(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f19(C));
	t2 = (T304f8(C, t1));
	if (t2) {
		t1 = (T304f19(C));
		l1 = (T304f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T388f35(GE_void(((T304*)(C))->a1), l1);
		}
	}
	t1 = (T304f20(C));
	l2 = (T96f16(GE_void(((T304*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T359c29(((T304*)(C))->a2, l2);
		t1 = (((T359*)(GE_void(l3)))->a1);
		T388f36(GE_void(((T304*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_REPLACE_COMMAND.set_fileset */
void T388f36(T0* C, T0* a1)
{
	((T388*)(C))->a5 = a1;
}

/* GEANT_FILESET_ELEMENT.make */
T0* T359c29(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T1 t3;
	T6 t4;
	T0* t5;
	C = (T0*)GE_alloc(sizeof(T359));
	*(T359*)C = GE_default359;
	T359f29p1(C, a1, a2);
	t1 = (T359f7(C));
	t2 = (T359f20(C, t1));
	if (!(t2)) {
		t1 = (T359f4(C));
		t2 = (T359f20(C, t1));
	}
	if (t2) {
		t1 = (T359f5(C));
		t3 = (T359f20(C, t1));
		if (!(t3)) {
			t1 = (T359f6(C));
			t2 = (T359f20(C, t1));
		} else {
			t2 = EIF_TRUE;
		}
	}
	if (t2) {
		t1 = (((T22*)(GE_void(((T359*)(C))->a2)))->a2);
		t1 = GE_ma33((T6)5,
GE_ms("\nLOAD ERROR in project \'", 24),
t1,
GE_ms("\':\n", 3),
GE_ms("  Remove obsolete format of element \'fileset\'.", 46),
GE_ms(" Use new format of element \'fileset\' as described in the documentation.", 71));
		T359f30(C, (T6)(GE_int32(1)), t1);
	}
	((T359*)(C))->a1 = T360c33(((T359*)(C))->a2);
	t1 = (T359f8(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f8(C));
		l1 = (T359f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T360f38(GE_void(((T359*)(C))->a1), l1);
		}
	}
	t1 = (T359f4(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (((T22*)(GE_void(((T359*)(C))->a2)))->a2);
		t5 = (T359f4(C));
		t1 = GE_ma33((T6)6,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Obsolete attribute \'", 32),
t5,
GE_ms("\' in element \'fileset\' found.\n", 30),
GE_ms("Use new format of element \'fileset\' as described in the documentation.", 70));
		T22f24(GE_void(((T359*)(C))->a2), t1);
		t1 = (T359f4(C));
		l1 = (T359f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T360f39(GE_void(((T359*)(C))->a1), l1);
		}
	}
	t1 = (T359f10(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f10(C));
		l1 = (T359f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T360f40(GE_void(((T359*)(C))->a1), l1);
		}
	}
	t1 = (T359f11(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f11(C));
		l1 = (T359f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T360f41(GE_void(((T359*)(C))->a1), l1);
		}
	}
	t1 = (T359f12(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f12(C));
		t2 = (T359f13(C, t1));
		T360f42(GE_void(((T359*)(C))->a1), t2);
	}
	t1 = (T359f7(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (((T22*)(GE_void(((T359*)(C))->a2)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Obsolete attribute \'concat\' in element \'fileset\' found.\n", 68),
GE_ms("Use new format of element \'fileset\' as described in the documentation.", 70));
		T22f24(GE_void(((T359*)(C))->a2), t1);
		t1 = (T359f7(C));
		t2 = (T359f13(C, t1));
		T360f43(GE_void(((T359*)(C))->a1), t2);
	}
	t1 = (T359f14(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f14(C));
		l1 = (T359f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T360f44(GE_void(((T359*)(C))->a1), l1);
		}
	}
	t1 = (T359f15(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f15(C));
		l1 = (T359f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T360f45(GE_void(((T359*)(C))->a1), l1);
		}
	}
	t1 = (T359f5(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f5(C));
		l1 = (T359f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T360f46(GE_void(((T359*)(C))->a1), l1);
		}
	}
	t1 = (T359f6(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f6(C));
		l1 = (T359f9(C, t1));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T360f47(GE_void(((T359*)(C))->a1), l1);
		}
	}
	t1 = (T359f16(C));
	t2 = (T359f20(C, t1));
	if (t2) {
		t1 = (T359f16(C));
		l1 = (T359f9(C, t1));
		t1 = (T359f16(C));
		t2 = (T359f13(C, t1));
		T360f34(GE_void(((T359*)(C))->a1), t2);
	}
	t1 = (T359f17(C));
	l4 = (T359f18(C, t1));
	l5 = (T115f5(GE_void(l4)));
	T116f8(GE_void(l5));
	t2 = (((T116*)(GE_void(l5)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l5)));
		l6 = T365c16(((T359*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l6)));
		if (t2) {
			t2 = (T365f10(GE_void(l6)));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l6)));
			t4 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l6)));
			T360f48(GE_void(((T359*)(C))->a1), t1);
		}
		T116f9(GE_void(l5));
		t2 = (((T116*)(GE_void(l5)))->a1);
	}
	t1 = (T359f19(C));
	l4 = (T359f18(C, t1));
	l5 = (T115f5(GE_void(l4)));
	T116f8(GE_void(l5));
	t2 = (((T116*)(GE_void(l5)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l5)));
		l6 = T365c16(((T359*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l6)));
		if (t2) {
			t2 = (T365f10(GE_void(l6)));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l6)));
			t4 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l6)));
			T360f49(GE_void(((T359*)(C))->a1), t1);
		}
		T116f9(GE_void(l5));
		t2 = (((T116*)(GE_void(l5)))->a1);
	}
	t1 = (T359f21(C));
	l2 = (T96f16(GE_void(((T359*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T403c12(((T359*)(C))->a2, l2);
		t1 = (((T403*)(GE_void(l3)))->a1);
		T360f50(GE_void(((T359*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_FILESET.set_map */
void T360f50(T0* C, T0* a1)
{
	((T360*)(C))->a5 = a1;
}

/* GEANT_MAP_ELEMENT.make */
T0* T403c12(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T403));
	*(T403*)C = GE_default403;
	T403f12p1(C, a1, a2);
	((T403*)(C))->a1 = T404c17(((T403*)(C))->a2);
	t1 = (T403f8(C));
	t2 = (T403f4(C, t1));
	if (t2) {
		t1 = (T403f8(C));
		l1 = (T403f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T404f18(GE_void(((T403*)(C))->a1), l1);
		}
	}
	t1 = (T403f6(C));
	t2 = (T403f4(C, t1));
	if (t2) {
		t1 = (T403f6(C));
		l1 = (T403f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T404f19(GE_void(((T403*)(C))->a1), l1);
		}
	}
	t1 = (T403f7(C));
	t2 = (T403f4(C, t1));
	if (t2) {
		t1 = (T403f7(C));
		l1 = (T403f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T404f20(GE_void(((T403*)(C))->a1), l1);
		}
	}
	t1 = (T403f9(C));
	l2 = (T96f16(GE_void(((T403*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T403c12(((T403*)(C))->a2, l2);
		t1 = (((T403*)(GE_void(l3)))->a1);
		T404f21(GE_void(((T403*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_MAP.set_map */
void T404f21(T0* C, T0* a1)
{
	((T404*)(C))->a5 = a1;
}

/* GEANT_MAP_ELEMENT.map_element_name */
unsigned char ge138os9522 = '\0';
T0* ge138ov9522;
T0* T403f9(T0* C)
{
	T0* R = 0;
	if (ge138os9522) {
		return ge138ov9522;
	} else {
		ge138os9522 = '\1';
	}
	R = GE_ms("map", 3);
	ge138ov9522 = R;
	return R;
}

/* GEANT_MAP.set_target_pattern */
void T404f20(T0* C, T0* a1)
{
	((T404*)(C))->a4 = a1;
}

/* GEANT_MAP_ELEMENT.to_attribute_name */
unsigned char ge138os9521 = '\0';
T0* ge138ov9521;
T0* T403f7(T0* C)
{
	T0* R = 0;
	if (ge138os9521) {
		return ge138ov9521;
	} else {
		ge138os9521 = '\1';
	}
	R = GE_ms("to", 2);
	ge138ov9521 = R;
	return R;
}

/* GEANT_MAP.set_source_pattern */
void T404f19(T0* C, T0* a1)
{
	((T404*)(C))->a3 = a1;
}

/* GEANT_MAP_ELEMENT.from_attribute_name */
unsigned char ge138os9520 = '\0';
T0* ge138ov9520;
T0* T403f6(T0* C)
{
	T0* R = 0;
	if (ge138os9520) {
		return ge138ov9520;
	} else {
		ge138os9520 = '\1';
	}
	R = GE_ms("from", 4);
	ge138ov9520 = R;
	return R;
}

/* GEANT_MAP.set_type */
void T404f18(T0* C, T0* a1)
{
	((T404*)(C))->a1 = a1;
}

/* GEANT_MAP_ELEMENT.attribute_value */
T0* T403f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T403*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T403f10(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T403f10(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T403f11(C));
		t4 = (((T22*)(GE_void(((T403*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T403f11(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_MAP_ELEMENT.project_variables_resolver */
unsigned char ge61os1577 = '\0';
T0* ge61ov1577;
T0* T403f11(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.make */
T0* T58c16(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T58));
	*(T58*)C = GE_default58;
	return C;
}

/* GEANT_VARIABLES_VARIABLE_RESOLVER.set_variables */
void T244f5(T0* C, T0* a1)
{
	((T244*)(C))->a1 = a1;
}

/* GEANT_VARIABLES_VARIABLE_RESOLVER.make */
T0* T244c4(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T244));
	*(T244*)C = GE_default244;
	return C;
}

/* GEANT_MAP_ELEMENT.target_arguments_stack */
unsigned char ge61os1578 = '\0';
T0* ge61ov1578;
T0* T403f10(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].make */
T0* T100c8(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T100));
	*(T100*)C = GE_default100;
	((T100*)(C))->a3 = T177c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T100*)(C))->a2 = (T177f1(GE_void(((T100*)(C))->a3), t1));
	((T100*)(C))->a4 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_ARGUMENT_VARIABLES].make */
T0* T177f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T241c2(a1);
	R = (((T241*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_ARGUMENT_VARIABLES].make_area */
T0* T241c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T241));
	*(T241*)C = GE_default241;
	((T241*)(C))->a1 = T176c4(a1);
	return C;
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].make */
T0* T176c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T176)+a1*sizeof(T0*));
	*(T176*)C = GE_default176;
	((T176*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_ARGUMENT_VARIABLES].default_create */
T0* T177c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T177));
	*(T177*)C = GE_default177;
	return C;
}

/* GEANT_MAP_ELEMENT.has_attribute */
T1 T403f4(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T403*)(C))->a3), a1));
	return R;
}

/* GEANT_MAP_ELEMENT.type_attribute_name */
unsigned char ge138os9519 = '\0';
T0* ge138ov9519;
T0* T403f8(T0* C)
{
	T0* R = 0;
	if (ge138os9519) {
		return ge138ov9519;
	} else {
		ge138os9519 = '\1';
	}
	R = GE_ms("type", 4);
	ge138ov9519 = R;
	return R;
}

/* GEANT_MAP.make */
T0* T404c17(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T404));
	*(T404*)C = GE_default404;
	((T404*)(C))->a2 = a1;
	t1 = (T404f13(C));
	T404f18(C, t1);
	return C;
}

/* GEANT_MAP.type_attribute_value_identity */
unsigned char ge137os9535 = '\0';
T0* ge137ov9535;
T0* T404f13(T0* C)
{
	T0* R = 0;
	if (ge137os9535) {
		return ge137ov9535;
	} else {
		ge137os9535 = '\1';
	}
	R = GE_ms("identity", 8);
	ge137ov9535 = R;
	return R;
}

/* GEANT_MAP_ELEMENT.make */
void T403f12p1(T0* C, T0* a1, T0* a2)
{
	T403f13(C, a2);
	T403f14(C, a1);
}

/* GEANT_MAP_ELEMENT.set_project */
void T403f14(T0* C, T0* a1)
{
	((T403*)(C))->a2 = a1;
}

/* GEANT_MAP_ELEMENT.element_make */
void T403f13(T0* C, T0* a1)
{
	T403f15(C, a1);
}

/* GEANT_MAP_ELEMENT.set_xml_element */
void T403f15(T0* C, T0* a1)
{
	((T403*)(C))->a3 = a1;
}

/* GEANT_FILESET_ELEMENT.map_element_name */
unsigned char ge132os9360 = '\0';
T0* ge132ov9360;
T0* T359f21(T0* C)
{
	T0* R = 0;
	if (ge132os9360) {
		return ge132ov9360;
	} else {
		ge132os9360 = '\1';
	}
	R = GE_ms("map", 3);
	ge132ov9360 = R;
	return R;
}

/* GEANT_FILESET.add_single_exclude */
void T360f49(T0* C, T0* a1)
{
	T409f36(GE_void(((T360*)(C))->a12), a1);
}

/* DS_HASH_SET [STRING_8].force_last */
void T409f36(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T409f41(C);
	T409f42(C, a1);
	t1 = ((((T409*)(C))->a5)!=((T6)(GE_int32(0))));
	if (t1) {
		T409f43(C, a1, ((T409*)(C))->a5);
	} else {
		l1 = ((T6)((((T409*)(C))->a3)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T409*)(C))->a1));
		if (t1) {
			t2 = (T409f17(C, l1));
			T409f44(C, t2);
			l2 = (T409f18(C, a1));
		} else {
			l2 = ((T409*)(C))->a8;
		}
		t2 = (T409f21(C, l2));
		T409f45(C, t2, l1);
		T409f46(C, l1, l2);
		T409f43(C, a1, l1);
		((T409*)(C))->a3 = l1;
		((T409*)(C))->a9 = ((T6)((((T409*)(C))->a9)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_SET [STRING_8].slots_put */
void T409f46(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T409*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_SET [STRING_8].clashes_put */
void T409f45(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T409*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_SET [STRING_8].slots_item */
T6 T409f21(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T409*)(C))->a13)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [STRING_8].hash_position */
T6 T409f18(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T409*)(C))->a2)));
	} else {
		R = ((T409*)(C))->a2;
	}
	return R;
}

/* UC_UTF8_STRING.hash_code */
T6 T194f15(T0* C)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 l4 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l2 = ((T194*)(C))->a1;
	t1 = ((l2)==(((T194*)(C))->a3));
	if (t1) {
		R = (T194f15p1(C));
	} else {
		l4 = EIF_TRUE;
		l2 = ((T194*)(C))->a3;
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l3 = (T194f21(C, l1));
			t2 = (T6)(GE_int32(5));
			t2 = ((T6)((t2)*(R)));
			R = ((T6)((t2)+(l3)));
			t3 = (T194f22(C));
			t2 = (T197f1(GE_void(t3)));
			t1 = (T6f1(&l3, t2));
			if (t1) {
				l4 = EIF_FALSE;
			}
			l1 = (T194f24(C, l1));
			t1 = (T6f1(&l1, l2));
		}
		if (l4) {
			t3 = (T194f34(C));
			R = (T17f7(GE_void(t3)));
		}
	}
	t1 = ((T1)((R)<((T6)(GE_int32(0)))));
	if (t1) {
		t2 = ((T6)((R)+((T6)(GE_int32(1)))));
		R = ((T6)(-(t2)));
	}
	return R;
}

/* UC_UTF8_STRING.string */
T0* T194f34(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l2 = ((T194*)(C))->a1;
	R = T17c33(l2);
	t1 = ((l2)==(((T194*)(C))->a3));
	if (t1) {
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T194f20(C, l1));
			T17f34(GE_void(R), t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
	} else {
		l2 = ((T194*)(C))->a3;
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l3 = (T194f21(C, l1));
			t3 = (T194f22(C));
			t4 = (T197f1(GE_void(t3)));
			t1 = (T6f9(&l3, t4));
			if (t1) {
				t3 = (T194f23(C));
				t2 = (T196f2(GE_void(t3), l3));
				T17f34(GE_void(R), t2);
			} else {
				T17f34(GE_void(R), (T2)('\000'));
			}
			l1 = (T194f24(C, l1));
			t1 = (T6f1(&l1, l2));
		}
	}
	return R;
}

/* KL_INTEGER_ROUTINES.to_character */
T2 T196f2(T0* C, T6 a1)
{
	T2 R = 0;
	R = ((T2)(a1));
	return R;
}

/* UC_UTF8_STRING.integer_ */
unsigned char ge171os4811 = '\0';
T0* ge171ov4811;
T0* T194f23(T0* C)
{
	T0* R = 0;
	if (ge171os4811) {
		return ge171ov4811;
	} else {
		ge171os4811 = '\1';
	}
	R = T196c4();
	ge171ov4811 = R;
	return R;
}

/* KL_INTEGER_ROUTINES.default_create */
T0* T196c4(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T196));
	*(T196*)C = GE_default196;
	return C;
}

/* INTEGER_32.infix "<=" */
T1 T6f9(T6* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((T1)((a1)<(*C)));
	R = ((T1)(!(t1)));
	return R;
}

/* STRING_8.append_character */
void T17f34(T0* C, T2 a1)
{
	T6 l1 = 0;
	T6 t1;
	T1 t2;
	l1 = ((T17*)(C))->a2;
	t1 = (T17f5(C));
	t2 = ((l1)==(t1));
	if (t2) {
		t1 = (T17f6(C));
		t1 = ((T6)((l1)+(t1)));
		T17f37(C, t1);
	}
	((T15*)(GE_void(((T17*)(C))->a1)))->z2[l1] = (a1);
	((T17*)(C))->a2 = ((T6)((l1)+((T6)(GE_int32(1)))));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* STRING_8.resize */
void T17f37(T0* C, T6 a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (((T15*)(GE_void(((T17*)(C))->a1)))->z1);
	t1 = (T6f5(&a1, l1));
	if (t1) {
		t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
		((T17*)(C))->a1 = (T15f2(GE_void(((T17*)(C))->a1), t2));
	}
}

/* SPECIAL [CHARACTER_8].aliased_resized_area */
T0* T15f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T15*)(C))->z1;
	if (a1>t1) {
		R = (T0*)GE_alloc(sizeof(T15)+a1*sizeof(T2));
		*(T15*)(R) = *(T15*)(C);
		memcpy(((T15*)(R))->z2,((T15*)(C))->z2,t1*sizeof(T2));
	} else {
		R = C;
	}
	((T15*)(R))->z1 = a1;
	return R;
}

/* INTEGER_32.infix ">=" */
T1 T6f5(T6* C, T6 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((T1)((*C)<(a1)));
	R = ((T1)(!(t1)));
	return R;
}

/* STRING_8.additional_space */
T6 T17f6(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (T17f5(C));
	t1 = ((T6)((t1)/((T6)(GE_int32(2)))));
	R = (T6f10(&t1, (T6)(GE_int32(5))));
	return R;
}

/* INTEGER_32.max */
T6 T6f10(T6* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	t1 = (T6f5(C, a1));
	if (t1) {
		R = *C;
	} else {
		R = a1;
	}
	return R;
}

/* STRING_8.capacity */
T6 T17f5(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (((T15*)(GE_void(((T17*)(C))->a1)))->z1);
	R = ((T6)((t1)-((T6)(GE_int32(1)))));
	return R;
}

/* UC_UTF8_STRING.byte_item */
T2 T194f20(T0* C, T6 a1)
{
	T2 R = 0;
	T6 l1 = 0;
	l1 = ((T194*)(C))->a1;
	T194f61(C, ((T194*)(C))->a3);
	R = (T194f33(C, a1));
	T194f61(C, l1);
	return R;
}

/* UC_UTF8_STRING.old_item */
T2 T194f33(T0* C, T6 a1)
{
	T2 R = 0;
	T6 t1;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	R = (((T15*)(GE_void(((T194*)(C))->a2)))->z2[t1]);
	return R;
}

/* UC_UTF8_STRING.set_count */
void T194f61(T0* C, T6 a1)
{
	T1 t1;
	t1 = (T6f1(&(((T194*)(C))->a5), a1));
	if (t1) {
		T194f69(C);
	}
	((T194*)(C))->a1 = a1;
}

/* UC_UTF8_STRING.reset_byte_index_cache */
void T194f69(T0* C)
{
	((T194*)(C))->a5 = (T6)(GE_int32(1));
	((T194*)(C))->a6 = (T6)(GE_int32(1));
}

/* STRING_8.make */
void T17f33(T0* C, T6 a1)
{
	T6 t1;
	((T17*)(C))->a2 = (T6)(GE_int32(0));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T17f36(C, t1);
}

/* STRING_8.make */
T0* T17c33(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T17));
	*(T17*)C = GE_default17;
	((T17*)(C))->a2 = (T6)(GE_int32(0));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T17f36(C, t1);
	return C;
}

/* STRING_8.make_area */
void T17f36(T0* C, T6 a1)
{
	((T17*)(C))->a1 = T15c9(a1);
}

/* SPECIAL [CHARACTER_8].make */
T0* T15c9(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T15)+a1*sizeof(T2));
	*(T15*)C = GE_default15;
	((T15*)(C))->z1 = a1;
	return C;
}

/* UC_UTF8_STRING.next_byte_index */
T6 T194f24(T0* C, T6 a1)
{
	T6 R = 0;
	T0* t1;
	T2 t2;
	T6 t3;
	t1 = (T194f25(C));
	t2 = (T194f20(C, a1));
	t3 = (T193f3(GE_void(t1), t2));
	R = ((T6)((a1)+(t3)));
	return R;
}

/* UC_UTF8_ROUTINES.encoded_byte_count */
T6 T193f3(T0* C, T2 a1)
{
	T6 R = 0;
	T1 t1;
	t1 = (T2f17(&a1, (T2)('\177')));
	if (t1) {
		R = (T6)(GE_int32(1));
	} else {
		t1 = (T2f17(&a1, (T2)('\337')));
		if (t1) {
			R = (T6)(GE_int32(2));
		} else {
			t1 = (T2f17(&a1, (T2)('\357')));
			if (t1) {
				R = (T6)(GE_int32(3));
			} else {
				R = (T6)(GE_int32(4));
			}
		}
	}
	return R;
}

/* CHARACTER_8.infix "<=" */
T1 T2f17(T2* C, T2 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T2f5(&a1, *C));
	R = ((T1)(!(t1)));
	return R;
}

/* CHARACTER_8.infix "<" */
T1 T2f5(T2* C, T2 a1)
{
	T1 R = 0;
	T6 t1;
	T6 t2;
	t1 = ((T6)(*C));
	t2 = ((T6)(a1));
	R = ((T1)((t1)<(t2)));
	return R;
}

/* UC_UTF8_STRING.utf8 */
unsigned char ge235os5426 = '\0';
T0* ge235ov5426;
T0* T194f25(T0* C)
{
	T0* R = 0;
	if (ge235os5426) {
		return ge235ov5426;
	} else {
		ge235os5426 = '\1';
	}
	R = T193c36();
	ge235ov5426 = R;
	return R;
}

/* UC_UTF8_ROUTINES.default_create */
T0* T193c36(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T193));
	*(T193*)C = GE_default193;
	return C;
}

/* KL_PLATFORM.maximum_character_code */
unsigned char ge301os7842 = '\0';
T6 ge301ov7842;
T6 T197f1(T0* C)
{
	T6 R = 0;
	if (ge301os7842) {
		return ge301ov7842;
	} else {
		ge301os7842 = '\1';
	}
	R = (T197f3(C));
	ge301ov7842 = R;
	return R;
}

/* KL_PLATFORM.old_maximum_character_code */
T6 T197f3(T0* C)
{
	T6 R = 0;
	R = ((T6)(GE_int32(255)));
	return R;
}

/* UC_UTF8_STRING.platform */
unsigned char ge225os3940 = '\0';
T0* ge225ov3940;
T0* T194f22(T0* C)
{
	T0* R = 0;
	if (ge225os3940) {
		return ge225ov3940;
	} else {
		ge225os3940 = '\1';
	}
	R = T197c5();
	ge225ov3940 = R;
	return R;
}

/* KL_PLATFORM.default_create */
T0* T197c5(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T197));
	*(T197*)C = GE_default197;
	return C;
}

/* UC_UTF8_STRING.item_code_at_byte_index */
T6 T194f21(T0* C, T6 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T2 l3 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T6 t4;
	l1 = a1;
	l3 = (T194f20(C, l1));
	t1 = (T194f25(C));
	R = (T193f4(GE_void(t1), l3));
	t1 = (T194f25(C));
	t2 = (T193f3(GE_void(t1), l3));
	t2 = ((T6)((l1)+(t2)));
	l2 = ((T6)((t2)-((T6)(GE_int32(1)))));
	l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	t3 = (T6f1(&l1, l2));
	while (!(t3)) {
		l3 = (T194f20(C, l1));
		t2 = ((T6)((R)*((T6)(GE_int32(64)))));
		t1 = (T194f25(C));
		t4 = (T193f6(GE_void(t1), l3));
		R = ((T6)((t2)+(t4)));
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l1, l2));
	}
	return R;
}

/* UC_UTF8_ROUTINES.encoded_next_value */
T6 T193f6(T0* C, T2 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)(a1));
	R = ((T6)((t1)%((T6)(GE_int32(64)))));
	return R;
}

/* UC_UTF8_ROUTINES.encoded_first_value */
T6 T193f4(T0* C, T2 a1)
{
	T6 R = 0;
	T1 t1;
	R = ((T6)(a1));
	t1 = (T2f17(&a1, (T2)('\177')));
	if (t1) {
	} else {
		t1 = (T2f17(&a1, (T2)('\337')));
		if (t1) {
			R = ((T6)((R)%((T6)(GE_int32(32)))));
		} else {
			t1 = (T2f17(&a1, (T2)('\357')));
			if (t1) {
				R = ((T6)((R)%((T6)(GE_int32(16)))));
			} else {
				t1 = (T2f17(&a1, (T2)('\364')));
				if (t1) {
					R = ((T6)((R)%((T6)(GE_int32(8)))));
				}
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.hash_code */
T6 T194f15p1(T0* C)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T6 t4;
	R = ((T194*)(C))->a4;
	t1 = ((R)==((T6)(GE_int32(0))));
	if (t1) {
		l1 = (T6)(GE_int32(0));
		l2 = ((T194*)(C))->a1;
		l3 = ((T194*)(C))->a2;
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t2 = ((T6)((R)%((T6)(GE_int32(8388593)))));
			t2 = (T6f11(&t2, (T6)(GE_int32(8))));
			t3 = (((T15*)(GE_void(l3)))->z2[l1]);
			t4 = ((T6)(t3));
			R = ((T6)((t2)+(t4)));
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
		((T194*)(C))->a4 = R;
	}
	return R;
}

/* INTEGER_32.infix "|<<" */
T6 T6f11(T6* C, T6 a1)
{
	T6 R = 0;
	R = ((T6)((*C)<<(a1)));
	return R;
}

/* STRING_8.hash_code */
T6 T17f7(T0* C)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T6 t4;
	R = ((T17*)(C))->a3;
	t1 = ((R)==((T6)(GE_int32(0))));
	if (t1) {
		l1 = (T6)(GE_int32(0));
		l2 = ((T17*)(C))->a2;
		l3 = ((T17*)(C))->a1;
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t2 = ((T6)((R)%((T6)(GE_int32(8388593)))));
			t2 = (T6f11(&t2, (T6)(GE_int32(8))));
			t3 = (((T15*)(GE_void(l3)))->z2[l1]);
			t4 = ((T6)(t3));
			R = ((T6)((t2)+(t4)));
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
		((T17*)(C))->a3 = R;
	}
	return R;
}

/* DS_HASH_SET [STRING_8].resize */
void T409f44(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T409f41(C);
	l1 = (T409f22(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T409f47(C, t1);
	l2 = ((T409*)(C))->a2;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T409f46(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T409*)(C))->a2 = l1;
	l2 = ((T409*)(C))->a3;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T409f25(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T409f24(C, l2));
			l3 = (T409f18(C, t3));
			t1 = (T409f21(C, l3));
			T409f45(C, t1, l2);
			T409f46(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T409f48(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T409f49(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T409f50(C, t1);
	((T409*)(C))->a1 = a1;
	((T409*)(C))->a5 = (T6)(GE_int32(0));
}

/* DS_HASH_SET [STRING_8].clashes_resize */
void T409f50(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T409f19(C));
	((T409*)(C))->a12 = (T65f1(GE_void(t1), ((T409*)(C))->a12, a1));
}

/* KL_SPECIAL_ROUTINES [INTEGER_32].resize */
T0* T65f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T63*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T63f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [INTEGER_32].resized_area */
T0* T63f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T63c5(a1);
	t1 = (((T63*)(C))->z1);
	T63f7(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [INTEGER_32].copy_data */
void T63f7(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		T63f8(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T63*)(GE_void(a1)))->z2[l1]);
			((T63*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [INTEGER_32].move_data */
void T63f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T63f9(C, a1, a2, a3);
			} else {
				T63f10(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T63f9(C, a1, a2, a3);
			} else {
				T63f10(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [INTEGER_32].overlapping_move */
void T63f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t2 = (((T63*)(C))->z2[l1]);
			t3 = ((T6)((l1)+(l3)));
			((T63*)(C))->z2[t3] = (t2);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t2 = (((T63*)(C))->z2[l1]);
			t3 = ((T6)((l1)-(l3)));
			((T63*)(C))->z2[t3] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [INTEGER_32].non_overlapping_move */
void T63f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T63*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T63*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [INTEGER_32].make */
T0* T63c5(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T63)+a1*sizeof(T6));
	*(T63*)C = GE_default63;
	((T63*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_SET [STRING_8].special_integer_ */
unsigned char ge172os1952 = '\0';
T0* ge172ov1952;
T0* T409f19(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* KL_SPECIAL_ROUTINES [INTEGER_32].default_create */
T0* T65c4(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T65));
	*(T65*)C = GE_default65;
	return C;
}

/* DS_HASH_SET [STRING_8].key_storage_resize */
void T409f49(T0* C, T6 a1)
{
}

/* DS_HASH_SET [STRING_8].item_storage_resize */
void T409f48(T0* C, T6 a1)
{
	((T409*)(C))->a11 = (T66f1(GE_void(((T409*)(C))->a10), ((T409*)(C))->a11, a1));
}

/* KL_SPECIAL_ROUTINES [STRING_8].resize */
T0* T66f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T32*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T32f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [STRING_8].resized_area */
T0* T32f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T32c6(a1);
	t1 = (((T32*)(C))->z1);
	T32f8(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [STRING_8].copy_data */
void T32f8(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T32f9(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T32*)(a1))->z2[l1]);
			((T32*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [STRING_8].move_data */
void T32f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T32f10(C, a1, a2, a3);
			} else {
				T32f11(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T32f10(C, a1, a2, a3);
			} else {
				T32f11(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [STRING_8].overlapping_move */
void T32f11(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T32*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T32*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T32*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T32*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [STRING_8].non_overlapping_move */
void T32f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T32*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T32*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [STRING_8].make */
T0* T32c6(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T32)+a1*sizeof(T0*));
	*(T32*)C = GE_default32;
	((T32*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_SET [STRING_8].key_storage_item */
T0* T409f24(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T409f30(C, a1));
	return R;
}

/* DS_HASH_SET [STRING_8].item_storage_item */
T0* T409f30(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T409*)(C))->a11)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [STRING_8].clashes_item */
T6 T409f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T409*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [STRING_8].slots_resize */
void T409f47(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T409f19(C));
	((T409*)(C))->a13 = (T65f1(GE_void(t1), ((T409*)(C))->a13, a1));
}

/* DS_HASH_SET [STRING_8].new_modulus */
T6 T409f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_SET [STRING_8].new_capacity */
T6 T409f17(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_SET [STRING_8].item_storage_put */
void T409f43(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T409*)(C))->a11)))->z2[a2] = (a1);
}

/* DS_HASH_SET [STRING_8].search_position */
void T409f42(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T409*)(C))->a5 = (T409f21(C, ((T409*)(C))->a2));
		((T409*)(C))->a8 = ((T409*)(C))->a2;
		((T409*)(C))->a15 = (T6)(GE_int32(0));
	} else {
		l4 = (T409f23(C));
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T409*)(C))->a5)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T409f24(C, ((T409*)(C))->a5));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T409*)(C))->a8 = (T409f18(C, a1));
				l1 = (T409f21(C, ((T409*)(C))->a8));
				((T409*)(C))->a5 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T409f24(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T409*)(C))->a5 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T409f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T409*)(C))->a15 = l2;
			}
		} else {
			t1 = ((((T409*)(C))->a5)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T409f24(C, ((T409*)(C))->a5));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T409*)(C))->a8 = (T409f18(C, a1));
				l1 = (T409f21(C, ((T409*)(C))->a8));
				((T409*)(C))->a5 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T409f24(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T409*)(C))->a5 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T409f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T409*)(C))->a15 = l2;
			}
		}
	}
}

/* UC_STRING_EQUALITY_TESTER.test */
T1 T59f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((a1)==(EIF_VOID));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = ((a2)==(EIF_VOID));
			if (t1) {
				R = EIF_FALSE;
			} else {
				t2 = (T59f2(C));
				R = (T76f1(GE_void(t2), a1, a2));
			}
		}
	}
	return R;
}

/* UC_STRING_EQUALITY_TESTER.string_ */
unsigned char ge174os1583 = '\0';
T0* ge174ov1583;
T0* T59f2(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* KL_STRING_ROUTINES.default_create */
T0* T76c19(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T76));
	*(T76*)C = GE_default76;
	return C;
}

/* DS_HASH_SET [STRING_8].key_equality_tester */
T0* T409f23(T0* C)
{
	T0* R = 0;
	R = ((T409*)(C))->a7;
	return R;
}

/* DS_HASH_SET [STRING_8].unset_found_item */
void T409f41(T0* C)
{
	((T409*)(C))->a14 = (T6)(GE_int32(0));
}

/* GEANT_FILESET_ELEMENT.exclude_element_name */
unsigned char ge132os9359 = '\0';
T0* ge132ov9359;
T0* T359f19(T0* C)
{
	T0* R = 0;
	if (ge132os9359) {
		return ge132ov9359;
	} else {
		ge132os9359 = '\1';
	}
	R = GE_ms("exclude", 7);
	ge132ov9359 = R;
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].forth */
void T116f9(T0* C)
{
	T115f11(GE_void(((T116*)(C))->a3), C);
}

/* DS_LINKED_LIST [XM_ELEMENT].cursor_forth */
void T115f11(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T116*)(a1))->a4);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T115*)(C))->a3;
	} else {
		t2 = (((T116*)(a1))->a2);
		l3 = (((T199*)(GE_void(t2)))->a2);
	}
	l2 = ((l3)==(EIF_VOID));
	T116f10(a1, l3, EIF_FALSE, l2);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T115f13(C, a1);
		}
	} else {
		if (l1) {
			T115f12(C, a1);
		}
	}
}

/* DS_LINKED_LIST [XM_ELEMENT].add_traversing_cursor */
void T115f12(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T115*)(C))->a2));
	if (t1) {
		t2 = (((T116*)(GE_void(((T115*)(C))->a2)))->a5);
		T116f11(a1, t2);
		T116f11(GE_void(((T115*)(C))->a2), a1);
	}
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].set_next_cursor */
void T116f11(T0* C, T0* a1)
{
	((T116*)(C))->a5 = a1;
}

/* DS_LINKED_LIST [XM_ELEMENT].remove_traversing_cursor */
void T115f13(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T115*)(C))->a2));
	if (t1) {
		l2 = ((T115*)(C))->a2;
		l1 = (((T116*)(GE_void(l2)))->a5);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T116*)(GE_void(l1)))->a5);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T116*)(a1))->a5);
			T116f11(GE_void(l2), t2);
			T116f11(a1, EIF_VOID);
		}
	}
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].set */
void T116f10(T0* C, T0* a1, T1 a2, T1 a3)
{
	((T116*)(C))->a2 = a1;
	((T116*)(C))->a4 = a2;
	((T116*)(C))->a1 = a3;
}

/* GEANT_FILESET.add_single_include */
void T360f48(T0* C, T0* a1)
{
	T409f36(GE_void(((T360*)(C))->a11), a1);
}

/* GEANT_DEFINE_ELEMENT.name */
T0* T365f4(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T365f13(C));
	R = (T365f14(C, t1));
	return R;
}

/* GEANT_DEFINE_ELEMENT.attribute_value */
T0* T365f14(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T365*)(C))->a2), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T365f15(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T365f15(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T365f6(C));
		t4 = (((T22*)(GE_void(((T365*)(C))->a1)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T365f6(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_DEFINE_ELEMENT.project_variables_resolver */
T0* T365f6(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_DEFINE_ELEMENT.target_arguments_stack */
T0* T365f15(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_DEFINE_ELEMENT.name_attribute_name */
unsigned char ge139os7650 = '\0';
T0* ge139ov7650;
T0* T365f13(T0* C)
{
	T0* R = 0;
	if (ge139os7650) {
		return ge139ov7650;
	} else {
		ge139os7650 = '\1';
	}
	R = GE_ms("name", 4);
	ge139ov7650 = R;
	return R;
}

/* GEANT_DEFINE_ELEMENT.has_name */
T1 T365f10(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T365f13(C));
	R = (T365f9(C, t1));
	return R;
}

/* GEANT_DEFINE_ELEMENT.has_attribute */
T1 T365f9(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T365*)(C))->a2), a1));
	return R;
}

/* GEANT_DEFINE_ELEMENT.is_enabled */
T1 T365f7(T0* C)
{
	T1 R = 0;
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	t1 = (T365f6(C));
	t2 = (((T22*)(GE_void(((T365*)(C))->a1)))->a7);
	T58f17(GE_void(t1), t2);
	l1 = EIF_TRUE;
	l2 = EIF_FALSE;
	t1 = (T365f8(C));
	t3 = (T365f9(C, t1));
	if (t3) {
		t1 = (T365f8(C));
		t1 = (T96f21(GE_void(((T365*)(C))->a2), t1));
		l3 = (((T189*)(GE_void(t1)))->a3);
		t1 = (T365f6(C));
		l1 = (T58f8(GE_void(t1), l3));
		t1 = (T1f6(&l1));
		t1 = GE_ma33((T6)4,
GE_ms(" if: \'", 6),
l3,
GE_ms("\': ", 3),
t1);
		T22f31(GE_void(((T365*)(C))->a1), t1);
	}
	t1 = (T365f11(C));
	t3 = (T365f9(C, t1));
	if (t3) {
		t1 = (T365f11(C));
		t1 = (T96f21(GE_void(((T365*)(C))->a2), t1));
		l3 = (((T189*)(GE_void(t1)))->a3);
		t1 = (T365f6(C));
		l2 = (T58f8(GE_void(t1), l3));
		t1 = (T1f6(&l2));
		t1 = GE_ma33((T6)4,
GE_ms(" unless: \'", 10),
l3,
GE_ms("\'=", 2),
t1);
		T22f31(GE_void(((T365*)(C))->a1), t1);
	}
	if (l1) {
		R = ((T1)(!(l2)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* GEANT_DEFINE_ELEMENT.unless_attribute_name */
unsigned char ge136os2245 = '\0';
T0* ge136ov2245;
T0* T365f11(T0* C)
{
	T0* R = 0;
	if (ge136os2245) {
		return ge136ov2245;
	} else {
		ge136os2245 = '\1';
	}
	R = GE_ms("unless", 6);
	ge136ov2245 = R;
	return R;
}

/* BOOLEAN.out */
T0* T1f6(T1* C)
{
	T0* R = 0;
	T1 t1;
	t1 = (*C);
	if (t1) {
		R = GE_ms("True", 4);
	} else {
		R = GE_ms("False", 5);
	}
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.boolean_condition_value */
T1 T58f8(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 t1;
	T1 t2;
	T2 t3;
	T1 t4;
	T0* t5;
	l1 = (T58f10(C, a1, (T2)('=')));
	t1 = (((T71*)(GE_void(l1)))->a1);
	t2 = ((t1)==((T6)(GE_int32(1))));
	if (t2) {
		l2 = (T71f14(GE_void(l1), (T6)(GE_int32(1))));
		t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t1, (T6)(GE_int32(3))));
		if (t2) {
			t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, (T6)(GE_int32(1))):T194f10(l2, (T6)(GE_int32(1)))));
			t4 = ((t3)==((T2)('$')));
			if (t4) {
				t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, (T6)(GE_int32(2))):T194f10(l2, (T6)(GE_int32(2)))));
				t4 = ((t3)==((T2)('{')));
			}
			if (t4) {
				t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
				t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, t1):T194f10(l2, t1)));
				t2 = ((t3)==((T2)('}')));
			} else {
				t2 = EIF_FALSE;
			}
		}
		if (t2) {
			t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
			t1 = ((T6)((t1)-((T6)(GE_int32(1)))));
			l2 = (((((T0*)(GE_void(l2)))->id==17)?T17f10(l2, (T6)(GE_int32(3)), t1):T194f11(l2, (T6)(GE_int32(3)), t1)));
			R = (T58f5(C, l2));
		} else {
			t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
			t2 = (T6f1(&t1, (T6)(GE_int32(1))));
			if (t2) {
				t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, (T6)(GE_int32(1))):T194f10(l2, (T6)(GE_int32(1)))));
				t4 = ((t3)==((T2)('$')));
				if (t4) {
					t3 = (((((T0*)(GE_void(l2)))->id==17)?T17f9(l2, (T6)(GE_int32(2))):T194f10(l2, (T6)(GE_int32(2)))));
					t2 = ((t3)!=((T2)('{')));
				} else {
					t2 = EIF_FALSE;
				}
			}
			if (t2) {
				t1 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
				l2 = (((((T0*)(GE_void(l2)))->id==17)?T17f10(l2, (T6)(GE_int32(2)), t1):T194f11(l2, (T6)(GE_int32(2)), t1)));
				R = (T58f5(C, l2));
			} else {
				t5 = GE_ma33((T6)3,
GE_ms("geant: incorrect conditional: \'", 31),
a1,
GE_ms("\'", 1));
				T58f18(C, (T6)(GE_int32(1)), t5);
			}
		}
	} else {
		t1 = (((T71*)(GE_void(l1)))->a1);
		t2 = ((t1)==((T6)(GE_int32(2))));
		if (t2) {
			l4 = T243c7();
			T243f8(GE_void(l4), C);
			l2 = (T71f14(GE_void(l1), (T6)(GE_int32(1))));
			l2 = (T243f5(GE_void(l4), l2));
			l3 = (T71f14(GE_void(l1), (T6)(GE_int32(2))));
			l3 = (T243f5(GE_void(l4), l3));
			t5 = (T58f2(C));
			R = (T76f1(GE_void(t5), l2, l3));
		} else {
			t5 = GE_ma33((T6)3,
GE_ms("geant: incorrect conditional: \'", 31),
a1,
GE_ms("\'", 1));
			T58f18(C, (T6)(GE_int32(1)), t5);
		}
	}
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.string_ */
T0* T58f2(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.exit_application */
void T58f18(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T58f14(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T58f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T58f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T58f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T58f15(C));
	T48f2(GE_void(t2), a1);
}

/* KL_EXCEPTIONS.die */
void T48f2(T0* C, T6 a1)
{
	esdie(a1);
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.exceptions */
unsigned char ge222os1585 = '\0';
T0* ge222ov1585;
T0* T58f15(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* KL_EXCEPTIONS.default_create */
T0* T48c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T48));
	*(T48*)C = GE_default48;
	return C;
}

/* KL_STDERR_FILE.put_line */
void T47f12(T0* C, T0* a1)
{
	T47f10(C, a1);
	T47f11(C);
}

/* KL_STDERR_FILE.put_new_line */
void T47f11(T0* C)
{
	T47f10(C, ge304ov2996);
}

/* KL_STDERR_FILE.put_string */
void T47f10(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T47f6(C));
	l1 = (T76f2(GE_void(t1), a1));
	T47f14(C, l1);
}

/* KL_STDERR_FILE.old_put_string */
void T47f14(T0* C, T0* a1)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T77 t3;
	T14 t4;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t2 = ((t1)!=((T6)(GE_int32(0))));
	if (t2) {
		l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T194*)(a1))->a2));
		(t3).id = 77;
		(t3).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
		t4 = ((t3).a1);
		t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		T47f17(C, ((T47*)(C))->a1, t4, t1);
	}
}

/* KL_STDERR_FILE.console_ps */
void T47f17(T0* C, T14 a1, T14 a2, T6 a3)
{
	console_ps((FILE *)a1,( char *)a2,( EIF_INTEGER)a3);
}

/* KL_STRING_ROUTINES.as_string */
T0* T76f2(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T76f8(C));
	t2 = (T82f1(GE_void(t1), a1, ge308ov4806));
	if (t2) {
		R = a1;
	} else {
		if ((a1)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 194:
				l1 = a1;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t2 = ((l1)!=(EIF_VOID));
		if (t2) {
			R = (T194f30(GE_void(l1)));
		} else {
			R = (((((T0*)(GE_void(a1)))->id==17)?T17f13(a1):T194f34(a1)));
		}
	}
	return R;
}

/* STRING_8.string */
T0* T17f13(T0* C)
{
	T0* R = 0;
	R = T17c33(((T17*)(C))->a2);
	T17f35(GE_void(R), C);
	return R;
}

/* STRING_8.append */
void T17f35(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		l1 = ((T17*)(C))->a2;
		l3 = ((T6)((l2)+(l1)));
		t2 = (T17f5(C));
		t1 = (T6f1(&l3, t2));
		if (t1) {
			t2 = (T17f6(C));
			t2 = ((T6)((l3)+(t2)));
			T17f37(C, t2);
		}
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T194*)(a1))->a2));
		T15f8(GE_void(((T17*)(C))->a1), t3, (T6)(GE_int32(0)), l1, l2);
		((T17*)(C))->a2 = l3;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* SPECIAL [CHARACTER_8].copy_data */
void T15f8(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	t1 = ((a1)==(C));
	if (t1) {
		T15f10(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T15*)(GE_void(a1)))->z2[l1]);
			((T15*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [CHARACTER_8].move_data */
void T15f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T15f11(C, a1, a2, a3);
			} else {
				T15f12(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T15f11(C, a1, a2, a3);
			} else {
				T15f12(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [CHARACTER_8].overlapping_move */
void T15f12(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T15*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T15*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T15*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T15*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [CHARACTER_8].non_overlapping_move */
void T15f11(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T15*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T15*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* UC_UTF8_STRING.as_string */
T0* T194f30(T0* C)
{
	T0* R = 0;
	R = (T194f18(C));
	return R;
}

/* UC_UTF8_STRING.to_utf8 */
T0* T194f18(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T2 t2;
	l2 = ((T194*)(C))->a3;
	R = T17c33(l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T194f20(C, l1));
		T17f34(GE_void(R), t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* KL_ANY_ROUTINES.same_types */
T1 T82f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T19x28T0(GE_void(a1), a2));
	return R;
}

/* KL_STRING_ROUTINES.any_ */
unsigned char ge166os1789 = '\0';
T0* ge166ov1789;
T0* T76f8(T0* C)
{
	T0* R = 0;
	if (ge166os1789) {
		return ge166ov1789;
	} else {
		ge166os1789 = '\1';
	}
	R = T82c3();
	ge166ov1789 = R;
	return R;
}

/* KL_ANY_ROUTINES.default_create */
T0* T82c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T82));
	*(T82*)C = GE_default82;
	return C;
}

/* KL_STDERR_FILE.string_ */
T0* T47f6(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* ARRAY [STRING_8].item */
T0* T33f4(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T33*)(C))->a2)));
	R = (((T32*)(GE_void(((T33*)(C))->a1)))->z2[t1]);
	return R;
}

/* KL_STANDARD_FILES.error */
unsigned char ge206os2987 = '\0';
T0* ge206ov2987;
T0* T46f1(T0* C)
{
	T0* R = 0;
	if (ge206os2987) {
		return ge206ov2987;
	} else {
		ge206os2987 = '\1';
	}
	R = T47c9();
	ge206ov2987 = R;
	return R;
}

/* KL_STDERR_FILE.make */
T0* T47c9(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T47));
	*(T47*)C = GE_default47;
	T47f13(C, GE_ms("stderr", 6));
	return C;
}

/* KL_STDERR_FILE.make_open_stderr */
void T47f13(T0* C, T0* a1)
{
	T47f15(C, a1);
	((T47*)(C))->a1 = (T47f4(C, (T6)(GE_int32(2))));
	T47f16(C);
}

/* KL_STDERR_FILE.set_write_mode */
void T47f16(T0* C)
{
	((T47*)(C))->a3 = (T6)(GE_int32(2));
}

/* KL_STDERR_FILE.console_def */
T14 T47f4(T0* C, T6 a1)
{
	T14 R = 0;
	R = (T14)console_def(a1);
	return R;
}

/* KL_STDERR_FILE.old_make */
void T47f15(T0* C, T0* a1)
{
	((T47*)(C))->a2 = a1;
	((T47*)(C))->a3 = (T6)(GE_int32(0));
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.std */
unsigned char ge204os1587 = '\0';
T0* ge204ov1587;
T0* T58f14(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* KL_STANDARD_FILES.default_create */
T0* T46c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T46));
	*(T46*)C = GE_default46;
	return C;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.has */
T1 T58f5(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T58f2(C));
	R = (T76f1(GE_void(t1), a1, GE_ms("cwd", 3)));
	t2 = ((T1)(!(R)));
	if (t2) {
		t1 = (T58f3(C));
		t3 = (((T100*)(GE_void(t1)))->a1);
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			t1 = (T58f3(C));
			t1 = (T100f5(GE_void(t1)));
			T34f67(GE_void(t1), a1);
			t1 = (T58f3(C));
			t1 = (T100f5(GE_void(t1)));
			R = (T34f32(GE_void(t1)));
		}
	}
	t2 = ((T1)(!(R)));
	if (t2) {
		t1 = (T58f4(C));
		T29f66(GE_void(t1), a1);
		t1 = (T58f4(C));
		R = (T29f35(GE_void(t1)));
	}
	t2 = ((T1)(!(R)));
	if (t2) {
		T25f79(GE_void(((T58*)(C))->a1), a1);
		R = (T25f43(GE_void(((T58*)(C))->a1)));
	}
	t2 = ((T1)(!(R)));
	if (t2) {
		t1 = (T58f6(C));
		l1 = (T99f5(GE_void(t1), a1));
		R = ((l1)!=(EIF_VOID));
	}
	return R;
}

/* KL_EXECUTION_ENVIRONMENT.variable_value */
T0* T99f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T0* t2;
	t1 = (T99f2(C));
	t2 = (T99f3(C));
	t2 = (T76f2(GE_void(t2), a1));
	R = (T81f4(GE_void(t1), t2));
	return R;
}

/* EXECUTION_ENVIRONMENT.get */
T0* T81f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T14 l2 = 0;
	T14 l3 = 0;
	T77 t1;
	T14 t2;
	T1 t3;
	l1 = (((((T0*)(GE_void(a1)))->id==17)?T17f11(a1):T194f19(a1)));
	(t1).id = 77;
	(t1).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
	t2 = ((t1).a1);
	l2 = (T81f3(C, t2));
	t3 = ((l2)!=(l3));
	if (t3) {
		R = T17c43(l2);
	}
	return R;
}

/* STRING_8.make_from_c */
T0* T17c43(T14 a1)
{
	T6 l1 = 0;
	T0* C;
	T1 t1;
	T0* t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T17));
	*(T17*)C = GE_default17;
	t1 = ((((T17*)(C))->a1)==(EIF_VOID));
	if (t1) {
		t2 = (T17f26(C));
		T181f6(GE_void(t2), a1);
		t2 = (T17f26(C));
		l1 = (((T181*)(GE_void(t2)))->a1);
		t3 = ((T6)((l1)+((T6)(GE_int32(1)))));
		T17f36(C, t3);
		((T17*)(C))->a2 = l1;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
		t2 = (T17f26(C));
		T181f7(GE_void(t2), C);
	} else {
		T17f46(C, a1);
	}
	return C;
}

/* STRING_8.from_c */
void T17f46(T0* C, T14 a1)
{
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	t1 = (T17f26(C));
	T181f6(GE_void(t1), a1);
	t1 = (T17f26(C));
	l1 = (((T181*)(GE_void(t1)))->a1);
	t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T17f37(C, t2);
	((T17*)(C))->a2 = l1;
	((T17*)(C))->a3 = (T6)(GE_int32(0));
	t1 = (T17f26(C));
	T181f7(GE_void(t1), C);
}

/* C_STRING.read_string_into */
void T181f7(T0* C, T0* a1)
{
	T181f9(C, a1, (T6)(GE_int32(1)), ((T181*)(C))->a1);
}

/* C_STRING.read_substring_into */
void T181f9(T0* C, T0* a1, T6 a2, T6 a3)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T8 t2;
	T10 t3;
	T6 t4;
	l2 = ((T6)((a2)-((T6)(GE_int32(1)))));
	l3 = a3;
	l1 = ((T181*)(C))->a2;
	t1 = ((l2)==(l3));
	while (!(t1)) {
		t2 = (T248f6(GE_void(l1), l2));
		t3 = (T8f7(&t2));
		t4 = ((T6)((l2)+((T6)(GE_int32(1)))));
		T17f50(a1, t3, t4);
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = ((l2)==(l3));
	}
}

/* STRING_8.put_code */
void T17f50(T0* C, T10 a1, T6 a2)
{
	T2 t1;
	T6 t2;
	t1 = ((T2)(a1));
	t2 = ((T6)((a2)-((T6)(GE_int32(1)))));
	((T15*)(GE_void(((T17*)(C))->a1)))->z2[t2] = (t1);
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* NATURAL_8.to_natural_32 */
T10 T8f7(T8* C)
{
	T10 R = 0;
	R = ((T10)(*C));
	return R;
}

/* MANAGED_POINTER.read_natural_8 */
T8 T248f6(T0* C, T6 a1)
{
	T8 R = 0;
	T326 t1;
	T14 t2;
	(t1).id = 326;
	(t1).a1 = ((T14)&R);
	t2 = ((T14)(((char*)(((T248*)(C))->a2))+(a1)));
	T326f2(&t1, t2, (T6)(GE_int32(1)));
	return R;
}

/* TYPED_POINTER [NATURAL_8].memory_copy */
void T326f2(T326* C, T14 a1, T6 a2)
{
	T326f3(C, (*C).a1, a1, a2);
}

/* TYPED_POINTER [NATURAL_8].c_memcpy */
void T326f3(T326* C, T14 a1, T14 a2, T6 a3)
{
	memcpy((void *)a1,( const void *)a2,( size_t)a3);
}

/* C_STRING.share_from_pointer */
void T181f6(T0* C, T14 a1)
{
	T6 t1;
	t1 = (T181f3(C, a1));
	T181f8(C, a1, t1);
}

/* C_STRING.share_from_pointer_and_count */
void T181f8(T0* C, T14 a1, T6 a2)
{
	T1 t1;
	T1 t2;
	T6 t3;
	((T181*)(C))->a1 = a2;
	t1 = ((((T181*)(C))->a2)==(EIF_VOID));
	if (!(t1)) {
		t2 = (((T248*)(GE_void(((T181*)(C))->a2)))->a1);
		t1 = ((T1)(!(t2)));
	}
	if (t1) {
		t3 = ((T6)((a2)+((T6)(GE_int32(1)))));
		((T181*)(C))->a2 = T248c8(a1, t3);
	} else {
		t3 = ((T6)((a2)+((T6)(GE_int32(1)))));
		T248f9(GE_void(((T181*)(C))->a2), a1, t3);
	}
}

/* MANAGED_POINTER.set_from_pointer */
void T248f9(T0* C, T14 a1, T6 a2)
{
	((T248*)(C))->a2 = a1;
	((T248*)(C))->a3 = a2;
}

/* MANAGED_POINTER.share_from_pointer */
T0* T248c8(T14 a1, T6 a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T248));
	*(T248*)C = GE_default248;
	((T248*)(C))->a2 = a1;
	((T248*)(C))->a3 = a2;
	((T248*)(C))->a1 = EIF_TRUE;
	return C;
}

/* C_STRING.c_strlen */
T6 T181f3(T0* C, T14 a1)
{
	T6 R = 0;
	R = (T6)(EIF_INTEGER )strlen((char *)a1);
	return R;
}

/* STRING_8.c_string_provider */
unsigned char ge2206os1257 = '\0';
T0* ge2206ov1257;
T0* T17f26(T0* C)
{
	T0* R = 0;
	if (ge2206os1257) {
		return ge2206ov1257;
	} else {
		ge2206os1257 = '\1';
	}
	R = T181c5((T6)(GE_int32(0)));
	ge2206ov1257 = R;
	return R;
}

/* C_STRING.make_empty */
void T181f5(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T181*)(C))->a2 = T248c7(t1);
	((T181*)(C))->a1 = (T6)(GE_int32(0));
}

/* C_STRING.make_empty */
T0* T181c5(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T181));
	*(T181*)C = GE_default181;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T181*)(C))->a2 = T248c7(t1);
	((T181*)(C))->a1 = (T6)(GE_int32(0));
	return C;
}

/* MANAGED_POINTER.make */
T0* T248c7(T6 a1)
{
	T0* C;
	T6 t1;
	T14 t2;
	T1 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T248));
	*(T248*)C = GE_default248;
	t1 = (T6f10(&a1, (T6)(GE_int32(1))));
	((T248*)(C))->a2 = (T14f2(&(((T248*)(C))->a2), (T6)(GE_int32(1)), t1));
	t2 = (T248f5(C));
	t3 = ((((T248*)(C))->a2)==(t2));
	if (t3) {
		t4 = (T327c2());
		T327f3(t4, GE_ms("No more memory", 14));
	}
	((T248*)(C))->a3 = a1;
	return C;
}

/* EXCEPTIONS.raise */
void T327f3(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T77 t2;
	T14 t3;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		l1 = (T17f11(a1));
	}
	(t2).id = 77;
	(t2).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
	t3 = ((t2).a1);
	T327f4(C, t3, (T6)(GE_int32(24)));
}

/* EXCEPTIONS.eraise */
void T327f4(T0* C, T14 a1, T6 a2)
{
	eraise((char *)a1,( long)a2);
}

/* EXCEPTIONS.default_create */
T0* T327c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T327));
	*(T327*)C = GE_default327;
	return C;
}

/* MANAGED_POINTER.default_pointer */
T14 T248f5(T0* C)
{
	T14 R = 0;
	return R;
}

/* POINTER.memory_calloc */
T14 T14f2(T14* C, T6 a1, T6 a2)
{
	T14 R = 0;
	R = (T14f3(C, a1, a2));
	return R;
}

/* POINTER.c_calloc */
T14 T14f3(T14* C, T6 a1, T6 a2)
{
	T14 R = 0;
	R = (T14)(EIF_POINTER )calloc((size_t)a1,( size_t)a2);
	return R;
}

/* EXECUTION_ENVIRONMENT.eif_getenv */
T14 T81f3(T0* C, T14 a1)
{
	T14 R = 0;
	R = (T14)getenv((char*)a1);
	return R;
}

/* KL_EXECUTION_ENVIRONMENT.string_ */
T0* T99f3(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* KL_EXECUTION_ENVIRONMENT.environment_impl */
unsigned char ge280os5974 = '\0';
T0* ge280ov5974;
T0* T99f2(T0* C)
{
	T0* R = 0;
	if (ge280os5974) {
		return ge280ov5974;
	} else {
		ge280os5974 = '\1';
	}
	R = T81c6();
	ge280ov5974 = R;
	return R;
}

/* EXECUTION_ENVIRONMENT.default_create */
T0* T81c6(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T81));
	*(T81*)C = GE_default81;
	return C;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.execution_environment */
unsigned char ge223os1584 = '\0';
T0* ge223ov1584;
T0* T58f6(T0* C)
{
	T0* R = 0;
	if (ge223os1584) {
		return ge223ov1584;
	} else {
		ge223os1584 = '\1';
	}
	R = T99c7();
	ge223ov1584 = R;
	return R;
}

/* KL_EXECUTION_ENVIRONMENT.default_create */
T0* T99c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T99));
	*(T99*)C = GE_default99;
	return C;
}

/* GEANT_PROJECT_VARIABLES.found */
T1 T25f43(T0* C)
{
	T1 R = 0;
	R = ((((T25*)(C))->a10)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_PROJECT_VARIABLES.search */
void T25f79(T0* C, T0* a1)
{
	T25f64(C, a1);
	((T25*)(C))->a10 = ((T25*)(C))->a3;
}

/* GEANT_PROJECT_VARIABLES.search_position */
void T25f64(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T25*)(C))->a3 = (T25f22(C, ((T25*)(C))->a11));
		((T25*)(C))->a6 = ((T25*)(C))->a11;
		((T25*)(C))->a12 = (T6)(GE_int32(0));
	} else {
		l4 = ((T25*)(C))->a1;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T25*)(C))->a3)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T25f27(C, ((T25*)(C))->a3));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T25*)(C))->a6 = (T25f33(C, a1));
				l1 = (T25f22(C, ((T25*)(C))->a6));
				((T25*)(C))->a3 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T25f27(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T25*)(C))->a3 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T25f21(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T25*)(C))->a12 = l2;
			}
		} else {
			t1 = ((((T25*)(C))->a3)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T25f27(C, ((T25*)(C))->a3));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T25*)(C))->a6 = (T25f33(C, a1));
				l1 = (T25f22(C, ((T25*)(C))->a6));
				((T25*)(C))->a3 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T25f27(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T25*)(C))->a3 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T25f21(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T25*)(C))->a12 = l2;
			}
		}
	}
}

/* GEANT_PROJECT_VARIABLES.clashes_item */
T6 T25f21(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T25*)(C))->a14)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLES.hash_position */
T6 T25f33(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T25*)(C))->a11)));
	} else {
		R = ((T25*)(C))->a11;
	}
	return R;
}

/* GEANT_PROJECT_VARIABLES.key_storage_item */
T0* T25f27(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T25*)(C))->a16)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLES.slots_item */
T6 T25f22(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T25*)(C))->a15)))->z2[a1]);
	return R;
}

/* GEANT_VARIABLES.found */
T1 T29f35(T0* C)
{
	T1 R = 0;
	R = ((((T29*)(C))->a9)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_VARIABLES.search */
void T29f66(T0* C, T0* a1)
{
	T29f50(C, a1);
	((T29*)(C))->a9 = ((T29*)(C))->a1;
}

/* GEANT_VARIABLES.search_position */
void T29f50(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T29*)(C))->a1 = (T29f29(C, ((T29*)(C))->a10));
		((T29*)(C))->a4 = ((T29*)(C))->a10;
		((T29*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T29*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T29*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T29f28(C, ((T29*)(C))->a1));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T29*)(C))->a4 = (T29f24(C, a1));
				l1 = (T29f29(C, ((T29*)(C))->a4));
				((T29*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T29f28(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T29*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T29f27(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T29*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T29*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T29f28(C, ((T29*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T29*)(C))->a4 = (T29f24(C, a1));
				l1 = (T29f29(C, ((T29*)(C))->a4));
				((T29*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T29f28(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T29*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T29f27(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T29*)(C))->a11 = l2;
			}
		}
	}
}

/* GEANT_VARIABLES.clashes_item */
T6 T29f27(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T29*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_VARIABLES.hash_position */
T6 T29f24(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T29*)(C))->a10)));
	} else {
		R = ((T29*)(C))->a10;
	}
	return R;
}

/* GEANT_VARIABLES.key_storage_item */
T0* T29f28(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T29*)(C))->a15)))->z2[a1]);
	return R;
}

/* GEANT_VARIABLES.slots_item */
T6 T29f29(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T29*)(C))->a14)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.commandline_variables */
unsigned char ge61os1570 = '\0';
T0* ge61ov1570;
T0* T58f4(T0* C)
{
	T0* R = 0;
	if (ge61os1570) {
		return ge61ov1570;
	} else {
		ge61os1570 = '\1';
	}
	R = T29c44();
	ge61ov1570 = R;
	return R;
}

/* GEANT_VARIABLES.make */
T0* T29c44(void)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T29));
	*(T29*)C = GE_default29;
	T29f47(C, (T6)(GE_int32(10)));
	l1 = T59c3();
	T29f48(C, l1);
	return C;
}

/* GEANT_VARIABLES.set_key_equality_tester */
void T29f48(T0* C, T0* a1)
{
	((T29*)(C))->a7 = a1;
	T61f6(GE_void(((T29*)(C))->a8), a1);
}

/* DS_SPARSE_TABLE_KEYS [STRING_8, STRING_8].internal_set_equality_tester */
void T61f6(T0* C, T0* a1)
{
	((T61*)(C))->a2 = a1;
}

/* UC_STRING_EQUALITY_TESTER.default_create */
T0* T59c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T59));
	*(T59*)C = GE_default59;
	return C;
}

/* GEANT_VARIABLES.make_map */
void T29f47(T0* C, T6 a1)
{
	T29f56(C, a1, EIF_VOID, EIF_VOID);
}

/* GEANT_VARIABLES.make_with_equality_testers */
void T29f56(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T29*)(C))->a16 = a2;
	((T29*)(C))->a7 = a3;
	T29f61(C, a1);
	((T29*)(C))->a8 = T61c5(C);
}

/* DS_SPARSE_TABLE_KEYS [STRING_8, STRING_8].make */
T0* T61c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T61));
	*(T61*)C = GE_default61;
	((T61*)(C))->a1 = a1;
	((T61*)(C))->a2 = (T62x1822(GE_void(((T61*)(C))->a1)));
	((T61*)(C))->a3 = (T61f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [STRING_8, STRING_8].new_cursor */
T0* T61f4(T0* C)
{
	T0* R = 0;
	R = T101c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [STRING_8, STRING_8].make */
T0* T101c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T101));
	*(T101*)C = GE_default101;
	((T101*)(C))->a1 = a1;
	t1 = (((T61*)(GE_void(((T101*)(C))->a1)))->a1);
	((T101*)(C))->a2 = (T62x1919(GE_void(t1)));
	return C;
}

/* GEANT_VARIABLES.make_sparse_container */
void T29f61(T0* C, T6 a1)
{
	T6 t1;
	((T29*)(C))->a3 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T29f62(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T29f63(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T29f64(C, t1);
	((T29*)(C))->a10 = (T29f20(C, a1));
	t1 = ((T6)((((T29*)(C))->a10)+((T6)(GE_int32(1)))));
	T29f65(C, t1);
	((T29*)(C))->a6 = (T6)(GE_int32(0));
	((T29*)(C))->a5 = (T6)(GE_int32(0));
	((T29*)(C))->a1 = (T6)(GE_int32(0));
	T29f49(C);
	((T29*)(C))->a19 = (T29f30(C));
}

/* GEANT_VARIABLES.unset_found_item */
void T29f49(T0* C)
{
	((T29*)(C))->a9 = (T6)(GE_int32(0));
}

/* GEANT_VARIABLES.make_slots */
void T29f65(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T29f26(C));
	((T29*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* KL_SPECIAL_ROUTINES [INTEGER_32].make */
T0* T65f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T102c2(a1);
	R = (((T102*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [INTEGER_32].make_area */
T0* T102c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T102));
	*(T102*)C = GE_default102;
	((T102*)(C))->a1 = T63c5(a1);
	return C;
}

/* GEANT_VARIABLES.special_integer_ */
T0* T29f26(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* GEANT_VARIABLES.new_modulus */
T6 T29f20(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* GEANT_VARIABLES.make_clashes */
void T29f64(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T29f26(C));
	((T29*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* GEANT_VARIABLES.make_key_storage */
void T29f63(T0* C, T6 a1)
{
	((T29*)(C))->a18 = T66c3();
	((T29*)(C))->a15 = (T66f2(GE_void(((T29*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [STRING_8].make */
T0* T66f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T103c2(a1);
	R = (((T103*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [STRING_8].make_area */
T0* T103c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T103));
	*(T103*)C = GE_default103;
	((T103*)(C))->a1 = T32c6(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [STRING_8].default_create */
T0* T66c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T66));
	*(T66*)C = GE_default66;
	return C;
}

/* GEANT_VARIABLES.make_item_storage */
void T29f62(T0* C, T6 a1)
{
	((T29*)(C))->a17 = T66c3();
	((T29*)(C))->a12 = (T66f2(GE_void(((T29*)(C))->a17), a1));
}

/* GEANT_ARGUMENT_VARIABLES.found */
T1 T34f32(T0* C)
{
	T1 R = 0;
	R = ((((T34*)(C))->a9)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.search */
void T34f67(T0* C, T0* a1)
{
	T34f50(C, a1);
	((T34*)(C))->a9 = ((T34*)(C))->a1;
}

/* GEANT_ARGUMENT_VARIABLES.search_position */
void T34f50(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T34*)(C))->a1 = (T34f29(C, ((T34*)(C))->a10));
		((T34*)(C))->a4 = ((T34*)(C))->a10;
		((T34*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T34*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T34*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T34f28(C, ((T34*)(C))->a1));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T34*)(C))->a4 = (T34f24(C, a1));
				l1 = (T34f29(C, ((T34*)(C))->a4));
				((T34*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T34f28(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T34*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T34f27(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T34*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T34*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T34f28(C, ((T34*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T34*)(C))->a4 = (T34f24(C, a1));
				l1 = (T34f29(C, ((T34*)(C))->a4));
				((T34*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T34f28(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T34*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T34f27(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T34*)(C))->a11 = l2;
			}
		}
	}
}

/* GEANT_ARGUMENT_VARIABLES.clashes_item */
T6 T34f27(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T34*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.hash_position */
T6 T34f24(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T34*)(C))->a10)));
	} else {
		R = ((T34*)(C))->a10;
	}
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.key_storage_item */
T0* T34f28(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T34*)(C))->a15)))->z2[a1]);
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.slots_item */
T6 T34f29(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T34*)(C))->a14)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.target_arguments_stack */
T0* T58f3(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* UC_UTF8_STRING.substring */
T0* T194f11(T0* C, T6 a1, T6 a2)
{
	T0* R = 0;
	T1 t1;
	t1 = ((T1)((a2)<(a1)));
	if (t1) {
		R = T194c59((T6)(GE_int32(0)));
	} else {
		R = T194c60(C, a1, a2);
	}
	return R;
}

/* UC_UTF8_STRING.make_from_substring */
T0* T194c60(T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T0* C;
	T1 t1;
	T0* t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T194));
	*(T194*)C = GE_default194;
	t1 = ((a1)!=(C));
	if (!(t1)) {
		t1 = ((a2)!=((T6)(GE_int32(1))));
	}
	if (!(t1)) {
		t1 = ((a3)!=(((T194*)(C))->a1));
	}
	if (t1) {
		t1 = ((T1)((a3)<(a2)));
		if (t1) {
			T194f59(C, (T6)(GE_int32(0)));
		} else {
			t1 = ((a1)==(C));
			if (t1) {
				l2 = (T194f40(C));
			} else {
				l2 = a1;
			}
			t2 = (T194f25(C));
			l1 = (T193f22(GE_void(t2), l2, a2, a3));
			T194f59(C, l1);
			t3 = ((T6)((a3)-(a2)));
			t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
			T194f61(C, t3);
			((T194*)(C))->a3 = l1;
			T194f68(C, l2, a2, a3, l1, (T6)(GE_int32(1)));
		}
	}
	return C;
}

/* UC_UTF8_STRING.put_substring_at_byte_index */
void T194f68(T0* C, T0* a1, T6 a2, T6 a3, T6 a4, T6 a5)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T2 l5 = 0;
	T6 l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T2 t4;
	t1 = (T6f1(&a4, (T6)(GE_int32(0))));
	if (t1) {
		t2 = (T194f36(C));
		t1 = (T82f1(GE_void(t2), a1, ge314ov6272));
		if (t1) {
			t3 = ((T6)((a3)-(a2)));
			l2 = ((T6)((t3)+((T6)(GE_int32(1)))));
			t1 = ((l2)==(a4));
			if (t1) {
				l3 = a5;
				l1 = a2;
				t1 = (T6f1(&l1, a3));
				while (!(t1)) {
					t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
					T194f71(C, t4, l3);
					l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, a3));
				}
			} else {
				l3 = a5;
				l1 = a2;
				t1 = (T6f1(&l1, a3));
				while (!(t1)) {
					l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
					t2 = (T194f25(C));
					l4 = (T193f23(GE_void(t2), l5));
					T194f67(C, l5, l4, l3);
					l3 = ((T6)((l3)+(l4)));
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, a3));
				}
			}
		} else {
			t2 = (T194f36(C));
			t1 = (T82f1(GE_void(t2), a1, C));
			if (t1) {
				if ((a1)==EIF_VOID) {
					l8 = EIF_VOID;
				} else {
					switch (((T0*)(a1))->id) {
					case 194:
						l8 = a1;
						break;
					default:
						l8 = EIF_VOID;
					}
				}
				l3 = a5;
				l1 = (T194f26(GE_void(l8), a2));
				t3 = ((T6)((l1)+(a4)));
				l2 = ((T6)((t3)-((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, l2));
				while (!(t1)) {
					t4 = (T194f20(GE_void(l8), l1));
					T194f71(C, t4, l3);
					l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, l2));
				}
			} else {
				if ((a1)==EIF_VOID) {
					l7 = EIF_VOID;
				} else {
					switch (((T0*)(a1))->id) {
					case 194:
						l7 = a1;
						break;
					default:
						l7 = EIF_VOID;
					}
				}
				t1 = ((l7)!=(EIF_VOID));
				if (t1) {
					l3 = a5;
					l1 = (T194f26(GE_void(l7), a2));
					t3 = ((T6)((l1)+(a4)));
					l2 = ((T6)((t3)-((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, l2));
					while (!(t1)) {
						t4 = (T194f20(GE_void(l7), l1));
						T194f71(C, t4, l3);
						l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						t1 = (T6f1(&l1, l2));
					}
				} else {
					if ((a1)==EIF_VOID) {
						l8 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 194:
							l8 = a1;
							break;
						default:
							l8 = EIF_VOID;
						}
					}
					t1 = ((l8)!=(EIF_VOID));
					if (t1) {
						l3 = a5;
						l1 = (T194f26(GE_void(l8), a2));
						t3 = ((T6)((l1)+(a4)));
						l2 = ((T6)((t3)-((T6)(GE_int32(1)))));
						t1 = (T6f1(&l1, l2));
						while (!(t1)) {
							l6 = (T194f21(GE_void(l8), l1));
							t2 = (T194f25(C));
							l4 = (T193f24(GE_void(t2), l6));
							T194f73(C, l6, l4, l3);
							l3 = ((T6)((l3)+(l4)));
							l1 = (T194f24(GE_void(l8), l1));
							t1 = (T6f1(&l1, l2));
						}
					} else {
						l3 = a5;
						l1 = a2;
						t1 = (T6f1(&l1, a3));
						while (!(t1)) {
							l6 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T194f14(a1, l1)));
							t2 = (T194f25(C));
							l4 = (T193f24(GE_void(t2), l6));
							T194f73(C, l6, l4, l3);
							l3 = ((T6)((l3)+(l4)));
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
							t1 = (T6f1(&l1, a3));
						}
					}
				}
			}
		}
	}
}

/* UC_UTF8_STRING.item_code */
T6 T194f14(T0* C, T6 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T1 t1;
	T2 t2;
	t1 = ((((T194*)(C))->a1)==(((T194*)(C))->a3));
	if (t1) {
		t2 = (T194f20(C, a1));
		R = ((T6)(t2));
	} else {
		l1 = (T194f26(C, a1));
		R = (T194f21(C, l1));
	}
	return R;
}

/* STRING_8.item_code */
T6 T17f12(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	T2 t2;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	t2 = (((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1]);
	R = ((T6)(t2));
	return R;
}

/* UC_UTF8_STRING.put_code_at_byte_index */
void T194f73(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T2 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	l3 = a1;
	t1 = ((T6)((a3)+(a2)));
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((l1)==(a3));
	while (!(t2)) {
		t3 = (T194f23(C));
		t1 = ((T6)((l3)%((T6)(GE_int32(64)))));
		t1 = ((T6)((t1)+((T6)(GE_int32(128)))));
		l2 = (T196f2(GE_void(t3), t1));
		T194f71(C, l2, l1);
		l3 = ((T6)((l3)/((T6)(GE_int32(64)))));
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((l1)==(a3));
	}
	switch (a2) {
	case (T6)(T6)(GE_int32(1)):
		t3 = (T194f23(C));
		l2 = (T196f2(GE_void(t3), l3));
		break;
	case (T6)(T6)(GE_int32(2)):
		t3 = (T194f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(192)))));
		l2 = (T196f2(GE_void(t3), t1));
		break;
	case (T6)(T6)(GE_int32(3)):
		t3 = (T194f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(224)))));
		l2 = (T196f2(GE_void(t3), t1));
		break;
	case (T6)(T6)(GE_int32(4)):
		t3 = (T194f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(240)))));
		l2 = (T196f2(GE_void(t3), t1));
		break;
	case (T6)(T6)(GE_int32(5)):
		t3 = (T194f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(248)))));
		l2 = (T196f2(GE_void(t3), t1));
		break;
	case (T6)(T6)(GE_int32(6)):
		t3 = (T194f23(C));
		t1 = ((T6)((l3)+((T6)(GE_int32(252)))));
		l2 = (T196f2(GE_void(t3), t1));
		break;
	default:
		break;
	}
	T194f71(C, l2, a3);
}

/* UC_UTF8_ROUTINES.code_byte_count */
T6 T193f24(T0* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	t1 = ((T1)((a1)<((T6)(GE_int32(128)))));
	if (t1) {
		R = (T6)(GE_int32(1));
	} else {
		t1 = ((T1)((a1)<((T6)(GE_int32(2048)))));
		if (t1) {
			R = (T6)(GE_int32(2));
		} else {
			t1 = ((T1)((a1)<((T6)(GE_int32(65536)))));
			if (t1) {
				R = (T6)(GE_int32(3));
			} else {
				R = (T6)(GE_int32(4));
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.byte_index */
T6 T194f26(T0* C, T6 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T2 l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = ((((T194*)(C))->a3)==(((T194*)(C))->a1));
	if (t1) {
		R = a1;
	} else {
		t1 = ((T1)((a1)<(((T194*)(C))->a5)));
		if (t1) {
			l1 = (T6)(GE_int32(1));
			R = (T6)(GE_int32(1));
		} else {
			l1 = ((T194*)(C))->a5;
			R = ((T194*)(C))->a6;
		}
		t1 = ((l1)==(a1));
		while (!(t1)) {
			l2 = (T194f20(C, R));
			t2 = (T194f25(C));
			t3 = (T193f3(GE_void(t2), l2));
			R = ((T6)((R)+(t3)));
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(a1));
		}
	}
	((T194*)(C))->a5 = a1;
	((T194*)(C))->a6 = R;
	return R;
}

/* UC_UTF8_STRING.put_character_at_byte_index */
void T194f67(T0* C, T2 a1, T6 a2, T6 a3)
{
	T2 l1 = 0;
	T6 l2 = 0;
	T0* t1;
	T6 t2;
	switch (a2) {
	case (T6)(T6)(GE_int32(1)):
		T194f71(C, a1, a3);
		break;
	case (T6)(T6)(GE_int32(2)):
		l2 = ((T6)(a1));
		t1 = (T194f23(C));
		t2 = ((T6)((l2)/((T6)(GE_int32(64)))));
		t2 = ((T6)((t2)+((T6)(GE_int32(192)))));
		l1 = (T196f2(GE_void(t1), t2));
		T194f71(C, l1, a3);
		t1 = (T194f23(C));
		t2 = ((T6)((l2)%((T6)(GE_int32(64)))));
		t2 = ((T6)((t2)+((T6)(GE_int32(128)))));
		l1 = (T196f2(GE_void(t1), t2));
		t2 = ((T6)((a3)+((T6)(GE_int32(1)))));
		T194f71(C, l1, t2);
		break;
	default:
		t2 = ((T6)(a1));
		T194f73(C, t2, a2, a3);
		break;
	}
}

/* UC_UTF8_ROUTINES.character_byte_count */
T6 T193f23(T0* C, T2 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T1 t1;
	t1 = (T2f17(&a1, (T2)('\177')));
	if (t1) {
		R = (T6)(GE_int32(1));
	} else {
		t1 = (T2f17(&a1, (T2)('\377')));
		if (t1) {
			R = (T6)(GE_int32(2));
		} else {
			l1 = ((T6)(a1));
			t1 = ((T1)((l1)<((T6)(GE_int32(2048)))));
			if (t1) {
				R = (T6)(GE_int32(2));
			} else {
				t1 = ((T1)((l1)<((T6)(GE_int32(65536)))));
				if (t1) {
					R = (T6)(GE_int32(3));
				} else {
					R = (T6)(GE_int32(4));
				}
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.put_byte */
void T194f71(T0* C, T2 a1, T6 a2)
{
	T6 l1 = 0;
	l1 = ((T194*)(C))->a1;
	T194f61(C, ((T194*)(C))->a3);
	T194f66(C, a1, a2);
	T194f61(C, l1);
}

/* UC_UTF8_STRING.old_put */
void T194f66(T0* C, T2 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	((T15*)(GE_void(((T194*)(C))->a2)))->z2[t1] = (a1);
	((T194*)(C))->a4 = (T6)(GE_int32(0));
}

/* UC_UTF8_STRING.any_ */
T0* T194f36(T0* C)
{
	T0* R = 0;
	if (ge166os1789) {
		return ge166ov1789;
	} else {
		ge166os1789 = '\1';
	}
	R = T82c3();
	ge166ov1789 = R;
	return R;
}

/* UC_UTF8_ROUTINES.substring_byte_count */
T6 T193f22(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T2 l7 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T2 t4;
	T0* t5;
	t1 = (T6f9(&a2, a3));
	if (t1) {
		t2 = (T193f25(C));
		t1 = (T82f1(GE_void(t2), a1, ge247ov7746));
		if (t1) {
			t3 = ((T6)((a3)%((T6)(GE_int32(2)))));
			t1 = ((t3)==((T6)(GE_int32(0))));
			if (t1) {
				l6 = a3;
			} else {
				l6 = ((T6)((a3)-((T6)(GE_int32(1)))));
			}
			l5 = a2;
			t1 = (T6f1(&l5, l6));
			while (!(t1)) {
				l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l5):T194f10(a1, l5)));
				t1 = (T2f17(&l7, (T2)('\177')));
				if (t1) {
					R = ((T6)((R)+((T6)(GE_int32(1)))));
				} else {
					t3 = (T193f23(C, l7));
					R = ((T6)((R)+(t3)));
				}
				t3 = ((T6)((l5)+((T6)(GE_int32(1)))));
				l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, t3):T194f10(a1, t3)));
				t1 = (T2f17(&l7, (T2)('\177')));
				if (t1) {
					R = ((T6)((R)+((T6)(GE_int32(1)))));
				} else {
					t3 = (T193f23(C, l7));
					R = ((T6)((R)+(t3)));
				}
				l5 = ((T6)((l5)+((T6)(GE_int32(2)))));
				t1 = (T6f1(&l5, l6));
			}
			t1 = ((T1)((l6)<(a3)));
			if (t1) {
				t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, a3):T194f10(a1, a3)));
				t3 = (T193f23(C, t4));
				R = ((T6)((R)+(t3)));
			}
		} else {
			t2 = (T193f25(C));
			t5 = (T193f27(C));
			t1 = (T82f1(GE_void(t2), a1, t5));
			if (t1) {
				if ((a1)==EIF_VOID) {
					l2 = EIF_VOID;
				} else {
					switch (((T0*)(a1))->id) {
					case 194:
						l2 = a1;
						break;
					default:
						l2 = EIF_VOID;
					}
				}
				t1 = ((a2)==((T6)(GE_int32(1))));
				if (t1) {
					t3 = (((T194*)(GE_void(l2)))->a1);
					t1 = ((a3)==(t3));
				}
				if (t1) {
					R = (((T194*)(GE_void(l2)))->a3);
				} else {
					l3 = (T194f26(GE_void(l2), a2));
					t3 = (((T194*)(GE_void(l2)))->a1);
					t1 = ((a3)==(t3));
					if (t1) {
						t3 = (((T194*)(GE_void(l2)))->a3);
						t3 = ((T6)((t3)-(l3)));
						R = ((T6)((t3)+((T6)(GE_int32(1)))));
					} else {
						t3 = ((T6)((a3)-(a2)));
						t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
						l4 = (T194f43(GE_void(l2), l3, t3));
						R = ((T6)((l4)-(l3)));
					}
				}
			} else {
				if ((a1)==EIF_VOID) {
					l1 = EIF_VOID;
				} else {
					switch (((T0*)(a1))->id) {
					case 194:
						l1 = a1;
						break;
					default:
						l1 = EIF_VOID;
					}
				}
				t1 = ((l1)!=(EIF_VOID));
				if (t1) {
					t1 = ((a2)==((T6)(GE_int32(1))));
					if (t1) {
						t3 = (((T194*)(GE_void(l1)))->a1);
						t1 = ((a3)==(t3));
					}
					if (t1) {
						R = (((T194*)(GE_void(l1)))->a3);
					} else {
						l3 = (T194f26(GE_void(l1), a2));
						t3 = (((T194*)(GE_void(l1)))->a1);
						t1 = ((a3)==(t3));
						if (t1) {
							t3 = (((T194*)(GE_void(l1)))->a3);
							t3 = ((T6)((t3)-(l3)));
							R = ((T6)((t3)+((T6)(GE_int32(1)))));
						} else {
							t3 = ((T6)((a3)-(a2)));
							t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
							l4 = (T194f43(GE_void(l1), l3, t3));
							R = ((T6)((l4)-(l3)));
						}
					}
				} else {
					l5 = a2;
					t1 = (T6f1(&l5, a3));
					while (!(t1)) {
						t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l5):T194f14(a1, l5)));
						t3 = (T193f24(C, t3));
						R = ((T6)((R)+(t3)));
						l5 = ((T6)((l5)+((T6)(GE_int32(1)))));
						t1 = (T6f1(&l5, a3));
					}
				}
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.shifted_byte_index */
T6 T194f43(T0* C, T6 a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T2 t3;
	T6 t4;
	R = a1;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, a2));
	while (!(t1)) {
		t2 = (T194f25(C));
		t3 = (T194f20(C, R));
		t4 = (T193f3(GE_void(t2), t3));
		R = ((T6)((R)+(t4)));
		t1 = (T6f1(&R, ((T194*)(C))->a3));
		if (t1) {
			l1 = ((T6)((a2)+((T6)(GE_int32(1)))));
		} else {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = (T6f1(&l1, a2));
	}
	return R;
}

/* UC_UTF8_ROUTINES.dummy_uc_string */
unsigned char ge247os7747 = '\0';
T0* ge247ov7747;
T0* T193f27(T0* C)
{
	T0* R = 0;
	if (ge247os7747) {
		return ge247ov7747;
	} else {
		ge247os7747 = '\1';
	}
	R = T111c8();
	ge247ov7747 = R;
	return R;
}

/* UC_STRING.make_empty */
T0* T111c8(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T111));
	*(T111*)C = GE_default111;
	T111f9(C, (T6)(GE_int32(0)));
	return C;
}

/* UC_STRING.make */
void T111f9(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T111f10(C);
	((T111*)(C))->a1 = (T6)(GE_int32(0));
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T111f9p1(C, (T6)(GE_int32(1)));
	} else {
		T111f9p1(C, a1);
	}
	t2 = (T111f7(C));
	T111f11(C, t2);
	t2 = (T111f7(C));
	T111f12(C, t2);
	T111f11(C, (T6)(GE_int32(0)));
	((T111*)(C))->a2 = (T6)(GE_int32(0));
}

/* UC_STRING.old_set_count */
void T111f12(T0* C, T6 a1)
{
	((T111*)(C))->a1 = a1;
	((T111*)(C))->a3 = (T6)(GE_int32(0));
}

/* UC_STRING.set_count */
void T111f11(T0* C, T6 a1)
{
	T1 t1;
	t1 = (T6f1(&(((T111*)(C))->a4), a1));
	if (t1) {
		T111f10(C);
	}
	((T111*)(C))->a1 = a1;
}

/* UC_STRING.byte_capacity */
T6 T111f7(T0* C)
{
	T6 R = 0;
	R = (T111f7p1(C));
	return R;
}

/* UC_STRING.capacity */
T6 T111f7p1(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (((T15*)(GE_void(((T111*)(C))->a6)))->z1);
	R = ((T6)((t1)-((T6)(GE_int32(1)))));
	return R;
}

/* UC_STRING.make */
void T111f9p1(T0* C, T6 a1)
{
	T6 t1;
	((T111*)(C))->a1 = (T6)(GE_int32(0));
	((T111*)(C))->a3 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T111f13(C, t1);
}

/* UC_STRING.make_area */
void T111f13(T0* C, T6 a1)
{
	((T111*)(C))->a6 = T15c9(a1);
}

/* UC_STRING.reset_byte_index_cache */
void T111f10(T0* C)
{
	((T111*)(C))->a4 = (T6)(GE_int32(1));
	((T111*)(C))->a5 = (T6)(GE_int32(1));
}

/* UC_UTF8_ROUTINES.any_ */
T0* T193f25(T0* C)
{
	T0* R = 0;
	if (ge166os1789) {
		return ge166ov1789;
	} else {
		ge166os1789 = '\1';
	}
	R = T82c3();
	ge166ov1789 = R;
	return R;
}

/* UC_UTF8_STRING.cloned_string */
T0* T194f40(T0* C)
{
	T0* R = 0;
	R = (T194f42(C));
	return R;
}

/* UC_UTF8_STRING.twin */
T0* T194f42(T0* C)
{
	T0* R = 0;
	R = (T0*)GE_alloc(sizeof(T194));
	((T0*)(R))->id = 194;
	T194f77(R, C);
	return R;
}

/* UC_UTF8_STRING.copy */
void T194f77(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(C));
	if (t1) {
		l1 = (((T194*)(a1))->a1);
		t2 = (((T194*)(a1))->a3);
		T194f61(a1, t2);
		T194f77p1(C, a1);
		T194f61(C, l1);
		T194f61(a1, l1);
	}
}

/* UC_UTF8_STRING.copy */
void T194f77p1(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(C));
	if (t1) {
		l1 = ((T194*)(C))->a2;
		*(T194*)(C) = *(T194*)(a1);
		t1 = ((l1)==(EIF_VOID));
		if (!(t1)) {
			t2 = (((T15*)(GE_void(l1)))->z1);
			t1 = (T6f9(&t2, ((T194*)(C))->a1));
		}
		if (t1) {
			((T194*)(C))->a2 = (T15f4(GE_void(((T194*)(C))->a2)));
		} else {
			T15f8(GE_void(l1), ((T194*)(C))->a2, (T6)(GE_int32(0)), (T6)(GE_int32(0)), ((T194*)(C))->a1);
			((T194*)(C))->a2 = l1;
		}
		((T194*)(C))->a4 = (T6)(GE_int32(0));
	}
}

/* SPECIAL [CHARACTER_8].twin */
T0* T15f4(T0* C)
{
	T0* R = 0;
	R = (T0*)GE_alloc(sizeof(T15)+((T15*)(C))->z1*sizeof(T2));
	*(T15*)(R) = *(T15*)(C);
	memcpy(((T15*)(R))->z2,((T15*)(C))->z2,((T15*)(C))->z1*sizeof(T2));
	return R;
}

/* UC_UTF8_STRING.make */
void T194f59(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	T194f69(C);
	((T194*)(C))->a1 = (T6)(GE_int32(0));
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T194f59p1(C, (T6)(GE_int32(1)));
	} else {
		T194f59p1(C, a1);
	}
	t2 = (T194f38(C));
	T194f61(C, t2);
	t2 = (T194f38(C));
	T194f63(C, t2);
	T194f61(C, (T6)(GE_int32(0)));
	((T194*)(C))->a3 = (T6)(GE_int32(0));
}

/* UC_UTF8_STRING.make */
T0* T194c59(T6 a1)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T194));
	*(T194*)C = GE_default194;
	T194f69(C);
	((T194*)(C))->a1 = (T6)(GE_int32(0));
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T194f59p1(C, (T6)(GE_int32(1)));
	} else {
		T194f59p1(C, a1);
	}
	t2 = (T194f38(C));
	T194f61(C, t2);
	t2 = (T194f38(C));
	T194f63(C, t2);
	T194f61(C, (T6)(GE_int32(0)));
	((T194*)(C))->a3 = (T6)(GE_int32(0));
	return C;
}

/* UC_UTF8_STRING.old_set_count */
void T194f63(T0* C, T6 a1)
{
	((T194*)(C))->a1 = a1;
	((T194*)(C))->a4 = (T6)(GE_int32(0));
}

/* UC_UTF8_STRING.byte_capacity */
T6 T194f38(T0* C)
{
	T6 R = 0;
	R = (T194f38p1(C));
	return R;
}

/* UC_UTF8_STRING.capacity */
T6 T194f38p1(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (((T15*)(GE_void(((T194*)(C))->a2)))->z1);
	R = ((T6)((t1)-((T6)(GE_int32(1)))));
	return R;
}

/* UC_UTF8_STRING.make */
void T194f59p1(T0* C, T6 a1)
{
	T6 t1;
	((T194*)(C))->a1 = (T6)(GE_int32(0));
	((T194*)(C))->a4 = (T6)(GE_int32(0));
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T194f70(C, t1);
}

/* UC_UTF8_STRING.make_area */
void T194f70(T0* C, T6 a1)
{
	((T194*)(C))->a2 = T15c9(a1);
}

/* STRING_8.substring */
T0* T17f10(T0* C, T6 a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T6 t4;
	t1 = (T6)(GE_int32(1));
	t2 = (T6f9(&t1, a1));
	if (t2) {
		t2 = (T6f9(&a1, a2));
	}
	if (t2) {
		t2 = (T6f9(&a2, ((T17*)(C))->a2));
	}
	if (t2) {
		t1 = ((T6)((a2)-(a1)));
		t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		R = (T17f19(C, t1));
		t3 = (((T17*)(GE_void(R)))->a1);
		t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
		t4 = ((T6)((a2)-(a1)));
		t4 = ((T6)((t4)+((T6)(GE_int32(1)))));
		T15f8(GE_void(t3), ((T17*)(C))->a1, t1, (T6)(GE_int32(0)), t4);
		t1 = ((T6)((a2)-(a1)));
		t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		T17f41(GE_void(R), t1);
	} else {
		R = (T17f19(C, (T6)(GE_int32(0))));
	}
	return R;
}

/* STRING_8.set_count */
void T17f41(T0* C, T6 a1)
{
	((T17*)(C))->a2 = a1;
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* STRING_8.new_string */
T0* T17f19(T0* C, T6 a1)
{
	T0* R = 0;
	R = T17c33(a1);
	return R;
}

/* UC_UTF8_STRING.item */
T2 T194f10(T0* C, T6 a1)
{
	T2 R = 0;
	T6 l1 = 0;
	T1 t1;
	t1 = ((((T194*)(C))->a1)==(((T194*)(C))->a3));
	if (t1) {
		R = (T194f20(C, a1));
	} else {
		l1 = (T194f26(C, a1));
		R = (T194f27(C, l1));
	}
	return R;
}

/* UC_UTF8_STRING.character_item_at_byte_index */
T2 T194f27(T0* C, T6 a1)
{
	T2 R = 0;
	T2 l1 = 0;
	T6 l2 = 0;
	T0* t1;
	T6 t2;
	T6 t3;
	T1 t4;
	l1 = (T194f20(C, a1));
	t1 = (T194f25(C));
	t2 = (T193f3(GE_void(t1), l1));
	switch (t2) {
	case (T6)(T6)(GE_int32(1)):
		R = l1;
		break;
	case (T6)(T6)(GE_int32(2)):
		t1 = (T194f25(C));
		l2 = (T193f4(GE_void(t1), l1));
		t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
		l1 = (T194f20(C, t2));
		t2 = ((T6)((l2)*((T6)(GE_int32(64)))));
		t1 = (T194f25(C));
		t3 = (T193f6(GE_void(t1), l1));
		l2 = ((T6)((t2)+(t3)));
		t1 = (T194f22(C));
		t2 = (T197f1(GE_void(t1)));
		t4 = (T6f9(&l2, t2));
		if (t4) {
			t1 = (T194f23(C));
			R = (T196f2(GE_void(t1), l2));
		} else {
			R = (T2)('\000');
		}
		break;
	default:
		l2 = (T194f21(C, a1));
		t1 = (T194f22(C));
		t2 = (T197f1(GE_void(t1)));
		t4 = (T6f9(&l2, t2));
		if (t4) {
			t1 = (T194f23(C));
			R = (T196f2(GE_void(t1), l2));
		} else {
			R = (T2)('\000');
		}
		break;
	}
	return R;
}

/* STRING_8.item */
T2 T17f9(T0* C, T6 a1)
{
	T2 R = 0;
	T6 t1;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	R = (((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1]);
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].item */
T0* T71f14(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T71*)(C))->a2)))->z2[a1]);
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.string_tokens */
T0* T58f10(T0* C, T0* a1, T2 a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T1 l9 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l6 = (T6)(GE_int32(1));
	l8 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f1(&l6, l8));
	if (!(t1)) {
		t1 = (l9);
	}
	while (!(t1)) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l6):T194f10(a1, l6)));
		switch (t2) {
		case (T2)(T2)(' '):
		case (T2)(T2)('\t'):
		case (T2)(T2)('\r'):
		case (T2)(T2)('\n'):
			l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
			break;
		default:
			l9 = EIF_TRUE;
			break;
		}
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
	}
	t1 = ((T1)(!(l9)));
	if (t1) {
		t3 = (T58f2(C));
		l1 = (T76f7(GE_void(t3), GE_ms("", 0)));
	} else {
		l9 = EIF_FALSE;
		l7 = l8;
		while (!(l9)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l7):T194f10(a1, l7)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
		}
		l1 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l6, l7):T194f11(a1, l6, l7)));
	}
	R = T71c23((T6)(GE_int32(5)));
	while (!(l5)) {
		l5 = EIF_TRUE;
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, (T6)(GE_int32(1))):T194f10(l1, (T6)(GE_int32(1)))));
			t1 = ((t2)==(a2));
			if (t1) {
				t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
				t4 = ((T6)((t4)-((T6)(GE_int32(1)))));
				if (((T0*)(GE_void(l1)))->id==17) {
					T17f48(l1, t4);
				} else {
					T194f76(l1, t4);
				}
				l5 = EIF_FALSE;
			}
		}
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, t4):T194f10(l1, t4)));
			t1 = ((t2)==(a2));
			if (t1) {
				t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
				t4 = ((T6)((t4)-((T6)(GE_int32(1)))));
				if (((T0*)(GE_void(l1)))->id==17) {
					T17f49(l1, t4);
				} else {
					T194f74(l1, t4);
				}
				l5 = EIF_FALSE;
			}
		}
	}
	l3 = (T6)(GE_int32(1));
	l4 = (((((T0*)(GE_void(l1)))->id==17)?T17f24(l1, a2, l3):T194f17(l1, a2, l3)));
	t1 = ((l4)==((T6)(GE_int32(0))));
	if (!(t1)) {
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t1 = (T6f1(&l3, t4));
	}
	while (!(t1)) {
		l6 = l3;
		l8 = ((T6)((l4)-((T6)(GE_int32(1)))));
		l9 = EIF_FALSE;
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l6):T194f10(l1, l6)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
			t1 = (T6f1(&l6, l8));
			if (!(t1)) {
				t1 = (l9);
			}
		}
		t1 = ((T1)(!(l9)));
		if (t1) {
			l2 = GE_ms("", 0);
		} else {
			l9 = EIF_FALSE;
			l7 = l8;
			while (!(l9)) {
				t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l7):T194f10(l1, l7)));
				switch (t2) {
				case (T2)(T2)(' '):
				case (T2)(T2)('\t'):
				case (T2)(T2)('\r'):
				case (T2)(T2)('\n'):
					l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
					break;
				default:
					l9 = EIF_TRUE;
					break;
				}
			}
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f10(l1, l6, l7):T194f11(l1, l6, l7)));
		}
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			T71f27(GE_void(R), l2);
		}
		l3 = ((T6)((l4)+((T6)(GE_int32(1)))));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t1 = (T6f9(&l3, t4));
		if (t1) {
			l4 = (((((T0*)(GE_void(l1)))->id==17)?T17f24(l1, a2, l3):T194f17(l1, a2, l3)));
		}
		t1 = ((l4)==((T6)(GE_int32(0))));
		if (!(t1)) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t1 = (T6f1(&l3, t4));
		}
	}
	t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
	t1 = (T6f9(&l3, t4));
	if (t1) {
		l6 = l3;
		l8 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		l9 = EIF_FALSE;
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l6):T194f10(l1, l6)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
			t1 = (T6f1(&l6, l8));
			if (!(t1)) {
				t1 = (l9);
			}
		}
		t1 = ((T1)(!(l9)));
		if (t1) {
			l2 = GE_ms("", 0);
		} else {
			l9 = EIF_FALSE;
			l7 = l8;
			while (!(l9)) {
				t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l7):T194f10(l1, l7)));
				switch (t2) {
				case (T2)(T2)(' '):
				case (T2)(T2)('\t'):
				case (T2)(T2)('\r'):
				case (T2)(T2)('\n'):
					l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
					break;
				default:
					l9 = EIF_TRUE;
					break;
				}
			}
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f10(l1, l6, l7):T194f11(l1, l6, l7)));
		}
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			T71f27(GE_void(R), l2);
		}
	}
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].force_last */
void T71f27(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T71f18(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T71*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T71f19(C, t2));
		T71f28(C, t2);
	}
	((T71*)(C))->a1 = ((T6)((((T71*)(C))->a1)+((T6)(GE_int32(1)))));
	((T32*)(GE_void(((T71*)(C))->a2)))->z2[((T71*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [STRING_8].resize */
void T71f28(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T71*)(C))->a2 = (T66f1(GE_void(((T71*)(C))->a4), ((T71*)(C))->a2, t1));
	((T71*)(C))->a5 = a1;
}

/* DS_ARRAYED_LIST [STRING_8].new_capacity */
T6 T71f19(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].extendible */
T1 T71f18(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T71*)(C))->a1)+(a1)));
	R = (T6f5(&(((T71*)(C))->a5), t1));
	return R;
}

/* UC_UTF8_STRING.index_of */
T6 T194f17(T0* C, T2 a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l3 = ((T194*)(C))->a1;
	t1 = ((l3)==(((T194*)(C))->a3));
	if (t1) {
		l1 = a2;
		t1 = (T6f1(&l1, l3));
		while (!(t1)) {
			t2 = (T194f20(C, l1));
			t1 = ((t2)==(a1));
			if (t1) {
				R = l1;
				l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l1, l3));
		}
	} else {
		t1 = ((a1)==((T2)('\000')));
		if (t1) {
			t1 = (T6f9(&a2, l3));
			if (t1) {
				t3 = (T194f22(C));
				l4 = (T197f1(GE_void(t3)));
				l2 = (T194f26(C, a2));
				l1 = a2;
				t1 = (T6f1(&l1, l3));
				while (!(t1)) {
					l5 = (T194f21(C, l2));
					t1 = ((l5)==((T6)(GE_int32(0))));
					if (!(t1)) {
						t1 = (T6f1(&l5, l4));
					}
					if (t1) {
						R = l1;
						l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
					} else {
						l2 = (T194f24(C, l2));
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t1 = (T6f1(&l1, l3));
				}
			}
		} else {
			t4 = ((T6)(a1));
			R = (T194f32(C, t4, a2));
		}
	}
	return R;
}

/* UC_UTF8_STRING.index_of_item_code */
T6 T194f32(T0* C, T6 a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	l3 = ((T194*)(C))->a1;
	t1 = ((l3)==(((T194*)(C))->a3));
	if (t1) {
		t1 = (T6f1(&a1, (T6)(GE_int32(127))));
		if (t1) {
		} else {
			l1 = a2;
			t1 = (T6f1(&l1, l3));
			while (!(t1)) {
				t2 = (T194f20(C, l1));
				t3 = ((T6)(t2));
				t1 = ((t3)==(a1));
				if (t1) {
					R = l1;
					l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l3));
			}
		}
	} else {
		t1 = (T6f9(&a2, l3));
		if (t1) {
			l2 = (T194f26(C, a2));
			l1 = a2;
			t1 = (T6f1(&l1, l3));
			while (!(t1)) {
				t3 = (T194f21(C, l2));
				t1 = ((t3)==(a1));
				if (t1) {
					R = l1;
					l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
				} else {
					l2 = (T194f24(C, l2));
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l3));
			}
		}
	}
	return R;
}

/* STRING_8.index_of */
T6 T17f24(T0* C, T2 a1, T6 a2)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	l3 = ((T17*)(C))->a2;
	t1 = (T6f9(&a2, l3));
	if (t1) {
		l2 = ((T6)((a2)-((T6)(GE_int32(1)))));
		l1 = ((T17*)(C))->a1;
		t1 = ((l2)==(l3));
		if (!(t1)) {
			t2 = (((T15*)(GE_void(l1)))->z2[l2]);
			t1 = ((t2)==(a1));
		}
		while (!(t1)) {
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l2)==(l3));
			if (!(t1)) {
				t2 = (((T15*)(GE_void(l1)))->z2[l2]);
				t1 = ((t2)==(a1));
			}
		}
		t1 = ((T1)((l2)<(l3)));
		if (t1) {
			R = ((T6)((l2)+((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* UC_UTF8_STRING.keep_head */
void T194f74(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		((T194*)(C))->a3 = (T6)(GE_int32(0));
		T194f61(C, (T6)(GE_int32(0)));
	} else {
		t1 = ((T1)((a1)<(((T194*)(C))->a1)));
		if (t1) {
			t1 = ((((T194*)(C))->a1)==(((T194*)(C))->a3));
			if (t1) {
				((T194*)(C))->a3 = a1;
			} else {
				t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
				t2 = (T194f26(C, t2));
				((T194*)(C))->a3 = ((T6)((t2)-((T6)(GE_int32(1)))));
			}
			T194f61(C, a1);
		}
	}
}

/* STRING_8.keep_head */
void T17f49(T0* C, T6 a1)
{
	T1 t1;
	t1 = ((T1)((a1)<(((T17*)(C))->a2)));
	if (t1) {
		((T17*)(C))->a2 = a1;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* UC_UTF8_STRING.keep_tail */
void T194f76(T0* C, T6 a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		((T194*)(C))->a3 = (T6)(GE_int32(0));
		T194f61(C, (T6)(GE_int32(0)));
	} else {
		t1 = ((T1)((a1)<(((T194*)(C))->a1)));
		if (t1) {
			t1 = ((((T194*)(C))->a1)==(((T194*)(C))->a3));
			if (t1) {
				l1 = ((T6)((((T194*)(C))->a3)-(a1)));
			} else {
				t2 = ((T6)((((T194*)(C))->a1)-(a1)));
				t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
				t2 = (T194f26(C, t2));
				l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
			}
			t2 = ((T6)((l1)+((T6)(GE_int32(1)))));
			T194f79(C, t2, l1);
			T194f61(C, a1);
		}
	}
}

/* UC_UTF8_STRING.move_bytes_left */
void T194f79(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T2 t3;
	t1 = ((T6)((a1)-(a2)));
	t2 = (T6f1(&(((T194*)(C))->a6), t1));
	if (t2) {
		T194f69(C);
	}
	l1 = a1;
	l2 = ((T194*)(C))->a3;
	l3 = ((T194*)(C))->a1;
	T194f61(C, ((T194*)(C))->a3);
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T194f33(C, l1));
		t1 = ((T6)((l1)-(a2)));
		T194f66(C, t3, t1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	T194f61(C, l3);
	((T194*)(C))->a3 = ((T6)((((T194*)(C))->a3)-(a2)));
}

/* STRING_8.keep_tail */
void T17f48(T0* C, T6 a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T17*)(C))->a2;
	t1 = ((T1)((a1)<(l1)));
	if (t1) {
		t2 = ((T6)((l1)-(a1)));
		T15f12(GE_void(((T17*)(C))->a1), t2, (T6)(GE_int32(0)), a1);
		((T17*)(C))->a2 = a1;
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* DS_ARRAYED_LIST [STRING_8].make */
T0* T71c23(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T71));
	*(T71*)C = GE_default71;
	((T71*)(C))->a4 = T66c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T71*)(C))->a2 = (T66f2(GE_void(((T71*)(C))->a4), t1));
	((T71*)(C))->a5 = a1;
	((T71*)(C))->a3 = (T71f9(C));
	return C;
}

/* DS_ARRAYED_LIST [STRING_8].new_cursor */
T0* T71f9(T0* C)
{
	T0* R = 0;
	R = T72c7(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [STRING_8].make */
T0* T72c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T72));
	*(T72*)C = GE_default72;
	((T72*)(C))->a3 = a1;
	return C;
}

/* KL_STRING_ROUTINES.cloned_string */
T0* T76f7(T0* C, T0* a1)
{
	T0* R = 0;
	R = (((((T0*)(GE_void(a1)))->id==17)?T17f16(a1):T194f42(a1)));
	return R;
}

/* STRING_8.twin */
T0* T17f16(T0* C)
{
	T0* R = 0;
	R = (T0*)GE_alloc(sizeof(T17));
	((T0*)(R))->id = 17;
	T17f40(R, C);
	return R;
}

/* STRING_8.copy */
void T17f40(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(C));
	if (t1) {
		l1 = ((T17*)(C))->a1;
		*(T17*)(C) = *(T17*)(a1);
		t1 = ((l1)==(EIF_VOID));
		if (!(t1)) {
			t2 = (((T15*)(GE_void(l1)))->z1);
			t1 = (T6f9(&t2, ((T17*)(C))->a2));
		}
		if (t1) {
			((T17*)(C))->a1 = (T15f4(GE_void(((T17*)(C))->a1)));
		} else {
			T15f8(GE_void(l1), ((T17*)(C))->a1, (T6)(GE_int32(0)), (T6)(GE_int32(0)), ((T17*)(C))->a2);
			((T17*)(C))->a1 = l1;
		}
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* GEANT_DEFINE_ELEMENT.if_attribute_name */
unsigned char ge136os2244 = '\0';
T0* ge136ov2244;
T0* T365f8(T0* C)
{
	T0* R = 0;
	if (ge136os2244) {
		return ge136ov2244;
	} else {
		ge136os2244 = '\1';
	}
	R = GE_ms("if", 2);
	ge136ov2244 = R;
	return R;
}

/* GEANT_DEFINE_ELEMENT.make */
T0* T365c16(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T365));
	*(T365*)C = GE_default365;
	T365f17(C, a2);
	T365f18(C, a1);
	return C;
}

/* GEANT_DEFINE_ELEMENT.set_project */
void T365f18(T0* C, T0* a1)
{
	((T365*)(C))->a1 = a1;
}

/* GEANT_DEFINE_ELEMENT.element_make */
void T365f17(T0* C, T0* a1)
{
	T365f19(C, a1);
}

/* GEANT_DEFINE_ELEMENT.set_xml_element */
void T365f19(T0* C, T0* a1)
{
	((T365*)(C))->a2 = a1;
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].item */
T0* T116f6(T0* C)
{
	T0* R = 0;
	R = (((T199*)(GE_void(((T116*)(C))->a2)))->a1);
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].start */
void T116f8(T0* C)
{
	T115f10(GE_void(((T116*)(C))->a3), C);
}

/* DS_LINKED_LIST [XM_ELEMENT].cursor_start */
void T115f10(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T115f7(C, a1));
	l2 = ((((T115*)(C))->a3)==(EIF_VOID));
	T116f10(a1, ((T115*)(C))->a3, EIF_FALSE, l2);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T115f12(C, a1);
	}
}

/* DS_LINKED_LIST [XM_ELEMENT].cursor_off */
T1 T115f7(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T116*)(a1))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* DS_LINKED_LIST [XM_ELEMENT].new_cursor */
T0* T115f5(T0* C)
{
	T0* R = 0;
	R = T116c7(C);
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_ELEMENT].make */
T0* T116c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T116));
	*(T116*)C = GE_default116;
	((T116*)(C))->a3 = a1;
	((T116*)(C))->a4 = EIF_TRUE;
	return C;
}

/* GEANT_FILESET_ELEMENT.elements_by_name */
T0* T359f18(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T359*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T359f26(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* DS_LINKED_LIST [XM_ELEMENT].force_last */
void T115f9(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T115f6(C));
	if (t1) {
		((T115*)(C))->a3 = T199c3(a1);
		((T115*)(C))->a4 = ((T115*)(C))->a3;
		((T115*)(C))->a1 = (T6)(GE_int32(1));
	} else {
		l1 = ((T115*)(C))->a4;
		((T115*)(C))->a4 = T199c3(a1);
		T199f4(GE_void(l1), ((T115*)(C))->a4);
		((T115*)(C))->a1 = ((T6)((((T115*)(C))->a1)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKABLE [XM_ELEMENT].put_right */
void T199f4(T0* C, T0* a1)
{
	((T199*)(C))->a2 = a1;
}

/* DS_LINKABLE [XM_ELEMENT].make */
T0* T199c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T199));
	*(T199*)C = GE_default199;
	((T199*)(C))->a1 = a1;
	return C;
}

/* DS_LINKED_LIST [XM_ELEMENT].is_empty */
T1 T115f6(T0* C)
{
	T1 R = 0;
	R = ((((T115*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* GEANT_FILESET_ELEMENT.string_ */
T0* T359f26(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* DS_LINKED_LIST [XM_ELEMENT].make */
T0* T115c8(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T115));
	*(T115*)C = GE_default115;
	((T115*)(C))->a2 = (T115f5(C));
	return C;
}

/* GEANT_FILESET_ELEMENT.include_element_name */
unsigned char ge132os9358 = '\0';
T0* ge132ov9358;
T0* T359f17(T0* C)
{
	T0* R = 0;
	if (ge132os9358) {
		return ge132ov9358;
	} else {
		ge132os9358 = '\1';
	}
	R = GE_ms("include", 7);
	ge132ov9358 = R;
	return R;
}

/* GEANT_FILESET.set_convert_to_filesystem */
void T360f34(T0* C, T1 a1)
{
	((T360*)(C))->a14 = a1;
}

/* GEANT_FILESET_ELEMENT.convert_attribute_name */
unsigned char ge132os9356 = '\0';
T0* ge132ov9356;
T0* T359f16(T0* C)
{
	T0* R = 0;
	if (ge132os9356) {
		return ge132ov9356;
	} else {
		ge132os9356 = '\1';
	}
	R = GE_ms("convert", 7);
	ge132ov9356 = R;
	return R;
}

/* GEANT_FILESET.set_mapped_filename_directory_name */
void T360f47(T0* C, T0* a1)
{
	((T360*)(C))->a8 = a1;
}

/* GEANT_FILESET.set_filename_directory_name */
void T360f46(T0* C, T0* a1)
{
	((T360*)(C))->a7 = a1;
}

/* GEANT_FILESET.set_mapped_filename_variable_name */
void T360f45(T0* C, T0* a1)
{
	((T360*)(C))->a18 = a1;
}

/* GEANT_FILESET_ELEMENT.mapped_filename_variable_name_attribute_name */
unsigned char ge132os9354 = '\0';
T0* ge132ov9354;
T0* T359f15(T0* C)
{
	T0* R = 0;
	if (ge132os9354) {
		return ge132ov9354;
	} else {
		ge132os9354 = '\1';
	}
	R = GE_ms("mapped_filename_variable", 24);
	ge132ov9354 = R;
	return R;
}

/* GEANT_FILESET.set_filename_variable_name */
void T360f44(T0* C, T0* a1)
{
	((T360*)(C))->a17 = a1;
}

/* GEANT_FILESET_ELEMENT.filename_variable_name_attribute_name */
unsigned char ge132os9353 = '\0';
T0* ge132ov9353;
T0* T359f14(T0* C)
{
	T0* R = 0;
	if (ge132os9353) {
		return ge132ov9353;
	} else {
		ge132os9353 = '\1';
	}
	R = GE_ms("filename_variable", 17);
	ge132ov9353 = R;
	return R;
}

/* GEANT_FILESET.set_concat */
void T360f43(T0* C, T1 a1)
{
	((T360*)(C))->a10 = a1;
}

/* GEANT_FILESET.set_force */
void T360f42(T0* C, T1 a1)
{
	((T360*)(C))->a13 = a1;
}

/* GEANT_FILESET_ELEMENT.boolean_value */
T1 T359f13(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T359f9(C, a1));
	t1 = (T359f26(C));
	t2 = (T359f27(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T359f26(C));
		t2 = (T359f28(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T359f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T359f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T359f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T359f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T359f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_FILESET_ELEMENT.std */
T0* T359f22(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.false_attribute_value */
unsigned char ge129os2258 = '\0';
T0* ge129ov2258;
T0* T359f28(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.true_attribute_value */
unsigned char ge129os2257 = '\0';
T0* ge129ov2257;
T0* T359f27(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.force_attribute_name */
unsigned char ge132os9351 = '\0';
T0* ge132ov9351;
T0* T359f12(T0* C)
{
	T0* R = 0;
	if (ge132os9351) {
		return ge132ov9351;
	} else {
		ge132os9351 = '\1';
	}
	R = GE_ms("force", 5);
	ge132ov9351 = R;
	return R;
}

/* GEANT_FILESET.set_exclude_wc_string */
void T360f41(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	((T360*)(C))->a16 = a1;
	((T360*)(C))->a4 = T412c14(((T360*)(C))->a16, EIF_TRUE);
	t1 = (T412f11(GE_void(((T360*)(C))->a4)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = GE_ma33((T6)3,
GE_ms("  [fileset] error: invalid exclude wildcard: \'", 46),
((T360*)(C))->a16,
GE_ms("\'", 1));
		T22f41(GE_void(((T360*)(C))->a2), t2);
	}
}

/* LX_DFA_WILDCARD.is_compiled */
T1 T412f11(T0* C)
{
	T1 R = 0;
	R = ((((T412*)(C))->a1)!=(EIF_VOID));
	return R;
}

/* LX_DFA_WILDCARD.compile */
T0* T412c14(T0* a1, T1 a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* C;
	T1 t1;
	C = (T0*)GE_alloc(sizeof(T412));
	*(T412*)C = GE_default412;
	T412f15(C);
	l3 = T28c10();
	l2 = T436c28();
	T436f29(GE_void(l2), EIF_FALSE);
	T436f30(GE_void(l2), EIF_FALSE);
	T436f31(GE_void(l2), EIF_TRUE);
	T436f32(GE_void(l2), a2);
	l1 = T435c219(l2, l3);
	T435f220(GE_void(l1), a1);
	t1 = (((T435*)(GE_void(l1)))->a1);
	if (t1) {
		l4 = T437c37(l2);
		l5 = l4;
		((T412*)(C))->a1 = (((T437*)(GE_void(l5)))->a1);
		((T412*)(C))->a8 = (((T437*)(GE_void(l5)))->a2);
		((T412*)(C))->a9 = (((T437*)(GE_void(l5)))->a3);
	} else {
		((T412*)(C))->a1 = EIF_VOID;
		((T412*)(C))->a8 = EIF_VOID;
	}
	return C;
}

/* LX_FULL_DFA.make */
T0* T437c37(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T437));
	*(T437*)C = GE_default437;
	T437f38(C, a1);
	T437f39(C);
	T437f40(C);
	return C;
}

/* LX_FULL_DFA.build */
void T437f40(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	((T437*)(C))->a28 = (T6)(GE_int32(0));
	((T437*)(C))->a29 = T487c9(((T437*)(C))->a25, ((T437*)(C))->a26);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, ((T437*)(C))->a30));
	while (!(t1)) {
		l2 = (T486f6(GE_void(((T437*)(C))->a27), l1));
		T437f44(C, l2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T437*)(C))->a30));
	}
	l2 = (T486f6(GE_void(((T437*)(C))->a27), l1));
	T437f44(C, l2);
	l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	t2 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	t1 = (T6f1(&l1, t2));
	while (!(t1)) {
		l2 = (T486f6(GE_void(((T437*)(C))->a27), l1));
		T437f44(C, l2);
		t1 = (T484f10(GE_void(l2)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			((T437*)(C))->a28 = ((T6)((((T437*)(C))->a28)+((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
		t1 = (T6f1(&l1, t2));
	}
	((T437*)(C))->a31 = (T6f1(&(((T437*)(C))->a28), (T6)(GE_int32(0))));
	((T437*)(C))->a29 = EIF_VOID;
	T437f45(C);
	T437f46(C);
}

/* LX_FULL_DFA.build_accept_table */
void T437f46(T0* C)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l3 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	l1 = T192c9((T6)(GE_int32(0)), l3);
	l2 = (T6)(GE_int32(1));
	t1 = (T6f1(&l2, l3));
	while (!(t1)) {
		l4 = (T486f6(GE_void(((T437*)(C))->a27), l2));
		t1 = (T484f10(GE_void(l4)));
		if (t1) {
			t2 = (((T484*)(GE_void(l4)))->a1);
			t2 = (T459f11(GE_void(t2)));
			t3 = (((T469*)(GE_void(t2)))->a1);
			T192f12(GE_void(l1), t3, l2);
		} else {
			T192f12(GE_void(l1), (T6)(GE_int32(0)), l2);
		}
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l2, l3));
	}
	((T437*)(C))->a2 = l1;
}

/* ARRAY [INTEGER_32].put */
void T192f12(T0* C, T6 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T192*)(C))->a2)));
	((T63*)(GE_void(((T192*)(C))->a1)))->z2[t1] = (a1);
}

/* DS_ARRAYED_LIST [LX_RULE].first */
T0* T459f11(T0* C)
{
	T0* R = 0;
	R = (((T482*)(GE_void(((T459*)(C))->a2)))->z2[(T6)(GE_int32(1))]);
	return R;
}

/* ARRAY [INTEGER_32].make */
T0* T192c9(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T192));
	*(T192*)C = GE_default192;
	((T192*)(C))->a2 = a1;
	((T192*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T192f10(C, t2);
	} else {
		T192f10(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [INTEGER_32].make_area */
void T192f10(T0* C, T6 a1)
{
	((T192*)(C))->a1 = T63c5(a1);
}

/* LX_FULL_DFA.build_nxt_table */
void T437f45(T0* C)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T6 l9 = 0;
	T6 t1;
	T1 t2;
	((T437*)(C))->a3 = ((T6)((((T437*)(C))->a26)+((T6)(GE_int32(1)))));
	t1 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((((T437*)(C))->a3)*(t1)));
	t1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	l1 = T192c9((T6)(GE_int32(0)), t1);
	l9 = ((T6)((((T437*)(C))->a30)+((T6)(GE_int32(1)))));
	l5 = ((T6)((((T437*)(C))->a3)-((T6)(GE_int32(1)))));
	l3 = ((T437*)(C))->a3;
	l2 = (T6)(GE_int32(1));
	t1 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	t2 = (T6f1(&l2, t1));
	while (!(t2)) {
		l6 = (T486f6(GE_void(((T437*)(C))->a27), l2));
		l8 = (((T484*)(GE_void(l6)))->a3);
		t1 = (((T484*)(GE_void(l6)))->a6);
		t2 = ((t1)==(l9));
		if (t2) {
			t1 = ((T6)(-(l9)));
			T192f12(GE_void(l1), t1, l3);
		} else {
			T192f12(GE_void(l1), l9, l3);
		}
		l5 = ((T6)((l5)+(((T437*)(C))->a3)));
		l4 = (T6)(GE_int32(1));
		l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l3, l5));
		while (!(t2)) {
			l7 = (T489f6(GE_void(l8), l4));
			t2 = ((l7)!=(EIF_VOID));
			if (t2) {
				t1 = (((T484*)(GE_void(l7)))->a6);
				T192f12(GE_void(l1), t1, l3);
			} else {
				t1 = (((T484*)(GE_void(l6)))->a6);
				t1 = ((T6)(-(t1)));
				T192f12(GE_void(l1), t1, l3);
			}
			l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
			t2 = (T6f1(&l3, l5));
		}
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
		t2 = (T6f1(&l2, t1));
	}
	((T437*)(C))->a1 = l1;
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].target */
T0* T489f6(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T534f4(GE_void(((T489*)(C))->a1), a1));
	return R;
}

/* ARRAY [LX_DFA_STATE].item */
T0* T534f4(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T534*)(C))->a2)));
	R = (((T531*)(GE_void(((T534*)(C))->a1)))->z2[t1]);
	return R;
}

/* LX_DFA_STATE.is_accepting */
T1 T484f10(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T459f10(GE_void(((T484*)(C))->a1)));
	R = ((T1)(!(t1)));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].is_empty */
T1 T459f10(T0* C)
{
	T1 R = 0;
	R = ((((T459*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* LX_FULL_DFA.build_transitions */
void T437f44(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 t1;
	T6 t2;
	T1 t3;
	T0* t4;
	l2 = (T487f5(GE_void(((T437*)(C))->a29)));
	t1 = (((T486*)(GE_void(((T437*)(C))->a27)))->a2);
	t2 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	t1 = ((T6)((t1)-(t2)));
	t3 = ((T1)((t1)<(l2)));
	if (t3) {
		t1 = (((T486*)(GE_void(((T437*)(C))->a27)))->a2);
		t1 = ((T6)((t1)+(l2)));
		t1 = ((T6)((t1)+((T6)(GE_int32(1000)))));
		T437f49(C, t1);
	}
	T487f10(GE_void(((T437*)(C))->a29));
	T484f18(GE_void(a1), ((T437*)(C))->a29);
	l6 = (((T487*)(GE_void(((T437*)(C))->a29)))->a1);
	l5 = (((T484*)(GE_void(a1)))->a3);
	l1 = ((T437*)(C))->a25;
	t3 = (T6f1(&l1, ((T437*)(C))->a26));
	while (!(t3)) {
		t3 = (T415f4(GE_void(l6), l1));
		if (t3) {
			t3 = (T487f8(GE_void(((T437*)(C))->a29), l1));
			if (t3) {
				t4 = (T484f9(GE_void(a1), l1));
				l4 = (T437f36(C, t4));
			} else {
				l3 = (T487f4(GE_void(((T437*)(C))->a29), l1));
				l4 = (T489f6(GE_void(l5), l3));
			}
			T489f8(GE_void(l5), l4, l1);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l1, ((T437*)(C))->a26));
	}
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].set_target */
void T489f8(T0* C, T0* a1, T6 a2)
{
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T489f6(C, a2));
	t2 = ((t1)==(l1));
	if (t2) {
		((T489*)(C))->a3 = ((T6)((((T489*)(C))->a3)+((T6)(GE_int32(1)))));
	}
	T534f7(GE_void(((T489*)(C))->a1), a1, a2);
}

/* ARRAY [LX_DFA_STATE].put */
void T534f7(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T534*)(C))->a2)));
	((T531*)(GE_void(((T534*)(C))->a1)))->z2[t1] = (a1);
}

/* LX_SYMBOL_PARTITIONS.previous_symbol */
T6 T487f4(T0* C, T6 a1)
{
	T6 R = 0;
	T0* t1;
	t1 = (T518f4(GE_void(((T487*)(C))->a2), a1));
	t1 = (((T516*)(GE_void(t1)))->a2);
	R = (((T516*)(GE_void(t1)))->a1);
	return R;
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].item */
T0* T518f4(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T518*)(C))->a2)));
	R = (((T517*)(GE_void(((T518*)(C))->a1)))->z2[t1]);
	return R;
}

/* LX_FULL_DFA.new_state */
T0* T437f36(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T6)((((T437*)(C))->a30)+((T6)(GE_int32(1)))));
	l2 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	t1 = ((R)!=(EIF_VOID));
	if (!(t1)) {
		t1 = (T6f1(&l1, l2));
	}
	while (!(t1)) {
		R = (T486f6(GE_void(((T437*)(C))->a27), l1));
		t1 = (T484f11(GE_void(R), a1));
		t1 = ((T1)(!(t1)));
		if (t1) {
			R = EIF_VOID;
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		}
		t1 = ((R)!=(EIF_VOID));
		if (!(t1)) {
			t1 = (T6f1(&l1, l2));
		}
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		R = a1;
		T486f9(GE_void(((T437*)(C))->a27), a1);
		t2 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
		T484f17(GE_void(a1), t2);
	}
	return R;
}

/* LX_DFA_STATE.set_id */
void T484f17(T0* C, T6 a1)
{
	((T484*)(C))->a6 = a1;
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].put_last */
void T486f9(T0* C, T0* a1)
{
	((T486*)(C))->a1 = ((T6)((((T486*)(C))->a1)+((T6)(GE_int32(1)))));
	((T531*)(GE_void(((T486*)(C))->a3)))->z2[((T486*)(C))->a1] = (a1);
}

/* LX_DFA_STATE.is_equal */
T1 T484f11(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T484f14(C));
	t2 = (T82f1(GE_void(t1), C, a1));
	if (t2) {
		t3 = (((T484*)(GE_void(a1)))->a5);
		t2 = ((((T484*)(C))->a5)==(t3));
	}
	if (t2) {
		t1 = (((T484*)(GE_void(a1)))->a2);
		R = (T485f19(GE_void(((T484*)(C))->a2), t1));
	}
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].is_equal */
T1 T485f19(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T0* t4;
	t1 = ((C)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (T485f21(C));
		t1 = (T82f1(GE_void(t2), C, a1));
		if (t1) {
			t3 = (((T485*)(GE_void(a1)))->a1);
			t1 = ((t3)==(((T485*)(C))->a1));
		}
		if (t1) {
			l3 = (((T485*)(GE_void(a1)))->a2);
			l1 = (T6)(GE_int32(1));
			l2 = ((T485*)(C))->a1;
			R = EIF_TRUE;
			t1 = ((T1)(!(R)));
			if (!(t1)) {
				t1 = (T6f1(&l1, l2));
			}
			while (!(t1)) {
				t2 = (((T526*)(GE_void(((T485*)(C))->a2)))->z2[l1]);
				t4 = (((T526*)(GE_void(l3)))->z2[l1]);
				R = ((t2)==(t4));
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = ((T1)(!(R)));
				if (!(t1)) {
					t1 = (T6f1(&l1, l2));
				}
			}
		}
	}
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].any_ */
T0* T485f21(T0* C)
{
	T0* R = 0;
	if (ge166os1789) {
		return ge166ov1789;
	} else {
		ge166os1789 = '\1';
	}
	R = T82c3();
	ge166ov1789 = R;
	return R;
}

/* LX_DFA_STATE.any_ */
T0* T484f14(T0* C)
{
	T0* R = 0;
	if (ge166os1789) {
		return ge166ov1789;
	} else {
		ge166os1789 = '\1';
	}
	R = T82c3();
	ge166ov1789 = R;
	return R;
}

/* LX_DFA_STATE.new_state */
T0* T484f9(T0* C, T6 a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T6 t4;
	l2 = (((T485*)(GE_void(((T484*)(C))->a2)))->a1);
	l4 = T485c23(l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T485f10(GE_void(((T484*)(C))->a2), l1));
		l3 = (((T492*)(GE_void(t2)))->a2);
		t1 = ((l3)!=(EIF_VOID));
		if (t1) {
			t1 = (T512x13147T6(GE_void(l3), a1));
		}
		if (t1) {
			t2 = (T512x13144(GE_void(l3)));
			T485f24(GE_void(l4), t2);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
	t3 = (T484f12(C));
	t4 = (T484f13(C));
	R = T484c16(l4, t3, t4);
	return R;
}

/* LX_DFA_STATE.make */
T0* T484c16(T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* C;
	T1 t1;
	T0* t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T484));
	*(T484*)C = GE_default484;
	l2 = (((T485*)(GE_void(a1)))->a1);
	((T484*)(C))->a2 = T485c23(l2);
	((T484*)(C))->a3 = T489c7(a2, a3);
	((T484*)(C))->a1 = T459c12(l2);
	((T484*)(C))->a4 = T459c12(l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T485f10(GE_void(a1), l1));
		t2 = (((T492*)(GE_void(l3)))->a2);
		t1 = ((t2)!=(EIF_VOID));
		if (t1) {
			t2 = (((T492*)(GE_void(l3)))->a2);
			if ((t2)==EIF_VOID) {
				l5 = EIF_VOID;
			} else {
				switch (((T0*)(t2))->id) {
				case 513:
					l5 = t2;
					break;
				default:
					l5 = EIF_VOID;
				}
			}
			t1 = ((l5)==(EIF_VOID));
			if (t1) {
				T485f27(GE_void(((T484*)(C))->a2), l3);
				t3 = (((T492*)(GE_void(l3)))->a4);
				((T484*)(C))->a5 = ((T6)((((T484*)(C))->a5)+(t3)));
			} else {
				l4 = (((T513*)(GE_void(l5)))->a1);
				t1 = (T485f7(GE_void(a1), l4));
				t1 = ((T1)(!(t1)));
				if (t1) {
					T485f27(GE_void(a1), l4);
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				}
			}
		}
		t2 = (((T492*)(GE_void(l3)))->a3);
		t1 = ((t2)!=(EIF_VOID));
		if (t1) {
			t2 = (((T492*)(GE_void(l3)))->a3);
			l4 = (((T513*)(GE_void(t2)))->a1);
			t1 = (T485f7(GE_void(a1), l4));
			t1 = ((T1)(!(t1)));
			if (t1) {
				T485f27(GE_void(a1), l4);
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			}
		}
		t1 = (T492f7(GE_void(l3)));
		if (t1) {
			t1 = (T492f6(GE_void(l3)));
			if (t1) {
				t2 = (((T492*)(GE_void(l3)))->a5);
				T459f13(GE_void(((T484*)(C))->a4), t2);
			} else {
				t2 = (((T492*)(GE_void(l3)))->a5);
				T459f13(GE_void(((T484*)(C))->a1), t2);
			}
			t1 = (T485f8(GE_void(((T484*)(C))->a2)));
			if (!(t1)) {
				t2 = (T485f9(GE_void(((T484*)(C))->a2)));
				t1 = ((t2)!=(l3));
			}
			if (t1) {
				T485f27(GE_void(((T484*)(C))->a2), l3);
				t3 = (((T492*)(GE_void(l3)))->a4);
				((T484*)(C))->a5 = ((T6)((((T484*)(C))->a5)+(t3)));
			}
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
	t2 = (T484f8(C));
	T485f29(GE_void(((T484*)(C))->a2), t2);
	t1 = (T459f10(GE_void(((T484*)(C))->a1)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T484f7(C));
		T459f16(GE_void(((T484*)(C))->a1), t2);
		t2 = (T459f11(GE_void(((T484*)(C))->a1)));
		T469f22(GE_void(t2), EIF_TRUE);
	}
	t2 = (T484f7(C));
	T459f16(GE_void(((T484*)(C))->a4), t2);
	return C;
}

/* LX_RULE.set_useful */
void T469f22(T0* C, T1 a1)
{
	((T469*)(C))->a10 = a1;
}

/* DS_ARRAYED_LIST [LX_RULE].sort */
void T459f16(T0* C, T0* a1)
{
	T524f3(GE_void(a1), C);
}

/* DS_BUBBLE_SORTER [LX_RULE].sort */
void T524f3(T0* C, T0* a1)
{
	T524f4(C, a1, ((T524*)(C))->a1);
}

/* DS_BUBBLE_SORTER [LX_RULE].sort_with_comparator */
void T524f4(T0* C, T0* a1, T0* a2)
{
	T1 t1;
	T6 t2;
	t1 = (T459f10(a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T459*)(a1))->a1);
		T524f5(C, a1, a2, (T6)(GE_int32(1)), t2);
	}
}

/* DS_BUBBLE_SORTER [LX_RULE].subsort_with_comparator */
void T524f5(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T6 t2;
	l1 = a4;
	t1 = (T6f9(&l1, a3));
	while (!(t1)) {
		l2 = a3;
		t1 = (T6f5(&l2, l1));
		while (!(t1)) {
			l4 = (T459f6(a1, l2));
			t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			l5 = (T459f6(a1, t2));
			t1 = (T543f1(GE_void(a2), l5, l4));
			if (t1) {
				T459f21(a1, l5, l2);
				t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				T459f21(a1, l4, t2);
				l3 = EIF_TRUE;
			}
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = (T6f5(&l2, l1));
		}
		if (l3) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			l3 = EIF_FALSE;
		} else {
			l1 = a3;
		}
		t1 = (T6f9(&l1, a3));
	}
}

/* DS_ARRAYED_LIST [LX_RULE].replace */
void T459f21(T0* C, T0* a1, T6 a2)
{
	((T482*)(GE_void(((T459*)(C))->a2)))->z2[a2] = (a1);
}

/* KL_COMPARABLE_COMPARATOR [LX_RULE].less_than */
T1 T543f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T469f12(GE_void(a1), a2));
	return R;
}

/* LX_RULE.infix "<" */
T1 T469f12(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T469*)(GE_void(a1)))->a1);
	R = ((T1)((((T469*)(C))->a1)<(t1)));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].item */
T0* T459f6(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T482*)(GE_void(((T459*)(C))->a2)))->z2[a1]);
	return R;
}

/* LX_DFA_STATE.rule_sorter */
unsigned char ge317os11330 = '\0';
T0* ge317ov11330;
T0* T484f7(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge317os11330) {
		return ge317ov11330;
	} else {
		ge317os11330 = '\1';
	}
	l1 = T543c2();
	R = T524c2(l1);
	ge317ov11330 = R;
	return R;
}

/* DS_BUBBLE_SORTER [LX_RULE].make */
T0* T524c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T524));
	*(T524*)C = GE_default524;
	((T524*)(C))->a1 = a1;
	return C;
}

/* KL_COMPARABLE_COMPARATOR [LX_RULE].make */
T0* T543c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T543));
	*(T543*)C = GE_default543;
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].sort */
void T485f29(T0* C, T0* a1)
{
	T522f3(GE_void(a1), C);
}

/* DS_BUBBLE_SORTER [LX_NFA_STATE].sort */
void T522f3(T0* C, T0* a1)
{
	T522f4(C, a1, ((T522*)(C))->a1);
}

/* DS_BUBBLE_SORTER [LX_NFA_STATE].sort_with_comparator */
void T522f4(T0* C, T0* a1, T0* a2)
{
	T1 t1;
	T6 t2;
	t1 = (T485f8(a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T485*)(a1))->a1);
		T522f5(C, a1, a2, (T6)(GE_int32(1)), t2);
	}
}

/* DS_BUBBLE_SORTER [LX_NFA_STATE].subsort_with_comparator */
void T522f5(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T6 t2;
	l1 = a4;
	t1 = (T6f9(&l1, a3));
	while (!(t1)) {
		l2 = a3;
		t1 = (T6f5(&l2, l1));
		while (!(t1)) {
			l4 = (T485f10(a1, l2));
			t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			l5 = (T485f10(a1, t2));
			t1 = (T546f1(GE_void(a2), l5, l4));
			if (t1) {
				T485f26(a1, l5, l2);
				t2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				T485f26(a1, l4, t2);
				l3 = EIF_TRUE;
			}
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = (T6f5(&l2, l1));
		}
		if (l3) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			l3 = EIF_FALSE;
		} else {
			l1 = a3;
		}
		t1 = (T6f9(&l1, a3));
	}
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].replace */
void T485f26(T0* C, T0* a1, T6 a2)
{
	((T526*)(GE_void(((T485*)(C))->a2)))->z2[a2] = (a1);
}

/* KL_COMPARABLE_COMPARATOR [LX_NFA_STATE].less_than */
T1 T546f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	R = (T492f8(GE_void(a1), a2));
	return R;
}

/* LX_NFA_STATE.infix "<" */
T1 T492f8(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T492*)(GE_void(a1)))->a4);
	R = ((T1)((((T492*)(C))->a4)<(t1)));
	return R;
}

/* LX_DFA_STATE.bubble_sorter */
unsigned char ge317os11329 = '\0';
T0* ge317ov11329;
T0* T484f8(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge317os11329) {
		return ge317ov11329;
	} else {
		ge317os11329 = '\1';
	}
	l1 = T546c2();
	R = T522c2(l1);
	ge317ov11329 = R;
	return R;
}

/* DS_BUBBLE_SORTER [LX_NFA_STATE].make */
T0* T522c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T522));
	*(T522*)C = GE_default522;
	((T522*)(C))->a1 = a1;
	return C;
}

/* KL_COMPARABLE_COMPARATOR [LX_NFA_STATE].make */
T0* T546c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T546));
	*(T546*)C = GE_default546;
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].last */
T0* T485f9(T0* C)
{
	T0* R = 0;
	R = (((T526*)(GE_void(((T485*)(C))->a2)))->z2[((T485*)(C))->a1]);
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].is_empty */
T1 T485f8(T0* C)
{
	T1 R = 0;
	R = ((((T485*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].force_last */
void T459f13(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T459f8(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T459*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T459f9(C, t2));
		T459f14(C, t2);
	}
	((T459*)(C))->a1 = ((T6)((((T459*)(C))->a1)+((T6)(GE_int32(1)))));
	((T482*)(GE_void(((T459*)(C))->a2)))->z2[((T459*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [LX_RULE].resize */
void T459f14(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T459*)(C))->a2 = (T501f2(GE_void(((T459*)(C))->a3), ((T459*)(C))->a2, t1));
	((T459*)(C))->a4 = a1;
}

/* KL_SPECIAL_ROUTINES [LX_RULE].resize */
T0* T501f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T482*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T482f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_RULE].resized_area */
T0* T482f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T482c4(a1);
	t1 = (((T482*)(C))->z1);
	T482f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_RULE].copy_data */
void T482f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T482f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T482*)(a1))->z2[l1]);
			((T482*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_RULE].move_data */
void T482f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T482f8(C, a1, a2, a3);
			} else {
				T482f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T482f8(C, a1, a2, a3);
			} else {
				T482f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_RULE].overlapping_move */
void T482f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T482*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T482*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T482*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T482*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_RULE].non_overlapping_move */
void T482f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T482*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T482*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [LX_RULE].make */
T0* T482c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T482)+a1*sizeof(T0*));
	*(T482*)C = GE_default482;
	((T482*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_LIST [LX_RULE].new_capacity */
T6 T459f9(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].extendible */
T1 T459f8(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T459*)(C))->a1)+(a1)));
	R = (T6f5(&(((T459*)(C))->a4), t1));
	return R;
}

/* LX_NFA_STATE.is_accepting_head */
T1 T492f6(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = (T492f7(C));
	if (t1) {
		t1 = ((T1)(!(((T492*)(C))->a1)));
	}
	if (t1) {
		R = (T492f9(C));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* LX_NFA_STATE.has_transition */
T1 T492f9(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T492*)(C))->a2)!=(EIF_VOID));
	if (!(t1)) {
		R = ((((T492*)(C))->a3)!=(EIF_VOID));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* LX_NFA_STATE.is_accepting */
T1 T492f7(T0* C)
{
	T1 R = 0;
	R = ((((T492*)(C))->a5)!=(EIF_VOID));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].has */
T1 T485f7(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l1 = ((T485*)(C))->a1;
	l2 = ((T485*)(C))->a3;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T526*)(GE_void(((T485*)(C))->a2)))->z2[l1]);
			t1 = ((GE_void(l2), t2, a1, (T1)0));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T526*)(GE_void(((T485*)(C))->a2)))->z2[l1]);
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].force_last */
void T485f27(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T485f12(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T485*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T485f13(C, t2));
		T485f31(C, t2);
	}
	((T485*)(C))->a1 = ((T6)((((T485*)(C))->a1)+((T6)(GE_int32(1)))));
	((T526*)(GE_void(((T485*)(C))->a2)))->z2[((T485*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].resize */
void T485f31(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T485*)(C))->a2 = (T528f2(GE_void(((T485*)(C))->a4), ((T485*)(C))->a2, t1));
	((T485*)(C))->a5 = a1;
}

/* KL_SPECIAL_ROUTINES [LX_NFA_STATE].resize */
T0* T528f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T526*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T526f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_NFA_STATE].resized_area */
T0* T526f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T526c4(a1);
	t1 = (((T526*)(C))->z1);
	T526f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_NFA_STATE].copy_data */
void T526f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T526f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T526*)(a1))->z2[l1]);
			((T526*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_NFA_STATE].move_data */
void T526f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T526f8(C, a1, a2, a3);
			} else {
				T526f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T526f8(C, a1, a2, a3);
			} else {
				T526f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_NFA_STATE].overlapping_move */
void T526f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T526*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T526*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T526*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T526*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_NFA_STATE].non_overlapping_move */
void T526f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T526*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T526*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [LX_NFA_STATE].make */
T0* T526c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T526)+a1*sizeof(T0*));
	*(T526*)C = GE_default526;
	((T526*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].new_capacity */
T6 T485f13(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].extendible */
T1 T485f12(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T485*)(C))->a1)+(a1)));
	R = (T6f5(&(((T485*)(C))->a5), t1));
	return R;
}

/* DS_ARRAYED_LIST [LX_RULE].make */
T0* T459c12(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T459));
	*(T459*)C = GE_default459;
	((T459*)(C))->a3 = T501c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T459*)(C))->a2 = (T501f1(GE_void(((T459*)(C))->a3), t1));
	((T459*)(C))->a4 = a1;
	((T459*)(C))->a5 = (T459f7(C));
	return C;
}

/* DS_ARRAYED_LIST [LX_RULE].new_cursor */
T0* T459f7(T0* C)
{
	T0* R = 0;
	R = T502c4(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_RULE].make */
T0* T502c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T502));
	*(T502*)C = GE_default502;
	((T502*)(C))->a3 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_RULE].make */
T0* T501f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T549c2(a1);
	R = (((T549*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_RULE].make_area */
T0* T549c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T549));
	*(T549*)C = GE_default549;
	((T549*)(C))->a1 = T482c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_RULE].default_create */
T0* T501c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T501));
	*(T501*)C = GE_default501;
	return C;
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].make */
T0* T489c7(T6 a1, T6 a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T489));
	*(T489*)C = GE_default489;
	((T489*)(C))->a1 = T534c5(a1, a2);
	((T489*)(C))->a2 = T535c1();
	return C;
}

/* KL_ARRAY_ROUTINES [LX_DFA_STATE].default_create */
T0* T535c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T535));
	*(T535*)C = GE_default535;
	return C;
}

/* ARRAY [LX_DFA_STATE].make */
T0* T534c5(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T534));
	*(T534*)C = GE_default534;
	((T534*)(C))->a2 = a1;
	((T534*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T534f6(C, t2);
	} else {
		T534f6(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [LX_DFA_STATE].make_area */
void T534f6(T0* C, T6 a1)
{
	((T534*)(C))->a1 = T531c4(a1);
}

/* SPECIAL [LX_DFA_STATE].make */
T0* T531c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T531)+a1*sizeof(T0*));
	*(T531*)C = GE_default531;
	((T531*)(C))->z1 = a1;
	return C;
}

/* LX_DFA_STATE.maximum_symbol */
T6 T484f13(T0* C)
{
	T6 R = 0;
	R = (T489f5(GE_void(((T484*)(C))->a3)));
	return R;
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].upper */
T6 T489f5(T0* C)
{
	T6 R = 0;
	R = (((T534*)(GE_void(((T489*)(C))->a1)))->a3);
	return R;
}

/* LX_DFA_STATE.minimum_symbol */
T6 T484f12(T0* C)
{
	T6 R = 0;
	R = (T489f4(GE_void(((T484*)(C))->a3)));
	return R;
}

/* LX_TRANSITION_TABLE [LX_DFA_STATE].lower */
T6 T489f4(T0* C)
{
	T6 R = 0;
	R = (((T534*)(GE_void(((T489*)(C))->a1)))->a2);
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].put_last */
void T485f24(T0* C, T0* a1)
{
	((T485*)(C))->a1 = ((T6)((((T485*)(C))->a1)+((T6)(GE_int32(1)))));
	((T526*)(GE_void(((T485*)(C))->a2)))->z2[((T485*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].item */
T0* T485f10(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T526*)(GE_void(((T485*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].make */
T0* T485c23(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T485));
	*(T485*)C = GE_default485;
	((T485*)(C))->a4 = T528c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T485*)(C))->a2 = (T528f1(GE_void(((T485*)(C))->a4), t1));
	((T485*)(C))->a5 = a1;
	((T485*)(C))->a6 = (T485f11(C));
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].new_cursor */
T0* T485f11(T0* C)
{
	T0* R = 0;
	R = T529c7(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].make */
T0* T529c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T529));
	*(T529*)C = GE_default529;
	((T529*)(C))->a3 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_NFA_STATE].make */
T0* T528f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T552c2(a1);
	R = (((T552*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_NFA_STATE].make_area */
T0* T552c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T552));
	*(T552*)C = GE_default552;
	((T552*)(C))->a1 = T526c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_NFA_STATE].default_create */
T0* T528c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T528));
	*(T528*)C = GE_default528;
	return C;
}

/* LX_SYMBOL_PARTITIONS.is_representative */
T1 T487f8(T0* C, T6 a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T518f4(GE_void(((T487*)(C))->a2), a1));
	t1 = (((T516*)(GE_void(t1)))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* ARRAY [BOOLEAN].item */
T1 T415f4(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T415*)(C))->a2)));
	R = (((T150*)(GE_void(((T415*)(C))->a1)))->z2[t1]);
	return R;
}

/* LX_DFA_STATE.partition */
void T484f18(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	l2 = (((T485*)(GE_void(((T484*)(C))->a2)))->a1);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T485f10(GE_void(((T484*)(C))->a2), l1));
		l3 = (((T492*)(GE_void(t2)))->a2);
		t1 = ((l3)!=(EIF_VOID));
		if (t1) {
			T512x13148T0(GE_void(l3), a1);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* LX_SYMBOL_PARTITIONS.initialize */
void T487f10(T0* C)
{
	T487f10p1(C);
	T415f7(GE_void(((T487*)(C))->a1));
}

/* ARRAY [BOOLEAN].clear_all */
void T415f7(T0* C)
{
	T150f6(GE_void(((T415*)(C))->a1));
}

/* SPECIAL [BOOLEAN].clear_all */
void T150f6(T0* C)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T150*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T150*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* LX_SYMBOL_PARTITIONS.initialize */
void T487f10p1(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T6 t1;
	T0* t2;
	T1 t3;
	l2 = (T487f6(C));
	t1 = (T487f7(C));
	t2 = (T518f4(GE_void(((T487*)(C))->a2), t1));
	t1 = (T487f7(C));
	T516f5(GE_void(t2), t1);
	t1 = (T487f7(C));
	l1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t3 = (T6f1(&l1, l2));
	while (!(t3)) {
		l3 = (T518f4(GE_void(((T487*)(C))->a2), l1));
		t1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = (T518f4(GE_void(((T487*)(C))->a2), t1));
		T516f9(GE_void(l3), t2);
		T516f5(GE_void(l3), l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l1, l2));
	}
	((T487*)(C))->a3 = (T6)(GE_int32(0));
}

/* DS_BILINKABLE [INTEGER_32].put_left */
void T516f9(T0* C, T0* a1)
{
	((T516*)(C))->a2 = a1;
	T516f10(GE_void(a1), C);
}

/* DS_BILINKABLE [INTEGER_32].attach_right */
void T516f10(T0* C, T0* a1)
{
	((T516*)(C))->a3 = a1;
}

/* DS_BILINKABLE [INTEGER_32].put */
void T516f5(T0* C, T6 a1)
{
	((T516*)(C))->a1 = a1;
}

/* LX_SYMBOL_PARTITIONS.lower */
T6 T487f7(T0* C)
{
	T6 R = 0;
	R = (((T518*)(GE_void(((T487*)(C))->a2)))->a2);
	return R;
}

/* LX_SYMBOL_PARTITIONS.upper */
T6 T487f6(T0* C)
{
	T6 R = 0;
	R = (((T518*)(GE_void(((T487*)(C))->a2)))->a3);
	return R;
}

/* LX_FULL_DFA.resize */
void T437f49(T0* C, T6 a1)
{
	T486f10(GE_void(((T437*)(C))->a27), a1);
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].resize */
void T486f10(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T486*)(C))->a3 = (T532f2(GE_void(((T486*)(C))->a4), ((T486*)(C))->a3, t1));
	((T486*)(C))->a2 = a1;
}

/* KL_SPECIAL_ROUTINES [LX_DFA_STATE].resize */
T0* T532f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T531*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T531f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_DFA_STATE].resized_area */
T0* T531f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T531c4(a1);
	t1 = (((T531*)(C))->z1);
	T531f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_DFA_STATE].copy_data */
void T531f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T531f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T531*)(a1))->z2[l1]);
			((T531*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_DFA_STATE].move_data */
void T531f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T531f8(C, a1, a2, a3);
			} else {
				T531f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T531f8(C, a1, a2, a3);
			} else {
				T531f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_DFA_STATE].overlapping_move */
void T531f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T531*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T531*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T531*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T531*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_DFA_STATE].non_overlapping_move */
void T531f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T531*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T531*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* LX_SYMBOL_PARTITIONS.capacity */
T6 T487f5(T0* C)
{
	T6 R = 0;
	R = (T518f5(GE_void(((T487*)(C))->a2)));
	return R;
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].count */
T6 T518f5(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T518*)(C))->a3)-(((T518*)(C))->a2)));
	R = ((T6)((t1)+((T6)(GE_int32(1)))));
	return R;
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].item */
T0* T486f6(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T531*)(GE_void(((T486*)(C))->a3)))->z2[a1]);
	return R;
}

/* LX_SYMBOL_PARTITIONS.make */
T0* T487c9(T6 a1, T6 a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T487));
	*(T487*)C = GE_default487;
	((T487*)(C))->a1 = T415c5(a1, a2);
	T487f9p1(C, a1, a2);
	return C;
}

/* LX_SYMBOL_PARTITIONS.make */
void T487f9p1(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	((T487*)(C))->a2 = T518c6(a1, a2);
	l2 = a1;
	t1 = (T6f1(&l2, a2));
	while (!(t1)) {
		l1 = T516c4(l2);
		T518f7(GE_void(((T487*)(C))->a2), l1, l2);
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l2, a2));
	}
	T487f10(C);
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].put */
void T518f7(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T518*)(C))->a2)));
	((T517*)(GE_void(((T518*)(C))->a1)))->z2[t1] = (a1);
}

/* DS_BILINKABLE [INTEGER_32].make */
T0* T516c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T516));
	*(T516*)C = GE_default516;
	((T516*)(C))->a1 = a1;
	return C;
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].make */
T0* T518c6(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T518));
	*(T518*)C = GE_default518;
	((T518*)(C))->a2 = a1;
	((T518*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T518f8(C, t2);
	} else {
		T518f8(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [DS_BILINKABLE [INTEGER_32]].make_area */
void T518f8(T0* C, T6 a1)
{
	((T518*)(C))->a1 = T517c2(a1);
}

/* SPECIAL [DS_BILINKABLE [INTEGER_32]].make */
T0* T517c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T517)+a1*sizeof(T0*));
	*(T517*)C = GE_default517;
	((T517*)(C))->z1 = a1;
	return C;
}

/* ARRAY [BOOLEAN].make */
T0* T415c5(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T415));
	*(T415*)C = GE_default415;
	((T415*)(C))->a2 = a1;
	((T415*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T415f8(C, t2);
	} else {
		T415f8(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [BOOLEAN].make_area */
void T415f8(T0* C, T6 a1)
{
	((T415*)(C))->a1 = T150c4(a1);
}

/* SPECIAL [BOOLEAN].make */
T0* T150c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T150)+a1*sizeof(T1));
	*(T150*)C = GE_default150;
	((T150*)(C))->z1 = a1;
	return C;
}

/* LX_FULL_DFA.put_eob_state */
void T437f39(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T6 t2;
	l2 = T485c23((T6)(GE_int32(0)));
	l1 = T484c16(l2, ((T437*)(C))->a25, ((T437*)(C))->a26);
	l3 = T469c14(((T437*)(C))->a22);
	t1 = (((T484*)(GE_void(l1)))->a1);
	T459f15(GE_void(t1), l3);
	T486f9(GE_void(((T437*)(C))->a27), l1);
	t2 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	T484f17(GE_void(l1), t2);
}

/* DS_ARRAYED_LIST [LX_RULE].force_first */
void T459f15(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T459f8(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T459*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T459f9(C, t2));
		T459f14(C, t2);
	}
	T459f17(C, a1, (T6)(GE_int32(1)));
}

/* DS_ARRAYED_LIST [LX_RULE].put */
void T459f17(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	T1 t2;
	t1 = ((T6)((((T459*)(C))->a1)+((T6)(GE_int32(1)))));
	t2 = ((a2)==(t1));
	if (t2) {
		T459f18(C, a1);
	} else {
		T459f19(C, a2, (T6)(GE_int32(1)));
		T459f20(C, a2, (T6)(GE_int32(1)));
		((T482*)(GE_void(((T459*)(C))->a2)))->z2[a2] = (a1);
	}
}

/* DS_ARRAYED_LIST [LX_RULE].move_cursors_right */
void T459f20(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T459*)(C))->a5;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		l2 = (((T502*)(GE_void(l1)))->a1);
		t1 = (T6f5(&l2, a1));
		if (t1) {
			t2 = ((T6)((l2)+(a2)));
			T502f5(GE_void(l1), t2);
		}
		l1 = (((T502*)(GE_void(l1)))->a2);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_RULE].set_position */
void T502f5(T0* C, T6 a1)
{
	((T502*)(C))->a1 = a1;
}

/* DS_ARRAYED_LIST [LX_RULE].move_right */
void T459f19(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T459*)(C))->a1;
	((T459*)(C))->a1 = ((T6)((((T459*)(C))->a1)+(a2)));
	t1 = ((T1)((l1)<(a1)));
	while (!(t1)) {
		t2 = (((T482*)(GE_void(((T459*)(C))->a2)))->z2[l1]);
		t3 = ((T6)((l1)+(a2)));
		((T482*)(GE_void(((T459*)(C))->a2)))->z2[t3] = (t2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(a1)));
	}
}

/* DS_ARRAYED_LIST [LX_RULE].put_last */
void T459f18(T0* C, T0* a1)
{
	((T459*)(C))->a1 = ((T6)((((T459*)(C))->a1)+((T6)(GE_int32(1)))));
	((T482*)(GE_void(((T459*)(C))->a2)))->z2[((T459*)(C))->a1] = (a1);
}

/* LX_RULE.make_default */
T0* T469c14(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T469));
	*(T469*)C = GE_default469;
	((T469*)(C))->a1 = a1;
	((T469*)(C))->a2 = (T469f13(C));
	((T469*)(C))->a3 = (T469f11(C));
	((T469*)(C))->a4 = (T6)(GE_int32(-1));
	((T469*)(C))->a5 = (T6)(GE_int32(-1));
	((T469*)(C))->a6 = (T6)(GE_int32(-1));
	((T469*)(C))->a7 = (T6)(GE_int32(-1));
	return C;
}

/* LX_RULE.dummy_action */
unsigned char ge404os12938 = '\0';
T0* ge404ov12938;
T0* T469f11(T0* C)
{
	T0* R = 0;
	if (ge404os12938) {
		return ge404ov12938;
	} else {
		ge404os12938 = '\1';
	}
	R = T520c2(GE_ms("", 0));
	ge404ov12938 = R;
	return R;
}

/* LX_ACTION.make */
T0* T520c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T520));
	*(T520*)C = GE_default520;
	((T520*)(C))->a1 = a1;
	return C;
}

/* LX_RULE.dummy_pattern */
unsigned char ge404os12937 = '\0';
T0* ge404ov12937;
T0* T469f13(T0* C)
{
	T0* R = 0;
	if (ge404os12937) {
		return ge404ov12937;
	} else {
		ge404os12937 = '\1';
	}
	R = T467c12(EIF_FALSE);
	ge404ov12937 = R;
	return R;
}

/* LX_NFA.make_epsilon */
T0* T467c12(T1 a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T467));
	*(T467*)C = GE_default467;
	((T467*)(C))->a1 = a1;
	((T467*)(C))->a2 = T485c23((T6)(GE_int32(100)));
	l2 = T492c10(a1);
	l3 = T492c10(a1);
	l1 = T513c3(l3);
	T492f11(GE_void(l2), l1);
	T485f25(GE_void(((T467*)(C))->a2), l2);
	T485f24(GE_void(((T467*)(C))->a2), l3);
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].put_first */
void T485f25(T0* C, T0* a1)
{
	T485f30(C, a1, (T6)(GE_int32(1)));
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].put */
void T485f30(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	T1 t2;
	t1 = ((T6)((((T485*)(C))->a1)+((T6)(GE_int32(1)))));
	t2 = ((a2)==(t1));
	if (t2) {
		T485f24(C, a1);
	} else {
		T485f33(C, a2, (T6)(GE_int32(1)));
		T485f34(C, a2, (T6)(GE_int32(1)));
		((T526*)(GE_void(((T485*)(C))->a2)))->z2[a2] = (a1);
	}
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].move_cursors_right */
void T485f34(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T485*)(C))->a6;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		l2 = (((T529*)(GE_void(l1)))->a1);
		t1 = (T6f5(&l2, a1));
		if (t1) {
			t2 = ((T6)((l2)+(a2)));
			T529f8(GE_void(l1), t2);
		}
		l1 = (((T529*)(GE_void(l1)))->a2);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].set_position */
void T529f8(T0* C, T6 a1)
{
	((T529*)(C))->a1 = a1;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].move_right */
void T485f33(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T485*)(C))->a1;
	((T485*)(C))->a1 = ((T6)((((T485*)(C))->a1)+(a2)));
	t1 = ((T1)((l1)<(a1)));
	while (!(t1)) {
		t2 = (((T526*)(GE_void(((T485*)(C))->a2)))->z2[l1]);
		t3 = ((T6)((l1)+(a2)));
		((T526*)(GE_void(((T485*)(C))->a2)))->z2[t3] = (t2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(a1)));
	}
}

/* LX_NFA_STATE.set_transition */
void T492f11(T0* C, T0* a1)
{
	((T492*)(C))->a2 = a1;
}

/* LX_EPSILON_TRANSITION [LX_NFA_STATE].make */
T0* T513c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T513));
	*(T513*)C = GE_default513;
	((T513*)(C))->a1 = a1;
	return C;
}

/* LX_NFA_STATE.make */
T0* T492c10(T1 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T492));
	*(T492*)C = GE_default492;
	((T492*)(C))->a1 = a1;
	return C;
}

/* LX_FULL_DFA.initialize */
void T437f38(T0* C, T0* a1)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	((T437*)(C))->a4 = (((T436*)(GE_void(a1)))->a15);
	t1 = ((((T437*)(C))->a4)==(EIF_VOID));
	if (t1) {
		((T437*)(C))->a4 = ge363ov11275;
	}
	((T437*)(C))->a5 = (((T436*)(GE_void(a1)))->a9);
	((T437*)(C))->a6 = (((T436*)(GE_void(a1)))->a10);
	((T437*)(C))->a7 = (((T436*)(GE_void(a1)))->a16);
	((T437*)(C))->a8 = (((T436*)(GE_void(a1)))->a17);
	((T437*)(C))->a9 = (((T436*)(GE_void(a1)))->a18);
	((T437*)(C))->a10 = (((T436*)(GE_void(a1)))->a13);
	((T437*)(C))->a11 = (((T436*)(GE_void(a1)))->a19);
	((T437*)(C))->a12 = (((T436*)(GE_void(a1)))->a20);
	((T437*)(C))->a13 = (((T436*)(GE_void(a1)))->a21);
	((T437*)(C))->a14 = (((T436*)(GE_void(a1)))->a22);
	((T437*)(C))->a15 = (((T436*)(GE_void(a1)))->a23);
	((T437*)(C))->a16 = (((T436*)(GE_void(a1)))->a11);
	t2 = (((T436*)(GE_void(a1)))->a8);
	((T437*)(C))->a17 = (T460f8(GE_void(t2)));
	t2 = (((T436*)(GE_void(a1)))->a7);
	T437f41(C, t2);
	t2 = (((T436*)(GE_void(a1)))->a12);
	t3 = (T33f10(GE_void(((T437*)(C))->a17)));
	t3 = ((T6)((t3)-((T6)(GE_int32(1)))));
	T437f42(C, t2, (T6)(GE_int32(0)), t3);
	l1 = ((T437*)(C))->a5;
	l2 = (((T436*)(GE_void(a1)))->a1);
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = (T468f3(GE_void(l2)));
	}
	if (t1) {
		((T437*)(C))->a18 = (T468f6(GE_void(l2), (T6)(GE_int32(0)), l1));
		((T437*)(C))->a19 = (T192f4(GE_void(((T437*)(C))->a18), l1));
		l1 = (((T468*)(GE_void(l2)))->a1);
	} else {
		((T437*)(C))->a19 = l1;
	}
	((T437*)(C))->a20 = (((T483*)(GE_void(((T437*)(C))->a21)))->a3);
	((T437*)(C))->a22 = ((T6)((((T437*)(C))->a20)+((T6)(GE_int32(1)))));
	((T437*)(C))->a23 = (((T436*)(GE_void(a1)))->a24);
	((T437*)(C))->a24 = (((T436*)(GE_void(a1)))->a25);
	t2 = (((T436*)(GE_void(a1)))->a8);
	T437f43(C, t2, (T6)(GE_int32(1)), l1);
}

/* LX_FULL_DFA.initialize_dfa */
void T437f43(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T437*)(C))->a25 = a2;
	((T437*)(C))->a26 = a3;
	l2 = (((T460*)(GE_void(a1)))->a1);
	t1 = (T6)(GE_int32(2));
	t1 = ((T6)((t1)*(l2)));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t1 = (T6f10(&t1, (T6)(GE_int32(1000))));
	((T437*)(C))->a27 = T486c8(t1);
	T437f47(C, a1);
	l1 = (T6)(GE_int32(1));
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T460f7(GE_void(a1), l1));
		T437f48(C, t3);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	t1 = (T6)(GE_int32(2));
	((T437*)(C))->a30 = ((T6)((t1)*(l2)));
}

/* LX_FULL_DFA.put_start_condition */
void T437f48(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	l1 = (((T488*)(GE_void(a1)))->a4);
	l2 = (((T488*)(GE_void(a1)))->a5);
	l8 = (((T490*)(GE_void(l1)))->a5);
	l3 = T485c23(l8);
	t1 = (((T490*)(GE_void(l2)))->a5);
	t1 = ((T6)((l8)+(t1)));
	l4 = T485c23(t1);
	l7 = (T6)(GE_int32(1));
	t2 = (T6f1(&l7, l8));
	while (!(t2)) {
		t3 = (T490f7(GE_void(l1), l7));
		l5 = (T467f4(GE_void(t3)));
		T485f24(GE_void(l3), l5);
		T485f24(GE_void(l4), l5);
		l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l7, l8));
	}
	l8 = (((T490*)(GE_void(l2)))->a5);
	l7 = (T6)(GE_int32(1));
	t2 = (T6f1(&l7, l8));
	while (!(t2)) {
		t3 = (T490f7(GE_void(l2), l7));
		t3 = (T467f4(GE_void(t3)));
		T485f24(GE_void(l4), t3);
		l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l7, l8));
	}
	l6 = T484c16(l3, ((T437*)(C))->a25, ((T437*)(C))->a26);
	T486f9(GE_void(((T437*)(C))->a27), l6);
	t1 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	T484f17(GE_void(l6), t1);
	l6 = T484c16(l4, ((T437*)(C))->a25, ((T437*)(C))->a26);
	T486f9(GE_void(((T437*)(C))->a27), l6);
	t1 = (((T486*)(GE_void(((T437*)(C))->a27)))->a1);
	T484f17(GE_void(l6), t1);
}

/* LX_NFA.start_state */
T0* T467f4(T0* C)
{
	T0* R = 0;
	R = (T485f14(GE_void(((T467*)(C))->a2)));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].first */
T0* T485f14(T0* C)
{
	T0* R = 0;
	R = (((T526*)(GE_void(((T485*)(C))->a2)))->z2[(T6)(GE_int32(1))]);
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA].item */
T0* T490f7(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T470*)(GE_void(((T490*)(C))->a2)))->z2[a1]);
	return R;
}

/* LX_START_CONDITIONS.item */
T0* T460f7(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T503*)(GE_void(((T460*)(C))->a2)))->z2[a1]);
	return R;
}

/* LX_FULL_DFA.set_nfa_state_ids */
void T437f47(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T6 l9 = 0;
	T6 l10 = 0;
	T6 l11 = 0;
	T6 l12 = 0;
	T6 l13 = 0;
	T1 t1;
	T0* t2;
	l13 = (T6)(GE_int32(1));
	l5 = T491c35((T6)(GE_int32(100)));
	l7 = (((T460*)(GE_void(a1)))->a1);
	l6 = (T6)(GE_int32(1));
	t1 = (T6f1(&l6, l7));
	while (!(t1)) {
		l1 = (T460f7(GE_void(a1), l6));
		l2 = (((T488*)(GE_void(l1)))->a4);
		l9 = (((T490*)(GE_void(l2)))->a5);
		l8 = (T6)(GE_int32(1));
		t1 = (T6f1(&l8, l9));
		while (!(t1)) {
			l3 = (T490f7(GE_void(l2), l8));
			t2 = (T467f4(GE_void(l3)));
			l12 = (((T492*)(GE_void(t2)))->a4);
			t1 = (T491f23(GE_void(l5), l12));
			t1 = ((T1)(!(t1)));
			if (!(t1)) {
				t2 = (T491f22(GE_void(l5), l12));
				t1 = ((t2)!=(l3));
			}
			if (t1) {
				T491f36(GE_void(l5), l3, l13);
				l4 = (((T467*)(GE_void(l3)))->a2);
				l11 = (((T485*)(GE_void(l4)))->a1);
				l10 = (T6)(GE_int32(1));
				t1 = (T6f1(&l10, l11));
				while (!(t1)) {
					t2 = (T485f10(GE_void(l4), l10));
					T492f14(GE_void(t2), l13);
					l13 = ((T6)((l13)+((T6)(GE_int32(1)))));
					l10 = ((T6)((l10)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l10, l11));
				}
			}
			l8 = ((T6)((l8)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l8, l9));
		}
		l2 = (((T488*)(GE_void(l1)))->a5);
		l9 = (((T490*)(GE_void(l2)))->a5);
		l8 = (T6)(GE_int32(1));
		t1 = (T6f1(&l8, l9));
		while (!(t1)) {
			l3 = (T490f7(GE_void(l2), l8));
			t2 = (T467f4(GE_void(l3)));
			l12 = (((T492*)(GE_void(t2)))->a4);
			t1 = (T491f23(GE_void(l5), l12));
			t1 = ((T1)(!(t1)));
			if (!(t1)) {
				t2 = (T491f22(GE_void(l5), l12));
				t1 = ((t2)!=(l3));
			}
			if (t1) {
				T491f36(GE_void(l5), l3, l13);
				l4 = (((T467*)(GE_void(l3)))->a2);
				l11 = (((T485*)(GE_void(l4)))->a1);
				l10 = (T6)(GE_int32(1));
				t1 = (T6f1(&l10, l11));
				while (!(t1)) {
					t2 = (T485f10(GE_void(l4), l10));
					T492f14(GE_void(t2), l13);
					l13 = ((T6)((l13)+((T6)(GE_int32(1)))));
					l10 = ((T6)((l10)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l10, l11));
				}
			}
			l8 = ((T6)((l8)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l8, l9));
		}
		l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l6, l7));
	}
}

/* LX_NFA_STATE.set_id */
void T492f14(T0* C, T6 a1)
{
	((T492*)(C))->a4 = a1;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].force */
void T491f36(T0* C, T0* a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T491f39(C);
	T491f37(C, a2);
	t1 = ((((T491*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T491f40(C, a1, ((T491*)(C))->a1);
	} else {
		t1 = ((((T491*)(C))->a4)==(((T491*)(C))->a5));
		if (t1) {
			t2 = ((T6)((((T491*)(C))->a4)+((T6)(GE_int32(1)))));
			t2 = (T491f33(C, t2));
			T491f41(C, t2);
			l2 = (T491f21(C, a2));
		} else {
			l2 = ((T491*)(C))->a6;
		}
		l1 = ((T491*)(C))->a7;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T491*)(C))->a8 = ((T6)((((T491*)(C))->a8)+((T6)(GE_int32(1)))));
			l1 = ((T491*)(C))->a8;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T491f28(C, l1));
			((T491*)(C))->a7 = ((T6)((t2)-(t3)));
		}
		t2 = (T491f29(C, l2));
		T491f42(C, t2, l1);
		T491f43(C, l1, l2);
		T491f40(C, a1, l1);
		T491f44(C, a2, l1);
		((T491*)(C))->a4 = ((T6)((((T491*)(C))->a4)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].key_storage_put */
void T491f44(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T491*)(C))->a16)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].slots_put */
void T491f43(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T491*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].clashes_put */
void T491f42(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T491*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].slots_item */
T6 T491f29(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T491*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].clashes_item */
T6 T491f28(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T491*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].hash_position */
T6 T491f21(T0* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = (EIF_TRUE);
	if (t1) {
		t2 = (T6f24(&a1));
		R = ((T6)((t2)%(((T491*)(C))->a9)));
	} else {
		R = ((T491*)(C))->a9;
	}
	return R;
}

/* INTEGER_32.hash_code */
T6 T6f24(T6* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (*C);
	R = (T6f25(&t1, (T6)(GE_int32(0x7FFFFFFF))));
	return R;
}

/* INTEGER_32.infix "&" */
T6 T6f25(T6* C, T6 a1)
{
	T6 R = 0;
	R = ((T6)((*C)&(a1)));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].resize */
void T491f41(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T491f39(C);
	l1 = (T491f24(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T491f46(C, t1);
	l2 = ((T491*)(C))->a9;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T491f43(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T491*)(C))->a9 = l1;
	l2 = ((T491*)(C))->a8;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T491f28(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t1 = (T491f20(C, l2));
			l3 = (T491f21(C, t1));
			t1 = (T491f29(C, l3));
			T491f42(C, t1, l2);
			T491f43(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T491f47(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T491f48(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T491f49(C, t1);
	((T491*)(C))->a5 = a1;
	((T491*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].clashes_resize */
void T491f49(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T491f31(C));
	((T491*)(C))->a14 = (T65f1(GE_void(t1), ((T491*)(C))->a14, a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].special_integer_ */
T0* T491f31(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].key_storage_resize */
void T491f48(T0* C, T6 a1)
{
	((T491*)(C))->a16 = (T65f1(GE_void(((T491*)(C))->a19), ((T491*)(C))->a16, a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].item_storage_resize */
void T491f47(T0* C, T6 a1)
{
	((T491*)(C))->a2 = (T471f2(GE_void(((T491*)(C))->a18), ((T491*)(C))->a2, a1));
}

/* KL_SPECIAL_ROUTINES [LX_NFA].resize */
T0* T471f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T470*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T470f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_NFA].resized_area */
T0* T470f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T470c4(a1);
	t1 = (((T470*)(C))->z1);
	T470f7(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_NFA].copy_data */
void T470f7(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T470f8(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T470*)(a1))->z2[l1]);
			((T470*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_NFA].move_data */
void T470f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T470f9(C, a1, a2, a3);
			} else {
				T470f10(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T470f9(C, a1, a2, a3);
			} else {
				T470f10(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_NFA].overlapping_move */
void T470f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T470*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T470*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T470*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T470*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_NFA].non_overlapping_move */
void T470f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T470*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T470*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [LX_NFA].make */
T0* T470c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T470)+a1*sizeof(T0*));
	*(T470*)C = GE_default470;
	((T470*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].key_storage_item */
T6 T491f20(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T491*)(C))->a16)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].slots_resize */
void T491f46(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T491f31(C));
	((T491*)(C))->a15 = (T65f1(GE_void(t1), ((T491*)(C))->a15, a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].new_modulus */
T6 T491f24(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].new_capacity */
T6 T491f33(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].item_storage_put */
void T491f40(T0* C, T0* a1, T6 a2)
{
	((T470*)(GE_void(((T491*)(C))->a2)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].search_position */
void T491f37(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T6 t2;
	T1 t3;
	t1 = (EIF_FALSE);
	if (t1) {
		((T491*)(C))->a1 = (T491f29(C, ((T491*)(C))->a9));
		((T491*)(C))->a6 = ((T491*)(C))->a9;
		((T491*)(C))->a10 = (T6)(GE_int32(0));
	} else {
		l4 = ((T491*)(C))->a3;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T491*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T491f20(C, ((T491*)(C))->a1));
				t3 = (T440f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T440f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T491*)(C))->a6 = (T491f21(C, a1));
				l1 = (T491f29(C, ((T491*)(C))->a6));
				((T491*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T491f20(C, l1));
					t1 = (T440f1(GE_void(l4), a1, t2));
					if (t1) {
						((T491*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T491f28(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T491*)(C))->a10 = l2;
			}
		} else {
			t1 = ((((T491*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T491f20(C, ((T491*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T491*)(C))->a6 = (T491f21(C, a1));
				l1 = (T491f29(C, ((T491*)(C))->a6));
				((T491*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T491f20(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T491*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T491f28(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T491*)(C))->a10 = l2;
			}
		}
	}
}

/* KL_EQUALITY_TESTER [INTEGER_32].test */
T1 T440f1(T0* C, T6 a1, T6 a2)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = (EIF_FALSE);
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = (EIF_FALSE);
			if (t1) {
				R = EIF_FALSE;
			} else {
				t2 = (T440f2(C));
				R = (T82f2(GE_void(t2), GE_boxed6(a1), GE_boxed6(a2)));
			}
		}
	}
	return R;
}

/* KL_ANY_ROUTINES.equal_objects */
T1 T82f2(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((a1)==(EIF_VOID));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = ((a2)==(EIF_VOID));
			if (t1) {
				R = EIF_FALSE;
			} else {
				t1 = (T82f1(C, a1, a2));
				if (t1) {
					R = (T19x29T0(GE_void(a1), a2));
				}
			}
		}
	}
	return R;
}

/* KL_EQUALITY_TESTER [INTEGER_32].any_ */
T0* T440f2(T0* C)
{
	T0* R = 0;
	if (ge166os1789) {
		return ge166ov1789;
	} else {
		ge166os1789 = '\1';
	}
	R = T82c3();
	ge166ov1789 = R;
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].unset_found_item */
void T491f39(T0* C)
{
	((T491*)(C))->a13 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].item */
T0* T491f22(T0* C, T6 a1)
{
	T0* R = 0;
	T491f37(C, a1);
	R = (T491f32(C, ((T491*)(C))->a1));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].item_storage_item */
T0* T491f32(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T470*)(GE_void(((T491*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].has */
T1 T491f23(T0* C, T6 a1)
{
	T1 R = 0;
	T491f37(C, a1);
	R = ((((T491*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make */
T0* T491c35(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T491));
	*(T491*)C = GE_default491;
	((T491*)(C))->a3 = T440c3();
	T491f38(C, a1, EIF_VOID, ((T491*)(C))->a3);
	return C;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_with_equality_testers */
void T491f38(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T491*)(C))->a11 = a2;
	((T491*)(C))->a3 = a3;
	T491f45(C, a1);
	((T491*)(C))->a12 = T538c5(C);
}

/* DS_SPARSE_TABLE_KEYS [LX_NFA, INTEGER_32].make */
T0* T538c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T538));
	*(T538*)C = GE_default538;
	((T538*)(C))->a1 = a1;
	((T538*)(C))->a2 = (((T491*)(GE_void(((T538*)(C))->a1)))->a3);
	((T538*)(C))->a3 = (T538f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [LX_NFA, INTEGER_32].new_cursor */
T0* T538f4(T0* C)
{
	T0* R = 0;
	R = T554c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [LX_NFA, INTEGER_32].make */
T0* T554c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T554));
	*(T554*)C = GE_default554;
	((T554*)(C))->a1 = a1;
	t1 = (((T538*)(GE_void(((T554*)(C))->a1)))->a1);
	((T554*)(C))->a2 = (T491f30(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].new_cursor */
T0* T491f30(T0* C)
{
	T0* R = 0;
	R = T540c3(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_NFA, INTEGER_32].make */
T0* T540c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T540));
	*(T540*)C = GE_default540;
	((T540*)(C))->a1 = a1;
	((T540*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_sparse_container */
void T491f45(T0* C, T6 a1)
{
	T6 t1;
	((T491*)(C))->a5 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T491f50(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T491f51(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T491f52(C, t1);
	((T491*)(C))->a9 = (T491f24(C, a1));
	t1 = ((T6)((((T491*)(C))->a9)+((T6)(GE_int32(1)))));
	T491f53(C, t1);
	((T491*)(C))->a8 = (T6)(GE_int32(0));
	((T491*)(C))->a7 = (T6)(GE_int32(0));
	((T491*)(C))->a1 = (T6)(GE_int32(0));
	T491f39(C);
	((T491*)(C))->a17 = (T491f30(C));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_slots */
void T491f53(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T491f31(C));
	((T491*)(C))->a15 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_clashes */
void T491f52(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T491f31(C));
	((T491*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_key_storage */
void T491f51(T0* C, T6 a1)
{
	((T491*)(C))->a19 = T65c4();
	((T491*)(C))->a16 = (T65f2(GE_void(((T491*)(C))->a19), a1));
}

/* DS_HASH_TABLE [LX_NFA, INTEGER_32].make_item_storage */
void T491f50(T0* C, T6 a1)
{
	((T491*)(C))->a18 = T471c3();
	((T491*)(C))->a2 = (T471f1(GE_void(((T491*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [LX_NFA].make */
T0* T471f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T521c2(a1);
	R = (((T521*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_NFA].make_area */
T0* T521c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T521));
	*(T521*)C = GE_default521;
	((T521*)(C))->a1 = T470c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_NFA].default_create */
T0* T471c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T471));
	*(T471*)C = GE_default471;
	return C;
}

/* KL_EQUALITY_TESTER [INTEGER_32].default_create */
T0* T440c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T440));
	*(T440*)C = GE_default440;
	return C;
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].make */
T0* T486c8(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T486));
	*(T486*)C = GE_default486;
	((T486*)(C))->a4 = T532c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T486*)(C))->a3 = (T532f1(GE_void(((T486*)(C))->a4), t1));
	((T486*)(C))->a2 = a1;
	((T486*)(C))->a5 = (T486f7(C));
	return C;
}

/* DS_ARRAYED_LIST [LX_DFA_STATE].new_cursor */
T0* T486f7(T0* C)
{
	T0* R = 0;
	R = T533c2(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_DFA_STATE].make */
T0* T533c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T533));
	*(T533*)C = GE_default533;
	((T533*)(C))->a1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_DFA_STATE].make */
T0* T532f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T553c2(a1);
	R = (((T553*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_DFA_STATE].make_area */
T0* T553c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T553));
	*(T553*)C = GE_default553;
	((T553*)(C))->a1 = T531c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_DFA_STATE].default_create */
T0* T532c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T532));
	*(T532*)C = GE_default532;
	return C;
}

/* ARRAY [INTEGER_32].item */
T6 T192f4(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)-(((T192*)(C))->a2)));
	R = (((T63*)(GE_void(((T192*)(C))->a1)))->z2[t1]);
	return R;
}

/* LX_EQUIVALENCE_CLASSES.to_array */
T0* T468f6(T0* C, T6 a1, T6 a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	R = T192c9(a1, a2);
	t1 = (T468f4(C));
	l2 = (T6f18(&t1, a2));
	t1 = (T468f5(C));
	l1 = (T6f10(&t1, a1));
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T518f4(GE_void(((T468*)(C))->a2), l1));
		t1 = (((T516*)(GE_void(t3)))->a1);
		T192f12(GE_void(R), t1, l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	return R;
}

/* LX_EQUIVALENCE_CLASSES.lower */
T6 T468f5(T0* C)
{
	T6 R = 0;
	R = (((T518*)(GE_void(((T468*)(C))->a2)))->a2);
	return R;
}

/* INTEGER_32.min */
T6 T6f18(T6* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	t1 = (T6f9(C, a1));
	if (t1) {
		R = *C;
	} else {
		R = a1;
	}
	return R;
}

/* LX_EQUIVALENCE_CLASSES.upper */
T6 T468f4(T0* C)
{
	T6 R = 0;
	R = (((T518*)(GE_void(((T468*)(C))->a2)))->a3);
	return R;
}

/* LX_EQUIVALENCE_CLASSES.built */
T1 T468f3(T0* C)
{
	T1 R = 0;
	R = ((((T468*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* LX_FULL_DFA.build_eof_rules */
void T437f42(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	((T437*)(C))->a32 = T483c4(a2, a3);
	l2 = (((T459*)(GE_void(a1)))->a1);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T459f6(GE_void(a1), l1));
		t2 = (((T469*)(GE_void(l3)))->a1);
		T483f5(GE_void(((T437*)(C))->a32), l3, t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* ARRAY [LX_RULE].put */
void T483f5(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T483*)(C))->a2)));
	((T482*)(GE_void(((T483*)(C))->a1)))->z2[t1] = (a1);
}

/* ARRAY [LX_RULE].make */
T0* T483c4(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T483));
	*(T483*)C = GE_default483;
	((T483*)(C))->a2 = a1;
	((T483*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T483f6(C, t2);
	} else {
		T483f6(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [LX_RULE].make_area */
void T483f6(T0* C, T6 a1)
{
	((T483*)(C))->a1 = T482c4(a1);
}

/* ARRAY [STRING_8].count */
T6 T33f10(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T33*)(C))->a3)-(((T33*)(C))->a2)));
	R = ((T6)((t1)+((T6)(GE_int32(1)))));
	return R;
}

/* LX_FULL_DFA.build_rules */
void T437f41(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (((T459*)(GE_void(a1)))->a1);
	((T437*)(C))->a21 = T483c4((T6)(GE_int32(1)), l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T459f6(GE_void(a1), l1));
		T483f5(GE_void(((T437*)(C))->a21), t2, l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* LX_START_CONDITIONS.names */
T0* T460f8(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	l2 = ((T460*)(C))->a1;
	t1 = ((T6)((l2)-((T6)(GE_int32(1)))));
	R = T33c11((T6)(GE_int32(0)), t1);
	l1 = (T6)(GE_int32(1));
	t2 = (T6f1(&l1, l2));
	while (!(t2)) {
		t3 = (T460f7(C, l1));
		t3 = (((T488*)(GE_void(t3)))->a1);
		t1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		T33f12(GE_void(R), t3, t1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (T6f1(&l1, l2));
	}
	return R;
}

/* ARRAY [STRING_8].put */
void T33f12(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T33*)(C))->a2)));
	((T32*)(GE_void(((T33*)(C))->a1)))->z2[t1] = (a1);
}

/* ARRAY [STRING_8].make */
T0* T33c11(T6 a1, T6 a2)
{
	T0* C;
	T1 t1;
	T6 t2;
	C = (T0*)GE_alloc(sizeof(T33));
	*(T33*)C = GE_default33;
	((T33*)(C))->a2 = a1;
	((T33*)(C))->a3 = a2;
	t1 = (T6f9(&a1, a2));
	if (t1) {
		t2 = ((T6)((a2)-(a1)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T33f13(C, t2);
	} else {
		T33f13(C, (T6)(GE_int32(0)));
	}
	return C;
}

/* ARRAY [STRING_8].make_area */
void T33f13(T0* C, T6 a1)
{
	((T33*)(C))->a1 = T32c6(a1);
}

/* LX_WILDCARD_PARSER.parse_string */
void T435f220(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T435f120(C, a1));
	T435f223(C, t1);
	T435f224(C);
}

/* LX_WILDCARD_PARSER.parse */
void T435f224(T0* C)
{
	GE_rescue r;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	if (GE_setjmp(r.jb) != 0) {
		T435f232(C);
		T435f238(C);
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((((T435*)(C))->a22)==((T6)(GE_int32(105))));
	if (t1) {
		l1 = ((T435*)(C))->a23;
		l2 = ((T435*)(C))->a24;
		l3 = ((T435*)(C))->a25;
		l4 = ((T435*)(C))->a26;
		l5 = ((T435*)(C))->a27;
		l6 = ((T435*)(C))->a28;
		l7 = ((T435*)(C))->a29;
		((T435*)(C))->a22 = (T6)(GE_int32(104));
	} else {
		((T435*)(C))->a30 = (T6)(GE_int32(0));
		((T435*)(C))->a31 = EIF_TRUE;
		((T435*)(C))->a32 = (T6)(GE_int32(0));
		T435f229(C);
		((T435*)(C))->a33 = (T6)(GE_int32(-1));
		l1 = (((T63*)(GE_void(((T435*)(C))->a16)))->z1);
		((T435*)(C))->a22 = (T6)(GE_int32(104));
		l7 = (T6)(GE_int32(1));
	}
	t1 = ((((T435*)(C))->a22)!=((T6)(GE_int32(104))));
	while (!(t1)) {
		switch (l7) {
		case (T6)(T6)(GE_int32(1)):
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)+((T6)(GE_int32(1)))));
			t1 = (T6f5(&(((T435*)(C))->a33), l1));
			if (t1) {
				l1 = ((T6)((l1)+((T6)(GE_int32(200)))));
				t2 = (T435f160(C));
				((T435*)(C))->a16 = (T65f1(GE_void(t2), ((T435*)(C))->a16, l1));
			}
			((T63*)(GE_void(((T435*)(C))->a16)))->z2[((T435*)(C))->a33] = (l2);
			l3 = (((T63*)(GE_void(((T435*)(C))->a34)))->z2[l2]);
			t1 = ((l3)==((T6)(GE_int32(-32768))));
			if (t1) {
				l7 = (T6)(GE_int32(2));
			} else {
				if (((T435*)(C))->a31) {
					T435f230(C);
					((T435*)(C))->a31 = EIF_FALSE;
				}
				t1 = (T6f1(&(((T435*)(C))->a35), (T6)(GE_int32(0))));
				if (t1) {
					t1 = (T6f9(&(((T435*)(C))->a35), (T6)(GE_int32(261))));
					if (t1) {
						l4 = (((T63*)(GE_void(((T435*)(C))->a36)))->z2[((T435*)(C))->a35]);
					} else {
						l4 = (T6)(GE_int32(29));
					}
					l3 = ((T6)((l3)+(l4)));
				} else {
					t1 = ((((T435*)(C))->a35)==((T6)(GE_int32(0))));
					if (t1) {
						l4 = (T6)(GE_int32(0));
					} else {
						((T435*)(C))->a30 = ((T6)((((T435*)(C))->a30)+((T6)(GE_int32(1)))));
						T435f231(C, l2);
						T435f232(C);
						l3 = (T6)(GE_int32(-1));
					}
				}
				t1 = ((T1)((l3)<((T6)(GE_int32(0)))));
				if (!(t1)) {
					t1 = (T6f1(&l3, (T6)(GE_int32(56))));
				}
				if (!(t1)) {
					t3 = (((T63*)(GE_void(((T435*)(C))->a37)))->z2[l3]);
					t1 = ((t3)!=(l4));
				}
				if (t1) {
					l7 = (T6)(GE_int32(2));
				} else {
					l3 = (((T63*)(GE_void(((T435*)(C))->a38)))->z2[l3]);
					t1 = ((T1)((l3)<((T6)(GE_int32(0)))));
					if (t1) {
						t1 = ((l3)==((T6)(GE_int32(-32768))));
						if (t1) {
							l7 = (T6)(GE_int32(4));
						} else {
							l3 = ((T6)(-(l3)));
							l7 = (T6)(GE_int32(3));
						}
					} else {
						t1 = ((l3)==((T6)(GE_int32(0))));
						if (t1) {
							l7 = (T6)(GE_int32(4));
						} else {
							t1 = ((l3)==((T6)(GE_int32(49))));
							if (t1) {
								T435f233(C);
							} else {
								t1 = (T6f1(&(((T435*)(C))->a35), (T6)(GE_int32(0))));
								if (t1) {
									((T435*)(C))->a31 = EIF_TRUE;
								}
								T435f234(C, l4);
								t1 = ((((T435*)(C))->a32)!=((T6)(GE_int32(0))));
								if (t1) {
									((T435*)(C))->a32 = ((T6)((((T435*)(C))->a32)-((T6)(GE_int32(1)))));
								}
								l2 = l3;
							}
						}
					}
				}
			}
			break;
		case (T6)(T6)(GE_int32(2)):
			l3 = (((T63*)(GE_void(((T435*)(C))->a39)))->z2[l2]);
			t1 = ((l3)==((T6)(GE_int32(0))));
			if (t1) {
				l7 = (T6)(GE_int32(4));
			} else {
				l7 = (T6)(GE_int32(3));
			}
			break;
		case (T6)(T6)(GE_int32(3)):
			T435f235(C, l3);
			switch (((T435*)(C))->a22) {
			case (T6)(T6)(GE_int32(104)):
				l3 = (((T63*)(GE_void(((T435*)(C))->a40)))->z2[l3]);
				l6 = (((T63*)(GE_void(((T435*)(C))->a16)))->z2[((T435*)(C))->a33]);
				l5 = ((T6)((l3)-((T6)(GE_int32(19)))));
				t3 = (((T63*)(GE_void(((T435*)(C))->a41)))->z2[l5]);
				l2 = ((T6)((t3)+(l6)));
				t1 = (T6f5(&l2, (T6)(GE_int32(0))));
				if (t1) {
					t1 = (T6f9(&l2, (T6)(GE_int32(56))));
				}
				if (t1) {
					t3 = (((T63*)(GE_void(((T435*)(C))->a37)))->z2[l2]);
					t1 = ((t3)==(l6));
				}
				if (t1) {
					l2 = (((T63*)(GE_void(((T435*)(C))->a38)))->z2[l2]);
				} else {
					l2 = (((T63*)(GE_void(((T435*)(C))->a42)))->z2[l5]);
				}
				l7 = (T6)(GE_int32(1));
				break;
			case (T6)(T6)(GE_int32(105)):
				((T435*)(C))->a23 = l1;
				((T435*)(C))->a24 = l2;
				((T435*)(C))->a25 = l3;
				((T435*)(C))->a26 = l4;
				((T435*)(C))->a27 = l5;
				((T435*)(C))->a28 = l6;
				((T435*)(C))->a29 = l7;
				break;
			case (T6)(T6)(GE_int32(103)):
				((T435*)(C))->a22 = (T6)(GE_int32(104));
				l7 = (T6)(GE_int32(4));
				break;
			default:
				break;
			}
			break;
		case (T6)(T6)(GE_int32(4)):
			t1 = ((((T435*)(C))->a32)==((T6)(GE_int32(3))));
			if (t1) {
				t1 = (T6f9(&(((T435*)(C))->a35), (T6)(GE_int32(0))));
				if (t1) {
					T435f232(C);
				} else {
					((T435*)(C))->a31 = EIF_TRUE;
					l7 = (T6)(GE_int32(5));
				}
			} else {
				t1 = ((((T435*)(C))->a32)==((T6)(GE_int32(0))));
				if (t1) {
					((T435*)(C))->a30 = ((T6)((((T435*)(C))->a30)+((T6)(GE_int32(1)))));
					T435f231(C, l2);
				}
				((T435*)(C))->a32 = (T6)(GE_int32(3));
				l7 = (T6)(GE_int32(5));
			}
			break;
		case (T6)(T6)(GE_int32(5)):
			l3 = (((T63*)(GE_void(((T435*)(C))->a34)))->z2[l2]);
			t1 = ((l3)==((T6)(GE_int32(-32768))));
			if (t1) {
				l7 = (T6)(GE_int32(6));
			} else {
				l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
				t1 = ((T1)((l3)<((T6)(GE_int32(0)))));
				if (!(t1)) {
					t1 = (T6f1(&l3, (T6)(GE_int32(56))));
				}
				if (!(t1)) {
					t3 = (((T63*)(GE_void(((T435*)(C))->a37)))->z2[l3]);
					t1 = ((t3)!=((T6)(GE_int32(1))));
				}
				if (t1) {
					l7 = (T6)(GE_int32(6));
				} else {
					l3 = (((T63*)(GE_void(((T435*)(C))->a38)))->z2[l3]);
					t1 = ((T1)((l3)<((T6)(GE_int32(0)))));
					if (t1) {
						t1 = ((l3)==((T6)(GE_int32(-32768))));
						if (t1) {
							l7 = (T6)(GE_int32(6));
						} else {
							l3 = ((T6)(-(l3)));
							l7 = (T6)(GE_int32(3));
						}
					} else {
						t1 = ((l3)==((T6)(GE_int32(0))));
						if (t1) {
							l7 = (T6)(GE_int32(6));
						} else {
							t1 = ((l3)==((T6)(GE_int32(49))));
							if (t1) {
								T435f233(C);
							} else {
								T435f236(C);
								l2 = l3;
								l7 = (T6)(GE_int32(1));
							}
						}
					}
				}
			}
			break;
		case (T6)(T6)(GE_int32(6)):
			t1 = ((((T435*)(C))->a33)==((T6)(GE_int32(0))));
			if (t1) {
				T435f232(C);
			} else {
				T435f237(C, l2);
				((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
				l2 = (((T63*)(GE_void(((T435*)(C))->a16)))->z2[((T435*)(C))->a33]);
				l7 = (T6)(GE_int32(5));
			}
			break;
		default:
			break;
		}
		t1 = ((((T435*)(C))->a22)!=((T6)(GE_int32(104))));
	}
	t1 = ((((T435*)(C))->a22)!=((T6)(GE_int32(105))));
	if (t1) {
		T435f238(C);
	}
	GE_last_rescue = r.previous;
}

/* LX_WILDCARD_PARSER.yy_pop_last_value */
void T435f237(T0* C, T6 a1)
{
	T6 l1 = 0;
	l1 = (((T63*)(GE_void(((T435*)(C))->a43)))->z2[a1]);
	switch (l1) {
	case (T6)(T6)(GE_int32(1)):
		((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
		break;
	case (T6)(T6)(GE_int32(2)):
		((T435*)(C))->a47 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(1)))));
		break;
	case (T6)(T6)(GE_int32(3)):
		((T435*)(C))->a48 = ((T6)((((T435*)(C))->a48)-((T6)(GE_int32(1)))));
		break;
	case (T6)(T6)(GE_int32(4)):
		((T435*)(C))->a49 = ((T6)((((T435*)(C))->a49)-((T6)(GE_int32(1)))));
		break;
	case (T6)(T6)(GE_int32(5)):
		((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)-((T6)(GE_int32(1)))));
		break;
	default:
		T435f232(C);
		break;
	}
}

/* LX_WILDCARD_PARSER.yy_push_error_value */
void T435f236(T0* C)
{
	T0* l1 = 0;
	T1 t1;
	((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)+((T6)(GE_int32(1)))));
	t1 = (T6f5(&(((T435*)(C))->a46), ((T435*)(C))->a77));
	if (t1) {
		t1 = ((((T435*)(C))->a78)==(EIF_VOID));
		if (t1) {
			((T435*)(C))->a79 = T137c3();
			((T435*)(C))->a77 = (T6)(GE_int32(10));
			((T435*)(C))->a78 = (T137f1(GE_void(((T435*)(C))->a79), ((T435*)(C))->a77));
		} else {
			((T435*)(C))->a77 = ((T6)((((T435*)(C))->a77)+((T6)(GE_int32(10)))));
			((T435*)(C))->a78 = (T137f2(GE_void(((T435*)(C))->a79), ((T435*)(C))->a78, ((T435*)(C))->a77));
		}
	}
	((T136*)(GE_void(((T435*)(C))->a78)))->z2[((T435*)(C))->a46] = (l1);
}

/* KL_SPECIAL_ROUTINES [ANY].resize */
T0* T137f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T136*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T136f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [ANY].resized_area */
T0* T136f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T136c4(a1);
	t1 = (((T136*)(C))->z1);
	T136f7(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [ANY].copy_data */
void T136f7(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T136f8(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T136*)(a1))->z2[l1]);
			((T136*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [ANY].move_data */
void T136f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T136f9(C, a1, a2, a3);
			} else {
				T136f10(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T136f9(C, a1, a2, a3);
			} else {
				T136f10(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [ANY].overlapping_move */
void T136f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T136*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T136*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T136*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T136*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [ANY].non_overlapping_move */
void T136f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T136*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T136*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [ANY].make */
T0* T136c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T136)+a1*sizeof(T0*));
	*(T136*)C = GE_default136;
	((T136*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [ANY].make */
T0* T137f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T219c2(a1);
	R = (((T219*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [ANY].make_area */
T0* T219c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T219));
	*(T219*)C = GE_default219;
	((T219*)(C))->a1 = T136c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [ANY].default_create */
T0* T137c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T137));
	*(T137*)C = GE_default137;
	return C;
}

/* LX_WILDCARD_PARSER.yy_do_action */
void T435f235(T0* C, T6 a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	switch (a1) {
	case (T6)(T6)(GE_int32(1)):
		t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a1);
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			T435f247(C);
		}
		T435f248(C);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(2)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
			((T136*)(GE_void(((T435*)(C))->a78)))->z2[((T435*)(C))->a46] = (l1);
		}
		break;
	case (T6)(T6)(GE_int32(2)):
		t2 = (((T436*)(GE_void(((T435*)(C))->a11)))->a2);
		if (t2) {
			T436f33(GE_void(((T435*)(C))->a11));
		}
		((T435*)(C))->a93 = EIF_FALSE;
		((T435*)(C))->a94 = T469c14((T6)(GE_int32(1)));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(0)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)+((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a46), ((T435*)(C))->a77));
			if (t2) {
				t2 = ((((T435*)(C))->a78)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a79 = T137c3();
					((T435*)(C))->a77 = (T6)(GE_int32(10));
					((T435*)(C))->a78 = (T137f1(GE_void(((T435*)(C))->a79), ((T435*)(C))->a77));
				} else {
					((T435*)(C))->a77 = ((T6)((((T435*)(C))->a77)+((T6)(GE_int32(10)))));
					((T435*)(C))->a78 = (T137f2(GE_void(((T435*)(C))->a79), ((T435*)(C))->a78, ((T435*)(C))->a77));
				}
			}
			((T136*)(GE_void(((T435*)(C))->a78)))->z2[((T435*)(C))->a46] = (l1);
		}
		break;
	case (T6)(T6)(GE_int32(3)):
		t1 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		T435f249(C, t1);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)+((T6)(GE_int32(1)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a46), ((T435*)(C))->a77));
			if (t2) {
				t2 = ((((T435*)(C))->a78)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a79 = T137c3();
					((T435*)(C))->a77 = (T6)(GE_int32(10));
					((T435*)(C))->a78 = (T137f1(GE_void(((T435*)(C))->a79), ((T435*)(C))->a77));
				} else {
					((T435*)(C))->a77 = ((T6)((((T435*)(C))->a77)+((T6)(GE_int32(10)))));
					((T435*)(C))->a78 = (T137f2(GE_void(((T435*)(C))->a79), ((T435*)(C))->a78, ((T435*)(C))->a77));
				}
			}
			((T136*)(GE_void(((T435*)(C))->a78)))->z2[((T435*)(C))->a46] = (l1);
		}
		break;
	case (T6)(T6)(GE_int32(4)):
		T435f250(C);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T136*)(GE_void(((T435*)(C))->a78)))->z2[((T435*)(C))->a46] = (l1);
		}
		break;
	case (T6)(T6)(GE_int32(5)):
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		((T435*)(C))->a96 = EIF_FALSE;
		((T435*)(C))->a97 = (T6)(GE_int32(-1));
		((T435*)(C))->a98 = (T6)(GE_int32(-1));
		((T435*)(C))->a99 = (T6)(GE_int32(-1));
		((T435*)(C))->a100 = (T6)(GE_int32(0));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(6)):
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(7)):
		t3 = ((T6)((((T435*)(C))->a50)-((T6)(GE_int32(1)))));
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[t3]);
		t1 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		T467f7(GE_void(l2), t1);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(3)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)-((T6)(GE_int32(1)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(8)):
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(9)):
		t3 = ((T6)((((T435*)(C))->a50)-((T6)(GE_int32(1)))));
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[t3]);
		t1 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		T467f8(GE_void(l2), t1);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(2)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(10)):
		t3 = (((T63*)(GE_void(((T435*)(C))->a82)))->z2[((T435*)(C))->a47]);
		l2 = (T435f159(C, t3));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)+((T6)(GE_int32(1)))));
			((T435*)(C))->a47 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a50), ((T435*)(C))->a101));
			if (t2) {
				t2 = ((((T435*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a102 = T471c3();
					((T435*)(C))->a101 = (T6)(GE_int32(10));
					((T435*)(C))->a95 = (T471f1(GE_void(((T435*)(C))->a102), ((T435*)(C))->a101));
				} else {
					((T435*)(C))->a101 = ((T6)((((T435*)(C))->a101)+((T6)(GE_int32(10)))));
					((T435*)(C))->a95 = (T471f2(GE_void(((T435*)(C))->a102), ((T435*)(C))->a95, ((T435*)(C))->a101));
				}
			}
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(11)):
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		T467f9(GE_void(l2));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(3)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(2)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(12)):
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		T467f10(GE_void(l2));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(4)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(3)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(13)):
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		T467f11(GE_void(l2));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(4)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(3)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(14)):
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(4)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(3)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(15)):
		t1 = (T435f162(C));
		l2 = (T435f163(C, t1));
		T467f9(GE_void(l2));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)+((T6)(GE_int32(1)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a50), ((T435*)(C))->a101));
			if (t2) {
				t2 = ((((T435*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a102 = T471c3();
					((T435*)(C))->a101 = (T6)(GE_int32(10));
					((T435*)(C))->a95 = (T471f1(GE_void(((T435*)(C))->a102), ((T435*)(C))->a101));
				} else {
					((T435*)(C))->a101 = ((T6)((((T435*)(C))->a101)+((T6)(GE_int32(10)))));
					((T435*)(C))->a95 = (T471f2(GE_void(((T435*)(C))->a102), ((T435*)(C))->a95, ((T435*)(C))->a101));
				}
			}
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(16)):
		t1 = (T435f162(C));
		l2 = (T435f163(C, t1));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)+((T6)(GE_int32(1)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a50), ((T435*)(C))->a101));
			if (t2) {
				t2 = ((((T435*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a102 = T471c3();
					((T435*)(C))->a101 = (T6)(GE_int32(10));
					((T435*)(C))->a95 = (T471f1(GE_void(((T435*)(C))->a102), ((T435*)(C))->a101));
				} else {
					((T435*)(C))->a101 = ((T6)((((T435*)(C))->a101)+((T6)(GE_int32(10)))));
					((T435*)(C))->a95 = (T471f2(GE_void(((T435*)(C))->a102), ((T435*)(C))->a95, ((T435*)(C))->a101));
				}
			}
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(17)):
		t1 = (T435f162(C));
		l2 = (T435f163(C, t1));
		T467f10(GE_void(l2));
		t1 = (T435f159(C, (T6)(GE_int32(47))));
		T467f8(GE_void(l2), t1);
		T467f9(GE_void(l2));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)+((T6)(GE_int32(1)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a50), ((T435*)(C))->a101));
			if (t2) {
				t2 = ((((T435*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a102 = T471c3();
					((T435*)(C))->a101 = (T6)(GE_int32(10));
					((T435*)(C))->a95 = (T471f1(GE_void(((T435*)(C))->a102), ((T435*)(C))->a101));
				} else {
					((T435*)(C))->a101 = ((T6)((((T435*)(C))->a101)+((T6)(GE_int32(10)))));
					((T435*)(C))->a95 = (T471f2(GE_void(((T435*)(C))->a102), ((T435*)(C))->a95, ((T435*)(C))->a101));
				}
			}
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(18)):
		t1 = (((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48]);
		l2 = (T435f163(C, t1));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)+((T6)(GE_int32(1)))));
			((T435*)(C))->a48 = ((T6)((((T435*)(C))->a48)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a50), ((T435*)(C))->a101));
			if (t2) {
				t2 = ((((T435*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a102 = T471c3();
					((T435*)(C))->a101 = (T6)(GE_int32(10));
					((T435*)(C))->a95 = (T471f1(GE_void(((T435*)(C))->a102), ((T435*)(C))->a101));
				} else {
					((T435*)(C))->a101 = ((T6)((((T435*)(C))->a101)+((T6)(GE_int32(10)))));
					((T435*)(C))->a95 = (T471f2(GE_void(((T435*)(C))->a102), ((T435*)(C))->a95, ((T435*)(C))->a101));
				}
			}
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(19)):
		t1 = (((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48]);
		l2 = (T435f165(C, t1));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)+((T6)(GE_int32(1)))));
			((T435*)(C))->a48 = ((T6)((((T435*)(C))->a48)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a50), ((T435*)(C))->a101));
			if (t2) {
				t2 = ((((T435*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a102 = T471c3();
					((T435*)(C))->a101 = (T6)(GE_int32(10));
					((T435*)(C))->a95 = (T471f1(GE_void(((T435*)(C))->a102), ((T435*)(C))->a101));
				} else {
					((T435*)(C))->a101 = ((T6)((((T435*)(C))->a101)+((T6)(GE_int32(10)))));
					((T435*)(C))->a95 = (T471f2(GE_void(((T435*)(C))->a102), ((T435*)(C))->a95, ((T435*)(C))->a101));
				}
			}
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(20)):
		l2 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(3)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(2)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(21)):
		l3 = (((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48]);
		t1 = (((T32*)(GE_void(((T435*)(C))->a90)))->z2[((T435*)(C))->a49]);
		T463f42(GE_void(((T435*)(C))->a14), l3, t1);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(3)))));
			((T435*)(C))->a49 = ((T6)((((T435*)(C))->a49)-((T6)(GE_int32(1)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
			((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(22)):
		l3 = (((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48]);
		T464f20(GE_void(l3), EIF_TRUE);
		t1 = (((T32*)(GE_void(((T435*)(C))->a90)))->z2[((T435*)(C))->a49]);
		T463f42(GE_void(((T435*)(C))->a14), l3, t1);
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(4)))));
			((T435*)(C))->a49 = ((T6)((((T435*)(C))->a49)-((T6)(GE_int32(1)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(2)))));
			((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(23)):
		t3 = (((T63*)(GE_void(((T435*)(C))->a82)))->z2[((T435*)(C))->a47]);
		t1 = (T435f166(C));
		l3 = (T435f167(C, t3, t1));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(1)))));
			((T435*)(C))->a48 = ((T6)((((T435*)(C))->a48)+((T6)(GE_int32(1)))));
			((T435*)(C))->a47 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a48), ((T435*)(C))->a85));
			if (t2) {
				t2 = ((((T435*)(C))->a86)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a87 = T466c3();
					((T435*)(C))->a85 = (T6)(GE_int32(10));
					((T435*)(C))->a86 = (T466f1(GE_void(((T435*)(C))->a87), ((T435*)(C))->a85));
				} else {
					((T435*)(C))->a85 = ((T6)((((T435*)(C))->a85)+((T6)(GE_int32(10)))));
					((T435*)(C))->a86 = (T466f2(GE_void(((T435*)(C))->a87), ((T435*)(C))->a86, ((T435*)(C))->a85));
				}
			}
			((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(24)):
		t3 = (((T63*)(GE_void(((T435*)(C))->a82)))->z2[((T435*)(C))->a47]);
		t1 = (((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48]);
		l3 = (T435f167(C, t3, t1));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(2)))));
			((T435*)(C))->a47 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(1)))));
			((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(25)):
		t3 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(1)))));
		t3 = (((T63*)(GE_void(((T435*)(C))->a82)))->z2[t3]);
		t4 = (((T63*)(GE_void(((T435*)(C))->a82)))->z2[((T435*)(C))->a47]);
		t1 = (T435f166(C));
		l3 = (T435f168(C, t3, t4, t1));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(3)))));
			((T435*)(C))->a48 = ((T6)((((T435*)(C))->a48)+((T6)(GE_int32(1)))));
			((T435*)(C))->a47 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(2)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a48), ((T435*)(C))->a85));
			if (t2) {
				t2 = ((((T435*)(C))->a86)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a87 = T466c3();
					((T435*)(C))->a85 = (T6)(GE_int32(10));
					((T435*)(C))->a86 = (T466f1(GE_void(((T435*)(C))->a87), ((T435*)(C))->a85));
				} else {
					((T435*)(C))->a85 = ((T6)((((T435*)(C))->a85)+((T6)(GE_int32(10)))));
					((T435*)(C))->a86 = (T466f2(GE_void(((T435*)(C))->a87), ((T435*)(C))->a86, ((T435*)(C))->a85));
				}
			}
			((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(26)):
		t3 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(1)))));
		t3 = (((T63*)(GE_void(((T435*)(C))->a82)))->z2[t3]);
		t4 = (((T63*)(GE_void(((T435*)(C))->a82)))->z2[((T435*)(C))->a47]);
		t1 = (((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48]);
		l3 = (T435f168(C, t3, t4, t1));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(4)))));
			((T435*)(C))->a47 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(2)))));
			((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)-((T6)(GE_int32(1)))));
			((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48] = (l3);
		}
		break;
	case (T6)(T6)(GE_int32(27)):
		l2 = (T435f169(C));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(0)))));
			((T435*)(C))->a50 = ((T6)((((T435*)(C))->a50)+((T6)(GE_int32(1)))));
			t2 = (T6f5(&(((T435*)(C))->a50), ((T435*)(C))->a101));
			if (t2) {
				t2 = ((((T435*)(C))->a95)==(EIF_VOID));
				if (t2) {
					((T435*)(C))->a102 = T471c3();
					((T435*)(C))->a101 = (T6)(GE_int32(10));
					((T435*)(C))->a95 = (T471f1(GE_void(((T435*)(C))->a102), ((T435*)(C))->a101));
				} else {
					((T435*)(C))->a101 = ((T6)((((T435*)(C))->a101)+((T6)(GE_int32(10)))));
					((T435*)(C))->a95 = (T471f2(GE_void(((T435*)(C))->a102), ((T435*)(C))->a95, ((T435*)(C))->a101));
				}
			}
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	case (T6)(T6)(GE_int32(28)):
		t3 = (((T63*)(GE_void(((T435*)(C))->a82)))->z2[((T435*)(C))->a47]);
		t1 = (((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50]);
		l2 = (T435f170(C, t3, t1));
		t2 = ((((T435*)(C))->a22)==((T6)(GE_int32(104))));
		if (t2) {
			((T435*)(C))->a33 = ((T6)((((T435*)(C))->a33)-((T6)(GE_int32(2)))));
			((T435*)(C))->a47 = ((T6)((((T435*)(C))->a47)-((T6)(GE_int32(1)))));
			((T470*)(GE_void(((T435*)(C))->a95)))->z2[((T435*)(C))->a50] = (l2);
		}
		break;
	default:
		T435f232(C);
		break;
	}
}

/* LX_WILDCARD_PARSER.append_character_to_string */
T0* T435f170(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a14);
	if (t1) {
		l4 = (((T436*)(GE_void(((T435*)(C))->a11)))->a1);
		switch (a1) {
		case (T6)65:
		case (T6)66:
		case (T6)67:
		case (T6)68:
		case (T6)69:
		case (T6)70:
		case (T6)71:
		case (T6)72:
		case (T6)73:
		case (T6)74:
		case (T6)75:
		case (T6)76:
		case (T6)77:
		case (T6)78:
		case (T6)79:
		case (T6)80:
		case (T6)81:
		case (T6)82:
		case (T6)83:
		case (T6)84:
		case (T6)85:
		case (T6)86:
		case (T6)87:
		case (T6)88:
		case (T6)89:
		case (T6)90:
			l2 = ((T6)((a1)+((T6)(GE_int32(32)))));
			l1 = (T6f12(&l2));
			t1 = (T463f29(GE_void(((T435*)(C))->a14), l1));
			if (t1) {
				R = a2;
				t2 = (T463f27(GE_void(((T435*)(C))->a14), l1));
				t2 = (T435f163(C, t2));
				T467f8(GE_void(R), t2);
			} else {
				l3 = T464c18((T6)(GE_int32(2)));
				T464f19(GE_void(l3), a1);
				T464f19(GE_void(l3), l2);
				t1 = ((l4)!=(EIF_VOID));
				if (t1) {
					T468f11(GE_void(l4), l3);
				}
				T463f42(GE_void(((T435*)(C))->a14), l3, l1);
				R = a2;
				t2 = (T435f163(C, l3));
				T467f8(GE_void(R), t2);
			}
			break;
		case (T6)97:
		case (T6)98:
		case (T6)99:
		case (T6)100:
		case (T6)101:
		case (T6)102:
		case (T6)103:
		case (T6)104:
		case (T6)105:
		case (T6)106:
		case (T6)107:
		case (T6)108:
		case (T6)109:
		case (T6)110:
		case (T6)111:
		case (T6)112:
		case (T6)113:
		case (T6)114:
		case (T6)115:
		case (T6)116:
		case (T6)117:
		case (T6)118:
		case (T6)119:
		case (T6)120:
		case (T6)121:
		case (T6)122:
			l1 = (T6f12(&a1));
			t1 = (T463f29(GE_void(((T435*)(C))->a14), l1));
			if (t1) {
				R = a2;
				t2 = (T463f27(GE_void(((T435*)(C))->a14), l1));
				t2 = (T435f163(C, t2));
				T467f8(GE_void(R), t2);
			} else {
				l3 = T464c18((T6)(GE_int32(2)));
				t3 = ((T6)((a1)-((T6)(GE_int32(32)))));
				T464f19(GE_void(l3), t3);
				T464f19(GE_void(l3), a1);
				t1 = ((l4)!=(EIF_VOID));
				if (t1) {
					T468f11(GE_void(l4), l3);
				}
				T463f42(GE_void(((T435*)(C))->a14), l3, l1);
				R = a2;
				t2 = (T435f163(C, l3));
				T467f8(GE_void(R), t2);
			}
			break;
		case (T6)(T6)(GE_int32(0)):
			R = a2;
			t3 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
			t2 = (T435f216(C, t3));
			T467f8(GE_void(R), t2);
			break;
		default:
			R = a2;
			t2 = (T435f216(C, a1));
			T467f8(GE_void(R), t2);
			break;
		}
	} else {
		t1 = ((a1)==((T6)(GE_int32(0))));
		if (t1) {
			R = a2;
			t3 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
			t2 = (T435f216(C, t3));
			T467f8(GE_void(R), t2);
		} else {
			R = a2;
			t2 = (T435f216(C, a1));
			T467f8(GE_void(R), t2);
		}
	}
	return R;
}

/* LX_WILDCARD_PARSER.new_symbol_nfa */
T0* T435f216(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	l3 = (((T436*)(GE_void(((T435*)(C))->a11)))->a1);
	t1 = ((l3)!=(EIF_VOID));
	if (t1) {
		l1 = (T6f12(&a1));
		t1 = (T463f29(GE_void(((T435*)(C))->a14), l1));
		if (t1) {
			t2 = (T463f27(GE_void(((T435*)(C))->a14), l1));
			R = (T435f163(C, t2));
		} else {
			l2 = T464c18((T6)(GE_int32(1)));
			T464f19(GE_void(l2), a1);
			T468f11(GE_void(l3), l2);
			T463f42(GE_void(((T435*)(C))->a14), l2, l1);
			R = (T435f163(C, l2));
		}
	} else {
		R = T467c13(a1, ((T435*)(C))->a93);
	}
	return R;
}

/* LX_NFA.make_symbol */
T0* T467c13(T6 a1, T1 a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T467));
	*(T467*)C = GE_default467;
	((T467*)(C))->a1 = a2;
	((T467*)(C))->a2 = T485c23((T6)(GE_int32(100)));
	l2 = T492c10(a2);
	l3 = T492c10(a2);
	l1 = T515c4(a1, l3);
	T492f11(GE_void(l2), l1);
	T485f25(GE_void(((T467*)(C))->a2), l2);
	T485f24(GE_void(((T467*)(C))->a2), l3);
	return C;
}

/* LX_SYMBOL_TRANSITION [LX_NFA_STATE].make */
T0* T515c4(T6 a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T515));
	*(T515*)C = GE_default515;
	((T515*)(C))->a1 = a1;
	((T515*)(C))->a2 = a2;
	return C;
}

/* LX_EQUIVALENCE_CLASSES.add */
void T468f11(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T1 l9 = 0;
	T1 l10 = 0;
	T6 l11 = 0;
	T0* l12 = 0;
	T6 t1;
	T6 t2;
	T1 t3;
	T1 t4;
	T0* t5;
	l8 = (((T464*)(GE_void(a1)))->a7);
	t1 = (T468f5(C));
	t2 = (T468f4(C));
	l12 = T415c5(t1, t2);
	l7 = (T6)(GE_int32(1));
	t3 = (T6f1(&l7, l8));
	while (!(t3)) {
		t1 = (T464f14(GE_void(a1), l7));
		l1 = (T518f4(GE_void(((T468*)(C))->a2), t1));
		l3 = (((T516*)(GE_void(l1)))->a2);
		l4 = l1;
		l6 = ((T6)((l7)+((T6)(GE_int32(1)))));
		l2 = (((T516*)(GE_void(l1)))->a3);
		t3 = ((l2)==(EIF_VOID));
		while (!(t3)) {
			l5 = (((T516*)(GE_void(l2)))->a1);
			l9 = EIF_FALSE;
			if (!(l9)) {
				t3 = (T6f1(&l6, l8));
			} else {
				t3 = EIF_TRUE;
			}
			while (!(t3)) {
				l11 = (T464f14(GE_void(a1), l6));
				t3 = (T6f1(&l11, l5));
				if (t3) {
					l9 = EIF_TRUE;
				} else {
					t3 = ((l11)==(l5));
					if (t3) {
						t4 = (T415f4(GE_void(l12), l5));
						t3 = ((T1)(!(t4)));
					}
					if (t3) {
						T516f6(GE_void(l4), l2);
						l4 = l2;
						T415f6(GE_void(l12), EIF_TRUE, l6);
						l10 = EIF_TRUE;
						l9 = EIF_TRUE;
					} else {
						l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
					}
				}
				if (!(l9)) {
					t3 = (T6f1(&l6, l8));
				} else {
					t3 = EIF_TRUE;
				}
			}
			t3 = ((T1)(!(l10)));
			if (t3) {
				t3 = ((l3)==(EIF_VOID));
				if (t3) {
					T516f8(GE_void(l2));
				} else {
					T516f6(GE_void(l3), l2);
				}
				l3 = l2;
			} else {
				l10 = EIF_FALSE;
			}
			l2 = (((T516*)(GE_void(l2)))->a3);
			t3 = ((l2)==(EIF_VOID));
		}
		t5 = (((T516*)(GE_void(l1)))->a2);
		t3 = ((t5)!=(EIF_VOID));
		if (!(t3)) {
			t5 = (((T516*)(GE_void(l1)))->a2);
			t3 = ((l3)!=(t5));
		}
		if (t3) {
			T516f8(GE_void(l1));
			T516f7(GE_void(l3));
		}
		T516f7(GE_void(l4));
		l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l7, l8));
		if (!(t3)) {
			t4 = (T415f4(GE_void(l12), l7));
			t3 = ((T1)(!(t4)));
		}
		while (!(t3)) {
			l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
			t3 = (T6f1(&l7, l8));
			if (!(t3)) {
				t4 = (T415f4(GE_void(l12), l7));
				t3 = ((T1)(!(t4)));
			}
		}
		t3 = (T6f1(&l7, l8));
	}
}

/* DS_BILINKABLE [INTEGER_32].forget_right */
void T516f7(T0* C)
{
	((T516*)(C))->a3 = EIF_VOID;
}

/* DS_BILINKABLE [INTEGER_32].forget_left */
void T516f8(T0* C)
{
	((T516*)(C))->a2 = EIF_VOID;
}

/* ARRAY [BOOLEAN].put */
void T415f6(T0* C, T1 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-(((T415*)(C))->a2)));
	((T150*)(GE_void(((T415*)(C))->a1)))->z2[t1] = (a1);
}

/* DS_BILINKABLE [INTEGER_32].put_right */
void T516f6(T0* C, T0* a1)
{
	((T516*)(C))->a3 = a1;
	T516f11(GE_void(a1), C);
}

/* DS_BILINKABLE [INTEGER_32].attach_left */
void T516f11(T0* C, T0* a1)
{
	((T516*)(C))->a2 = a1;
}

/* LX_SYMBOL_CLASS.item */
T6 T464f14(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T464*)(C))->a2)))->z2[a1]);
	return R;
}

/* LX_SYMBOL_CLASS.put */
void T464f19(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	t1 = (T464f10(C, a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t1 = (T464f12(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = (T464f16(C));
			t1 = (T6f1(&t2, a1));
		}
		if (t1) {
			((T464*)(C))->a5 = EIF_TRUE;
		}
		T464f21(C, a1);
	}
}

/* LX_SYMBOL_CLASS.force_last */
void T464f21(T0* C, T6 a1)
{
	T1 t1;
	T6 t2;
	t1 = (T464f11(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T464*)(C))->a7)+((T6)(GE_int32(1)))));
		t2 = (T464f13(C, t2));
		T464f22(C, t2);
	}
	((T464*)(C))->a7 = ((T6)((((T464*)(C))->a7)+((T6)(GE_int32(1)))));
	((T63*)(GE_void(((T464*)(C))->a2)))->z2[((T464*)(C))->a7] = (a1);
}

/* LX_SYMBOL_CLASS.resize */
void T464f22(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T464*)(C))->a2 = (T65f1(GE_void(((T464*)(C))->a1), ((T464*)(C))->a2, t1));
	((T464*)(C))->a3 = a1;
}

/* LX_SYMBOL_CLASS.new_capacity */
T6 T464f13(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* LX_SYMBOL_CLASS.extendible */
T1 T464f11(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T464*)(C))->a7)+(a1)));
	R = (T6f5(&(((T464*)(C))->a3), t1));
	return R;
}

/* LX_SYMBOL_CLASS.last */
T6 T464f16(T0* C)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T464*)(C))->a2)))->z2[((T464*)(C))->a7]);
	return R;
}

/* LX_SYMBOL_CLASS.is_empty */
T1 T464f12(T0* C)
{
	T1 R = 0;
	R = ((((T464*)(C))->a7)==((T6)(GE_int32(0))));
	return R;
}

/* LX_SYMBOL_CLASS.has */
T1 T464f10(T0* C, T6 a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	T6 t2;
	if (((T464*)(C))->a5) {
		R = (T464f15(C, a1));
	} else {
		t1 = (T464f12(C));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = (T464f16(C));
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
			} else {
				t2 = (T464f16(C));
				t1 = (T6f1(&t2, a1));
				if (t1) {
					l1 = (T6)(GE_int32(1));
					if (!(R)) {
						t1 = (l2);
					} else {
						t1 = EIF_TRUE;
					}
					while (!(t1)) {
						t2 = (T464f14(C, l1));
						t1 = ((t2)==(a1));
						if (t1) {
							R = EIF_TRUE;
						} else {
							t2 = (T464f14(C, l1));
							t1 = (T6f1(&t2, a1));
							if (t1) {
								l2 = EIF_TRUE;
							} else {
								l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
							}
						}
						if (!(R)) {
							t1 = (l2);
						} else {
							t1 = EIF_TRUE;
						}
					}
				}
			}
		}
	}
	return R;
}

/* LX_SYMBOL_CLASS.arrayed_has */
T1 T464f15(T0* C, T6 a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T464*)(C))->a7;
	l2 = ((T464*)(C))->a8;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T63*)(GE_void(((T464*)(C))->a2)))->z2[l1]);
			t1 = ((GE_void(l2), t2, a1, (T1)0));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T63*)(GE_void(((T464*)(C))->a2)))->z2[l1]);
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* LX_SYMBOL_CLASS.make */
T0* T464c18(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T464));
	*(T464*)C = GE_default464;
	((T464*)(C))->a1 = T65c4();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T464*)(C))->a2 = (T65f2(GE_void(((T464*)(C))->a1), t1));
	((T464*)(C))->a3 = a1;
	((T464*)(C))->a4 = (T464f9(C));
	return C;
}

/* LX_SYMBOL_CLASS.new_cursor */
T0* T464f9(T0* C)
{
	T0* R = 0;
	R = T509c2(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [INTEGER_32].make */
T0* T509c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T509));
	*(T509*)C = GE_default509;
	((T509*)(C))->a1 = a1;
	return C;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].item */
T0* T463f27(T0* C, T0* a1)
{
	T0* R = 0;
	T463f43(C, a1);
	R = (T463f21(C, ((T463*)(C))->a1));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].item_storage_item */
T0* T463f21(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T465*)(GE_void(((T463*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].search_position */
void T463f43(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T463*)(C))->a1 = (T463f33(C, ((T463*)(C))->a10));
		((T463*)(C))->a7 = ((T463*)(C))->a10;
		((T463*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T463*)(C))->a3;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T463*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T463f22(C, ((T463*)(C))->a1));
				t3 = (T423f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T423f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T463*)(C))->a7 = (T463f24(C, a1));
				l1 = (T463f33(C, ((T463*)(C))->a7));
				((T463*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T463f22(C, l1));
					t1 = (T423f1(GE_void(l4), a1, t2));
					if (t1) {
						((T463*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T463f32(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T463*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T463*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T463f22(C, ((T463*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T463*)(C))->a7 = (T463f24(C, a1));
				l1 = (T463f33(C, ((T463*)(C))->a7));
				((T463*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T463f22(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T463*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T463f32(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T463*)(C))->a11 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].clashes_item */
T6 T463f32(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T463*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].hash_position */
T6 T463f24(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T463*)(C))->a10)));
	} else {
		R = ((T463*)(C))->a10;
	}
	return R;
}

/* KL_STRING_EQUALITY_TESTER.test */
T1 T423f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	t1 = ((a1)==(a2));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t1 = ((a1)==(EIF_VOID));
		if (t1) {
			R = EIF_FALSE;
		} else {
			t1 = ((a2)==(EIF_VOID));
			if (t1) {
				R = EIF_FALSE;
			} else {
				l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
				t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T194*)(a2))->a1));
				t1 = ((t2)==(l2));
				if (t1) {
					R = EIF_TRUE;
					l1 = (T6)(GE_int32(1));
					t1 = (T6f1(&l1, l2));
					while (!(t1)) {
						t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T194f14(a1, l1)));
						t3 = (((((T0*)(GE_void(a2)))->id==17)?T17f12(a2, l1):T194f14(a2, l1)));
						t1 = ((t2)!=(t3));
						if (t1) {
							R = EIF_FALSE;
							l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
						} else {
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						}
						t1 = (T6f1(&l1, l2));
					}
				}
			}
		}
	}
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].key_storage_item */
T0* T463f22(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T463*)(C))->a16)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].slots_item */
T6 T463f33(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T463*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].has */
T1 T463f29(T0* C, T0* a1)
{
	T1 R = 0;
	T463f43(C, a1);
	R = ((((T463*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* INTEGER_32.out */
T0* T6f12(T6* C)
{
	T0* R = 0;
	T6 t1;
	R = T17c33((T6)(GE_int32(11)));
	t1 = (*C);
	T17f45(GE_void(R), t1);
	return R;
}

/* STRING_8.append_integer */
void T17f45(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T2 l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = ((a1)==((T6)(GE_int32(0))));
	if (t1) {
		T17f34(C, (T2)('0'));
	} else {
		l2 = ((T17*)(C))->a2;
		t1 = ((T1)((a1)<((T6)(GE_int32(0)))));
		if (t1) {
			T17f34(C, (T2)('-'));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t2 = ((T6)(GE_int32(-2147483647)-1));
			t1 = ((a1)==(t2));
			if (t1) {
				T17f34(C, (T2)('8'));
				t2 = ((T6)((a1)/((T6)(GE_int32(10)))));
				l1 = ((T6)(-(t2)));
			} else {
				l1 = ((T6)(-(a1)));
			}
		} else {
			l1 = a1;
		}
		t1 = ((l1)==((T6)(GE_int32(0))));
		while (!(t1)) {
			t2 = ((T6)((l1)%((T6)(GE_int32(10)))));
			t2 = ((T6)((t2)+((T6)(GE_int32(48)))));
			t3 = ((T2)(t2));
			T17f34(C, t3);
			l1 = ((T6)((l1)/((T6)(GE_int32(10)))));
			t1 = ((l1)==((T6)(GE_int32(0))));
		}
		l3 = ((T6)((((T17*)(C))->a2)-((T6)(GE_int32(1)))));
		l5 = ((T17*)(C))->a1;
		t1 = (T6f5(&l2, l3));
		while (!(t1)) {
			l4 = (((T15*)(GE_void(l5)))->z2[l2]);
			t3 = (((T15*)(GE_void(l5)))->z2[l3]);
			((T15*)(GE_void(l5)))->z2[l2] = (t3);
			((T15*)(GE_void(l5)))->z2[l3] = (l4);
			l3 = ((T6)((l3)-((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = (T6f5(&l2, l3));
		}
	}
}

/* LX_WILDCARD_PARSER.new_epsilon_nfa */
T0* T435f169(T0* C)
{
	T0* R = 0;
	R = T467c12(((T435*)(C))->a93);
	return R;
}

/* LX_WILDCARD_PARSER.append_character_set_to_character_class */
T0* T435f168(T0* C, T6 a1, T6 a2, T0* a3)
{
	T0* R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	t1 = (T6f1(&a1, a2));
	if (t1) {
		T435f268(C);
	} else {
		t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a14);
		if (t1) {
			l1 = a1;
			t1 = (T6f1(&l1, a2));
			while (!(t1)) {
				switch (l1) {
				case (T6)65:
				case (T6)66:
				case (T6)67:
				case (T6)68:
				case (T6)69:
				case (T6)70:
				case (T6)71:
				case (T6)72:
				case (T6)73:
				case (T6)74:
				case (T6)75:
				case (T6)76:
				case (T6)77:
				case (T6)78:
				case (T6)79:
				case (T6)80:
				case (T6)81:
				case (T6)82:
				case (T6)83:
				case (T6)84:
				case (T6)85:
				case (T6)86:
				case (T6)87:
				case (T6)88:
				case (T6)89:
				case (T6)90:
					T464f19(GE_void(a3), l1);
					t2 = ((T6)((l1)+((T6)(GE_int32(32)))));
					T464f19(GE_void(a3), t2);
					break;
				case (T6)97:
				case (T6)98:
				case (T6)99:
				case (T6)100:
				case (T6)101:
				case (T6)102:
				case (T6)103:
				case (T6)104:
				case (T6)105:
				case (T6)106:
				case (T6)107:
				case (T6)108:
				case (T6)109:
				case (T6)110:
				case (T6)111:
				case (T6)112:
				case (T6)113:
				case (T6)114:
				case (T6)115:
				case (T6)116:
				case (T6)117:
				case (T6)118:
				case (T6)119:
				case (T6)120:
				case (T6)121:
				case (T6)122:
					t2 = ((T6)((l1)-((T6)(GE_int32(32)))));
					T464f19(GE_void(a3), t2);
					T464f19(GE_void(a3), l1);
					break;
				case (T6)(T6)(GE_int32(0)):
					t2 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
					T464f19(GE_void(a3), t2);
					break;
				default:
					T464f19(GE_void(a3), l1);
					break;
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, a2));
			}
		} else {
			l1 = a1;
			t1 = (T6f1(&l1, a2));
			while (!(t1)) {
				t1 = ((l1)==((T6)(GE_int32(0))));
				if (t1) {
					t2 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
					T464f19(GE_void(a3), t2);
				} else {
					T464f19(GE_void(a3), l1);
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, a2));
			}
		}
	}
	R = a3;
	return R;
}

/* LX_WILDCARD_PARSER.report_negative_range_in_character_class_error */
void T435f268(T0* C)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T435f189(C));
	l1 = T496c7(t1, ((T435*)(C))->a15);
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* UT_ERROR_HANDLER.report_error */
void T28f11(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T28f5(C, a1));
	T28f12(C, t1);
}

/* UT_ERROR_HANDLER.report_error_message */
void T28f12(T0* C, T0* a1)
{
	if (((T0*)(GE_void(((T28*)(C))->a1)))->id==47) {
		T47f12(((T28*)(C))->a1, a1);
	} else {
		T449f4(((T28*)(C))->a1, a1);
	}
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_line */
void T449f4(T0* C, T0* a1)
{
	T449f5(C, a1);
	T449f6(C);
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_new_line */
void T449f6(T0* C)
{
	T449f5(C, ge199ov2996);
}

/* KL_NULL_TEXT_OUTPUT_STREAM.put_string */
void T449f5(T0* C, T0* a1)
{
}

/* UT_ERROR_HANDLER.message */
T0* T28f5(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T50x2979(GE_void(a1)));
	return R;
}

/* LX_NEGATIVE_RANGE_IN_CHARACTER_CLASS_ERROR.make */
T0* T496c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T496));
	*(T496*)C = GE_default496;
	((T496*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T496*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T496*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.filename */
T0* T435f189(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = EIF_VOID;
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		t2 = ((GE_void(l1), (T0*)0));
		R = ((GE_void(t2), (T0*)0));
	} else {
		R = GE_ms("string", 6);
	}
	return R;
}

/* KL_SPECIAL_ROUTINES [LX_SYMBOL_CLASS].resize */
T0* T466f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T465*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T465f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [LX_SYMBOL_CLASS].resized_area */
T0* T465f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T465c4(a1);
	t1 = (((T465*)(C))->z1);
	T465f7(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [LX_SYMBOL_CLASS].copy_data */
void T465f7(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T465f8(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T465*)(a1))->z2[l1]);
			((T465*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].move_data */
void T465f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T465f9(C, a1, a2, a3);
			} else {
				T465f10(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T465f9(C, a1, a2, a3);
			} else {
				T465f10(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].overlapping_move */
void T465f10(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T465*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T465*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T465*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T465*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].non_overlapping_move */
void T465f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T465*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T465*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].make */
T0* T465c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T465)+a1*sizeof(T0*));
	*(T465*)C = GE_default465;
	((T465*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_SYMBOL_CLASS].make */
T0* T466f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T510c2(a1);
	R = (((T510*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_SYMBOL_CLASS].make_area */
T0* T510c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T510));
	*(T510*)C = GE_default510;
	((T510*)(C))->a1 = T465c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_SYMBOL_CLASS].default_create */
T0* T466c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T466));
	*(T466*)C = GE_default466;
	return C;
}

/* LX_WILDCARD_PARSER.append_character_to_character_class */
T0* T435f167(T0* C, T6 a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a14);
	if (t1) {
		switch (a1) {
		case (T6)65:
		case (T6)66:
		case (T6)67:
		case (T6)68:
		case (T6)69:
		case (T6)70:
		case (T6)71:
		case (T6)72:
		case (T6)73:
		case (T6)74:
		case (T6)75:
		case (T6)76:
		case (T6)77:
		case (T6)78:
		case (T6)79:
		case (T6)80:
		case (T6)81:
		case (T6)82:
		case (T6)83:
		case (T6)84:
		case (T6)85:
		case (T6)86:
		case (T6)87:
		case (T6)88:
		case (T6)89:
		case (T6)90:
			T464f19(GE_void(a2), a1);
			t2 = ((T6)((a1)+((T6)(GE_int32(32)))));
			T464f19(GE_void(a2), t2);
			break;
		case (T6)97:
		case (T6)98:
		case (T6)99:
		case (T6)100:
		case (T6)101:
		case (T6)102:
		case (T6)103:
		case (T6)104:
		case (T6)105:
		case (T6)106:
		case (T6)107:
		case (T6)108:
		case (T6)109:
		case (T6)110:
		case (T6)111:
		case (T6)112:
		case (T6)113:
		case (T6)114:
		case (T6)115:
		case (T6)116:
		case (T6)117:
		case (T6)118:
		case (T6)119:
		case (T6)120:
		case (T6)121:
		case (T6)122:
			t2 = ((T6)((a1)-((T6)(GE_int32(32)))));
			T464f19(GE_void(a2), t2);
			T464f19(GE_void(a2), a1);
			break;
		case (T6)(T6)(GE_int32(0)):
			t2 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
			T464f19(GE_void(a2), t2);
			break;
		default:
			T464f19(GE_void(a2), a1);
			break;
		}
	} else {
		t1 = ((a1)==((T6)(GE_int32(0))));
		if (t1) {
			t2 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
			T464f19(GE_void(a2), t2);
		} else {
			T464f19(GE_void(a2), a1);
		}
	}
	R = a2;
	return R;
}

/* LX_WILDCARD_PARSER.new_character_class */
T0* T435f166(T0* C)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
	R = T464c18(t1);
	return R;
}

/* LX_SYMBOL_CLASS.set_negated */
void T464f20(T0* C, T1 a1)
{
	((T464*)(C))->a6 = a1;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].force */
void T463f42(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T463f45(C);
	T463f43(C, a2);
	t1 = ((((T463*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T463f46(C, a1, ((T463*)(C))->a1);
	} else {
		t1 = ((((T463*)(C))->a5)==(((T463*)(C))->a6));
		if (t1) {
			t2 = ((T6)((((T463*)(C))->a5)+((T6)(GE_int32(1)))));
			t2 = (T463f23(C, t2));
			T463f47(C, t2);
			l2 = (T463f24(C, a2));
		} else {
			l2 = ((T463*)(C))->a7;
		}
		l1 = ((T463*)(C))->a8;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T463*)(C))->a9 = ((T6)((((T463*)(C))->a9)+((T6)(GE_int32(1)))));
			l1 = ((T463*)(C))->a9;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T463f32(C, l1));
			((T463*)(C))->a8 = ((T6)((t2)-(t3)));
		}
		t2 = (T463f33(C, l2));
		T463f48(C, t2, l1);
		T463f49(C, l1, l2);
		T463f46(C, a1, l1);
		T463f50(C, a2, l1);
		((T463*)(C))->a5 = ((T6)((((T463*)(C))->a5)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].key_storage_put */
void T463f50(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T463*)(C))->a16)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].slots_put */
void T463f49(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T463*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].clashes_put */
void T463f48(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T463*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].resize */
void T463f47(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T463f45(C);
	l1 = (T463f25(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T463f52(C, t1);
	l2 = ((T463*)(C))->a10;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T463f49(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T463*)(C))->a10 = l1;
	l2 = ((T463*)(C))->a9;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T463f32(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T463f22(C, l2));
			l3 = (T463f24(C, t3));
			t1 = (T463f33(C, l3));
			T463f48(C, t1, l2);
			T463f49(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T463f53(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T463f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T463f55(C, t1);
	((T463*)(C))->a6 = a1;
	((T463*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].clashes_resize */
void T463f55(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T463f31(C));
	((T463*)(C))->a14 = (T65f1(GE_void(t1), ((T463*)(C))->a14, a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].special_integer_ */
T0* T463f31(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].key_storage_resize */
void T463f54(T0* C, T6 a1)
{
	((T463*)(C))->a16 = (T66f1(GE_void(((T463*)(C))->a19), ((T463*)(C))->a16, a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].item_storage_resize */
void T463f53(T0* C, T6 a1)
{
	((T463*)(C))->a2 = (T466f2(GE_void(((T463*)(C))->a18), ((T463*)(C))->a2, a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].slots_resize */
void T463f52(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T463f31(C));
	((T463*)(C))->a15 = (T65f1(GE_void(t1), ((T463*)(C))->a15, a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].new_modulus */
T6 T463f25(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].new_capacity */
T6 T463f23(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].item_storage_put */
void T463f46(T0* C, T0* a1, T6 a2)
{
	((T465*)(GE_void(((T463*)(C))->a2)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].unset_found_item */
void T463f45(T0* C)
{
	((T463*)(C))->a13 = (T6)(GE_int32(0));
}

/* LX_WILDCARD_PARSER.new_nfa_from_character_class */
T0* T435f165(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	t1 = (((T464*)(GE_void(a1)))->a5);
	if (t1) {
		T464f24(GE_void(a1));
	}
	l1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a1);
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		T468f11(GE_void(l1), a1);
	}
	R = (T435f163(C, a1));
	return R;
}

/* LX_SYMBOL_CLASS.sort */
void T464f24(T0* C)
{
	T0* t1;
	t1 = (T464f17(C));
	T464f26(C, t1);
	((T464*)(C))->a5 = EIF_FALSE;
}

/* LX_SYMBOL_CLASS.arrayed_sort */
void T464f26(T0* C, T0* a1)
{
	T555f3(GE_void(a1), C);
}

/* DS_SHELL_SORTER [INTEGER_32].sort */
void T555f3(T0* C, T0* a1)
{
	T555f4(C, a1, ((T555*)(C))->a1);
}

/* DS_SHELL_SORTER [INTEGER_32].sort_with_comparator */
void T555f4(T0* C, T0* a1, T0* a2)
{
	T1 t1;
	T6 t2;
	t1 = (T464f12(a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T464*)(a1))->a7);
		T555f5(C, a1, a2, (T6)(GE_int32(1)), t2);
	}
}

/* DS_SHELL_SORTER [INTEGER_32].subsort_with_comparator */
void T555f5(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T1 t1;
	T6 t2;
	t1 = ((T1)((a3)<(a4)));
	if (t1) {
		t2 = ((T6)((a4)-(a3)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		l4 = ((T6)((t2)/((T6)(GE_int32(2)))));
		t1 = (T6f9(&l4, (T6)(GE_int32(0))));
		while (!(t1)) {
			l1 = ((T6)((a3)+(l4)));
			t1 = (T6f1(&l1, a4));
			while (!(t1)) {
				l2 = ((T6)((l1)-(l4)));
				t1 = ((T1)((l2)<(a3)));
				while (!(t1)) {
					l3 = ((T6)((l2)+(l4)));
					l5 = (T464f14(a1, l2));
					l6 = (T464f14(a1, l3));
					t1 = (T559f1(GE_void(a2), l6, l5));
					if (t1) {
						T464f25(a1, l6, l2);
						T464f25(a1, l5, l3);
						l2 = ((T6)((l2)-(l4)));
					} else {
						l2 = ((T6)((a3)-((T6)(GE_int32(1)))));
					}
					t1 = ((T1)((l2)<(a3)));
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, a4));
			}
			l4 = ((T6)((l4)/((T6)(GE_int32(2)))));
			t1 = (T6f9(&l4, (T6)(GE_int32(0))));
		}
	}
}

/* LX_SYMBOL_CLASS.replace */
void T464f25(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T464*)(C))->a2)))->z2[a2] = (a1);
}

/* KL_COMPARABLE_COMPARATOR [INTEGER_32].less_than */
T1 T559f1(T0* C, T6 a1, T6 a2)
{
	T1 R = 0;
	R = ((T1)((a1)<(a2)));
	return R;
}

/* LX_SYMBOL_CLASS.sorter */
unsigned char ge322os12670 = '\0';
T0* ge322ov12670;
T0* T464f17(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge322os12670) {
		return ge322ov12670;
	} else {
		ge322os12670 = '\1';
	}
	l1 = T559c2();
	R = T555c2(l1);
	ge322ov12670 = R;
	return R;
}

/* DS_SHELL_SORTER [INTEGER_32].make */
T0* T555c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T555));
	*(T555*)C = GE_default555;
	((T555*)(C))->a1 = a1;
	return C;
}

/* KL_COMPARABLE_COMPARATOR [INTEGER_32].make */
T0* T559c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T559));
	*(T559*)C = GE_default559;
	return C;
}

/* LX_WILDCARD_PARSER.new_symbol_class_nfa */
T0* T435f163(T0* C, T0* a1)
{
	T0* R = 0;
	R = T467c6(a1, ((T435*)(C))->a93);
	return R;
}

/* LX_NFA.make_symbol_class */
T0* T467c6(T0* a1, T1 a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T467));
	*(T467*)C = GE_default467;
	((T467*)(C))->a1 = a2;
	((T467*)(C))->a2 = T485c23((T6)(GE_int32(100)));
	l2 = T492c10(a2);
	l3 = T492c10(a2);
	l1 = T511c4(a1, l3);
	T492f11(GE_void(l2), l1);
	T485f25(GE_void(((T467*)(C))->a2), l2);
	T485f24(GE_void(((T467*)(C))->a2), l3);
	return C;
}

/* LX_SYMBOL_CLASS_TRANSITION [LX_NFA_STATE].make */
T0* T511c4(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T511));
	*(T511*)C = GE_default511;
	((T511*)(C))->a1 = a1;
	((T511*)(C))->a2 = a2;
	return C;
}

/* LX_WILDCARD_PARSER.question_character_class */
T0* T435f162(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	l1 = GE_ms("\?", 1);
	t1 = (T463f29(GE_void(((T435*)(C))->a14), l1));
	if (t1) {
		R = (T463f27(GE_void(((T435*)(C))->a14), l1));
	} else {
		R = T464c18((T6)(GE_int32(1)));
		T464f19(GE_void(R), (T6)(GE_int32(47)));
		T464f20(GE_void(R), EIF_TRUE);
		l2 = (((T436*)(GE_void(((T435*)(C))->a11)))->a1);
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			T468f11(GE_void(l2), R);
		}
		T463f42(GE_void(((T435*)(C))->a14), R, l1);
	}
	return R;
}

/* LX_NFA.build_optional */
void T467f11(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T467f4(C));
	t1 = (((T492*)(GE_void(t1)))->a3);
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		t1 = (T467f5(C));
		l1 = T513c3(t1);
		t1 = (T467f4(C));
		T492f12(GE_void(t1), l1);
	} else {
		l2 = (T467f4(C));
		l3 = (T467f5(C));
		l4 = T492c10(((T467*)(C))->a1);
		l1 = T513c3(l2);
		T492f11(GE_void(l4), l1);
		l1 = T513c3(l3);
		T492f12(GE_void(l4), l1);
		T485f26(GE_void(((T467*)(C))->a2), l4, (T6)(GE_int32(1)));
		t3 = (((T485*)(GE_void(((T467*)(C))->a2)))->a1);
		T485f26(GE_void(((T467*)(C))->a2), l2, t3);
		T485f27(GE_void(((T467*)(C))->a2), l3);
	}
}

/* LX_NFA_STATE.set_epsilon_transition */
void T492f12(T0* C, T0* a1)
{
	((T492*)(C))->a3 = a1;
}

/* LX_NFA.final_state */
T0* T467f5(T0* C)
{
	T0* R = 0;
	R = (T485f9(GE_void(((T467*)(C))->a2)));
	return R;
}

/* LX_NFA.build_positive_closure */
void T467f10(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	l2 = (T467f4(C));
	l3 = (T467f5(C));
	l1 = T513c3(l2);
	T492f11(GE_void(l3), l1);
	l4 = T492c10(((T467*)(C))->a1);
	l1 = T513c3(l2);
	T492f11(GE_void(l4), l1);
	T485f26(GE_void(((T467*)(C))->a2), l4, (T6)(GE_int32(1)));
	l4 = T492c10(((T467*)(C))->a1);
	l1 = T513c3(l4);
	T492f12(GE_void(l3), l1);
	T485f27(GE_void(((T467*)(C))->a2), l2);
	T485f27(GE_void(((T467*)(C))->a2), l4);
}

/* LX_NFA.build_closure */
void T467f9(T0* C)
{
	T467f10(C);
	T467f11(C);
}

/* LX_WILDCARD_PARSER.new_nfa_from_character */
T0* T435f159(T0* C, T6 a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a14);
	if (t1) {
		l4 = (((T436*)(GE_void(((T435*)(C))->a11)))->a1);
		switch (a1) {
		case (T6)65:
		case (T6)66:
		case (T6)67:
		case (T6)68:
		case (T6)69:
		case (T6)70:
		case (T6)71:
		case (T6)72:
		case (T6)73:
		case (T6)74:
		case (T6)75:
		case (T6)76:
		case (T6)77:
		case (T6)78:
		case (T6)79:
		case (T6)80:
		case (T6)81:
		case (T6)82:
		case (T6)83:
		case (T6)84:
		case (T6)85:
		case (T6)86:
		case (T6)87:
		case (T6)88:
		case (T6)89:
		case (T6)90:
			l1 = ((T6)((a1)+((T6)(GE_int32(32)))));
			l2 = (T6f12(&l1));
			t1 = (T463f29(GE_void(((T435*)(C))->a14), l2));
			if (t1) {
				t2 = (T463f27(GE_void(((T435*)(C))->a14), l2));
				R = (T435f163(C, t2));
			} else {
				l3 = T464c18((T6)(GE_int32(2)));
				T464f19(GE_void(l3), a1);
				T464f19(GE_void(l3), l1);
				t1 = ((l4)!=(EIF_VOID));
				if (t1) {
					T468f11(GE_void(l4), l3);
				}
				T463f42(GE_void(((T435*)(C))->a14), l3, l2);
				R = (T435f163(C, l3));
			}
			break;
		case (T6)97:
		case (T6)98:
		case (T6)99:
		case (T6)100:
		case (T6)101:
		case (T6)102:
		case (T6)103:
		case (T6)104:
		case (T6)105:
		case (T6)106:
		case (T6)107:
		case (T6)108:
		case (T6)109:
		case (T6)110:
		case (T6)111:
		case (T6)112:
		case (T6)113:
		case (T6)114:
		case (T6)115:
		case (T6)116:
		case (T6)117:
		case (T6)118:
		case (T6)119:
		case (T6)120:
		case (T6)121:
		case (T6)122:
			l2 = (T6f12(&a1));
			t1 = (T463f29(GE_void(((T435*)(C))->a14), l2));
			if (t1) {
				t2 = (T463f27(GE_void(((T435*)(C))->a14), l2));
				R = (T435f163(C, t2));
			} else {
				l3 = T464c18((T6)(GE_int32(2)));
				t3 = ((T6)((a1)-((T6)(GE_int32(32)))));
				T464f19(GE_void(l3), t3);
				T464f19(GE_void(l3), a1);
				t1 = ((l4)!=(EIF_VOID));
				if (t1) {
					T468f11(GE_void(l4), l3);
				}
				T463f42(GE_void(((T435*)(C))->a14), l3, l2);
				R = (T435f163(C, l3));
			}
			break;
		case (T6)(T6)(GE_int32(0)):
			t3 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
			R = (T435f216(C, t3));
			break;
		default:
			R = (T435f216(C, a1));
			break;
		}
	} else {
		t1 = ((a1)==((T6)(GE_int32(0))));
		if (t1) {
			t3 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
			R = (T435f216(C, t3));
		} else {
			R = (T435f216(C, a1));
		}
	}
	return R;
}

/* LX_NFA.build_concatenation */
void T467f8(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T467f4(GE_void(a1)));
	l1 = T513c3(t1);
	t1 = (T467f5(C));
	T492f11(GE_void(t1), l1);
	t1 = (((T467*)(GE_void(a1)))->a2);
	T485f28(GE_void(((T467*)(C))->a2), t1);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].append_last */
void T485f28(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (((T485*)(GE_void(a1)))->a1);
	t1 = (T485f12(C, l1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T485*)(C))->a1)+(l1)));
		t2 = (T485f13(C, t2));
		T485f31(C, t2);
	}
	T485f32(C, a1);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].extend_last */
void T485f32(T0* C, T0* a1)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T6)((((T485*)(C))->a1)+((T6)(GE_int32(1)))));
	l2 = (T485f11(GE_void(a1)));
	T529f9(GE_void(l2));
	t1 = (T529f5(GE_void(l2)));
	while (!(t1)) {
		t2 = (T529f4(GE_void(l2)));
		((T526*)(GE_void(((T485*)(C))->a2)))->z2[l1] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		T529f10(GE_void(l2));
		t1 = (T529f5(GE_void(l2)));
	}
	t3 = (((T485*)(GE_void(a1)))->a1);
	((T485*)(C))->a1 = ((T6)((((T485*)(C))->a1)+(t3)));
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].forth */
void T529f10(T0* C)
{
	T485f36(GE_void(((T529*)(C))->a3), C);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_forth */
void T485f36(T0* C, T0* a1)
{
	T1 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	l2 = (((T529*)(a1))->a1);
	l1 = ((l2)==((T6)(GE_int32(0))));
	l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
	t1 = (T6f1(&l2, ((T485*)(C))->a1));
	if (t1) {
		l2 = (T6)(GE_int32(-1));
		t1 = ((T1)(!(l1)));
		if (t1) {
			T485f38(C, a1);
		}
	} else {
		if (l1) {
			T485f37(C, a1);
		}
	}
	T529f8(a1, l2);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].add_traversing_cursor */
void T485f37(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T485*)(C))->a6));
	if (t1) {
		t2 = (((T529*)(GE_void(((T485*)(C))->a6)))->a2);
		T529f11(a1, t2);
		T529f11(GE_void(((T485*)(C))->a6), a1);
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].set_next_cursor */
void T529f11(T0* C, T0* a1)
{
	((T529*)(C))->a2 = a1;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].remove_traversing_cursor */
void T485f38(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T485*)(C))->a6));
	if (t1) {
		l2 = ((T485*)(C))->a6;
		l1 = (((T529*)(GE_void(l2)))->a2);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T529*)(GE_void(l1)))->a2);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T529*)(a1))->a2);
			T529f11(GE_void(l2), t2);
			T529f11(a1, EIF_VOID);
		}
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].item */
T0* T529f4(T0* C)
{
	T0* R = 0;
	R = (T485f16(GE_void(((T529*)(C))->a3), C));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_item */
T0* T485f16(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T529*)(a1))->a1);
	R = (T485f10(C, t1));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].after */
T1 T529f5(T0* C)
{
	T1 R = 0;
	R = (T485f15(GE_void(((T529*)(C))->a3), C));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_after */
T1 T485f15(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T529*)(a1))->a1);
	R = ((t1)==((T6)(GE_int32(-1))));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].start */
void T529f9(T0* C)
{
	T485f35(GE_void(((T529*)(C))->a3), C);
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_start */
void T485f35(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T529f6(a1));
	t1 = (T485f8(C));
	if (t1) {
		T529f8(a1, (T6)(GE_int32(-1)));
	} else {
		T529f8(a1, (T6)(GE_int32(1)));
		if (l1) {
			T485f37(C, a1);
		}
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA_STATE].off */
T1 T529f6(T0* C)
{
	T1 R = 0;
	R = (T485f18(GE_void(((T529*)(C))->a3), C));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_off */
T1 T485f18(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T485f15(C, a1));
	if (!(t1)) {
		R = (T485f20(C, a1));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA_STATE].cursor_before */
T1 T485f20(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T529*)(a1))->a1);
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* LX_NFA.build_union */
void T467f7(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	l2 = (T467f4(C));
	l3 = (T467f4(GE_void(a1)));
	t1 = (((T492*)(GE_void(l2)))->a3);
	t2 = ((t1)==(EIF_VOID));
	if (t2) {
		l1 = T513c3(l3);
		T492f12(GE_void(l2), l1);
	} else {
		t1 = (((T492*)(GE_void(l3)))->a3);
		t2 = ((t1)==(EIF_VOID));
		if (t2) {
			l1 = T513c3(l2);
			T492f12(GE_void(l3), l1);
			T485f26(GE_void(((T467*)(C))->a2), l3, (T6)(GE_int32(1)));
			t1 = (((T467*)(GE_void(a1)))->a2);
			T485f26(GE_void(t1), l2, (T6)(GE_int32(1)));
		} else {
			l4 = T492c10(((T467*)(C))->a1);
			l1 = T513c3(l2);
			T492f11(GE_void(l4), l1);
			l1 = T513c3(l3);
			T492f12(GE_void(l4), l1);
			T485f26(GE_void(((T467*)(C))->a2), l4, (T6)(GE_int32(1)));
			l4 = (T467f5(C));
			t3 = (((T485*)(GE_void(((T467*)(C))->a2)))->a1);
			T485f26(GE_void(((T467*)(C))->a2), l2, t3);
			T485f27(GE_void(((T467*)(C))->a2), l4);
		}
	}
	l2 = (T467f5(C));
	l3 = (T467f5(GE_void(a1)));
	t2 = (T492f7(GE_void(l3)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		l1 = T513c3(l3);
		T492f11(GE_void(l2), l1);
		t1 = (((T467*)(GE_void(a1)))->a2);
		T485f28(GE_void(((T467*)(C))->a2), t1);
	} else {
		t2 = (T492f7(GE_void(l2)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			l1 = T513c3(l2);
			T492f11(GE_void(l3), l1);
			t3 = (((T485*)(GE_void(((T467*)(C))->a2)))->a1);
			T485f26(GE_void(((T467*)(C))->a2), l3, t3);
			t1 = (((T467*)(GE_void(a1)))->a2);
			t4 = (((T467*)(GE_void(a1)))->a2);
			t3 = (((T485*)(GE_void(t4)))->a1);
			T485f26(GE_void(t1), l2, t3);
			t1 = (((T467*)(GE_void(a1)))->a2);
			T485f28(GE_void(((T467*)(C))->a2), t1);
		} else {
			l4 = T492c10(((T467*)(C))->a1);
			l1 = T513c3(l4);
			T492f11(GE_void(l2), l1);
			l1 = T513c3(l4);
			T492f11(GE_void(l3), l1);
			t1 = (((T467*)(GE_void(a1)))->a2);
			T485f28(GE_void(((T467*)(C))->a2), t1);
			T485f27(GE_void(((T467*)(C))->a2), l4);
		}
	}
}

/* LX_WILDCARD_PARSER.report_unrecognized_rule_error */
void T435f250(T0* C)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T435f189(C));
	l1 = T474c7(t1, ((T435*)(C))->a15);
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* LX_UNRECOGNIZED_RULE_ERROR.make */
T0* T474c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T474));
	*(T474*)C = GE_default474;
	((T474*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T474*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T474*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.process_rule */
void T435f249(T0* C, T0* a1)
{
	T0* t1;
	T1 t2;
	T1 t3;
	T467f14(GE_void(a1), ((T435*)(C))->a94);
	T469f15(GE_void(((T435*)(C))->a94), a1);
	t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a7);
	T459f13(GE_void(t1), ((T435*)(C))->a94);
	T459f13(GE_void(((T435*)(C))->a2), ((T435*)(C))->a94);
	T469f16(GE_void(((T435*)(C))->a94), ((T435*)(C))->a104);
	T469f17(GE_void(((T435*)(C))->a94), ((T435*)(C))->a96);
	T469f18(GE_void(((T435*)(C))->a94), ((T435*)(C))->a97);
	T469f19(GE_void(((T435*)(C))->a94), ((T435*)(C))->a100);
	T469f20(GE_void(((T435*)(C))->a94), ((T435*)(C))->a98);
	T469f21(GE_void(((T435*)(C))->a94), ((T435*)(C))->a99);
	if (((T435*)(C))->a96) {
		t3 = (T6f5(&(((T435*)(C))->a97), (T6)(GE_int32(0))));
		if (!(t3)) {
			t3 = (T6f5(&(((T435*)(C))->a100), (T6)(GE_int32(0))));
		}
		t2 = ((T1)(!(t3)));
	} else {
		t2 = EIF_FALSE;
	}
	if (t2) {
		T436f34(GE_void(((T435*)(C))->a11), EIF_TRUE);
	}
	t2 = (T460f6(GE_void(((T435*)(C))->a3)));
	if (t2) {
		t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a8);
		T460f13(GE_void(t1), a1);
	} else {
		T460f11(GE_void(((T435*)(C))->a3), a1);
	}
}

/* LX_START_CONDITIONS.add_nfa_to_all */
void T460f11(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l2 = ((T460*)(C))->a1;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T460f7(C, l1));
		T488f7(GE_void(t2), a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* LX_START_CONDITION.put_nfa */
void T488f7(T0* C, T0* a1)
{
	T490f11(GE_void(((T488*)(C))->a4), a1);
}

/* DS_ARRAYED_LIST [LX_NFA].force_last */
void T490f11(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T490f8(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T490*)(C))->a5)+((T6)(GE_int32(1)))));
		t2 = (T490f9(C, t2));
		T490f12(C, t2);
	}
	((T490*)(C))->a5 = ((T6)((((T490*)(C))->a5)+((T6)(GE_int32(1)))));
	((T470*)(GE_void(((T490*)(C))->a2)))->z2[((T490*)(C))->a5] = (a1);
}

/* DS_ARRAYED_LIST [LX_NFA].resize */
void T490f12(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T490*)(C))->a2 = (T471f2(GE_void(((T490*)(C))->a1), ((T490*)(C))->a2, t1));
	((T490*)(C))->a3 = a1;
}

/* DS_ARRAYED_LIST [LX_NFA].new_capacity */
T6 T490f9(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [LX_NFA].extendible */
T1 T490f8(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T490*)(C))->a5)+(a1)));
	R = (T6f5(&(((T490*)(C))->a3), t1));
	return R;
}

/* LX_START_CONDITIONS.add_nfa_to_non_exclusive */
void T460f13(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	l2 = ((T460*)(C))->a1;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		l3 = (T460f7(C, l1));
		t1 = (((T488*)(GE_void(l3)))->a3);
		t1 = ((T1)(!(t1)));
		if (t1) {
			T488f7(GE_void(l3), a1);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* LX_START_CONDITIONS.is_empty */
T1 T460f6(T0* C)
{
	T1 R = 0;
	R = ((((T460*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* LX_DESCRIPTION.set_variable_trail_context */
void T436f34(T0* C, T1 a1)
{
	((T436*)(C))->a6 = a1;
}

/* LX_RULE.set_column_count */
void T469f21(T0* C, T6 a1)
{
	((T469*)(C))->a7 = a1;
}

/* LX_RULE.set_line_count */
void T469f20(T0* C, T6 a1)
{
	((T469*)(C))->a6 = a1;
}

/* LX_RULE.set_trail_count */
void T469f19(T0* C, T6 a1)
{
	((T469*)(C))->a5 = a1;
}

/* LX_RULE.set_head_count */
void T469f18(T0* C, T6 a1)
{
	((T469*)(C))->a4 = a1;
}

/* LX_RULE.set_trail_context */
void T469f17(T0* C, T1 a1)
{
	((T469*)(C))->a9 = a1;
}

/* LX_RULE.set_line_nb */
void T469f16(T0* C, T6 a1)
{
	((T469*)(C))->a8 = a1;
}

/* LX_RULE.set_pattern */
void T469f15(T0* C, T0* a1)
{
	((T469*)(C))->a2 = a1;
}

/* LX_NFA.set_accepted_rule */
void T467f14(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T467f5(C));
	T492f13(GE_void(t1), a1);
}

/* LX_NFA_STATE.set_accepted_rule */
void T492f13(T0* C, T0* a1)
{
	((T492*)(C))->a5 = a1;
}

/* LX_DESCRIPTION.create_equiv_classes */
void T436f33(T0* C)
{
	((T436*)(C))->a1 = T468c9((T6)(GE_int32(1)), ((T436*)(C))->a9);
}

/* LX_EQUIVALENCE_CLASSES.make */
T0* T468c9(T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T0* C;
	T1 t1;
	C = (T0*)GE_alloc(sizeof(T468));
	*(T468*)C = GE_default468;
	((T468*)(C))->a2 = T518c6(a1, a2);
	l2 = a1;
	t1 = (T6f1(&l2, a2));
	while (!(t1)) {
		l1 = T516c4(l2);
		T518f7(GE_void(((T468*)(C))->a2), l1, l2);
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l2, a2));
	}
	T468f12(C);
	return C;
}

/* LX_EQUIVALENCE_CLASSES.initialize */
void T468f12(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T6 t1;
	T0* t2;
	T1 t3;
	l2 = (T468f4(C));
	t1 = (T468f5(C));
	t2 = (T518f4(GE_void(((T468*)(C))->a2), t1));
	t1 = (T468f5(C));
	T516f5(GE_void(t2), t1);
	t1 = (T468f5(C));
	l1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t3 = (T6f1(&l1, l2));
	while (!(t3)) {
		l3 = (T518f4(GE_void(((T468*)(C))->a2), l1));
		t1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = (T518f4(GE_void(((T468*)(C))->a2), t1));
		T516f9(GE_void(l3), t2);
		T516f5(GE_void(l3), l1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t3 = (T6f1(&l1, l2));
	}
	((T468*)(C))->a1 = (T6)(GE_int32(0));
}

/* LX_WILDCARD_PARSER.check_options */
void T435f248(T0* C)
{
	T1 t1;
	t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a3);
	if (t1) {
		t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a4);
		if (t1) {
			T435f261(C);
		}
		t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a5);
		if (t1) {
			T435f262(C);
		} else {
			t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a6);
			if (t1) {
				T435f263(C);
			}
		}
	}
}

/* LX_WILDCARD_PARSER.report_full_and_variable_trailing_context_error */
void T435f263(T0* C)
{
	T0* l1 = 0;
	l1 = T480c7();
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* LX_FULL_AND_VARIABLE_TRAILING_CONTEXT_ERROR.make */
T0* T480c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T480));
	*(T480*)C = GE_default480;
	((T480*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(0)));
	return C;
}

/* LX_WILDCARD_PARSER.report_full_and_reject_error */
void T435f262(T0* C)
{
	T0* l1 = 0;
	l1 = T479c7();
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* LX_FULL_AND_REJECT_ERROR.make */
T0* T479c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T479));
	*(T479*)C = GE_default479;
	((T479*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(0)));
	return C;
}

/* LX_WILDCARD_PARSER.report_full_and_meta_equiv_classes_error */
void T435f261(T0* C)
{
	T0* l1 = 0;
	l1 = T478c7();
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* LX_FULL_AND_META_ERROR.make */
T0* T478c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T478));
	*(T478*)C = GE_default478;
	((T478*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(0)));
	return C;
}

/* LX_WILDCARD_PARSER.build_equiv_classes */
void T435f247(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l2 = (((T436*)(GE_void(((T435*)(C))->a11)))->a1);
	T468f10(GE_void(l2));
	l1 = (T463f28(GE_void(((T435*)(C))->a14)));
	T473f7(GE_void(l1));
	t1 = (T473f5(GE_void(l1)));
	while (!(t1)) {
		t2 = (T473f4(GE_void(l1)));
		T464f23(GE_void(t2), l2);
		T473f8(GE_void(l1));
		t1 = (T473f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].forth */
void T473f8(T0* C)
{
	T463f61(GE_void(((T473*)(C))->a1), C);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_forth */
void T463f61(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l4 = (((T473*)(a1))->a2);
	t1 = ((l4)==((T6)(GE_int32(-1))));
	if (t1) {
		l3 = EIF_TRUE;
	} else {
		l1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	}
	l2 = ((T463*)(C))->a9;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T463f32(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T463f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T473f9(a1, (T6)(GE_int32(-2)));
		t1 = ((T1)(!(l3)));
		if (t1) {
			T463f62(C, a1);
		}
	} else {
		T473f9(a1, l1);
		if (l3) {
			T463f63(C, a1);
		}
	}
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].add_traversing_cursor */
void T463f63(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T463*)(C))->a17));
	if (t1) {
		t2 = (((T473*)(GE_void(((T463*)(C))->a17)))->a3);
		T473f10(a1, t2);
		T473f10(GE_void(((T463*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].set_next_cursor */
void T473f10(T0* C, T0* a1)
{
	((T473*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].remove_traversing_cursor */
void T463f62(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T463*)(C))->a17));
	if (t1) {
		l2 = ((T463*)(C))->a17;
		l1 = (((T473*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T473*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T473*)(a1))->a3);
			T473f10(GE_void(l2), t2);
			T473f10(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].set_position */
void T473f9(T0* C, T6 a1)
{
	((T473*)(C))->a2 = a1;
}

/* LX_SYMBOL_CLASS.convert_to_equivalence */
void T464f23(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l3 = ((T464*)(C))->a7;
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l3));
	while (!(t1)) {
		l4 = (T464f14(C, l1));
		t1 = (T468f7(GE_void(a1), l4));
		if (t1) {
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t2 = (T468f8(GE_void(a1), l4));
			T464f25(C, t2, l2);
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l3));
	}
	((T464*)(C))->a7 = l2;
}

/* LX_EQUIVALENCE_CLASSES.equivalence_class */
T6 T468f8(T0* C, T6 a1)
{
	T6 R = 0;
	T0* t1;
	t1 = (T518f4(GE_void(((T468*)(C))->a2), a1));
	R = (((T516*)(GE_void(t1)))->a1);
	return R;
}

/* LX_EQUIVALENCE_CLASSES.is_representative */
T1 T468f7(T0* C, T6 a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T518f4(GE_void(((T468*)(C))->a2), a1));
	t1 = (((T516*)(GE_void(t1)))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].item */
T0* T473f4(T0* C)
{
	T0* R = 0;
	R = (T463f35(GE_void(((T473*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_item */
T0* T463f35(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T473*)(a1))->a2);
	R = (T463f21(C, t1));
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].after */
T1 T473f5(T0* C)
{
	T1 R = 0;
	R = (T463f34(GE_void(((T473*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_after */
T1 T463f34(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T473*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-2))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].start */
void T473f7(T0* C)
{
	T463f60(GE_void(((T473*)(C))->a1), C);
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_start */
void T463f60(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = (T463f38(C));
	if (t1) {
		T473f9(a1, (T6)(GE_int32(-2)));
	} else {
		l3 = (T463f39(C, a1));
		l1 = (T6)(GE_int32(1));
		l2 = ((T463*)(C))->a9;
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T463f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (T463f32(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = (T6f1(&l1, l2));
		if (t1) {
			T473f9(a1, (T6)(GE_int32(-2)));
			t1 = ((T1)(!(l3)));
			if (t1) {
				T463f62(C, a1);
			}
		} else {
			T473f9(a1, l1);
			if (l3) {
				T463f63(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].cursor_off */
T1 T463f39(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T473*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].is_empty */
T1 T463f38(T0* C)
{
	T1 R = 0;
	R = ((((T463*)(C))->a5)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].new_cursor */
T0* T463f28(T0* C)
{
	T0* R = 0;
	R = T473c6(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [LX_SYMBOL_CLASS, STRING_8].make */
T0* T473c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T473));
	*(T473*)C = GE_default473;
	((T473*)(C))->a1 = a1;
	((T473*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* LX_EQUIVALENCE_CLASSES.build */
void T468f10(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	l3 = (T468f4(C));
	l1 = (T468f5(C));
	t1 = (T6f1(&l1, l3));
	while (!(t1)) {
		l4 = (T518f4(GE_void(((T468*)(C))->a2), l1));
		t2 = (((T516*)(GE_void(l4)))->a2);
		t1 = ((t2)==(EIF_VOID));
		if (t1) {
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			T516f5(GE_void(l4), l2);
			l4 = (((T516*)(GE_void(l4)))->a3);
			t1 = ((l4)==(EIF_VOID));
			while (!(t1)) {
				T516f5(GE_void(l4), l2);
				l4 = (((T516*)(GE_void(l4)))->a3);
				t1 = ((l4)==(EIF_VOID));
			}
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l3));
	}
	((T468*)(C))->a1 = l2;
}

/* LX_WILDCARD_PARSER.yy_push_last_value */
void T435f234(T0* C, T6 a1)
{
	T6 t1;
	T1 t2;
	t1 = (((T63*)(GE_void(((T435*)(C))->a44)))->z2[a1]);
	switch (t1) {
	case (T6)(T6)(GE_int32(1)):
		((T435*)(C))->a46 = ((T6)((((T435*)(C))->a46)+((T6)(GE_int32(1)))));
		t2 = (T6f5(&(((T435*)(C))->a46), ((T435*)(C))->a77));
		if (t2) {
			t2 = ((((T435*)(C))->a78)==(EIF_VOID));
			if (t2) {
				((T435*)(C))->a79 = T137c3();
				((T435*)(C))->a77 = (T6)(GE_int32(10));
				((T435*)(C))->a78 = (T137f1(GE_void(((T435*)(C))->a79), ((T435*)(C))->a77));
			} else {
				((T435*)(C))->a77 = ((T6)((((T435*)(C))->a77)+((T6)(GE_int32(10)))));
				((T435*)(C))->a78 = (T137f2(GE_void(((T435*)(C))->a79), ((T435*)(C))->a78, ((T435*)(C))->a77));
			}
		}
		((T136*)(GE_void(((T435*)(C))->a78)))->z2[((T435*)(C))->a46] = (((T435*)(C))->a80);
		break;
	case (T6)(T6)(GE_int32(2)):
		((T435*)(C))->a47 = ((T6)((((T435*)(C))->a47)+((T6)(GE_int32(1)))));
		t2 = (T6f5(&(((T435*)(C))->a47), ((T435*)(C))->a81));
		if (t2) {
			t2 = ((((T435*)(C))->a82)==(EIF_VOID));
			if (t2) {
				((T435*)(C))->a83 = T65c4();
				((T435*)(C))->a81 = (T6)(GE_int32(10));
				((T435*)(C))->a82 = (T65f2(GE_void(((T435*)(C))->a83), ((T435*)(C))->a81));
			} else {
				((T435*)(C))->a81 = ((T6)((((T435*)(C))->a81)+((T6)(GE_int32(10)))));
				((T435*)(C))->a82 = (T65f1(GE_void(((T435*)(C))->a83), ((T435*)(C))->a82, ((T435*)(C))->a81));
			}
		}
		((T63*)(GE_void(((T435*)(C))->a82)))->z2[((T435*)(C))->a47] = (((T435*)(C))->a84);
		break;
	case (T6)(T6)(GE_int32(3)):
		((T435*)(C))->a48 = ((T6)((((T435*)(C))->a48)+((T6)(GE_int32(1)))));
		t2 = (T6f5(&(((T435*)(C))->a48), ((T435*)(C))->a85));
		if (t2) {
			t2 = ((((T435*)(C))->a86)==(EIF_VOID));
			if (t2) {
				((T435*)(C))->a87 = T466c3();
				((T435*)(C))->a85 = (T6)(GE_int32(10));
				((T435*)(C))->a86 = (T466f1(GE_void(((T435*)(C))->a87), ((T435*)(C))->a85));
			} else {
				((T435*)(C))->a85 = ((T6)((((T435*)(C))->a85)+((T6)(GE_int32(10)))));
				((T435*)(C))->a86 = (T466f2(GE_void(((T435*)(C))->a87), ((T435*)(C))->a86, ((T435*)(C))->a85));
			}
		}
		((T465*)(GE_void(((T435*)(C))->a86)))->z2[((T435*)(C))->a48] = (((T435*)(C))->a88);
		break;
	case (T6)(T6)(GE_int32(4)):
		((T435*)(C))->a49 = ((T6)((((T435*)(C))->a49)+((T6)(GE_int32(1)))));
		t2 = (T6f5(&(((T435*)(C))->a49), ((T435*)(C))->a89));
		if (t2) {
			t2 = ((((T435*)(C))->a90)==(EIF_VOID));
			if (t2) {
				((T435*)(C))->a91 = T66c3();
				((T435*)(C))->a89 = (T6)(GE_int32(10));
				((T435*)(C))->a90 = (T66f2(GE_void(((T435*)(C))->a91), ((T435*)(C))->a89));
			} else {
				((T435*)(C))->a89 = ((T6)((((T435*)(C))->a89)+((T6)(GE_int32(10)))));
				((T435*)(C))->a90 = (T66f1(GE_void(((T435*)(C))->a91), ((T435*)(C))->a90, ((T435*)(C))->a89));
			}
		}
		((T32*)(GE_void(((T435*)(C))->a90)))->z2[((T435*)(C))->a49] = (((T435*)(C))->a92);
		break;
	default:
		T435f232(C);
		break;
	}
}

/* LX_WILDCARD_PARSER.accept */
void T435f233(T0* C)
{
	((T435*)(C))->a22 = (T6)(GE_int32(101));
}

/* LX_WILDCARD_PARSER.yy_do_error_action */
void T435f231(T0* C, T6 a1)
{
	switch (a1) {
	case (T6)(T6)(GE_int32(47)):
		T435f245(C);
		break;
	default:
		T435f246(C, GE_ms("parse error", 11));
		break;
	}
}

/* LX_WILDCARD_PARSER.report_error */
void T435f246(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T435f189(C));
	l1 = T472c7(t1, ((T435*)(C))->a15);
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* UT_SYNTAX_ERROR.make */
T0* T472c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T472));
	*(T472*)C = GE_default472;
	((T472*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T472*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T472*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.report_eof_expected_error */
void T435f245(T0* C)
{
	T435f246(C, GE_ms("parse error", 11));
}

/* LX_WILDCARD_PARSER.read_token */
void T435f230(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T1 l9 = 0;
	T6 l10 = 0;
	T6 l11 = 0;
	T6 l12 = 0;
	T1 l13 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	((T435*)(C))->a35 = (T6)(GE_int32(-2));
	l7 = (T6)(GE_int32(1));
	t1 = ((((T435*)(C))->a35)!=((T6)(GE_int32(-2))));
	while (!(t1)) {
		switch (l7) {
		case (T6)(T6)(GE_int32(1)):
			if (((T435*)(C))->a51) {
				((T435*)(C))->a52 = ((T6)((((T435*)(C))->a18)-(((T435*)(C))->a45)));
				((T435*)(C))->a51 = EIF_FALSE;
			} else {
				((T435*)(C))->a52 = (T6)(GE_int32(0));
				((T435*)(C))->a53 = ((T435*)(C))->a20;
				((T435*)(C))->a54 = ((T435*)(C))->a21;
				((T435*)(C))->a55 = ((T435*)(C))->a19;
			}
			l1 = ((T435*)(C))->a18;
			l2 = l1;
			t1 = (((T205*)(GE_void(((T435*)(C))->a17)))->a1);
			if (t1) {
				l3 = ((T6)((((T435*)(C))->a56)+((T6)(GE_int32(1)))));
			} else {
				l3 = ((T435*)(C))->a56;
			}
			if (EIF_FALSE) {
				((T63*)(GE_void(((T435*)(C))->a57)))->z2[(T6)(GE_int32(0))] = (l3);
				((T435*)(C))->a58 = (T6)(GE_int32(1));
			}
			l7 = (T6)(GE_int32(2));
			break;
		case (T6)(T6)(GE_int32(2)):
			l13 = EIF_FALSE;
			while (!(l13)) {
				t1 = ((((T435*)(C))->a59)!=(EIF_VOID));
				if (t1) {
					t1 = ((((T435*)(C))->a60)!=(EIF_VOID));
					if (t1) {
						t2 = (((T15*)(GE_void(((T435*)(C))->a60)))->z2[l1]);
						t3 = ((T6)(t2));
						l8 = (((T63*)(GE_void(((T435*)(C))->a59)))->z2[t3]);
					} else {
						t2 = (T324f6(GE_void(((T435*)(C))->a61), l1));
						t3 = ((T6)(t2));
						l8 = (((T63*)(GE_void(((T435*)(C))->a59)))->z2[t3]);
					}
				} else {
					t1 = ((((T435*)(C))->a60)!=(EIF_VOID));
					if (t1) {
						t2 = (((T15*)(GE_void(((T435*)(C))->a60)))->z2[l1]);
						l8 = ((T6)(t2));
					} else {
						t2 = (T324f6(GE_void(((T435*)(C))->a61), l1));
						l8 = ((T6)(t2));
					}
				}
				t1 = EIF_FALSE;
				t1 = ((T1)(!(t1)));
				if (t1) {
					t3 = (((T63*)(GE_void(((T435*)(C))->a62)))->z2[l3]);
					t1 = ((t3)!=((T6)(GE_int32(0))));
				}
				if (t1) {
					((T435*)(C))->a63 = l3;
					((T435*)(C))->a64 = l1;
				}
				t3 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[l3]);
				t3 = ((T6)((t3)+(l8)));
				t3 = (((T63*)(GE_void(((T435*)(C))->a65)))->z2[t3]);
				t1 = ((t3)==(l3));
				while (!(t1)) {
					l3 = (((T63*)(GE_void(((T435*)(C))->a67)))->z2[l3]);
					t1 = ((((T435*)(C))->a68)!=(EIF_VOID));
					if (t1) {
						t1 = (T6f5(&l3, (T6)(GE_int32(54))));
					}
					if (t1) {
						l8 = (((T63*)(GE_void(((T435*)(C))->a68)))->z2[l8]);
					}
					t3 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[l3]);
					t3 = ((T6)((t3)+(l8)));
					t3 = (((T63*)(GE_void(((T435*)(C))->a65)))->z2[t3]);
					t1 = ((t3)==(l3));
				}
				t3 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[l3]);
				t3 = ((T6)((t3)+(l8)));
				l3 = (((T63*)(GE_void(((T435*)(C))->a69)))->z2[t3]);
				if (EIF_FALSE) {
					((T63*)(GE_void(((T435*)(C))->a57)))->z2[((T435*)(C))->a58] = (l3);
					((T435*)(C))->a58 = ((T6)((((T435*)(C))->a58)+((T6)(GE_int32(1)))));
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				l13 = ((l3)==((T6)(GE_int32(53))));
			}
			t1 = EIF_FALSE;
			t1 = ((T1)(!(t1)));
			if (t1) {
				l1 = ((T435*)(C))->a64;
				l3 = ((T435*)(C))->a63;
			}
			l7 = (T6)(GE_int32(3));
			break;
		case (T6)(T6)(GE_int32(3)):
			t1 = EIF_FALSE;
			t1 = ((T1)(!(t1)));
			if (t1) {
				l6 = (((T63*)(GE_void(((T435*)(C))->a62)))->z2[l3]);
				l7 = (T6)(GE_int32(4));
			} else {
				((T435*)(C))->a58 = ((T6)((((T435*)(C))->a58)-((T6)(GE_int32(1)))));
				l3 = (((T63*)(GE_void(((T435*)(C))->a57)))->z2[((T435*)(C))->a58]);
				((T435*)(C))->a70 = (((T63*)(GE_void(((T435*)(C))->a62)))->z2[l3]);
				l7 = (T6)(GE_int32(5));
			}
			break;
		case (T6)(T6)(GE_int32(5)):
			l9 = EIF_FALSE;
			while (!(l9)) {
				t1 = ((((T435*)(C))->a70)!=((T6)(GE_int32(0))));
				if (t1) {
					t3 = ((T6)((l3)+((T6)(GE_int32(1)))));
					t3 = (((T63*)(GE_void(((T435*)(C))->a62)))->z2[t3]);
					t1 = ((T1)((((T435*)(C))->a70)<(t3)));
				}
				if (t1) {
					l6 = ((GE_void(((T435*)(C))->a71), ((T435*)(C))->a70, (T6)0));
					if (EIF_FALSE) {
						t3 = (T6)(GE_int32(20));
						t3 = ((T6)(-(t3)));
						t1 = ((T1)((l6)<(t3)));
						if (!(t1)) {
							t1 = ((((T435*)(C))->a72)!=((T6)(GE_int32(0))));
						}
						if (t1) {
							t1 = ((l6)==(((T435*)(C))->a72));
							if (t1) {
								((T435*)(C))->a72 = (T6)(GE_int32(0));
								t3 = ((T6)(-(l6)));
								l6 = ((T6)((t3)-((T6)(GE_int32(20)))));
								l9 = EIF_TRUE;
							} else {
								((T435*)(C))->a70 = ((T6)((((T435*)(C))->a70)+((T6)(GE_int32(1)))));
							}
						} else {
							t1 = ((T1)((l6)<((T6)(GE_int32(0)))));
							if (t1) {
								((T435*)(C))->a72 = ((T6)((l6)-((T6)(GE_int32(20)))));
								if (EIF_FALSE) {
									((T435*)(C))->a73 = l1;
									((T435*)(C))->a74 = ((T435*)(C))->a58;
									((T435*)(C))->a75 = ((T435*)(C))->a70;
								}
								((T435*)(C))->a70 = ((T6)((((T435*)(C))->a70)+((T6)(GE_int32(1)))));
							} else {
								((T435*)(C))->a73 = l1;
								((T435*)(C))->a74 = ((T435*)(C))->a58;
								((T435*)(C))->a75 = ((T435*)(C))->a70;
								l9 = EIF_TRUE;
							}
						}
					} else {
						((T435*)(C))->a73 = l1;
						l9 = EIF_TRUE;
					}
				} else {
					l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
					((T435*)(C))->a58 = ((T6)((((T435*)(C))->a58)-((T6)(GE_int32(1)))));
					l3 = (((T63*)(GE_void(((T435*)(C))->a57)))->z2[((T435*)(C))->a58]);
					((T435*)(C))->a70 = (((T63*)(GE_void(((T435*)(C))->a62)))->z2[l3]);
				}
			}
			l10 = ((T435*)(C))->a20;
			l11 = ((T435*)(C))->a21;
			l12 = ((T435*)(C))->a19;
			l7 = (T6)(GE_int32(4));
			break;
		case (T6)(T6)(GE_int32(4)):
			l2 = ((T6)((l2)-(((T435*)(C))->a52)));
			((T435*)(C))->a45 = l2;
			((T435*)(C))->a18 = l1;
			l7 = (T6)(GE_int32(1));
			t1 = ((l6)==((T6)(GE_int32(0))));
			if (t1) {
				t1 = EIF_FALSE;
				t1 = ((T1)(!(t1)));
				if (t1) {
					l1 = ((T435*)(C))->a64;
					l2 = ((T6)((l2)+(((T435*)(C))->a52)));
					l3 = ((T435*)(C))->a63;
					l7 = (T6)(GE_int32(3));
				} else {
					((T435*)(C))->a35 = (T6)(GE_int32(-1));
					T435f241(C, GE_ms("fatal scanner internal error: no action found", 45));
				}
			} else {
				t1 = ((l6)==((T6)(GE_int32(21))));
				if (t1) {
					t3 = ((T6)((l1)-(l2)));
					l5 = ((T6)((t3)-((T6)(GE_int32(1)))));
					t3 = (((T205*)(GE_void(((T435*)(C))->a17)))->a2);
					t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
					t1 = (T6f9(&(((T435*)(C))->a18), t3));
					if (t1) {
						((T435*)(C))->a18 = ((T6)((l2)+(l5)));
						l3 = (T435f127(C));
						l4 = (T435f128(C, l3));
						l2 = ((T6)((l2)+(((T435*)(C))->a52)));
						t1 = ((l4)!=((T6)(GE_int32(0))));
						if (t1) {
							l1 = ((T6)((((T435*)(C))->a18)+((T6)(GE_int32(1)))));
							((T435*)(C))->a18 = l1;
							l3 = l4;
							l7 = (T6)(GE_int32(2));
						} else {
							if (EIF_FALSE) {
								l1 = ((T435*)(C))->a18;
								((T435*)(C))->a58 = ((T6)((((T435*)(C))->a58)-((T6)(GE_int32(1)))));
							} else {
								l1 = ((T435*)(C))->a64;
								l3 = ((T435*)(C))->a63;
							}
							l7 = (T6)(GE_int32(3));
						}
					} else {
						((T435*)(C))->a18 = ((T6)((((T435*)(C))->a18)-((T6)(GE_int32(1)))));
						T435f242(C);
						t1 = (((T205*)(GE_void(((T435*)(C))->a17)))->a3);
						if (t1) {
							l3 = (T435f127(C));
							l1 = ((T435*)(C))->a18;
							l2 = ((T6)((((T435*)(C))->a45)+(((T435*)(C))->a52)));
							l7 = (T6)(GE_int32(2));
						} else {
							t3 = ((T6)((((T435*)(C))->a18)-(((T435*)(C))->a45)));
							t3 = ((T6)((t3)-(((T435*)(C))->a52)));
							t1 = ((t3)!=((T6)(GE_int32(0))));
							if (t1) {
								l3 = (T435f127(C));
								l1 = ((T435*)(C))->a18;
								l2 = ((T6)((((T435*)(C))->a45)+(((T435*)(C))->a52)));
								l7 = (T6)(GE_int32(3));
							} else {
								t1 = (T435f129(C));
								if (t1) {
									l2 = ((T435*)(C))->a45;
									l1 = ((T435*)(C))->a18;
									t3 = ((T6)((((T435*)(C))->a56)-((T6)(GE_int32(1)))));
									t3 = ((T6)((t3)/((T6)(GE_int32(2)))));
									T435f243(C, t3);
								}
							}
						}
					}
				} else {
					T435f244(C, l6);
					if (((T435*)(C))->a76) {
						((T435*)(C))->a76 = EIF_FALSE;
						((T435*)(C))->a20 = l10;
						((T435*)(C))->a21 = l11;
						((T435*)(C))->a19 = l12;
						l1 = ((T435*)(C))->a73;
						if (EIF_FALSE) {
							((T435*)(C))->a70 = ((T435*)(C))->a75;
							((T435*)(C))->a58 = ((T435*)(C))->a74;
							t3 = ((T6)((((T435*)(C))->a58)-((T6)(GE_int32(1)))));
							l3 = (((T63*)(GE_void(((T435*)(C))->a57)))->z2[t3]);
						}
						((T435*)(C))->a70 = ((T6)((((T435*)(C))->a70)+((T6)(GE_int32(1)))));
						l7 = (T6)(GE_int32(5));
					}
				}
			}
			break;
		default:
			break;
		}
		t1 = ((((T435*)(C))->a35)!=((T6)(GE_int32(-2))));
	}
}

/* LX_WILDCARD_PARSER.yy_execute_action */
void T435f244(T0* C, T6 a1)
{
	T1 t1;
	T2 t2;
	T6 t3;
	T0* t4;
	t1 = (T6f9(&a1, (T6)(GE_int32(10))));
	if (t1) {
		t1 = (T6f9(&a1, (T6)(GE_int32(5))));
		if (t1) {
			t1 = (T6f9(&a1, (T6)(GE_int32(3))));
			if (t1) {
				t1 = (T6f9(&a1, (T6)(GE_int32(2))));
				if (t1) {
					t1 = ((a1)==((T6)(GE_int32(1))));
					if (t1) {
						((T435*)(C))->a35 = (T6)(GE_int32(34));
						T435f254(C, (T6)(GE_int32(1)));
					} else {
						((T435*)(C))->a103 = (T435f175(C));
						t1 = (T463f29(GE_void(((T435*)(C))->a14), ((T435*)(C))->a103));
						if (t1) {
							((T435*)(C))->a35 = (T6)(GE_int32(261));
							((T435*)(C))->a88 = (T463f27(GE_void(((T435*)(C))->a14), ((T435*)(C))->a103));
						} else {
							((T435*)(C))->a35 = (T6)(GE_int32(91));
							((T435*)(C))->a92 = ((T435*)(C))->a103;
							T435f255(C, (T6)(GE_int32(1)));
							T435f254(C, (T6)(GE_int32(2)));
						}
						((T435*)(C))->a103 = EIF_VOID;
					}
				} else {
					((T435*)(C))->a35 = (T6)(GE_int32(259));
				}
			} else {
				t1 = ((a1)==((T6)(GE_int32(4))));
				if (t1) {
					((T435*)(C))->a35 = (T6)(GE_int32(258));
				} else {
					t2 = (T435f181(C, (T6)(GE_int32(1))));
					((T435*)(C))->a35 = ((T6)(t2));
				}
			}
		} else {
			t1 = (T6f9(&a1, (T6)(GE_int32(8))));
			if (t1) {
				t1 = (T6f9(&a1, (T6)(GE_int32(7))));
				if (t1) {
					t1 = ((a1)==((T6)(GE_int32(6))));
					if (t1) {
						((T435*)(C))->a35 = (T6)(GE_int32(260));
						t2 = (T435f181(C, (T6)(GE_int32(1))));
						t3 = ((T6)(t2));
						T435f256(C, t3);
					} else {
						t2 = (T435f181(C, (T6)(GE_int32(1))));
						t3 = ((T6)(t2));
						T435f256(C, t3);
						((T435*)(C))->a35 = (T6)(GE_int32(260));
					}
				} else {
					((T435*)(C))->a35 = (T6)(GE_int32(34));
					T435f254(C, (T6)(GE_int32(0)));
				}
			} else {
				t1 = ((a1)==((T6)(GE_int32(9))));
				if (t1) {
					T435f257(C);
					((T435*)(C))->a15 = ((T6)((((T435*)(C))->a15)+((T6)(GE_int32(1)))));
					((T435*)(C))->a35 = (T6)(GE_int32(34));
					T435f254(C, (T6)(GE_int32(0)));
				} else {
					((T435*)(C))->a35 = (T6)(GE_int32(260));
					T435f258(C);
					t3 = (T435f184(C));
					t1 = ((t3)==((T6)(GE_int32(2))));
					if (t1) {
						T435f254(C, (T6)(GE_int32(3)));
					}
				}
			}
		}
	} else {
		t1 = (T6f9(&a1, (T6)(GE_int32(15))));
		if (t1) {
			t1 = (T6f9(&a1, (T6)(GE_int32(13))));
			if (t1) {
				t1 = (T6f9(&a1, (T6)(GE_int32(12))));
				if (t1) {
					t1 = ((a1)==((T6)(GE_int32(11))));
					if (t1) {
						((T435*)(C))->a18 = ((T6)((((T435*)(C))->a18)-((T6)(GE_int32(1)))));
						T435f254(C, (T6)(GE_int32(3)));
						((T435*)(C))->a35 = (T6)(GE_int32(94));
					} else {
						((T435*)(C))->a18 = ((T6)((((T435*)(C))->a18)-((T6)(GE_int32(1)))));
						((T435*)(C))->a35 = (T6)(GE_int32(94));
					}
				} else {
					((T435*)(C))->a35 = (T6)(GE_int32(260));
					t2 = (T435f181(C, (T6)(GE_int32(1))));
					t3 = ((T6)(t2));
					T435f256(C, t3);
					T435f254(C, (T6)(GE_int32(3)));
				}
			} else {
				t1 = ((a1)==((T6)(GE_int32(14))));
				if (t1) {
					T435f259(C);
					((T435*)(C))->a15 = ((T6)((((T435*)(C))->a15)+((T6)(GE_int32(1)))));
					((T435*)(C))->a35 = (T6)(GE_int32(93));
					T435f254(C, (T6)(GE_int32(0)));
				} else {
					((T435*)(C))->a18 = ((T6)((((T435*)(C))->a18)-((T6)(GE_int32(1)))));
					((T435*)(C))->a35 = (T6)(GE_int32(45));
				}
			}
		} else {
			t1 = (T6f9(&a1, (T6)(GE_int32(18))));
			if (t1) {
				t1 = (T6f9(&a1, (T6)(GE_int32(17))));
				if (t1) {
					t1 = ((a1)==((T6)(GE_int32(16))));
					if (t1) {
						((T435*)(C))->a35 = (T6)(GE_int32(260));
						t2 = (T435f181(C, (T6)(GE_int32(1))));
						t3 = ((T6)(t2));
						T435f256(C, t3);
					} else {
						((T435*)(C))->a35 = (T6)(GE_int32(93));
						T435f254(C, (T6)(GE_int32(0)));
					}
				} else {
					T435f259(C);
					((T435*)(C))->a15 = ((T6)((((T435*)(C))->a15)+((T6)(GE_int32(1)))));
					((T435*)(C))->a35 = (T6)(GE_int32(93));
					T435f254(C, (T6)(GE_int32(0)));
				}
			} else {
				t1 = ((a1)==((T6)(GE_int32(19))));
				if (t1) {
					t2 = (T435f181(C, (T6)(GE_int32(1))));
					t1 = ((t2)==((T2)('\n')));
					if (t1) {
						T435f260(C, GE_ms("\045N", 2));
						((T435*)(C))->a15 = ((T6)((((T435*)(C))->a15)+((T6)(GE_int32(1)))));
					} else {
						t4 = (T435f175(C));
						T435f260(C, t4);
					}
				} else {
					((T435*)(C))->a35 = (T6)(GE_int32(-1));
					T435f241(C, GE_ms("scanner jammed", 14));
				}
			}
		}
	}
}

/* LX_WILDCARD_PARSER.report_bad_character_error */
void T435f260(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T435f189(C));
	l1 = T477c7(t1, ((T435*)(C))->a15, a1);
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* LX_BAD_CHARACTER_ERROR.make */
T0* T477c7(T0* a1, T6 a2, T0* a3)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T477));
	*(T477*)C = GE_default477;
	((T477*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(3)));
	T33f12(GE_void(((T477*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T477*)(C))->a1), t1, (T6)(GE_int32(2)));
	T33f12(GE_void(((T477*)(C))->a1), a3, (T6)(GE_int32(3)));
	return C;
}

/* LX_WILDCARD_PARSER.report_bad_character_class_error */
void T435f259(T0* C)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T435f189(C));
	l1 = T476c7(t1, ((T435*)(C))->a15);
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* LX_BAD_CHARACTER_CLASS_ERROR.make */
T0* T476c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T476));
	*(T476*)C = GE_default476;
	((T476*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T476*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T476*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.start_condition */
T6 T435f184(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T435*)(C))->a56)-((T6)(GE_int32(1)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* LX_WILDCARD_PARSER.process_escaped_character */
void T435f258(T0* C)
{
	T2 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T6 t4;
	l1 = (T435f181(C, (T6)(GE_int32(2))));
	switch (l1) {
	case (T2)(T2)('b'):
		l2 = (T6)(GE_int32(8));
		break;
	case (T2)(T2)('f'):
		l2 = (T6)(GE_int32(12));
		break;
	case (T2)(T2)('n'):
		l2 = (T6)(GE_int32(10));
		break;
	case (T2)(T2)('r'):
		l2 = (T6)(GE_int32(13));
		break;
	case (T2)(T2)('t'):
		l2 = (T6)(GE_int32(9));
		break;
	case (T2)(T2)('a'):
		l2 = (T6)(GE_int32(7));
		break;
	case (T2)(T2)('v'):
		l2 = (T6)(GE_int32(13));
		break;
	case (T2)'0':
	case (T2)'1':
	case (T2)'2':
	case (T2)'3':
	case (T2)'4':
	case (T2)'5':
	case (T2)'6':
	case (T2)'7':
		l4 = (T435f205(C));
		l2 = (T6)(GE_int32(0));
		l3 = (T6)(GE_int32(2));
		t1 = (T6f1(&l3, l4));
		while (!(t1)) {
			t2 = ((T6)((l2)*((T6)(GE_int32(8)))));
			t3 = (T435f181(C, l3));
			t4 = ((T6)(t3));
			t2 = ((T6)((t2)+(t4)));
			l2 = ((T6)((t2)-((T6)(GE_int32(48)))));
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l3, l4));
		}
		break;
	case (T2)(T2)('x'):
	case (T2)(T2)('X'):
		l4 = (T435f205(C));
		t1 = ((l4)==((T6)(GE_int32(2))));
		if (t1) {
			l2 = ((T6)(l1));
		} else {
			l2 = (T6)(GE_int32(0));
			l3 = (T6)(GE_int32(3));
			t1 = (T6f1(&l3, l4));
			while (!(t1)) {
				l2 = ((T6)((l2)*((T6)(GE_int32(16)))));
				l1 = (T435f181(C, l3));
				switch (l1) {
				case (T2)'0':
				case (T2)'1':
				case (T2)'2':
				case (T2)'3':
				case (T2)'4':
				case (T2)'5':
				case (T2)'6':
				case (T2)'7':
				case (T2)'8':
				case (T2)'9':
					t2 = ((T6)(l1));
					t2 = ((T6)((l2)+(t2)));
					l2 = ((T6)((t2)-((T6)(GE_int32(48)))));
					break;
				case (T2)'a':
				case (T2)'b':
				case (T2)'c':
				case (T2)'d':
				case (T2)'e':
				case (T2)'f':
				case (T2)'g':
				case (T2)'h':
				case (T2)'i':
				case (T2)'j':
				case (T2)'k':
				case (T2)'l':
				case (T2)'m':
				case (T2)'n':
				case (T2)'o':
				case (T2)'p':
				case (T2)'q':
				case (T2)'r':
				case (T2)'s':
				case (T2)'t':
				case (T2)'u':
				case (T2)'v':
				case (T2)'w':
				case (T2)'x':
				case (T2)'y':
				case (T2)'z':
					t2 = ((T6)(l1));
					t2 = ((T6)((l2)+(t2)));
					t2 = ((T6)((t2)-((T6)(GE_int32(97)))));
					l2 = ((T6)((t2)+((T6)(GE_int32(10)))));
					break;
				case (T2)'A':
				case (T2)'B':
				case (T2)'C':
				case (T2)'D':
				case (T2)'E':
				case (T2)'F':
				case (T2)'G':
				case (T2)'H':
				case (T2)'I':
				case (T2)'J':
				case (T2)'K':
				case (T2)'L':
				case (T2)'M':
				case (T2)'N':
				case (T2)'O':
				case (T2)'P':
				case (T2)'Q':
				case (T2)'R':
				case (T2)'S':
				case (T2)'T':
				case (T2)'U':
				case (T2)'V':
				case (T2)'W':
				case (T2)'X':
				case (T2)'Y':
				case (T2)'Z':
					t2 = ((T6)(l1));
					t2 = ((T6)((l2)+(t2)));
					t2 = ((T6)((t2)-((T6)(GE_int32(65)))));
					l2 = ((T6)((t2)+((T6)(GE_int32(10)))));
					break;
				default:
					break;
				}
				l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l3, l4));
			}
		}
		break;
	default:
		l2 = ((T6)(l1));
		break;
	}
	T435f256(C, l2);
}

/* LX_WILDCARD_PARSER.text_count */
T6 T435f205(T0* C)
{
	T6 R = 0;
	R = ((T6)((((T435*)(C))->a18)-(((T435*)(C))->a45)));
	return R;
}

/* LX_WILDCARD_PARSER.report_missing_quote_error */
void T435f257(T0* C)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T435f189(C));
	l1 = T475c7(t1, ((T435*)(C))->a15);
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* LX_MISSING_QUOTE_ERROR.make */
T0* T475c7(T0* a1, T6 a2)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T475));
	*(T475*)C = GE_default475;
	((T475*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(2)));
	T33f12(GE_void(((T475*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T475*)(C))->a1), t1, (T6)(GE_int32(2)));
	return C;
}

/* LX_WILDCARD_PARSER.process_character */
void T435f256(T0* C, T6 a1)
{
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (((T436*)(GE_void(((T435*)(C))->a11)))->a9);
	t2 = ((T1)((a1)<(t1)));
	if (t2) {
		((T435*)(C))->a84 = a1;
	} else {
		t3 = (T435f175(C));
		T435f266(C, t3);
		((T435*)(C))->a84 = (T6)(GE_int32(0));
	}
}

/* LX_WILDCARD_PARSER.report_character_out_of_range_error */
void T435f266(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T435f189(C));
	l1 = T481c7(t1, ((T435*)(C))->a15, a1);
	T28f11(GE_void(((T435*)(C))->a12), l1);
	((T435*)(C))->a1 = EIF_FALSE;
}

/* LX_CHARACTER_OUT_OF_RANGE_ERROR.make */
T0* T481c7(T0* a1, T6 a2, T0* a3)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T481));
	*(T481*)C = GE_default481;
	((T481*)(C))->a1 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(3)));
	T33f12(GE_void(((T481*)(C))->a1), a1, (T6)(GE_int32(1)));
	t1 = (T6f12(&a2));
	T33f12(GE_void(((T481*)(C))->a1), t1, (T6)(GE_int32(2)));
	T33f12(GE_void(((T481*)(C))->a1), a3, (T6)(GE_int32(3)));
	return C;
}

/* LX_WILDCARD_PARSER.text_item */
T2 T435f181(T0* C, T6 a1)
{
	T2 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T435*)(C))->a60)!=(EIF_VOID));
	if (t1) {
		t2 = ((T6)((((T435*)(C))->a45)+(a1)));
		t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
		R = (((T15*)(GE_void(((T435*)(C))->a60)))->z2[t2]);
	} else {
		t2 = ((T6)((((T435*)(C))->a45)+(a1)));
		t2 = ((T6)((t2)-((T6)(GE_int32(1)))));
		R = (T324f6(GE_void(((T435*)(C))->a61), t2));
	}
	return R;
}

/* LX_WILDCARD_PARSER.less */
void T435f255(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	if (EIF_FALSE) {
		l2 = ((T6)((((T435*)(C))->a45)+(a1)));
		l1 = ((T6)((((T435*)(C))->a18)-(l2)));
		((T435*)(C))->a18 = l2;
		t1 = ((T1)((l1)<(((T435*)(C))->a21)));
		if (t1) {
			((T435*)(C))->a21 = ((T6)((((T435*)(C))->a21)-(l1)));
		} else {
			l3 = ((T435*)(C))->a52;
			((T435*)(C))->a52 = (T6)(GE_int32(0));
			((T435*)(C))->a20 = ((T435*)(C))->a53;
			((T435*)(C))->a21 = ((T435*)(C))->a54;
			T435f265(C);
			((T435*)(C))->a52 = l3;
		}
	} else {
		((T435*)(C))->a18 = ((T6)((((T435*)(C))->a45)+(a1)));
	}
	((T435*)(C))->a19 = ((T6)((((T435*)(C))->a55)+(a1)));
}

/* LX_WILDCARD_PARSER.yy_set_line_column */
void T435f265(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 l5 = 0;
	T2 l6 = 0;
	T1 t1;
	l1 = ((T6)((((T435*)(C))->a18)-((T6)(GE_int32(1)))));
	l2 = ((T6)((((T435*)(C))->a45)+(((T435*)(C))->a52)));
	t1 = ((T1)((l1)<(l2)));
	if (!(t1)) {
		t1 = (l5);
	}
	while (!(t1)) {
		t1 = ((((T435*)(C))->a60)!=(EIF_VOID));
		if (t1) {
			l6 = (((T15*)(GE_void(((T435*)(C))->a60)))->z2[l1]);
		} else {
			l6 = (T324f6(GE_void(((T435*)(C))->a61), l1));
		}
		t1 = ((l6)==((T2)('\n')));
		if (t1) {
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
			l5 = EIF_TRUE;
		} else {
			l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(l2)));
		if (!(t1)) {
			t1 = (l5);
		}
	}
	t1 = ((T1)((l1)<(l2)));
	while (!(t1)) {
		t1 = ((((T435*)(C))->a60)!=(EIF_VOID));
		if (t1) {
			l6 = (((T15*)(GE_void(((T435*)(C))->a60)))->z2[l1]);
		} else {
			l6 = (T324f6(GE_void(((T435*)(C))->a61), l1));
		}
		t1 = ((l6)==((T2)('\n')));
		if (t1) {
			l3 = ((T6)((l3)+((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(l2)));
	}
	if (l5) {
		((T435*)(C))->a20 = ((T6)((((T435*)(C))->a20)+(l3)));
		((T435*)(C))->a21 = ((T6)((l4)+((T6)(GE_int32(1)))));
	} else {
		((T435*)(C))->a21 = ((T6)((((T435*)(C))->a21)+(l4)));
	}
}

/* LX_WILDCARD_PARSER.text */
T0* T435f175(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = ((T1)((((T435*)(C))->a45)<(((T435*)(C))->a18)));
	if (t1) {
		t2 = ((T6)((((T435*)(C))->a18)-((T6)(GE_int32(1)))));
		R = (T324f3(GE_void(((T435*)(C))->a61), ((T435*)(C))->a45, t2));
	} else {
		R = T17c33((T6)(GE_int32(0)));
	}
	return R;
}

/* KL_CHARACTER_BUFFER.substring */
T0* T324f3(T0* C, T6 a1, T6 a2)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	t1 = ((T1)((a2)<(a1)));
	if (t1) {
		R = T17c33((T6)(GE_int32(0)));
	} else {
		t1 = ((((T324*)(C))->a1)!=(EIF_VOID));
		if (t1) {
			t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
			t3 = ((T6)((a2)+((T6)(GE_int32(1)))));
			R = (T17f10(GE_void(((T324*)(C))->a2), t2, t3));
		} else {
			R = (T17f10(GE_void(((T324*)(C))->a2), a1, a2));
		}
	}
	return R;
}

/* LX_WILDCARD_PARSER.set_start_condition */
void T435f254(T0* C, T6 a1)
{
	T6 t1;
	t1 = (T6)(GE_int32(2));
	t1 = ((T6)((t1)*(a1)));
	((T435*)(C))->a56 = ((T6)((t1)+((T6)(GE_int32(1)))));
}

/* LX_WILDCARD_PARSER.yy_execute_eof_action */
void T435f243(T0* C, T6 a1)
{
	T435f253(C);
}

/* LX_WILDCARD_PARSER.terminate */
void T435f253(T0* C)
{
	((T435*)(C))->a35 = (T6)(GE_int32(0));
}

/* LX_WILDCARD_PARSER.wrap */
T1 T435f129(T0* C)
{
	T1 R = 0;
	R = EIF_TRUE;
	return R;
}

/* LX_WILDCARD_PARSER.yy_refill_input_buffer */
void T435f242(T0* C)
{
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	T205f13(GE_void(((T435*)(C))->a17), ((T435*)(C))->a45);
	T205f15(GE_void(((T435*)(C))->a17));
	t1 = (((T205*)(GE_void(((T435*)(C))->a17)))->a4);
	T435f240(C, t1);
	l1 = (((T205*)(GE_void(((T435*)(C))->a17)))->a5);
	t2 = ((T6)((((T435*)(C))->a18)-(((T435*)(C))->a45)));
	((T435*)(C))->a18 = ((T6)((t2)+(l1)));
	((T435*)(C))->a45 = l1;
}

/* LX_WILDCARD_PARSER.yy_set_content */
void T435f240(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	((T435*)(C))->a61 = a1;
	((T435*)(C))->a60 = (((T324*)(GE_void(a1)))->a1);
	if (EIF_FALSE) {
		t1 = (T324f4(GE_void(a1)));
		l1 = ((T6)((t1)+((T6)(GE_int32(1)))));
		t1 = (((T63*)(GE_void(((T435*)(C))->a57)))->z1);
		t2 = ((T1)((t1)<(l1)));
		if (t2) {
			t3 = (T435f160(C));
			((T435*)(C))->a57 = (T65f1(GE_void(t3), ((T435*)(C))->a57, l1));
		}
	}
}

/* KL_CHARACTER_BUFFER.count */
T6 T324f4(T0* C)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T324*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((T17*)(GE_void(((T324*)(C))->a2)))->a2);
		R = ((T6)((t2)-((T6)(GE_int32(1)))));
	} else {
		R = (((T17*)(GE_void(((T324*)(C))->a2)))->a2);
	}
	return R;
}

/* YY_BUFFER.fill */
void T205f15(T0* C)
{
	((T205*)(C))->a3 = EIF_FALSE;
}

/* YY_BUFFER.set_index */
void T205f13(T0* C, T6 a1)
{
	((T205*)(C))->a5 = a1;
}

/* LX_WILDCARD_PARSER.yy_null_trans_state */
T6 T435f128(T0* C, T6 a1)
{
	T6 R = 0;
	T6 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = EIF_FALSE;
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((T63*)(GE_void(((T435*)(C))->a62)))->z2[a1]);
		t1 = ((t2)!=((T6)(GE_int32(0))));
		if (t1) {
			((T435*)(C))->a63 = a1;
			((T435*)(C))->a64 = ((T435*)(C))->a18;
		}
	}
	R = a1;
	l1 = (T6)(GE_int32(1));
	t2 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[R]);
	t2 = ((T6)((t2)+(l1)));
	t2 = (((T63*)(GE_void(((T435*)(C))->a65)))->z2[t2]);
	t1 = ((t2)==(R));
	while (!(t1)) {
		R = (((T63*)(GE_void(((T435*)(C))->a67)))->z2[R]);
		t1 = ((((T435*)(C))->a68)!=(EIF_VOID));
		if (t1) {
			t1 = (T6f5(&R, (T6)(GE_int32(54))));
		}
		if (t1) {
			l1 = (((T63*)(GE_void(((T435*)(C))->a68)))->z2[l1]);
		}
		t2 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[R]);
		t2 = ((T6)((t2)+(l1)));
		t2 = (((T63*)(GE_void(((T435*)(C))->a65)))->z2[t2]);
		t1 = ((t2)==(R));
	}
	t2 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[R]);
	t2 = ((T6)((t2)+(l1)));
	R = (((T63*)(GE_void(((T435*)(C))->a69)))->z2[t2]);
	if (EIF_FALSE) {
		((T63*)(GE_void(((T435*)(C))->a57)))->z2[((T435*)(C))->a58] = (R);
		((T435*)(C))->a58 = ((T6)((((T435*)(C))->a58)+((T6)(GE_int32(1)))));
	}
	l2 = ((R)==((T6)(GE_int32(53))));
	if (l2) {
		R = (T6)(GE_int32(0));
	}
	return R;
}

/* LX_WILDCARD_PARSER.yy_previous_state */
T6 T435f127(T0* C)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	t1 = (((T205*)(GE_void(((T435*)(C))->a17)))->a1);
	if (t1) {
		R = ((T6)((((T435*)(C))->a56)+((T6)(GE_int32(1)))));
	} else {
		R = ((T435*)(C))->a56;
	}
	if (EIF_FALSE) {
		((T63*)(GE_void(((T435*)(C))->a57)))->z2[(T6)(GE_int32(0))] = (R);
		((T435*)(C))->a58 = (T6)(GE_int32(1));
	}
	l1 = ((T6)((((T435*)(C))->a45)+(((T435*)(C))->a52)));
	l2 = ((T435*)(C))->a18;
	t1 = (T6f5(&l1, l2));
	while (!(t1)) {
		t1 = ((((T435*)(C))->a60)!=(EIF_VOID));
		if (t1) {
			t2 = (((T15*)(GE_void(((T435*)(C))->a60)))->z2[l1]);
			l3 = ((T6)(t2));
		} else {
			t2 = (T324f6(GE_void(((T435*)(C))->a61), l1));
			l3 = ((T6)(t2));
		}
		t1 = ((l3)==((T6)(GE_int32(0))));
		if (t1) {
			l3 = (T6)(GE_int32(1));
		} else {
			t1 = ((((T435*)(C))->a59)!=(EIF_VOID));
			if (t1) {
				l3 = (((T63*)(GE_void(((T435*)(C))->a59)))->z2[l3]);
			}
		}
		t1 = EIF_FALSE;
		t1 = ((T1)(!(t1)));
		if (t1) {
			t3 = (((T63*)(GE_void(((T435*)(C))->a62)))->z2[R]);
			t1 = ((t3)!=((T6)(GE_int32(0))));
			if (t1) {
				((T435*)(C))->a63 = R;
				((T435*)(C))->a64 = l1;
			}
		}
		t3 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[R]);
		t3 = ((T6)((t3)+(l3)));
		t3 = (((T63*)(GE_void(((T435*)(C))->a65)))->z2[t3]);
		t1 = ((t3)==(R));
		while (!(t1)) {
			R = (((T63*)(GE_void(((T435*)(C))->a67)))->z2[R]);
			t1 = ((((T435*)(C))->a68)!=(EIF_VOID));
			if (t1) {
				t1 = (T6f5(&R, (T6)(GE_int32(54))));
			}
			if (t1) {
				l3 = (((T63*)(GE_void(((T435*)(C))->a68)))->z2[l3]);
			}
			t3 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[R]);
			t3 = ((T6)((t3)+(l3)));
			t3 = (((T63*)(GE_void(((T435*)(C))->a65)))->z2[t3]);
			t1 = ((t3)==(R));
		}
		t3 = (((T63*)(GE_void(((T435*)(C))->a66)))->z2[R]);
		t3 = ((T6)((t3)+(l3)));
		R = (((T63*)(GE_void(((T435*)(C))->a69)))->z2[t3]);
		if (EIF_FALSE) {
			((T63*)(GE_void(((T435*)(C))->a57)))->z2[((T435*)(C))->a58] = (R);
			((T435*)(C))->a58 = ((T6)((((T435*)(C))->a58)+((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f5(&l1, l2));
	}
	return R;
}

/* LX_WILDCARD_PARSER.fatal_error */
void T435f241(T0* C, T0* a1)
{
	T0* t1;
	t1 = (T435f171(C));
	t1 = (T46f1(GE_void(t1)));
	T47f10(GE_void(t1), a1);
	t1 = (T435f171(C));
	t1 = (T46f1(GE_void(t1)));
	T47f18(GE_void(t1), (T2)('\n'));
}

/* KL_STDERR_FILE.put_character */
void T47f18(T0* C, T2 a1)
{
	T47f19(C, a1);
}

/* KL_STDERR_FILE.old_put_character */
void T47f19(T0* C, T2 a1)
{
	T47f20(C, ((T47*)(C))->a1, a1);
}

/* KL_STDERR_FILE.console_pc */
void T47f20(T0* C, T14 a1, T2 a2)
{
	console_pc((FILE *)a1,( EIF_CHARACTER)a2);
}

/* LX_WILDCARD_PARSER.std */
T0* T435f171(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* KL_CHARACTER_BUFFER.item */
T2 T324f6(T0* C, T6 a1)
{
	T2 R = 0;
	T1 t1;
	t1 = ((((T324*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		R = (((T15*)(GE_void(((T324*)(C))->a1)))->z2[a1]);
	} else {
		R = (T17f9(GE_void(((T324*)(C))->a2), a1));
	}
	return R;
}

/* LX_WILDCARD_PARSER.special_integer_ */
T0* T435f160(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_init_value_stacks */
void T435f229(T0* C)
{
	((T435*)(C))->a46 = (T6)(GE_int32(-1));
	((T435*)(C))->a47 = (T6)(GE_int32(-1));
	((T435*)(C))->a48 = (T6)(GE_int32(-1));
	((T435*)(C))->a49 = (T6)(GE_int32(-1));
	((T435*)(C))->a50 = (T6)(GE_int32(-1));
}

/* LX_WILDCARD_PARSER.yy_clear_all */
void T435f238(T0* C)
{
	T435f251(C);
}

/* LX_WILDCARD_PARSER.clear_all */
void T435f251(T0* C)
{
	T435f264(C);
}

/* LX_WILDCARD_PARSER.clear_stacks */
void T435f264(T0* C)
{
	T435f267(C);
}

/* LX_WILDCARD_PARSER.yy_clear_value_stacks */
void T435f267(T0* C)
{
	T1 t1;
	t1 = ((((T435*)(C))->a78)!=(EIF_VOID));
	if (t1) {
		T136f6(GE_void(((T435*)(C))->a78));
	}
	t1 = ((((T435*)(C))->a82)!=(EIF_VOID));
	if (t1) {
		T63f12(GE_void(((T435*)(C))->a82));
	}
	t1 = ((((T435*)(C))->a86)!=(EIF_VOID));
	if (t1) {
		T465f6(GE_void(((T435*)(C))->a86));
	}
	t1 = ((((T435*)(C))->a90)!=(EIF_VOID));
	if (t1) {
		T32f7(GE_void(((T435*)(C))->a90));
	}
	t1 = ((((T435*)(C))->a95)!=(EIF_VOID));
	if (t1) {
		T470f6(GE_void(((T435*)(C))->a95));
	}
}

/* SPECIAL [LX_NFA].clear_all */
void T470f6(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T470*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T470*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* SPECIAL [STRING_8].clear_all */
void T32f7(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T32*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T32*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* SPECIAL [LX_SYMBOL_CLASS].clear_all */
void T465f6(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T465*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T465*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* SPECIAL [INTEGER_32].clear_all */
void T63f12(T0* C)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T63*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T63*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* SPECIAL [ANY].clear_all */
void T136f6(T0* C)
{
	T6 l1 = 0;
	T0* l2 = 0;
	T6 t1;
	T1 t2;
	t1 = (((T136*)(C))->z1);
	l1 = ((T6)((t1)-((T6)(GE_int32(1)))));
	t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		((T136*)(C))->z2[l1] = (l2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l1)<((T6)(GE_int32(0)))));
	}
}

/* LX_WILDCARD_PARSER.abort */
void T435f232(T0* C)
{
	((T435*)(C))->a22 = (T6)(GE_int32(102));
}

/* LX_WILDCARD_PARSER.set_input_buffer */
void T435f223(T0* C, T0* a1)
{
	T1 t1;
	t1 = ((a1)!=(((T435*)(C))->a17));
	if (t1) {
		T205f13(GE_void(((T435*)(C))->a17), ((T435*)(C))->a18);
		T205f14(GE_void(((T435*)(C))->a17), ((T435*)(C))->a19, ((T435*)(C))->a20, ((T435*)(C))->a21);
		((T435*)(C))->a17 = a1;
		T435f228(C);
	}
}

/* LX_WILDCARD_PARSER.yy_load_input_buffer */
void T435f228(T0* C)
{
	T0* t1;
	t1 = (((T205*)(GE_void(((T435*)(C))->a17)))->a4);
	T435f240(C, t1);
	((T435*)(C))->a18 = (((T205*)(GE_void(((T435*)(C))->a17)))->a5);
	((T435*)(C))->a45 = ((T435*)(C))->a18;
	((T435*)(C))->a20 = (((T205*)(GE_void(((T435*)(C))->a17)))->a6);
	((T435*)(C))->a21 = (((T205*)(GE_void(((T435*)(C))->a17)))->a7);
	((T435*)(C))->a19 = (((T205*)(GE_void(((T435*)(C))->a17)))->a8);
}

/* YY_BUFFER.set_position */
void T205f14(T0* C, T6 a1, T6 a2, T6 a3)
{
	((T205*)(C))->a8 = a1;
	((T205*)(C))->a6 = a2;
	((T205*)(C))->a7 = a3;
}

/* LX_WILDCARD_PARSER.new_string_buffer */
T0* T435f120(T0* C, T0* a1)
{
	T0* R = 0;
	R = T205c12(a1);
	return R;
}

/* YY_BUFFER.make */
T0* T205c12(T0* a1)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T205));
	*(T205*)C = GE_default205;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	l2 = ((T6)((t1)+((T6)(GE_int32(2)))));
	l1 = (T205f11(C, l2));
	T324f9(GE_void(l1), a1, (T6)(GE_int32(1)));
	t1 = ((T6)((l2)-((T6)(GE_int32(1)))));
	T324f10(GE_void(l1), (T2)('\000'), t1);
	T324f10(GE_void(l1), (T2)('\000'), l2);
	T205f16(C, l1);
	return C;
}

/* YY_BUFFER.make_from_buffer */
void T205f16(T0* C, T0* a1)
{
	T6 t1;
	t1 = (T324f4(GE_void(a1)));
	((T205*)(C))->a9 = ((T6)((t1)-((T6)(GE_int32(2)))));
	((T205*)(C))->a2 = ((T205*)(C))->a9;
	((T205*)(C))->a4 = a1;
	((T205*)(C))->a5 = (T6)(GE_int32(1));
	((T205*)(C))->a6 = (T6)(GE_int32(1));
	((T205*)(C))->a7 = (T6)(GE_int32(1));
	((T205*)(C))->a8 = (T6)(GE_int32(1));
	((T205*)(C))->a1 = EIF_TRUE;
}

/* KL_CHARACTER_BUFFER.put */
void T324f10(T0* C, T2 a1, T6 a2)
{
	T1 t1;
	t1 = ((((T324*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		((T15*)(GE_void(((T324*)(C))->a1)))->z2[a2] = (a1);
	} else {
		T17f52(GE_void(((T324*)(C))->a2), a1, a2);
	}
}

/* STRING_8.put */
void T17f52(T0* C, T2 a1, T6 a2)
{
	T6 t1;
	t1 = ((T6)((a2)-((T6)(GE_int32(1)))));
	((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1] = (a1);
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* KL_CHARACTER_BUFFER.fill_from_string */
void T324f9(T0* C, T0* a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f1(&l1, (T6)(GE_int32(0))));
	if (t1) {
		t1 = ((((T324*)(C))->a1)!=(EIF_VOID));
		if (t1) {
			t2 = ((T6)((a2)+((T6)(GE_int32(1)))));
			T17f56(GE_void(((T324*)(C))->a2), a1, (T6)(GE_int32(1)), l1, t2);
		} else {
			T17f56(GE_void(((T324*)(C))->a2), a1, (T6)(GE_int32(1)), l1, a2);
		}
	}
}

/* STRING_8.subcopy */
void T17f56(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T6 t4;
	l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T194*)(a1))->a2));
	l2 = ((T17*)(C))->a1;
	t1 = (T6f5(&a3, a2));
	if (t1) {
		t1 = ((l2)!=(l1));
		if (t1) {
			t2 = ((T6)((a2)-((T6)(GE_int32(1)))));
			t3 = ((T6)((a4)-((T6)(GE_int32(1)))));
			t4 = ((T6)((a3)-(a2)));
			t4 = ((T6)((t4)+((T6)(GE_int32(1)))));
			T15f8(GE_void(l2), l1, t2, t3, t4);
		} else {
			t2 = ((T6)((a2)-((T6)(GE_int32(1)))));
			t3 = ((T6)((a4)-((T6)(GE_int32(1)))));
			t4 = ((T6)((a3)-(a2)));
			t4 = ((T6)((t4)+((T6)(GE_int32(1)))));
			T15f12(GE_void(l2), t2, t3, t4);
		}
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
}

/* YY_BUFFER.new_default_buffer */
T0* T205f11(T0* C, T6 a1)
{
	T0* R = 0;
	R = T324c8(a1);
	return R;
}

/* KL_CHARACTER_BUFFER.make */
T0* T324c8(T6 a1)
{
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T324));
	*(T324*)C = GE_default324;
	t1 = (T324f7(C));
	t2 = (T51f6(GE_void(t1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		t3 = ((T6)((a1)+((T6)(GE_int32(1)))));
		((T324*)(C))->a2 = T17c33(t3);
		t3 = ((T6)((a1)+((T6)(GE_int32(1)))));
		T17f41(GE_void(((T324*)(C))->a2), t3);
		((T324*)(C))->a1 = (((T17*)(GE_void(((T324*)(C))->a2)))->a1);
	} else {
		((T324*)(C))->a2 = T17c33(a1);
		T17f41(GE_void(((T324*)(C))->a2), a1);
	}
	return C;
}

/* KL_OPERATING_SYSTEM.is_dotnet */
unsigned char ge298os3013 = '\0';
T1 ge298ov3013;
T1 T51f6(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	if (ge298os3013) {
		return ge298ov3013;
	} else {
		ge298os3013 = '\1';
	}
	l1 = T429c2();
	R = (EIF_FALSE);
	ge298ov3013 = R;
	return R;
}

/* PLATFORM.default_create */
T0* T429c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T429));
	*(T429*)C = GE_default429;
	return C;
}

/* KL_CHARACTER_BUFFER.operating_system */
unsigned char ge224os1592 = '\0';
T0* ge224ov1592;
T0* T324f7(T0* C)
{
	T0* R = 0;
	if (ge224os1592) {
		return ge224ov1592;
	} else {
		ge224os1592 = '\1';
	}
	R = T51c7();
	ge224ov1592 = R;
	return R;
}

/* KL_OPERATING_SYSTEM.default_create */
T0* T51c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T51));
	*(T51*)C = GE_default51;
	return C;
}

/* LX_WILDCARD_PARSER.make_from_description */
T0* T435c219(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T435));
	*(T435*)C = GE_default435;
	T435f221(C, a1, a2);
	T435f222(C);
	((T435*)(C))->a2 = T459c12((T6)(GE_int32(10)));
	((T435*)(C))->a3 = T460c10((T6)(GE_int32(40)));
	((T435*)(C))->a4 = T461c1();
	((T435*)(C))->a5 = T462c4((T6)(GE_int32(10)));
	((T435*)(C))->a6 = T462c4((T6)(GE_int32(10)));
	((T435*)(C))->a7 = T462c4((T6)(GE_int32(10)));
	((T435*)(C))->a8 = T462c4((T6)(GE_int32(10)));
	((T435*)(C))->a9 = T462c4((T6)(GE_int32(10)));
	((T435*)(C))->a10 = T462c4((T6)(GE_int32(10)));
	return C;
}

/* DS_ARRAYED_STACK [INTEGER_32].make */
T0* T462c4(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T462));
	*(T462*)C = GE_default462;
	((T462*)(C))->a1 = T65c4();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T462*)(C))->a2 = (T65f2(GE_void(((T462*)(C))->a1), t1));
	((T462*)(C))->a3 = a1;
	return C;
}

/* LX_ACTION_FACTORY.make */
T0* T461c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T461));
	*(T461*)C = GE_default461;
	return C;
}

/* LX_START_CONDITIONS.make */
void T460f10(T0* C, T6 a1)
{
	T6 t1;
	((T460*)(C))->a3 = T504c2();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T460*)(C))->a2 = (T504f1(GE_void(((T460*)(C))->a3), t1));
	((T460*)(C))->a4 = a1;
	((T460*)(C))->a5 = (T460f9(C));
}

/* LX_START_CONDITIONS.make */
T0* T460c10(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T460));
	*(T460*)C = GE_default460;
	((T460*)(C))->a3 = T504c2();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T460*)(C))->a2 = (T504f1(GE_void(((T460*)(C))->a3), t1));
	((T460*)(C))->a4 = a1;
	((T460*)(C))->a5 = (T460f9(C));
	return C;
}

/* LX_START_CONDITIONS.new_cursor */
T0* T460f9(T0* C)
{
	T0* R = 0;
	R = T505c4(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_START_CONDITION].make */
T0* T505c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T505));
	*(T505*)C = GE_default505;
	((T505*)(C))->a3 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_START_CONDITION].make */
T0* T504f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T550c2(a1);
	R = (((T550*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [LX_START_CONDITION].make_area */
T0* T550c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T550));
	*(T550*)C = GE_default550;
	((T550*)(C))->a1 = T503c2(a1);
	return C;
}

/* SPECIAL [LX_START_CONDITION].make */
T0* T503c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T503)+a1*sizeof(T0*));
	*(T503*)C = GE_default503;
	((T503*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [LX_START_CONDITION].default_create */
T0* T504c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T504));
	*(T504*)C = GE_default504;
	return C;
}

/* LX_WILDCARD_PARSER.make_parser_skeleton */
void T435f222(T0* C)
{
	T0* t1;
	t1 = (T435f160(C));
	((T435*)(C))->a16 = (T65f2(GE_void(t1), (T6)(GE_int32(200))));
	T435f226(C);
	T435f227(C);
}

/* LX_WILDCARD_PARSER.yy_build_parser_tables */
void T435f227(T0* C)
{
	((T435*)(C))->a36 = (T435f116(C));
	((T435*)(C))->a40 = (T435f117(C));
	((T435*)(C))->a43 = (T435f122(C));
	((T435*)(C))->a44 = (T435f124(C));
	((T435*)(C))->a39 = (T435f130(C));
	((T435*)(C))->a42 = (T435f133(C));
	((T435*)(C))->a34 = (T435f134(C));
	((T435*)(C))->a41 = (T435f135(C));
	((T435*)(C))->a38 = (T435f137(C));
	((T435*)(C))->a37 = (T435f138(C));
}

/* LX_WILDCARD_PARSER.yycheck_template */
unsigned char ge382os10834 = '\0';
T0* ge382ov10834;
T0* T435f138(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10834) {
		return ge382ov10834;
	} else {
		ge382os10834 = '\1';
	}
	t1 = GE_ma192((T6)58,
(T6)(GE_int32(1)),
(T6)(GE_int32(14)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(0)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(7)),
(T6)(GE_int32(0)),
(T6)(GE_int32(5)),
(T6)(GE_int32(10)),
(T6)(GE_int32(26)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(15)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(7)),
(T6)(GE_int32(17)),
(T6)(GE_int32(5)),
(T6)(GE_int32(10)),
(T6)(GE_int32(5)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(15)),
(T6)(GE_int32(5)),
(T6)(GE_int32(45)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(16)),
(T6)(GE_int32(15)),
(T6)(GE_int32(38)),
(T6)(GE_int32(5)),
(T6)(GE_int32(19)),
(T6)(GE_int32(20)),
(T6)(GE_int32(21)),
(T6)(GE_int32(16)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(18)),
(T6)(GE_int32(18)),
(T6)(GE_int32(5)),
(T6)(GE_int32(11)),
(T6)(GE_int32(11)),
(T6)(GE_int32(11)),
(T6)(GE_int32(-1)),
(T6)(GE_int32(22)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10834 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yyfixed_array */
T0* T435f211(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T435f160(C));
	R = (T65f3(GE_void(t1), a1));
	return R;
}

/* KL_SPECIAL_ROUTINES [INTEGER_32].to_special */
T0* T65f3(T0* C, T0* a1)
{
	T0* R = 0;
	R = (((T192*)(GE_void(a1)))->a1);
	return R;
}

/* LX_WILDCARD_PARSER.yytable_template */
unsigned char ge382os10833 = '\0';
T0* ge382ov10833;
T0* T435f137(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10833) {
		return ge382ov10833;
	} else {
		ge382os10833 = '\1';
	}
	t1 = GE_ma192((T6)58,
(T6)(GE_int32(14)),
(T6)(GE_int32(27)),
(T6)(GE_int32(46)),
(T6)(GE_int32(12)),
(T6)(GE_int32(49)),
(T6)(GE_int32(11)),
(T6)(GE_int32(10)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(7)),
(T6)(GE_int32(48)),
(T6)(GE_int32(23)),
(T6)(GE_int32(6)),
(T6)(GE_int32(27)),
(T6)(GE_int32(5)),
(T6)(GE_int32(4)),
(T6)(GE_int32(3)),
(T6)(GE_int32(2)),
(T6)(GE_int32(11)),
(T6)(GE_int32(10)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(7)),
(T6)(GE_int32(22)),
(T6)(GE_int32(36)),
(T6)(GE_int32(6)),
(T6)(GE_int32(29)),
(T6)(GE_int32(5)),
(T6)(GE_int32(4)),
(T6)(GE_int32(3)),
(T6)(GE_int32(2)),
(T6)(GE_int32(36)),
(T6)(GE_int32(27)),
(T6)(GE_int32(38)),
(T6)(GE_int32(41)),
(T6)(GE_int32(42)),
(T6)(GE_int32(28)),
(T6)(GE_int32(45)),
(T6)(GE_int32(43)),
(T6)(GE_int32(30)),
(T6)(GE_int32(31)),
(T6)(GE_int32(32)),
(T6)(GE_int32(35)),
(T6)(GE_int32(38)),
(T6)(GE_int32(40)),
(T6)(GE_int32(38)),
(T6)(GE_int32(39)),
(T6)(GE_int32(38)),
(T6)(GE_int32(37)),
(T6)(GE_int32(44)),
(T6)(GE_int32(34)),
(T6)(GE_int32(23)),
(T6)(GE_int32(21)),
(T6)(GE_int32(20)),
(T6)(GE_int32(19)),
(T6)(GE_int32(0)),
(T6)(GE_int32(33)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10833 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yypgoto_template */
unsigned char ge382os10832 = '\0';
T0* ge382ov10832;
T0* T435f135(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10832) {
		return ge382ov10832;
	} else {
		ge382os10832 = '\1';
	}
	t1 = GE_ma192((T6)11,
(T6)(GE_int32(-32768)),
(T6)(GE_int32(20)),
(T6)(GE_int32(-1)),
(T6)(GE_int32(-13)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(34)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10832 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yypact_template */
unsigned char ge382os10831 = '\0';
T0* ge382ov10831;
T0* T435f134(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10831) {
		return ge382ov10831;
	} else {
		ge382os10831 = '\1';
	}
	t1 = GE_ma192((T6)51,
(T6)(GE_int32(-32768)),
(T6)(GE_int32(2)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(43)),
(T6)(GE_int32(42)),
(T6)(GE_int32(41)),
(T6)(GE_int32(6)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(21)),
(T6)(GE_int32(15)),
(T6)(GE_int32(15)),
(T6)(GE_int32(15)),
(T6)(GE_int32(46)),
(T6)(GE_int32(32)),
(T6)(GE_int32(26)),
(T6)(GE_int32(39)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(37)),
(T6)(GE_int32(35)),
(T6)(GE_int32(25)),
(T6)(GE_int32(19)),
(T6)(GE_int32(33)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(31)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(-3)),
(T6)(GE_int32(15)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(10)),
(T6)(GE_int32(4)),
(T6)(GE_int32(-32768)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10831 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yydefgoto_template */
unsigned char ge382os10830 = '\0';
T0* ge382ov10830;
T0* T435f133(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10830) {
		return ge382ov10830;
	} else {
		ge382os10830 = '\1';
	}
	t1 = GE_ma192((T6)11,
(T6)(GE_int32(13)),
(T6)(GE_int32(25)),
(T6)(GE_int32(26)),
(T6)(GE_int32(15)),
(T6)(GE_int32(18)),
(T6)(GE_int32(24)),
(T6)(GE_int32(16)),
(T6)(GE_int32(47)),
(T6)(GE_int32(1)),
(T6)(GE_int32(17)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10830 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yydefact_template */
unsigned char ge382os10829 = '\0';
T0* ge382ov10829;
T0* T435f130(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10829) {
		return ge382ov10829;
	} else {
		ge382os10829 = '\1';
	}
	t1 = GE_ma192((T6)51,
(T6)(GE_int32(2)),
(T6)(GE_int32(0)),
(T6)(GE_int32(27)),
(T6)(GE_int32(15)),
(T6)(GE_int32(0)),
(T6)(GE_int32(16)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(18)),
(T6)(GE_int32(10)),
(T6)(GE_int32(0)),
(T6)(GE_int32(17)),
(T6)(GE_int32(4)),
(T6)(GE_int32(3)),
(T6)(GE_int32(5)),
(T6)(GE_int32(8)),
(T6)(GE_int32(19)),
(T6)(GE_int32(1)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(23)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(6)),
(T6)(GE_int32(9)),
(T6)(GE_int32(20)),
(T6)(GE_int32(28)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(21)),
(T6)(GE_int32(24)),
(T6)(GE_int32(11)),
(T6)(GE_int32(0)),
(T6)(GE_int32(14)),
(T6)(GE_int32(13)),
(T6)(GE_int32(12)),
(T6)(GE_int32(22)),
(T6)(GE_int32(25)),
(T6)(GE_int32(0)),
(T6)(GE_int32(7)),
(T6)(GE_int32(26)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10829 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yytypes2_template */
unsigned char ge382os10828 = '\0';
T0* ge382ov10828;
T0* T435f124(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10828) {
		return ge382ov10828;
	} else {
		ge382os10828 = '\1';
	}
	t1 = GE_ma192((T6)20,
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10828 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yytypes1_template */
unsigned char ge382os10827 = '\0';
T0* ge382ov10827;
T0* T435f122(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10827) {
		return ge382ov10827;
	} else {
		ge382os10827 = '\1';
	}
	t1 = GE_ma192((T6)51,
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(4)),
(T6)(GE_int32(3)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(3)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(3)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(3)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10827 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yyr1_template */
unsigned char ge382os10826 = '\0';
T0* ge382ov10826;
T0* T435f117(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10826) {
		return ge382ov10826;
	} else {
		ge382os10826 = '\1';
	}
	t1 = GE_ma192((T6)30,
(T6)(GE_int32(0)),
(T6)(GE_int32(26)),
(T6)(GE_int32(27)),
(T6)(GE_int32(28)),
(T6)(GE_int32(28)),
(T6)(GE_int32(19)),
(T6)(GE_int32(20)),
(T6)(GE_int32(20)),
(T6)(GE_int32(21)),
(T6)(GE_int32(21)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(22)),
(T6)(GE_int32(25)),
(T6)(GE_int32(25)),
(T6)(GE_int32(24)),
(T6)(GE_int32(24)),
(T6)(GE_int32(24)),
(T6)(GE_int32(24)),
(T6)(GE_int32(23)),
(T6)(GE_int32(23)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10826 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yytranslate_template */
unsigned char ge382os10825 = '\0';
T0* ge382ov10825;
T0* T435f116(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge382os10825) {
		return ge382ov10825;
	} else {
		ge382os10825 = '\1';
	}
	t1 = GE_ma192((T6)263,
(T6)(GE_int32(0)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(15)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(11)),
(T6)(GE_int32(9)),
(T6)(GE_int32(14)),
(T6)(GE_int32(10)),
(T6)(GE_int32(2)),
(T6)(GE_int32(18)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(7)),
(T6)(GE_int32(2)),
(T6)(GE_int32(16)),
(T6)(GE_int32(17)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(8)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(2147483647)));
	R = (T435f211(C, t1));
	ge382ov10825 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_create_value_stacks */
void T435f226(T0* C)
{
}

/* LX_WILDCARD_PARSER.make_lex_scanner_from_description */
void T435f221(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	((T435*)(C))->a11 = a1;
	t1 = (T435f154(C));
	T435f225(C, t1);
	((T435*)(C))->a12 = a2;
	((T435*)(C))->a13 = T79c45((T6)(GE_int32(101)));
	t1 = (T435f112(C));
	T79f43(GE_void(((T435*)(C))->a13), t1);
	((T435*)(C))->a14 = T463c40((T6)(GE_int32(101)));
	t1 = (T435f112(C));
	T463f41(GE_void(((T435*)(C))->a14), t1);
	((T435*)(C))->a1 = EIF_TRUE;
	((T435*)(C))->a15 = (T6)(GE_int32(1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].set_key_equality_tester */
void T463f41(T0* C, T0* a1)
{
	((T463*)(C))->a3 = a1;
	T507f6(GE_void(((T463*)(C))->a4), a1);
}

/* DS_SPARSE_TABLE_KEYS [LX_SYMBOL_CLASS, STRING_8].internal_set_equality_tester */
void T507f6(T0* C, T0* a1)
{
	((T507*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_map */
T0* T463c40(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T463));
	*(T463*)C = GE_default463;
	T463f44(C, a1, EIF_VOID, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_with_equality_testers */
void T463f44(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T463*)(C))->a12 = a2;
	((T463*)(C))->a3 = a3;
	T463f51(C, a1);
	((T463*)(C))->a4 = T507c5(C);
}

/* DS_SPARSE_TABLE_KEYS [LX_SYMBOL_CLASS, STRING_8].make */
T0* T507c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T507));
	*(T507*)C = GE_default507;
	((T507*)(C))->a1 = a1;
	((T507*)(C))->a2 = (((T463*)(GE_void(((T507*)(C))->a1)))->a3);
	((T507*)(C))->a3 = (T507f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [LX_SYMBOL_CLASS, STRING_8].new_cursor */
T0* T507f4(T0* C)
{
	T0* R = 0;
	R = T551c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [LX_SYMBOL_CLASS, STRING_8].make */
T0* T551c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T551));
	*(T551*)C = GE_default551;
	((T551*)(C))->a1 = a1;
	t1 = (((T507*)(GE_void(((T551*)(C))->a1)))->a1);
	((T551*)(C))->a2 = (T463f28(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_sparse_container */
void T463f51(T0* C, T6 a1)
{
	T6 t1;
	((T463*)(C))->a6 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T463f56(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T463f57(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T463f58(C, t1);
	((T463*)(C))->a10 = (T463f25(C, a1));
	t1 = ((T6)((((T463*)(C))->a10)+((T6)(GE_int32(1)))));
	T463f59(C, t1);
	((T463*)(C))->a9 = (T6)(GE_int32(0));
	((T463*)(C))->a8 = (T6)(GE_int32(0));
	((T463*)(C))->a1 = (T6)(GE_int32(0));
	T463f45(C);
	((T463*)(C))->a17 = (T463f28(C));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_slots */
void T463f59(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T463f31(C));
	((T463*)(C))->a15 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_clashes */
void T463f58(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T463f31(C));
	((T463*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_key_storage */
void T463f57(T0* C, T6 a1)
{
	((T463*)(C))->a19 = T66c3();
	((T463*)(C))->a16 = (T66f2(GE_void(((T463*)(C))->a19), a1));
}

/* DS_HASH_TABLE [LX_SYMBOL_CLASS, STRING_8].make_item_storage */
void T463f56(T0* C, T6 a1)
{
	((T463*)(C))->a18 = T466c3();
	((T463*)(C))->a2 = (T466f1(GE_void(((T463*)(C))->a18), a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].set_key_equality_tester */
void T79f43(T0* C, T0* a1)
{
	((T79*)(C))->a1 = a1;
	T61f6(GE_void(((T79*)(C))->a2), a1);
}

/* LX_WILDCARD_PARSER.string_equality_tester */
unsigned char ge175os2950 = '\0';
T0* ge175ov2950;
T0* T435f112(T0* C)
{
	T0* R = 0;
	if (ge175os2950) {
		return ge175ov2950;
	} else {
		ge175os2950 = '\1';
	}
	R = T423c2();
	ge175ov2950 = R;
	return R;
}

/* KL_STRING_EQUALITY_TESTER.default_create */
T0* T423c2(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T423));
	*(T423*)C = GE_default423;
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_map */
void T79f45(T0* C, T6 a1)
{
	T79f46(C, a1, EIF_VOID, EIF_VOID);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_map */
T0* T79c45(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T79));
	*(T79*)C = GE_default79;
	T79f46(C, a1, EIF_VOID, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_with_equality_testers */
void T79f46(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T79*)(C))->a3 = a2;
	((T79*)(C))->a1 = a3;
	T79f47(C, a1);
	((T79*)(C))->a2 = T61c5(C);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_sparse_container */
void T79f47(T0* C, T6 a1)
{
	T6 t1;
	((T79*)(C))->a4 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T79f48(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T79f49(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T79f50(C, t1);
	((T79*)(C))->a5 = (T79f21(C, a1));
	t1 = ((T6)((((T79*)(C))->a5)+((T6)(GE_int32(1)))));
	T79f51(C, t1);
	((T79*)(C))->a6 = (T6)(GE_int32(0));
	((T79*)(C))->a7 = (T6)(GE_int32(0));
	((T79*)(C))->a8 = (T6)(GE_int32(0));
	T79f52(C);
	((T79*)(C))->a9 = (T79f40(C));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].unset_found_item */
void T79f52(T0* C)
{
	((T79*)(C))->a16 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_slots */
void T79f51(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T79f41(C));
	((T79*)(C))->a15 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].special_integer_ */
T0* T79f41(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].new_modulus */
T6 T79f21(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_clashes */
void T79f50(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T79f41(C));
	((T79*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_key_storage */
void T79f49(T0* C, T6 a1)
{
	((T79*)(C))->a12 = T66c3();
	((T79*)(C))->a13 = (T66f2(GE_void(((T79*)(C))->a12), a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].make_item_storage */
void T79f48(T0* C, T6 a1)
{
	((T79*)(C))->a10 = T66c3();
	((T79*)(C))->a11 = (T66f2(GE_void(((T79*)(C))->a10), a1));
}

/* LX_WILDCARD_PARSER.make_with_buffer */
void T435f225(T0* C, T0* a1)
{
	((T435*)(C))->a17 = a1;
	T435f239(C);
	T435f228(C);
}

/* LX_WILDCARD_PARSER.yy_initialize */
void T435f239(T0* C)
{
	T0* t1;
	T0* t2;
	T6 t3;
	T435f252(C);
	((T435*)(C))->a56 = (T6)(GE_int32(1));
	((T435*)(C))->a20 = (T6)(GE_int32(1));
	((T435*)(C))->a21 = (T6)(GE_int32(1));
	((T435*)(C))->a19 = (T6)(GE_int32(1));
	((T435*)(C))->a53 = (T6)(GE_int32(1));
	((T435*)(C))->a54 = (T6)(GE_int32(1));
	((T435*)(C))->a55 = (T6)(GE_int32(1));
	if (EIF_FALSE) {
		t1 = (T435f160(C));
		t2 = (((T205*)(GE_void(((T435*)(C))->a17)))->a4);
		t3 = (T324f4(GE_void(t2)));
		t3 = ((T6)((t3)+((T6)(GE_int32(1)))));
		((T435*)(C))->a57 = (T65f2(GE_void(t1), t3));
	}
}

/* LX_WILDCARD_PARSER.yy_build_tables */
void T435f252(T0* C)
{
	((T435*)(C))->a69 = (T435f191(C));
	((T435*)(C))->a65 = (T435f192(C));
	((T435*)(C))->a66 = (T435f193(C));
	((T435*)(C))->a67 = (T435f194(C));
	((T435*)(C))->a59 = (T435f195(C));
	((T435*)(C))->a68 = (T435f196(C));
	((T435*)(C))->a62 = (T435f197(C));
}

/* LX_WILDCARD_PARSER.yy_accept_template */
unsigned char ge383os11002 = '\0';
T0* ge383ov11002;
T0* T435f197(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge383os11002) {
		return ge383ov11002;
	} else {
		ge383os11002 = '\1';
	}
	t1 = GE_ma192((T6)55,
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(21)),
(T6)(GE_int32(6)),
(T6)(GE_int32(19)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(6)),
(T6)(GE_int32(7)),
(T6)(GE_int32(9)),
(T6)(GE_int32(8)),
(T6)(GE_int32(7)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(13)),
(T6)(GE_int32(13)),
(T6)(GE_int32(16)),
(T6)(GE_int32(18)),
(T6)(GE_int32(16)),
(T6)(GE_int32(16)),
(T6)(GE_int32(17)),
(T6)(GE_int32(3)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(11)),
(T6)(GE_int32(12)),
(T6)(GE_int32(15)),
(T6)(GE_int32(4)),
(T6)(GE_int32(0)),
(T6)(GE_int32(2)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(2147483647)));
	R = (T435f218(C, t1));
	ge383ov11002 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_fixed_array */
T0* T435f218(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T435f160(C));
	R = (T65f3(GE_void(t1), a1));
	return R;
}

/* LX_WILDCARD_PARSER.yy_meta_template */
unsigned char ge383os11001 = '\0';
T0* ge383ov11001;
T0* T435f196(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge383os11001) {
		return ge383ov11001;
	} else {
		ge383os11001 = '\1';
	}
	t1 = GE_ma192((T6)17,
(T6)(GE_int32(0)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(3)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2147483647)));
	R = (T435f218(C, t1));
	ge383ov11001 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_ec_template */
unsigned char ge383os11000 = '\0';
T0* ge383ov11000;
T0* T435f195(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge383os11000) {
		return ge383ov11000;
	} else {
		ge383os11000 = '\1';
	}
	t1 = GE_ma192((T6)258,
(T6)(GE_int32(0)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(3)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(7)),
(T6)(GE_int32(1)),
(T6)(GE_int32(8)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(9)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(5)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(11)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(15)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(11)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(5)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(2147483647)));
	R = (T435f218(C, t1));
	ge383ov11000 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_def_template */
unsigned char ge383os10999 = '\0';
T0* ge383ov10999;
T0* T435f194(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge383os10999) {
		return ge383ov10999;
	} else {
		ge383os10999 = '\1';
	}
	t1 = GE_ma192((T6)62,
(T6)(GE_int32(0)),
(T6)(GE_int32(53)),
(T6)(GE_int32(1)),
(T6)(GE_int32(54)),
(T6)(GE_int32(54)),
(T6)(GE_int32(55)),
(T6)(GE_int32(55)),
(T6)(GE_int32(56)),
(T6)(GE_int32(56)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(57)),
(T6)(GE_int32(58)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(58)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(58)),
(T6)(GE_int32(59)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(60)),
(T6)(GE_int32(58)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(57)),
(T6)(GE_int32(57)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(57)),
(T6)(GE_int32(53)),
(T6)(GE_int32(57)),
(T6)(GE_int32(43)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(0)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(2147483647)));
	R = (T435f218(C, t1));
	ge383ov10999 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_base_template */
unsigned char ge383os10998 = '\0';
T0* ge383ov10998;
T0* T435f193(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge383os10998) {
		return ge383ov10998;
	} else {
		ge383os10998 = '\1';
	}
	t1 = GE_ma192((T6)62,
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(14)),
(T6)(GE_int32(26)),
(T6)(GE_int32(38)),
(T6)(GE_int32(52)),
(T6)(GE_int32(66)),
(T6)(GE_int32(79)),
(T6)(GE_int32(70)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(14)),
(T6)(GE_int32(56)),
(T6)(GE_int32(10)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(13)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(14)),
(T6)(GE_int32(19)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(0)),
(T6)(GE_int32(21)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(58)),
(T6)(GE_int32(21)),
(T6)(GE_int32(27)),
(T6)(GE_int32(112)),
(T6)(GE_int32(55)),
(T6)(GE_int32(32)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(112)),
(T6)(GE_int32(34)),
(T6)(GE_int32(112)),
(T6)(GE_int32(85)),
(T6)(GE_int32(37)),
(T6)(GE_int32(54)),
(T6)(GE_int32(39)),
(T6)(GE_int32(53)),
(T6)(GE_int32(46)),
(T6)(GE_int32(49)),
(T6)(GE_int32(35)),
(T6)(GE_int32(28)),
(T6)(GE_int32(22)),
(T6)(GE_int32(112)),
(T6)(GE_int32(99)),
(T6)(GE_int32(102)),
(T6)(GE_int32(105)),
(T6)(GE_int32(49)),
(T6)(GE_int32(56)),
(T6)(GE_int32(108)),
(T6)(GE_int32(59)),
(T6)(GE_int32(2147483647)));
	R = (T435f218(C, t1));
	ge383ov10998 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_chk_template */
unsigned char ge383os10997 = '\0';
T0* ge383ov10997;
T0* T435f192(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge383os10997) {
		return ge383ov10997;
	} else {
		ge383os10997 = '\1';
	}
	t1 = GE_ma192((T6)129,
(T6)(GE_int32(0)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(1)),
(T6)(GE_int32(3)),
(T6)(GE_int32(3)),
(T6)(GE_int32(14)),
(T6)(GE_int32(16)),
(T6)(GE_int32(14)),
(T6)(GE_int32(16)),
(T6)(GE_int32(20)),
(T6)(GE_int32(23)),
(T6)(GE_int32(20)),
(T6)(GE_int32(23)),
(T6)(GE_int32(24)),
(T6)(GE_int32(3)),
(T6)(GE_int32(4)),
(T6)(GE_int32(4)),
(T6)(GE_int32(28)),
(T6)(GE_int32(52)),
(T6)(GE_int32(28)),
(T6)(GE_int32(24)),
(T6)(GE_int32(32)),
(T6)(GE_int32(32)),
(T6)(GE_int32(33)),
(T6)(GE_int32(51)),
(T6)(GE_int32(33)),
(T6)(GE_int32(4)),
(T6)(GE_int32(5)),
(T6)(GE_int32(36)),
(T6)(GE_int32(36)),
(T6)(GE_int32(41)),
(T6)(GE_int32(50)),
(T6)(GE_int32(41)),
(T6)(GE_int32(44)),
(T6)(GE_int32(44)),
(T6)(GE_int32(46)),
(T6)(GE_int32(46)),
(T6)(GE_int32(57)),
(T6)(GE_int32(5)),
(T6)(GE_int32(57)),
(T6)(GE_int32(5)),
(T6)(GE_int32(6)),
(T6)(GE_int32(48)),
(T6)(GE_int32(48)),
(T6)(GE_int32(58)),
(T6)(GE_int32(49)),
(T6)(GE_int32(58)),
(T6)(GE_int32(60)),
(T6)(GE_int32(60)),
(T6)(GE_int32(47)),
(T6)(GE_int32(45)),
(T6)(GE_int32(35)),
(T6)(GE_int32(6)),
(T6)(GE_int32(31)),
(T6)(GE_int32(6)),
(T6)(GE_int32(7)),
(T6)(GE_int32(15)),
(T6)(GE_int32(9)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(7)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(7)),
(T6)(GE_int32(7)),
(T6)(GE_int32(8)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(8)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(8)),
(T6)(GE_int32(8)),
(T6)(GE_int32(43)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(0)),
(T6)(GE_int32(43)),
(T6)(GE_int32(43)),
(T6)(GE_int32(54)),
(T6)(GE_int32(54)),
(T6)(GE_int32(54)),
(T6)(GE_int32(55)),
(T6)(GE_int32(55)),
(T6)(GE_int32(55)),
(T6)(GE_int32(56)),
(T6)(GE_int32(56)),
(T6)(GE_int32(56)),
(T6)(GE_int32(59)),
(T6)(GE_int32(59)),
(T6)(GE_int32(59)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(2147483647)));
	R = (T435f218(C, t1));
	ge383ov10997 = R;
	return R;
}

/* LX_WILDCARD_PARSER.yy_nxt_template */
unsigned char ge383os10996 = '\0';
T0* ge383ov10996;
T0* T435f191(T0* C)
{
	T0* R = 0;
	T0* t1;
	if (ge383os10996) {
		return ge383ov10996;
	} else {
		ge383os10996 = '\1';
	}
	t1 = GE_ma192((T6)129,
(T6)(GE_int32(0)),
(T6)(GE_int32(10)),
(T6)(GE_int32(11)),
(T6)(GE_int32(12)),
(T6)(GE_int32(13)),
(T6)(GE_int32(13)),
(T6)(GE_int32(14)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(15)),
(T6)(GE_int32(16)),
(T6)(GE_int32(10)),
(T6)(GE_int32(10)),
(T6)(GE_int32(18)),
(T6)(GE_int32(19)),
(T6)(GE_int32(30)),
(T6)(GE_int32(35)),
(T6)(GE_int32(31)),
(T6)(GE_int32(36)),
(T6)(GE_int32(35)),
(T6)(GE_int32(35)),
(T6)(GE_int32(36)),
(T6)(GE_int32(36)),
(T6)(GE_int32(38)),
(T6)(GE_int32(20)),
(T6)(GE_int32(18)),
(T6)(GE_int32(19)),
(T6)(GE_int32(35)),
(T6)(GE_int32(32)),
(T6)(GE_int32(36)),
(T6)(GE_int32(38)),
(T6)(GE_int32(41)),
(T6)(GE_int32(42)),
(T6)(GE_int32(43)),
(T6)(GE_int32(32)),
(T6)(GE_int32(44)),
(T6)(GE_int32(20)),
(T6)(GE_int32(22)),
(T6)(GE_int32(46)),
(T6)(GE_int32(46)),
(T6)(GE_int32(47)),
(T6)(GE_int32(32)),
(T6)(GE_int32(48)),
(T6)(GE_int32(50)),
(T6)(GE_int32(50)),
(T6)(GE_int32(34)),
(T6)(GE_int32(34)),
(T6)(GE_int32(32)),
(T6)(GE_int32(23)),
(T6)(GE_int32(32)),
(T6)(GE_int32(24)),
(T6)(GE_int32(22)),
(T6)(GE_int32(52)),
(T6)(GE_int32(52)),
(T6)(GE_int32(34)),
(T6)(GE_int32(32)),
(T6)(GE_int32(34)),
(T6)(GE_int32(39)),
(T6)(GE_int32(39)),
(T6)(GE_int32(51)),
(T6)(GE_int32(34)),
(T6)(GE_int32(45)),
(T6)(GE_int32(23)),
(T6)(GE_int32(40)),
(T6)(GE_int32(24)),
(T6)(GE_int32(26)),
(T6)(GE_int32(33)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(27)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(28)),
(T6)(GE_int32(29)),
(T6)(GE_int32(26)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(27)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(28)),
(T6)(GE_int32(29)),
(T6)(GE_int32(49)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(41)),
(T6)(GE_int32(42)),
(T6)(GE_int32(17)),
(T6)(GE_int32(17)),
(T6)(GE_int32(17)),
(T6)(GE_int32(21)),
(T6)(GE_int32(21)),
(T6)(GE_int32(21)),
(T6)(GE_int32(25)),
(T6)(GE_int32(25)),
(T6)(GE_int32(25)),
(T6)(GE_int32(37)),
(T6)(GE_int32(37)),
(T6)(GE_int32(37)),
(T6)(GE_int32(9)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(53)),
(T6)(GE_int32(2147483647)));
	R = (T435f218(C, t1));
	ge383ov10996 = R;
	return R;
}

/* LX_WILDCARD_PARSER.empty_buffer */
unsigned char ge399os6788 = '\0';
T0* ge399ov6788;
T0* T435f154(T0* C)
{
	T0* R = 0;
	if (ge399os6788) {
		return ge399ov6788;
	} else {
		ge399os6788 = '\1';
	}
	R = T205c12(GE_ms("", 0));
	ge399ov6788 = R;
	return R;
}

/* LX_DESCRIPTION.set_case_insensitive */
void T436f32(T0* C, T1 a1)
{
	((T436*)(C))->a14 = a1;
}

/* LX_DESCRIPTION.set_full_table */
void T436f31(T0* C, T1 a1)
{
	((T436*)(C))->a3 = a1;
}

/* LX_DESCRIPTION.set_meta_equiv_classes_used */
void T436f30(T0* C, T1 a1)
{
	((T436*)(C))->a4 = a1;
}

/* LX_DESCRIPTION.set_equiv_classes_used */
void T436f29(T0* C, T1 a1)
{
	((T436*)(C))->a2 = a1;
}

/* LX_DESCRIPTION.make */
T0* T436c28(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T436));
	*(T436*)C = GE_default436;
	((T436*)(C))->a2 = EIF_TRUE;
	((T436*)(C))->a4 = EIF_TRUE;
	((T436*)(C))->a9 = (T6)(GE_int32(256));
	((T436*)(C))->a10 = (T6)(GE_int32(1000));
	((T436*)(C))->a11 = EIF_TRUE;
	((T436*)(C))->a7 = T459c12((T6)(GE_int32(250)));
	((T436*)(C))->a12 = T459c12((T6)(GE_int32(40)));
	((T436*)(C))->a13 = T71c23((T6)(GE_int32(1)));
	((T436*)(C))->a8 = T460c12((T6)(GE_int32(40)));
	return C;
}

/* LX_START_CONDITIONS.make_with_initial */
T0* T460c12(T6 a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T460));
	*(T460*)C = GE_default460;
	T460f10(C, a1);
	l1 = T488c6(GE_ms("INITIAL", 7), (T6)(GE_int32(0)), EIF_FALSE);
	T460f14(C, l1);
	return C;
}

/* LX_START_CONDITIONS.put_first */
void T460f14(T0* C, T0* a1)
{
	T460f15(C, a1, (T6)(GE_int32(1)));
}

/* LX_START_CONDITIONS.put */
void T460f15(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	T1 t2;
	t1 = ((T6)((((T460*)(C))->a1)+((T6)(GE_int32(1)))));
	t2 = ((a2)==(t1));
	if (t2) {
		T460f16(C, a1);
	} else {
		T460f17(C, a2, (T6)(GE_int32(1)));
		T460f18(C, a2, (T6)(GE_int32(1)));
		((T503*)(GE_void(((T460*)(C))->a2)))->z2[a2] = (a1);
	}
}

/* LX_START_CONDITIONS.move_cursors_right */
void T460f18(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T460*)(C))->a5;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		l2 = (((T505*)(GE_void(l1)))->a1);
		t1 = (T6f5(&l2, a1));
		if (t1) {
			t2 = ((T6)((l2)+(a2)));
			T505f5(GE_void(l1), t2);
		}
		l1 = (((T505*)(GE_void(l1)))->a2);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_ARRAYED_LIST_CURSOR [LX_START_CONDITION].set_position */
void T505f5(T0* C, T6 a1)
{
	((T505*)(C))->a1 = a1;
}

/* LX_START_CONDITIONS.move_right */
void T460f17(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T460*)(C))->a1;
	((T460*)(C))->a1 = ((T6)((((T460*)(C))->a1)+(a2)));
	t1 = ((T1)((l1)<(a1)));
	while (!(t1)) {
		t2 = (((T503*)(GE_void(((T460*)(C))->a2)))->z2[l1]);
		t3 = ((T6)((l1)+(a2)));
		((T503*)(GE_void(((T460*)(C))->a2)))->z2[t3] = (t2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(a1)));
	}
}

/* LX_START_CONDITIONS.put_last */
void T460f16(T0* C, T0* a1)
{
	((T460*)(C))->a1 = ((T6)((((T460*)(C))->a1)+((T6)(GE_int32(1)))));
	((T503*)(GE_void(((T460*)(C))->a2)))->z2[((T460*)(C))->a1] = (a1);
}

/* LX_START_CONDITION.make */
T0* T488c6(T0* a1, T6 a2, T1 a3)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T488));
	*(T488*)C = GE_default488;
	((T488*)(C))->a1 = a1;
	((T488*)(C))->a2 = a2;
	((T488*)(C))->a3 = a3;
	((T488*)(C))->a4 = T490c10((T6)(GE_int32(50)));
	((T488*)(C))->a5 = T490c10((T6)(GE_int32(50)));
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA].make */
T0* T490c10(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T490));
	*(T490*)C = GE_default490;
	((T490*)(C))->a1 = T471c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T490*)(C))->a2 = (T471f1(GE_void(((T490*)(C))->a1), t1));
	((T490*)(C))->a3 = a1;
	((T490*)(C))->a4 = (T490f6(C));
	return C;
}

/* DS_ARRAYED_LIST [LX_NFA].new_cursor */
T0* T490f6(T0* C)
{
	T0* R = 0;
	R = T536c2(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [LX_NFA].make */
T0* T536c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T536));
	*(T536*)C = GE_default536;
	((T536*)(C))->a1 = a1;
	return C;
}

/* UT_ERROR_HANDLER.make_null */
T0* T28c10(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T28));
	*(T28*)C = GE_default28;
	((T28*)(C))->a1 = (T28f6(C));
	((T28*)(C))->a2 = (T28f6(C));
	((T28*)(C))->a3 = (T28f6(C));
	return C;
}

/* UT_ERROR_HANDLER.null_output_stream */
unsigned char ge205os2383 = '\0';
T0* ge205ov2383;
T0* T28f6(T0* C)
{
	T0* R = 0;
	if (ge205os2383) {
		return ge205ov2383;
	} else {
		ge205os2383 = '\1';
	}
	R = T449c3(GE_ms("null", 4));
	ge205ov2383 = R;
	return R;
}

/* KL_NULL_TEXT_OUTPUT_STREAM.make */
T0* T449c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T449));
	*(T449*)C = GE_default449;
	((T449*)(C))->a1 = a1;
	return C;
}

/* LX_DFA_WILDCARD.wipe_out */
void T412f15(T0* C)
{
	((T412*)(C))->a5 = (T6)(GE_int32(0));
	((T412*)(C))->a3 = (T6)(GE_int32(1));
	((T412*)(C))->a4 = (T6)(GE_int32(0));
	((T412*)(C))->a2 = ge487ov9583;
}

/* GEANT_FILESET_ELEMENT.exclude_attribute_name */
unsigned char ge132os9350 = '\0';
T0* ge132ov9350;
T0* T359f11(T0* C)
{
	T0* R = 0;
	if (ge132os9350) {
		return ge132ov9350;
	} else {
		ge132os9350 = '\1';
	}
	R = GE_ms("exclude", 7);
	ge132ov9350 = R;
	return R;
}

/* GEANT_FILESET.set_include_wc_string */
void T360f40(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	((T360*)(C))->a15 = a1;
	((T360*)(C))->a3 = T412c14(((T360*)(C))->a15, EIF_TRUE);
	t1 = (T412f11(GE_void(((T360*)(C))->a3)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = GE_ma33((T6)3,
GE_ms("  [fileset] error: invalid include wildcard: \'", 46),
((T360*)(C))->a15,
GE_ms("\'", 1));
		T22f41(GE_void(((T360*)(C))->a2), t2);
	}
}

/* GEANT_FILESET_ELEMENT.include_attribute_name */
unsigned char ge132os9349 = '\0';
T0* ge132ov9349;
T0* T359f10(T0* C)
{
	T0* R = 0;
	if (ge132os9349) {
		return ge132ov9349;
	} else {
		ge132os9349 = '\1';
	}
	R = GE_ms("include", 7);
	ge132ov9349 = R;
	return R;
}

/* GEANT_FILESET.set_directory_name */
void T360f39(T0* C, T0* a1)
{
	((T360*)(C))->a1 = a1;
}

/* GEANT_FILESET.set_dir_name */
void T360f38(T0* C, T0* a1)
{
	((T360*)(C))->a9 = a1;
}

/* GEANT_FILESET_ELEMENT.attribute_value */
T0* T359f9(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T359*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T359f24(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T359f24(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T359f25(C));
		t4 = (((T22*)(GE_void(((T359*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T359f25(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_FILESET_ELEMENT.project_variables_resolver */
T0* T359f25(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.target_arguments_stack */
T0* T359f24(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.dir_attribute_name */
unsigned char ge136os2243 = '\0';
T0* ge136ov2243;
T0* T359f8(T0* C)
{
	T0* R = 0;
	if (ge136os2243) {
		return ge136ov2243;
	} else {
		ge136os2243 = '\1';
	}
	R = GE_ms("dir", 3);
	ge136ov2243 = R;
	return R;
}

/* GEANT_FILESET.make */
T0* T360c33(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T360));
	*(T360*)C = GE_default360;
	((T360*)(C))->a2 = a1;
	((T360*)(C))->a6 = T407c38((T6)(GE_int32(20)));
	((T360*)(C))->a11 = T409c34((T6)(GE_int32(20)));
	l1 = T59c3();
	T409f35(GE_void(((T360*)(C))->a11), l1);
	((T360*)(C))->a12 = T409c34((T6)(GE_int32(20)));
	T409f35(GE_void(((T360*)(C))->a12), l1);
	T360f44(C, GE_ms("fs.filename", 11));
	T360f45(C, GE_ms("fs.mapped_filename", 18));
	((T360*)(C))->a13 = EIF_TRUE;
	return C;
}

/* DS_HASH_SET [STRING_8].set_equality_tester */
void T409f35(T0* C, T0* a1)
{
	((T409*)(C))->a7 = a1;
}

/* DS_HASH_SET [STRING_8].make */
T0* T409c34(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T409));
	*(T409*)C = GE_default409;
	((T409*)(C))->a1 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T409f37(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T409f38(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T409f39(C, t1);
	((T409*)(C))->a2 = (T409f22(C, a1));
	t1 = ((T6)((((T409*)(C))->a2)+((T6)(GE_int32(1)))));
	T409f40(C, t1);
	((T409*)(C))->a3 = (T6)(GE_int32(0));
	((T409*)(C))->a4 = (T6)(GE_int32(0));
	((T409*)(C))->a5 = (T6)(GE_int32(0));
	T409f41(C);
	((T409*)(C))->a6 = (T409f20(C));
	return C;
}

/* DS_HASH_SET [STRING_8].new_cursor */
T0* T409f20(T0* C)
{
	T0* R = 0;
	R = T411c6(C);
	return R;
}

/* DS_HASH_SET_CURSOR [STRING_8].make */
T0* T411c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T411));
	*(T411*)C = GE_default411;
	((T411*)(C))->a1 = a1;
	((T411*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_HASH_SET [STRING_8].make_slots */
void T409f40(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T409f19(C));
	((T409*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [STRING_8].make_clashes */
void T409f39(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T409f19(C));
	((T409*)(C))->a12 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [STRING_8].make_key_storage */
void T409f38(T0* C, T6 a1)
{
}

/* DS_HASH_SET [STRING_8].make_item_storage */
void T409f37(T0* C, T6 a1)
{
	((T409*)(C))->a10 = T66c3();
	((T409*)(C))->a11 = (T66f2(GE_void(((T409*)(C))->a10), a1));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_equal */
T0* T407c38(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T407));
	*(T407*)C = GE_default407;
	T407f43(C, a1);
	((T407*)(C))->a3 = T433c3();
	return C;
}

/* KL_EQUALITY_TESTER [GEANT_FILESET_ENTRY].default_create */
T0* T433c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T433));
	*(T433*)C = GE_default433;
	return C;
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make */
void T407f43(T0* C, T6 a1)
{
	T6 t1;
	((T407*)(C))->a6 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T407f53(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T407f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T407f55(C, t1);
	((T407*)(C))->a9 = (T407f22(C, a1));
	t1 = ((T6)((((T407*)(C))->a9)+((T6)(GE_int32(1)))));
	T407f56(C, t1);
	((T407*)(C))->a5 = (T6)(GE_int32(0));
	((T407*)(C))->a10 = (T6)(GE_int32(0));
	((T407*)(C))->a4 = (T6)(GE_int32(0));
	T407f46(C);
	((T407*)(C))->a1 = (T407f24(C));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].new_cursor */
T0* T407f24(T0* C)
{
	T0* R = 0;
	R = T431c4(C);
	return R;
}

/* DS_HASH_SET_CURSOR [GEANT_FILESET_ENTRY].make */
T0* T431c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T431));
	*(T431*)C = GE_default431;
	((T431*)(C))->a3 = a1;
	((T431*)(C))->a1 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].unset_found_item */
void T407f46(T0* C)
{
	((T407*)(C))->a11 = (T6)(GE_int32(0));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_slots */
void T407f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T407f37(C));
	((T407*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].special_integer_ */
T0* T407f37(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].new_modulus */
T6 T407f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_clashes */
void T407f55(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T407f37(C));
	((T407*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_key_storage */
void T407f54(T0* C, T6 a1)
{
}

/* DS_HASH_SET [GEANT_FILESET_ENTRY].make_item_storage */
void T407f53(T0* C, T6 a1)
{
	((T407*)(C))->a15 = T434c3();
	((T407*)(C))->a2 = (T434f1(GE_void(((T407*)(C))->a15), a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_FILESET_ENTRY].make */
T0* T434f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T458c2(a1);
	R = (((T458*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_FILESET_ENTRY].make_area */
T0* T458c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T458));
	*(T458*)C = GE_default458;
	((T458*)(C))->a1 = T432c4(a1);
	return C;
}

/* SPECIAL [GEANT_FILESET_ENTRY].make */
T0* T432c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T432)+a1*sizeof(T0*));
	*(T432*)C = GE_default432;
	((T432*)(C))->z1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_FILESET_ENTRY].default_create */
T0* T434c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T434));
	*(T434*)C = GE_default434;
	return C;
}

/* GEANT_FILESET_ELEMENT.exit_application */
void T359f30(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T359f22(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T359f22(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T359f22(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T359f22(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T359f23(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_FILESET_ELEMENT.exceptions */
T0* T359f23(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.mapped_filename_directory_attribute_name */
unsigned char ge132os9357 = '\0';
T0* ge132ov9357;
T0* T359f6(T0* C)
{
	T0* R = 0;
	if (ge132os9357) {
		return ge132ov9357;
	} else {
		ge132os9357 = '\1';
	}
	R = GE_ms("mapped_filename_directory", 25);
	ge132ov9357 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.filename_directory_attribute_name */
unsigned char ge132os9355 = '\0';
T0* ge132ov9355;
T0* T359f5(T0* C)
{
	T0* R = 0;
	if (ge132os9355) {
		return ge132ov9355;
	} else {
		ge132os9355 = '\1';
	}
	R = GE_ms("filename_directory", 18);
	ge132ov9355 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.directory_attribute_name */
unsigned char ge132os9348 = '\0';
T0* ge132ov9348;
T0* T359f4(T0* C)
{
	T0* R = 0;
	if (ge132os9348) {
		return ge132ov9348;
	} else {
		ge132os9348 = '\1';
	}
	R = GE_ms("directory", 9);
	ge132ov9348 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.has_attribute */
T1 T359f20(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T359*)(C))->a3), a1));
	return R;
}

/* GEANT_FILESET_ELEMENT.concat_attribute_name */
unsigned char ge132os9352 = '\0';
T0* ge132ov9352;
T0* T359f7(T0* C)
{
	T0* R = 0;
	if (ge132os9352) {
		return ge132ov9352;
	} else {
		ge132os9352 = '\1';
	}
	R = GE_ms("concat", 6);
	ge132ov9352 = R;
	return R;
}

/* GEANT_FILESET_ELEMENT.make */
void T359f29p1(T0* C, T0* a1, T0* a2)
{
	T359f31(C, a2);
	T359f32(C, a1);
}

/* GEANT_FILESET_ELEMENT.set_project */
void T359f32(T0* C, T0* a1)
{
	((T359*)(C))->a2 = a1;
}

/* GEANT_FILESET_ELEMENT.element_make */
void T359f31(T0* C, T0* a1)
{
	T359f33(C, a1);
}

/* GEANT_FILESET_ELEMENT.set_xml_element */
void T359f33(T0* C, T0* a1)
{
	((T359*)(C))->a3 = a1;
}

/* XM_ELEMENT.element_by_name */
T0* T96f16(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l2 = T318c11();
	l1 = (T96f19(C));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		T191x5736T0(GE_void(t2), l2);
		t1 = (T318f8(GE_void(l2)));
		if (t1) {
			t2 = (((T318*)(GE_void(l2)))->a1);
			t1 = (T96f8(C, t2, a1));
		}
		if (t1) {
			R = (((T318*)(GE_void(l2)))->a1);
			T190f12(GE_void(l1));
		} else {
			T190f11(GE_void(l1));
		}
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].go_after */
void T190f12(T0* C)
{
	if (((T0*)(GE_void(((T190*)(C))->a3)))->id==96) {
		T96f39(((T190*)(C))->a3, C);
	} else {
		T95f25(((T190*)(C))->a3, C);
	}
}

/* XM_DOCUMENT.cursor_go_after */
void T95f25(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T95f12(C, a1));
	T190f15(a1);
	t1 = ((T1)(!(l1)));
	if (t1) {
		T95f29(C, a1);
	}
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].set_after */
void T190f15(T0* C)
{
	((T190*)(C))->a2 = EIF_VOID;
	((T190*)(C))->a4 = EIF_FALSE;
	((T190*)(C))->a1 = EIF_TRUE;
}

/* XM_DOCUMENT.cursor_off */
T1 T95f12(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T190*)(a1))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* XM_ELEMENT.cursor_go_after */
void T96f39(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T96f23(C, a1));
	T190f15(a1);
	t1 = ((T1)(!(l1)));
	if (t1) {
		T96f42(C, a1);
	}
}

/* XM_ELEMENT.cursor_off */
T1 T96f23(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T190*)(a1))->a2);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* XM_ELEMENT.named_same_name */
T1 T96f8(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	t1 = (((T96*)(GE_void(a1)))->a3);
	t2 = (T96f10(C, t1, a2));
	if (t2) {
		R = (T96f11(C, a1));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_ELEMENT.same_namespace */
T1 T96f11(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T1 t2;
	T0* t3;
	t1 = (T96f13(C));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T96f13(GE_void(a1)));
		t1 = ((T1)(!(t2)));
	}
	if (!(t1)) {
		t1 = (T96f13(C));
		if (t1) {
			t1 = (T96f13(GE_void(a1)));
		}
		if (t1) {
			t3 = (((T96*)(GE_void(a1)))->a2);
			R = (T314f4(GE_void(((T96*)(C))->a2), t3));
		} else {
			R = EIF_FALSE;
		}
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* XM_ELEMENT.has_namespace */
T1 T96f13(T0* C)
{
	T1 R = 0;
	R = ((((T96*)(C))->a2)!=(EIF_VOID));
	return R;
}

/* XM_ELEMENT.same_string */
T1 T96f10(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	t1 = (T96f12(C));
	R = (T59f1(GE_void(t1), a1, a2));
	return R;
}

/* XM_ELEMENT.string_equality_tester */
unsigned char ge237os1954 = '\0';
T0* ge237ov1954;
T0* T96f12(T0* C)
{
	T0* R = 0;
	if (ge237os1954) {
		return ge237ov1954;
	} else {
		ge237os1954 = '\1';
	}
	R = T59c3();
	ge237ov1954 = R;
	return R;
}

/* XM_NODE_TYPER.is_element */
T1 T318f8(T0* C)
{
	T1 R = 0;
	R = ((((T318*)(C))->a1)!=(EIF_VOID));
	return R;
}

/* XM_NODE_TYPER.default_create */
T0* T318c11(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T318));
	*(T318*)C = GE_default318;
	return C;
}

/* GEANT_REPLACE_TASK.fileset_element_name */
unsigned char ge117os9043 = '\0';
T0* ge117ov9043;
T0* T304f20(T0* C)
{
	T0* R = 0;
	if (ge117os9043) {
		return ge117ov9043;
	} else {
		ge117os9043 = '\1';
	}
	R = GE_ms("fileset", 7);
	ge117ov9043 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_flags */
void T388f35(T0* C, T0* a1)
{
	((T388*)(C))->a11 = a1;
}

/* GEANT_REPLACE_TASK.flags_attribute_name */
unsigned char ge117os9042 = '\0';
T0* ge117ov9042;
T0* T304f19(T0* C)
{
	T0* R = 0;
	if (ge117os9042) {
		return ge117ov9042;
	} else {
		ge117os9042 = '\1';
	}
	R = GE_ms("flags", 5);
	ge117ov9042 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_replace */
void T388f34(T0* C, T0* a1)
{
	((T388*)(C))->a10 = a1;
}

/* GEANT_REPLACE_TASK.replace_attribute_name */
unsigned char ge117os9041 = '\0';
T0* ge117ov9041;
T0* T304f18(T0* C)
{
	T0* R = 0;
	if (ge117os9041) {
		return ge117ov9041;
	} else {
		ge117os9041 = '\1';
	}
	R = GE_ms("replace", 7);
	ge117ov9041 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_variable_pattern */
void T388f33(T0* C, T0* a1)
{
	((T388*)(C))->a8 = a1;
}

/* GEANT_REPLACE_TASK.variable_pattern_attribute_name */
unsigned char ge117os9040 = '\0';
T0* ge117ov9040;
T0* T304f17(T0* C)
{
	T0* R = 0;
	if (ge117os9040) {
		return ge117ov9040;
	} else {
		ge117os9040 = '\1';
	}
	R = GE_ms("variable_pattern", 16);
	ge117ov9040 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_token */
void T388f32(T0* C, T0* a1)
{
	((T388*)(C))->a7 = a1;
}

/* GEANT_REPLACE_TASK.token_attribute_name */
unsigned char ge117os9039 = '\0';
T0* ge117ov9039;
T0* T304f16(T0* C)
{
	T0* R = 0;
	if (ge117os9039) {
		return ge117ov9039;
	} else {
		ge117os9039 = '\1';
	}
	R = GE_ms("token", 5);
	ge117ov9039 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_match */
void T388f31(T0* C, T0* a1)
{
	((T388*)(C))->a6 = a1;
}

/* GEANT_REPLACE_TASK.match_attribute_name */
unsigned char ge117os9038 = '\0';
T0* ge117ov9038;
T0* T304f15(T0* C)
{
	T0* R = 0;
	if (ge117os9038) {
		return ge117ov9038;
	} else {
		ge117os9038 = '\1';
	}
	R = GE_ms("match", 5);
	ge117ov9038 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_to_directory */
void T388f30(T0* C, T0* a1)
{
	((T388*)(C))->a9 = a1;
}

/* GEANT_REPLACE_TASK.to_directory_attribute_name */
unsigned char ge117os9037 = '\0';
T0* ge117ov9037;
T0* T304f14(T0* C)
{
	T0* R = 0;
	if (ge117os9037) {
		return ge117ov9037;
	} else {
		ge117os9037 = '\1';
	}
	R = GE_ms("to_directory", 12);
	ge117ov9037 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_to_file */
void T388f29(T0* C, T0* a1)
{
	((T388*)(C))->a4 = a1;
}

/* GEANT_REPLACE_TASK.to_file_attribute_name */
unsigned char ge117os9036 = '\0';
T0* ge117ov9036;
T0* T304f13(T0* C)
{
	T0* R = 0;
	if (ge117os9036) {
		return ge117ov9036;
	} else {
		ge117os9036 = '\1';
	}
	R = GE_ms("to_file", 7);
	ge117ov9036 = R;
	return R;
}

/* GEANT_REPLACE_COMMAND.set_file */
void T388f28(T0* C, T0* a1)
{
	((T388*)(C))->a3 = a1;
}

/* GEANT_REPLACE_TASK.attribute_value */
T0* T304f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T304*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T304f25(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T304f25(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T304f5(C));
		t4 = (((T22*)(GE_void(((T304*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T304f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_REPLACE_TASK.project_variables_resolver */
T0* T304f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_REPLACE_TASK.target_arguments_stack */
T0* T304f25(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_REPLACE_TASK.has_attribute */
T1 T304f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T304*)(C))->a3), a1));
	return R;
}

/* GEANT_REPLACE_TASK.file_attribute_name */
unsigned char ge117os9035 = '\0';
T0* ge117ov9035;
T0* T304f11(T0* C)
{
	T0* R = 0;
	if (ge117os9035) {
		return ge117ov9035;
	} else {
		ge117os9035 = '\1';
	}
	R = GE_ms("file", 4);
	ge117ov9035 = R;
	return R;
}

/* GEANT_REPLACE_TASK.task_make */
void T304f31(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T304f33(C, a1);
	t1 = (((T388*)(GE_void(a1)))->a2);
	T304f34(C, t1, a2);
}

/* GEANT_REPLACE_TASK.interpreting_element_make */
void T304f34(T0* C, T0* a1, T0* a2)
{
	T304f35(C, a2);
	T304f36(C, a1);
}

/* GEANT_REPLACE_TASK.set_project */
void T304f36(T0* C, T0* a1)
{
	((T304*)(C))->a2 = a1;
}

/* GEANT_REPLACE_TASK.element_make */
void T304f35(T0* C, T0* a1)
{
	T304f37(C, a1);
}

/* GEANT_REPLACE_TASK.set_xml_element */
void T304f37(T0* C, T0* a1)
{
	((T304*)(C))->a3 = a1;
}

/* GEANT_REPLACE_TASK.set_command */
void T304f33(T0* C, T0* a1)
{
	((T304*)(C))->a1 = a1;
}

/* GEANT_REPLACE_COMMAND.make */
T0* T388c27(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T388));
	*(T388*)C = GE_default388;
	T388f38(C, a1);
	return C;
}

/* GEANT_REPLACE_COMMAND.set_project */
void T388f38(T0* C, T0* a1)
{
	((T388*)(C))->a2 = a1;
}

/* GEANT_TARGET.replace_task_name */
unsigned char ge130os2287 = '\0';
T0* ge130ov2287;
T0* T26f72(T0* C)
{
	T0* R = 0;
	if (ge130os2287) {
		return ge130ov2287;
	} else {
		ge130os2287 = '\1';
	}
	R = GE_ms("replace", 7);
	ge130ov2287 = R;
	return R;
}

/* GEANT_INPUT_TASK.make */
T0* T303c30(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T303));
	*(T303*)C = GE_default303;
	((T303*)(C))->a1 = T387c13(a1);
	T303f32(C, ((T303*)(C))->a1, a2);
	t1 = (T303f11(C));
	t2 = (T303f8(C, t1));
	if (t2) {
		t1 = (T303f11(C));
		l1 = (T303f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T387f14(GE_void(((T303*)(C))->a1), l1);
		}
	}
	t1 = (T303f13(C));
	t2 = (T303f8(C, t1));
	if (t2) {
		t1 = (T303f13(C));
		l1 = (T303f12(C, t1));
		T387f15(GE_void(((T303*)(C))->a1), l1);
	}
	t1 = (T303f14(C));
	t2 = (T303f8(C, t1));
	if (t2) {
		t1 = (T303f14(C));
		l1 = (T303f12(C, t1));
		T387f16(GE_void(((T303*)(C))->a1), l1);
	}
	t1 = (T303f15(C));
	t2 = (T303f8(C, t1));
	if (t2) {
		t1 = (T303f15(C));
		l1 = (T303f12(C, t1));
		T387f17(GE_void(((T303*)(C))->a1), l1);
	}
	t1 = (T303f16(C));
	t2 = (T303f8(C, t1));
	if (t2) {
		t1 = (T303f16(C));
		l1 = (T303f12(C, t1));
		T387f18(GE_void(((T303*)(C))->a1), l1);
	}
	t1 = (T303f17(C));
	t2 = (T303f8(C, t1));
	if (t2) {
		t1 = (T303f17(C));
		t2 = (T303f18(C, t1));
		T387f19(GE_void(((T303*)(C))->a1), t2);
	}
	return C;
}

/* GEANT_INPUT_COMMAND.set_answer_required */
void T387f19(T0* C, T1 a1)
{
	((T387*)(C))->a8 = a1;
}

/* GEANT_INPUT_TASK.boolean_value */
T1 T303f18(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T303f12(C, a1));
	t1 = (T303f24(C));
	t2 = (T303f25(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T303f24(C));
		t2 = (T303f26(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T303f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T303f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T303f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T303f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T303f21(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_INPUT_TASK.std */
T0* T303f21(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_INPUT_TASK.false_attribute_value */
T0* T303f26(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_INPUT_TASK.true_attribute_value */
T0* T303f25(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_INPUT_TASK.string_ */
T0* T303f24(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_INPUT_TASK.answer_required_attribute_name */
unsigned char ge110os9017 = '\0';
T0* ge110ov9017;
T0* T303f17(T0* C)
{
	T0* R = 0;
	if (ge110os9017) {
		return ge110ov9017;
	} else {
		ge110os9017 = '\1';
	}
	R = GE_ms("answer_required", 15);
	ge110ov9017 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_validregexp */
void T387f18(T0* C, T0* a1)
{
	((T387*)(C))->a7 = a1;
}

/* GEANT_INPUT_TASK.validregexp_attribute_name */
unsigned char ge110os9016 = '\0';
T0* ge110ov9016;
T0* T303f16(T0* C)
{
	T0* R = 0;
	if (ge110os9016) {
		return ge110ov9016;
	} else {
		ge110os9016 = '\1';
	}
	R = GE_ms("validregexp", 11);
	ge110ov9016 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_validargs */
void T387f17(T0* C, T0* a1)
{
	((T387*)(C))->a6 = a1;
}

/* GEANT_INPUT_TASK.validargs_attribute_name */
unsigned char ge110os9015 = '\0';
T0* ge110ov9015;
T0* T303f15(T0* C)
{
	T0* R = 0;
	if (ge110os9015) {
		return ge110ov9015;
	} else {
		ge110os9015 = '\1';
	}
	R = GE_ms("validargs", 9);
	ge110ov9015 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_default_value */
void T387f16(T0* C, T0* a1)
{
	((T387*)(C))->a5 = a1;
}

/* GEANT_INPUT_TASK.defaultvalue_attribute_name */
unsigned char ge110os9014 = '\0';
T0* ge110ov9014;
T0* T303f14(T0* C)
{
	T0* R = 0;
	if (ge110os9014) {
		return ge110ov9014;
	} else {
		ge110os9014 = '\1';
	}
	R = GE_ms("defaultvalue", 12);
	ge110ov9014 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_message */
void T387f15(T0* C, T0* a1)
{
	((T387*)(C))->a4 = a1;
}

/* GEANT_INPUT_TASK.message_attribute_name */
unsigned char ge110os9013 = '\0';
T0* ge110ov9013;
T0* T303f13(T0* C)
{
	T0* R = 0;
	if (ge110os9013) {
		return ge110ov9013;
	} else {
		ge110os9013 = '\1';
	}
	R = GE_ms("message", 7);
	ge110ov9013 = R;
	return R;
}

/* GEANT_INPUT_COMMAND.set_variable */
void T387f14(T0* C, T0* a1)
{
	((T387*)(C))->a3 = a1;
}

/* GEANT_INPUT_TASK.attribute_value */
T0* T303f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T303*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T303f23(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T303f23(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T303f5(C));
		t4 = (((T22*)(GE_void(((T303*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T303f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_INPUT_TASK.project_variables_resolver */
T0* T303f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_INPUT_TASK.target_arguments_stack */
T0* T303f23(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_INPUT_TASK.has_attribute */
T1 T303f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T303*)(C))->a3), a1));
	return R;
}

/* GEANT_INPUT_TASK.variable_attribute_name */
unsigned char ge110os9012 = '\0';
T0* ge110ov9012;
T0* T303f11(T0* C)
{
	T0* R = 0;
	if (ge110os9012) {
		return ge110ov9012;
	} else {
		ge110os9012 = '\1';
	}
	R = GE_ms("variable", 8);
	ge110ov9012 = R;
	return R;
}

/* GEANT_INPUT_TASK.task_make */
void T303f32(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T303f34(C, a1);
	t1 = (((T387*)(GE_void(a1)))->a2);
	T303f35(C, t1, a2);
}

/* GEANT_INPUT_TASK.interpreting_element_make */
void T303f35(T0* C, T0* a1, T0* a2)
{
	T303f36(C, a2);
	T303f37(C, a1);
}

/* GEANT_INPUT_TASK.set_project */
void T303f37(T0* C, T0* a1)
{
	((T303*)(C))->a2 = a1;
}

/* GEANT_INPUT_TASK.element_make */
void T303f36(T0* C, T0* a1)
{
	T303f38(C, a1);
}

/* GEANT_INPUT_TASK.set_xml_element */
void T303f38(T0* C, T0* a1)
{
	((T303*)(C))->a3 = a1;
}

/* GEANT_INPUT_TASK.set_command */
void T303f34(T0* C, T0* a1)
{
	((T303*)(C))->a1 = a1;
}

/* GEANT_INPUT_COMMAND.make */
T0* T387c13(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T387));
	*(T387*)C = GE_default387;
	T387f21(C, a1);
	return C;
}

/* GEANT_INPUT_COMMAND.set_project */
void T387f21(T0* C, T0* a1)
{
	((T387*)(C))->a2 = a1;
}

/* GEANT_TARGET.input_task_name */
unsigned char ge130os2286 = '\0';
T0* ge130ov2286;
T0* T26f71(T0* C)
{
	T0* R = 0;
	if (ge130os2286) {
		return ge130ov2286;
	} else {
		ge130os2286 = '\1';
	}
	R = GE_ms("input", 5);
	ge130ov2286 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.make */
T0* T302c24(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T302));
	*(T302*)C = GE_default302;
	((T302*)(C))->a1 = T386c13(a1);
	T302f26(C, ((T302*)(C))->a1, a2);
	t1 = (T302f11(C));
	t2 = (T302f8(C, t1));
	if (t2) {
		t1 = (T302f11(C));
		l1 = (T302f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T386f14(GE_void(((T302*)(C))->a1), l1);
		}
	}
	T386f15(GE_void(((T302*)(C))->a1), GE_ms("true", 4));
	t1 = (T302f13(C));
	t2 = (T302f8(C, t1));
	if (t2) {
		t1 = (T302f13(C));
		l1 = (T302f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T386f15(GE_void(((T302*)(C))->a1), l1);
		}
	}
	T386f16(GE_void(((T302*)(C))->a1), GE_ms("false", 5));
	t1 = (T302f14(C));
	t2 = (T302f8(C, t1));
	if (t2) {
		t1 = (T302f14(C));
		l1 = (T302f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T386f16(GE_void(((T302*)(C))->a1), l1);
		}
	}
	t1 = (T302f15(C));
	t2 = (T302f8(C, t1));
	if (t2) {
		t1 = (T302f15(C));
		l1 = (T302f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T386f17(GE_void(((T302*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_AVAILABLE_COMMAND.set_variable_name */
void T386f17(T0* C, T0* a1)
{
	((T386*)(C))->a6 = a1;
}

/* GEANT_AVAILABLE_TASK.variable_attribute_name */
unsigned char ge97os8995 = '\0';
T0* ge97ov8995;
T0* T302f15(T0* C)
{
	T0* R = 0;
	if (ge97os8995) {
		return ge97ov8995;
	} else {
		ge97os8995 = '\1';
	}
	R = GE_ms("variable", 8);
	ge97ov8995 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.false_value_attribute_name */
unsigned char ge97os8997 = '\0';
T0* ge97ov8997;
T0* T302f14(T0* C)
{
	T0* R = 0;
	if (ge97os8997) {
		return ge97ov8997;
	} else {
		ge97os8997 = '\1';
	}
	R = GE_ms("false_value", 11);
	ge97ov8997 = R;
	return R;
}

/* GEANT_AVAILABLE_COMMAND.set_false_value */
void T386f16(T0* C, T0* a1)
{
	((T386*)(C))->a5 = a1;
}

/* GEANT_AVAILABLE_TASK.true_value_attribute_name */
unsigned char ge97os8996 = '\0';
T0* ge97ov8996;
T0* T302f13(T0* C)
{
	T0* R = 0;
	if (ge97os8996) {
		return ge97ov8996;
	} else {
		ge97os8996 = '\1';
	}
	R = GE_ms("true_value", 10);
	ge97ov8996 = R;
	return R;
}

/* GEANT_AVAILABLE_COMMAND.set_true_value */
void T386f15(T0* C, T0* a1)
{
	((T386*)(C))->a4 = a1;
}

/* GEANT_AVAILABLE_COMMAND.set_resource_name */
void T386f14(T0* C, T0* a1)
{
	((T386*)(C))->a3 = a1;
}

/* GEANT_AVAILABLE_TASK.attribute_value */
T0* T302f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T302*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T302f20(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T302f20(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T302f5(C));
		t4 = (((T22*)(GE_void(((T302*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T302f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_AVAILABLE_TASK.project_variables_resolver */
T0* T302f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.target_arguments_stack */
T0* T302f20(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.has_attribute */
T1 T302f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T302*)(C))->a3), a1));
	return R;
}

/* GEANT_AVAILABLE_TASK.resource_attribute_name */
unsigned char ge97os8994 = '\0';
T0* ge97ov8994;
T0* T302f11(T0* C)
{
	T0* R = 0;
	if (ge97os8994) {
		return ge97ov8994;
	} else {
		ge97os8994 = '\1';
	}
	R = GE_ms("resource", 8);
	ge97ov8994 = R;
	return R;
}

/* GEANT_AVAILABLE_TASK.task_make */
void T302f26(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T302f28(C, a1);
	t1 = (((T386*)(GE_void(a1)))->a2);
	T302f29(C, t1, a2);
}

/* GEANT_AVAILABLE_TASK.interpreting_element_make */
void T302f29(T0* C, T0* a1, T0* a2)
{
	T302f30(C, a2);
	T302f31(C, a1);
}

/* GEANT_AVAILABLE_TASK.set_project */
void T302f31(T0* C, T0* a1)
{
	((T302*)(C))->a2 = a1;
}

/* GEANT_AVAILABLE_TASK.element_make */
void T302f30(T0* C, T0* a1)
{
	T302f32(C, a1);
}

/* GEANT_AVAILABLE_TASK.set_xml_element */
void T302f32(T0* C, T0* a1)
{
	((T302*)(C))->a3 = a1;
}

/* GEANT_AVAILABLE_TASK.set_command */
void T302f28(T0* C, T0* a1)
{
	((T302*)(C))->a1 = a1;
}

/* GEANT_AVAILABLE_COMMAND.make */
T0* T386c13(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T386));
	*(T386*)C = GE_default386;
	T386f19(C, a1);
	return C;
}

/* GEANT_AVAILABLE_COMMAND.set_project */
void T386f19(T0* C, T0* a1)
{
	((T386*)(C))->a2 = a1;
}

/* GEANT_TARGET.available_task_name */
unsigned char ge130os2285 = '\0';
T0* ge130ov2285;
T0* T26f70(T0* C)
{
	T0* R = 0;
	if (ge130os2285) {
		return ge130ov2285;
	} else {
		ge130os2285 = '\1';
	}
	R = GE_ms("available", 9);
	ge130ov2285 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.make */
T0* T301c26(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	T0* t5;
	C = (T0*)GE_alloc(sizeof(T301));
	*(T301*)C = GE_default301;
	((T301*)(C))->a1 = T385c6(a1);
	T301f28(C, ((T301*)(C))->a1, a2);
	t1 = (T301f11(C));
	t2 = (T301f8(C, t1));
	if (t2) {
		t1 = (T301f11(C));
		l1 = (T301f12(C, t1));
		T385f7(GE_void(((T301*)(C))->a1), l1);
	}
	t1 = (T301f13(C));
	l2 = (T301f14(C, t1));
	t1 = (T301f15(C));
	t2 = (T301f8(C, t1));
	if (t2) {
		t3 = (((T115*)(GE_void(l2)))->a1);
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			t1 = GE_ma33((T6)1,
GE_ms("  [precursor]: error: Usage of both, attribute \'arguments\' and subelements \'argument\' is not allowed.", 101));
			T301f29(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (T301f15(C));
		l1 = (T301f12(C, t1));
		t1 = (T301f16(C));
		l6 = (T371f6(GE_void(t1), l1));
		l5 = (T225f7(GE_void(l6)));
		l7 = (T6)(GE_int32(1));
		T271f8(GE_void(l5));
		t2 = (((T271*)(GE_void(l5)))->a3);
		while (!(t2)) {
			t1 = (((T385*)(GE_void(((T301*)(C))->a1)))->a2);
			t4 = (T271f6(GE_void(l5)));
			t5 = (T6f12(&l7));
			T34f66(GE_void(t1), t4, t5);
			t1 = (T271f6(GE_void(l5)));
			t1 = GE_ma33((T6)3,
GE_ms("  [precursor]: found actual (terse) argument. Value: \'", 54),
t1,
GE_ms("\'\n", 2));
			T22f31(GE_void(((T301*)(C))->a2), t1);
			l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
			T271f9(GE_void(l5));
			t2 = (((T271*)(GE_void(l5)))->a3);
		}
	} else {
		l4 = (T115f5(GE_void(l2)));
		T116f8(GE_void(l4));
		t2 = (((T116*)(GE_void(l4)))->a1);
		while (!(t2)) {
			t1 = (T116f6(GE_void(l4)));
			l3 = T365c16(((T301*)(C))->a2, t1);
			t2 = (T365f10(GE_void(l3)));
			if (t2) {
				t1 = (T365f4(GE_void(l3)));
				t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			}
			if (t2) {
				t1 = (((T385*)(GE_void(((T301*)(C))->a1)))->a2);
				t4 = (T365f4(GE_void(l3)));
				t2 = (T34f36(GE_void(t1), t4));
				if (t2) {
					t1 = (T365f4(GE_void(l3)));
					t1 = GE_ma33((T6)3,
GE_ms("  [precursor]: error: duplicate definition for argument \'", 57),
t1,
GE_ms("\'", 1));
					T301f29(C, (T6)(GE_int32(1)), t1);
				}
				t1 = (((T385*)(GE_void(((T301*)(C))->a1)))->a2);
				t4 = (T365f5(GE_void(l3)));
				t5 = (T365f4(GE_void(l3)));
				T34f66(GE_void(t1), t4, t5);
				t1 = (T365f4(GE_void(l3)));
				t1 = GE_ma33((T6)3,
GE_ms("  [precursor]: found actual argument \'", 38),
t1,
GE_ms("\'\n", 2));
				T22f31(GE_void(((T301*)(C))->a2), t1);
			}
			T116f9(GE_void(l4));
			t2 = (((T116*)(GE_void(l4)))->a1);
		}
	}
	return C;
}

/* GEANT_DEFINE_ELEMENT.value */
T0* T365f5(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T365f12(C));
	R = (T365f14(C, t1));
	return R;
}

/* GEANT_DEFINE_ELEMENT.value_attribute_name */
unsigned char ge139os7651 = '\0';
T0* ge139ov7651;
T0* T365f12(T0* C)
{
	T0* R = 0;
	if (ge139os7651) {
		return ge139ov7651;
	} else {
		ge139os7651 = '\1';
	}
	R = GE_ms("value", 5);
	ge139ov7651 = R;
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.has */
T1 T34f36(T0* C, T0* a1)
{
	T1 R = 0;
	T34f50(C, a1);
	R = ((((T34*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* DS_LINKED_LIST_CURSOR [STRING_8].forth */
void T271f9(T0* C)
{
	T225f14(GE_void(((T271*)(C))->a1), C);
}

/* DS_LINKED_LIST [STRING_8].cursor_forth */
void T225f14(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T271*)(a1))->a2);
	if (t1) {
		l1 = EIF_TRUE;
		l3 = ((T225*)(C))->a2;
	} else {
		t2 = (((T271*)(a1))->a4);
		l3 = (((T275*)(GE_void(t2)))->a2);
	}
	l2 = ((l3)==(EIF_VOID));
	T271f10(a1, l3, EIF_FALSE, l2);
	if (l2) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			T225f16(C, a1);
		}
	} else {
		if (l1) {
			T225f15(C, a1);
		}
	}
}

/* DS_LINKED_LIST [STRING_8].add_traversing_cursor */
void T225f15(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T225*)(C))->a1));
	if (t1) {
		t2 = (((T271*)(GE_void(((T225*)(C))->a1)))->a5);
		T271f11(a1, t2);
		T271f11(GE_void(((T225*)(C))->a1), a1);
	}
}

/* DS_LINKED_LIST_CURSOR [STRING_8].set_next_cursor */
void T271f11(T0* C, T0* a1)
{
	((T271*)(C))->a5 = a1;
}

/* DS_LINKED_LIST [STRING_8].remove_traversing_cursor */
void T225f16(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T225*)(C))->a1));
	if (t1) {
		l2 = ((T225*)(C))->a1;
		l1 = (((T271*)(GE_void(l2)))->a5);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T271*)(GE_void(l1)))->a5);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T271*)(a1))->a5);
			T271f11(GE_void(l2), t2);
			T271f11(a1, EIF_VOID);
		}
	}
}

/* DS_LINKED_LIST_CURSOR [STRING_8].set */
void T271f10(T0* C, T0* a1, T1 a2, T1 a3)
{
	((T271*)(C))->a4 = a1;
	((T271*)(C))->a2 = a2;
	((T271*)(C))->a3 = a3;
}

/* GEANT_ARGUMENT_VARIABLES.force_last */
void T34f66(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T34f49(C);
	T34f50(C, a2);
	t1 = ((((T34*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T34f51(C, a1, ((T34*)(C))->a1);
	} else {
		l1 = ((T6)((((T34*)(C))->a6)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T34*)(C))->a3));
		if (t1) {
			t2 = (T34f23(C, l1));
			T34f52(C, t2);
			l2 = (T34f24(C, a2));
		} else {
			l2 = ((T34*)(C))->a4;
		}
		t2 = (T34f29(C, l2));
		T34f53(C, t2, l1);
		T34f54(C, l1, l2);
		T34f51(C, a1, l1);
		T34f55(C, a2, l1);
		((T34*)(C))->a6 = l1;
		((T34*)(C))->a2 = ((T6)((((T34*)(C))->a2)+((T6)(GE_int32(1)))));
	}
}

/* GEANT_ARGUMENT_VARIABLES.key_storage_put */
void T34f55(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T34*)(C))->a15)))->z2[a2] = (a1);
}

/* GEANT_ARGUMENT_VARIABLES.slots_put */
void T34f54(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T34*)(C))->a14)))->z2[a2] = (a1);
}

/* GEANT_ARGUMENT_VARIABLES.clashes_put */
void T34f53(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T34*)(C))->a13)))->z2[a2] = (a1);
}

/* GEANT_ARGUMENT_VARIABLES.resize */
void T34f52(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T34f49(C);
	l1 = (T34f20(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T34f57(C, t1);
	l2 = ((T34*)(C))->a10;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T34f54(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T34*)(C))->a10 = l1;
	l2 = ((T34*)(C))->a6;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T34f27(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T34f28(C, l2));
			l3 = (T34f24(C, t3));
			t1 = (T34f29(C, l3));
			T34f53(C, t1, l2);
			T34f54(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f58(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f59(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f60(C, t1);
	((T34*)(C))->a3 = a1;
	((T34*)(C))->a1 = (T6)(GE_int32(0));
}

/* GEANT_ARGUMENT_VARIABLES.clashes_resize */
void T34f60(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T34f26(C));
	((T34*)(C))->a13 = (T65f1(GE_void(t1), ((T34*)(C))->a13, a1));
}

/* GEANT_ARGUMENT_VARIABLES.special_integer_ */
T0* T34f26(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.key_storage_resize */
void T34f59(T0* C, T6 a1)
{
	((T34*)(C))->a15 = (T66f1(GE_void(((T34*)(C))->a18), ((T34*)(C))->a15, a1));
}

/* GEANT_ARGUMENT_VARIABLES.item_storage_resize */
void T34f58(T0* C, T6 a1)
{
	((T34*)(C))->a12 = (T66f1(GE_void(((T34*)(C))->a17), ((T34*)(C))->a12, a1));
}

/* GEANT_ARGUMENT_VARIABLES.slots_resize */
void T34f57(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T34f26(C));
	((T34*)(C))->a14 = (T65f1(GE_void(t1), ((T34*)(C))->a14, a1));
}

/* GEANT_ARGUMENT_VARIABLES.new_modulus */
T6 T34f20(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.new_capacity */
T6 T34f23(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.item_storage_put */
void T34f51(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T34*)(C))->a12)))->z2[a2] = (a1);
}

/* GEANT_ARGUMENT_VARIABLES.unset_found_item */
void T34f49(T0* C)
{
	((T34*)(C))->a9 = (T6)(GE_int32(0));
}

/* DS_LINKED_LIST_CURSOR [STRING_8].item */
T0* T271f6(T0* C)
{
	T0* R = 0;
	R = (((T275*)(GE_void(((T271*)(C))->a4)))->a1);
	return R;
}

/* DS_LINKED_LIST_CURSOR [STRING_8].start */
void T271f8(T0* C)
{
	T225f13(GE_void(((T271*)(C))->a1), C);
}

/* DS_LINKED_LIST [STRING_8].cursor_start */
void T225f13(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T225f9(C, a1));
	l2 = ((((T225*)(C))->a2)==(EIF_VOID));
	T271f10(a1, ((T225*)(C))->a2, EIF_FALSE, l2);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T225f15(C, a1);
	}
}

/* DS_LINKED_LIST [STRING_8].cursor_off */
T1 T225f9(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T271*)(a1))->a4);
	R = ((t1)==(EIF_VOID));
	return R;
}

/* DS_LINKED_LIST [STRING_8].new_cursor */
T0* T225f7(T0* C)
{
	T0* R = 0;
	R = T271c7(C);
	return R;
}

/* DS_LINKED_LIST_CURSOR [STRING_8].make */
T0* T271c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T271));
	*(T271*)C = GE_default271;
	((T271*)(C))->a1 = a1;
	((T271*)(C))->a2 = EIF_TRUE;
	return C;
}

/* ST_SPLITTER.split */
T0* T371f6(T0* C, T0* a1)
{
	T0* R = 0;
	R = (T371f8(C, a1, EIF_FALSE));
	return R;
}

/* ST_SPLITTER.do_split */
T0* T371f8(T0* C, T0* a1, T1 a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T6 l6 = 0;
	T0* l7 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	R = T225c10();
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		if (((T371*)(C))->a1) {
			l5 = ((T6)(((T371*)(C))->a2));
		}
		l1 = (T6)(GE_int32(1));
		l3 = (T6)(GE_int32(0));
		l4 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l6 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T194f14(a1, l1)));
			if (((T371*)(C))->a1) {
				t1 = ((l6)==(l5));
			} else {
				t1 = EIF_FALSE;
			}
			if (t1) {
				t1 = ((T1)((l1)<(l2)));
			}
			if (t1) {
				t1 = ((l7)==(EIF_VOID));
				if (t1) {
					t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
					l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l4, t2):T194f11(a1, l4, t2)));
				} else {
					t3 = (T371f5(C));
					t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
					l7 = (T76f4(GE_void(t3), l7, a1, l4, t2));
				}
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				l4 = l1;
			} else {
				t1 = (T417f24(GE_void(((T371*)(C))->a3), l6));
				if (t1) {
					t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
					t1 = ((l3)==(t2));
					if (t1) {
						if (a2) {
							T225f11(GE_void(R), GE_ms("", 0));
						}
					} else {
						t1 = ((l7)==(EIF_VOID));
						if (t1) {
							t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
							l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l4, t2):T194f11(a1, l4, t2)));
						} else {
							t3 = (T371f5(C));
							t2 = ((T6)((l1)-((T6)(GE_int32(1)))));
							l7 = (T76f4(GE_void(t3), l7, a1, l4, t2));
						}
						T225f11(GE_void(R), l7);
					}
					l7 = EIF_VOID;
					l3 = l1;
					l4 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
			}
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t1 = ((l3)==((T6)(GE_int32(0))));
		if (t1) {
			t1 = ((l7)==(EIF_VOID));
			if (t1) {
				l7 = a1;
			} else {
				t3 = (T371f5(C));
				l7 = (T76f4(GE_void(t3), l7, a1, l4, l2));
			}
			T225f11(GE_void(R), l7);
		} else {
			t1 = ((T1)((l3)<(l2)));
			if (t1) {
				t1 = ((l7)==(EIF_VOID));
				if (t1) {
					l7 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l4, l2):T194f11(a1, l4, l2)));
				} else {
					t3 = (T371f5(C));
					l7 = (T76f4(GE_void(t3), l7, a1, l4, l2));
				}
				T225f11(GE_void(R), l7);
			} else {
				if (a2) {
					T225f11(GE_void(R), GE_ms("", 0));
				}
			}
		}
	}
	return R;
}

/* DS_LINKED_LIST [STRING_8].force_last */
void T225f11(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T225f6(C));
	if (t1) {
		((T225*)(C))->a2 = T275c3(a1);
		((T225*)(C))->a4 = ((T225*)(C))->a2;
		((T225*)(C))->a5 = (T6)(GE_int32(1));
	} else {
		l1 = ((T225*)(C))->a4;
		((T225*)(C))->a4 = T275c3(a1);
		T275f4(GE_void(l1), ((T225*)(C))->a4);
		((T225*)(C))->a5 = ((T6)((((T225*)(C))->a5)+((T6)(GE_int32(1)))));
	}
}

/* DS_LINKABLE [STRING_8].put_right */
void T275f4(T0* C, T0* a1)
{
	((T275*)(C))->a2 = a1;
}

/* DS_LINKABLE [STRING_8].make */
T0* T275c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T275));
	*(T275*)C = GE_default275;
	((T275*)(C))->a1 = a1;
	return C;
}

/* DS_LINKED_LIST [STRING_8].is_empty */
T1 T225f6(T0* C)
{
	T1 R = 0;
	R = ((((T225*)(C))->a5)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_SET [INTEGER_32].has */
T1 T417f24(T0* C, T6 a1)
{
	T1 R = 0;
	T417f31(C, a1);
	R = ((((T417*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_SET [INTEGER_32].search_position */
void T417f31(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T6 t2;
	T1 t3;
	t1 = (EIF_FALSE);
	if (t1) {
		((T417*)(C))->a1 = (T417f25(C, ((T417*)(C))->a3));
		((T417*)(C))->a7 = ((T417*)(C))->a3;
		((T417*)(C))->a9 = (T6)(GE_int32(0));
	} else {
		l4 = (T417f17(C));
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T417*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T417f18(C, ((T417*)(C))->a1));
				t3 = ((GE_void(l4), a1, t2, (T1)0));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = ((GE_void(l4), a1, l3, (T1)0));
			}
			if (t1) {
				((T417*)(C))->a7 = (T417f19(C, a1));
				l1 = (T417f25(C, ((T417*)(C))->a7));
				((T417*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T417f18(C, l1));
					t1 = ((GE_void(l4), a1, t2, (T1)0));
					if (t1) {
						((T417*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T417f22(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T417*)(C))->a9 = l2;
			}
		} else {
			t1 = ((((T417*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T417f18(C, ((T417*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T417*)(C))->a7 = (T417f19(C, a1));
				l1 = (T417f25(C, ((T417*)(C))->a7));
				((T417*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T417f18(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T417*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T417f22(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T417*)(C))->a9 = l2;
			}
		}
	}
}

/* DS_HASH_SET [INTEGER_32].clashes_item */
T6 T417f22(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T417*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [INTEGER_32].hash_position */
T6 T417f19(T0* C, T6 a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = (EIF_TRUE);
	if (t1) {
		t2 = (T6f24(&a1));
		R = ((T6)((t2)%(((T417*)(C))->a3)));
	} else {
		R = ((T417*)(C))->a3;
	}
	return R;
}

/* DS_HASH_SET [INTEGER_32].key_storage_item */
T6 T417f18(T0* C, T6 a1)
{
	T6 R = 0;
	R = (T417f27(C, a1));
	return R;
}

/* DS_HASH_SET [INTEGER_32].item_storage_item */
T6 T417f27(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T417*)(C))->a11)))->z2[a1]);
	return R;
}

/* DS_HASH_SET [INTEGER_32].key_equality_tester */
T0* T417f17(T0* C)
{
	T0* R = 0;
	R = ((T417*)(C))->a15;
	return R;
}

/* DS_HASH_SET [INTEGER_32].slots_item */
T6 T417f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T417*)(C))->a13)))->z2[a1]);
	return R;
}

/* KL_STRING_ROUTINES.appended_substring */
T0* T76f4(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	if ((a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(a1))->id) {
		case 194:
			l1 = a1;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		T194f57(GE_void(l1), a2, a3, a4);
		R = l1;
	} else {
		if ((a2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a2))->id) {
			case 194:
				l1 = a2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
			t2 = ((T6)((t2)+(a4)));
			t2 = ((T6)((t2)-(a3)));
			t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
			l1 = (T194f9(GE_void(l1), t2));
			T194f55(GE_void(l1), a1);
			T194f57(GE_void(l1), a2, a3, a4);
			R = l1;
		} else {
			l2 = a3;
			t1 = (T6f1(&l2, a4));
			while (!(t1)) {
				t3 = (((((T0*)(GE_void(a2)))->id==17)?T17f9(a2, l2):T194f10(a2, l2)));
				if (((T0*)(GE_void(a1)))->id==17) {
					T17f34(a1, t3);
				} else {
					T194f56(a1, t3);
				}
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l2, a4));
			}
			R = a1;
		}
	}
	return R;
}

/* UC_UTF8_STRING.append_character */
void T194f56(T0* C, T2 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	t1 = (T2f17(&a1, (T2)('\177')));
	if (t1) {
		l2 = (T6)(GE_int32(1));
	} else {
		t2 = (T194f25(C));
		l2 = (T193f23(GE_void(t2), a1));
	}
	l1 = ((T6)((((T194*)(C))->a3)+((T6)(GE_int32(1)))));
	l3 = ((T6)((((T194*)(C))->a3)+(l2)));
	t3 = (T194f38(C));
	t1 = (T6f1(&l3, t3));
	if (t1) {
		T194f65(C, l3);
	}
	((T194*)(C))->a3 = l3;
	t1 = ((l2)==((T6)(GE_int32(1))));
	if (t1) {
		l4 = ((T6)((((T194*)(C))->a1)+((T6)(GE_int32(1)))));
		T194f61(C, ((T194*)(C))->a3);
		T194f66(C, a1, l1);
		T194f61(C, l4);
	} else {
		t3 = ((T6)((((T194*)(C))->a1)+((T6)(GE_int32(1)))));
		T194f61(C, t3);
		T194f67(C, a1, l2, l1);
	}
}

/* UC_UTF8_STRING.resize_byte_storage */
void T194f65(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 t1;
	T1 t2;
	t1 = (T194f38(C));
	t2 = (T6f1(&a1, t1));
	if (t2) {
		T194f72(C, a1);
		l1 = ((T194*)(C))->a1;
		T194f61(C, a1);
		T194f63(C, a1);
		T194f61(C, l1);
	}
}

/* UC_UTF8_STRING.resize */
void T194f72(T0* C, T6 a1)
{
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	l1 = (((T15*)(GE_void(((T194*)(C))->a2)))->z1);
	t1 = (T6f5(&a1, l1));
	if (t1) {
		t2 = ((T6)((a1)+((T6)(GE_int32(1)))));
		((T194*)(C))->a2 = (T15f2(GE_void(((T194*)(C))->a2), t2));
	}
}

/* UC_UTF8_STRING.append_string */
void T194f55(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T1 l8 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	t1 = (T194f36(C));
	t2 = (T82f1(GE_void(t1), a1, ge314ov6272));
	if (t2) {
		t1 = (T194f25(C));
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		l1 = (T193f22(GE_void(t1), a1, (T6)(GE_int32(1)), t3));
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t2 = ((l1)==(t3));
		if (t2) {
			l4 = ((T6)((((T194*)(C))->a3)+(l1)));
			l5 = ((T6)((((T194*)(C))->a1)+(l1)));
			T194f61(C, ((T194*)(C))->a3);
			T194f63(C, ((T194*)(C))->a3);
			l8 = (T252s1(EIF_FALSE));
			T194f55p1(C, a1);
			l8 = (T252s1(l8));
			t3 = (T194f38(C));
			T194f61(C, t3);
			t3 = (T194f38(C));
			T194f63(C, t3);
			T194f61(C, l5);
			((T194*)(C))->a3 = l4;
		} else {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
			T194f57(C, a1, (T6)(GE_int32(1)), t3);
		}
	} else {
		if ((a1)==EIF_VOID) {
			l7 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 194:
				l7 = a1;
				break;
			default:
				l7 = EIF_VOID;
			}
		}
		t2 = ((l7)!=(EIF_VOID));
		if (t2) {
			if ((a1)==EIF_VOID) {
				l6 = EIF_VOID;
			} else {
				switch (((T0*)(a1))->id) {
				case 194:
					l6 = a1;
					break;
				default:
					l6 = EIF_VOID;
				}
			}
			t2 = ((l6)!=(EIF_VOID));
			if (!(t2)) {
				t1 = (T194f36(C));
				t4 = (T194f39(C));
				t2 = (T82f1(GE_void(t1), l7, t4));
			}
			if (t2) {
				t2 = ((l7)==(C));
				if (t2) {
					t3 = (T6)(GE_int32(2));
					l4 = ((T6)((t3)*(((T194*)(C))->a3)));
					t3 = (T6)(GE_int32(2));
					l5 = ((T6)((t3)*(((T194*)(C))->a1)));
					T194f61(C, ((T194*)(C))->a3);
					T194f63(C, ((T194*)(C))->a3);
					l8 = (T252s1(EIF_FALSE));
					T194f55p1(C, a1);
					l8 = (T252s1(l8));
					t3 = (T194f38(C));
					T194f61(C, t3);
					t3 = (T194f38(C));
					T194f63(C, t3);
					T194f61(C, l5);
					((T194*)(C))->a3 = l4;
				} else {
					l3 = (((T194*)(GE_void(l7)))->a1);
					l2 = (((T194*)(GE_void(l7)))->a3);
					l4 = ((T6)((((T194*)(C))->a3)+(l2)));
					l5 = ((T6)((((T194*)(C))->a1)+(l3)));
					T194f61(GE_void(l7), l2);
					T194f61(C, ((T194*)(C))->a3);
					T194f63(C, ((T194*)(C))->a3);
					l8 = (T252s1(EIF_FALSE));
					T194f55p1(C, a1);
					l8 = (T252s1(l8));
					t3 = (T194f38(C));
					T194f61(C, t3);
					t3 = (T194f38(C));
					T194f63(C, t3);
					T194f61(C, l5);
					T194f61(GE_void(l7), l3);
					((T194*)(C))->a3 = l4;
				}
			} else {
				t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
				T194f57(C, a1, (T6)(GE_int32(1)), t3);
			}
		} else {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
			T194f57(C, a1, (T6)(GE_int32(1)), t3);
		}
	}
}

/* UC_UTF8_STRING.dummy_uc_string */
unsigned char ge314os6273 = '\0';
T0* ge314ov6273;
T0* T194f39(T0* C)
{
	T0* R = 0;
	if (ge314os6273) {
		return ge314ov6273;
	} else {
		ge314os6273 = '\1';
	}
	R = T111c8();
	ge314ov6273 = R;
	return R;
}

/* UC_UTF8_STRING.append_string */
void T194f55p1(T0* C, T0* a1)
{
	T1 t1;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		T194f64(C, a1);
	}
}

/* UC_UTF8_STRING.append */
void T194f64(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		l1 = ((T194*)(C))->a1;
		l3 = ((T6)((l2)+(l1)));
		t2 = (T194f38(C));
		t1 = (T6f1(&l3, t2));
		if (t1) {
			t2 = (T194f41(C));
			t2 = ((T6)((l3)+(t2)));
			T194f72(C, t2);
		}
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T194*)(a1))->a2));
		T15f8(GE_void(((T194*)(C))->a2), t3, (T6)(GE_int32(0)), l1, l2);
		((T194*)(C))->a1 = l3;
		((T194*)(C))->a4 = (T6)(GE_int32(0));
	}
}

/* UC_UTF8_STRING.additional_space */
T6 T194f41(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (T194f38(C));
	t1 = ((T6)((t1)/((T6)(GE_int32(2)))));
	R = (T6f10(&t1, (T6)(GE_int32(5))));
	return R;
}

/* ISE_RUNTIME.check_assert */
T1 T252s1(T1 a1)
{
	T1 R = 0;
	return R;
}

/* UC_UTF8_STRING.new_empty_string */
T0* T194f9(T0* C, T6 a1)
{
	T0* R = 0;
	R = T194c59(a1);
	return R;
}

/* UC_UTF8_STRING.append_substring */
void T194f57(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = ((T6)((a3)-(a2)));
	l1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	t2 = ((l1)!=((T6)(GE_int32(0))));
	if (t2) {
		t2 = ((a1)==(C));
		if (t2) {
			l5 = (T194f40(C));
		} else {
			l5 = a1;
		}
		t3 = (T194f25(C));
		l3 = (T193f22(GE_void(t3), l5, a2, a3));
		l2 = ((T6)((((T194*)(C))->a3)+((T6)(GE_int32(1)))));
		l4 = ((T6)((((T194*)(C))->a3)+(l3)));
		t1 = (T194f38(C));
		t2 = (T6f1(&l4, t1));
		if (t2) {
			T194f65(C, l4);
		}
		((T194*)(C))->a3 = l4;
		t1 = ((T6)((((T194*)(C))->a1)+(l1)));
		T194f61(C, t1);
		T194f68(C, l5, a2, a3, l3, l2);
	}
}

/* ST_SPLITTER.string_ */
T0* T371f5(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* DS_LINKED_LIST [STRING_8].make */
T0* T225c10(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T225));
	*(T225*)C = GE_default225;
	((T225*)(C))->a1 = (T225f7(C));
	return C;
}

/* GEANT_PRECURSOR_TASK.arguments_string_splitter */
unsigned char ge61os1575 = '\0';
T0* ge61ov1575;
T0* T301f16(T0* C)
{
	T0* R = 0;
	if (ge61os1575) {
		return ge61ov1575;
	} else {
		ge61os1575 = '\1';
	}
	R = T371c9();
	T371f10(GE_void(R), GE_ms(",\t", 2));
	ge61ov1575 = R;
	return R;
}

/* ST_SPLITTER.set_separators */
void T371f10(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	((T371*)(C))->a4 = a1;
	l2 = (((T17*)(a1))->a2);
	((T371*)(C))->a3 = T417c29(l2);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T17f12(a1, l1));
		T417f30(GE_void(((T371*)(C))->a3), t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
}

/* DS_HASH_SET [INTEGER_32].put */
void T417f30(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T417f36(C);
	T417f31(C, a1);
	t1 = ((((T417*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T417f37(C, a1, ((T417*)(C))->a1);
	} else {
		l1 = ((T417*)(C))->a5;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T417*)(C))->a4 = ((T6)((((T417*)(C))->a4)+((T6)(GE_int32(1)))));
			l1 = ((T417*)(C))->a4;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T417f22(C, l1));
			((T417*)(C))->a5 = ((T6)((t2)-(t3)));
		}
		l2 = ((T417*)(C))->a7;
		t2 = (T417f25(C, l2));
		T417f38(C, t2, l1);
		T417f39(C, l1, l2);
		T417f37(C, a1, l1);
		((T417*)(C))->a8 = ((T6)((((T417*)(C))->a8)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_SET [INTEGER_32].slots_put */
void T417f39(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T417*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_SET [INTEGER_32].clashes_put */
void T417f38(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T417*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_SET [INTEGER_32].item_storage_put */
void T417f37(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T417*)(C))->a11)))->z2[a2] = (a1);
}

/* DS_HASH_SET [INTEGER_32].unset_found_item */
void T417f36(T0* C)
{
	((T417*)(C))->a14 = (T6)(GE_int32(0));
}

/* DS_HASH_SET [INTEGER_32].make */
T0* T417c29(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T417));
	*(T417*)C = GE_default417;
	((T417*)(C))->a2 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T417f32(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T417f33(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T417f34(C, t1);
	((T417*)(C))->a3 = (T417f16(C, a1));
	t1 = ((T6)((((T417*)(C))->a3)+((T6)(GE_int32(1)))));
	T417f35(C, t1);
	((T417*)(C))->a4 = (T6)(GE_int32(0));
	((T417*)(C))->a5 = (T6)(GE_int32(0));
	((T417*)(C))->a1 = (T6)(GE_int32(0));
	T417f36(C);
	((T417*)(C))->a6 = (T417f20(C));
	return C;
}

/* DS_HASH_SET [INTEGER_32].new_cursor */
T0* T417f20(T0* C)
{
	T0* R = 0;
	R = T439c3(C);
	return R;
}

/* DS_HASH_SET_CURSOR [INTEGER_32].make */
T0* T439c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T439));
	*(T439*)C = GE_default439;
	((T439*)(C))->a1 = a1;
	((T439*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_HASH_SET [INTEGER_32].make_slots */
void T417f35(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T417f23(C));
	((T417*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [INTEGER_32].special_integer_ */
T0* T417f23(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_SET [INTEGER_32].new_modulus */
T6 T417f16(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_SET [INTEGER_32].make_clashes */
void T417f34(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T417f23(C));
	((T417*)(C))->a12 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_SET [INTEGER_32].make_key_storage */
void T417f33(T0* C, T6 a1)
{
}

/* DS_HASH_SET [INTEGER_32].make_item_storage */
void T417f32(T0* C, T6 a1)
{
	((T417*)(C))->a10 = T65c4();
	((T417*)(C))->a11 = (T65f2(GE_void(((T417*)(C))->a10), a1));
}

/* ST_SPLITTER.make */
T0* T371c9(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T371));
	*(T371*)C = GE_default371;
	T371f10(C, ge519ov9425);
	return C;
}

/* GEANT_PRECURSOR_TASK.exit_application */
void T301f29(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T301f19(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T301f19(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T301f19(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T301f19(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T301f20(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PRECURSOR_TASK.exceptions */
T0* T301f20(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.std */
T0* T301f19(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.arguments_attribute_name */
unsigned char ge116os8984 = '\0';
T0* ge116ov8984;
T0* T301f15(T0* C)
{
	T0* R = 0;
	if (ge116os8984) {
		return ge116ov8984;
	} else {
		ge116os8984 = '\1';
	}
	R = GE_ms("arguments", 9);
	ge116ov8984 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.elements_by_name */
T0* T301f14(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T301*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T301f22(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_PRECURSOR_TASK.string_ */
T0* T301f22(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.argument_element_name */
unsigned char ge116os8983 = '\0';
T0* ge116ov8983;
T0* T301f13(T0* C)
{
	T0* R = 0;
	if (ge116os8983) {
		return ge116ov8983;
	} else {
		ge116os8983 = '\1';
	}
	R = GE_ms("argument", 8);
	ge116ov8983 = R;
	return R;
}

/* GEANT_PRECURSOR_COMMAND.set_parent */
void T385f7(T0* C, T0* a1)
{
	((T385*)(C))->a4 = a1;
}

/* GEANT_PRECURSOR_TASK.attribute_value */
T0* T301f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T301*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T301f21(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T301f21(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T301f5(C));
		t4 = (((T22*)(GE_void(((T301*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T301f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_PRECURSOR_TASK.project_variables_resolver */
T0* T301f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.target_arguments_stack */
T0* T301f21(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.has_attribute */
T1 T301f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T301*)(C))->a3), a1));
	return R;
}

/* GEANT_PRECURSOR_TASK.parent_attribute_name */
unsigned char ge116os8982 = '\0';
T0* ge116ov8982;
T0* T301f11(T0* C)
{
	T0* R = 0;
	if (ge116os8982) {
		return ge116ov8982;
	} else {
		ge116os8982 = '\1';
	}
	R = GE_ms("parent", 6);
	ge116ov8982 = R;
	return R;
}

/* GEANT_PRECURSOR_TASK.task_make */
void T301f28(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T301f30(C, a1);
	t1 = (((T385*)(GE_void(a1)))->a3);
	T301f31(C, t1, a2);
}

/* GEANT_PRECURSOR_TASK.interpreting_element_make */
void T301f31(T0* C, T0* a1, T0* a2)
{
	T301f32(C, a2);
	T301f33(C, a1);
}

/* GEANT_PRECURSOR_TASK.set_project */
void T301f33(T0* C, T0* a1)
{
	((T301*)(C))->a2 = a1;
}

/* GEANT_PRECURSOR_TASK.element_make */
void T301f32(T0* C, T0* a1)
{
	T301f34(C, a1);
}

/* GEANT_PRECURSOR_TASK.set_xml_element */
void T301f34(T0* C, T0* a1)
{
	((T301*)(C))->a3 = a1;
}

/* GEANT_PRECURSOR_TASK.set_command */
void T301f30(T0* C, T0* a1)
{
	((T301*)(C))->a1 = a1;
}

/* GEANT_PRECURSOR_COMMAND.make */
T0* T385c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T385));
	*(T385*)C = GE_default385;
	T385f6p1(C, a1);
	((T385*)(C))->a2 = T34c45();
	return C;
}

/* GEANT_PRECURSOR_COMMAND.make */
void T385f6p1(T0* C, T0* a1)
{
	T385f9(C, a1);
}

/* GEANT_PRECURSOR_COMMAND.set_project */
void T385f9(T0* C, T0* a1)
{
	((T385*)(C))->a3 = a1;
}

/* GEANT_TARGET.precursor_task_name */
unsigned char ge130os2284 = '\0';
T0* ge130ov2284;
T0* T26f69(T0* C)
{
	T0* R = 0;
	if (ge130os2284) {
		return ge130ov2284;
	} else {
		ge130os2284 = '\1';
	}
	R = GE_ms("precursor", 9);
	ge130ov2284 = R;
	return R;
}

/* GEANT_EXIT_TASK.make */
T0* T300c21(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T300));
	*(T300*)C = GE_default300;
	((T300*)(C))->a1 = T384c5(a1);
	T300f23(C, ((T300*)(C))->a1, a2);
	t1 = (T300f11(C));
	t2 = (T300f8(C, t1));
	if (t2) {
		t1 = (T300f11(C));
		l1 = (T300f12(C, t1));
		t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f14(l1):T194f45(l1)));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = GE_ma33((T6)3,
GE_ms("  [exit] warning: code \'", 24),
l1,
GE_ms("\' is not a valid integer value. Using value \'1\' instead.", 56));
			T22f41(GE_void(a1), t1);
			T384f6(GE_void(((T300*)(C))->a1), (T6)(GE_int32(1)));
		} else {
			t3 = (((((T0*)(GE_void(l1)))->id==17)?T17f15(l1):T194f46(l1)));
			T384f6(GE_void(((T300*)(C))->a1), t3);
		}
	}
	return C;
}

/* UC_UTF8_STRING.to_integer */
T6 T194f46(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 t1;
	l1 = (T194f48(C));
	t1 = ((T6)(GE_int32(0)));
	T113f17(GE_void(l1), C, t1);
	R = (T113f13(GE_void(l1)));
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.parsed_integer */
T6 T113f13(T0* C)
{
	T6 R = 0;
	T1 t1;
	T11 t2;
	T6 t3;
	t1 = ((((T113*)(C))->a1)==((T6)(GE_int32(1))));
	if (t1) {
		t2 = ((T11)((((T113*)(C))->a2)*((T11)(GE_nat64(10)))));
		t2 = ((T11)((t2)+(((T113*)(C))->a3)));
		t3 = ((T6)(t2));
		R = ((T6)(-(t3)));
	} else {
		t2 = ((T11)((((T113*)(C))->a2)*((T11)(GE_nat64(10)))));
		t2 = ((T11)((t2)+(((T113*)(C))->a3)));
		R = ((T6)(t2));
	}
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.parse_string_with_type */
void T113f17(T0* C, T0* a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T1 t1;
	T2 t2;
	T3 t3;
	T10 t4;
	T113f18(C, a2);
	l1 = (T6)(GE_int32(0));
	l2 = (((((T0*)(a1))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	l3 = a1;
	t1 = ((l3)!=(EIF_VOID));
	if (t1) {
		l4 = (((((T0*)(GE_void(l3)))->id==17)?((T17*)(l3))->a1:((T194*)(l3))->a2));
		t1 = ((l1)==(l2));
		if (!(t1)) {
			t1 = (T6f5(&(((T113*)(C))->a4), (T6)(GE_int32(4))));
		}
		while (!(t1)) {
			t2 = (((T15*)(GE_void(l4)))->z2[l1]);
			T113f23(C, t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
			if (!(t1)) {
				t1 = (T6f5(&(((T113*)(C))->a4), (T6)(GE_int32(4))));
			}
		}
	} else {
		l5 = EIF_VOID;
		t1 = ((l5)!=(EIF_VOID));
		if (t1) {
			l6 = ((GE_void(l5), (T0*)0));
			t1 = ((l1)==(l2));
			if (!(t1)) {
				t1 = (T6f5(&(((T113*)(C))->a4), (T6)(GE_int32(4))));
			}
			while (!(t1)) {
				t3 = ((GE_void(l6), l1, (T3)0));
				t2 = ((T2)(t3));
				T113f23(C, t2);
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = ((l1)==(l2));
				if (!(t1)) {
					t1 = (T6f5(&(((T113*)(C))->a4), (T6)(GE_int32(4))));
				}
			}
		} else {
			l1 = (T6)(GE_int32(1));
			l2 = (((((T0*)(a1))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t1 = (T6f5(&(((T113*)(C))->a4), (T6)(GE_int32(4))));
			}
			while (!(t1)) {
				t4 = (((((T0*)(a1))->id==17)?T17f27(a1, l1):T194f49(a1, l1)));
				t2 = ((T2)(t4));
				T113f23(C, t2);
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t1 = (T6f5(&(((T113*)(C))->a4), (T6)(GE_int32(4))));
				}
			}
		}
	}
}

/* UC_UTF8_STRING.code */
T10 T194f49(T0* C, T6 a1)
{
	T10 R = 0;
	T6 t1;
	t1 = (T194f14(C, a1));
	R = ((T10)(t1));
	return R;
}

/* STRING_8.code */
T10 T17f27(T0* C, T6 a1)
{
	T10 R = 0;
	T6 t1;
	T2 t2;
	t1 = ((T6)((a1)-((T6)(GE_int32(1)))));
	t2 = (((T15*)(GE_void(((T17*)(C))->a1)))->z2[t1]);
	t1 = ((T6)(t2));
	R = (T6f21(&t1));
	return R;
}

/* INTEGER_32.to_natural_32 */
T10 T6f21(T6* C)
{
	T10 R = 0;
	R = ((T10)(*C));
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.parse_character */
void T113f23(T0* C, T2 a1)
{
	T11 l1 = 0;
	T11 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T11 t4;
	l3 = ((T113*)(C))->a4;
	t1 = (T6f9(&l3, (T6)(GE_int32(4))));
	if (t1) {
		switch (l3) {
		case (T6)(T6)(GE_int32(0)):
			t1 = (T2f6(&a1));
			if (t1) {
				l3 = (T6)(GE_int32(2));
				((T113*)(C))->a2 = (T11)(GE_nat64(0));
				t2 = ((T6)(a1));
				t2 = ((T6)((t2)-((T6)(GE_int32(48)))));
				((T113*)(C))->a3 = (T6f19(&t2));
			} else {
				t1 = ((a1)==((T2)('-')));
				if (!(t1)) {
					t1 = ((a1)==((T2)('+')));
				}
				if (t1) {
					l3 = (T6)(GE_int32(1));
					t1 = ((a1)==((T2)('-')));
					if (t1) {
						((T113*)(C))->a1 = (T6)(GE_int32(1));
					} else {
						((T113*)(C))->a1 = (T6)(GE_int32(0));
					}
				} else {
					if (((T113*)(C))->a9) {
						t1 = (T17f28(GE_void(((T113*)(C))->a7), a1));
					} else {
						t1 = EIF_FALSE;
					}
					if (t1) {
					} else {
						l3 = (T6)(GE_int32(4));
					}
				}
			}
			break;
		case (T6)(T6)(GE_int32(1)):
			t1 = (T2f6(&a1));
			if (t1) {
				((T113*)(C))->a2 = (T11)(GE_nat64(0));
				t2 = ((T6)(a1));
				t2 = ((T6)((t2)-((T6)(GE_int32(48)))));
				((T113*)(C))->a3 = (T6f19(&t2));
				t1 = ((((T113*)(C))->a6)!=((T6)(GE_int32(0))));
				if (t1) {
					t3 = (T113f14(C));
					t1 = (T198f7(GE_void(t3), ((T113*)(C))->a2, ((T113*)(C))->a3, ((T113*)(C))->a6, ((T113*)(C))->a1));
					if (t1) {
						((T113*)(C))->a5 = EIF_TRUE;
						((T113*)(C))->a2 = l1;
						((T113*)(C))->a3 = l2;
						l3 = (T6)(GE_int32(5));
					}
				}
				l3 = (T6)(GE_int32(2));
			} else {
				l3 = (T6)(GE_int32(4));
			}
			break;
		case (T6)(T6)(GE_int32(2)):
			t1 = (T2f6(&a1));
			if (t1) {
				l1 = ((T113*)(C))->a2;
				l2 = ((T113*)(C))->a3;
				t4 = ((T11)((((T113*)(C))->a2)*((T11)(GE_nat64(10)))));
				((T113*)(C))->a2 = ((T11)((t4)+(((T113*)(C))->a3)));
				t2 = ((T6)(a1));
				t2 = ((T6)((t2)-((T6)(GE_int32(48)))));
				((T113*)(C))->a3 = (T6f19(&t2));
				t1 = ((((T113*)(C))->a6)!=((T6)(GE_int32(0))));
				if (t1) {
					t3 = (T113f14(C));
					((T113*)(C))->a5 = (T198f7(GE_void(t3), ((T113*)(C))->a2, ((T113*)(C))->a3, ((T113*)(C))->a6, ((T113*)(C))->a1));
					t1 = (T113f15(C));
					if (t1) {
						((T113*)(C))->a2 = l1;
						((T113*)(C))->a3 = l2;
						l3 = (T6)(GE_int32(5));
					}
				}
			} else {
				if (((T113*)(C))->a10) {
					t1 = (T17f28(GE_void(((T113*)(C))->a8), a1));
				} else {
					t1 = EIF_FALSE;
				}
				if (t1) {
					l3 = (T6)(GE_int32(3));
				} else {
					l3 = (T6)(GE_int32(4));
				}
			}
			break;
		case (T6)(T6)(GE_int32(3)):
			if (((T113*)(C))->a10) {
				t1 = (T17f28(GE_void(((T113*)(C))->a8), a1));
			} else {
				t1 = EIF_FALSE;
			}
			if (t1) {
			} else {
				l3 = (T6)(GE_int32(4));
			}
			break;
		default:
			break;
		}
	}
	((T113*)(C))->a4 = l3;
}

/* STRING_TO_INTEGER_CONVERTOR.overflowed */
T1 T113f15(T0* C)
{
	T1 R = 0;
	if (((T113*)(C))->a5) {
		R = ((((T113*)(C))->a1)==((T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* INTEGER_OVERFLOW_CHECKER.will_overflow */
T1 T198f7(T0* C, T11 a1, T11 a2, T6 a3, T6 a4)
{
	T1 R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	T11 t3;
	R = ((a3)!=((T6)(GE_int32(0))));
	if (R) {
		t1 = ((a3)==((T6)(GE_int32(1))));
		if (!(t1)) {
			t1 = ((a3)==((T6)(GE_int32(2))));
		}
		if (!(t1)) {
			t1 = ((a3)==((T6)(GE_int32(3))));
		}
		if (!(t1)) {
			t1 = ((a3)==((T6)(GE_int32(4))));
		}
		if (t1) {
			t2 = ((T6)((a4)*((T6)(GE_int32(4)))));
			l1 = ((T6)((t2)+(a3)));
			t3 = (((T255*)(GE_void(((T198*)(C))->a1)))->z2[l1]);
			t1 = (T11f4(&a1, t3));
			if (!(t1)) {
				t3 = (((T255*)(GE_void(((T198*)(C))->a1)))->z2[l1]);
				t1 = ((a1)==(t3));
				if (t1) {
					t3 = (((T255*)(GE_void(((T198*)(C))->a2)))->z2[l1]);
					R = (T11f4(&a2, t3));
				} else {
					R = EIF_FALSE;
				}
			} else {
				R = EIF_TRUE;
			}
		} else {
			l1 = ((T6)((a3)-((T6)(GE_int32(10)))));
			t1 = ((a4)==((T6)(GE_int32(1))));
			if (t1) {
				t1 = (T11f4(&a1, (T11)(GE_nat64(0))));
				if (!(t1)) {
					R = (T11f4(&a2, (T11)(GE_nat64(0))));
				} else {
					R = EIF_TRUE;
				}
			} else {
				t3 = (((T255*)(GE_void(((T198*)(C))->a3)))->z2[l1]);
				t1 = (T11f4(&a1, t3));
				if (!(t1)) {
					t3 = (((T255*)(GE_void(((T198*)(C))->a3)))->z2[l1]);
					t1 = ((a1)==(t3));
					if (t1) {
						t3 = (((T255*)(GE_void(((T198*)(C))->a4)))->z2[l1]);
						R = (T11f4(&a2, t3));
					} else {
						R = EIF_FALSE;
					}
				} else {
					R = EIF_TRUE;
				}
			}
		}
	}
	return R;
}

/* NATURAL_64.infix ">" */
T1 T11f4(T11* C, T11 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.overflow_checker */
unsigned char ge2209os6514 = '\0';
T0* ge2209ov6514;
T0* T113f14(T0* C)
{
	T0* R = 0;
	if (ge2209os6514) {
		return ge2209ov6514;
	} else {
		ge2209os6514 = '\1';
	}
	R = T198c13();
	ge2209ov6514 = R;
	return R;
}

/* INTEGER_OVERFLOW_CHECKER.make */
T0* T198c13(void)
{
	T0* C;
	T6 t1;
	T4 t2;
	T11 t3;
	T5 t4;
	T7 t5;
	T8 t6;
	T9 t7;
	T10 t8;
	C = (T0*)GE_alloc(sizeof(T198));
	*(T198*)C = GE_default198;
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)*((T6)(GE_int32(2)))));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T198*)(C))->a1 = T255c2(t1);
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)*((T6)(GE_int32(2)))));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T198*)(C))->a2 = T255c2(t1);
	t2 = ((T4)(GE_int8(127)));
	t2 = ((T4)((t2)/((T4)(GE_int8(10)))));
	t3 = (T4f3(&t2));
	((T255*)(GE_void(((T198*)(C))->a1)))->z2[(T6)(GE_int32(1))] = (t3);
	t2 = ((T4)(GE_int8(127)));
	t2 = ((T4)((t2)%((T4)(GE_int8(10)))));
	t3 = (T4f3(&t2));
	((T255*)(GE_void(((T198*)(C))->a2)))->z2[(T6)(GE_int32(1))] = (t3);
	t4 = ((T5)(GE_int16(32767)));
	t4 = ((T5)((t4)/((T5)(GE_int16(10)))));
	t3 = (T5f3(&t4));
	((T255*)(GE_void(((T198*)(C))->a1)))->z2[(T6)(GE_int32(2))] = (t3);
	t4 = ((T5)(GE_int16(32767)));
	t4 = ((T5)((t4)%((T5)(GE_int16(10)))));
	t3 = (T5f3(&t4));
	((T255*)(GE_void(((T198*)(C))->a2)))->z2[(T6)(GE_int32(2))] = (t3);
	t1 = ((T6)(GE_int32(2147483647)));
	t1 = ((T6)((t1)/((T6)(GE_int32(10)))));
	t3 = (T6f19(&t1));
	((T255*)(GE_void(((T198*)(C))->a1)))->z2[(T6)(GE_int32(3))] = (t3);
	t1 = ((T6)(GE_int32(2147483647)));
	t1 = ((T6)((t1)%((T6)(GE_int32(10)))));
	t3 = (T6f19(&t1));
	((T255*)(GE_void(((T198*)(C))->a2)))->z2[(T6)(GE_int32(3))] = (t3);
	t5 = ((T7)(GE_int64(9223372036854775807)));
	t5 = ((T7)((t5)/((T7)(GE_int64(10)))));
	t3 = (T7f3(&t5));
	((T255*)(GE_void(((T198*)(C))->a1)))->z2[(T6)(GE_int32(4))] = (t3);
	t5 = ((T7)(GE_int64(9223372036854775807)));
	t5 = ((T7)((t5)%((T7)(GE_int64(10)))));
	t3 = (T7f3(&t5));
	((T255*)(GE_void(((T198*)(C))->a2)))->z2[(T6)(GE_int32(4))] = (t3);
	t2 = ((T4)(GE_int8(-128)));
	t2 = ((T4)((t2)/((T4)(GE_int8(10)))));
	t2 = ((T4)(-(t2)));
	t3 = (T4f3(&t2));
	((T255*)(GE_void(((T198*)(C))->a1)))->z2[(T6)(GE_int32(5))] = (t3);
	t2 = ((T4)(GE_int8(-128)));
	t2 = ((T4)((t2)%((T4)(GE_int8(10)))));
	t2 = ((T4)(-(t2)));
	t3 = (T4f3(&t2));
	((T255*)(GE_void(((T198*)(C))->a2)))->z2[(T6)(GE_int32(5))] = (t3);
	t4 = ((T5)(GE_int16(-32768)));
	t4 = ((T5)((t4)/((T5)(GE_int16(10)))));
	t4 = ((T5)(-(t4)));
	t3 = (T5f3(&t4));
	((T255*)(GE_void(((T198*)(C))->a1)))->z2[(T6)(GE_int32(6))] = (t3);
	t4 = ((T5)(GE_int16(-32768)));
	t4 = ((T5)((t4)%((T5)(GE_int16(10)))));
	t4 = ((T5)(-(t4)));
	t3 = (T5f3(&t4));
	((T255*)(GE_void(((T198*)(C))->a2)))->z2[(T6)(GE_int32(6))] = (t3);
	t1 = ((T6)(GE_int32(-2147483647)-1));
	t1 = ((T6)((t1)/((T6)(GE_int32(10)))));
	t1 = ((T6)(-(t1)));
	t3 = (T6f19(&t1));
	((T255*)(GE_void(((T198*)(C))->a1)))->z2[(T6)(GE_int32(7))] = (t3);
	t1 = ((T6)(GE_int32(-2147483647)-1));
	t1 = ((T6)((t1)%((T6)(GE_int32(10)))));
	t1 = ((T6)(-(t1)));
	t3 = (T6f19(&t1));
	((T255*)(GE_void(((T198*)(C))->a2)))->z2[(T6)(GE_int32(7))] = (t3);
	t5 = ((T7)(GE_int64(-9223372036854775807)-1));
	t5 = ((T7)((t5)/((T7)(GE_int64(10)))));
	t5 = ((T7)(-(t5)));
	t3 = (T7f3(&t5));
	((T255*)(GE_void(((T198*)(C))->a1)))->z2[(T6)(GE_int32(8))] = (t3);
	t5 = ((T7)(GE_int64(-9223372036854775807)-1));
	t5 = ((T7)((t5)%((T7)(GE_int64(10)))));
	t5 = ((T7)(-(t5)));
	t3 = (T7f3(&t5));
	((T255*)(GE_void(((T198*)(C))->a2)))->z2[(T6)(GE_int32(8))] = (t3);
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T198*)(C))->a3 = T255c2(t1);
	t1 = (T6)(GE_int32(4));
	t1 = ((T6)((t1)+((T6)(GE_int32(1)))));
	((T198*)(C))->a4 = T255c2(t1);
	t6 = ((T8)(GE_nat8(255)));
	t6 = ((T8)((t6)/((T8)(GE_nat8(10)))));
	t3 = (T8f10(&t6));
	((T255*)(GE_void(((T198*)(C))->a3)))->z2[(T6)(GE_int32(1))] = (t3);
	t6 = ((T8)(GE_nat8(255)));
	t6 = ((T8)((t6)%((T8)(GE_nat8(10)))));
	t3 = (T8f10(&t6));
	((T255*)(GE_void(((T198*)(C))->a4)))->z2[(T6)(GE_int32(1))] = (t3);
	t7 = ((T9)(GE_nat16(65535)));
	t7 = ((T9)((t7)/((T9)(GE_nat16(10)))));
	t3 = (T9f3(&t7));
	((T255*)(GE_void(((T198*)(C))->a3)))->z2[(T6)(GE_int32(2))] = (t3);
	t7 = ((T9)(GE_nat16(65535)));
	t7 = ((T9)((t7)%((T9)(GE_nat16(10)))));
	t3 = (T9f3(&t7));
	((T255*)(GE_void(((T198*)(C))->a4)))->z2[(T6)(GE_int32(2))] = (t3);
	t8 = ((T10)(GE_nat32(4294967295)));
	t8 = ((T10)((t8)/((T10)(GE_nat32(10)))));
	t3 = (T10f4(&t8));
	((T255*)(GE_void(((T198*)(C))->a3)))->z2[(T6)(GE_int32(3))] = (t3);
	t8 = ((T10)(GE_nat32(4294967295)));
	t8 = ((T10)((t8)%((T10)(GE_nat32(10)))));
	t3 = (T10f4(&t8));
	((T255*)(GE_void(((T198*)(C))->a4)))->z2[(T6)(GE_int32(3))] = (t3);
	t3 = ((T11)(GE_nat64(18446744073709551615)));
	t3 = ((T11)((t3)/((T11)(GE_nat64(10)))));
	t3 = (T11f7(&t3));
	((T255*)(GE_void(((T198*)(C))->a3)))->z2[(T6)(GE_int32(4))] = (t3);
	t3 = ((T11)(GE_nat64(18446744073709551615)));
	t3 = ((T11)((t3)%((T11)(GE_nat64(10)))));
	t3 = (T11f7(&t3));
	((T255*)(GE_void(((T198*)(C))->a4)))->z2[(T6)(GE_int32(4))] = (t3);
	return C;
}

/* NATURAL_64.to_natural_64 */
T11 T11f7(T11* C)
{
	T11 R = 0;
	R = (*C);
	return R;
}

/* NATURAL_32.to_natural_64 */
T11 T10f4(T10* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* NATURAL_16.to_natural_64 */
T11 T9f3(T9* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* NATURAL_8.to_natural_64 */
T11 T8f10(T8* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_64.to_natural_64 */
T11 T7f3(T7* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_16.to_natural_64 */
T11 T5f3(T5* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* INTEGER_8.to_natural_64 */
T11 T4f3(T4* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* SPECIAL [NATURAL_64].make */
T0* T255c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T255)+a1*sizeof(T11));
	*(T255*)C = GE_default255;
	((T255*)(C))->z1 = a1;
	return C;
}

/* STRING_8.has */
T1 T17f28(T0* C, T2 a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T2 t2;
	l2 = ((T17*)(C))->a2;
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		l3 = ((T17*)(C))->a1;
		t1 = ((l1)==(l2));
		if (!(t1)) {
			t2 = (((T15*)(GE_void(l3)))->z2[l1]);
			t1 = ((t2)==(a1));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
			if (!(t1)) {
				t2 = (((T15*)(GE_void(l3)))->z2[l1]);
				t1 = ((t2)==(a1));
			}
		}
		R = ((T1)((l1)<(l2)));
	}
	return R;
}

/* INTEGER_32.to_natural_64 */
T11 T6f19(T6* C)
{
	T11 R = 0;
	R = ((T11)(*C));
	return R;
}

/* CHARACTER_8.is_digit */
T1 T2f6(T2* C)
{
	T1 R = 0;
	T2 t1;
	T6 t2;
	T8 t3;
	t1 = (*C);
	t2 = ((T6)(t1));
	t3 = (T2f7(C, t2));
	t3 = (T8f1(&t3, (T8)(GE_nat8(0x04))));
	R = (T8f2(&t3, (T8)(GE_nat8(0))));
	return R;
}

/* NATURAL_8.infix ">" */
T1 T8f2(T8* C, T8 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* NATURAL_8.infix "&" */
T8 T8f1(T8* C, T8 a1)
{
	T8 R = 0;
	R = ((T8)((*C)&(a1)));
	return R;
}

/* CHARACTER_8.character_types */
T8 T2f7(T2* C, T6 a1)
{
	T8 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((T1)((a1)<((T6)(GE_int32(256)))));
	if (t1) {
		t2 = (T2f9(C));
		R = (((T242*)(GE_void(t2)))->z2[a1]);
	}
	return R;
}

/* CHARACTER_8.internal_character_types */
unsigned char ge37os93 = '\0';
T0* ge37ov93;
T0* T2f9(T2* C)
{
	T0* R = 0;
	T8 t1;
	if (ge37os93) {
		return ge37ov93;
	} else {
		ge37os93 = '\1';
	}
	R = T242c2((T6)(GE_int32(256)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(0))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(1))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(2))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(3))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(4))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(5))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(6))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(7))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(8))] = ((T8)(GE_nat8(0x20)));
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(9))] = (t1);
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(10))] = (t1);
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(11))] = (t1);
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(12))] = (t1);
	t1 = (T8)(GE_nat8(0x20));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x08))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(13))] = (t1);
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(14))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(15))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(16))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(17))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(18))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(19))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(20))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(21))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(22))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(23))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(24))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(25))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(26))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(27))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(28))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(29))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(30))] = ((T8)(GE_nat8(0x20)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(31))] = ((T8)(GE_nat8(0x20)));
	t1 = (T8)(GE_nat8(0x08));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x80))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(32))] = (t1);
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(33))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(34))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(35))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(36))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(37))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(38))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(39))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(40))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(41))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(42))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(43))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(44))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(45))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(46))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(47))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(48))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(49))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(50))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(51))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(52))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(53))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(54))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(55))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(56))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(57))] = ((T8)(GE_nat8(0x04)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(58))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(59))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(60))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(61))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(62))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(63))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(64))] = ((T8)(GE_nat8(0x10)));
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(65))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(66))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(67))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(68))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(69))] = (t1);
	t1 = (T8)(GE_nat8(0x01));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(70))] = (t1);
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(71))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(72))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(73))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(74))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(75))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(76))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(77))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(78))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(79))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(80))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(81))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(82))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(83))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(84))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(85))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(86))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(87))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(88))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(89))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(90))] = ((T8)(GE_nat8(0x01)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(91))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(92))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(93))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(94))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(95))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(96))] = ((T8)(GE_nat8(0x10)));
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(97))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(98))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(99))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(100))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(101))] = (t1);
	t1 = (T8)(GE_nat8(0x02));
	t1 = (T8f3(&t1, (T8)(GE_nat8(0x40))));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(102))] = (t1);
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(103))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(104))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(105))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(106))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(107))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(108))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(109))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(110))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(111))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(112))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(113))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(114))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(115))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(116))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(117))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(118))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(119))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(120))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(121))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(122))] = ((T8)(GE_nat8(0x02)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(123))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(124))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(125))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(126))] = ((T8)(GE_nat8(0x10)));
	((T242*)(GE_void(R)))->z2[(T6)(GE_int32(127))] = ((T8)(GE_nat8(0x20)));
	ge37ov93 = R;
	return R;
}

/* NATURAL_8.infix "|" */
T8 T8f3(T8* C, T8 a1)
{
	T8 R = 0;
	R = ((T8)((*C)|(a1)));
	return R;
}

/* SPECIAL [NATURAL_8].make */
T0* T242c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T242)+a1*sizeof(T8));
	*(T242*)C = GE_default242;
	((T242*)(C))->z1 = a1;
	return C;
}

/* STRING_TO_INTEGER_CONVERTOR.reset */
void T113f18(T0* C, T6 a1)
{
	((T113*)(C))->a4 = (T6)(GE_int32(0));
	((T113*)(C))->a2 = (T11)(GE_nat64(0));
	((T113*)(C))->a3 = (T11)(GE_nat64(0));
	((T113*)(C))->a1 = (T6)(GE_int32(0));
	((T113*)(C))->a6 = a1;
	((T113*)(C))->a5 = EIF_FALSE;
}

/* UC_UTF8_STRING.ctoi_convertor */
unsigned char ge2206os1258 = '\0';
T0* ge2206ov1258;
T0* T194f48(T0* C)
{
	T0* R = 0;
	if (ge2206os1258) {
		return ge2206ov1258;
	} else {
		ge2206os1258 = '\1';
	}
	R = T113c16();
	T113f19(GE_void(R), GE_ms(" ", 1));
	T113f20(GE_void(R), GE_ms(" ", 1));
	T113f21(GE_void(R), EIF_TRUE);
	T113f22(GE_void(R), EIF_TRUE);
	ge2206ov1258 = R;
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.set_trailing_separators_acceptable */
void T113f22(T0* C, T1 a1)
{
	((T113*)(C))->a10 = a1;
}

/* STRING_TO_INTEGER_CONVERTOR.set_leading_separators_acceptable */
void T113f21(T0* C, T1 a1)
{
	((T113*)(C))->a9 = a1;
}

/* STRING_TO_INTEGER_CONVERTOR.set_trailing_separators */
void T113f20(T0* C, T0* a1)
{
	((T113*)(C))->a8 = T17c47(a1);
}

/* STRING_8.make_from_string */
T0* T17c47(T0* a1)
{
	T0* C;
	T1 t1;
	T0* t2;
	C = (T0*)GE_alloc(sizeof(T17));
	*(T17*)C = GE_default17;
	t1 = ((C)!=(a1));
	if (t1) {
		t2 = (((T17*)(a1))->a1);
		((T17*)(C))->a1 = (T15f4(GE_void(t2)));
		((T17*)(C))->a2 = (((T17*)(a1))->a2);
		((T17*)(C))->a3 = (T6)(GE_int32(0));
	}
	return C;
}

/* STRING_TO_INTEGER_CONVERTOR.set_leading_separators */
void T113f19(T0* C, T0* a1)
{
	((T113*)(C))->a7 = T17c47(a1);
}

/* STRING_TO_INTEGER_CONVERTOR.make */
T0* T113c16(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T113));
	*(T113*)C = GE_default113;
	T113f18(C, (T6)(GE_int32(0)));
	T113f19(C, GE_ms(" ", 1));
	T113f20(C, GE_ms(" ", 1));
	return C;
}

/* STRING_8.to_integer */
T6 T17f15(T0* C)
{
	T6 R = 0;
	T0* l1 = 0;
	T6 t1;
	l1 = (T17f21(C));
	t1 = ((T6)(GE_int32(0)));
	T113f17(GE_void(l1), C, t1);
	R = (T113f13(GE_void(l1)));
	return R;
}

/* STRING_8.ctoi_convertor */
T0* T17f21(T0* C)
{
	T0* R = 0;
	if (ge2206os1258) {
		return ge2206ov1258;
	} else {
		ge2206os1258 = '\1';
	}
	R = T113c16();
	T113f19(GE_void(R), GE_ms(" ", 1));
	T113f20(GE_void(R), GE_ms(" ", 1));
	T113f21(GE_void(R), EIF_TRUE);
	T113f22(GE_void(R), EIF_TRUE);
	ge2206ov1258 = R;
	return R;
}

/* GEANT_EXIT_COMMAND.set_code */
void T384f6(T0* C, T6 a1)
{
	((T384*)(C))->a3 = a1;
}

/* UC_UTF8_STRING.is_integer */
T1 T194f45(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)(GE_int32(3)));
	R = (T194f47(C, t1));
	return R;
}

/* UC_UTF8_STRING.is_valid_integer_or_natural */
T1 T194f47(T0* C, T6 a1)
{
	T1 R = 0;
	T0* l1 = 0;
	l1 = (T194f48(C));
	T113f18(GE_void(l1), a1);
	T113f17(GE_void(l1), C, a1);
	R = (T113f12(GE_void(l1)));
	return R;
}

/* STRING_TO_INTEGER_CONVERTOR.is_integral_integer */
T1 T113f12(T0* C)
{
	T1 R = 0;
	T1 t1;
	t1 = ((((T113*)(C))->a4)==((T6)(GE_int32(2))));
	if (!(t1)) {
		t1 = ((((T113*)(C))->a4)==((T6)(GE_int32(3))));
	}
	if (t1) {
		R = ((T1)(!(((T113*)(C))->a5)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* STRING_8.is_integer */
T1 T17f14(T0* C)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)(GE_int32(3)));
	R = (T17f20(C, t1));
	return R;
}

/* STRING_8.is_valid_integer_or_natural */
T1 T17f20(T0* C, T6 a1)
{
	T1 R = 0;
	T0* l1 = 0;
	l1 = (T17f21(C));
	T113f18(GE_void(l1), a1);
	T113f17(GE_void(l1), C, a1);
	R = (T113f12(GE_void(l1)));
	return R;
}

/* GEANT_EXIT_TASK.attribute_value */
T0* T300f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T300*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T300f17(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T300f17(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T300f5(C));
		t4 = (((T22*)(GE_void(((T300*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T300f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_EXIT_TASK.project_variables_resolver */
T0* T300f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_EXIT_TASK.target_arguments_stack */
T0* T300f17(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_EXIT_TASK.has_attribute */
T1 T300f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T300*)(C))->a3), a1));
	return R;
}

/* GEANT_EXIT_TASK.code_attribute_name */
unsigned char ge102os8974 = '\0';
T0* ge102ov8974;
T0* T300f11(T0* C)
{
	T0* R = 0;
	if (ge102os8974) {
		return ge102ov8974;
	} else {
		ge102os8974 = '\1';
	}
	R = GE_ms("code", 4);
	ge102ov8974 = R;
	return R;
}

/* GEANT_EXIT_TASK.task_make */
void T300f23(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T300f25(C, a1);
	t1 = (((T384*)(GE_void(a1)))->a2);
	T300f26(C, t1, a2);
}

/* GEANT_EXIT_TASK.interpreting_element_make */
void T300f26(T0* C, T0* a1, T0* a2)
{
	T300f27(C, a2);
	T300f28(C, a1);
}

/* GEANT_EXIT_TASK.set_project */
void T300f28(T0* C, T0* a1)
{
	((T300*)(C))->a2 = a1;
}

/* GEANT_EXIT_TASK.element_make */
void T300f27(T0* C, T0* a1)
{
	T300f29(C, a1);
}

/* GEANT_EXIT_TASK.set_xml_element */
void T300f29(T0* C, T0* a1)
{
	((T300*)(C))->a3 = a1;
}

/* GEANT_EXIT_TASK.set_command */
void T300f25(T0* C, T0* a1)
{
	((T300*)(C))->a1 = a1;
}

/* GEANT_EXIT_COMMAND.make */
T0* T384c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T384));
	*(T384*)C = GE_default384;
	T384f8(C, a1);
	return C;
}

/* GEANT_EXIT_COMMAND.set_project */
void T384f8(T0* C, T0* a1)
{
	((T384*)(C))->a2 = a1;
}

/* GEANT_TARGET.exit_task_name */
unsigned char ge130os2283 = '\0';
T0* ge130ov2283;
T0* T26f68(T0* C)
{
	T0* R = 0;
	if (ge130os2283) {
		return ge130ov2283;
	} else {
		ge130os2283 = '\1';
	}
	R = GE_ms("exit", 4);
	ge130ov2283 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.make */
T0* T299c26(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T299));
	*(T299*)C = GE_default299;
	((T299*)(C))->a1 = T383c18(a1);
	T299f28(C, ((T299*)(C))->a1, a2);
	t1 = (T299f11(C));
	t2 = (T299f8(C, t1));
	if (t2) {
		t1 = (T299f11(C));
		l1 = (T299f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T383f19(GE_void(((T299*)(C))->a1), l1);
		}
	}
	t1 = (T299f13(C));
	t2 = (T299f8(C, t1));
	if (t2) {
		t1 = (T299f13(C));
		l1 = (T299f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T383f20(GE_void(((T299*)(C))->a1), l1);
		}
	}
	T383f21(GE_void(((T299*)(C))->a1), GE_ms("true", 4));
	t1 = (T299f14(C));
	t2 = (T299f8(C, t1));
	if (t2) {
		t1 = (T299f14(C));
		l1 = (T299f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T383f21(GE_void(((T299*)(C))->a1), l1);
		}
	}
	T383f22(GE_void(((T299*)(C))->a1), GE_ms("false", 5));
	t1 = (T299f15(C));
	t2 = (T299f8(C, t1));
	if (t2) {
		t1 = (T299f15(C));
		l1 = (T299f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T383f22(GE_void(((T299*)(C))->a1), l1);
		}
	}
	t1 = (T299f16(C));
	t2 = (T299f8(C, t1));
	if (t2) {
		t1 = (T299f16(C));
		l1 = (T299f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T383f23(GE_void(((T299*)(C))->a1), l1);
		}
	}
	t1 = (T299f17(C));
	l2 = (T96f16(GE_void(((T299*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T359c29(((T299*)(C))->a2, l2);
		t1 = (((T359*)(GE_void(l3)))->a1);
		T383f24(GE_void(((T299*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_OUTOFDATE_COMMAND.set_fileset */
void T383f24(T0* C, T0* a1)
{
	((T383*)(C))->a5 = a1;
}

/* GEANT_OUTOFDATE_TASK.fileset_element_name */
unsigned char ge115os8953 = '\0';
T0* ge115ov8953;
T0* T299f17(T0* C)
{
	T0* R = 0;
	if (ge115os8953) {
		return ge115ov8953;
	} else {
		ge115os8953 = '\1';
	}
	R = GE_ms("fileset", 7);
	ge115ov8953 = R;
	return R;
}

/* GEANT_OUTOFDATE_COMMAND.set_variable_name */
void T383f23(T0* C, T0* a1)
{
	((T383*)(C))->a8 = a1;
}

/* GEANT_OUTOFDATE_TASK.variable_attribute_name */
unsigned char ge115os8950 = '\0';
T0* ge115ov8950;
T0* T299f16(T0* C)
{
	T0* R = 0;
	if (ge115os8950) {
		return ge115ov8950;
	} else {
		ge115os8950 = '\1';
	}
	R = GE_ms("variable", 8);
	ge115ov8950 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.false_value_attribute_name */
unsigned char ge115os8952 = '\0';
T0* ge115ov8952;
T0* T299f15(T0* C)
{
	T0* R = 0;
	if (ge115os8952) {
		return ge115ov8952;
	} else {
		ge115os8952 = '\1';
	}
	R = GE_ms("false_value", 11);
	ge115ov8952 = R;
	return R;
}

/* GEANT_OUTOFDATE_COMMAND.set_false_value */
void T383f22(T0* C, T0* a1)
{
	((T383*)(C))->a7 = a1;
}

/* GEANT_OUTOFDATE_TASK.true_value_attribute_name */
unsigned char ge115os8951 = '\0';
T0* ge115ov8951;
T0* T299f14(T0* C)
{
	T0* R = 0;
	if (ge115os8951) {
		return ge115ov8951;
	} else {
		ge115os8951 = '\1';
	}
	R = GE_ms("true_value", 10);
	ge115ov8951 = R;
	return R;
}

/* GEANT_OUTOFDATE_COMMAND.set_true_value */
void T383f21(T0* C, T0* a1)
{
	((T383*)(C))->a6 = a1;
}

/* GEANT_OUTOFDATE_COMMAND.set_target_filename */
void T383f20(T0* C, T0* a1)
{
	((T383*)(C))->a4 = a1;
}

/* GEANT_OUTOFDATE_TASK.target_attribute_name */
unsigned char ge115os8949 = '\0';
T0* ge115ov8949;
T0* T299f13(T0* C)
{
	T0* R = 0;
	if (ge115os8949) {
		return ge115ov8949;
	} else {
		ge115os8949 = '\1';
	}
	R = GE_ms("target", 6);
	ge115ov8949 = R;
	return R;
}

/* GEANT_OUTOFDATE_COMMAND.set_source_filename */
void T383f19(T0* C, T0* a1)
{
	((T383*)(C))->a3 = a1;
}

/* GEANT_OUTOFDATE_TASK.attribute_value */
T0* T299f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T299*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T299f22(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T299f22(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T299f5(C));
		t4 = (((T22*)(GE_void(((T299*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T299f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_OUTOFDATE_TASK.project_variables_resolver */
T0* T299f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.target_arguments_stack */
T0* T299f22(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.has_attribute */
T1 T299f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T299*)(C))->a3), a1));
	return R;
}

/* GEANT_OUTOFDATE_TASK.source_attribute_name */
unsigned char ge115os8948 = '\0';
T0* ge115ov8948;
T0* T299f11(T0* C)
{
	T0* R = 0;
	if (ge115os8948) {
		return ge115ov8948;
	} else {
		ge115os8948 = '\1';
	}
	R = GE_ms("source", 6);
	ge115ov8948 = R;
	return R;
}

/* GEANT_OUTOFDATE_TASK.task_make */
void T299f28(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T299f30(C, a1);
	t1 = (((T383*)(GE_void(a1)))->a2);
	T299f31(C, t1, a2);
}

/* GEANT_OUTOFDATE_TASK.interpreting_element_make */
void T299f31(T0* C, T0* a1, T0* a2)
{
	T299f32(C, a2);
	T299f33(C, a1);
}

/* GEANT_OUTOFDATE_TASK.set_project */
void T299f33(T0* C, T0* a1)
{
	((T299*)(C))->a2 = a1;
}

/* GEANT_OUTOFDATE_TASK.element_make */
void T299f32(T0* C, T0* a1)
{
	T299f34(C, a1);
}

/* GEANT_OUTOFDATE_TASK.set_xml_element */
void T299f34(T0* C, T0* a1)
{
	((T299*)(C))->a3 = a1;
}

/* GEANT_OUTOFDATE_TASK.set_command */
void T299f30(T0* C, T0* a1)
{
	((T299*)(C))->a1 = a1;
}

/* GEANT_OUTOFDATE_COMMAND.make */
T0* T383c18(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T383));
	*(T383*)C = GE_default383;
	T383f26(C, a1);
	return C;
}

/* GEANT_OUTOFDATE_COMMAND.set_project */
void T383f26(T0* C, T0* a1)
{
	((T383*)(C))->a2 = a1;
}

/* GEANT_TARGET.outofdate_task_name */
unsigned char ge130os2282 = '\0';
T0* ge130ov2282;
T0* T26f67(T0* C)
{
	T0* R = 0;
	if (ge130os2282) {
		return ge130ov2282;
	} else {
		ge130os2282 = '\1';
	}
	R = GE_ms("outofdate", 9);
	ge130ov2282 = R;
	return R;
}

/* GEANT_XSLT_TASK.make */
T0* T298c39(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T1 l7 = 0;
	T1 l8 = 0;
	T1 l9 = 0;
	T1 l10 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T0* t3;
	T6 t4;
	C = (T0*)GE_alloc(sizeof(T298));
	*(T298*)C = GE_default298;
	((T298*)(C))->a1 = T380c24(a1);
	T298f41(C, ((T298*)(C))->a1, a2);
	t1 = (T298f11(C));
	t2 = (T298f8(C, t1));
	if (t2) {
		t1 = (T298f11(C));
		l2 = (T298f12(C, t1));
		t1 = (T298f13(C));
		t3 = (T298f14(C));
		t2 = (T76f1(GE_void(t1), l2, t3));
		if (t2) {
			l7 = EIF_TRUE;
			T380f25(GE_void(((T298*)(C))->a1));
		} else {
			t1 = (T298f13(C));
			t3 = (T298f15(C));
			t2 = (T76f1(GE_void(t1), l2, t3));
			if (t2) {
				l8 = EIF_TRUE;
				T380f26(GE_void(((T298*)(C))->a1));
			} else {
				t1 = (T298f13(C));
				t3 = (T298f16(C));
				t2 = (T76f1(GE_void(t1), l2, t3));
				if (t2) {
					l9 = EIF_TRUE;
					T380f27(GE_void(((T298*)(C))->a1));
				} else {
					t1 = (T298f13(C));
					t3 = (T298f17(C));
					t2 = (T76f1(GE_void(t1), l2, t3));
					if (t2) {
						l10 = EIF_TRUE;
						T380f28(GE_void(((T298*)(C))->a1));
					}
				}
			}
		}
	}
	t1 = (T298f18(C));
	t2 = (T298f8(C, t1));
	if (t2) {
		t1 = (T298f18(C));
		l2 = (T298f12(C, t1));
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T380f29(GE_void(((T298*)(C))->a1), l2);
		}
	}
	t1 = (T298f19(C));
	t2 = (T298f8(C, t1));
	if (t2) {
		t1 = (T298f19(C));
		l2 = (T298f12(C, t1));
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T380f30(GE_void(((T298*)(C))->a1), l2);
		}
	}
	t1 = (T298f20(C));
	t2 = (T298f8(C, t1));
	if (t2) {
		t1 = (T298f20(C));
		l2 = (T298f12(C, t1));
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t2) {
			T380f31(GE_void(((T298*)(C))->a1), l2);
		}
	}
	t1 = (T298f21(C));
	t2 = (T298f8(C, t1));
	if (t2) {
		t1 = (T298f21(C));
		t2 = (T298f22(C, t1));
		T380f32(GE_void(((T298*)(C))->a1), t2);
	}
	if (!(l8)) {
		t2 = (l7);
	} else {
		t2 = EIF_TRUE;
	}
	if (t2) {
		t1 = (T298f23(C));
		t2 = (T298f8(C, t1));
		if (t2) {
			t1 = (T298f23(C));
			l2 = (T298f12(C, t1));
			t2 = (((((T0*)(GE_void(l2)))->id==17)?T17f14(l2):T194f45(l2)));
			if (t2) {
				T380f33(GE_void(((T298*)(C))->a1), l2);
			}
		}
	}
	t1 = (T298f24(C));
	l3 = (T298f25(C, t1));
	l4 = (T115f5(GE_void(l3)));
	T116f8(GE_void(l4));
	t2 = (((T116*)(GE_void(l4)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l4)));
		l5 = T365c16(((T298*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l5)));
		if (t2) {
			t2 = (T365f10(GE_void(l5)));
		}
		if (t2) {
			t2 = (T365f3(GE_void(l5)));
		}
		if (t2) {
			l1 = (T365f4(GE_void(l5)));
			l2 = (T365f5(GE_void(l5)));
			l6 = T381c3(l1, l2);
			t1 = (((T380*)(GE_void(((T298*)(C))->a1)))->a2);
			T382f11(GE_void(t1), l6);
		}
		T116f9(GE_void(l4));
		t2 = (((T116*)(GE_void(l4)))->a1);
	}
	if (l8) {
		t1 = (T298f26(C));
		t2 = (T298f8(C, t1));
		if (t2) {
			t1 = (T298f26(C));
			l2 = (T298f12(C, t1));
			t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
			if (t2) {
				T380f34(GE_void(((T298*)(C))->a1), l2);
			}
		}
		t1 = (T298f27(C));
		t2 = (T298f8(C, t1));
		if (t2) {
			t1 = (T298f27(C));
			l2 = (T298f12(C, t1));
			t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
			if (t2) {
				T380f35(GE_void(((T298*)(C))->a1), l2);
			}
		}
		t1 = (T298f28(C));
		t2 = (T298f8(C, t1));
		if (t2) {
			t1 = (T298f28(C));
			l2 = (T298f12(C, t1));
			t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
			t2 = (T6f1(&t4, (T6)(GE_int32(0))));
			if (t2) {
				T380f36(GE_void(((T298*)(C))->a1), l2);
			}
		}
	}
	return C;
}

/* GEANT_XSLT_COMMAND.set_classpath */
void T380f36(T0* C, T0* a1)
{
	((T380*)(C))->a12 = a1;
}

/* GEANT_XSLT_TASK.classpath_attribute_name */
unsigned char ge124os8908 = '\0';
T0* ge124ov8908;
T0* T298f28(T0* C)
{
	T0* R = 0;
	if (ge124os8908) {
		return ge124ov8908;
	} else {
		ge124os8908 = '\1';
	}
	R = GE_ms("classpath", 9);
	ge124ov8908 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_extdirs */
void T380f35(T0* C, T0* a1)
{
	((T380*)(C))->a11 = a1;
}

/* GEANT_XSLT_TASK.extdirs_attribute_name */
unsigned char ge124os8907 = '\0';
T0* ge124ov8907;
T0* T298f27(T0* C)
{
	T0* R = 0;
	if (ge124os8907) {
		return ge124ov8907;
	} else {
		ge124os8907 = '\1';
	}
	R = GE_ms("extdirs", 7);
	ge124ov8907 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_format */
void T380f34(T0* C, T0* a1)
{
	((T380*)(C))->a10 = a1;
}

/* GEANT_XSLT_TASK.format_attribute_name */
unsigned char ge124os8905 = '\0';
T0* ge124ov8905;
T0* T298f26(T0* C)
{
	T0* R = 0;
	if (ge124os8905) {
		return ge124ov8905;
	} else {
		ge124os8905 = '\1';
	}
	R = GE_ms("format", 6);
	ge124ov8905 = R;
	return R;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].force_last */
void T382f11(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T382f8(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T382*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T382f9(C, t2));
		T382f12(C, t2);
	}
	((T382*)(C))->a1 = ((T6)((((T382*)(C))->a1)+((T6)(GE_int32(1)))));
	((T419*)(GE_void(((T382*)(C))->a2)))->z2[((T382*)(C))->a1] = (a1);
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].resize */
void T382f12(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T382*)(C))->a2 = (T420f2(GE_void(((T382*)(C))->a3), ((T382*)(C))->a2, t1));
	((T382*)(C))->a4 = a1;
}

/* KL_SPECIAL_ROUTINES [DS_PAIR [STRING_8, STRING_8]].resize */
T0* T420f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T419*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T419f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].resized_area */
T0* T419f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T419c4(a1);
	t1 = (((T419*)(C))->z1);
	T419f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].copy_data */
void T419f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T419f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T419*)(a1))->z2[l1]);
			((T419*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].move_data */
void T419f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T419f8(C, a1, a2, a3);
			} else {
				T419f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T419f8(C, a1, a2, a3);
			} else {
				T419f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].overlapping_move */
void T419f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T419*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T419*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T419*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T419*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].non_overlapping_move */
void T419f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T419*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T419*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [DS_PAIR [STRING_8, STRING_8]].make */
T0* T419c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T419)+a1*sizeof(T0*));
	*(T419*)C = GE_default419;
	((T419*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].new_capacity */
T6 T382f9(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].extendible */
T1 T382f8(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T382*)(C))->a1)+(a1)));
	R = (T6f5(&(((T382*)(C))->a4), t1));
	return R;
}

/* DS_PAIR [STRING_8, STRING_8].make */
T0* T381c3(T0* a1, T0* a2)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T381));
	*(T381*)C = GE_default381;
	((T381*)(C))->a1 = a1;
	((T381*)(C))->a2 = a2;
	return C;
}

/* GEANT_DEFINE_ELEMENT.has_value */
T1 T365f3(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T365f12(C));
	R = (T365f9(C, t1));
	return R;
}

/* GEANT_XSLT_TASK.elements_by_name */
T0* T298f25(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T298*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T298f13(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_XSLT_TASK.parameter_element_name */
unsigned char ge124os8909 = '\0';
T0* ge124ov8909;
T0* T298f24(T0* C)
{
	T0* R = 0;
	if (ge124os8909) {
		return ge124ov8909;
	} else {
		ge124os8909 = '\1';
	}
	R = GE_ms("parameter", 9);
	ge124ov8909 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_indent */
void T380f33(T0* C, T0* a1)
{
	((T380*)(C))->a9 = a1;
}

/* GEANT_XSLT_TASK.indent_attribute_name */
unsigned char ge124os8906 = '\0';
T0* ge124ov8906;
T0* T298f23(T0* C)
{
	T0* R = 0;
	if (ge124os8906) {
		return ge124ov8906;
	} else {
		ge124os8906 = '\1';
	}
	R = GE_ms("indent", 6);
	ge124ov8906 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_force */
void T380f32(T0* C, T1 a1)
{
	((T380*)(C))->a8 = a1;
}

/* GEANT_XSLT_TASK.boolean_value */
T1 T298f22(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T298f12(C, a1));
	t1 = (T298f13(C));
	t2 = (T298f34(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T298f13(C));
		t2 = (T298f35(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T298f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T298f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T298f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T298f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T298f31(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_XSLT_TASK.std */
T0* T298f31(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_XSLT_TASK.false_attribute_value */
T0* T298f35(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_XSLT_TASK.true_attribute_value */
T0* T298f34(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_XSLT_TASK.force_attribute_name */
unsigned char ge124os8899 = '\0';
T0* ge124ov8899;
T0* T298f21(T0* C)
{
	T0* R = 0;
	if (ge124os8899) {
		return ge124ov8899;
	} else {
		ge124os8899 = '\1';
	}
	R = GE_ms("force", 5);
	ge124ov8899 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_stylesheet_filename */
void T380f31(T0* C, T0* a1)
{
	((T380*)(C))->a6 = a1;
}

/* GEANT_XSLT_TASK.stylesheet_filename_attribute_name */
unsigned char ge124os8898 = '\0';
T0* ge124ov8898;
T0* T298f20(T0* C)
{
	T0* R = 0;
	if (ge124os8898) {
		return ge124ov8898;
	} else {
		ge124os8898 = '\1';
	}
	R = GE_ms("stylesheet", 10);
	ge124ov8898 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_output_filename */
void T380f30(T0* C, T0* a1)
{
	((T380*)(C))->a5 = a1;
}

/* GEANT_XSLT_TASK.output_filename_attribute_name */
unsigned char ge124os8897 = '\0';
T0* ge124ov8897;
T0* T298f19(T0* C)
{
	T0* R = 0;
	if (ge124os8897) {
		return ge124ov8897;
	} else {
		ge124os8897 = '\1';
	}
	R = GE_ms("output", 6);
	ge124ov8897 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_input_filename */
void T380f29(T0* C, T0* a1)
{
	((T380*)(C))->a4 = a1;
}

/* GEANT_XSLT_TASK.input_filename_attribute_name */
unsigned char ge124os8896 = '\0';
T0* ge124ov8896;
T0* T298f18(T0* C)
{
	T0* R = 0;
	if (ge124os8896) {
		return ge124ov8896;
	} else {
		ge124os8896 = '\1';
	}
	R = GE_ms("input", 5);
	ge124ov8896 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_processor_gexslt */
void T380f28(T0* C)
{
	T380f39(C, (T6)(GE_int32(4)));
}

/* GEANT_XSLT_COMMAND.set_processor */
void T380f39(T0* C, T6 a1)
{
	((T380*)(C))->a7 = a1;
}

/* GEANT_XSLT_TASK.processor_attribute_value_gexslt */
unsigned char ge124os8904 = '\0';
T0* ge124ov8904;
T0* T298f17(T0* C)
{
	T0* R = 0;
	if (ge124os8904) {
		return ge124ov8904;
	} else {
		ge124os8904 = '\1';
	}
	R = GE_ms("gexslt", 6);
	ge124ov8904 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_processor_xsltproc */
void T380f27(T0* C)
{
	T380f39(C, (T6)(GE_int32(3)));
}

/* GEANT_XSLT_TASK.processor_attribute_value_xsltproc */
unsigned char ge124os8903 = '\0';
T0* ge124ov8903;
T0* T298f16(T0* C)
{
	T0* R = 0;
	if (ge124os8903) {
		return ge124ov8903;
	} else {
		ge124os8903 = '\1';
	}
	R = GE_ms("xsltproc", 8);
	ge124ov8903 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_processor_xalan_java */
void T380f26(T0* C)
{
	T380f39(C, (T6)(GE_int32(2)));
}

/* GEANT_XSLT_TASK.processor_attribute_value_xalan_java */
unsigned char ge124os8902 = '\0';
T0* ge124ov8902;
T0* T298f15(T0* C)
{
	T0* R = 0;
	if (ge124os8902) {
		return ge124ov8902;
	} else {
		ge124os8902 = '\1';
	}
	R = GE_ms("xalan_java", 10);
	ge124ov8902 = R;
	return R;
}

/* GEANT_XSLT_COMMAND.set_processor_xalan_cpp */
void T380f25(T0* C)
{
	T380f39(C, (T6)(GE_int32(1)));
}

/* GEANT_XSLT_TASK.processor_attribute_value_xalan_cpp */
unsigned char ge124os8901 = '\0';
T0* ge124ov8901;
T0* T298f14(T0* C)
{
	T0* R = 0;
	if (ge124os8901) {
		return ge124ov8901;
	} else {
		ge124os8901 = '\1';
	}
	R = GE_ms("xalan_cpp", 9);
	ge124ov8901 = R;
	return R;
}

/* GEANT_XSLT_TASK.string_ */
T0* T298f13(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_XSLT_TASK.attribute_value */
T0* T298f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T298*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T298f33(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T298f33(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T298f5(C));
		t4 = (((T22*)(GE_void(((T298*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T298f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_XSLT_TASK.project_variables_resolver */
T0* T298f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_XSLT_TASK.target_arguments_stack */
T0* T298f33(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_XSLT_TASK.has_attribute */
T1 T298f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T298*)(C))->a3), a1));
	return R;
}

/* GEANT_XSLT_TASK.processor_attribute_name */
unsigned char ge124os8900 = '\0';
T0* ge124ov8900;
T0* T298f11(T0* C)
{
	T0* R = 0;
	if (ge124os8900) {
		return ge124ov8900;
	} else {
		ge124os8900 = '\1';
	}
	R = GE_ms("processor", 9);
	ge124ov8900 = R;
	return R;
}

/* GEANT_XSLT_TASK.task_make */
void T298f41(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T298f43(C, a1);
	t1 = (((T380*)(GE_void(a1)))->a3);
	T298f44(C, t1, a2);
}

/* GEANT_XSLT_TASK.interpreting_element_make */
void T298f44(T0* C, T0* a1, T0* a2)
{
	T298f45(C, a2);
	T298f46(C, a1);
}

/* GEANT_XSLT_TASK.set_project */
void T298f46(T0* C, T0* a1)
{
	((T298*)(C))->a2 = a1;
}

/* GEANT_XSLT_TASK.element_make */
void T298f45(T0* C, T0* a1)
{
	T298f47(C, a1);
}

/* GEANT_XSLT_TASK.set_xml_element */
void T298f47(T0* C, T0* a1)
{
	((T298*)(C))->a3 = a1;
}

/* GEANT_XSLT_TASK.set_command */
void T298f43(T0* C, T0* a1)
{
	((T298*)(C))->a1 = a1;
}

/* GEANT_XSLT_COMMAND.make */
T0* T380c24(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T380));
	*(T380*)C = GE_default380;
	T380f24p1(C, a1);
	((T380*)(C))->a4 = GE_ms("", 0);
	((T380*)(C))->a5 = GE_ms("", 0);
	((T380*)(C))->a7 = (T6)(GE_int32(1));
	T380f33(C, GE_ms("4", 1));
	((T380*)(C))->a2 = T382c10((T6)(GE_int32(10)));
	return C;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].make */
T0* T382c10(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T382));
	*(T382*)C = GE_default382;
	((T382*)(C))->a3 = T420c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T382*)(C))->a2 = (T420f1(GE_void(((T382*)(C))->a3), t1));
	((T382*)(C))->a4 = a1;
	((T382*)(C))->a5 = (T382f7(C));
	return C;
}

/* DS_ARRAYED_LIST [DS_PAIR [STRING_8, STRING_8]].new_cursor */
T0* T382f7(T0* C)
{
	T0* R = 0;
	R = T421c2(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [DS_PAIR [STRING_8, STRING_8]].make */
T0* T421c2(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T421));
	*(T421*)C = GE_default421;
	((T421*)(C))->a1 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [DS_PAIR [STRING_8, STRING_8]].make */
T0* T420f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T441c2(a1);
	R = (((T441*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [DS_PAIR [STRING_8, STRING_8]].make_area */
T0* T441c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T441));
	*(T441*)C = GE_default441;
	((T441*)(C))->a1 = T419c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [DS_PAIR [STRING_8, STRING_8]].default_create */
T0* T420c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T420));
	*(T420*)C = GE_default420;
	return C;
}

/* GEANT_XSLT_COMMAND.make */
void T380f24p1(T0* C, T0* a1)
{
	T380f38(C, a1);
}

/* GEANT_XSLT_COMMAND.set_project */
void T380f38(T0* C, T0* a1)
{
	((T380*)(C))->a3 = a1;
}

/* GEANT_TARGET.xslt_task_name */
unsigned char ge130os2281 = '\0';
T0* ge130ov2281;
T0* T26f66(T0* C)
{
	T0* R = 0;
	if (ge130os2281) {
		return ge130ov2281;
	} else {
		ge130os2281 = '\1';
	}
	R = GE_ms("xslt", 4);
	ge130ov2281 = R;
	return R;
}

/* GEANT_SETENV_TASK.make */
T0* T297c22(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T297));
	*(T297*)C = GE_default297;
	((T297*)(C))->a1 = T379c7(a1);
	T297f24(C, ((T297*)(C))->a1, a2);
	t1 = (T297f11(C));
	t2 = (T297f8(C, t1));
	if (t2) {
		t1 = (T297f11(C));
		l1 = (T297f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T379f8(GE_void(((T297*)(C))->a1), l1);
		}
	}
	t1 = (T297f13(C));
	t2 = (T297f8(C, t1));
	if (t2) {
		t1 = (T297f13(C));
		l1 = (T297f12(C, t1));
		T379f9(GE_void(((T297*)(C))->a1), l1);
	}
	return C;
}

/* GEANT_SETENV_COMMAND.set_value */
void T379f9(T0* C, T0* a1)
{
	((T379*)(C))->a4 = a1;
}

/* GEANT_SETENV_TASK.value_attribute_name */
unsigned char ge118os8886 = '\0';
T0* ge118ov8886;
T0* T297f13(T0* C)
{
	T0* R = 0;
	if (ge118os8886) {
		return ge118ov8886;
	} else {
		ge118os8886 = '\1';
	}
	R = GE_ms("value", 5);
	ge118ov8886 = R;
	return R;
}

/* GEANT_SETENV_COMMAND.set_name */
void T379f8(T0* C, T0* a1)
{
	((T379*)(C))->a3 = a1;
}

/* GEANT_SETENV_TASK.attribute_value */
T0* T297f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T297*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T297f18(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T297f18(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T297f5(C));
		t4 = (((T22*)(GE_void(((T297*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T297f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_SETENV_TASK.project_variables_resolver */
T0* T297f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_SETENV_TASK.target_arguments_stack */
T0* T297f18(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_SETENV_TASK.has_attribute */
T1 T297f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T297*)(C))->a3), a1));
	return R;
}

/* GEANT_SETENV_TASK.name_attribute_name */
unsigned char ge118os8885 = '\0';
T0* ge118ov8885;
T0* T297f11(T0* C)
{
	T0* R = 0;
	if (ge118os8885) {
		return ge118ov8885;
	} else {
		ge118os8885 = '\1';
	}
	R = GE_ms("name", 4);
	ge118ov8885 = R;
	return R;
}

/* GEANT_SETENV_TASK.task_make */
void T297f24(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T297f26(C, a1);
	t1 = (((T379*)(GE_void(a1)))->a2);
	T297f27(C, t1, a2);
}

/* GEANT_SETENV_TASK.interpreting_element_make */
void T297f27(T0* C, T0* a1, T0* a2)
{
	T297f28(C, a2);
	T297f29(C, a1);
}

/* GEANT_SETENV_TASK.set_project */
void T297f29(T0* C, T0* a1)
{
	((T297*)(C))->a2 = a1;
}

/* GEANT_SETENV_TASK.element_make */
void T297f28(T0* C, T0* a1)
{
	T297f30(C, a1);
}

/* GEANT_SETENV_TASK.set_xml_element */
void T297f30(T0* C, T0* a1)
{
	((T297*)(C))->a3 = a1;
}

/* GEANT_SETENV_TASK.set_command */
void T297f26(T0* C, T0* a1)
{
	((T297*)(C))->a1 = a1;
}

/* GEANT_SETENV_COMMAND.make */
T0* T379c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T379));
	*(T379*)C = GE_default379;
	T379f11(C, a1);
	return C;
}

/* GEANT_SETENV_COMMAND.set_project */
void T379f11(T0* C, T0* a1)
{
	((T379*)(C))->a2 = a1;
}

/* GEANT_TARGET.setenv_task_name */
unsigned char ge130os2280 = '\0';
T0* ge130ov2280;
T0* T26f65(T0* C)
{
	T0* R = 0;
	if (ge130os2280) {
		return ge130ov2280;
	} else {
		ge130os2280 = '\1';
	}
	R = GE_ms("setenv", 6);
	ge130ov2280 = R;
	return R;
}

/* GEANT_MOVE_TASK.make */
T0* T296c24(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T296));
	*(T296*)C = GE_default296;
	((T296*)(C))->a1 = T378c15(a1);
	T296f26(C, ((T296*)(C))->a1, a2);
	t1 = (T296f11(C));
	t2 = (T296f8(C, t1));
	if (t2) {
		t1 = (T296f11(C));
		l1 = (T296f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T378f16(GE_void(((T296*)(C))->a1), l1);
		}
	}
	t1 = (T296f13(C));
	t2 = (T296f8(C, t1));
	if (t2) {
		t1 = (T296f13(C));
		l1 = (T296f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T378f17(GE_void(((T296*)(C))->a1), l1);
		}
	}
	t1 = (T296f14(C));
	t2 = (T296f8(C, t1));
	if (t2) {
		t1 = (T296f14(C));
		l1 = (T296f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T378f18(GE_void(((T296*)(C))->a1), l1);
		}
	}
	t1 = (T296f15(C));
	l2 = (T96f16(GE_void(((T296*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T359c29(((T296*)(C))->a2, l2);
		t1 = (((T359*)(GE_void(l3)))->a1);
		T378f19(GE_void(((T296*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_MOVE_COMMAND.set_fileset */
void T378f19(T0* C, T0* a1)
{
	((T378*)(C))->a6 = a1;
}

/* GEANT_MOVE_TASK.fileset_element_name */
unsigned char ge114os8867 = '\0';
T0* ge114ov8867;
T0* T296f15(T0* C)
{
	T0* R = 0;
	if (ge114os8867) {
		return ge114ov8867;
	} else {
		ge114os8867 = '\1';
	}
	R = GE_ms("fileset", 7);
	ge114ov8867 = R;
	return R;
}

/* GEANT_MOVE_COMMAND.set_to_directory */
void T378f18(T0* C, T0* a1)
{
	((T378*)(C))->a5 = a1;
}

/* GEANT_MOVE_TASK.to_directory_attribute_name */
unsigned char ge114os8866 = '\0';
T0* ge114ov8866;
T0* T296f14(T0* C)
{
	T0* R = 0;
	if (ge114os8866) {
		return ge114ov8866;
	} else {
		ge114os8866 = '\1';
	}
	R = GE_ms("to_directory", 12);
	ge114ov8866 = R;
	return R;
}

/* GEANT_MOVE_COMMAND.set_to_file */
void T378f17(T0* C, T0* a1)
{
	((T378*)(C))->a4 = a1;
}

/* GEANT_MOVE_TASK.to_file_attribute_name */
unsigned char ge114os8865 = '\0';
T0* ge114ov8865;
T0* T296f13(T0* C)
{
	T0* R = 0;
	if (ge114os8865) {
		return ge114ov8865;
	} else {
		ge114os8865 = '\1';
	}
	R = GE_ms("to_file", 7);
	ge114ov8865 = R;
	return R;
}

/* GEANT_MOVE_COMMAND.set_file */
void T378f16(T0* C, T0* a1)
{
	((T378*)(C))->a3 = a1;
}

/* GEANT_MOVE_TASK.attribute_value */
T0* T296f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T296*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T296f20(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T296f20(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T296f5(C));
		t4 = (((T22*)(GE_void(((T296*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T296f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_MOVE_TASK.project_variables_resolver */
T0* T296f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_MOVE_TASK.target_arguments_stack */
T0* T296f20(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_MOVE_TASK.has_attribute */
T1 T296f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T296*)(C))->a3), a1));
	return R;
}

/* GEANT_MOVE_TASK.file_attribute_name */
unsigned char ge114os8864 = '\0';
T0* ge114ov8864;
T0* T296f11(T0* C)
{
	T0* R = 0;
	if (ge114os8864) {
		return ge114ov8864;
	} else {
		ge114os8864 = '\1';
	}
	R = GE_ms("file", 4);
	ge114ov8864 = R;
	return R;
}

/* GEANT_MOVE_TASK.task_make */
void T296f26(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T296f28(C, a1);
	t1 = (((T378*)(GE_void(a1)))->a2);
	T296f29(C, t1, a2);
}

/* GEANT_MOVE_TASK.interpreting_element_make */
void T296f29(T0* C, T0* a1, T0* a2)
{
	T296f30(C, a2);
	T296f31(C, a1);
}

/* GEANT_MOVE_TASK.set_project */
void T296f31(T0* C, T0* a1)
{
	((T296*)(C))->a2 = a1;
}

/* GEANT_MOVE_TASK.element_make */
void T296f30(T0* C, T0* a1)
{
	T296f32(C, a1);
}

/* GEANT_MOVE_TASK.set_xml_element */
void T296f32(T0* C, T0* a1)
{
	((T296*)(C))->a3 = a1;
}

/* GEANT_MOVE_TASK.set_command */
void T296f28(T0* C, T0* a1)
{
	((T296*)(C))->a1 = a1;
}

/* GEANT_MOVE_COMMAND.make */
T0* T378c15(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T378));
	*(T378*)C = GE_default378;
	T378f21(C, a1);
	return C;
}

/* GEANT_MOVE_COMMAND.set_project */
void T378f21(T0* C, T0* a1)
{
	((T378*)(C))->a2 = a1;
}

/* GEANT_TARGET.move_task_name */
unsigned char ge130os2279 = '\0';
T0* ge130ov2279;
T0* T26f64(T0* C)
{
	T0* R = 0;
	if (ge130os2279) {
		return ge130ov2279;
	} else {
		ge130os2279 = '\1';
	}
	R = GE_ms("move", 4);
	ge130ov2279 = R;
	return R;
}

/* GEANT_COPY_TASK.make */
T0* T295c29(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T295));
	*(T295*)C = GE_default295;
	((T295*)(C))->a1 = T377c18(a1);
	T295f31(C, ((T295*)(C))->a1, a2);
	t1 = (T295f11(C));
	t2 = (T295f8(C, t1));
	if (t2) {
		t1 = (T295f11(C));
		l1 = (T295f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T377f19(GE_void(((T295*)(C))->a1), l1);
		}
	}
	t1 = (T295f13(C));
	t2 = (T295f8(C, t1));
	if (t2) {
		t1 = (T295f13(C));
		l1 = (T295f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T377f20(GE_void(((T295*)(C))->a1), l1);
		}
	}
	t1 = (T295f14(C));
	t2 = (T295f8(C, t1));
	if (t2) {
		t1 = (T295f14(C));
		l1 = (T295f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T377f21(GE_void(((T295*)(C))->a1), l1);
		}
	}
	t1 = (T295f15(C));
	t2 = (T295f8(C, t1));
	if (t2) {
		t1 = (T295f15(C));
		t2 = (T295f16(C, t1));
		T377f22(GE_void(((T295*)(C))->a1), t2);
	}
	t1 = (T295f17(C));
	l2 = (T96f16(GE_void(((T295*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T359c29(((T295*)(C))->a2, l2);
		t1 = (((T359*)(GE_void(l3)))->a1);
		T377f23(GE_void(((T295*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_COPY_COMMAND.set_fileset */
void T377f23(T0* C, T0* a1)
{
	((T377*)(C))->a6 = a1;
}

/* GEANT_COPY_TASK.fileset_element_name */
unsigned char ge98os8844 = '\0';
T0* ge98ov8844;
T0* T295f17(T0* C)
{
	T0* R = 0;
	if (ge98os8844) {
		return ge98ov8844;
	} else {
		ge98os8844 = '\1';
	}
	R = GE_ms("fileset", 7);
	ge98ov8844 = R;
	return R;
}

/* GEANT_COPY_COMMAND.set_force */
void T377f22(T0* C, T1 a1)
{
	((T377*)(C))->a7 = a1;
}

/* GEANT_COPY_TASK.boolean_value */
T1 T295f16(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T295f12(C, a1));
	t1 = (T295f23(C));
	t2 = (T295f24(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T295f23(C));
		t2 = (T295f25(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T295f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T295f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T295f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T295f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T295f20(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_COPY_TASK.std */
T0* T295f20(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_COPY_TASK.false_attribute_value */
T0* T295f25(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_COPY_TASK.true_attribute_value */
T0* T295f24(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_COPY_TASK.string_ */
T0* T295f23(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_COPY_TASK.force_attribute_name */
unsigned char ge98os8843 = '\0';
T0* ge98ov8843;
T0* T295f15(T0* C)
{
	T0* R = 0;
	if (ge98os8843) {
		return ge98ov8843;
	} else {
		ge98os8843 = '\1';
	}
	R = GE_ms("force", 5);
	ge98ov8843 = R;
	return R;
}

/* GEANT_COPY_COMMAND.set_to_directory */
void T377f21(T0* C, T0* a1)
{
	((T377*)(C))->a5 = a1;
}

/* GEANT_COPY_TASK.to_directory_attribute_name */
unsigned char ge98os8842 = '\0';
T0* ge98ov8842;
T0* T295f14(T0* C)
{
	T0* R = 0;
	if (ge98os8842) {
		return ge98ov8842;
	} else {
		ge98os8842 = '\1';
	}
	R = GE_ms("to_directory", 12);
	ge98ov8842 = R;
	return R;
}

/* GEANT_COPY_COMMAND.set_to_file */
void T377f20(T0* C, T0* a1)
{
	((T377*)(C))->a4 = a1;
}

/* GEANT_COPY_TASK.to_file_attribute_name */
unsigned char ge98os8841 = '\0';
T0* ge98ov8841;
T0* T295f13(T0* C)
{
	T0* R = 0;
	if (ge98os8841) {
		return ge98ov8841;
	} else {
		ge98os8841 = '\1';
	}
	R = GE_ms("to_file", 7);
	ge98ov8841 = R;
	return R;
}

/* GEANT_COPY_COMMAND.set_file */
void T377f19(T0* C, T0* a1)
{
	((T377*)(C))->a3 = a1;
}

/* GEANT_COPY_TASK.attribute_value */
T0* T295f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T295*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T295f22(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T295f22(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T295f5(C));
		t4 = (((T22*)(GE_void(((T295*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T295f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_COPY_TASK.project_variables_resolver */
T0* T295f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_COPY_TASK.target_arguments_stack */
T0* T295f22(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_COPY_TASK.has_attribute */
T1 T295f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T295*)(C))->a3), a1));
	return R;
}

/* GEANT_COPY_TASK.file_attribute_name */
unsigned char ge98os8840 = '\0';
T0* ge98ov8840;
T0* T295f11(T0* C)
{
	T0* R = 0;
	if (ge98os8840) {
		return ge98ov8840;
	} else {
		ge98os8840 = '\1';
	}
	R = GE_ms("file", 4);
	ge98ov8840 = R;
	return R;
}

/* GEANT_COPY_TASK.task_make */
void T295f31(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T295f33(C, a1);
	t1 = (((T377*)(GE_void(a1)))->a2);
	T295f34(C, t1, a2);
}

/* GEANT_COPY_TASK.interpreting_element_make */
void T295f34(T0* C, T0* a1, T0* a2)
{
	T295f35(C, a2);
	T295f36(C, a1);
}

/* GEANT_COPY_TASK.set_project */
void T295f36(T0* C, T0* a1)
{
	((T295*)(C))->a2 = a1;
}

/* GEANT_COPY_TASK.element_make */
void T295f35(T0* C, T0* a1)
{
	T295f37(C, a1);
}

/* GEANT_COPY_TASK.set_xml_element */
void T295f37(T0* C, T0* a1)
{
	((T295*)(C))->a3 = a1;
}

/* GEANT_COPY_TASK.set_command */
void T295f33(T0* C, T0* a1)
{
	((T295*)(C))->a1 = a1;
}

/* GEANT_COPY_COMMAND.make */
T0* T377c18(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T377));
	*(T377*)C = GE_default377;
	T377f25(C, a1);
	return C;
}

/* GEANT_COPY_COMMAND.set_project */
void T377f25(T0* C, T0* a1)
{
	((T377*)(C))->a2 = a1;
}

/* GEANT_TARGET.copy_task_name */
unsigned char ge130os2278 = '\0';
T0* ge130ov2278;
T0* T26f63(T0* C)
{
	T0* R = 0;
	if (ge130os2278) {
		return ge130ov2278;
	} else {
		ge130os2278 = '\1';
	}
	R = GE_ms("copy", 4);
	ge130ov2278 = R;
	return R;
}

/* GEANT_DELETE_TASK.make */
T0* T294c24(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T294));
	*(T294*)C = GE_default294;
	((T294*)(C))->a1 = T374c17(a1);
	T294f26(C, ((T294*)(C))->a1, a2);
	t1 = (T294f11(C));
	t2 = (T294f8(C, t1));
	if (t2) {
		t1 = (T294f11(C));
		l1 = (T294f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T374f18(GE_void(((T294*)(C))->a1), l1);
		}
	}
	t1 = (T294f13(C));
	t2 = (T294f8(C, t1));
	if (t2) {
		t1 = (T294f13(C));
		l1 = (T294f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T374f19(GE_void(((T294*)(C))->a1), l1);
		}
	}
	t1 = (T294f14(C));
	l2 = (T96f16(GE_void(((T294*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T359c29(((T294*)(C))->a2, l2);
		t1 = (((T359*)(GE_void(l3)))->a1);
		T374f20(GE_void(((T294*)(C))->a1), t1);
	}
	t1 = (T294f15(C));
	l2 = (T96f16(GE_void(((T294*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l4 = T375c20(((T294*)(C))->a2, l2);
		t1 = (((T375*)(GE_void(l4)))->a1);
		T374f21(GE_void(((T294*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_DELETE_COMMAND.set_directoryset */
void T374f21(T0* C, T0* a1)
{
	((T374*)(C))->a6 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.make */
T0* T375c20(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T375));
	*(T375*)C = GE_default375;
	T375f20p1(C, a1, a2);
	((T375*)(C))->a1 = T376c21(((T375*)(C))->a2);
	t1 = (T375f13(C));
	t2 = (T375f4(C, t1));
	if (t2) {
		t1 = (T375f13(C));
		l1 = (T375f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T376f25(GE_void(((T375*)(C))->a1), l1);
		}
	}
	t1 = (T375f6(C));
	t2 = (T375f4(C, t1));
	if (t2) {
		t1 = (T375f6(C));
		l1 = (T375f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T376f26(GE_void(((T375*)(C))->a1), l1);
		}
	}
	t1 = (T375f7(C));
	t2 = (T375f4(C, t1));
	if (t2) {
		t1 = (T375f7(C));
		l1 = (T375f5(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T376f27(GE_void(((T375*)(C))->a1), l1);
		}
	}
	t1 = (T375f8(C));
	t2 = (T375f4(C, t1));
	if (t2) {
		t1 = (T375f8(C));
		t2 = (T375f9(C, t1));
		T376f28(GE_void(((T375*)(C))->a1), t2);
	}
	t1 = (T375f10(C));
	l2 = (T375f11(C, t1));
	l3 = (T115f5(GE_void(l2)));
	T116f8(GE_void(l3));
	t2 = (((T116*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l3)));
		l4 = T365c16(((T375*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l4)));
		if (t2) {
			t2 = (T365f10(GE_void(l4)));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l4)));
			t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l4)));
			T376f29(GE_void(((T375*)(C))->a1), t1);
		}
		T116f9(GE_void(l3));
		t2 = (((T116*)(GE_void(l3)))->a1);
	}
	t1 = (T375f12(C));
	l2 = (T375f11(C, t1));
	l3 = (T115f5(GE_void(l2)));
	T116f8(GE_void(l3));
	t2 = (((T116*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l3)));
		l4 = T365c16(((T375*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l4)));
		if (t2) {
			t2 = (T365f10(GE_void(l4)));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l4)));
			t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l4)));
			T376f30(GE_void(((T375*)(C))->a1), t1);
		}
		T116f9(GE_void(l3));
		t2 = (((T116*)(GE_void(l3)))->a1);
	}
	return C;
}

/* GEANT_DIRECTORYSET.add_single_exclude */
void T376f30(T0* C, T0* a1)
{
	T409f36(GE_void(((T376*)(C))->a8), a1);
}

/* GEANT_DIRECTORYSET_ELEMENT.exclude_element_name */
unsigned char ge128os9448 = '\0';
T0* ge128ov9448;
T0* T375f12(T0* C)
{
	T0* R = 0;
	if (ge128os9448) {
		return ge128ov9448;
	} else {
		ge128os9448 = '\1';
	}
	R = GE_ms("exclude", 7);
	ge128ov9448 = R;
	return R;
}

/* GEANT_DIRECTORYSET.add_single_include */
void T376f29(T0* C, T0* a1)
{
	T409f36(GE_void(((T376*)(C))->a7), a1);
}

/* GEANT_DIRECTORYSET_ELEMENT.elements_by_name */
T0* T375f11(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T375*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T375f16(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.string_ */
T0* T375f16(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.include_element_name */
unsigned char ge128os9447 = '\0';
T0* ge128ov9447;
T0* T375f10(T0* C)
{
	T0* R = 0;
	if (ge128os9447) {
		return ge128ov9447;
	} else {
		ge128os9447 = '\1';
	}
	R = GE_ms("include", 7);
	ge128ov9447 = R;
	return R;
}

/* GEANT_DIRECTORYSET.set_concat */
void T376f28(T0* C, T1 a1)
{
	((T376*)(C))->a11 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.boolean_value */
T1 T375f9(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T375f5(C, a1));
	t1 = (T375f16(C));
	t2 = (T375f17(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T375f16(C));
		t2 = (T375f18(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T375f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T375f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T375f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T375f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T375f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.std */
T0* T375f19(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.false_attribute_value */
T0* T375f18(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.true_attribute_value */
T0* T375f17(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.concat_attribute_name */
unsigned char ge128os9446 = '\0';
T0* ge128ov9446;
T0* T375f8(T0* C)
{
	T0* R = 0;
	if (ge128os9446) {
		return ge128ov9446;
	} else {
		ge128os9446 = '\1';
	}
	R = GE_ms("concat", 6);
	ge128ov9446 = R;
	return R;
}

/* GEANT_DIRECTORYSET.set_exclude_wc_string */
void T376f27(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	((T376*)(C))->a10 = a1;
	((T376*)(C))->a4 = T412c14(((T376*)(C))->a10, EIF_TRUE);
	t1 = (T412f11(GE_void(((T376*)(C))->a4)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = GE_ma33((T6)3,
GE_ms("  [directoryset] error: invalid exclude wildcard: \'", 51),
((T376*)(C))->a10,
GE_ms("\'", 1));
		T22f41(GE_void(((T376*)(C))->a2), t2);
	}
}

/* GEANT_DIRECTORYSET_ELEMENT.exclude_attribute_name */
unsigned char ge128os9445 = '\0';
T0* ge128ov9445;
T0* T375f7(T0* C)
{
	T0* R = 0;
	if (ge128os9445) {
		return ge128ov9445;
	} else {
		ge128os9445 = '\1';
	}
	R = GE_ms("exclude", 7);
	ge128ov9445 = R;
	return R;
}

/* GEANT_DIRECTORYSET.set_include_wc_string */
void T376f26(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	((T376*)(C))->a9 = a1;
	((T376*)(C))->a3 = T412c14(((T376*)(C))->a9, EIF_TRUE);
	t1 = (T412f11(GE_void(((T376*)(C))->a3)));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = GE_ma33((T6)3,
GE_ms("  [directoryset] error: invalid include wildcard: \'", 51),
((T376*)(C))->a9,
GE_ms("\'", 1));
		T22f41(GE_void(((T376*)(C))->a2), t2);
	}
}

/* GEANT_DIRECTORYSET_ELEMENT.include_attribute_name */
unsigned char ge128os9444 = '\0';
T0* ge128ov9444;
T0* T375f6(T0* C)
{
	T0* R = 0;
	if (ge128os9444) {
		return ge128ov9444;
	} else {
		ge128os9444 = '\1';
	}
	R = GE_ms("include", 7);
	ge128ov9444 = R;
	return R;
}

/* GEANT_DIRECTORYSET.set_directory_name */
void T376f25(T0* C, T0* a1)
{
	((T376*)(C))->a1 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.attribute_value */
T0* T375f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T375*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T375f14(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T375f14(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T375f15(C));
		t4 = (((T22*)(GE_void(((T375*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T375f15(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.project_variables_resolver */
T0* T375f15(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.target_arguments_stack */
T0* T375f14(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.has_attribute */
T1 T375f4(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T375*)(C))->a3), a1));
	return R;
}

/* GEANT_DIRECTORYSET_ELEMENT.directory_attribute_name */
unsigned char ge128os9443 = '\0';
T0* ge128ov9443;
T0* T375f13(T0* C)
{
	T0* R = 0;
	if (ge128os9443) {
		return ge128ov9443;
	} else {
		ge128os9443 = '\1';
	}
	R = GE_ms("directory", 9);
	ge128ov9443 = R;
	return R;
}

/* GEANT_DIRECTORYSET.make */
T0* T376c21(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T376));
	*(T376*)C = GE_default376;
	((T376*)(C))->a2 = a1;
	((T376*)(C))->a5 = T407c38((T6)(GE_int32(20)));
	((T376*)(C))->a7 = T409c34((T6)(GE_int32(20)));
	l1 = T59c3();
	T409f35(GE_void(((T376*)(C))->a7), l1);
	((T376*)(C))->a8 = T409c34((T6)(GE_int32(20)));
	T409f35(GE_void(((T376*)(C))->a8), l1);
	T376f31(C, GE_ms("fs.directoryname", 16));
	return C;
}

/* GEANT_DIRECTORYSET.set_directory_name_variable_name */
void T376f31(T0* C, T0* a1)
{
	((T376*)(C))->a12 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.make */
void T375f20p1(T0* C, T0* a1, T0* a2)
{
	T375f21(C, a2);
	T375f22(C, a1);
}

/* GEANT_DIRECTORYSET_ELEMENT.set_project */
void T375f22(T0* C, T0* a1)
{
	((T375*)(C))->a2 = a1;
}

/* GEANT_DIRECTORYSET_ELEMENT.element_make */
void T375f21(T0* C, T0* a1)
{
	T375f23(C, a1);
}

/* GEANT_DIRECTORYSET_ELEMENT.set_xml_element */
void T375f23(T0* C, T0* a1)
{
	((T375*)(C))->a3 = a1;
}

/* GEANT_DELETE_TASK.directoryset_element_name */
unsigned char ge99os8822 = '\0';
T0* ge99ov8822;
T0* T294f15(T0* C)
{
	T0* R = 0;
	if (ge99os8822) {
		return ge99ov8822;
	} else {
		ge99os8822 = '\1';
	}
	R = GE_ms("directoryset", 12);
	ge99ov8822 = R;
	return R;
}

/* GEANT_DELETE_COMMAND.set_fileset */
void T374f20(T0* C, T0* a1)
{
	((T374*)(C))->a5 = a1;
}

/* GEANT_DELETE_TASK.fileset_element_name */
unsigned char ge99os8821 = '\0';
T0* ge99ov8821;
T0* T294f14(T0* C)
{
	T0* R = 0;
	if (ge99os8821) {
		return ge99ov8821;
	} else {
		ge99os8821 = '\1';
	}
	R = GE_ms("fileset", 7);
	ge99ov8821 = R;
	return R;
}

/* GEANT_DELETE_COMMAND.set_file */
void T374f19(T0* C, T0* a1)
{
	((T374*)(C))->a3 = a1;
}

/* GEANT_DELETE_TASK.file_attribute_name */
unsigned char ge99os8820 = '\0';
T0* ge99ov8820;
T0* T294f13(T0* C)
{
	T0* R = 0;
	if (ge99os8820) {
		return ge99ov8820;
	} else {
		ge99os8820 = '\1';
	}
	R = GE_ms("file", 4);
	ge99ov8820 = R;
	return R;
}

/* GEANT_DELETE_COMMAND.set_directory */
void T374f18(T0* C, T0* a1)
{
	((T374*)(C))->a4 = a1;
}

/* GEANT_DELETE_TASK.attribute_value */
T0* T294f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T294*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T294f20(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T294f20(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T294f5(C));
		t4 = (((T22*)(GE_void(((T294*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T294f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_DELETE_TASK.project_variables_resolver */
T0* T294f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_DELETE_TASK.target_arguments_stack */
T0* T294f20(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_DELETE_TASK.has_attribute */
T1 T294f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T294*)(C))->a3), a1));
	return R;
}

/* GEANT_DELETE_TASK.directory_attribute_name */
unsigned char ge99os8819 = '\0';
T0* ge99ov8819;
T0* T294f11(T0* C)
{
	T0* R = 0;
	if (ge99os8819) {
		return ge99ov8819;
	} else {
		ge99os8819 = '\1';
	}
	R = GE_ms("directory", 9);
	ge99ov8819 = R;
	return R;
}

/* GEANT_DELETE_TASK.task_make */
void T294f26(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T294f28(C, a1);
	t1 = (((T374*)(GE_void(a1)))->a2);
	T294f29(C, t1, a2);
}

/* GEANT_DELETE_TASK.interpreting_element_make */
void T294f29(T0* C, T0* a1, T0* a2)
{
	T294f30(C, a2);
	T294f31(C, a1);
}

/* GEANT_DELETE_TASK.set_project */
void T294f31(T0* C, T0* a1)
{
	((T294*)(C))->a2 = a1;
}

/* GEANT_DELETE_TASK.element_make */
void T294f30(T0* C, T0* a1)
{
	T294f32(C, a1);
}

/* GEANT_DELETE_TASK.set_xml_element */
void T294f32(T0* C, T0* a1)
{
	((T294*)(C))->a3 = a1;
}

/* GEANT_DELETE_TASK.set_command */
void T294f28(T0* C, T0* a1)
{
	((T294*)(C))->a1 = a1;
}

/* GEANT_DELETE_COMMAND.make */
T0* T374c17(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T374));
	*(T374*)C = GE_default374;
	T374f23(C, a1);
	return C;
}

/* GEANT_DELETE_COMMAND.set_project */
void T374f23(T0* C, T0* a1)
{
	((T374*)(C))->a2 = a1;
}

/* GEANT_TARGET.delete_task_name */
unsigned char ge130os2277 = '\0';
T0* ge130ov2277;
T0* T26f62(T0* C)
{
	T0* R = 0;
	if (ge130os2277) {
		return ge130ov2277;
	} else {
		ge130os2277 = '\1';
	}
	R = GE_ms("delete", 6);
	ge130ov2277 = R;
	return R;
}

/* GEANT_MKDIR_TASK.make */
T0* T293c21(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T293));
	*(T293*)C = GE_default293;
	((T293*)(C))->a1 = T373c9(a1);
	T293f23(C, ((T293*)(C))->a1, a2);
	t1 = (T293f11(C));
	t2 = (T293f8(C, t1));
	if (t2) {
		t1 = (T293f11(C));
		l1 = (T293f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T373f10(GE_void(((T293*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_MKDIR_COMMAND.set_directory */
void T373f10(T0* C, T0* a1)
{
	((T373*)(C))->a3 = a1;
}

/* GEANT_MKDIR_TASK.attribute_value */
T0* T293f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T293*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T293f17(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T293f17(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T293f5(C));
		t4 = (((T22*)(GE_void(((T293*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T293f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_MKDIR_TASK.project_variables_resolver */
T0* T293f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_MKDIR_TASK.target_arguments_stack */
T0* T293f17(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_MKDIR_TASK.has_attribute */
T1 T293f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T293*)(C))->a3), a1));
	return R;
}

/* GEANT_MKDIR_TASK.directory_attribute_name */
unsigned char ge113os8811 = '\0';
T0* ge113ov8811;
T0* T293f11(T0* C)
{
	T0* R = 0;
	if (ge113os8811) {
		return ge113ov8811;
	} else {
		ge113os8811 = '\1';
	}
	R = GE_ms("directory", 9);
	ge113ov8811 = R;
	return R;
}

/* GEANT_MKDIR_TASK.task_make */
void T293f23(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T293f25(C, a1);
	t1 = (((T373*)(GE_void(a1)))->a2);
	T293f26(C, t1, a2);
}

/* GEANT_MKDIR_TASK.interpreting_element_make */
void T293f26(T0* C, T0* a1, T0* a2)
{
	T293f27(C, a2);
	T293f28(C, a1);
}

/* GEANT_MKDIR_TASK.set_project */
void T293f28(T0* C, T0* a1)
{
	((T293*)(C))->a2 = a1;
}

/* GEANT_MKDIR_TASK.element_make */
void T293f27(T0* C, T0* a1)
{
	T293f29(C, a1);
}

/* GEANT_MKDIR_TASK.set_xml_element */
void T293f29(T0* C, T0* a1)
{
	((T293*)(C))->a3 = a1;
}

/* GEANT_MKDIR_TASK.set_command */
void T293f25(T0* C, T0* a1)
{
	((T293*)(C))->a1 = a1;
}

/* GEANT_MKDIR_COMMAND.make */
T0* T373c9(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T373));
	*(T373*)C = GE_default373;
	T373f12(C, a1);
	return C;
}

/* GEANT_MKDIR_COMMAND.set_project */
void T373f12(T0* C, T0* a1)
{
	((T373*)(C))->a2 = a1;
}

/* GEANT_TARGET.mkdir_task_name */
unsigned char ge130os2276 = '\0';
T0* ge130ov2276;
T0* T26f61(T0* C)
{
	T0* R = 0;
	if (ge130os2276) {
		return ge130ov2276;
	} else {
		ge130os2276 = '\1';
	}
	R = GE_ms("mkdir", 5);
	ge130ov2276 = R;
	return R;
}

/* GEANT_ECHO_TASK.make */
T0* T292c27(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 l3 = 0;
	T1 l4 = 0;
	T0* C;
	T1 t1;
	T0* t2;
	C = (T0*)GE_alloc(sizeof(T292));
	*(T292*)C = GE_default292;
	((T292*)(C))->a1 = T372c7(a1);
	T292f29(C, ((T292*)(C))->a1, a2);
	l2 = (T96f26(GE_void(a2)));
	t1 = ((l2)==(EIF_VOID));
	if (!(t1)) {
		t1 = (((((T0*)(GE_void(l2)))->id==17)?T17f29(l2):T194f50(l2)));
	}
	l4 = ((T1)(!(t1)));
	t2 = (T292f11(C));
	l3 = (T292f8(C, t2));
	if (l4) {
		t1 = (l3);
	} else {
		t1 = EIF_FALSE;
	}
	if (t1) {
		t2 = GE_ma33((T6)1,
GE_ms("  [echo]: error: Usage of both, attribute \'message\' and text content within element \'echo\' is not allowed.", 106));
		T292f30(C, (T6)(GE_int32(1)), t2);
	}
	t1 = ((T1)(!(l4)));
	if (t1) {
		t1 = ((T1)(!(l3)));
	}
	if (t1) {
		t2 = GE_ma33((T6)1,
GE_ms("  [echo]: error: You have to specify either attribute \'message\' or text content within the element \'echo\'.", 106));
		T292f30(C, (T6)(GE_int32(1)), t2);
	}
	if (l3) {
		t2 = (T292f11(C));
		l1 = (T292f12(C, t2));
		T372f8(GE_void(((T292*)(C))->a1), l1);
	} else {
		T372f8(GE_void(((T292*)(C))->a1), l2);
	}
	t2 = (T292f13(C));
	t1 = (T292f8(C, t2));
	if (t1) {
		t2 = (T292f13(C));
		l1 = (T292f12(C, t2));
		T372f9(GE_void(((T292*)(C))->a1), l1);
		t2 = (T292f14(C));
		t1 = (T292f8(C, t2));
		if (t1) {
			t2 = (T292f14(C));
			t1 = (T292f15(C, t2));
			T372f10(GE_void(((T292*)(C))->a1), t1);
		}
	}
	return C;
}

/* GEANT_ECHO_COMMAND.set_append */
void T372f10(T0* C, T1 a1)
{
	((T372*)(C))->a5 = a1;
}

/* GEANT_ECHO_TASK.boolean_value */
T1 T292f15(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T292f12(C, a1));
	t1 = (T292f21(C));
	t2 = (T292f22(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T292f21(C));
		t2 = (T292f23(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T292f18(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T292f18(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T292f18(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T292f18(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T292f18(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_ECHO_TASK.std */
T0* T292f18(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_ECHO_TASK.false_attribute_value */
T0* T292f23(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_ECHO_TASK.true_attribute_value */
T0* T292f22(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_ECHO_TASK.string_ */
T0* T292f21(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_ECHO_TASK.append_attribute_name */
unsigned char ge100os8799 = '\0';
T0* ge100ov8799;
T0* T292f14(T0* C)
{
	T0* R = 0;
	if (ge100os8799) {
		return ge100ov8799;
	} else {
		ge100os8799 = '\1';
	}
	R = GE_ms("append", 6);
	ge100ov8799 = R;
	return R;
}

/* GEANT_ECHO_COMMAND.set_to_file */
void T372f9(T0* C, T0* a1)
{
	((T372*)(C))->a4 = a1;
}

/* GEANT_ECHO_TASK.to_file_attribute_name */
unsigned char ge100os8798 = '\0';
T0* ge100ov8798;
T0* T292f13(T0* C)
{
	T0* R = 0;
	if (ge100os8798) {
		return ge100ov8798;
	} else {
		ge100os8798 = '\1';
	}
	R = GE_ms("to_file", 7);
	ge100ov8798 = R;
	return R;
}

/* GEANT_ECHO_COMMAND.set_message */
void T372f8(T0* C, T0* a1)
{
	((T372*)(C))->a3 = a1;
}

/* GEANT_ECHO_TASK.attribute_value */
T0* T292f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T292*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T292f20(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T292f20(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T292f5(C));
		t4 = (((T22*)(GE_void(((T292*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T292f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_ECHO_TASK.project_variables_resolver */
T0* T292f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_ECHO_TASK.target_arguments_stack */
T0* T292f20(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_ECHO_TASK.exit_application */
void T292f30(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T292f18(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T292f18(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T292f18(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T292f18(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T292f19(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_ECHO_TASK.exceptions */
T0* T292f19(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_ECHO_TASK.has_attribute */
T1 T292f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T292*)(C))->a3), a1));
	return R;
}

/* GEANT_ECHO_TASK.message_attribute_name */
unsigned char ge100os8797 = '\0';
T0* ge100ov8797;
T0* T292f11(T0* C)
{
	T0* R = 0;
	if (ge100os8797) {
		return ge100ov8797;
	} else {
		ge100os8797 = '\1';
	}
	R = GE_ms("message", 7);
	ge100ov8797 = R;
	return R;
}

/* UC_UTF8_STRING.old_is_empty */
T1 T194f50(T0* C)
{
	T1 R = 0;
	R = ((((T194*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* STRING_8.is_empty */
T1 T17f29(T0* C)
{
	T1 R = 0;
	R = ((((T17*)(C))->a2)==((T6)(GE_int32(0))));
	return R;
}

/* XM_ELEMENT.text */
T0* T96f26(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	l1 = T318c11();
	l2 = (T96f19(C));
	T190f10(GE_void(l2));
	t1 = (((T190*)(GE_void(l2)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l2)));
		T191x5736T0(GE_void(t2), l1);
		t1 = (T318f10(GE_void(l1)));
		if (t1) {
			t1 = ((R)==(EIF_VOID));
			if (t1) {
				t2 = (T96f27(C));
				t3 = (((T318*)(GE_void(l1)))->a5);
				t3 = (((T313*)(GE_void(t3)))->a1);
				R = (T76f7(GE_void(t2), t3));
			} else {
				t2 = (T96f27(C));
				t3 = (((T318*)(GE_void(l1)))->a5);
				t3 = (((T313*)(GE_void(t3)))->a1);
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
		T190f11(GE_void(l2));
		t1 = (((T190*)(GE_void(l2)))->a1);
	}
	return R;
}

/* KL_STRING_ROUTINES.appended_string */
T0* T76f5(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(a1))->id) {
		case 194:
			l1 = a1;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		T194f55(GE_void(l1), a2);
		R = l1;
	} else {
		if ((a2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a2))->id) {
			case 194:
				l1 = a2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			R = (T76f6(C, a1, a2));
		} else {
			if (((T0*)(GE_void(a1)))->id==17) {
				T17f39(a1, a2);
			} else {
				T194f55(a1, a2);
			}
			R = a1;
		}
	}
	return R;
}

/* STRING_8.append_string */
void T17f39(T0* C, T0* a1)
{
	T1 t1;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		T17f35(C, a1);
	}
}

/* KL_STRING_ROUTINES.concat */
T0* T76f6(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	if ((a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(a1))->id) {
		case 194:
			l1 = a1;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		R = (T194f7(GE_void(l1), a2));
	} else {
		if ((a2)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a2))->id) {
			case 194:
				l1 = a2;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			R = (T194f8(GE_void(l1), a1));
		} else {
			R = (((((T0*)(GE_void(a1)))->id==17)?T17f8(a1, a2):T194f7(a1, a2)));
		}
	}
	return R;
}

/* UC_UTF8_STRING.prefixed_string */
T0* T194f8(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T194f25(C));
	t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t2 = (T193f22(GE_void(t1), a1, (T6)(GE_int32(1)), t2));
	t2 = ((T6)((((T194*)(C))->a3)+(t2)));
	R = T194c59(t2);
	T194f55(GE_void(R), a1);
	T194f55(GE_void(R), C);
	return R;
}

/* XM_ELEMENT.string_ */
T0* T96f27(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* XM_NODE_TYPER.is_character_data */
T1 T318f10(T0* C)
{
	T1 R = 0;
	R = ((((T318*)(C))->a5)!=(EIF_VOID));
	return R;
}

/* GEANT_ECHO_TASK.task_make */
void T292f29(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T292f31(C, a1);
	t1 = (((T372*)(GE_void(a1)))->a2);
	T292f32(C, t1, a2);
}

/* GEANT_ECHO_TASK.interpreting_element_make */
void T292f32(T0* C, T0* a1, T0* a2)
{
	T292f33(C, a2);
	T292f34(C, a1);
}

/* GEANT_ECHO_TASK.set_project */
void T292f34(T0* C, T0* a1)
{
	((T292*)(C))->a2 = a1;
}

/* GEANT_ECHO_TASK.element_make */
void T292f33(T0* C, T0* a1)
{
	T292f35(C, a1);
}

/* GEANT_ECHO_TASK.set_xml_element */
void T292f35(T0* C, T0* a1)
{
	((T292*)(C))->a3 = a1;
}

/* GEANT_ECHO_TASK.set_command */
void T292f31(T0* C, T0* a1)
{
	((T292*)(C))->a1 = a1;
}

/* GEANT_ECHO_COMMAND.make */
T0* T372c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T372));
	*(T372*)C = GE_default372;
	T372f12(C, a1);
	return C;
}

/* GEANT_ECHO_COMMAND.set_project */
void T372f12(T0* C, T0* a1)
{
	((T372*)(C))->a2 = a1;
}

/* GEANT_TARGET.echo_task_name */
unsigned char ge130os2275 = '\0';
T0* ge130ov2275;
T0* T26f60(T0* C)
{
	T0* R = 0;
	if (ge130os2275) {
		return ge130ov2275;
	} else {
		ge130os2275 = '\1';
	}
	R = GE_ms("echo", 4);
	ge130ov2275 = R;
	return R;
}

/* GEANT_GEANT_TASK.make */
T0* T291c33(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T6 l9 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	T0* t5;
	C = (T0*)GE_alloc(sizeof(T291));
	*(T291*)C = GE_default291;
	((T291*)(C))->a1 = T370c23(a1);
	T291f35(C, ((T291*)(C))->a1, a2);
	t1 = (T291f11(C));
	t2 = (T291f8(C, t1));
	if (t2) {
		t1 = (T291f11(C));
		l1 = (T291f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T370f24(GE_void(((T291*)(C))->a1), l1);
		}
	}
	t1 = (T291f13(C));
	t2 = (T291f8(C, t1));
	if (t2) {
		t1 = (T291f13(C));
		t2 = (T291f14(C, t1));
		T370f25(GE_void(((T291*)(C))->a1), t2);
	}
	t1 = (T291f15(C));
	t2 = (T291f8(C, t1));
	if (t2) {
		t1 = (T291f15(C));
		l1 = (T291f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T370f26(GE_void(((T291*)(C))->a1), l1);
		}
		T370f27(GE_void(((T291*)(C))->a1), EIF_TRUE);
	} else {
		T370f27(GE_void(((T291*)(C))->a1), EIF_FALSE);
	}
	t1 = (T291f16(C));
	l2 = (T96f16(GE_void(((T291*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T359c29(((T291*)(C))->a2, l2);
		t1 = (((T359*)(GE_void(l3)))->a1);
		T370f28(GE_void(((T291*)(C))->a1), t1);
	}
	t1 = (T291f17(C));
	t2 = (T291f8(C, t1));
	if (t2) {
		t1 = (T291f17(C));
		t2 = (T291f14(C, t1));
		T370f27(GE_void(((T291*)(C))->a1), t2);
	}
	t1 = (T291f18(C));
	l4 = (T291f19(C, t1));
	t1 = (T291f20(C));
	t2 = (T291f8(C, t1));
	if (t2) {
		t3 = (((T115*)(GE_void(l4)))->a1);
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			t1 = GE_ma33((T6)1,
GE_ms("  [geant]: error: Usage of both, attribute \'arguments\' and subelements \'argument\' is not allowed.", 97));
			T291f36(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (T291f20(C));
		l1 = (T291f12(C, t1));
		t1 = (T291f21(C));
		l8 = (T371f6(GE_void(t1), l1));
		l7 = (T225f7(GE_void(l8)));
		l9 = (T6)(GE_int32(1));
		T271f8(GE_void(l7));
		t2 = (((T271*)(GE_void(l7)))->a3);
		while (!(t2)) {
			t1 = (((T370*)(GE_void(((T291*)(C))->a1)))->a2);
			t4 = (T271f6(GE_void(l7)));
			t5 = (T6f12(&l9));
			T34f66(GE_void(t1), t4, t5);
			t1 = (T271f6(GE_void(l7)));
			t1 = GE_ma33((T6)3,
GE_ms("  [geant]: found actual (terse) argument. Value: \'", 50),
t1,
GE_ms("\'\n", 2));
			T22f31(GE_void(((T291*)(C))->a2), t1);
			l9 = ((T6)((l9)+((T6)(GE_int32(1)))));
			T271f9(GE_void(l7));
			t2 = (((T271*)(GE_void(l7)))->a3);
		}
	} else {
		l6 = (T115f5(GE_void(l4)));
		T116f8(GE_void(l6));
		t2 = (((T116*)(GE_void(l6)))->a1);
		while (!(t2)) {
			t1 = (T116f6(GE_void(l6)));
			l5 = T365c16(((T291*)(C))->a2, t1);
			t2 = (T365f10(GE_void(l5)));
			if (t2) {
				t1 = (T365f4(GE_void(l5)));
				t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			}
			if (t2) {
				t1 = (((T370*)(GE_void(((T291*)(C))->a1)))->a2);
				t4 = (T365f4(GE_void(l5)));
				t2 = (T34f36(GE_void(t1), t4));
				if (t2) {
					t1 = (T365f4(GE_void(l5)));
					t1 = GE_ma33((T6)3,
GE_ms("  [geant]: error: duplicate definition for argument \'", 53),
t1,
GE_ms("\'", 1));
					T291f36(C, (T6)(GE_int32(1)), t1);
				}
				t1 = (((T370*)(GE_void(((T291*)(C))->a1)))->a2);
				t4 = (T365f5(GE_void(l5)));
				t5 = (T365f4(GE_void(l5)));
				T34f66(GE_void(t1), t4, t5);
				t1 = (T365f4(GE_void(l5)));
				t1 = GE_ma33((T6)3,
GE_ms("  [geant]: found actual argument \'", 34),
t1,
GE_ms("\'\n", 2));
				T22f31(GE_void(((T291*)(C))->a2), t1);
			}
			T116f9(GE_void(l6));
			t2 = (((T116*)(GE_void(l6)))->a1);
		}
	}
	return C;
}

/* GEANT_GEANT_TASK.arguments_string_splitter */
T0* T291f21(T0* C)
{
	T0* R = 0;
	if (ge61os1575) {
		return ge61ov1575;
	} else {
		ge61os1575 = '\1';
	}
	R = T371c9();
	T371f10(GE_void(R), GE_ms(",\t", 2));
	ge61ov1575 = R;
	return R;
}

/* GEANT_GEANT_TASK.exit_application */
void T291f36(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T291f24(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T291f24(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T291f24(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T291f24(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T291f25(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_GEANT_TASK.exceptions */
T0* T291f25(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_GEANT_TASK.std */
T0* T291f24(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_GEANT_TASK.arguments_attribute_name */
unsigned char ge103os8770 = '\0';
T0* ge103ov8770;
T0* T291f20(T0* C)
{
	T0* R = 0;
	if (ge103os8770) {
		return ge103ov8770;
	} else {
		ge103os8770 = '\1';
	}
	R = GE_ms("arguments", 9);
	ge103ov8770 = R;
	return R;
}

/* GEANT_GEANT_TASK.elements_by_name */
T0* T291f19(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T291*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T291f27(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_GEANT_TASK.string_ */
T0* T291f27(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_GEANT_TASK.argument_element_name */
unsigned char ge103os8769 = '\0';
T0* ge103ov8769;
T0* T291f18(T0* C)
{
	T0* R = 0;
	if (ge103os8769) {
		return ge103ov8769;
	} else {
		ge103os8769 = '\1';
	}
	R = GE_ms("argument", 8);
	ge103ov8769 = R;
	return R;
}

/* GEANT_GEANT_TASK.fork_attribute_name */
unsigned char ge103os8767 = '\0';
T0* ge103ov8767;
T0* T291f17(T0* C)
{
	T0* R = 0;
	if (ge103os8767) {
		return ge103ov8767;
	} else {
		ge103os8767 = '\1';
	}
	R = GE_ms("fork", 4);
	ge103ov8767 = R;
	return R;
}

/* GEANT_GEANT_COMMAND.set_fileset */
void T370f28(T0* C, T0* a1)
{
	((T370*)(C))->a9 = a1;
}

/* GEANT_GEANT_TASK.fileset_element_name */
unsigned char ge103os8768 = '\0';
T0* ge103ov8768;
T0* T291f16(T0* C)
{
	T0* R = 0;
	if (ge103os8768) {
		return ge103ov8768;
	} else {
		ge103os8768 = '\1';
	}
	R = GE_ms("fileset", 7);
	ge103ov8768 = R;
	return R;
}

/* GEANT_GEANT_COMMAND.set_fork */
void T370f27(T0* C, T1 a1)
{
	((T370*)(C))->a7 = a1;
	((T370*)(C))->a8 = EIF_TRUE;
}

/* GEANT_GEANT_COMMAND.set_filename */
void T370f26(T0* C, T0* a1)
{
	((T370*)(C))->a4 = a1;
}

/* GEANT_GEANT_TASK.filename_attribute_name */
unsigned char ge103os8764 = '\0';
T0* ge103ov8764;
T0* T291f15(T0* C)
{
	T0* R = 0;
	if (ge103os8764) {
		return ge103ov8764;
	} else {
		ge103os8764 = '\1';
	}
	R = GE_ms("file", 4);
	ge103ov8764 = R;
	return R;
}

/* GEANT_GEANT_COMMAND.set_reuse_variables */
void T370f25(T0* C, T1 a1)
{
	((T370*)(C))->a6 = a1;
}

/* GEANT_GEANT_TASK.boolean_value */
T1 T291f14(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T291f12(C, a1));
	t1 = (T291f27(C));
	t2 = (T291f28(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T291f27(C));
		t2 = (T291f29(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T291f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEANT_TASK.false_attribute_value */
T0* T291f29(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_GEANT_TASK.true_attribute_value */
T0* T291f28(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_GEANT_TASK.reuse_variables_attribute_name */
unsigned char ge103os8766 = '\0';
T0* ge103ov8766;
T0* T291f13(T0* C)
{
	T0* R = 0;
	if (ge103os8766) {
		return ge103ov8766;
	} else {
		ge103os8766 = '\1';
	}
	R = GE_ms("reuse_variables", 15);
	ge103ov8766 = R;
	return R;
}

/* GEANT_GEANT_COMMAND.set_start_target_name */
void T370f24(T0* C, T0* a1)
{
	((T370*)(C))->a5 = a1;
}

/* GEANT_GEANT_TASK.attribute_value */
T0* T291f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T291*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T291f26(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T291f26(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T291f5(C));
		t4 = (((T22*)(GE_void(((T291*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T291f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEANT_TASK.project_variables_resolver */
T0* T291f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_GEANT_TASK.target_arguments_stack */
T0* T291f26(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_GEANT_TASK.has_attribute */
T1 T291f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T291*)(C))->a3), a1));
	return R;
}

/* GEANT_GEANT_TASK.start_target_attribute_name */
unsigned char ge103os8765 = '\0';
T0* ge103ov8765;
T0* T291f11(T0* C)
{
	T0* R = 0;
	if (ge103os8765) {
		return ge103ov8765;
	} else {
		ge103os8765 = '\1';
	}
	R = GE_ms("target", 6);
	ge103ov8765 = R;
	return R;
}

/* GEANT_GEANT_TASK.task_make */
void T291f35(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T291f37(C, a1);
	t1 = (((T370*)(GE_void(a1)))->a3);
	T291f38(C, t1, a2);
}

/* GEANT_GEANT_TASK.interpreting_element_make */
void T291f38(T0* C, T0* a1, T0* a2)
{
	T291f39(C, a2);
	T291f40(C, a1);
}

/* GEANT_GEANT_TASK.set_project */
void T291f40(T0* C, T0* a1)
{
	((T291*)(C))->a2 = a1;
}

/* GEANT_GEANT_TASK.element_make */
void T291f39(T0* C, T0* a1)
{
	T291f41(C, a1);
}

/* GEANT_GEANT_TASK.set_xml_element */
void T291f41(T0* C, T0* a1)
{
	((T291*)(C))->a3 = a1;
}

/* GEANT_GEANT_TASK.set_command */
void T291f37(T0* C, T0* a1)
{
	((T291*)(C))->a1 = a1;
}

/* GEANT_GEANT_COMMAND.make */
T0* T370c23(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T370));
	*(T370*)C = GE_default370;
	T370f23p1(C, a1);
	((T370*)(C))->a2 = T34c45();
	return C;
}

/* GEANT_GEANT_COMMAND.make */
void T370f23p1(T0* C, T0* a1)
{
	T370f30(C, a1);
}

/* GEANT_GEANT_COMMAND.set_project */
void T370f30(T0* C, T0* a1)
{
	((T370*)(C))->a3 = a1;
}

/* GEANT_TARGET.geant_task_name */
unsigned char ge130os2274 = '\0';
T0* ge130ov2274;
T0* T26f59(T0* C)
{
	T0* R = 0;
	if (ge130os2274) {
		return ge130ov2274;
	} else {
		ge130os2274 = '\1';
	}
	R = GE_ms("geant", 5);
	ge130ov2274 = R;
	return R;
}

/* GEANT_GETEST_TASK.make */
T0* T290c37(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T290));
	*(T290*)C = GE_default290;
	((T290*)(C))->a1 = T369c20(a1);
	T290f39(C, ((T290*)(C))->a1, a2);
	t1 = (T290f11(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f11(C));
		t2 = (T290f12(C, t1));
		T369f21(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f13(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f13(C));
		l2 = (T290f14(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T369f22(GE_void(((T290*)(C))->a1), l2);
		}
	}
	t1 = (T290f15(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f15(C));
		l2 = (T290f14(C, t1));
		T369f23(GE_void(((T290*)(C))->a1), l2);
	}
	t1 = (T290f16(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f16(C));
		l2 = (T290f14(C, t1));
		T369f24(GE_void(((T290*)(C))->a1), l2);
	}
	t1 = (T290f17(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f17(C));
		l2 = (T290f14(C, t1));
		T369f25(GE_void(((T290*)(C))->a1), l2);
	}
	t1 = (T290f18(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f18(C));
		t2 = (T290f12(C, t1));
		T369f26(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f19(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f19(C));
		t2 = (T290f12(C, t1));
		T369f27(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f20(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f20(C));
		t2 = (T290f12(C, t1));
		T369f28(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f21(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f21(C));
		t2 = (T290f12(C, t1));
		T369f29(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f22(C));
	t2 = (T290f8(C, t1));
	if (t2) {
		t1 = (T290f22(C));
		t2 = (T290f12(C, t1));
		T369f30(GE_void(((T290*)(C))->a1), t2);
	}
	t1 = (T290f23(C));
	l7 = (T290f24(C, t1));
	l3 = (T115f5(GE_void(l7)));
	T116f8(GE_void(l3));
	t2 = (((T116*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l3)));
		l6 = T365c16(((T290*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l6)));
		if (t2) {
			t2 = (T365f10(GE_void(l6)));
		}
		if (t2) {
			t2 = (T365f3(GE_void(l6)));
		}
		if (t2) {
			l1 = (T365f4(GE_void(l6)));
			l2 = (T365f5(GE_void(l6)));
			t1 = (T290f25(C));
			t4 = (T290f16(C));
			t2 = (T76f1(GE_void(t1), l1, t4));
			if (t2) {
				T369f24(GE_void(((T290*)(C))->a1), l2);
			} else {
				t1 = (T290f25(C));
				t4 = (T290f17(C));
				t2 = (T76f1(GE_void(t1), l1, t4));
				if (t2) {
					T369f25(GE_void(((T290*)(C))->a1), l2);
				} else {
					t1 = (T290f25(C));
					t4 = (T290f18(C));
					t2 = (T76f1(GE_void(t1), l1, t4));
					if (t2) {
						t1 = (T290f25(C));
						t4 = (T290f26(C));
						t2 = (T76f1(GE_void(t1), t4, l2));
						if (t2) {
							T369f26(GE_void(((T290*)(C))->a1), EIF_TRUE);
						} else {
							T369f26(GE_void(((T290*)(C))->a1), EIF_FALSE);
						}
					}
				}
			}
		}
		T116f9(GE_void(l3));
		t2 = (((T116*)(GE_void(l3)))->a1);
	}
	t1 = (T290f27(C));
	l5 = (T290f24(C, t1));
	l3 = (T115f5(GE_void(l5)));
	T116f8(GE_void(l3));
	t2 = (((T116*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l3)));
		l4 = T365c16(((T290*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l4)));
		if (t2) {
			t2 = (T365f10(GE_void(l4)));
		}
		if (t2) {
			t2 = (T365f3(GE_void(l4)));
		}
		if (t2) {
			l1 = (T365f4(GE_void(l4)));
			l2 = (T365f5(GE_void(l4)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				t1 = (((T369*)(GE_void(((T290*)(C))->a1)))->a2);
				T79f69(GE_void(t1), l2, l1);
			}
		}
		T116f9(GE_void(l3));
		t2 = (((T116*)(GE_void(l3)))->a1);
	}
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].force */
void T79f69(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T79f52(C);
	T79f56(C, a2);
	t1 = ((((T79*)(C))->a8)!=((T6)(GE_int32(0))));
	if (t1) {
		T79f60(C, a1, ((T79*)(C))->a8);
	} else {
		t1 = ((((T79*)(C))->a17)==(((T79*)(C))->a4));
		if (t1) {
			t2 = ((T6)((((T79*)(C))->a17)+((T6)(GE_int32(1)))));
			t2 = (T79f32(C, t2));
			T79f57(C, t2);
			l2 = (T79f35(C, a2));
		} else {
			l2 = ((T79*)(C))->a18;
		}
		l1 = ((T79*)(C))->a7;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T79*)(C))->a6 = ((T6)((((T79*)(C))->a6)+((T6)(GE_int32(1)))));
			l1 = ((T79*)(C))->a6;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T79f34(C, l1));
			((T79*)(C))->a7 = ((T6)((t2)-(t3)));
		}
		t2 = (T79f36(C, l2));
		T79f58(C, t2, l1);
		T79f59(C, l1, l2);
		T79f60(C, a1, l1);
		T79f61(C, a2, l1);
		((T79*)(C))->a17 = ((T6)((((T79*)(C))->a17)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [STRING_8, STRING_8].key_storage_put */
void T79f61(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T79*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].slots_put */
void T79f59(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T79*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].clashes_put */
void T79f58(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T79*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].slots_item */
T6 T79f36(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T79*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].clashes_item */
T6 T79f34(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T79*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].hash_position */
T6 T79f35(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T79*)(C))->a5)));
	} else {
		R = ((T79*)(C))->a5;
	}
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].resize */
void T79f57(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T79f52(C);
	l1 = (T79f21(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T79f64(C, t1);
	l2 = ((T79*)(C))->a5;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T79f59(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T79*)(C))->a5 = l1;
	l2 = ((T79*)(C))->a6;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T79f34(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T79f30(C, l2));
			l3 = (T79f35(C, t3));
			t1 = (T79f36(C, l3));
			T79f58(C, t1, l2);
			T79f59(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T79f65(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T79f66(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T79f67(C, t1);
	((T79*)(C))->a4 = a1;
	((T79*)(C))->a8 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].clashes_resize */
void T79f67(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T79f41(C));
	((T79*)(C))->a14 = (T65f1(GE_void(t1), ((T79*)(C))->a14, a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].key_storage_resize */
void T79f66(T0* C, T6 a1)
{
	((T79*)(C))->a13 = (T66f1(GE_void(((T79*)(C))->a12), ((T79*)(C))->a13, a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].item_storage_resize */
void T79f65(T0* C, T6 a1)
{
	((T79*)(C))->a11 = (T66f1(GE_void(((T79*)(C))->a10), ((T79*)(C))->a11, a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].key_storage_item */
T0* T79f30(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T79*)(C))->a13)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].slots_resize */
void T79f64(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T79f41(C));
	((T79*)(C))->a15 = (T65f1(GE_void(t1), ((T79*)(C))->a15, a1));
}

/* DS_HASH_TABLE [STRING_8, STRING_8].new_capacity */
T6 T79f32(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].item_storage_put */
void T79f60(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T79*)(C))->a11)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [STRING_8, STRING_8].search_position */
void T79f56(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T79*)(C))->a8 = (T79f36(C, ((T79*)(C))->a5));
		((T79*)(C))->a18 = ((T79*)(C))->a5;
		((T79*)(C))->a19 = (T6)(GE_int32(0));
	} else {
		l4 = ((T79*)(C))->a1;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T79*)(C))->a8)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T79f30(C, ((T79*)(C))->a8));
				t3 = (((((T0*)(GE_void(l4)))->id==59)?T59f1(l4, a1, t2):T423f1(l4, a1, t2)));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (((((T0*)(GE_void(l4)))->id==59)?T59f1(l4, a1, l3):T423f1(l4, a1, l3)));
			}
			if (t1) {
				((T79*)(C))->a18 = (T79f35(C, a1));
				l1 = (T79f36(C, ((T79*)(C))->a18));
				((T79*)(C))->a8 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T79f30(C, l1));
					t1 = (((((T0*)(GE_void(l4)))->id==59)?T59f1(l4, a1, t2):T423f1(l4, a1, t2)));
					if (t1) {
						((T79*)(C))->a8 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T79f34(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T79*)(C))->a19 = l2;
			}
		} else {
			t1 = ((((T79*)(C))->a8)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T79f30(C, ((T79*)(C))->a8));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T79*)(C))->a18 = (T79f35(C, a1));
				l1 = (T79f36(C, ((T79*)(C))->a18));
				((T79*)(C))->a8 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T79f30(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T79*)(C))->a8 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T79f34(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T79*)(C))->a19 = l2;
			}
		}
	}
}

/* GEANT_GETEST_TASK.define_element_name */
unsigned char ge107os8735 = '\0';
T0* ge107ov8735;
T0* T290f27(T0* C)
{
	T0* R = 0;
	if (ge107os8735) {
		return ge107ov8735;
	} else {
		ge107os8735 = '\1';
	}
	R = GE_ms("define", 6);
	ge107ov8735 = R;
	return R;
}

/* GEANT_GETEST_TASK.true_attribute_value */
T0* T290f26(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_GETEST_TASK.string_ */
T0* T290f25(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_GETEST_TASK.elements_by_name */
T0* T290f24(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T290*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T290f25(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_GETEST_TASK.attribute_element_name */
unsigned char ge107os8734 = '\0';
T0* ge107ov8734;
T0* T290f23(T0* C)
{
	T0* R = 0;
	if (ge107os8734) {
		return ge107ov8734;
	} else {
		ge107os8734 = '\1';
	}
	R = GE_ms("attribute", 9);
	ge107ov8734 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_abort */
void T369f30(T0* C, T1 a1)
{
	((T369*)(C))->a13 = a1;
}

/* GEANT_GETEST_TASK.abort_attribute_name */
unsigned char ge107os8733 = '\0';
T0* ge107ov8733;
T0* T290f22(T0* C)
{
	T0* R = 0;
	if (ge107os8733) {
		return ge107ov8733;
	} else {
		ge107os8733 = '\1';
	}
	R = GE_ms("abort", 5);
	ge107ov8733 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_execution */
void T369f29(T0* C, T1 a1)
{
	((T369*)(C))->a7 = a1;
}

/* GEANT_GETEST_TASK.execution_attribute_name */
unsigned char ge107os8732 = '\0';
T0* ge107ov8732;
T0* T290f21(T0* C)
{
	T0* R = 0;
	if (ge107os8732) {
		return ge107ov8732;
	} else {
		ge107os8732 = '\1';
	}
	R = GE_ms("execution", 9);
	ge107ov8732 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_compilation */
void T369f28(T0* C, T1 a1)
{
	((T369*)(C))->a6 = a1;
}

/* GEANT_GETEST_TASK.compilation_attribute_name */
unsigned char ge107os8731 = '\0';
T0* ge107ov8731;
T0* T290f20(T0* C)
{
	T0* R = 0;
	if (ge107os8731) {
		return ge107ov8731;
	} else {
		ge107os8731 = '\1';
	}
	R = GE_ms("compilation", 11);
	ge107ov8731 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_generation */
void T369f27(T0* C, T1 a1)
{
	((T369*)(C))->a5 = a1;
}

/* GEANT_GETEST_TASK.generation_attribute_name */
unsigned char ge107os8730 = '\0';
T0* ge107ov8730;
T0* T290f19(T0* C)
{
	T0* R = 0;
	if (ge107os8730) {
		return ge107ov8730;
	} else {
		ge107os8730 = '\1';
	}
	R = GE_ms("generation", 10);
	ge107ov8730 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_default_test_included */
void T369f26(T0* C, T1 a1)
{
	((T369*)(C))->a12 = a1;
}

/* GEANT_GETEST_TASK.default_test_attribute_name */
unsigned char ge107os8729 = '\0';
T0* ge107ov8729;
T0* T290f18(T0* C)
{
	T0* R = 0;
	if (ge107os8729) {
		return ge107ov8729;
	} else {
		ge107os8729 = '\1';
	}
	R = GE_ms("default_test", 12);
	ge107ov8729 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_feature_regexp */
void T369f25(T0* C, T0* a1)
{
	((T369*)(C))->a11 = a1;
}

/* GEANT_GETEST_TASK.feature_attribute_name */
unsigned char ge107os8728 = '\0';
T0* ge107ov8728;
T0* T290f17(T0* C)
{
	T0* R = 0;
	if (ge107os8728) {
		return ge107ov8728;
	} else {
		ge107os8728 = '\1';
	}
	R = GE_ms("feature", 7);
	ge107ov8728 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_class_regexp */
void T369f24(T0* C, T0* a1)
{
	((T369*)(C))->a10 = a1;
}

/* GEANT_GETEST_TASK.class_attribute_name */
unsigned char ge107os8727 = '\0';
T0* ge107ov8727;
T0* T290f16(T0* C)
{
	T0* R = 0;
	if (ge107os8727) {
		return ge107ov8727;
	} else {
		ge107os8727 = '\1';
	}
	R = GE_ms("class", 5);
	ge107ov8727 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_compile */
void T369f23(T0* C, T0* a1)
{
	((T369*)(C))->a9 = a1;
}

/* GEANT_GETEST_TASK.compile_attribute_name */
unsigned char ge107os8726 = '\0';
T0* ge107ov8726;
T0* T290f15(T0* C)
{
	T0* R = 0;
	if (ge107os8726) {
		return ge107ov8726;
	} else {
		ge107os8726 = '\1';
	}
	R = GE_ms("compile", 7);
	ge107ov8726 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_config_filename */
void T369f22(T0* C, T0* a1)
{
	((T369*)(C))->a4 = a1;
}

/* GEANT_GETEST_TASK.attribute_value */
T0* T290f14(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T290*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T290f33(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T290f33(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T290f5(C));
		t4 = (((T22*)(GE_void(((T290*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T290f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GETEST_TASK.project_variables_resolver */
T0* T290f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_GETEST_TASK.target_arguments_stack */
T0* T290f33(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_GETEST_TASK.config_filename_attribute_name */
unsigned char ge107os8725 = '\0';
T0* ge107ov8725;
T0* T290f13(T0* C)
{
	T0* R = 0;
	if (ge107os8725) {
		return ge107ov8725;
	} else {
		ge107os8725 = '\1';
	}
	R = GE_ms("config", 6);
	ge107ov8725 = R;
	return R;
}

/* GEANT_GETEST_COMMAND.set_verbose */
void T369f21(T0* C, T1 a1)
{
	((T369*)(C))->a8 = a1;
}

/* GEANT_GETEST_TASK.boolean_value */
T1 T290f12(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T290f14(C, a1));
	t1 = (T290f25(C));
	t2 = (T290f26(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T290f25(C));
		t2 = (T290f32(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T290f30(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T290f30(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T290f30(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T290f30(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T290f30(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GETEST_TASK.std */
T0* T290f30(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_GETEST_TASK.false_attribute_value */
T0* T290f32(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_GETEST_TASK.has_attribute */
T1 T290f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T290*)(C))->a3), a1));
	return R;
}

/* GEANT_GETEST_TASK.verbose_attribute_name */
unsigned char ge107os8724 = '\0';
T0* ge107ov8724;
T0* T290f11(T0* C)
{
	T0* R = 0;
	if (ge107os8724) {
		return ge107ov8724;
	} else {
		ge107os8724 = '\1';
	}
	R = GE_ms("verbose", 7);
	ge107ov8724 = R;
	return R;
}

/* GEANT_GETEST_TASK.task_make */
void T290f39(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T290f41(C, a1);
	t1 = (((T369*)(GE_void(a1)))->a3);
	T290f42(C, t1, a2);
}

/* GEANT_GETEST_TASK.interpreting_element_make */
void T290f42(T0* C, T0* a1, T0* a2)
{
	T290f43(C, a2);
	T290f44(C, a1);
}

/* GEANT_GETEST_TASK.set_project */
void T290f44(T0* C, T0* a1)
{
	((T290*)(C))->a2 = a1;
}

/* GEANT_GETEST_TASK.element_make */
void T290f43(T0* C, T0* a1)
{
	T290f45(C, a1);
}

/* GEANT_GETEST_TASK.set_xml_element */
void T290f45(T0* C, T0* a1)
{
	((T290*)(C))->a3 = a1;
}

/* GEANT_GETEST_TASK.set_command */
void T290f41(T0* C, T0* a1)
{
	((T290*)(C))->a1 = a1;
}

/* GEANT_GETEST_COMMAND.make */
T0* T369c20(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T369));
	*(T369*)C = GE_default369;
	T369f20p1(C, a1);
	((T369*)(C))->a2 = T79c45((T6)(GE_int32(10)));
	l1 = T59c3();
	T79f43(GE_void(((T369*)(C))->a2), l1);
	((T369*)(C))->a5 = EIF_TRUE;
	((T369*)(C))->a6 = EIF_TRUE;
	((T369*)(C))->a7 = EIF_TRUE;
	return C;
}

/* GEANT_GETEST_COMMAND.make */
void T369f20p1(T0* C, T0* a1)
{
	T369f32(C, a1);
}

/* GEANT_GETEST_COMMAND.set_project */
void T369f32(T0* C, T0* a1)
{
	((T369*)(C))->a3 = a1;
}

/* GEANT_TARGET.getest_task_name */
unsigned char ge130os2273 = '\0';
T0* ge130ov2273;
T0* T26f58(T0* C)
{
	T0* R = 0;
	if (ge130os2273) {
		return ge130ov2273;
	} else {
		ge130os2273 = '\1';
	}
	R = GE_ms("getest", 6);
	ge130ov2273 = R;
	return R;
}

/* GEANT_GEPP_TASK.make */
T0* T289c32(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T289));
	*(T289*)C = GE_default289;
	((T289*)(C))->a1 = T368c19(a1);
	T289f34(C, ((T289*)(C))->a1, a2);
	t1 = (T289f11(C));
	t2 = (T289f8(C, t1));
	if (t2) {
		t1 = (T289f11(C));
		l1 = (T289f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T368f20(GE_void(((T289*)(C))->a1), l1);
		}
	}
	t1 = (T289f13(C));
	t2 = (T289f8(C, t1));
	if (t2) {
		t1 = (T289f13(C));
		l1 = (T289f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T368f21(GE_void(((T289*)(C))->a1), l1);
		}
	}
	t1 = (T289f14(C));
	t2 = (T289f8(C, t1));
	if (t2) {
		t1 = (T289f14(C));
		l2 = (T289f15(C, t1));
		T368f22(GE_void(((T289*)(C))->a1), l2);
	}
	t1 = (T289f16(C));
	l3 = (T289f17(C, t1));
	l4 = (T115f5(GE_void(l3)));
	T116f8(GE_void(l4));
	t2 = (((T116*)(GE_void(l4)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l4)));
		l5 = T365c16(((T289*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l5)));
		if (t2) {
			t2 = (T365f10(GE_void(l5)));
		}
		if (t2) {
			t1 = (T365f4(GE_void(l5)));
			t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		}
		if (t2) {
			t1 = (((T368*)(GE_void(((T289*)(C))->a1)))->a2);
			t4 = (T365f4(GE_void(l5)));
			T71f27(GE_void(t1), t4);
		}
		T116f9(GE_void(l4));
		t2 = (((T116*)(GE_void(l4)))->a1);
	}
	t1 = (T289f18(C));
	t2 = (T289f8(C, t1));
	if (t2) {
		t1 = (T289f18(C));
		l1 = (T289f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T368f23(GE_void(((T289*)(C))->a1), l1);
		}
	}
	t1 = (T289f19(C));
	t2 = (T289f8(C, t1));
	if (t2) {
		t1 = (T289f19(C));
		t2 = (T289f15(C, t1));
		T368f24(GE_void(((T289*)(C))->a1), t2);
	}
	t1 = (T289f20(C));
	l6 = (T96f16(GE_void(((T289*)(C))->a3), t1));
	t2 = ((l6)!=(EIF_VOID));
	if (t2) {
		l7 = T359c29(((T289*)(C))->a2, l6);
		t1 = (((T359*)(GE_void(l7)))->a1);
		T368f25(GE_void(((T289*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_GEPP_COMMAND.set_fileset */
void T368f25(T0* C, T0* a1)
{
	((T368*)(C))->a6 = a1;
}

/* GEANT_GEPP_TASK.fileset_element_name */
unsigned char ge106os8699 = '\0';
T0* ge106ov8699;
T0* T289f20(T0* C)
{
	T0* R = 0;
	if (ge106os8699) {
		return ge106ov8699;
	} else {
		ge106os8699 = '\1';
	}
	R = GE_ms("fileset", 7);
	ge106ov8699 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_force */
void T368f24(T0* C, T1 a1)
{
	((T368*)(C))->a9 = a1;
}

/* GEANT_GEPP_TASK.force_attribute_name */
unsigned char ge106os8698 = '\0';
T0* ge106ov8698;
T0* T289f19(T0* C)
{
	T0* R = 0;
	if (ge106os8698) {
		return ge106ov8698;
	} else {
		ge106os8698 = '\1';
	}
	R = GE_ms("force", 5);
	ge106ov8698 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_to_directory */
void T368f23(T0* C, T0* a1)
{
	((T368*)(C))->a8 = a1;
}

/* GEANT_GEPP_TASK.to_directory_attribute_name */
unsigned char ge106os8697 = '\0';
T0* ge106ov8697;
T0* T289f18(T0* C)
{
	T0* R = 0;
	if (ge106os8697) {
		return ge106ov8697;
	} else {
		ge106os8697 = '\1';
	}
	R = GE_ms("to_directory", 12);
	ge106ov8697 = R;
	return R;
}

/* GEANT_GEPP_TASK.elements_by_name */
T0* T289f17(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T289*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T289f26(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_GEPP_TASK.string_ */
T0* T289f26(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_GEPP_TASK.define_element_name */
unsigned char ge106os8696 = '\0';
T0* ge106ov8696;
T0* T289f16(T0* C)
{
	T0* R = 0;
	if (ge106os8696) {
		return ge106ov8696;
	} else {
		ge106os8696 = '\1';
	}
	R = GE_ms("define", 6);
	ge106ov8696 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_empty_lines */
void T368f22(T0* C, T1 a1)
{
	((T368*)(C))->a7 = a1;
}

/* GEANT_GEPP_TASK.boolean_value */
T1 T289f15(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T289f12(C, a1));
	t1 = (T289f26(C));
	t2 = (T289f27(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T289f26(C));
		t2 = (T289f28(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T289f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T289f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T289f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T289f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T289f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEPP_TASK.std */
T0* T289f23(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_GEPP_TASK.false_attribute_value */
T0* T289f28(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_GEPP_TASK.true_attribute_value */
T0* T289f27(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_GEPP_TASK.lines_attribute_name */
unsigned char ge106os8695 = '\0';
T0* ge106ov8695;
T0* T289f14(T0* C)
{
	T0* R = 0;
	if (ge106os8695) {
		return ge106ov8695;
	} else {
		ge106os8695 = '\1';
	}
	R = GE_ms("lines", 5);
	ge106ov8695 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_output_filename */
void T368f21(T0* C, T0* a1)
{
	((T368*)(C))->a5 = a1;
}

/* GEANT_GEPP_TASK.output_filename_attribute_name */
unsigned char ge106os8694 = '\0';
T0* ge106ov8694;
T0* T289f13(T0* C)
{
	T0* R = 0;
	if (ge106os8694) {
		return ge106ov8694;
	} else {
		ge106os8694 = '\1';
	}
	R = GE_ms("output", 6);
	ge106ov8694 = R;
	return R;
}

/* GEANT_GEPP_COMMAND.set_input_filename */
void T368f20(T0* C, T0* a1)
{
	((T368*)(C))->a4 = a1;
}

/* GEANT_GEPP_TASK.attribute_value */
T0* T289f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T289*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T289f25(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T289f25(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T289f5(C));
		t4 = (((T22*)(GE_void(((T289*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T289f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEPP_TASK.project_variables_resolver */
T0* T289f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_GEPP_TASK.target_arguments_stack */
T0* T289f25(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_GEPP_TASK.has_attribute */
T1 T289f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T289*)(C))->a3), a1));
	return R;
}

/* GEANT_GEPP_TASK.input_filename_attribute_name */
unsigned char ge106os8693 = '\0';
T0* ge106ov8693;
T0* T289f11(T0* C)
{
	T0* R = 0;
	if (ge106os8693) {
		return ge106ov8693;
	} else {
		ge106os8693 = '\1';
	}
	R = GE_ms("input", 5);
	ge106ov8693 = R;
	return R;
}

/* GEANT_GEPP_TASK.task_make */
void T289f34(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T289f36(C, a1);
	t1 = (((T368*)(GE_void(a1)))->a3);
	T289f37(C, t1, a2);
}

/* GEANT_GEPP_TASK.interpreting_element_make */
void T289f37(T0* C, T0* a1, T0* a2)
{
	T289f38(C, a2);
	T289f39(C, a1);
}

/* GEANT_GEPP_TASK.set_project */
void T289f39(T0* C, T0* a1)
{
	((T289*)(C))->a2 = a1;
}

/* GEANT_GEPP_TASK.element_make */
void T289f38(T0* C, T0* a1)
{
	T289f40(C, a1);
}

/* GEANT_GEPP_TASK.set_xml_element */
void T289f40(T0* C, T0* a1)
{
	((T289*)(C))->a3 = a1;
}

/* GEANT_GEPP_TASK.set_command */
void T289f36(T0* C, T0* a1)
{
	((T289*)(C))->a1 = a1;
}

/* GEANT_GEPP_COMMAND.make */
T0* T368c19(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T368));
	*(T368*)C = GE_default368;
	T368f19p1(C, a1);
	((T368*)(C))->a4 = GE_ms("", 0);
	((T368*)(C))->a5 = GE_ms("", 0);
	((T368*)(C))->a2 = T71c23((T6)(GE_int32(10)));
	return C;
}

/* GEANT_GEPP_COMMAND.make */
void T368f19p1(T0* C, T0* a1)
{
	T368f27(C, a1);
}

/* GEANT_GEPP_COMMAND.set_project */
void T368f27(T0* C, T0* a1)
{
	((T368*)(C))->a3 = a1;
}

/* GEANT_TARGET.gepp_task_name */
unsigned char ge130os2272 = '\0';
T0* ge130ov2272;
T0* T26f57(T0* C)
{
	T0* R = 0;
	if (ge130os2272) {
		return ge130ov2272;
	} else {
		ge130os2272 = '\1';
	}
	R = GE_ms("gepp", 4);
	ge130ov2272 = R;
	return R;
}

/* GEANT_GEYACC_TASK.make */
T0* T288c32(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T288));
	*(T288*)C = GE_default288;
	((T288*)(C))->a1 = T367c17(a1);
	T288f34(C, ((T288*)(C))->a1, a2);
	t1 = (T288f11(C));
	t2 = (T288f8(C, t1));
	if (t2) {
		t1 = (T288f11(C));
		t2 = (T288f12(C, t1));
		T367f18(GE_void(((T288*)(C))->a1), t2);
	}
	t1 = (T288f13(C));
	t2 = (T288f8(C, t1));
	if (t2) {
		t1 = (T288f13(C));
		l1 = (T288f14(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T367f19(GE_void(((T288*)(C))->a1), l1);
		}
	}
	t1 = (T288f15(C));
	t2 = (T288f8(C, t1));
	if (t2) {
		t1 = (T288f15(C));
		t2 = (T288f12(C, t1));
		T367f20(GE_void(((T288*)(C))->a1), t2);
	}
	t1 = (T288f16(C));
	t2 = (T288f8(C, t1));
	if (t2) {
		t1 = (T288f16(C));
		t2 = (T288f12(C, t1));
		T367f21(GE_void(((T288*)(C))->a1), t2);
	}
	t1 = (T288f17(C));
	t2 = (T288f8(C, t1));
	if (t2) {
		t1 = (T288f17(C));
		l1 = (T288f14(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T367f22(GE_void(((T288*)(C))->a1), l1);
		}
	}
	t1 = (T288f18(C));
	t2 = (T288f8(C, t1));
	if (t2) {
		t1 = (T288f18(C));
		l1 = (T288f14(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T367f23(GE_void(((T288*)(C))->a1), l1);
		}
	}
	t1 = (T288f19(C));
	t2 = (T288f8(C, t1));
	if (t2) {
		t1 = (T288f19(C));
		l1 = (T288f14(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T367f24(GE_void(((T288*)(C))->a1), l1);
		}
	}
	t1 = (T288f20(C));
	t2 = (T288f8(C, t1));
	if (t2) {
		t1 = (T288f20(C));
		l1 = (T288f14(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T367f25(GE_void(((T288*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_GEYACC_COMMAND.set_input_filename */
void T367f25(T0* C, T0* a1)
{
	((T367*)(C))->a3 = a1;
}

/* GEANT_GEYACC_TASK.input_filename_attribute_name */
unsigned char ge109os8668 = '\0';
T0* ge109ov8668;
T0* T288f20(T0* C)
{
	T0* R = 0;
	if (ge109os8668) {
		return ge109ov8668;
	} else {
		ge109os8668 = '\1';
	}
	R = GE_ms("input", 5);
	ge109ov8668 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_output_filename */
void T367f24(T0* C, T0* a1)
{
	((T367*)(C))->a4 = a1;
}

/* GEANT_GEYACC_TASK.output_filename_attribute_name */
unsigned char ge109os8667 = '\0';
T0* ge109ov8667;
T0* T288f19(T0* C)
{
	T0* R = 0;
	if (ge109os8667) {
		return ge109ov8667;
	} else {
		ge109os8667 = '\1';
	}
	R = GE_ms("output", 6);
	ge109ov8667 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_tokens_filename */
void T367f23(T0* C, T0* a1)
{
	((T367*)(C))->a10 = a1;
}

/* GEANT_GEYACC_TASK.tokens_filename_attribute_name */
unsigned char ge109os8666 = '\0';
T0* ge109ov8666;
T0* T288f18(T0* C)
{
	T0* R = 0;
	if (ge109os8666) {
		return ge109ov8666;
	} else {
		ge109os8666 = '\1';
	}
	R = GE_ms("tokens_file", 11);
	ge109ov8666 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_tokens_classname */
void T367f22(T0* C, T0* a1)
{
	((T367*)(C))->a9 = a1;
}

/* GEANT_GEYACC_TASK.tokens_classname_attribute_name */
unsigned char ge109os8665 = '\0';
T0* ge109ov8665;
T0* T288f17(T0* C)
{
	T0* R = 0;
	if (ge109os8665) {
		return ge109ov8665;
	} else {
		ge109os8665 = '\1';
	}
	R = GE_ms("tokens", 6);
	ge109ov8665 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_new_typing */
void T367f21(T0* C, T1 a1)
{
	((T367*)(C))->a8 = a1;
}

/* GEANT_GEYACC_TASK.new_typing_attribute_name */
unsigned char ge109os8670 = '\0';
T0* ge109ov8670;
T0* T288f16(T0* C)
{
	T0* R = 0;
	if (ge109os8670) {
		return ge109ov8670;
	} else {
		ge109os8670 = '\1';
	}
	R = GE_ms("new_typing", 10);
	ge109ov8670 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_old_typing */
void T367f20(T0* C, T1 a1)
{
	((T367*)(C))->a7 = a1;
}

/* GEANT_GEYACC_TASK.old_typing_attribute_name */
unsigned char ge109os8669 = '\0';
T0* ge109ov8669;
T0* T288f15(T0* C)
{
	T0* R = 0;
	if (ge109os8669) {
		return ge109ov8669;
	} else {
		ge109os8669 = '\1';
	}
	R = GE_ms("old_typing", 10);
	ge109ov8669 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_verbose_filename */
void T367f19(T0* C, T0* a1)
{
	((T367*)(C))->a6 = a1;
}

/* GEANT_GEYACC_TASK.attribute_value */
T0* T288f14(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T288*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T288f28(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T288f28(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T288f5(C));
		t4 = (((T22*)(GE_void(((T288*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T288f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEYACC_TASK.project_variables_resolver */
T0* T288f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_GEYACC_TASK.target_arguments_stack */
T0* T288f28(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_GEYACC_TASK.verbose_filename_attribute_name */
unsigned char ge109os8664 = '\0';
T0* ge109ov8664;
T0* T288f13(T0* C)
{
	T0* R = 0;
	if (ge109os8664) {
		return ge109ov8664;
	} else {
		ge109os8664 = '\1';
	}
	R = GE_ms("verbose", 7);
	ge109ov8664 = R;
	return R;
}

/* GEANT_GEYACC_COMMAND.set_separate_actions */
void T367f18(T0* C, T1 a1)
{
	((T367*)(C))->a5 = a1;
}

/* GEANT_GEYACC_TASK.boolean_value */
T1 T288f12(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T288f14(C, a1));
	t1 = (T288f25(C));
	t2 = (T288f26(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T288f25(C));
		t2 = (T288f27(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T288f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T288f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T288f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T288f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T288f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEYACC_TASK.std */
T0* T288f23(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_GEYACC_TASK.false_attribute_value */
T0* T288f27(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_GEYACC_TASK.true_attribute_value */
T0* T288f26(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_GEYACC_TASK.string_ */
T0* T288f25(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_GEYACC_TASK.has_attribute */
T1 T288f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T288*)(C))->a3), a1));
	return R;
}

/* GEANT_GEYACC_TASK.separate_actions_attribute_name */
unsigned char ge109os8663 = '\0';
T0* ge109ov8663;
T0* T288f11(T0* C)
{
	T0* R = 0;
	if (ge109os8663) {
		return ge109ov8663;
	} else {
		ge109os8663 = '\1';
	}
	R = GE_ms("separate_actions", 16);
	ge109ov8663 = R;
	return R;
}

/* GEANT_GEYACC_TASK.task_make */
void T288f34(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T288f36(C, a1);
	t1 = (((T367*)(GE_void(a1)))->a2);
	T288f37(C, t1, a2);
}

/* GEANT_GEYACC_TASK.interpreting_element_make */
void T288f37(T0* C, T0* a1, T0* a2)
{
	T288f38(C, a2);
	T288f39(C, a1);
}

/* GEANT_GEYACC_TASK.set_project */
void T288f39(T0* C, T0* a1)
{
	((T288*)(C))->a2 = a1;
}

/* GEANT_GEYACC_TASK.element_make */
void T288f38(T0* C, T0* a1)
{
	T288f40(C, a1);
}

/* GEANT_GEYACC_TASK.set_xml_element */
void T288f40(T0* C, T0* a1)
{
	((T288*)(C))->a3 = a1;
}

/* GEANT_GEYACC_TASK.set_command */
void T288f36(T0* C, T0* a1)
{
	((T288*)(C))->a1 = a1;
}

/* GEANT_GEYACC_COMMAND.make */
T0* T367c17(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T367));
	*(T367*)C = GE_default367;
	T367f17p1(C, a1);
	((T367*)(C))->a4 = GE_ms("", 0);
	((T367*)(C))->a3 = GE_ms("", 0);
	return C;
}

/* GEANT_GEYACC_COMMAND.make */
void T367f17p1(T0* C, T0* a1)
{
	T367f27(C, a1);
}

/* GEANT_GEYACC_COMMAND.set_project */
void T367f27(T0* C, T0* a1)
{
	((T367*)(C))->a2 = a1;
}

/* GEANT_TARGET.geyacc_task_name */
unsigned char ge130os2271 = '\0';
T0* ge130ov2271;
T0* T26f56(T0* C)
{
	T0* R = 0;
	if (ge130os2271) {
		return ge130ov2271;
	} else {
		ge130os2271 = '\1';
	}
	R = GE_ms("geyacc", 6);
	ge130ov2271 = R;
	return R;
}

/* GEANT_GELEX_TASK.make */
T0* T287c35(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T287));
	*(T287*)C = GE_default287;
	((T287*)(C))->a1 = T366c20(a1);
	T287f37(C, ((T287*)(C))->a1, a2);
	t1 = (T287f11(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f11(C));
		l1 = (T287f12(C, t1));
		t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f14(l1):T194f45(l1)));
		if (t2) {
			T366f21(GE_void(((T287*)(C))->a1), l1);
		}
	}
	t1 = (T287f13(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f13(C));
		t2 = (T287f14(C, t1));
		T366f22(GE_void(((T287*)(C))->a1), t2);
	}
	t1 = (T287f15(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f15(C));
		t2 = (T287f14(C, t1));
		T366f23(GE_void(((T287*)(C))->a1), t2);
	}
	t1 = (T287f16(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f16(C));
		t2 = (T287f14(C, t1));
		T366f24(GE_void(((T287*)(C))->a1), t2);
	}
	t1 = (T287f17(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f17(C));
		t2 = (T287f14(C, t1));
		T366f25(GE_void(((T287*)(C))->a1), t2);
	}
	t1 = (T287f18(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f18(C));
		t2 = (T287f14(C, t1));
		T366f26(GE_void(((T287*)(C))->a1), t2);
	}
	t1 = (T287f19(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f19(C));
		t2 = (T287f14(C, t1));
		T366f27(GE_void(((T287*)(C))->a1), t2);
	}
	t1 = (T287f20(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f20(C));
		t2 = (T287f14(C, t1));
		T366f28(GE_void(((T287*)(C))->a1), t2);
	}
	t1 = (T287f21(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f21(C));
		t2 = (T287f14(C, t1));
		T366f29(GE_void(((T287*)(C))->a1), t2);
	}
	t1 = (T287f22(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f22(C));
		l1 = (T287f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T366f30(GE_void(((T287*)(C))->a1), l1);
		}
	}
	t1 = (T287f23(C));
	t2 = (T287f8(C, t1));
	if (t2) {
		t1 = (T287f23(C));
		l1 = (T287f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T366f31(GE_void(((T287*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_GELEX_COMMAND.set_input_filename */
void T366f31(T0* C, T0* a1)
{
	((T366*)(C))->a3 = a1;
}

/* GEANT_GELEX_TASK.input_filename_attribute_name */
unsigned char ge105os8634 = '\0';
T0* ge105ov8634;
T0* T287f23(T0* C)
{
	T0* R = 0;
	if (ge105os8634) {
		return ge105ov8634;
	} else {
		ge105os8634 = '\1';
	}
	R = GE_ms("input", 5);
	ge105ov8634 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_output_filename */
void T366f30(T0* C, T0* a1)
{
	((T366*)(C))->a6 = a1;
}

/* GEANT_GELEX_TASK.output_filename_attribute_name */
unsigned char ge105os8633 = '\0';
T0* ge105ov8633;
T0* T287f22(T0* C)
{
	T0* R = 0;
	if (ge105os8633) {
		return ge105ov8633;
	} else {
		ge105os8633 = '\1';
	}
	R = GE_ms("output", 6);
	ge105ov8633 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_separate_actions */
void T366f29(T0* C, T1 a1)
{
	((T366*)(C))->a13 = a1;
}

/* GEANT_GELEX_TASK.separate_actions_attribute_name */
unsigned char ge105os8632 = '\0';
T0* ge105ov8632;
T0* T287f21(T0* C)
{
	T0* R = 0;
	if (ge105os8632) {
		return ge105ov8632;
	} else {
		ge105os8632 = '\1';
	}
	R = GE_ms("separate_actions", 16);
	ge105ov8632 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_no_warn */
void T366f28(T0* C, T1 a1)
{
	((T366*)(C))->a12 = a1;
}

/* GEANT_GELEX_TASK.no_warn_attribute_name */
unsigned char ge105os8631 = '\0';
T0* ge105ov8631;
T0* T287f20(T0* C)
{
	T0* R = 0;
	if (ge105os8631) {
		return ge105ov8631;
	} else {
		ge105os8631 = '\1';
	}
	R = GE_ms("no_warn", 7);
	ge105ov8631 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_no_default */
void T366f27(T0* C, T1 a1)
{
	((T366*)(C))->a11 = a1;
}

/* GEANT_GELEX_TASK.no_default_attribute_name */
unsigned char ge105os8630 = '\0';
T0* ge105ov8630;
T0* T287f19(T0* C)
{
	T0* R = 0;
	if (ge105os8630) {
		return ge105ov8630;
	} else {
		ge105os8630 = '\1';
	}
	R = GE_ms("no_default", 10);
	ge105ov8630 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_meta_ecs */
void T366f26(T0* C, T1 a1)
{
	((T366*)(C))->a5 = a1;
}

/* GEANT_GELEX_TASK.meta_ecs_attribute_name */
unsigned char ge105os8629 = '\0';
T0* ge105ov8629;
T0* T287f18(T0* C)
{
	T0* R = 0;
	if (ge105os8629) {
		return ge105ov8629;
	} else {
		ge105os8629 = '\1';
	}
	R = GE_ms("meta_ecs", 8);
	ge105ov8629 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_case_insensitive */
void T366f25(T0* C, T1 a1)
{
	((T366*)(C))->a10 = a1;
}

/* GEANT_GELEX_TASK.case_insensitive_attribute_name */
unsigned char ge105os8628 = '\0';
T0* ge105ov8628;
T0* T287f17(T0* C)
{
	T0* R = 0;
	if (ge105os8628) {
		return ge105ov8628;
	} else {
		ge105os8628 = '\1';
	}
	R = GE_ms("case_insensitive", 16);
	ge105ov8628 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_full */
void T366f24(T0* C, T1 a1)
{
	((T366*)(C))->a4 = a1;
}

/* GEANT_GELEX_TASK.full_attribute_name */
unsigned char ge105os8627 = '\0';
T0* ge105ov8627;
T0* T287f16(T0* C)
{
	T0* R = 0;
	if (ge105os8627) {
		return ge105ov8627;
	} else {
		ge105os8627 = '\1';
	}
	R = GE_ms("full", 4);
	ge105ov8627 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_ecs */
void T366f23(T0* C, T1 a1)
{
	((T366*)(C))->a8 = a1;
}

/* GEANT_GELEX_TASK.ecs_attribute_name */
unsigned char ge105os8626 = '\0';
T0* ge105ov8626;
T0* T287f15(T0* C)
{
	T0* R = 0;
	if (ge105os8626) {
		return ge105ov8626;
	} else {
		ge105os8626 = '\1';
	}
	R = GE_ms("ecs", 3);
	ge105ov8626 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_backup */
void T366f22(T0* C, T1 a1)
{
	((T366*)(C))->a9 = a1;
}

/* GEANT_GELEX_TASK.boolean_value */
T1 T287f14(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T287f12(C, a1));
	t1 = (T287f29(C));
	t2 = (T287f30(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T287f29(C));
		t2 = (T287f31(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T287f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T287f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T287f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T287f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T287f26(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GELEX_TASK.std */
T0* T287f26(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_GELEX_TASK.false_attribute_value */
T0* T287f31(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_GELEX_TASK.true_attribute_value */
T0* T287f30(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_GELEX_TASK.string_ */
T0* T287f29(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_GELEX_TASK.backup_attribute_name */
unsigned char ge105os8625 = '\0';
T0* ge105ov8625;
T0* T287f13(T0* C)
{
	T0* R = 0;
	if (ge105os8625) {
		return ge105ov8625;
	} else {
		ge105os8625 = '\1';
	}
	R = GE_ms("backup", 6);
	ge105ov8625 = R;
	return R;
}

/* GEANT_GELEX_COMMAND.set_size */
void T366f21(T0* C, T0* a1)
{
	((T366*)(C))->a7 = a1;
}

/* GEANT_GELEX_TASK.attribute_value */
T0* T287f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T287*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T287f28(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T287f28(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T287f5(C));
		t4 = (((T22*)(GE_void(((T287*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T287f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GELEX_TASK.project_variables_resolver */
T0* T287f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_GELEX_TASK.target_arguments_stack */
T0* T287f28(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_GELEX_TASK.has_attribute */
T1 T287f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T287*)(C))->a3), a1));
	return R;
}

/* GEANT_GELEX_TASK.size_attribute_name */
unsigned char ge105os8624 = '\0';
T0* ge105ov8624;
T0* T287f11(T0* C)
{
	T0* R = 0;
	if (ge105os8624) {
		return ge105ov8624;
	} else {
		ge105os8624 = '\1';
	}
	R = GE_ms("size", 4);
	ge105ov8624 = R;
	return R;
}

/* GEANT_GELEX_TASK.task_make */
void T287f37(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T287f39(C, a1);
	t1 = (((T366*)(GE_void(a1)))->a2);
	T287f40(C, t1, a2);
}

/* GEANT_GELEX_TASK.interpreting_element_make */
void T287f40(T0* C, T0* a1, T0* a2)
{
	T287f41(C, a2);
	T287f42(C, a1);
}

/* GEANT_GELEX_TASK.set_project */
void T287f42(T0* C, T0* a1)
{
	((T287*)(C))->a2 = a1;
}

/* GEANT_GELEX_TASK.element_make */
void T287f41(T0* C, T0* a1)
{
	T287f43(C, a1);
}

/* GEANT_GELEX_TASK.set_xml_element */
void T287f43(T0* C, T0* a1)
{
	((T287*)(C))->a3 = a1;
}

/* GEANT_GELEX_TASK.set_command */
void T287f39(T0* C, T0* a1)
{
	((T287*)(C))->a1 = a1;
}

/* GEANT_GELEX_COMMAND.make */
T0* T366c20(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T366));
	*(T366*)C = GE_default366;
	T366f20p1(C, a1);
	((T366*)(C))->a6 = GE_ms("", 0);
	((T366*)(C))->a3 = GE_ms("", 0);
	((T366*)(C))->a7 = GE_ms("", 0);
	((T366*)(C))->a8 = EIF_TRUE;
	((T366*)(C))->a5 = EIF_TRUE;
	return C;
}

/* GEANT_GELEX_COMMAND.make */
void T366f20p1(T0* C, T0* a1)
{
	T366f33(C, a1);
}

/* GEANT_GELEX_COMMAND.set_project */
void T366f33(T0* C, T0* a1)
{
	((T366*)(C))->a2 = a1;
}

/* GEANT_TARGET.gelex_task_name */
unsigned char ge130os2270 = '\0';
T0* ge130ov2270;
T0* T26f55(T0* C)
{
	T0* R = 0;
	if (ge130os2270) {
		return ge130ov2270;
	} else {
		ge130os2270 = '\1';
	}
	R = GE_ms("gelex", 5);
	ge130ov2270 = R;
	return R;
}

/* GEANT_GEXACE_TASK.make */
T0* T286c33(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T286));
	*(T286*)C = GE_default286;
	((T286*)(C))->a1 = T364c20(a1);
	T286f35(C, ((T286*)(C))->a1, a2);
	t1 = (T286f11(C));
	t2 = (T286f8(C, t1));
	if (t2) {
		t1 = (T286f11(C));
		t2 = (T286f12(C, t1));
		T364f21(GE_void(((T286*)(C))->a1), t2);
	}
	t1 = (T286f13(C));
	t2 = (T286f8(C, t1));
	if (t2) {
		t1 = (T286f13(C));
		t2 = (T286f12(C, t1));
		T364f22(GE_void(((T286*)(C))->a1), t2);
	}
	t1 = (T286f14(C));
	t2 = (T286f8(C, t1));
	if (t2) {
		t1 = (T286f14(C));
		l2 = (T286f15(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T364f23(GE_void(((T286*)(C))->a1), l2);
		}
	}
	t1 = (T286f16(C));
	t2 = (T286f8(C, t1));
	if (t2) {
		t1 = (((T22*)(GE_void(((T286*)(C))->a2)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Obsolete attribute \'cluster\' found for task \'gexace\'.\n", 66),
GE_ms("Use attribute \'library\' instead.", 32));
		T22f24(GE_void(((T286*)(C))->a2), t1);
		t1 = (T286f17(C));
		l2 = (T286f15(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T364f24(GE_void(((T286*)(C))->a1), l2);
		}
	}
	t1 = (T286f17(C));
	t2 = (T286f8(C, t1));
	if (t2) {
		t1 = (T286f17(C));
		l2 = (T286f15(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T364f24(GE_void(((T286*)(C))->a1), l2);
		}
	}
	t1 = (T286f18(C));
	t2 = (T286f8(C, t1));
	if (t2) {
		t1 = (T286f18(C));
		l2 = (T286f15(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T364f25(GE_void(((T286*)(C))->a1), l2);
		}
	}
	t1 = (T286f19(C));
	t2 = (T286f8(C, t1));
	if (t2) {
		t1 = (T286f19(C));
		l2 = (T286f15(C, t1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T364f26(GE_void(((T286*)(C))->a1), l2);
		}
	}
	t1 = (T286f20(C));
	l3 = (T286f21(C, t1));
	l4 = (T115f5(GE_void(l3)));
	T116f8(GE_void(l4));
	t2 = (((T116*)(GE_void(l4)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l4)));
		l5 = T365c16(((T286*)(C))->a2, t1);
		t2 = (T365f7(GE_void(l5)));
		if (t2) {
			t2 = (T365f10(GE_void(l5)));
		}
		if (t2) {
			t2 = (T365f3(GE_void(l5)));
		}
		if (t2) {
			l1 = (T365f4(GE_void(l5)));
			l2 = (T365f5(GE_void(l5)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				t1 = (((T364*)(GE_void(((T286*)(C))->a1)))->a2);
				T79f68(GE_void(t1), l2, l1);
			}
		}
		T116f9(GE_void(l4));
		t2 = (((T116*)(GE_void(l4)))->a1);
	}
	return C;
}

/* DS_HASH_TABLE [STRING_8, STRING_8].force_last */
void T79f68(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T79f52(C);
	T79f56(C, a2);
	t1 = ((((T79*)(C))->a8)!=((T6)(GE_int32(0))));
	if (t1) {
		T79f60(C, a1, ((T79*)(C))->a8);
	} else {
		l1 = ((T6)((((T79*)(C))->a6)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T79*)(C))->a4));
		if (t1) {
			t2 = (T79f32(C, l1));
			T79f57(C, t2);
			l2 = (T79f35(C, a2));
		} else {
			l2 = ((T79*)(C))->a18;
		}
		t2 = (T79f36(C, l2));
		T79f58(C, t2, l1);
		T79f59(C, l1, l2);
		T79f60(C, a1, l1);
		T79f61(C, a2, l1);
		((T79*)(C))->a6 = l1;
		((T79*)(C))->a17 = ((T6)((((T79*)(C))->a17)+((T6)(GE_int32(1)))));
	}
}

/* GEANT_GEXACE_TASK.elements_by_name */
T0* T286f21(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T286*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T286f26(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_GEXACE_TASK.string_ */
T0* T286f26(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_GEXACE_TASK.define_element_name */
unsigned char ge108os8600 = '\0';
T0* ge108ov8600;
T0* T286f20(T0* C)
{
	T0* R = 0;
	if (ge108os8600) {
		return ge108ov8600;
	} else {
		ge108os8600 = '\1';
	}
	R = GE_ms("define", 6);
	ge108ov8600 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_output_filename */
void T364f26(T0* C, T0* a1)
{
	((T364*)(C))->a5 = a1;
}

/* GEANT_GEXACE_TASK.output_filename_attribute_name */
unsigned char ge108os8599 = '\0';
T0* ge108ov8599;
T0* T286f19(T0* C)
{
	T0* R = 0;
	if (ge108os8599) {
		return ge108ov8599;
	} else {
		ge108os8599 = '\1';
	}
	R = GE_ms("output", 6);
	ge108ov8599 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_xace_filename */
void T364f25(T0* C, T0* a1)
{
	((T364*)(C))->a9 = a1;
}

/* GEANT_GEXACE_TASK.xace_filename_attribute_name */
unsigned char ge108os8598 = '\0';
T0* ge108ov8598;
T0* T286f18(T0* C)
{
	T0* R = 0;
	if (ge108os8598) {
		return ge108ov8598;
	} else {
		ge108os8598 = '\1';
	}
	R = GE_ms("xace", 4);
	ge108ov8598 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_library_command */
void T364f24(T0* C, T0* a1)
{
	((T364*)(C))->a7 = a1;
}

/* GEANT_GEXACE_TASK.library_attribute_name */
unsigned char ge108os8597 = '\0';
T0* ge108ov8597;
T0* T286f17(T0* C)
{
	T0* R = 0;
	if (ge108os8597) {
		return ge108ov8597;
	} else {
		ge108os8597 = '\1';
	}
	R = GE_ms("library", 7);
	ge108ov8597 = R;
	return R;
}

/* GEANT_GEXACE_TASK.cluster_attribute_name */
unsigned char ge108os8596 = '\0';
T0* ge108ov8596;
T0* T286f16(T0* C)
{
	T0* R = 0;
	if (ge108os8596) {
		return ge108ov8596;
	} else {
		ge108os8596 = '\1';
	}
	R = GE_ms("cluster", 7);
	ge108ov8596 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_system_command */
void T364f23(T0* C, T0* a1)
{
	((T364*)(C))->a6 = a1;
}

/* GEANT_GEXACE_TASK.attribute_value */
T0* T286f15(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T286*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T286f29(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T286f29(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T286f5(C));
		t4 = (((T22*)(GE_void(((T286*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T286f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEXACE_TASK.project_variables_resolver */
T0* T286f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_GEXACE_TASK.target_arguments_stack */
T0* T286f29(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_GEXACE_TASK.system_attribute_name */
unsigned char ge108os8595 = '\0';
T0* ge108ov8595;
T0* T286f14(T0* C)
{
	T0* R = 0;
	if (ge108os8595) {
		return ge108ov8595;
	} else {
		ge108os8595 = '\1';
	}
	R = GE_ms("system", 6);
	ge108ov8595 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_validate_command */
void T364f22(T0* C, T1 a1)
{
	((T364*)(C))->a4 = a1;
}

/* GEANT_GEXACE_TASK.validate_attribute_name */
unsigned char ge108os8594 = '\0';
T0* ge108ov8594;
T0* T286f13(T0* C)
{
	T0* R = 0;
	if (ge108os8594) {
		return ge108ov8594;
	} else {
		ge108os8594 = '\1';
	}
	R = GE_ms("validate", 8);
	ge108ov8594 = R;
	return R;
}

/* GEANT_GEXACE_COMMAND.set_verbose */
void T364f21(T0* C, T1 a1)
{
	((T364*)(C))->a8 = a1;
}

/* GEANT_GEXACE_TASK.boolean_value */
T1 T286f12(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T286f15(C, a1));
	t1 = (T286f26(C));
	t2 = (T286f27(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T286f26(C));
		t2 = (T286f28(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T286f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T286f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T286f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T286f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T286f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEXACE_TASK.std */
T0* T286f24(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_GEXACE_TASK.false_attribute_value */
T0* T286f28(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_GEXACE_TASK.true_attribute_value */
T0* T286f27(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_GEXACE_TASK.has_attribute */
T1 T286f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T286*)(C))->a3), a1));
	return R;
}

/* GEANT_GEXACE_TASK.verbose_attribute_name */
unsigned char ge108os8593 = '\0';
T0* ge108ov8593;
T0* T286f11(T0* C)
{
	T0* R = 0;
	if (ge108os8593) {
		return ge108ov8593;
	} else {
		ge108os8593 = '\1';
	}
	R = GE_ms("verbose", 7);
	ge108ov8593 = R;
	return R;
}

/* GEANT_GEXACE_TASK.task_make */
void T286f35(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T286f37(C, a1);
	t1 = (((T364*)(GE_void(a1)))->a3);
	T286f38(C, t1, a2);
}

/* GEANT_GEXACE_TASK.interpreting_element_make */
void T286f38(T0* C, T0* a1, T0* a2)
{
	T286f39(C, a2);
	T286f40(C, a1);
}

/* GEANT_GEXACE_TASK.set_project */
void T286f40(T0* C, T0* a1)
{
	((T286*)(C))->a2 = a1;
}

/* GEANT_GEXACE_TASK.element_make */
void T286f39(T0* C, T0* a1)
{
	T286f41(C, a1);
}

/* GEANT_GEXACE_TASK.set_xml_element */
void T286f41(T0* C, T0* a1)
{
	((T286*)(C))->a3 = a1;
}

/* GEANT_GEXACE_TASK.set_command */
void T286f37(T0* C, T0* a1)
{
	((T286*)(C))->a1 = a1;
}

/* GEANT_GEXACE_COMMAND.make */
T0* T364c20(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T364));
	*(T364*)C = GE_default364;
	T364f20p1(C, a1);
	((T364*)(C))->a2 = T79c45((T6)(GE_int32(10)));
	l1 = T59c3();
	T79f43(GE_void(((T364*)(C))->a2), l1);
	return C;
}

/* GEANT_GEXACE_COMMAND.make */
void T364f20p1(T0* C, T0* a1)
{
	T364f28(C, a1);
}

/* GEANT_GEXACE_COMMAND.set_project */
void T364f28(T0* C, T0* a1)
{
	((T364*)(C))->a3 = a1;
}

/* GEANT_TARGET.gexace_task_name */
unsigned char ge130os2269 = '\0';
T0* ge130ov2269;
T0* T26f54(T0* C)
{
	T0* R = 0;
	if (ge130os2269) {
		return ge130ov2269;
	} else {
		ge130os2269 = '\1';
	}
	R = GE_ms("gexace", 6);
	ge130ov2269 = R;
	return R;
}

/* GEANT_UNSET_TASK.make */
T0* T285c21(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T285));
	*(T285*)C = GE_default285;
	((T285*)(C))->a1 = T363c5(a1);
	T285f23(C, ((T285*)(C))->a1, a2);
	t1 = (T285f11(C));
	t2 = (T285f8(C, t1));
	if (t2) {
		t1 = (T285f11(C));
		l1 = (T285f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T363f6(GE_void(((T285*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_UNSET_COMMAND.set_name */
void T363f6(T0* C, T0* a1)
{
	((T363*)(C))->a3 = a1;
}

/* GEANT_UNSET_TASK.attribute_value */
T0* T285f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T285*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T285f17(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T285f17(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T285f5(C));
		t4 = (((T22*)(GE_void(((T285*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T285f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_UNSET_TASK.project_variables_resolver */
T0* T285f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_UNSET_TASK.target_arguments_stack */
T0* T285f17(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_UNSET_TASK.has_attribute */
T1 T285f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T285*)(C))->a3), a1));
	return R;
}

/* GEANT_UNSET_TASK.name_attribute_name */
unsigned char ge122os8585 = '\0';
T0* ge122ov8585;
T0* T285f11(T0* C)
{
	T0* R = 0;
	if (ge122os8585) {
		return ge122ov8585;
	} else {
		ge122os8585 = '\1';
	}
	R = GE_ms("name", 4);
	ge122ov8585 = R;
	return R;
}

/* GEANT_UNSET_TASK.task_make */
void T285f23(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T285f25(C, a1);
	t1 = (((T363*)(GE_void(a1)))->a2);
	T285f26(C, t1, a2);
}

/* GEANT_UNSET_TASK.interpreting_element_make */
void T285f26(T0* C, T0* a1, T0* a2)
{
	T285f27(C, a2);
	T285f28(C, a1);
}

/* GEANT_UNSET_TASK.set_project */
void T285f28(T0* C, T0* a1)
{
	((T285*)(C))->a2 = a1;
}

/* GEANT_UNSET_TASK.element_make */
void T285f27(T0* C, T0* a1)
{
	T285f29(C, a1);
}

/* GEANT_UNSET_TASK.set_xml_element */
void T285f29(T0* C, T0* a1)
{
	((T285*)(C))->a3 = a1;
}

/* GEANT_UNSET_TASK.set_command */
void T285f25(T0* C, T0* a1)
{
	((T285*)(C))->a1 = a1;
}

/* GEANT_UNSET_COMMAND.make */
T0* T363c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T363));
	*(T363*)C = GE_default363;
	T363f8(C, a1);
	return C;
}

/* GEANT_UNSET_COMMAND.set_project */
void T363f8(T0* C, T0* a1)
{
	((T363*)(C))->a2 = a1;
}

/* GEANT_TARGET.unset_task_name */
unsigned char ge130os2268 = '\0';
T0* ge130ov2268;
T0* T26f53(T0* C)
{
	T0* R = 0;
	if (ge130os2268) {
		return ge130ov2268;
	} else {
		ge130os2268 = '\1';
	}
	R = GE_ms("unset", 5);
	ge130ov2268 = R;
	return R;
}

/* GEANT_SET_TASK.make */
T0* T284c22(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T284));
	*(T284*)C = GE_default284;
	((T284*)(C))->a1 = T362c6(a1);
	T284f24(C, ((T284*)(C))->a1, a2);
	t1 = (T284f11(C));
	t2 = (T284f8(C, t1));
	if (t2) {
		t1 = (T284f11(C));
		l1 = (T284f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T362f7(GE_void(((T284*)(C))->a1), l1);
		}
	}
	t1 = (T284f13(C));
	t2 = (T284f8(C, t1));
	if (t2) {
		t1 = (T284f13(C));
		l1 = (T284f12(C, t1));
		T362f8(GE_void(((T284*)(C))->a1), l1);
	}
	return C;
}

/* GEANT_SET_COMMAND.set_value */
void T362f8(T0* C, T0* a1)
{
	((T362*)(C))->a4 = a1;
}

/* GEANT_SET_TASK.value_attribute_name */
unsigned char ge119os8575 = '\0';
T0* ge119ov8575;
T0* T284f13(T0* C)
{
	T0* R = 0;
	if (ge119os8575) {
		return ge119ov8575;
	} else {
		ge119os8575 = '\1';
	}
	R = GE_ms("value", 5);
	ge119ov8575 = R;
	return R;
}

/* GEANT_SET_COMMAND.set_name */
void T362f7(T0* C, T0* a1)
{
	((T362*)(C))->a3 = a1;
}

/* GEANT_SET_TASK.attribute_value */
T0* T284f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T284*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T284f18(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T284f18(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T284f5(C));
		t4 = (((T22*)(GE_void(((T284*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T284f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_SET_TASK.project_variables_resolver */
T0* T284f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_SET_TASK.target_arguments_stack */
T0* T284f18(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_SET_TASK.has_attribute */
T1 T284f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T284*)(C))->a3), a1));
	return R;
}

/* GEANT_SET_TASK.name_attribute_name */
unsigned char ge119os8574 = '\0';
T0* ge119ov8574;
T0* T284f11(T0* C)
{
	T0* R = 0;
	if (ge119os8574) {
		return ge119ov8574;
	} else {
		ge119os8574 = '\1';
	}
	R = GE_ms("name", 4);
	ge119ov8574 = R;
	return R;
}

/* GEANT_SET_TASK.task_make */
void T284f24(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T284f26(C, a1);
	t1 = (((T362*)(GE_void(a1)))->a2);
	T284f27(C, t1, a2);
}

/* GEANT_SET_TASK.interpreting_element_make */
void T284f27(T0* C, T0* a1, T0* a2)
{
	T284f28(C, a2);
	T284f29(C, a1);
}

/* GEANT_SET_TASK.set_project */
void T284f29(T0* C, T0* a1)
{
	((T284*)(C))->a2 = a1;
}

/* GEANT_SET_TASK.element_make */
void T284f28(T0* C, T0* a1)
{
	T284f30(C, a1);
}

/* GEANT_SET_TASK.set_xml_element */
void T284f30(T0* C, T0* a1)
{
	((T284*)(C))->a3 = a1;
}

/* GEANT_SET_TASK.set_command */
void T284f26(T0* C, T0* a1)
{
	((T284*)(C))->a1 = a1;
}

/* GEANT_SET_COMMAND.make */
T0* T362c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T362));
	*(T362*)C = GE_default362;
	T362f10(C, a1);
	return C;
}

/* GEANT_SET_COMMAND.set_project */
void T362f10(T0* C, T0* a1)
{
	((T362*)(C))->a2 = a1;
}

/* GEANT_TARGET.set_task_name */
unsigned char ge130os2267 = '\0';
T0* ge130ov2267;
T0* T26f52(T0* C)
{
	T0* R = 0;
	if (ge130os2267) {
		return ge130ov2267;
	} else {
		ge130os2267 = '\1';
	}
	R = GE_ms("set", 3);
	ge130ov2267 = R;
	return R;
}

/* GEANT_LCC_TASK.make */
T0* T283c22(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T283));
	*(T283*)C = GE_default283;
	((T283*)(C))->a1 = T361c11(a1);
	T283f24(C, ((T283*)(C))->a1, a2);
	t1 = (T283f11(C));
	t2 = (T283f8(C, t1));
	if (t2) {
		t1 = (T283f11(C));
		l1 = (T283f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T361f12(GE_void(((T283*)(C))->a1), l1);
		}
	}
	t1 = (T283f13(C));
	t2 = (T283f8(C, t1));
	if (t2) {
		t1 = (T283f13(C));
		l1 = (T283f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T361f13(GE_void(((T283*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_LCC_COMMAND.set_source_filename */
void T361f13(T0* C, T0* a1)
{
	((T361*)(C))->a4 = a1;
}

/* GEANT_LCC_TASK.source_filename_attribute_name */
unsigned char ge112os8564 = '\0';
T0* ge112ov8564;
T0* T283f13(T0* C)
{
	T0* R = 0;
	if (ge112os8564) {
		return ge112ov8564;
	} else {
		ge112os8564 = '\1';
	}
	R = GE_ms("sourcefilename", 14);
	ge112ov8564 = R;
	return R;
}

/* GEANT_LCC_COMMAND.set_executable */
void T361f12(T0* C, T0* a1)
{
	((T361*)(C))->a3 = a1;
}

/* GEANT_LCC_TASK.attribute_value */
T0* T283f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T283*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T283f18(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T283f18(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T283f5(C));
		t4 = (((T22*)(GE_void(((T283*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T283f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_LCC_TASK.project_variables_resolver */
T0* T283f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_LCC_TASK.target_arguments_stack */
T0* T283f18(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_LCC_TASK.has_attribute */
T1 T283f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T283*)(C))->a3), a1));
	return R;
}

/* GEANT_LCC_TASK.executable_attribute_name */
unsigned char ge112os8563 = '\0';
T0* ge112ov8563;
T0* T283f11(T0* C)
{
	T0* R = 0;
	if (ge112os8563) {
		return ge112ov8563;
	} else {
		ge112os8563 = '\1';
	}
	R = GE_ms("executable", 10);
	ge112ov8563 = R;
	return R;
}

/* GEANT_LCC_TASK.task_make */
void T283f24(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T283f26(C, a1);
	t1 = (((T361*)(GE_void(a1)))->a2);
	T283f27(C, t1, a2);
}

/* GEANT_LCC_TASK.interpreting_element_make */
void T283f27(T0* C, T0* a1, T0* a2)
{
	T283f28(C, a2);
	T283f29(C, a1);
}

/* GEANT_LCC_TASK.set_project */
void T283f29(T0* C, T0* a1)
{
	((T283*)(C))->a2 = a1;
}

/* GEANT_LCC_TASK.element_make */
void T283f28(T0* C, T0* a1)
{
	T283f30(C, a1);
}

/* GEANT_LCC_TASK.set_xml_element */
void T283f30(T0* C, T0* a1)
{
	((T283*)(C))->a3 = a1;
}

/* GEANT_LCC_TASK.set_command */
void T283f26(T0* C, T0* a1)
{
	((T283*)(C))->a1 = a1;
}

/* GEANT_LCC_COMMAND.make */
T0* T361c11(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T361));
	*(T361*)C = GE_default361;
	T361f15(C, a1);
	return C;
}

/* GEANT_LCC_COMMAND.set_project */
void T361f15(T0* C, T0* a1)
{
	((T361*)(C))->a2 = a1;
}

/* GEANT_TARGET.lcc_task_name */
unsigned char ge130os2266 = '\0';
T0* ge130ov2266;
T0* T26f51(T0* C)
{
	T0* R = 0;
	if (ge130os2266) {
		return ge130ov2266;
	} else {
		ge130os2266 = '\1';
	}
	R = GE_ms("lcc", 3);
	ge130ov2266 = R;
	return R;
}

/* GEANT_EXEC_TASK.make */
T0* T282c28(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T282));
	*(T282*)C = GE_default282;
	((T282*)(C))->a1 = T358c11(a1);
	T282f30(C, ((T282*)(C))->a1, a2);
	t1 = (T282f11(C));
	t2 = (T282f8(C, t1));
	if (t2) {
		t1 = (T282f11(C));
		l1 = (T282f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T358f12(GE_void(((T282*)(C))->a1), l1);
		}
	}
	t1 = (T282f13(C));
	t2 = (T282f8(C, t1));
	if (t2) {
		t1 = (T282f13(C));
		l1 = (T282f12(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T358f13(GE_void(((T282*)(C))->a1), l1);
		}
	}
	t1 = (T282f14(C));
	t2 = (T282f8(C, t1));
	if (t2) {
		t1 = (T282f14(C));
		t2 = (T282f15(C, t1));
		T358f14(GE_void(((T282*)(C))->a1), t2);
	}
	t1 = (T282f16(C));
	l2 = (T96f16(GE_void(((T282*)(C))->a3), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		l3 = T359c29(((T282*)(C))->a2, l2);
		t1 = (((T359*)(GE_void(l3)))->a1);
		T358f15(GE_void(((T282*)(C))->a1), t1);
	}
	return C;
}

/* GEANT_EXEC_COMMAND.set_fileset */
void T358f15(T0* C, T0* a1)
{
	((T358*)(C))->a4 = a1;
	T360f34(GE_void(((T358*)(C))->a4), EIF_TRUE);
}

/* GEANT_EXEC_TASK.fileset_element_name */
unsigned char ge101os8547 = '\0';
T0* ge101ov8547;
T0* T282f16(T0* C)
{
	T0* R = 0;
	if (ge101os8547) {
		return ge101ov8547;
	} else {
		ge101os8547 = '\1';
	}
	R = GE_ms("fileset", 7);
	ge101ov8547 = R;
	return R;
}

/* GEANT_EXEC_COMMAND.set_accept_errors */
void T358f14(T0* C, T1 a1)
{
	((T358*)(C))->a6 = a1;
}

/* GEANT_EXEC_TASK.boolean_value */
T1 T282f15(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T282f12(C, a1));
	t1 = (T282f22(C));
	t2 = (T282f23(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T282f22(C));
		t2 = (T282f24(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T282f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T282f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T282f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T282f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T282f19(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_EXEC_TASK.std */
T0* T282f19(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_EXEC_TASK.false_attribute_value */
T0* T282f24(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_EXEC_TASK.true_attribute_value */
T0* T282f23(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_EXEC_TASK.string_ */
T0* T282f22(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_EXEC_TASK.accept_errors_attribute_name */
unsigned char ge101os8545 = '\0';
T0* ge101ov8545;
T0* T282f14(T0* C)
{
	T0* R = 0;
	if (ge101os8545) {
		return ge101ov8545;
	} else {
		ge101os8545 = '\1';
	}
	R = GE_ms("accept_errors", 13);
	ge101ov8545 = R;
	return R;
}

/* GEANT_EXEC_COMMAND.set_exit_code_variable_name */
void T358f13(T0* C, T0* a1)
{
	((T358*)(C))->a5 = a1;
}

/* GEANT_EXEC_TASK.exit_code_variable_attribute_name */
unsigned char ge101os8546 = '\0';
T0* ge101ov8546;
T0* T282f13(T0* C)
{
	T0* R = 0;
	if (ge101os8546) {
		return ge101ov8546;
	} else {
		ge101os8546 = '\1';
	}
	R = GE_ms("exit_code_variable", 18);
	ge101ov8546 = R;
	return R;
}

/* GEANT_EXEC_COMMAND.set_command_line */
void T358f12(T0* C, T0* a1)
{
	((T358*)(C))->a3 = a1;
}

/* GEANT_EXEC_TASK.attribute_value */
T0* T282f12(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T282*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T282f21(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T282f21(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T282f5(C));
		t4 = (((T22*)(GE_void(((T282*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T282f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_EXEC_TASK.project_variables_resolver */
T0* T282f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_EXEC_TASK.target_arguments_stack */
T0* T282f21(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_EXEC_TASK.has_attribute */
T1 T282f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T282*)(C))->a3), a1));
	return R;
}

/* GEANT_EXEC_TASK.executable_attribute_name */
unsigned char ge101os8544 = '\0';
T0* ge101ov8544;
T0* T282f11(T0* C)
{
	T0* R = 0;
	if (ge101os8544) {
		return ge101ov8544;
	} else {
		ge101os8544 = '\1';
	}
	R = GE_ms("executable", 10);
	ge101ov8544 = R;
	return R;
}

/* GEANT_EXEC_TASK.task_make */
void T282f30(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T282f32(C, a1);
	t1 = (((T358*)(GE_void(a1)))->a2);
	T282f33(C, t1, a2);
}

/* GEANT_EXEC_TASK.interpreting_element_make */
void T282f33(T0* C, T0* a1, T0* a2)
{
	T282f34(C, a2);
	T282f35(C, a1);
}

/* GEANT_EXEC_TASK.set_project */
void T282f35(T0* C, T0* a1)
{
	((T282*)(C))->a2 = a1;
}

/* GEANT_EXEC_TASK.element_make */
void T282f34(T0* C, T0* a1)
{
	T282f36(C, a1);
}

/* GEANT_EXEC_TASK.set_xml_element */
void T282f36(T0* C, T0* a1)
{
	((T282*)(C))->a3 = a1;
}

/* GEANT_EXEC_TASK.set_command */
void T282f32(T0* C, T0* a1)
{
	((T282*)(C))->a1 = a1;
}

/* GEANT_EXEC_COMMAND.make */
T0* T358c11(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T358));
	*(T358*)C = GE_default358;
	T358f17(C, a1);
	return C;
}

/* GEANT_EXEC_COMMAND.set_project */
void T358f17(T0* C, T0* a1)
{
	((T358*)(C))->a2 = a1;
}

/* GEANT_TARGET.exec_task_name */
unsigned char ge130os2265 = '\0';
T0* ge130ov2265;
T0* T26f50(T0* C)
{
	T0* R = 0;
	if (ge130os2265) {
		return ge130ov2265;
	} else {
		ge130os2265 = '\1';
	}
	R = GE_ms("exec", 4);
	ge130ov2265 = R;
	return R;
}

/* GEANT_VE_TASK.make */
T0* T281c32(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T281));
	*(T281*)C = GE_default281;
	((T281*)(C))->a1 = T357c19(a1);
	T281f34(C, ((T281*)(C))->a1, a2);
	t1 = (T281f11(C));
	t2 = (T281f8(C, t1));
	if (t2) {
		t1 = (T281f11(C));
		l1 = (T281f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T357f20(GE_void(((T281*)(C))->a1), l1);
		}
	}
	t1 = (T281f13(C));
	t2 = (T281f8(C, t1));
	if (t2) {
		t1 = (T281f13(C));
		l1 = (T281f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T357f21(GE_void(((T281*)(C))->a1), l1);
		}
	}
	t1 = (T281f14(C));
	t2 = (T281f8(C, t1));
	if (t2) {
		t1 = (T281f14(C));
		l1 = (T281f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T357f22(GE_void(((T281*)(C))->a1), l1);
		}
		t1 = (T281f15(C));
		t2 = (T281f8(C, t1));
		if (t2) {
			t1 = (T281f15(C));
			t2 = (T281f16(C, t1));
			T357f23(GE_void(((T281*)(C))->a1), t2);
		}
	}
	t1 = (T281f17(C));
	t2 = (T281f8(C, t1));
	if (t2) {
		t1 = (T281f17(C));
		l1 = (T281f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T357f24(GE_void(((T281*)(C))->a1), l1);
		}
		t1 = (T281f18(C));
		t2 = (T281f8(C, t1));
		if (t2) {
			t1 = (T281f18(C));
			l1 = (T281f12(C, t1, GE_ms("", 0)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				T357f25(GE_void(((T281*)(C))->a1), l1);
			}
		}
	}
	t1 = (T281f19(C));
	t2 = (T281f8(C, t1));
	if (t2) {
		t1 = (T281f19(C));
		l1 = (T281f20(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T357f26(GE_void(((T281*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_VE_COMMAND.set_exit_code_variable_name */
void T357f26(T0* C, T0* a1)
{
	((T357*)(C))->a3 = a1;
}

/* GEANT_VE_TASK.attribute_value */
T0* T281f20(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T281*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T281f28(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T281f28(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T281f5(C));
		t4 = (((T22*)(GE_void(((T281*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T281f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_VE_TASK.project_variables_resolver */
T0* T281f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_VE_TASK.target_arguments_stack */
T0* T281f28(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_VE_TASK.exit_code_variable_attribute_name */
unsigned char ge123os8519 = '\0';
T0* ge123ov8519;
T0* T281f19(T0* C)
{
	T0* R = 0;
	if (ge123os8519) {
		return ge123ov8519;
	} else {
		ge123os8519 = '\1';
	}
	R = GE_ms("exit_code_variable", 18);
	ge123ov8519 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_tuning_level */
void T357f25(T0* C, T0* a1)
{
	((T357*)(C))->a9 = a1;
}

/* GEANT_VE_TASK.level_attribute_name */
unsigned char ge123os8518 = '\0';
T0* ge123ov8518;
T0* T281f18(T0* C)
{
	T0* R = 0;
	if (ge123os8518) {
		return ge123ov8518;
	} else {
		ge123os8518 = '\1';
	}
	R = GE_ms("level", 5);
	ge123ov8518 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_tuned_system */
void T357f24(T0* C, T0* a1)
{
	((T357*)(C))->a6 = a1;
}

/* GEANT_VE_TASK.tune_attribute_name */
unsigned char ge123os8517 = '\0';
T0* ge123ov8517;
T0* T281f17(T0* C)
{
	T0* R = 0;
	if (ge123os8517) {
		return ge123ov8517;
	} else {
		ge123os8517 = '\1';
	}
	R = GE_ms("tune", 4);
	ge123ov8517 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_recursive_clean */
void T357f23(T0* C, T1 a1)
{
	((T357*)(C))->a8 = a1;
}

/* GEANT_VE_TASK.boolean_value */
T1 T281f16(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T281f20(C, a1));
	t1 = (T281f25(C));
	t2 = (T281f26(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T281f25(C));
		t2 = (T281f27(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T281f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T281f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T281f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T281f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T281f23(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_VE_TASK.std */
T0* T281f23(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_VE_TASK.false_attribute_value */
T0* T281f27(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_VE_TASK.true_attribute_value */
T0* T281f26(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_VE_TASK.string_ */
T0* T281f25(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_VE_TASK.recursive_attribute_name */
unsigned char ge123os8516 = '\0';
T0* ge123ov8516;
T0* T281f15(T0* C)
{
	T0* R = 0;
	if (ge123os8516) {
		return ge123ov8516;
	} else {
		ge123os8516 = '\1';
	}
	R = GE_ms("recursive", 9);
	ge123ov8516 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_clean */
void T357f22(T0* C, T0* a1)
{
	((T357*)(C))->a7 = a1;
}

/* GEANT_VE_TASK.clean_attribute_name */
unsigned char ge123os8515 = '\0';
T0* ge123ov8515;
T0* T281f14(T0* C)
{
	T0* R = 0;
	if (ge123os8515) {
		return ge123ov8515;
	} else {
		ge123os8515 = '\1';
	}
	R = GE_ms("clean", 5);
	ge123ov8515 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_xace_filename */
void T357f21(T0* C, T0* a1)
{
	((T357*)(C))->a5 = a1;
}

/* GEANT_VE_TASK.xace_attribute_name */
unsigned char ge123os8514 = '\0';
T0* ge123ov8514;
T0* T281f13(T0* C)
{
	T0* R = 0;
	if (ge123os8514) {
		return ge123ov8514;
	} else {
		ge123os8514 = '\1';
	}
	R = GE_ms("xace", 4);
	ge123ov8514 = R;
	return R;
}

/* GEANT_VE_COMMAND.set_esd_filename */
void T357f20(T0* C, T0* a1)
{
	((T357*)(C))->a4 = a1;
}

/* GEANT_VE_TASK.attribute_value_or_default */
T0* T281f12(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = (T96f20(GE_void(((T281*)(C))->a3), a1));
	if (t1) {
		R = (T281f20(C, a1));
	} else {
		R = a2;
	}
	return R;
}

/* GEANT_VE_TASK.has_attribute */
T1 T281f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T281*)(C))->a3), a1));
	return R;
}

/* GEANT_VE_TASK.esd_attribute_name */
unsigned char ge123os8513 = '\0';
T0* ge123ov8513;
T0* T281f11(T0* C)
{
	T0* R = 0;
	if (ge123os8513) {
		return ge123ov8513;
	} else {
		ge123os8513 = '\1';
	}
	R = GE_ms("esd", 3);
	ge123ov8513 = R;
	return R;
}

/* GEANT_VE_TASK.task_make */
void T281f34(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T281f36(C, a1);
	t1 = (((T357*)(GE_void(a1)))->a2);
	T281f37(C, t1, a2);
}

/* GEANT_VE_TASK.interpreting_element_make */
void T281f37(T0* C, T0* a1, T0* a2)
{
	T281f38(C, a2);
	T281f39(C, a1);
}

/* GEANT_VE_TASK.set_project */
void T281f39(T0* C, T0* a1)
{
	((T281*)(C))->a2 = a1;
}

/* GEANT_VE_TASK.element_make */
void T281f38(T0* C, T0* a1)
{
	T281f40(C, a1);
}

/* GEANT_VE_TASK.set_xml_element */
void T281f40(T0* C, T0* a1)
{
	((T281*)(C))->a3 = a1;
}

/* GEANT_VE_TASK.set_command */
void T281f36(T0* C, T0* a1)
{
	((T281*)(C))->a1 = a1;
}

/* GEANT_VE_COMMAND.make */
T0* T357c19(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T357));
	*(T357*)C = GE_default357;
	T357f28(C, a1);
	return C;
}

/* GEANT_VE_COMMAND.set_project */
void T357f28(T0* C, T0* a1)
{
	((T357*)(C))->a2 = a1;
}

/* GEANT_TARGET.ve_task_name */
unsigned char ge130os2264 = '\0';
T0* ge130ov2264;
T0* T26f49(T0* C)
{
	T0* R = 0;
	if (ge130os2264) {
		return ge130ov2264;
	} else {
		ge130os2264 = '\1';
	}
	R = GE_ms("ve", 2);
	ge130ov2264 = R;
	return R;
}

/* GEANT_ISE_TASK.make */
T0* T280c31(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T280));
	*(T280*)C = GE_default280;
	((T280*)(C))->a1 = T356c17(a1);
	T280f33(C, ((T280*)(C))->a1, a2);
	t1 = (T280f11(C));
	t2 = (T280f8(C, t1));
	if (t2) {
		t1 = (T280f11(C));
		l1 = (T280f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T356f18(GE_void(((T280*)(C))->a1), l1);
		}
	}
	t1 = (T280f13(C));
	t2 = (T280f8(C, t1));
	if (t2) {
		t1 = (T280f13(C));
		l1 = (T280f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T356f19(GE_void(((T280*)(C))->a1), l1);
		}
	}
	t1 = (T280f14(C));
	t2 = (T280f8(C, t1));
	if (t2) {
		t1 = (T280f14(C));
		l1 = (T280f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T356f20(GE_void(((T280*)(C))->a1), l1);
		}
	}
	t1 = (T280f15(C));
	t2 = (T280f8(C, t1));
	if (t2) {
		t1 = (T280f15(C));
		t2 = (T280f16(C, t1));
		T356f21(GE_void(((T280*)(C))->a1), t2);
	}
	t1 = (T280f17(C));
	t2 = (T280f8(C, t1));
	if (t2) {
		t1 = (T280f17(C));
		t2 = (T280f16(C, t1));
		T356f22(GE_void(((T280*)(C))->a1), t2);
	}
	t1 = (T280f18(C));
	t2 = (T280f8(C, t1));
	if (t2) {
		t1 = (T280f18(C));
		l1 = (T280f19(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T356f23(GE_void(((T280*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_ISE_COMMAND.set_exit_code_variable_name */
void T356f23(T0* C, T0* a1)
{
	((T356*)(C))->a3 = a1;
}

/* GEANT_ISE_TASK.attribute_value */
T0* T280f19(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T280*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T280f27(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T280f27(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T280f5(C));
		t4 = (((T22*)(GE_void(((T280*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T280f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_ISE_TASK.project_variables_resolver */
T0* T280f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_ISE_TASK.target_arguments_stack */
T0* T280f27(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_ISE_TASK.exit_code_variable_attribute_name */
unsigned char ge111os8491 = '\0';
T0* ge111ov8491;
T0* T280f18(T0* C)
{
	T0* R = 0;
	if (ge111os8491) {
		return ge111ov8491;
	} else {
		ge111os8491 = '\1';
	}
	R = GE_ms("exit_code_variable", 18);
	ge111ov8491 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_finish_freezing */
void T356f22(T0* C, T1 a1)
{
	((T356*)(C))->a8 = a1;
}

/* GEANT_ISE_TASK.finish_freezing_attribute_name */
unsigned char ge111os8489 = '\0';
T0* ge111ov8489;
T0* T280f17(T0* C)
{
	T0* R = 0;
	if (ge111os8489) {
		return ge111ov8489;
	} else {
		ge111os8489 = '\1';
	}
	R = GE_ms("finish_freezing", 15);
	ge111ov8489 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_finalize_mode */
void T356f21(T0* C, T1 a1)
{
	((T356*)(C))->a7 = a1;
}

/* GEANT_ISE_TASK.boolean_value */
T1 T280f16(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T280f19(C, a1));
	t1 = (T280f24(C));
	t2 = (T280f25(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T280f24(C));
		t2 = (T280f26(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T280f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T280f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T280f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T280f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T280f22(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_ISE_TASK.std */
T0* T280f22(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_ISE_TASK.false_attribute_value */
T0* T280f26(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_ISE_TASK.true_attribute_value */
T0* T280f25(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_ISE_TASK.string_ */
T0* T280f24(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_ISE_TASK.finalize_attribute_name */
unsigned char ge111os8488 = '\0';
T0* ge111ov8488;
T0* T280f15(T0* C)
{
	T0* R = 0;
	if (ge111os8488) {
		return ge111ov8488;
	} else {
		ge111os8488 = '\1';
	}
	R = GE_ms("finalize", 8);
	ge111ov8488 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_clean */
void T356f20(T0* C, T0* a1)
{
	((T356*)(C))->a5 = a1;
}

/* GEANT_ISE_TASK.clean_attribute_name */
unsigned char ge111os8490 = '\0';
T0* ge111ov8490;
T0* T280f14(T0* C)
{
	T0* R = 0;
	if (ge111os8490) {
		return ge111ov8490;
	} else {
		ge111os8490 = '\1';
	}
	R = GE_ms("clean", 5);
	ge111ov8490 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_system_name */
void T356f19(T0* C, T0* a1)
{
	((T356*)(C))->a4 = a1;
}

/* GEANT_ISE_TASK.system_attribute_name */
unsigned char ge111os8487 = '\0';
T0* ge111ov8487;
T0* T280f13(T0* C)
{
	T0* R = 0;
	if (ge111os8487) {
		return ge111ov8487;
	} else {
		ge111os8487 = '\1';
	}
	R = GE_ms("system", 6);
	ge111ov8487 = R;
	return R;
}

/* GEANT_ISE_COMMAND.set_ace_filename */
void T356f18(T0* C, T0* a1)
{
	((T356*)(C))->a6 = a1;
}

/* GEANT_ISE_TASK.attribute_value_or_default */
T0* T280f12(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = (T96f20(GE_void(((T280*)(C))->a3), a1));
	if (t1) {
		R = (T280f19(C, a1));
	} else {
		R = a2;
	}
	return R;
}

/* GEANT_ISE_TASK.has_attribute */
T1 T280f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T280*)(C))->a3), a1));
	return R;
}

/* GEANT_ISE_TASK.ace_attribute_name */
unsigned char ge111os8486 = '\0';
T0* ge111ov8486;
T0* T280f11(T0* C)
{
	T0* R = 0;
	if (ge111os8486) {
		return ge111ov8486;
	} else {
		ge111os8486 = '\1';
	}
	R = GE_ms("ace", 3);
	ge111ov8486 = R;
	return R;
}

/* GEANT_ISE_TASK.task_make */
void T280f33(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T280f35(C, a1);
	t1 = (((T356*)(GE_void(a1)))->a2);
	T280f36(C, t1, a2);
}

/* GEANT_ISE_TASK.interpreting_element_make */
void T280f36(T0* C, T0* a1, T0* a2)
{
	T280f37(C, a2);
	T280f38(C, a1);
}

/* GEANT_ISE_TASK.set_project */
void T280f38(T0* C, T0* a1)
{
	((T280*)(C))->a2 = a1;
}

/* GEANT_ISE_TASK.element_make */
void T280f37(T0* C, T0* a1)
{
	T280f39(C, a1);
}

/* GEANT_ISE_TASK.set_xml_element */
void T280f39(T0* C, T0* a1)
{
	((T280*)(C))->a3 = a1;
}

/* GEANT_ISE_TASK.set_command */
void T280f35(T0* C, T0* a1)
{
	((T280*)(C))->a1 = a1;
}

/* GEANT_ISE_COMMAND.make */
T0* T356c17(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T356));
	*(T356*)C = GE_default356;
	T356f25(C, a1);
	return C;
}

/* GEANT_ISE_COMMAND.set_project */
void T356f25(T0* C, T0* a1)
{
	((T356*)(C))->a2 = a1;
}

/* GEANT_TARGET.ise_task_name */
unsigned char ge130os2263 = '\0';
T0* ge130ov2263;
T0* T26f48(T0* C)
{
	T0* R = 0;
	if (ge130os2263) {
		return ge130ov2263;
	} else {
		ge130os2263 = '\1';
	}
	R = GE_ms("ise", 3);
	ge130ov2263 = R;
	return R;
}

/* GEANT_SE_TASK.make */
T0* T279c33(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T279));
	*(T279*)C = GE_default279;
	((T279*)(C))->a1 = T355c23(a1);
	T279f35(C, ((T279*)(C))->a1, a2);
	t1 = (T279f11(C));
	t2 = (T279f8(C, t1));
	if (t2) {
		t1 = (T279f11(C));
		l1 = (T279f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T355f24(GE_void(((T279*)(C))->a1), l1);
		}
	} else {
		t1 = (T279f13(C));
		t2 = (T279f8(C, t1));
		if (t2) {
			t1 = (T279f13(C));
			l1 = (T279f12(C, t1, GE_ms("", 0)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				T355f25(GE_void(((T279*)(C))->a1), l1);
			}
		} else {
			t1 = (T279f14(C));
			t2 = (T279f8(C, t1));
			if (t2) {
				t1 = (T279f14(C));
				l1 = (T279f15(C, t1));
				t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
				if (t2) {
					T355f26(GE_void(((T279*)(C))->a1), l1);
				}
			}
			t1 = (T279f16(C));
			t2 = (T279f8(C, t1));
			if (t2) {
				t1 = (T279f16(C));
				l1 = (T279f15(C, t1));
				t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
				if (t2) {
					T355f27(GE_void(((T279*)(C))->a1), l1);
				}
			}
			t1 = (T279f17(C));
			t2 = (T279f8(C, t1));
			if (t2) {
				t1 = (T279f17(C));
				l1 = (T279f15(C, t1));
				t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
				if (t2) {
					T355f28(GE_void(((T279*)(C))->a1), l1);
				}
			}
			t1 = (T279f18(C));
			t2 = (T279f8(C, t1));
			if (t2) {
				t1 = (T279f18(C));
				t2 = (T279f19(C, t1));
				T355f29(GE_void(((T279*)(C))->a1), t2);
			}
			t1 = (T279f20(C));
			t2 = (T279f8(C, t1));
			if (t2) {
				t1 = (T279f20(C));
				t2 = (T279f19(C, t1));
				T355f30(GE_void(((T279*)(C))->a1), t2);
			}
		}
	}
	t1 = (T279f21(C));
	t2 = (T279f8(C, t1));
	if (t2) {
		t1 = (T279f21(C));
		l1 = (T279f15(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T355f31(GE_void(((T279*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_SE_COMMAND.set_exit_code_variable_name */
void T355f31(T0* C, T0* a1)
{
	((T355*)(C))->a3 = a1;
}

/* GEANT_SE_TASK.exit_code_variable_attribute_name */
unsigned char ge120os8458 = '\0';
T0* ge120ov8458;
T0* T279f21(T0* C)
{
	T0* R = 0;
	if (ge120os8458) {
		return ge120ov8458;
	} else {
		ge120os8458 = '\1';
	}
	R = GE_ms("exit_code_variable", 18);
	ge120ov8458 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_no_style_warning */
void T355f30(T0* C, T1 a1)
{
	((T355*)(C))->a10 = a1;
}

/* GEANT_SE_TASK.no_style_warning_attribute_name */
unsigned char ge120os8456 = '\0';
T0* ge120ov8456;
T0* T279f20(T0* C)
{
	T0* R = 0;
	if (ge120os8456) {
		return ge120ov8456;
	} else {
		ge120os8456 = '\1';
	}
	R = GE_ms("no_style_warning", 16);
	ge120ov8456 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_case_insensitive */
void T355f29(T0* C, T1 a1)
{
	((T355*)(C))->a9 = a1;
}

/* GEANT_SE_TASK.boolean_value */
T1 T279f19(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T279f15(C, a1));
	t1 = (T279f27(C));
	t2 = (T279f28(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T279f27(C));
		t2 = (T279f29(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T279f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T279f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T279f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T279f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T279f24(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_SE_TASK.std */
T0* T279f24(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_SE_TASK.false_attribute_value */
T0* T279f29(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_SE_TASK.true_attribute_value */
T0* T279f28(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_SE_TASK.string_ */
T0* T279f27(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_SE_TASK.case_insensitive_attribute_name */
unsigned char ge120os8455 = '\0';
T0* ge120ov8455;
T0* T279f18(T0* C)
{
	T0* R = 0;
	if (ge120os8455) {
		return ge120ov8455;
	} else {
		ge120os8455 = '\1';
	}
	R = GE_ms("case_insensitive", 16);
	ge120ov8455 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_executable */
void T355f28(T0* C, T0* a1)
{
	((T355*)(C))->a6 = a1;
}

/* GEANT_SE_TASK.executable_attribute_name */
unsigned char ge120os8454 = '\0';
T0* ge120ov8454;
T0* T279f17(T0* C)
{
	T0* R = 0;
	if (ge120os8454) {
		return ge120ov8454;
	} else {
		ge120os8454 = '\1';
	}
	R = GE_ms("executable", 10);
	ge120ov8454 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_creation_procedure */
void T355f27(T0* C, T0* a1)
{
	((T355*)(C))->a8 = a1;
}

/* GEANT_SE_TASK.creation_procedure_attribute_name */
unsigned char ge120os8453 = '\0';
T0* ge120ov8453;
T0* T279f16(T0* C)
{
	T0* R = 0;
	if (ge120os8453) {
		return ge120ov8453;
	} else {
		ge120os8453 = '\1';
	}
	R = GE_ms("creation_procedure", 18);
	ge120ov8453 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_root_class */
void T355f26(T0* C, T0* a1)
{
	((T355*)(C))->a5 = a1;
}

/* GEANT_SE_TASK.attribute_value */
T0* T279f15(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T279*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T279f26(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T279f26(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T279f5(C));
		t4 = (((T22*)(GE_void(((T279*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T279f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_SE_TASK.project_variables_resolver */
T0* T279f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_SE_TASK.target_arguments_stack */
T0* T279f26(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_SE_TASK.root_class_attribute_name */
unsigned char ge120os8452 = '\0';
T0* ge120ov8452;
T0* T279f14(T0* C)
{
	T0* R = 0;
	if (ge120os8452) {
		return ge120ov8452;
	} else {
		ge120os8452 = '\1';
	}
	R = GE_ms("root_class", 10);
	ge120ov8452 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_clean */
void T355f25(T0* C, T0* a1)
{
	((T355*)(C))->a7 = a1;
}

/* GEANT_SE_TASK.clean_attribute_name */
unsigned char ge120os8457 = '\0';
T0* ge120ov8457;
T0* T279f13(T0* C)
{
	T0* R = 0;
	if (ge120os8457) {
		return ge120ov8457;
	} else {
		ge120os8457 = '\1';
	}
	R = GE_ms("clean", 5);
	ge120ov8457 = R;
	return R;
}

/* GEANT_SE_COMMAND.set_ace_filename */
void T355f24(T0* C, T0* a1)
{
	((T355*)(C))->a4 = a1;
}

/* GEANT_SE_TASK.attribute_value_or_default */
T0* T279f12(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = (T96f20(GE_void(((T279*)(C))->a3), a1));
	if (t1) {
		R = (T279f15(C, a1));
	} else {
		R = a2;
	}
	return R;
}

/* GEANT_SE_TASK.has_attribute */
T1 T279f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T279*)(C))->a3), a1));
	return R;
}

/* GEANT_SE_TASK.ace_attribute_name */
unsigned char ge120os8451 = '\0';
T0* ge120ov8451;
T0* T279f11(T0* C)
{
	T0* R = 0;
	if (ge120os8451) {
		return ge120ov8451;
	} else {
		ge120os8451 = '\1';
	}
	R = GE_ms("ace", 3);
	ge120ov8451 = R;
	return R;
}

/* GEANT_SE_TASK.task_make */
void T279f35(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T279f37(C, a1);
	t1 = (((T355*)(GE_void(a1)))->a2);
	T279f38(C, t1, a2);
}

/* GEANT_SE_TASK.interpreting_element_make */
void T279f38(T0* C, T0* a1, T0* a2)
{
	T279f39(C, a2);
	T279f40(C, a1);
}

/* GEANT_SE_TASK.set_project */
void T279f40(T0* C, T0* a1)
{
	((T279*)(C))->a2 = a1;
}

/* GEANT_SE_TASK.element_make */
void T279f39(T0* C, T0* a1)
{
	T279f41(C, a1);
}

/* GEANT_SE_TASK.set_xml_element */
void T279f41(T0* C, T0* a1)
{
	((T279*)(C))->a3 = a1;
}

/* GEANT_SE_TASK.set_command */
void T279f37(T0* C, T0* a1)
{
	((T279*)(C))->a1 = a1;
}

/* GEANT_SE_COMMAND.make */
T0* T355c23(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T355));
	*(T355*)C = GE_default355;
	T355f33(C, a1);
	return C;
}

/* GEANT_SE_COMMAND.set_project */
void T355f33(T0* C, T0* a1)
{
	((T355*)(C))->a2 = a1;
}

/* GEANT_TARGET.se_task_name */
unsigned char ge130os2262 = '\0';
T0* ge130ov2262;
T0* T26f47(T0* C)
{
	T0* R = 0;
	if (ge130os2262) {
		return ge130ov2262;
	} else {
		ge130os2262 = '\1';
	}
	R = GE_ms("se", 2);
	ge130ov2262 = R;
	return R;
}

/* GEANT_GEC_TASK.make */
T0* T278c34(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T1 t4;
	C = (T0*)GE_alloc(sizeof(T278));
	*(T278*)C = GE_default278;
	((T278*)(C))->a1 = T354c22(a1);
	T278f36(C, ((T278*)(C))->a1, a2);
	t1 = (T278f11(C));
	t2 = (T278f8(C, t1));
	if (t2) {
		t1 = (T278f11(C));
		l1 = (T278f12(C, t1, GE_ms("", 0)));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T354f23(GE_void(((T278*)(C))->a1), l1);
		}
	} else {
		t1 = (T278f13(C));
		t2 = (T278f8(C, t1));
		if (t2) {
			t1 = (T278f13(C));
			l1 = (T278f12(C, t1, GE_ms("", 0)));
			t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			if (t2) {
				T354f24(GE_void(((T278*)(C))->a1), l1);
			}
		}
	}
	t1 = (T278f14(C));
	t2 = (T278f8(C, t1));
	if (t2) {
		t1 = (T278f14(C));
		t2 = (T278f15(C, t1));
		T354f25(GE_void(((T278*)(C))->a1), t2);
	}
	t1 = (T278f16(C));
	t2 = (T278f8(C, t1));
	if (t2) {
		t1 = (T278f16(C));
		t2 = (T278f15(C, t1));
		T354f26(GE_void(((T278*)(C))->a1), t2);
	}
	t1 = (T278f17(C));
	t2 = (T278f8(C, t1));
	if (t2) {
		t1 = (T278f17(C));
		t2 = (T278f15(C, t1));
		T354f27(GE_void(((T278*)(C))->a1), t2);
	}
	t1 = (T278f18(C));
	t2 = (T278f8(C, t1));
	if (t2) {
		t1 = (T278f18(C));
		t2 = (T278f15(C, t1));
		T354f28(GE_void(((T278*)(C))->a1), t2);
	}
	t1 = (T278f19(C));
	t2 = (T278f8(C, t1));
	if (t2) {
		t1 = (T278f19(C));
		l1 = (T278f20(C, t1));
		t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f14(l1):T194f45(l1)));
		if (t2) {
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f15(l1):T194f46(l1)));
			t2 = (T6f1(&l2, (T6)(GE_int32(0))));
			if (t2) {
				T354f29(GE_void(((T278*)(C))->a1), l2);
			}
		}
	}
	t1 = (T278f21(C));
	t2 = (T278f8(C, t1));
	if (t2) {
		t1 = (T278f21(C));
		l1 = (T278f20(C, t1));
		t2 = ((l1)!=(EIF_VOID));
		if (t2) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?T17f29(l1):T194f50(l1)));
			t2 = ((T1)(!(t4)));
		}
		if (t2) {
			T354f30(GE_void(((T278*)(C))->a1), l1);
		}
	}
	t1 = (T278f22(C));
	t2 = (T278f8(C, t1));
	if (t2) {
		t1 = (T278f22(C));
		l1 = (T278f20(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T354f31(GE_void(((T278*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_GEC_COMMAND.set_exit_code_variable_name */
void T354f31(T0* C, T0* a1)
{
	((T354*)(C))->a3 = a1;
}

/* GEANT_GEC_TASK.exit_code_variable_attribute_name */
unsigned char ge104os8411 = '\0';
T0* ge104ov8411;
T0* T278f22(T0* C)
{
	T0* R = 0;
	if (ge104os8411) {
		return ge104ov8411;
	} else {
		ge104os8411 = '\1';
	}
	R = GE_ms("exit_code_variable", 18);
	ge104ov8411 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_garbage_collector */
void T354f30(T0* C, T0* a1)
{
	((T354*)(C))->a11 = a1;
}

/* GEANT_GEC_TASK.gc_attribute_name */
unsigned char ge104os8413 = '\0';
T0* ge104ov8413;
T0* T278f21(T0* C)
{
	T0* R = 0;
	if (ge104os8413) {
		return ge104ov8413;
	} else {
		ge104os8413 = '\1';
	}
	R = GE_ms("gc", 2);
	ge104ov8413 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_split_size */
void T354f29(T0* C, T6 a1)
{
	((T354*)(C))->a10 = a1;
}

/* GEANT_GEC_TASK.attribute_value */
T0* T278f20(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T278*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T278f30(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T278f30(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T278f5(C));
		t4 = (((T22*)(GE_void(((T278*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T278f5(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_GEC_TASK.project_variables_resolver */
T0* T278f5(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_GEC_TASK.target_arguments_stack */
T0* T278f30(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_GEC_TASK.split_size_attribute_name */
unsigned char ge104os8415 = '\0';
T0* ge104ov8415;
T0* T278f19(T0* C)
{
	T0* R = 0;
	if (ge104os8415) {
		return ge104ov8415;
	} else {
		ge104os8415 = '\1';
	}
	R = GE_ms("split_size", 10);
	ge104ov8415 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_split_mode */
void T354f28(T0* C, T1 a1)
{
	((T354*)(C))->a7 = a1;
}

/* GEANT_GEC_TASK.split_attribute_name */
unsigned char ge104os8414 = '\0';
T0* ge104ov8414;
T0* T278f18(T0* C)
{
	T0* R = 0;
	if (ge104os8414) {
		return ge104ov8414;
	} else {
		ge104os8414 = '\1';
	}
	R = GE_ms("split", 5);
	ge104ov8414 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_cat_mode */
void T354f27(T0* C, T1 a1)
{
	((T354*)(C))->a9 = a1;
}

/* GEANT_GEC_TASK.cat_attribute_name */
unsigned char ge104os8409 = '\0';
T0* ge104ov8409;
T0* T278f17(T0* C)
{
	T0* R = 0;
	if (ge104os8409) {
		return ge104ov8409;
	} else {
		ge104os8409 = '\1';
	}
	R = GE_ms("cat", 3);
	ge104ov8409 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_finalize */
void T354f26(T0* C, T1 a1)
{
	((T354*)(C))->a8 = a1;
}

/* GEANT_GEC_TASK.finalize_attribute_name */
unsigned char ge104os8412 = '\0';
T0* ge104ov8412;
T0* T278f16(T0* C)
{
	T0* R = 0;
	if (ge104os8412) {
		return ge104ov8412;
	} else {
		ge104os8412 = '\1';
	}
	R = GE_ms("finalize", 8);
	ge104ov8412 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_c_compile */
void T354f25(T0* C, T1 a1)
{
	((T354*)(C))->a6 = a1;
}

/* GEANT_GEC_TASK.boolean_value */
T1 T278f15(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T278f20(C, a1));
	t1 = (T278f27(C));
	t2 = (T278f28(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T278f27(C));
		t2 = (T278f29(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T278f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T278f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T278f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T278f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T278f25(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_GEC_TASK.std */
T0* T278f25(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_GEC_TASK.false_attribute_value */
T0* T278f29(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_GEC_TASK.true_attribute_value */
T0* T278f28(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_GEC_TASK.string_ */
T0* T278f27(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_GEC_TASK.c_compile_attribute_name */
unsigned char ge104os8408 = '\0';
T0* ge104ov8408;
T0* T278f14(T0* C)
{
	T0* R = 0;
	if (ge104os8408) {
		return ge104ov8408;
	} else {
		ge104os8408 = '\1';
	}
	R = GE_ms("c_compile", 9);
	ge104ov8408 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_clean */
void T354f24(T0* C, T0* a1)
{
	((T354*)(C))->a5 = a1;
}

/* GEANT_GEC_TASK.clean_attribute_name */
unsigned char ge104os8410 = '\0';
T0* ge104ov8410;
T0* T278f13(T0* C)
{
	T0* R = 0;
	if (ge104os8410) {
		return ge104ov8410;
	} else {
		ge104os8410 = '\1';
	}
	R = GE_ms("clean", 5);
	ge104ov8410 = R;
	return R;
}

/* GEANT_GEC_COMMAND.set_ace_filename */
void T354f23(T0* C, T0* a1)
{
	((T354*)(C))->a4 = a1;
}

/* GEANT_GEC_TASK.attribute_value_or_default */
T0* T278f12(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T1 t1;
	t1 = (T96f20(GE_void(((T278*)(C))->a3), a1));
	if (t1) {
		R = (T278f20(C, a1));
	} else {
		R = a2;
	}
	return R;
}

/* GEANT_GEC_TASK.has_attribute */
T1 T278f8(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T278*)(C))->a3), a1));
	return R;
}

/* GEANT_GEC_TASK.ace_attribute_name */
unsigned char ge104os8407 = '\0';
T0* ge104ov8407;
T0* T278f11(T0* C)
{
	T0* R = 0;
	if (ge104os8407) {
		return ge104ov8407;
	} else {
		ge104os8407 = '\1';
	}
	R = GE_ms("ace", 3);
	ge104ov8407 = R;
	return R;
}

/* GEANT_GEC_TASK.task_make */
void T278f36(T0* C, T0* a1, T0* a2)
{
	T0* t1;
	T278f38(C, a1);
	t1 = (((T354*)(GE_void(a1)))->a2);
	T278f39(C, t1, a2);
}

/* GEANT_GEC_TASK.interpreting_element_make */
void T278f39(T0* C, T0* a1, T0* a2)
{
	T278f40(C, a2);
	T278f41(C, a1);
}

/* GEANT_GEC_TASK.set_project */
void T278f41(T0* C, T0* a1)
{
	((T278*)(C))->a2 = a1;
}

/* GEANT_GEC_TASK.element_make */
void T278f40(T0* C, T0* a1)
{
	T278f42(C, a1);
}

/* GEANT_GEC_TASK.set_xml_element */
void T278f42(T0* C, T0* a1)
{
	((T278*)(C))->a3 = a1;
}

/* GEANT_GEC_TASK.set_command */
void T278f38(T0* C, T0* a1)
{
	((T278*)(C))->a1 = a1;
}

/* GEANT_GEC_COMMAND.make */
T0* T354c22(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T354));
	*(T354*)C = GE_default354;
	T354f22p1(C, a1);
	((T354*)(C))->a6 = EIF_TRUE;
	((T354*)(C))->a7 = EIF_TRUE;
	return C;
}

/* GEANT_GEC_COMMAND.make */
void T354f22p1(T0* C, T0* a1)
{
	T354f33(C, a1);
}

/* GEANT_GEC_COMMAND.set_project */
void T354f33(T0* C, T0* a1)
{
	((T354*)(C))->a2 = a1;
}

/* GEANT_TARGET.gec_task_name */
unsigned char ge130os2261 = '\0';
T0* ge130ov2261;
T0* T26f46(T0* C)
{
	T0* R = 0;
	if (ge130os2261) {
		return ge130ov2261;
	} else {
		ge130os2261 = '\1';
	}
	R = GE_ms("gec", 3);
	ge130ov2261 = R;
	return R;
}

/* GEANT_TARGET.obsolete_element_name */
unsigned char ge63os2230 = '\0';
T0* ge63ov2230;
T0* T26f16(T0* C)
{
	T0* R = 0;
	if (ge63os2230) {
		return ge63ov2230;
	} else {
		ge63os2230 = '\1';
	}
	R = GE_ms("obsolete", 8);
	ge63ov2230 = R;
	return R;
}

/* GEANT_TARGET.argument_element_name */
unsigned char ge63os2231 = '\0';
T0* ge63ov2231;
T0* T26f14(T0* C)
{
	T0* R = 0;
	if (ge63os2231) {
		return ge63ov2231;
	} else {
		ge63os2231 = '\1';
	}
	R = GE_ms("argument", 8);
	ge63ov2231 = R;
	return R;
}

/* KL_STRING_ROUTINES.same_string */
T1 T76f1(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T0* t4;
	t1 = ((a2)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T194*)(a2))->a1));
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((t2)==(t3));
		if (t1) {
			if ((a1)==EIF_VOID) {
				l1 = EIF_VOID;
			} else {
				switch (((T0*)(a1))->id) {
				case 194:
					l1 = a1;
					break;
				default:
					l1 = EIF_VOID;
				}
			}
			t1 = ((l1)!=(EIF_VOID));
			if (t1) {
				R = (T194f12(GE_void(l1), a2));
			} else {
				if ((a2)==EIF_VOID) {
					l1 = EIF_VOID;
				} else {
					switch (((T0*)(a2))->id) {
					case 194:
						l1 = a2;
						break;
					default:
						l1 = EIF_VOID;
					}
				}
				t1 = ((l1)!=(EIF_VOID));
				if (t1) {
					R = (T194f12(GE_void(l1), a1));
				} else {
					t4 = (T76f8(C));
					t1 = (T82f1(GE_void(t4), a1, ge308ov4806));
					if (t1) {
						t4 = (T76f8(C));
						t1 = (T82f1(GE_void(t4), a2, ge308ov4806));
					}
					if (t1) {
						R = (T76f10(C, a1, a2));
					} else {
						R = EIF_TRUE;
						l3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
						l2 = (T6)(GE_int32(1));
						t1 = (T6f1(&l2, l3));
						while (!(t1)) {
							t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l2):T194f14(a1, l2)));
							t3 = (((((T0*)(GE_void(a2)))->id==17)?T17f12(a2, l2):T194f14(a2, l2)));
							t1 = ((t2)!=(t3));
							if (t1) {
								R = EIF_FALSE;
								l2 = ((T6)((l3)+((T6)(GE_int32(1)))));
							} else {
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l2, l3));
						}
					}
				}
			}
		}
	}
	return R;
}

/* KL_STRING_ROUTINES.elks_same_string */
T1 T76f10(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T0* t4;
	t1 = ((a2)==(a1));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T194*)(a2))->a1));
		t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((t2)==(t3));
		if (t1) {
			t4 = (T76f8(C));
			t1 = (T82f1(GE_void(t4), a2, ge308ov4806));
			if (t1) {
				R = (((((T0*)(GE_void(a1)))->id==17)?T17f17(a1, a2):T194f13(a1, a2)));
			} else {
				R = (((((T0*)(GE_void(a2)))->id==17)?T17f17(a2, a1):T194f13(a2, a1)));
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.same_string */
T1 T194f13(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((t2)==(((T194*)(C))->a1));
		if (t1) {
			t2 = (T194f29(C, a1, (T6)(GE_int32(1))));
			R = ((t2)==((T6)(GE_int32(1))));
		}
	}
	return R;
}

/* UC_UTF8_STRING.substring_index */
T6 T194f29(T0* C, T0* a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T6 l9 = 0;
	T1 l10 = 0;
	T6 l11 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	T2 t4;
	T2 t5;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==((T6)(GE_int32(1))));
		if (t1) {
			R = (T6)(GE_int32(1));
		}
	} else {
		l11 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((l11)==((T6)(GE_int32(0))));
		if (t1) {
			R = a2;
		} else {
			t2 = ((T6)((((T194*)(C))->a1)-(l11)));
			l9 = ((T6)((t2)+((T6)(GE_int32(1)))));
			t1 = (T6f9(&a2, l9));
			if (t1) {
				t1 = ((((T194*)(C))->a1)==(((T194*)(C))->a3));
				if (t1) {
					if ((a1)==EIF_VOID) {
						l6 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 194:
							l6 = a1;
							break;
						default:
							l6 = EIF_VOID;
						}
					}
					t1 = ((l6)!=(EIF_VOID));
					if (t1) {
						l3 = (((T194*)(GE_void(l6)))->a3);
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l7;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T194f21(GE_void(l6), l1));
								t3 = (T194f22(C));
								t2 = (T197f1(GE_void(t3)));
								t1 = (T6f1(&l4, t2));
								if (t1) {
									l4 = (T6)(GE_int32(0));
								}
								t4 = (T194f20(C, l2));
								t2 = ((T6)(t4));
								t1 = ((t2)!=(l4));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
									l1 = (T194f24(GE_void(l6), l1));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					} else {
						l3 = l11;
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l7;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								t4 = (T194f20(C, l2));
								t5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
								t1 = ((t4)!=(t5));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
									l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					}
				} else {
					l8 = (T194f26(C, a2));
					if ((a1)==EIF_VOID) {
						l6 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 194:
							l6 = a1;
							break;
						default:
							l6 = EIF_VOID;
						}
					}
					t1 = ((l6)!=(EIF_VOID));
					if (t1) {
						l3 = (((T194*)(GE_void(l6)))->a3);
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l8;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T194f21(C, l2));
								t3 = (T194f22(C));
								t2 = (T197f1(GE_void(t3)));
								t1 = (T6f1(&l4, t2));
								if (t1) {
									l4 = (T6)(GE_int32(0));
								}
								l5 = (T194f21(GE_void(l6), l1));
								t3 = (T194f22(C));
								t2 = (T197f1(GE_void(t3)));
								t1 = (T6f1(&l5, t2));
								if (t1) {
									l5 = (T6)(GE_int32(0));
								}
								t1 = ((l4)!=(l5));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = (T194f24(C, l2));
									l1 = (T194f24(GE_void(l6), l1));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l8 = (T194f24(C, l8));
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					} else {
						l3 = l11;
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l8;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T194f21(C, l2));
								t3 = (T194f22(C));
								t2 = (T197f1(GE_void(t3)));
								t1 = (T6f1(&l4, t2));
								if (t1) {
									l4 = (T6)(GE_int32(0));
								}
								t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
								t2 = ((T6)(t4));
								t1 = ((l4)!=(t2));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = (T194f24(C, l2));
									l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l8 = (T194f24(C, l8));
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					}
				}
			}
		}
	}
	return R;
}

/* STRING_8.same_string */
T1 T17f17(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T2 t4;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((t2)==(((T17*)(C))->a2));
		if (t1) {
			R = EIF_TRUE;
			l2 = ((T17*)(C))->a2;
			t1 = ((T1)(((T0*)(GE_void(a1)))->id==17));
			if (t1) {
				l3 = ((T17*)(C))->a1;
				l4 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T194*)(a1))->a2));
				t1 = ((l1)==(l2));
				while (!(t1)) {
					t3 = (((T15*)(GE_void(l3)))->z2[l1]);
					t4 = (((T15*)(GE_void(l4)))->z2[l1]);
					t1 = ((t3)!=(t4));
					if (t1) {
						R = EIF_FALSE;
						l1 = l2;
					} else {
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t1 = ((l1)==(l2));
				}
			} else {
				l1 = (T6)(GE_int32(1));
				l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				t1 = ((l1)==(l2));
				while (!(t1)) {
					t3 = (T17f9(C, l1));
					t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
					t1 = ((t3)!=(t4));
					if (t1) {
						R = EIF_FALSE;
						l1 = l2;
					} else {
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					}
					t1 = ((l1)==(l2));
				}
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.same_unicode_string */
T1 T194f12(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((t2)==(((T194*)(C))->a1));
		if (t1) {
			t2 = (T194f28(C, a1, (T6)(GE_int32(1))));
			R = ((t2)==((T6)(GE_int32(1))));
		}
	}
	return R;
}

/* UC_UTF8_STRING.unicode_substring_index */
T6 T194f28(T0* C, T0* a1, T6 a2)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T6 l9 = 0;
	T1 l10 = 0;
	T6 l11 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	T6 t4;
	t1 = ((a1)==(C));
	if (t1) {
		t1 = ((a2)==((T6)(GE_int32(1))));
		if (t1) {
			R = (T6)(GE_int32(1));
		}
	} else {
		l11 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((l11)==((T6)(GE_int32(0))));
		if (t1) {
			R = a2;
		} else {
			t2 = ((T6)((((T194*)(C))->a1)-(l11)));
			l9 = ((T6)((t2)+((T6)(GE_int32(1)))));
			t1 = (T6f9(&a2, l9));
			if (t1) {
				t1 = ((((T194*)(C))->a1)==(((T194*)(C))->a3));
				if (t1) {
					if ((a1)==EIF_VOID) {
						l6 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 194:
							l6 = a1;
							break;
						default:
							l6 = EIF_VOID;
						}
					}
					t1 = ((l6)!=(EIF_VOID));
					if (t1) {
						l3 = (((T194*)(GE_void(l6)))->a3);
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l7;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T194f21(GE_void(l6), l1));
								t3 = (T194f20(C, l2));
								t2 = ((T6)(t3));
								t1 = ((t2)!=(l4));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
									l1 = (T194f24(GE_void(l6), l1));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					} else {
						l3 = l11;
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l7;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								t3 = (T194f20(C, l2));
								t2 = ((T6)(t3));
								t4 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T194f14(a1, l1)));
								t1 = ((t2)!=(t4));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
									l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					}
				} else {
					l8 = (T194f26(C, a2));
					if ((a1)==EIF_VOID) {
						l6 = EIF_VOID;
					} else {
						switch (((T0*)(a1))->id) {
						case 194:
							l6 = a1;
							break;
						default:
							l6 = EIF_VOID;
						}
					}
					t1 = ((l6)!=(EIF_VOID));
					if (t1) {
						l3 = (((T194*)(GE_void(l6)))->a3);
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l8;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T194f21(C, l2));
								l5 = (T194f21(GE_void(l6), l1));
								t1 = ((l4)!=(l5));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = (T194f24(C, l2));
									l1 = (T194f24(GE_void(l6), l1));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l8 = (T194f24(C, l8));
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					} else {
						l3 = l11;
						l7 = a2;
						t1 = (T6f1(&l7, l9));
						while (!(t1)) {
							l2 = l8;
							l10 = EIF_TRUE;
							l1 = (T6)(GE_int32(1));
							t1 = (T6f1(&l1, l3));
							while (!(t1)) {
								l4 = (T194f21(C, l2));
								t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f12(a1, l1):T194f14(a1, l1)));
								t1 = ((l4)!=(t2));
								if (t1) {
									l10 = EIF_FALSE;
									l1 = ((T6)((l3)+((T6)(GE_int32(1)))));
								} else {
									l2 = (T194f24(C, l2));
									l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
								}
								t1 = (T6f1(&l1, l3));
							}
							if (l10) {
								R = l7;
								l7 = ((T6)((l9)+((T6)(GE_int32(1)))));
							} else {
								l8 = (T194f24(C, l8));
								l7 = ((T6)((l7)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l7, l9));
						}
					}
				}
			}
		}
	}
	return R;
}

/* GEANT_TARGET.description_element_name */
unsigned char ge129os2256 = '\0';
T0* ge129ov2256;
T0* T26f19(T0* C)
{
	T0* R = 0;
	if (ge129os2256) {
		return ge129ov2256;
	} else {
		ge129os2256 = '\1';
	}
	R = GE_ms("description", 11);
	ge129ov2256 = R;
	return R;
}

/* GEANT_TARGET.string_ */
T0* T26f24(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].item */
T0* T190f8(T0* C)
{
	T0* R = 0;
	R = (((T317*)(GE_void(((T190*)(C))->a2)))->a2);
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].start */
void T190f10(T0* C)
{
	if (((T0*)(GE_void(((T190*)(C))->a3)))->id==96) {
		T96f37(((T190*)(C))->a3, C);
	} else {
		T95f23(((T190*)(C))->a3, C);
	}
}

/* XM_DOCUMENT.cursor_start */
void T95f23(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T95f12(C, a1));
	l2 = ((((T95*)(C))->a3)==(EIF_VOID));
	T190f14(a1, ((T95*)(C))->a3, EIF_FALSE, l2);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T95f28(C, a1);
	}
}

/* XM_ELEMENT.cursor_start */
void T96f37(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	l1 = (T96f23(C, a1));
	l2 = ((((T96*)(C))->a5)==(EIF_VOID));
	T190f14(a1, ((T96*)(C))->a5, EIF_FALSE, l2);
	t1 = ((T1)(!(l2)));
	if (t1) {
		t1 = (l1);
	}
	if (t1) {
		T96f41(C, a1);
	}
}

/* XM_ELEMENT.new_cursor */
T0* T96f19(T0* C)
{
	T0* R = 0;
	R = T190c9(C);
	return R;
}

/* DS_LINKED_LIST_CURSOR [XM_NODE].make */
T0* T190c9(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T190));
	*(T190*)C = GE_default190;
	((T190*)(C))->a3 = a1;
	((T190*)(C))->a4 = EIF_TRUE;
	return C;
}

/* GEANT_TARGET.prepared_arguments_from_formal_arguments */
T0* T26f45(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	T6 t2;
	T1 t3;
	T0* t4;
	T0* t5;
	R = a1;
	t1 = (((T34*)(GE_void(a1)))->a2);
	t2 = (((T34*)(GE_void(((T26*)(C))->a3)))->a2);
	t3 = ((t1)!=(t2));
	if (t3) {
		t1 = (((T34*)(GE_void(a1)))->a2);
		t4 = (T6f12(&t1));
		t1 = (((T34*)(GE_void(((T26*)(C))->a3)))->a2);
		t5 = (T6f12(&t1));
		t4 = GE_ma33((T6)7,
GE_ms("  error: number of actual and formal arguments do not match for target \'", 72),
((T26*)(C))->a1,
GE_ms("\' (", 3),
t4,
GE_ms(" against ", 9),
t5,
GE_ms(")", 1));
		T26f81(C, (T6)(GE_int32(1)), t4);
	}
	t3 = (T34f38(GE_void(a1)));
	if (t3) {
		R = (T26f78(C, a1));
	}
	t3 = (T34f33(GE_void(R), ((T26*)(C))->a3));
	t3 = ((T1)(!(t3)));
	if (t3) {
		t4 = GE_ma33((T6)3,
GE_ms("  error: actual and formal arguments do not match for target \'", 62),
((T26*)(C))->a1,
GE_ms("\'", 1));
		T26f81(C, (T6)(GE_int32(1)), t4);
	}
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.has_same_keys */
T1 T34f33(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	t1 = (((T34*)(GE_void(a1)))->a2);
	R = ((((T34*)(C))->a2)==(t1));
	if (R) {
		l1 = (T34f30(C));
		T64f8(GE_void(l1));
		t2 = (T64f5(GE_void(l1)));
		if (!(t2)) {
			t2 = ((T1)(!(R)));
		}
		while (!(t2)) {
			t3 = (T64f4(GE_void(l1)));
			R = (T34f36(GE_void(a1), t3));
			T64f9(GE_void(l1));
			t2 = (T64f5(GE_void(l1)));
			if (!(t2)) {
				t2 = ((T1)(!(R)));
			}
		}
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].forth */
void T64f9(T0* C)
{
	T79x1915T0(GE_void(((T64*)(C))->a1), C);
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].key */
T0* T64f4(T0* C)
{
	T0* R = 0;
	R = (T79x1772T0(GE_void(((T64*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].after */
T1 T64f5(T0* C)
{
	T1 R = 0;
	R = (T79x1913T0(GE_void(((T64*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].start */
void T64f8(T0* C)
{
	T79x1914T0(GE_void(((T64*)(C))->a1), C);
}

/* GEANT_TARGET.named_from_numbered_arguments */
T0* T26f78(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T34c45();
	l1 = (T34f30(GE_void(a1)));
	l2 = (T34f30(GE_void(((T26*)(C))->a3)));
	T64f8(GE_void(l1));
	T64f8(GE_void(l2));
	t1 = (T64f5(GE_void(l1)));
	while (!(t1)) {
		t2 = (T64f6(GE_void(l1)));
		t3 = (T64f4(GE_void(l2)));
		T34f66(GE_void(R), t2, t3);
		T64f9(GE_void(l1));
		T64f9(GE_void(l2));
		t1 = (T64f5(GE_void(l1)));
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [STRING_8, STRING_8].item */
T0* T64f6(T0* C)
{
	T0* R = 0;
	R = (T79x1929T0(GE_void(((T64*)(C))->a1), C));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.has_numbered_keys */
T1 T34f38(T0* C)
{
	T1 R = 0;
	R = (T34f36(C, GE_ms("1", 1)));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].item */
T0* T100f5(T0* C)
{
	T0* R = 0;
	R = (((T176*)(GE_void(((T100*)(C))->a2)))->z2[((T100*)(C))->a1]);
	return R;
}

/* GEANT_TARGET.target_arguments_stack */
T0* T26f27(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.set_current_working_directory */
void T54f33(T0* C, T0* a1)
{
	GE_rescue r;
	T1 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	if (GE_setjmp(r.jb) != 0) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			l1 = EIF_TRUE;
			goto GE_retry;
		}
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((T1)(!(l1)));
	if (t1) {
		t2 = (T54f13(C));
		l2 = (T76f2(GE_void(t2), a1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t1 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t1) {
			t2 = (T54f18(C));
			T81f7(GE_void(t2), l2);
		}
	}
	GE_last_rescue = r.previous;
}

/* EXECUTION_ENVIRONMENT.change_working_directory */
void T81f7(T0* C, T0* a1)
{
	T0* l1 = 0;
	T77 t1;
	T14 t2;
	l1 = (((((T0*)(GE_void(a1)))->id==17)?T17f11(a1):T194f19(a1)));
	(t1).id = 77;
	(t1).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
	t2 = ((t1).a1);
	((T81*)(C))->a1 = (T81f5(C, t2));
}

/* EXECUTION_ENVIRONMENT.eif_chdir */
T6 T81f5(T0* C, T14 a1)
{
	T6 R = 0;
	R = (T6)eif_chdir((char*)a1);
	return R;
}

/* KL_UNIX_FILE_SYSTEM.execution_environment */
unsigned char ge282os3796 = '\0';
T0* ge282ov3796;
T0* T54f18(T0* C)
{
	T0* R = 0;
	if (ge282os3796) {
		return ge282ov3796;
	} else {
		ge282os3796 = '\1';
	}
	R = T81c6();
	ge282ov3796 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.string_ */
T0* T54f13(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.set_current_working_directory */
void T53f37(T0* C, T0* a1)
{
	GE_rescue r;
	T1 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	if (GE_setjmp(r.jb) != 0) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			l1 = EIF_TRUE;
			goto GE_retry;
		}
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((T1)(!(l1)));
	if (t1) {
		t2 = (T53f12(C));
		l2 = (T76f2(GE_void(t2), a1));
		t3 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t1 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t1) {
			t2 = (T53f20(C));
			T81f7(GE_void(t2), l2);
		}
	}
	GE_last_rescue = r.previous;
}

/* KL_WINDOWS_FILE_SYSTEM.execution_environment */
T0* T53f20(T0* C)
{
	T0* R = 0;
	if (ge282os3796) {
		return ge282ov3796;
	} else {
		ge282os3796 = '\1';
	}
	R = T81c6();
	ge282ov3796 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.string_ */
T0* T53f12(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_TARGET.exit_application */
void T26f81(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(GE_void(a2)))->a2);
		l2 = (((T33*)(GE_void(a2)))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T26f17(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(GE_void(a2), l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T26f17(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T26f17(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T26f17(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T26f18(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_TARGET.exceptions */
T0* T26f18(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_TARGET.std */
T0* T26f17(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.directory_exists */
T1 T54f24(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T54f25(C));
	T352f36(GE_void(t1), a1);
	t1 = (T54f25(C));
	R = (T352f11(GE_void(t1)));
	return R;
}

/* KL_DIRECTORY.exists */
T1 T352f11(T0* C)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	t1 = (((((T0*)(GE_void(((T352*)(C))->a1)))->id==17)?((T17*)(((T352*)(C))->a1))->a2:((T194*)(((T352*)(C))->a1))->a1));
	t2 = (T6f1(&t1, (T6)(GE_int32(0))));
	if (t2) {
		R = (T352f15(C));
	}
	return R;
}

/* KL_DIRECTORY.old_exists */
T1 T352f15(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T77 t1;
	T14 t2;
	l1 = (((((T0*)(GE_void(((T352*)(C))->a1)))->id==17)?T17f11(((T352*)(C))->a1):T194f19(((T352*)(C))->a1)));
	(t1).id = 77;
	(t1).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
	t2 = ((t1).a1);
	R = (T352f10(C, t2));
	return R;
}

/* KL_DIRECTORY.eif_dir_exists */
T1 T352f10(T0* C, T14 a1)
{
	T1 R = 0;
	R = (T1)EIF_TEST((EIF_BOOLEAN )eif_dir_exists((char *)a1));
	return R;
}

/* KL_DIRECTORY.reset */
void T352f36(T0* C, T0* a1)
{
	T352f35(C, a1);
}

/* KL_DIRECTORY.make */
void T352f35(T0* C, T0* a1)
{
	T0* t1;
	((T352*)(C))->a2 = a1;
	t1 = (T352f13(C));
	t1 = (T76f2(GE_void(t1), a1));
	T352f37(C, t1);
}

/* KL_DIRECTORY.make */
T0* T352c35(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T352));
	*(T352*)C = GE_default352;
	((T352*)(C))->a2 = a1;
	t1 = (T352f13(C));
	t1 = (T76f2(GE_void(t1), a1));
	T352f37(C, t1);
	return C;
}

/* KL_DIRECTORY.old_make */
void T352f37(T0* C, T0* a1)
{
	((T352*)(C))->a1 = a1;
	((T352*)(C))->a3 = (T6)(GE_int32(1));
}

/* KL_DIRECTORY.string_ */
T0* T352f13(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.tmp_directory */
unsigned char ge282os3794 = '\0';
T0* ge282ov3794;
T0* T54f25(T0* C)
{
	T0* R = 0;
	if (ge282os3794) {
		return ge282ov3794;
	} else {
		ge282os3794 = '\1';
	}
	R = T352c35(ge282ov3795);
	ge282ov3794 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.directory_exists */
T1 T53f27(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T53f28(C));
	T352f36(GE_void(t1), a1);
	t1 = (T53f28(C));
	R = (T352f11(GE_void(t1)));
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.tmp_directory */
T0* T53f28(T0* C)
{
	T0* R = 0;
	if (ge282os3794) {
		return ge282ov3794;
	} else {
		ge282os3794 = '\1';
	}
	R = T352c35(ge282ov3795);
	ge282ov3794 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.current_working_directory */
T0* T54f23(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T54f18(C));
	R = (T81f2(GE_void(t1)));
	return R;
}

/* EXECUTION_ENVIRONMENT.current_working_directory */
T0* T81f2(T0* C)
{
	T0* R = 0;
	R = (T0*)dir_current();
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.current_working_directory */
T0* T53f26(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T53f20(C));
	R = (T81f2(GE_void(t1)));
	return R;
}

/* GEANT_TARGET.file_system */
unsigned char ge203os1588 = '\0';
T0* ge203ov1588;
T0* T26f44(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	if (ge203os1588) {
		return ge203ov1588;
	} else {
		ge203os1588 = '\1';
	}
	t1 = (T26f75(C));
	t2 = (T51f1(GE_void(t1)));
	if (t2) {
		R = (T26f76(C));
	} else {
		t1 = (T26f75(C));
		t2 = (T51f2(GE_void(t1)));
		if (t2) {
			R = (T26f77(C));
		} else {
			R = (T26f77(C));
		}
	}
	ge203ov1588 = R;
	return R;
}

/* GEANT_TARGET.unix_file_system */
unsigned char ge203os1591 = '\0';
T0* ge203ov1591;
T0* T26f77(T0* C)
{
	T0* R = 0;
	if (ge203os1591) {
		return ge203ov1591;
	} else {
		ge203os1591 = '\1';
	}
	R = T54c32();
	ge203ov1591 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.make */
T0* T54c32(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T54));
	*(T54*)C = GE_default54;
	return C;
}

/* KL_OPERATING_SYSTEM.is_unix */
unsigned char ge298os3012 = '\0';
T1 ge298ov3012;
T1 T51f2(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	if (ge298os3012) {
		return ge298ov3012;
	} else {
		ge298os3012 = '\1';
	}
	l2 = (T51f3(C, GE_ms("GOBO_OS", 7)));
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t2 = (((T17*)(GE_void(l2)))->a2);
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = (T17f23(GE_void(l2), GE_ms("unix", 4)));
		if (t1) {
			R = EIF_TRUE;
		}
	} else {
		l1 = (T51f4(C));
		t2 = (((T17*)(GE_void(l1)))->a2);
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t1) {
			t3 = (T17f9(GE_void(l1), (T6)(GE_int32(1))));
			R = ((t3)==((T2)('/')));
		}
	}
	ge298ov3012 = R;
	return R;
}

/* KL_OPERATING_SYSTEM.current_working_directory */
T0* T51f4(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T51f5(C));
	R = (T81f2(GE_void(t1)));
	return R;
}

/* KL_OPERATING_SYSTEM.execution_environment */
unsigned char ge298os3016 = '\0';
T0* ge298ov3016;
T0* T51f5(T0* C)
{
	T0* R = 0;
	if (ge298os3016) {
		return ge298ov3016;
	} else {
		ge298os3016 = '\1';
	}
	R = T81c6();
	ge298ov3016 = R;
	return R;
}

/* STRING_8.is_equal */
T1 T17f23(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((a1)==(C));
	if (t1) {
		R = EIF_TRUE;
	} else {
		l1 = ((T17*)(C))->a2;
		t2 = (((T17*)(a1))->a2);
		t1 = ((l1)==(t2));
		if (t1) {
			t3 = (((T17*)(a1))->a1);
			t2 = (T17f25(C, ((T17*)(C))->a1, t3, l1));
			R = ((t2)==((T6)(GE_int32(0))));
		}
	}
	return R;
}

/* STRING_8.str_strict_cmp */
T6 T17f25(T0* C, T0* a1, T0* a2, T6 a3)
{
	T6 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	t1 = ((l1)==(a3));
	while (!(t1)) {
		t2 = (((T15*)(GE_void(a1)))->z2[l1]);
		l2 = ((T6)(t2));
		t2 = (((T15*)(GE_void(a2)))->z2[l1]);
		l3 = ((T6)(t2));
		t1 = ((l2)!=(l3));
		if (t1) {
			R = ((T6)((l2)-(l3)));
			l1 = ((T6)((a3)-((T6)(GE_int32(1)))));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(a3));
	}
	return R;
}

/* KL_OPERATING_SYSTEM.variable_value */
T0* T51f3(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T51f5(C));
	R = (T81f4(GE_void(t1), a1));
	return R;
}

/* GEANT_TARGET.windows_file_system */
unsigned char ge203os1589 = '\0';
T0* ge203ov1589;
T0* T26f76(T0* C)
{
	T0* R = 0;
	if (ge203os1589) {
		return ge203ov1589;
	} else {
		ge203os1589 = '\1';
	}
	R = T53c36();
	ge203ov1589 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.make */
T0* T53c36(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T53));
	*(T53*)C = GE_default53;
	((T53*)(C))->a1 = (T2)('/');
	return C;
}

/* KL_OPERATING_SYSTEM.is_windows */
unsigned char ge298os3011 = '\0';
T1 ge298ov3011;
T1 T51f1(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	if (ge298os3011) {
		return ge298ov3011;
	} else {
		ge298os3011 = '\1';
	}
	l2 = (T51f3(C, GE_ms("GOBO_OS", 7)));
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t2 = (((T17*)(GE_void(l2)))->a2);
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = (T17f23(GE_void(l2), GE_ms("windows", 7)));
		if (t1) {
			R = EIF_TRUE;
		}
	} else {
		l3 = (T51f3(C, GE_ms("OS", 2)));
		t1 = ((l3)!=(EIF_VOID));
		if (t1) {
			t1 = (T17f23(GE_void(l3), GE_ms("Windows_NT", 10)));
		}
		if (t1) {
			R = EIF_TRUE;
		} else {
			l1 = (T51f4(C));
			t2 = (((T17*)(GE_void(l1)))->a2);
			t1 = (T6f5(&t2, (T6)(GE_int32(3))));
			if (t1) {
				t3 = (T17f9(GE_void(l1), (T6)(GE_int32(2))));
				t1 = ((t3)==((T2)(':')));
				if (t1) {
					t3 = (T17f9(GE_void(l1), (T6)(GE_int32(3))));
					t1 = ((t3)==((T2)('\\')));
				}
				if (t1) {
					R = EIF_TRUE;
				} else {
					t3 = (T17f9(GE_void(l1), (T6)(GE_int32(1))));
					t1 = ((t3)==((T2)('\\')));
					if (t1) {
						t3 = (T17f9(GE_void(l1), (T6)(GE_int32(2))));
						t1 = ((t3)==((T2)('\\')));
					}
					if (t1) {
						R = EIF_TRUE;
					}
				}
			}
		}
	}
	ge298ov3011 = R;
	return R;
}

/* GEANT_TARGET.operating_system */
T0* T26f75(T0* C)
{
	T0* R = 0;
	if (ge224os1592) {
		return ge224ov1592;
	} else {
		ge224os1592 = '\1';
	}
	R = T51c7();
	ge224ov1592 = R;
	return R;
}

/* GEANT_STRING_INTERPRETER.interpreted_string */
T0* T243f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T2 l4 = 0;
	T1 l5 = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	T6 t4;
	l2 = (T6)(GE_int32(1));
	l3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T243f2(C));
	R = (T76f3(GE_void(t1), a1, l3));
	t2 = (T6f1(&l2, l3));
	while (!(t2)) {
		l4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T194f10(a1, l2)));
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t2 = ((l4)!=((T2)('$')));
		if (t2) {
			t2 = ((l4)!=((T2)('\000')));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f34(R, l4);
				} else {
					T194f56(R, l4);
				}
			} else {
				t1 = (T243f2(C));
				t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
				t4 = ((T6)((l2)-((T6)(GE_int32(1)))));
				R = (T76f4(GE_void(t1), R, a1, t3, t4));
			}
		} else {
			t2 = (T6f1(&l2, l3));
			if (t2) {
				if (((T0*)(GE_void(R)))->id==17) {
					T17f34(R, (T2)('$'));
				} else {
					T194f56(R, (T2)('$'));
				}
			} else {
				l4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T194f10(a1, l2)));
				t2 = ((l4)==((T2)('$')));
				if (t2) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f34(R, (T2)('$'));
					} else {
						T194f56(R, (T2)('$'));
					}
					l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
				} else {
					t1 = (T243f2(C));
					l1 = (T76f3(GE_void(t1), a1, (T6)(GE_int32(5))));
					t2 = ((l4)==((T2)('{')));
					if (t2) {
						l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
						l5 = EIF_FALSE;
						t2 = (T6f1(&l2, l3));
						if (!(t2)) {
							t2 = (l5);
						}
						while (!(t2)) {
							l4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T194f10(a1, l2)));
							t2 = ((l4)==((T2)('}')));
							if (t2) {
								l5 = EIF_TRUE;
							} else {
								t2 = ((l4)!=((T2)('\000')));
								if (t2) {
									if (((T0*)(GE_void(l1)))->id==17) {
										T17f34(l1, l4);
									} else {
										T194f56(l1, l4);
									}
								} else {
									t1 = (T243f2(C));
									T76f20(GE_void(t1), l1, a1, l2, l2);
								}
							}
							l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
							t2 = (T6f1(&l2, l3));
							if (!(t2)) {
								t2 = (l5);
							}
						}
					} else {
						l5 = EIF_FALSE;
						t2 = (T6f1(&l2, l3));
						if (!(t2)) {
							t2 = (l5);
						}
						while (!(t2)) {
							l4 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T194f10(a1, l2)));
							switch (l4) {
							case (T2)'a':
							case (T2)'b':
							case (T2)'c':
							case (T2)'d':
							case (T2)'e':
							case (T2)'f':
							case (T2)'g':
							case (T2)'h':
							case (T2)'i':
							case (T2)'j':
							case (T2)'k':
							case (T2)'l':
							case (T2)'m':
							case (T2)'n':
							case (T2)'o':
							case (T2)'p':
							case (T2)'q':
							case (T2)'r':
							case (T2)'s':
							case (T2)'t':
							case (T2)'u':
							case (T2)'v':
							case (T2)'w':
							case (T2)'x':
							case (T2)'y':
							case (T2)'z':
							case (T2)'A':
							case (T2)'B':
							case (T2)'C':
							case (T2)'D':
							case (T2)'E':
							case (T2)'F':
							case (T2)'G':
							case (T2)'H':
							case (T2)'I':
							case (T2)'J':
							case (T2)'K':
							case (T2)'L':
							case (T2)'M':
							case (T2)'N':
							case (T2)'O':
							case (T2)'P':
							case (T2)'Q':
							case (T2)'R':
							case (T2)'S':
							case (T2)'T':
							case (T2)'U':
							case (T2)'V':
							case (T2)'W':
							case (T2)'X':
							case (T2)'Y':
							case (T2)'Z':
							case (T2)'0':
							case (T2)'1':
							case (T2)'2':
							case (T2)'3':
							case (T2)'4':
							case (T2)'5':
							case (T2)'6':
							case (T2)'7':
							case (T2)'8':
							case (T2)'9':
							case (T2)(T2)('_'):
								if (((T0*)(GE_void(l1)))->id==17) {
									T17f34(l1, l4);
								} else {
									T194f56(l1, l4);
								}
								l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
								break;
							default:
								l5 = EIF_TRUE;
								break;
							}
							t2 = (T6f1(&l2, l3));
							if (!(t2)) {
								t2 = (l5);
							}
						}
					}
					l1 = (T243f3(C, l1));
					t1 = (T243f2(C));
					R = (T76f5(GE_void(t1), R, l1));
				}
			}
		}
		t2 = (T6f1(&l2, l3));
	}
	return R;
}

/* GEANT_STRING_INTERPRETER.variable_value */
T0* T243f3(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?T17f29(a1):T194f50(a1)));
	if (t1) {
		R = (T243f4(C, a1));
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		t1 = (((((T0*)(GE_void(((T243*)(C))->a1)))->id==244)?T244f3(((T243*)(C))->a1, a1):T58f5(((T243*)(C))->a1, a1)));
		if (t1) {
			R = (((((T0*)(GE_void(((T243*)(C))->a1)))->id==244)?T244f2(((T243*)(C))->a1, a1):T58f7(((T243*)(C))->a1, a1)));
			t1 = ((R)!=(EIF_VOID));
			if (t1) {
				R = (T243f6(C, R));
			}
		}
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		R = (T243f4(C, a1));
	}
	return R;
}

/* GEANT_STRING_INTERPRETER.expanded_variable_value */
T0* T243f6(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = a1;
	R = (T243f5(C, l1));
	t1 = (T243f2(C));
	t2 = (T76f1(GE_void(t1), R, l1));
	while (!(t2)) {
		l1 = R;
		R = (T243f5(C, l1));
		t1 = (T243f2(C));
		t2 = (T76f1(GE_void(t1), R, l1));
	}
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.value */
T0* T58f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (T58f2(C));
	t2 = (T76f1(GE_void(t1), a1, GE_ms("cwd", 3)));
	if (t2) {
		t1 = (T58f9(C));
		R = (((((T0*)(GE_void(t1)))->id==53)?T53f10(t1):T54f10(t1)));
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		t1 = (T58f3(C));
		t3 = (((T100*)(GE_void(t1)))->a1);
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			t1 = (T58f3(C));
			t1 = (T100f5(GE_void(t1)));
			T34f67(GE_void(t1), a1);
			t1 = (T58f3(C));
			t1 = (T100f5(GE_void(t1)));
			t2 = (T34f32(GE_void(t1)));
			if (t2) {
				t1 = (T58f3(C));
				t1 = (T100f5(GE_void(t1)));
				R = (T34f43(GE_void(t1)));
			}
		}
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		t1 = (T58f4(C));
		T29f66(GE_void(t1), a1);
		t1 = (T58f4(C));
		t2 = (T29f35(GE_void(t1)));
		if (t2) {
			t1 = (T58f4(C));
			R = (T29f42(GE_void(t1)));
		}
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		T25f79(GE_void(((T58*)(C))->a1), a1);
		t2 = (T25f43(GE_void(((T58*)(C))->a1)));
		if (t2) {
			R = (T25f50(GE_void(((T58*)(C))->a1)));
		}
	}
	t2 = ((R)==(EIF_VOID));
	if (t2) {
		t1 = (T58f6(C));
		t1 = (T99f5(GE_void(t1), a1));
		t2 = ((t1)!=(EIF_VOID));
		if (t2) {
			t1 = (T58f6(C));
			R = (T99f5(GE_void(t1), a1));
		}
	}
	return R;
}

/* GEANT_PROJECT_VARIABLES.found_item */
T0* T25f50(T0* C)
{
	T0* R = 0;
	R = (T25f52(C, ((T25*)(C))->a10));
	return R;
}

/* GEANT_PROJECT_VARIABLES.item_storage_item */
T0* T25f52(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T25*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_VARIABLES.found_item */
T0* T29f42(T0* C)
{
	T0* R = 0;
	R = (T29f34(C, ((T29*)(C))->a9));
	return R;
}

/* GEANT_VARIABLES.item_storage_item */
T0* T29f34(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T29*)(C))->a12)))->z2[a1]);
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.found_item */
T0* T34f43(T0* C)
{
	T0* R = 0;
	R = (T34f40(C, ((T34*)(C))->a9));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.item_storage_item */
T0* T34f40(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T34*)(C))->a12)))->z2[a1]);
	return R;
}

/* KL_UNIX_FILE_SYSTEM.cwd */
T0* T54f10(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T54f18(C));
	R = (T81f2(GE_void(t1)));
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.cwd */
T0* T53f10(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T53f20(C));
	R = (T81f2(GE_void(t1)));
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.file_system */
T0* T58f9(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	if (ge203os1588) {
		return ge203ov1588;
	} else {
		ge203os1588 = '\1';
	}
	t1 = (T58f11(C));
	t2 = (T51f1(GE_void(t1)));
	if (t2) {
		R = (T58f12(C));
	} else {
		t1 = (T58f11(C));
		t2 = (T51f2(GE_void(t1)));
		if (t2) {
			R = (T58f13(C));
		} else {
			R = (T58f13(C));
		}
	}
	ge203ov1588 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.unix_file_system */
T0* T58f13(T0* C)
{
	T0* R = 0;
	if (ge203os1591) {
		return ge203ov1591;
	} else {
		ge203os1591 = '\1';
	}
	R = T54c32();
	ge203ov1591 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.windows_file_system */
T0* T58f12(T0* C)
{
	T0* R = 0;
	if (ge203os1589) {
		return ge203ov1589;
	} else {
		ge203os1589 = '\1';
	}
	R = T53c36();
	ge203ov1589 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.operating_system */
T0* T58f11(T0* C)
{
	T0* R = 0;
	if (ge224os1592) {
		return ge224ov1592;
	} else {
		ge224os1592 = '\1';
	}
	R = T51c7();
	ge224ov1592 = R;
	return R;
}

/* GEANT_VARIABLES_VARIABLE_RESOLVER.value */
T0* T244f2(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	t1 = (T244f3(C, a1));
	if (t1) {
		R = (((((T0*)(GE_void(((T244*)(C))->a1)))->id==34)?T34f37(((T244*)(C))->a1, a1):T29f33(((T244*)(C))->a1, a1)));
	}
	return R;
}

/* GEANT_VARIABLES.item */
T0* T29f33(T0* C, T0* a1)
{
	T0* R = 0;
	T29f50(C, a1);
	R = (T29f34(C, ((T29*)(C))->a1));
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.item */
T0* T34f37(T0* C, T0* a1)
{
	T0* R = 0;
	T34f50(C, a1);
	R = (T34f40(C, ((T34*)(C))->a1));
	return R;
}

/* GEANT_VARIABLES_VARIABLE_RESOLVER.has */
T1 T244f3(T0* C, T0* a1)
{
	T1 R = 0;
	R = (((((T0*)(GE_void(((T244*)(C))->a1)))->id==34)?T34f36(((T244*)(C))->a1, a1):T29f32(((T244*)(C))->a1, a1)));
	return R;
}

/* GEANT_VARIABLES.has */
T1 T29f32(T0* C, T0* a1)
{
	T1 R = 0;
	T29f50(C, a1);
	R = ((((T29*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_STRING_INTERPRETER.default_variable_value */
T0* T243f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T243f2(C));
	t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t2 = ((T6)((t2)+((T6)(GE_int32(3)))));
	R = (T76f3(GE_void(t1), a1, t2));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, GE_ms("${", 2));
	} else {
		T194f55(R, GE_ms("${", 2));
	}
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, a1);
	} else {
		T194f55(R, a1);
	}
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, GE_ms("}", 1));
	} else {
		T194f55(R, GE_ms("}", 1));
	}
	return R;
}

/* KL_STRING_ROUTINES.append_substring_to_string */
void T76f20(T0* C, T0* a1, T0* a2, T6 a3, T6 a4)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T2 t2;
	if ((a1)==EIF_VOID) {
		l1 = EIF_VOID;
	} else {
		switch (((T0*)(a1))->id) {
		case 194:
			l1 = a1;
			break;
		default:
			l1 = EIF_VOID;
		}
	}
	t1 = ((l1)!=(EIF_VOID));
	if (t1) {
		T194f57(GE_void(l1), a2, a3, a4);
	} else {
		l2 = a3;
		t1 = (T6f1(&l2, a4));
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(a2)))->id==17)?T17f9(a2, l2):T194f10(a2, l2)));
			if (((T0*)(GE_void(a1)))->id==17) {
				T17f34(a1, t2);
			} else {
				T194f56(a1, t2);
			}
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l2, a4));
		}
	}
}

/* KL_STRING_ROUTINES.new_empty_string */
T0* T76f3(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	t1 = (T76f8(C));
	t2 = (T82f1(GE_void(t1), a1, ge308ov4806));
	if (t2) {
		R = T17c33(a2);
	} else {
		if ((a1)==EIF_VOID) {
			l1 = EIF_VOID;
		} else {
			switch (((T0*)(a1))->id) {
			case 194:
				l1 = a1;
				break;
			default:
				l1 = EIF_VOID;
			}
		}
		t2 = ((l1)!=(EIF_VOID));
		if (t2) {
			R = (T194f9(GE_void(l1), a2));
		} else {
			R = (T76f7(C, a1));
			if (((T0*)(GE_void(R)))->id==17) {
				T17f38(R);
			} else {
				T194f75(R);
			}
		}
	}
	return R;
}

/* UC_UTF8_STRING.old_wipe_out */
void T194f75(T0* C)
{
	((T194*)(C))->a1 = (T6)(GE_int32(0));
	T194f75p1(C);
	T194f78(C);
}

/* UC_UTF8_STRING.wipe_out */
void T194f78(T0* C)
{
	((T194*)(C))->a3 = (T6)(GE_int32(0));
	T194f61(C, (T6)(GE_int32(0)));
}

/* UC_UTF8_STRING.wipe_out */
void T194f75p1(T0* C)
{
	((T194*)(C))->a2 = T15c9((T6)(GE_int32(1)));
	((T194*)(C))->a1 = (T6)(GE_int32(0));
	((T194*)(C))->a4 = (T6)(GE_int32(0));
}

/* STRING_8.wipe_out */
void T17f38(T0* C)
{
	((T17*)(C))->a1 = T15c9((T6)(GE_int32(1)));
	((T17*)(C))->a2 = (T6)(GE_int32(0));
	((T17*)(C))->a3 = (T6)(GE_int32(0));
}

/* GEANT_STRING_INTERPRETER.string_ */
T0* T243f2(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* UC_UTF8_STRING.out */
T0* T194f16(T0* C)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T2 l4 = 0;
	T2 l5 = 0;
	T6 l6 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	T2 t4;
	l2 = ((T194*)(C))->a1;
	R = T17c33(l2);
	t1 = ((l2)==(((T194*)(C))->a3));
	if (t1) {
		t2 = (T194f31(C));
		l5 = ((T2)('\177'));
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l4 = (T194f20(C, l1));
			t1 = (T2f17(&l4, l5));
			if (t1) {
				T17f34(GE_void(R), l4);
			} else {
				T17f34(GE_void(R), (T2)('\045'));
				T17f34(GE_void(R), (T2)('/'));
				t3 = ((T6)(l4));
				t2 = (T6f12(&t3));
				T17f39(GE_void(R), t2);
				T17f34(GE_void(R), (T2)('/'));
			}
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
	} else {
		l2 = ((T194*)(C))->a3;
		t2 = (T194f31(C));
		l6 = ((T6)(GE_int32(127)));
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			l3 = (T194f21(C, l1));
			t1 = (T6f9(&l3, l6));
			if (t1) {
				t2 = (T194f23(C));
				t4 = (T196f2(GE_void(t2), l3));
				T17f34(GE_void(R), t4);
			} else {
				T17f34(GE_void(R), (T2)('\045'));
				T17f34(GE_void(R), (T2)('/'));
				t2 = (T6f12(&l3));
				T17f39(GE_void(R), t2);
				T17f34(GE_void(R), (T2)('/'));
			}
			l1 = (T194f24(C, l1));
			t1 = (T6f1(&l1, l2));
		}
	}
	return R;
}

/* UC_UTF8_STRING.unicode */
unsigned char ge232os4812 = '\0';
T0* ge232ov4812;
T0* T194f31(T0* C)
{
	T0* R = 0;
	if (ge232os4812) {
		return ge232ov4812;
	} else {
		ge232os4812 = '\1';
	}
	R = T251c29();
	ge232ov4812 = R;
	return R;
}

/* UC_UNICODE_ROUTINES.default_create */
T0* T251c29(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T251));
	*(T251*)C = GE_default251;
	return C;
}

/* STRING_8.out */
T0* T17f4(T0* C)
{
	T0* R = 0;
	R = T17c33(((T17*)(C))->a2);
	T17f35(GE_void(R), C);
	return R;
}

/* XM_ELEMENT.attribute_by_name */
T0* T96f21(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l2 = T318c11();
	l1 = (T96f19(C));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		T191x5736T0(GE_void(t2), l2);
		t1 = (T318f9(GE_void(l2)));
		if (t1) {
			t2 = (((T318*)(GE_void(l2)))->a2);
			t1 = (T96f9(C, t2, a1));
		}
		if (t1) {
			R = (((T318*)(GE_void(l2)))->a2);
			T190f12(GE_void(l1));
		} else {
			T190f11(GE_void(l1));
		}
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* XM_ELEMENT.attribute_same_name */
T1 T96f9(T0* C, T0* a1, T0* a2)
{
	T1 R = 0;
	T0* t1;
	T1 t2;
	T6 t3;
	t1 = (((T189*)(GE_void(a1)))->a1);
	t2 = (T96f10(C, t1, a2));
	if (t2) {
		t1 = (((T189*)(GE_void(a1)))->a2);
		t1 = (((T314*)(GE_void(t1)))->a1);
		t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
		R = ((t3)==((T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* XM_NODE_TYPER.is_attribute */
T1 T318f9(T0* C)
{
	T1 R = 0;
	R = ((((T318*)(C))->a2)!=(EIF_VOID));
	return R;
}

/* GEANT_STRING_INTERPRETER.set_variable_resolver */
void T243f8(T0* C, T0* a1)
{
	((T243*)(C))->a1 = a1;
}

/* GEANT_PROJECT_VARIABLE_RESOLVER.set_variables */
void T58f17(T0* C, T0* a1)
{
	((T58*)(C))->a1 = a1;
}

/* GEANT_TARGET.project_variables_resolver */
T0* T26f28(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_STRING_INTERPRETER.make */
T0* T243c7(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T243));
	*(T243*)C = GE_default243;
	return C;
}

/* XM_ELEMENT.has_attribute_by_name */
T1 T96f20(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l2 = T318c11();
	l1 = (T96f19(C));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		T191x5736T0(GE_void(t2), l2);
		t1 = (T318f9(GE_void(l2)));
		if (t1) {
			t2 = (((T318*)(GE_void(l2)))->a2);
			t1 = (T96f9(C, t2, a1));
		}
		if (t1) {
			R = EIF_TRUE;
			T190f12(GE_void(l1));
		} else {
			T190f11(GE_void(l1));
		}
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_TARGET.dir_attribute_name */
T0* T26f43(T0* C)
{
	T0* R = 0;
	if (ge136os2243) {
		return ge136ov2243;
	} else {
		ge136os2243 = '\1';
	}
	R = GE_ms("dir", 3);
	ge136ov2243 = R;
	return R;
}

/* GEANT_PROJECT.log */
void T22f41(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	l1 = (((T33*)(a1))->a2);
	l2 = (((T33*)(a1))->a3);
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t2 = (T33f4(a1, l1));
		T68f12(GE_void(((T22*)(C))->a6), t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
	}
	T68f13(GE_void(((T22*)(C))->a6));
	T68f18(GE_void(((T22*)(C))->a6));
}

/* KL_STDOUT_FILE.flush */
void T68f18(T0* C)
{
	T68f19(C);
}

/* KL_STDOUT_FILE.old_flush */
void T68f19(T0* C)
{
	T68f20(C, ((T68*)(C))->a1);
}

/* KL_STDOUT_FILE.file_flush */
void T68f20(T0* C, T14 a1)
{
	file_flush((FILE *)a1);
}

/* KL_STDOUT_FILE.put_new_line */
void T68f13(T0* C)
{
	T68f12(C, ge306ov2996);
}

/* KL_STDOUT_FILE.put_string */
void T68f12(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* t1;
	t1 = (T68f6(C));
	l1 = (T76f2(GE_void(t1), a1));
	T68f16(C, l1);
}

/* KL_STDOUT_FILE.old_put_string */
void T68f16(T0* C, T0* a1)
{
	T0* l1 = 0;
	T6 t1;
	T1 t2;
	T77 t3;
	T14 t4;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t2 = ((t1)!=((T6)(GE_int32(0))));
	if (t2) {
		l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a1:((T194*)(a1))->a2));
		(t3).id = 77;
		(t3).a1 = ((l1?(T14)(GE_types[((T0*)(l1))->id].is_special?(T14)((T15*)(l1))->z2:(T14)l1):(T14)0));
		t4 = ((t3).a1);
		t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		T68f17(C, ((T68*)(C))->a1, t4, t1);
	}
}

/* KL_STDOUT_FILE.console_ps */
void T68f17(T0* C, T14 a1, T14 a2, T6 a3)
{
	console_ps((FILE *)a1,( char *)a2,( EIF_INTEGER)a3);
}

/* KL_STDOUT_FILE.string_ */
T0* T68f6(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_PROJECT.target_name */
T0* T22f20(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T1 t1;
	T0* t2;
	l1 = (T31f29(GE_void(((T22*)(C))->a1)));
	T123f9(GE_void(l1));
	t1 = (T123f5(GE_void(l1)));
	while (!(t1)) {
		t2 = (T123f6(GE_void(l1)));
		t1 = ((a1)==(t2));
		if (t1) {
			R = (T123f7(GE_void(l1)));
			T123f13(GE_void(l1));
		} else {
			T123f10(GE_void(l1));
		}
		t1 = (T123f5(GE_void(l1)));
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].forth */
void T123f10(T0* C)
{
	T31f65(GE_void(((T123*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_forth */
void T31f65(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l4 = (((T123*)(a1))->a2);
	t1 = ((l4)==((T6)(GE_int32(-1))));
	if (t1) {
		l3 = EIF_TRUE;
	} else {
		l1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	}
	l2 = ((T31*)(C))->a5;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T31f32(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T123f14(a1, (T6)(GE_int32(-2)));
		t1 = ((T1)(!(l3)));
		if (t1) {
			T31f69(C, a1);
		}
	} else {
		T123f14(a1, l1);
		if (l3) {
			T31f70(C, a1);
		}
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].add_traversing_cursor */
void T31f70(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T31*)(C))->a17));
	if (t1) {
		t2 = (((T123*)(GE_void(((T31*)(C))->a17)))->a3);
		T123f15(a1, t2);
		T123f15(GE_void(((T31*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].set_next_cursor */
void T123f15(T0* C, T0* a1)
{
	((T123*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].remove_traversing_cursor */
void T31f69(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T31*)(C))->a17));
	if (t1) {
		l2 = ((T31*)(C))->a17;
		l1 = (((T123*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T123*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T123*)(a1))->a3);
			T123f15(GE_void(l2), t2);
			T123f15(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].set_position */
void T123f14(T0* C, T6 a1)
{
	((T123*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].clashes_item */
T6 T31f32(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T31*)(C))->a13)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].go_after */
void T123f13(T0* C)
{
	T31f75(GE_void(((T123*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_go_after */
void T31f75(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T31f40(C, a1));
	T123f14(a1, (T6)(GE_int32(-2)));
	t1 = ((T1)(!(l1)));
	if (t1) {
		T31f69(C, a1);
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_off */
T1 T31f40(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T123*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].key */
T0* T123f7(T0* C)
{
	T0* R = 0;
	R = (T31f35(GE_void(((T123*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_key */
T0* T31f35(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T123*)(a1))->a2);
	R = (T31f31(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].key_storage_item */
T0* T31f31(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T31*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].item */
T0* T123f6(T0* C)
{
	T0* R = 0;
	R = (T31f34(GE_void(((T123*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_item */
T0* T31f34(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T123*)(a1))->a2);
	R = (T31f27(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].item_storage_item */
T0* T31f27(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T119*)(GE_void(((T31*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].after */
T1 T123f5(T0* C)
{
	T1 R = 0;
	R = (T31f33(GE_void(((T123*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_after */
T1 T31f33(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T123*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-2))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].start */
void T123f9(T0* C)
{
	T31f64(GE_void(((T123*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_start */
void T31f64(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = (T31f39(C));
	if (t1) {
		T123f14(a1, (T6)(GE_int32(-2)));
	} else {
		l3 = (T31f40(C, a1));
		l1 = (T6)(GE_int32(1));
		l2 = ((T31*)(C))->a5;
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (T31f32(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = (T6f1(&l1, l2));
		if (t1) {
			T123f14(a1, (T6)(GE_int32(-2)));
			t1 = ((T1)(!(l3)));
			if (t1) {
				T31f69(C, a1);
			}
		} else {
			T123f14(a1, l1);
			if (l3) {
				T31f70(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].is_empty */
T1 T31f39(T0* C)
{
	T1 R = 0;
	R = ((((T31*)(C))->a8)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].new_cursor */
T0* T31f29(T0* C)
{
	T0* R = 0;
	R = T123c8(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].make */
T0* T123c8(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T123));
	*(T123*)C = GE_default123;
	((T123*)(C))->a1 = a1;
	((T123*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* GEANT_TARGET.is_enabled */
T1 T26f42(T0* C)
{
	T1 R = 0;
	T1 l1 = 0;
	T1 l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	t1 = (T26f28(C));
	t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a7);
	T58f17(GE_void(t1), t2);
	l1 = EIF_TRUE;
	l2 = EIF_FALSE;
	t1 = (T26f73(C));
	t3 = (T26f35(C, t1));
	if (t3) {
		t1 = (T26f73(C));
		t1 = (T96f21(GE_void(((T26*)(C))->a2), t1));
		l3 = (((T189*)(GE_void(t1)))->a3);
		t1 = (T26f28(C));
		l1 = (T58f8(GE_void(t1), l3));
		t1 = (T1f6(&l1));
		t1 = GE_ma33((T6)4,
GE_ms(" if: \'", 6),
l3,
GE_ms("\': ", 3),
t1);
		T22f31(GE_void(((T26*)(C))->a4), t1);
	}
	t1 = (T26f74(C));
	t3 = (T26f35(C, t1));
	if (t3) {
		t1 = (T26f74(C));
		t1 = (T96f21(GE_void(((T26*)(C))->a2), t1));
		l3 = (((T189*)(GE_void(t1)))->a3);
		t1 = (T26f28(C));
		l2 = (T58f8(GE_void(t1), l3));
		t1 = (T1f6(&l2));
		t1 = GE_ma33((T6)4,
GE_ms(" unless: \'", 10),
l3,
GE_ms("\'=", 2),
t1);
		T22f31(GE_void(((T26*)(C))->a4), t1);
	}
	if (l1) {
		R = ((T1)(!(l2)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* GEANT_TARGET.unless_attribute_name */
T0* T26f74(T0* C)
{
	T0* R = 0;
	if (ge136os2245) {
		return ge136ov2245;
	} else {
		ge136os2245 = '\1';
	}
	R = GE_ms("unless", 6);
	ge136ov2245 = R;
	return R;
}

/* GEANT_TARGET.if_attribute_name */
T0* T26f73(T0* C)
{
	T0* R = 0;
	if (ge136os2244) {
		return ge136ov2244;
	} else {
		ge136os2244 = '\1';
	}
	R = GE_ms("if", 2);
	ge136ov2244 = R;
	return R;
}

/* GEANT_TARGET.final_target */
T0* T26f32(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	R = C;
	t1 = (((T26*)(GE_void(R)))->a11);
	t2 = ((t1)==(EIF_VOID));
	while (!(t2)) {
		R = (((T26*)(GE_void(R)))->a11);
		t1 = (((T26*)(GE_void(R)))->a11);
		t2 = ((t1)==(EIF_VOID));
	}
	return R;
}

/* GEANT_PROJECT.trace_debug */
void T22f31(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T24*)(GE_void(((T22*)(C))->a9)))->a2);
	if (t1) {
		l1 = (((T33*)(GE_void(a1)))->a2);
		l2 = (((T33*)(GE_void(a1)))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T33f4(GE_void(a1), l1));
			T68f12(GE_void(((T22*)(C))->a6), t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		T68f13(GE_void(((T22*)(C))->a6));
		T68f18(GE_void(((T22*)(C))->a6));
	}
}

/* DS_ARRAYED_STACK [GEANT_TARGET].item */
T0* T186f5(T0* C)
{
	T0* R = 0;
	R = (((T119*)(GE_void(((T186*)(C))->a2)))->z2[((T186*)(C))->a1]);
	return R;
}

/* GEANT_ARGUMENT_VARIABLES.make */
T0* T34c45(void)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T34));
	*(T34*)C = GE_default34;
	T34f47(C, (T6)(GE_int32(10)));
	l1 = T59c3();
	T34f48(C, l1);
	return C;
}

/* GEANT_ARGUMENT_VARIABLES.set_key_equality_tester */
void T34f48(T0* C, T0* a1)
{
	((T34*)(C))->a7 = a1;
	T61f6(GE_void(((T34*)(C))->a8), a1);
}

/* GEANT_ARGUMENT_VARIABLES.make_map */
void T34f47(T0* C, T6 a1)
{
	T34f56(C, a1, EIF_VOID, EIF_VOID);
}

/* GEANT_ARGUMENT_VARIABLES.make_with_equality_testers */
void T34f56(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T34*)(C))->a16 = a2;
	((T34*)(C))->a7 = a3;
	T34f61(C, a1);
	((T34*)(C))->a8 = T61c5(C);
}

/* GEANT_ARGUMENT_VARIABLES.make_sparse_container */
void T34f61(T0* C, T6 a1)
{
	T6 t1;
	((T34*)(C))->a3 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f62(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f63(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T34f64(C, t1);
	((T34*)(C))->a10 = (T34f20(C, a1));
	t1 = ((T6)((((T34*)(C))->a10)+((T6)(GE_int32(1)))));
	T34f65(C, t1);
	((T34*)(C))->a6 = (T6)(GE_int32(0));
	((T34*)(C))->a5 = (T6)(GE_int32(0));
	((T34*)(C))->a1 = (T6)(GE_int32(0));
	T34f49(C);
	((T34*)(C))->a19 = (T34f30(C));
}

/* GEANT_ARGUMENT_VARIABLES.make_slots */
void T34f65(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T34f26(C));
	((T34*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* GEANT_ARGUMENT_VARIABLES.make_clashes */
void T34f64(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T34f26(C));
	((T34*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* GEANT_ARGUMENT_VARIABLES.make_key_storage */
void T34f63(T0* C, T6 a1)
{
	((T34*)(C))->a18 = T66c3();
	((T34*)(C))->a15 = (T66f2(GE_void(((T34*)(C))->a18), a1));
}

/* GEANT_ARGUMENT_VARIABLES.make_item_storage */
void T34f62(T0* C, T6 a1)
{
	((T34*)(C))->a17 = T66c3();
	((T34*)(C))->a12 = (T66f2(GE_void(((T34*)(C))->a17), a1));
}

/* GEANT_PROJECT.calculate_depend_order */
void T22f39(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	l1 = (T186f5(GE_void(a1)));
	t1 = (((T26*)(GE_void(l1)))->a1);
	t1 = GE_ma33((T6)2,
GE_ms("pushing target: ", 16),
t1);
	T22f31(C, t1);
	l2 = (T26f36(GE_void(l1)));
	t2 = (((T186*)(GE_void(l2)))->a1);
	t3 = ((t2)==((T6)(GE_int32(0))));
	while (!(t3)) {
		t1 = (T186f5(GE_void(l2)));
		T186f9(GE_void(a1), t1);
		T186f10(GE_void(l2));
		T22f39(C, a1);
		t2 = (((T186*)(GE_void(l2)))->a1);
		t3 = ((t2)==((T6)(GE_int32(0))));
	}
}

/* GEANT_TARGET.dependent_targets */
T0* T26f36(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	R = T186c8((T6)(GE_int32(10)));
	t1 = (T26f39(C));
	if (t1) {
		t2 = (T26f40(C));
		l3 = (T26f21(C, t2, (T2)(',')));
		t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a9);
		t1 = (((T24*)(GE_void(t2)))->a2);
		if (t1) {
			T26f93(C, l3);
		}
		l4 = (T6)(GE_int32(1));
		t3 = (((T71*)(GE_void(l3)))->a1);
		t1 = (T6f1(&l4, t3));
		while (!(t1)) {
			l2 = (T71f14(GE_void(l3), l4));
			t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a1);
			t1 = (T31f24(GE_void(t2), l2));
			if (t1) {
				t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a1);
				t2 = (T31f28(GE_void(t2), l2));
				l1 = (T26f32(GE_void(t2)));
				T186f9(GE_void(R), l1);
			} else {
				t2 = GE_ma33((T6)3,
GE_ms("geant error: unknown dependent target \'", 39),
l2,
GE_ms("\'", 1));
				T26f81(C, (T6)(GE_int32(1)), t2);
			}
			l4 = ((T6)((l4)+((T6)(GE_int32(1)))));
			t3 = (((T71*)(GE_void(l3)))->a1);
			t1 = (T6f1(&l4, t3));
		}
	}
	return R;
}

/* GEANT_TARGET.show_dependent_targets */
void T26f93(T0* C, T0* a1)
{
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T26f17(C));
	t1 = (T46f2(GE_void(t1)));
	T68f10(GE_void(t1), GE_ms("======= DEPENDENCIES ==========", 31));
	l1 = (T6)(GE_int32(1));
	t2 = (((T71*)(GE_void(a1)))->a1);
	t3 = (T6f1(&l1, t2));
	while (!(t3)) {
		t1 = (T26f17(C));
		t1 = (T46f2(GE_void(t1)));
		t4 = (T71f14(GE_void(a1), l1));
		T68f10(GE_void(t1), t4);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t2 = (((T71*)(GE_void(a1)))->a1);
		t3 = (T6f1(&l1, t2));
	}
	t1 = (T26f17(C));
	t1 = (T46f2(GE_void(t1)));
	T68f10(GE_void(t1), GE_ms("=================", 17));
}

/* KL_STDOUT_FILE.put_line */
void T68f10(T0* C, T0* a1)
{
	T68f12(C, a1);
	T68f13(C);
}

/* KL_STANDARD_FILES.output */
unsigned char ge206os2986 = '\0';
T0* ge206ov2986;
T0* T46f2(T0* C)
{
	T0* R = 0;
	if (ge206os2986) {
		return ge206ov2986;
	} else {
		ge206os2986 = '\1';
	}
	R = T68c9();
	ge206ov2986 = R;
	return R;
}

/* KL_STDOUT_FILE.make */
T0* T68c9(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T68));
	*(T68*)C = GE_default68;
	T68f11(C, GE_ms("stdout", 6));
	return C;
}

/* KL_STDOUT_FILE.make_open_stdout */
void T68f11(T0* C, T0* a1)
{
	T68f14(C, a1);
	((T68*)(C))->a1 = (T68f5(C, (T6)(GE_int32(1))));
	T68f15(C);
}

/* KL_STDOUT_FILE.set_write_mode */
void T68f15(T0* C)
{
	((T68*)(C))->a3 = (T6)(GE_int32(2));
}

/* KL_STDOUT_FILE.console_def */
T14 T68f5(T0* C, T6 a1)
{
	T14 R = 0;
	R = (T14)console_def(a1);
	return R;
}

/* KL_STDOUT_FILE.old_make */
void T68f14(T0* C, T0* a1)
{
	((T68*)(C))->a2 = a1;
	((T68*)(C))->a3 = (T6)(GE_int32(0));
}

/* GEANT_TARGET.string_tokens */
T0* T26f21(T0* C, T0* a1, T2 a2)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T1 l5 = 0;
	T6 l6 = 0;
	T6 l7 = 0;
	T6 l8 = 0;
	T1 l9 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	T6 t4;
	l6 = (T6)(GE_int32(1));
	l8 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f1(&l6, l8));
	if (!(t1)) {
		t1 = (l9);
	}
	while (!(t1)) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l6):T194f10(a1, l6)));
		switch (t2) {
		case (T2)(T2)(' '):
		case (T2)(T2)('\t'):
		case (T2)(T2)('\r'):
		case (T2)(T2)('\n'):
			l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
			break;
		default:
			l9 = EIF_TRUE;
			break;
		}
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
	}
	t1 = ((T1)(!(l9)));
	if (t1) {
		t3 = (T26f24(C));
		l1 = (T76f7(GE_void(t3), GE_ms("", 0)));
	} else {
		l9 = EIF_FALSE;
		l7 = l8;
		while (!(l9)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l7):T194f10(a1, l7)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
		}
		l1 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l6, l7):T194f11(a1, l6, l7)));
	}
	R = T71c23((T6)(GE_int32(5)));
	while (!(l5)) {
		l5 = EIF_TRUE;
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, (T6)(GE_int32(1))):T194f10(l1, (T6)(GE_int32(1)))));
			t1 = ((t2)==(a2));
			if (t1) {
				t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
				t4 = ((T6)((t4)-((T6)(GE_int32(1)))));
				if (((T0*)(GE_void(l1)))->id==17) {
					T17f48(l1, t4);
				} else {
					T194f76(l1, t4);
				}
				l5 = EIF_FALSE;
			}
		}
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, t4):T194f10(l1, t4)));
			t1 = ((t2)==(a2));
			if (t1) {
				t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
				t4 = ((T6)((t4)-((T6)(GE_int32(1)))));
				if (((T0*)(GE_void(l1)))->id==17) {
					T17f49(l1, t4);
				} else {
					T194f74(l1, t4);
				}
				l5 = EIF_FALSE;
			}
		}
	}
	l3 = (T6)(GE_int32(1));
	l4 = (((((T0*)(GE_void(l1)))->id==17)?T17f24(l1, a2, l3):T194f17(l1, a2, l3)));
	t1 = ((l4)==((T6)(GE_int32(0))));
	if (!(t1)) {
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t1 = (T6f1(&l3, t4));
	}
	while (!(t1)) {
		l6 = l3;
		l8 = ((T6)((l4)-((T6)(GE_int32(1)))));
		l9 = EIF_FALSE;
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l6):T194f10(l1, l6)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
			t1 = (T6f1(&l6, l8));
			if (!(t1)) {
				t1 = (l9);
			}
		}
		t1 = ((T1)(!(l9)));
		if (t1) {
			l2 = GE_ms("", 0);
		} else {
			l9 = EIF_FALSE;
			l7 = l8;
			while (!(l9)) {
				t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l7):T194f10(l1, l7)));
				switch (t2) {
				case (T2)(T2)(' '):
				case (T2)(T2)('\t'):
				case (T2)(T2)('\r'):
				case (T2)(T2)('\n'):
					l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
					break;
				default:
					l9 = EIF_TRUE;
					break;
				}
			}
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f10(l1, l6, l7):T194f11(l1, l6, l7)));
		}
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			T71f27(GE_void(R), l2);
		}
		l3 = ((T6)((l4)+((T6)(GE_int32(1)))));
		t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t1 = (T6f9(&l3, t4));
		if (t1) {
			l4 = (((((T0*)(GE_void(l1)))->id==17)?T17f24(l1, a2, l3):T194f17(l1, a2, l3)));
		}
		t1 = ((l4)==((T6)(GE_int32(0))));
		if (!(t1)) {
			t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
			t1 = (T6f1(&l3, t4));
		}
	}
	t4 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
	t1 = (T6f9(&l3, t4));
	if (t1) {
		l6 = l3;
		l8 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		l9 = EIF_FALSE;
		t1 = (T6f1(&l6, l8));
		if (!(t1)) {
			t1 = (l9);
		}
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l6):T194f10(l1, l6)));
			switch (t2) {
			case (T2)(T2)(' '):
			case (T2)(T2)('\t'):
			case (T2)(T2)('\r'):
			case (T2)(T2)('\n'):
				l6 = ((T6)((l6)+((T6)(GE_int32(1)))));
				break;
			default:
				l9 = EIF_TRUE;
				break;
			}
			t1 = (T6f1(&l6, l8));
			if (!(t1)) {
				t1 = (l9);
			}
		}
		t1 = ((T1)(!(l9)));
		if (t1) {
			l2 = GE_ms("", 0);
		} else {
			l9 = EIF_FALSE;
			l7 = l8;
			while (!(l9)) {
				t2 = (((((T0*)(GE_void(l1)))->id==17)?T17f9(l1, l7):T194f10(l1, l7)));
				switch (t2) {
				case (T2)(T2)(' '):
				case (T2)(T2)('\t'):
				case (T2)(T2)('\r'):
				case (T2)(T2)('\n'):
					l7 = ((T6)((l7)-((T6)(GE_int32(1)))));
					break;
				default:
					l9 = EIF_TRUE;
					break;
				}
			}
			l2 = (((((T0*)(GE_void(l1)))->id==17)?T17f10(l1, l6, l7):T194f11(l1, l6, l7)));
		}
		t4 = (((((T0*)(GE_void(l2)))->id==17)?((T17*)(l2))->a2:((T194*)(l2))->a1));
		t1 = (T6f1(&t4, (T6)(GE_int32(0))));
		if (t1) {
			T71f27(GE_void(R), l2);
		}
	}
	return R;
}

/* GEANT_TARGET.dependencies */
T0* T26f40(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T26f41(C));
	t1 = (T96f21(GE_void(((T26*)(C))->a2), t1));
	R = (((T189*)(GE_void(t1)))->a3);
	return R;
}

/* GEANT_TARGET.depend_attribute_name */
unsigned char ge63os2233 = '\0';
T0* ge63ov2233;
T0* T26f41(T0* C)
{
	T0* R = 0;
	if (ge63os2233) {
		return ge63ov2233;
	} else {
		ge63os2233 = '\1';
	}
	R = GE_ms("depend", 6);
	ge63ov2233 = R;
	return R;
}

/* GEANT_TARGET.has_dependencies */
T1 T26f39(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T26f41(C));
	R = (T96f20(GE_void(((T26*)(C))->a2), t1));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_TARGET].force */
void T186f9(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T186f6(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T186*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T186f7(C, t2));
		T186f11(C, t2);
	}
	((T186*)(C))->a1 = ((T6)((((T186*)(C))->a1)+((T6)(GE_int32(1)))));
	((T119*)(GE_void(((T186*)(C))->a2)))->z2[((T186*)(C))->a1] = (a1);
}

/* DS_ARRAYED_STACK [GEANT_TARGET].resize */
void T186f11(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T186*)(C))->a2 = (T124f1(GE_void(((T186*)(C))->a3), ((T186*)(C))->a2, t1));
	((T186*)(C))->a4 = a1;
}

/* KL_SPECIAL_ROUTINES [GEANT_TARGET].resize */
T0* T124f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T119*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T119f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_TARGET].resized_area */
T0* T119f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T119c4(a1);
	t1 = (((T119*)(C))->z1);
	T119f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_TARGET].copy_data */
void T119f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T119f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T119*)(a1))->z2[l1]);
			((T119*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_TARGET].move_data */
void T119f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T119f8(C, a1, a2, a3);
			} else {
				T119f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T119f8(C, a1, a2, a3);
			} else {
				T119f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_TARGET].overlapping_move */
void T119f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T119*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T119*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T119*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T119*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_TARGET].non_overlapping_move */
void T119f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T119*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T119*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_TARGET].make */
T0* T119c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T119)+a1*sizeof(T0*));
	*(T119*)C = GE_default119;
	((T119*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_STACK [GEANT_TARGET].new_capacity */
T6 T186f7(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_TARGET].extendible */
T1 T186f6(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T186*)(C))->a1)+(a1)));
	R = (T6f5(&(((T186*)(C))->a4), t1));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_TARGET].make */
T0* T186c8(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T186));
	*(T186*)C = GE_default186;
	((T186*)(C))->a3 = T124c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T186*)(C))->a2 = (T124f2(GE_void(((T186*)(C))->a3), t1));
	((T186*)(C))->a4 = a1;
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_TARGET].make */
T0* T124f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T203c2(a1);
	R = (((T203*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_TARGET].make_area */
T0* T203c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T203));
	*(T203*)C = GE_default203;
	((T203*)(C))->a1 = T119c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_TARGET].default_create */
T0* T124c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T124));
	*(T124*)C = GE_default124;
	return C;
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].force */
void T100f9(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T100f6(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T100*)(C))->a1)+((T6)(GE_int32(1)))));
		t2 = (T100f7(C, t2));
		T100f11(C, t2);
	}
	((T100*)(C))->a1 = ((T6)((((T100*)(C))->a1)+((T6)(GE_int32(1)))));
	((T176*)(GE_void(((T100*)(C))->a2)))->z2[((T100*)(C))->a1] = (a1);
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].resize */
void T100f11(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T100*)(C))->a2 = (T177f2(GE_void(((T100*)(C))->a3), ((T100*)(C))->a2, t1));
	((T100*)(C))->a4 = a1;
}

/* KL_SPECIAL_ROUTINES [GEANT_ARGUMENT_VARIABLES].resize */
T0* T177f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T176*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T176f3(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].resized_area */
T0* T176f3(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T176c4(a1);
	t1 = (((T176*)(C))->z1);
	T176f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].copy_data */
void T176f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T176f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T176*)(a1))->z2[l1]);
			((T176*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].move_data */
void T176f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T176f8(C, a1, a2, a3);
			} else {
				T176f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T176f8(C, a1, a2, a3);
			} else {
				T176f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].overlapping_move */
void T176f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T176*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T176*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T176*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T176*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_ARGUMENT_VARIABLES].non_overlapping_move */
void T176f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T176*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T176*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].new_capacity */
T6 T100f7(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_STACK [GEANT_ARGUMENT_VARIABLES].extendible */
T1 T100f6(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T100*)(C))->a1)+(a1)));
	R = (T6f5(&(((T100*)(C))->a4), t1));
	return R;
}

/* GEANT_PROJECT.target_arguments_stack */
T0* T22f18(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_PROJECT.trace */
void T22f24(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	t1 = (((T24*)(GE_void(((T22*)(C))->a9)))->a1);
	if (t1) {
		l1 = (((T33*)(a1))->a2);
		l2 = (((T33*)(a1))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T33f4(a1, l1));
			T68f12(GE_void(((T22*)(C))->a6), t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		T68f13(GE_void(((T22*)(C))->a6));
		T68f18(GE_void(((T22*)(C))->a6));
	}
}

/* GEANT.commandline_arguments */
unsigned char ge61os1571 = '\0';
T0* ge61ov1571;
T0* T21f11(T0* C)
{
	T0* R = 0;
	if (ge61os1571) {
		return ge61ov1571;
	} else {
		ge61os1571 = '\1';
	}
	R = T34c45();
	ge61ov1571 = R;
	return R;
}

/* GEANT_PROJECT.start_target */
T0* T22f19(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	R = (T22f16(C));
	t1 = ((((T22*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T22*)(C))->a4)))->id==17)?((T17*)(((T22*)(C))->a4))->a2:((T194*)(((T22*)(C))->a4))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t3 = (T22f15(C));
		t1 = ((t3)==(EIF_VOID));
		if (t1) {
			t3 = (((((T0*)(GE_void(((T22*)(C))->a4)))->id==17)?T17f8(((T22*)(C))->a4, GE_ms("\'", 1)):T194f7(((T22*)(C))->a4, GE_ms("\'", 1))));
			t3 = GE_ma33((T6)2,
GE_ms("Cannot determine start target `", 31),
t3);
			T22f35(C, (T6)(GE_int32(1)), t3);
		} else {
			R = (T22f15(C));
		}
	}
	t1 = ((R)==(EIF_VOID));
	if (t1) {
		t3 = GE_ma33((T6)1,
GE_ms("Cannot determine start target.", 30));
		T22f35(C, (T6)(GE_int32(1)), t3);
	}
	return R;
}

/* GEANT_PROJECT.exit_application */
void T22f35(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T22f14(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T22f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T22f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T22f14(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T22f17(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PROJECT.exceptions */
T0* T22f17(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_PROJECT.std */
T0* T22f14(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_PROJECT.preferred_start_target */
T0* T22f15(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T22*)(C))->a4)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T22*)(C))->a4)))->id==17)?((T17*)(((T22*)(C))->a4))->a2:((T194*)(((T22*)(C))->a4))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = (T31f24(GE_void(((T22*)(C))->a1), ((T22*)(C))->a4));
		if (t1) {
			R = (T31f28(GE_void(((T22*)(C))->a1), ((T22*)(C))->a4));
		}
	}
	return R;
}

/* GEANT_PROJECT.default_target */
T0* T22f16(T0* C)
{
	T0* R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T22*)(C))->a5)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T22*)(C))->a5)))->id==17)?((T17*)(((T22*)(C))->a5))->a2:((T194*)(((T22*)(C))->a5))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = (T31f24(GE_void(((T22*)(C))->a1), ((T22*)(C))->a5));
		if (t1) {
			R = (T31f28(GE_void(((T22*)(C))->a1), ((T22*)(C))->a5));
		}
	}
	return R;
}

/* GEANT_PROJECT.show_target_info */
void T22f27(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l1 = (T31f29(GE_void(((T22*)(C))->a1)));
	T123f9(GE_void(l1));
	t1 = (T123f5(GE_void(l1)));
	while (!(t1)) {
		l2 = (T123f6(GE_void(l1)));
		t1 = (T26f29(GE_void(l2)));
		if (t1) {
			t2 = (T26f30(GE_void(l2)));
			T68f10(GE_void(((T22*)(C))->a6), t2);
			t2 = (((T26*)(GE_void(l2)))->a5);
			t1 = ((t2)!=(EIF_VOID));
			if (t1) {
				t2 = (((T26*)(GE_void(l2)))->a5);
				t2 = (T17f8(GE_ms("  obsolete. ", 12), t2));
				T68f10(GE_void(((T22*)(C))->a6), t2);
			}
			t2 = (((T26*)(GE_void(l2)))->a6);
			t2 = (T17f8(GE_ms("  ", 2), t2));
			T68f10(GE_void(((T22*)(C))->a6), t2);
		}
		T123f10(GE_void(l1));
		t1 = (T123f5(GE_void(l1)));
	}
}

/* GEANT_PROJECT.set_start_target_name */
void T22f26(T0* C, T0* a1)
{
	((T22*)(C))->a4 = a1;
}

/* GEANT_TARGET.full_name */
T0* T26f30(T0* C)
{
	T0* R = 0;
	T0* t1;
	T0* t2;
	t1 = (T26f24(C));
	t2 = (((T22*)(GE_void(((T26*)(C))->a4)))->a2);
	R = (T76f7(GE_void(t1), t2));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f34(R, (T2)('.'));
	} else {
		T194f56(R, (T2)('.'));
	}
	t1 = (T26f24(C));
	R = (T76f5(GE_void(t1), R, ((T26*)(C))->a1));
	return R;
}

/* GEANT_TARGET.is_exported_to_any */
T1 T26f29(T0* C)
{
	T1 R = 0;
	T1 t1;
	T0* t2;
	t1 = ((((T26*)(C))->a7)!=(EIF_VOID));
	if (t1) {
		t2 = (T26f22(C));
		R = (T71f22(GE_void(((T26*)(C))->a7), t2));
	}
	return R;
}

/* DS_ARRAYED_LIST [STRING_8].has */
T1 T71f22(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	l1 = ((T71*)(C))->a1;
	l2 = ((T71*)(C))->a6;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T32*)(GE_void(((T71*)(C))->a2)))->z2[l1]);
			t1 = (T59f1(GE_void(l2), t2, a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (((T32*)(GE_void(((T71*)(C))->a2)))->z2[l1]);
			t1 = ((t2)==(a1));
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* GEANT_TARGET.project_name_any */
unsigned char ge63os2236 = '\0';
T0* ge63ov2236;
T0* T26f22(T0* C)
{
	T0* R = 0;
	if (ge63os2236) {
		return ge63ov2236;
	} else {
		ge63os2236 = '\1';
	}
	R = GE_ms("ANY", 3);
	ge63ov2236 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].item */
T0* T31f28(T0* C, T0* a1)
{
	T0* R = 0;
	T31f46(C, a1);
	R = (T31f27(C, ((T31*)(C))->a1));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].search_position */
void T31f46(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T31*)(C))->a1 = (T31f25(C, ((T31*)(C))->a9));
		((T31*)(C))->a7 = ((T31*)(C))->a9;
		((T31*)(C))->a10 = (T6)(GE_int32(0));
	} else {
		l4 = ((T31*)(C))->a3;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T31*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T31f31(C, ((T31*)(C))->a1));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T31*)(C))->a7 = (T31f21(C, a1));
				l1 = (T31f25(C, ((T31*)(C))->a7));
				((T31*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T31f31(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T31*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T31f32(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T31*)(C))->a10 = l2;
			}
		} else {
			t1 = ((((T31*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T31f31(C, ((T31*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T31*)(C))->a7 = (T31f21(C, a1));
				l1 = (T31f25(C, ((T31*)(C))->a7));
				((T31*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T31f31(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T31*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T31f32(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T31*)(C))->a10 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].hash_position */
T6 T31f21(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T31*)(C))->a9)));
	} else {
		R = ((T31*)(C))->a9;
	}
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].slots_item */
T6 T31f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T31*)(C))->a14)))->z2[a1]);
	return R;
}

/* GEANT.exit_application */
void T21f22(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(GE_void(a2)))->a2);
		l2 = (((T33*)(GE_void(a2)))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T21f13(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(GE_void(a2), l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T21f13(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T21f13(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T21f13(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T21f14(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT.exceptions */
T0* T21f14(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT.std */
T0* T21f13(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* UC_UTF8_STRING.infix "+" */
T0* T194f7(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	t1 = (T194f25(C));
	t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t2 = (T193f22(GE_void(t1), a1, (T6)(GE_int32(1)), t2));
	t2 = ((T6)((((T194*)(C))->a3)+(t2)));
	R = T194c59(t2);
	T194f55(GE_void(R), C);
	T194f55(GE_void(R), a1);
	return R;
}

/* STRING_8.infix "+" */
T0* T17f8(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = ((T6)((((T17*)(C))->a2)+(t1)));
	R = (T17f19(C, t1));
	T17f35(GE_void(R), C);
	T17f35(GE_void(R), a1);
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].has */
T1 T31f24(T0* C, T0* a1)
{
	T1 R = 0;
	T31f46(C, a1);
	R = ((((T31*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* INTEGER_32.infix ">" */
T1 T6f1(T6* C, T6 a1)
{
	T1 R = 0;
	R = ((T1)((a1)<(*C)));
	return R;
}

/* GEANT_PROJECT.merge_in_parent_projects */
void T22f25(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((((T22*)(C))->a10)!=(EIF_VOID));
	if (t1) {
		t2 = (((T118*)(GE_void(((T22*)(C))->a10)))->a1);
		l2 = (T184f7(GE_void(t2)));
		T185f8(GE_void(l2));
		t1 = (T185f6(GE_void(l2)));
		while (!(t1)) {
			l1 = (T185f4(GE_void(l2)));
			T182f14(GE_void(l1));
			T185f9(GE_void(l2));
			t1 = (T185f6(GE_void(l2)));
		}
		t2 = (((T118*)(GE_void(((T22*)(C))->a10)))->a1);
		l2 = (T184f7(GE_void(t2)));
		T185f8(GE_void(l2));
		t1 = (T185f6(GE_void(l2)));
		while (!(t1)) {
			l1 = (T185f4(GE_void(l2)));
			T118f7(GE_void(((T22*)(C))->a10), l1);
			T185f9(GE_void(l2));
			t1 = (T185f6(GE_void(l2)));
		}
		T118f8(GE_void(((T22*)(C))->a10));
		l4 = (T31f29(GE_void(((T22*)(C))->a1)));
		T123f9(GE_void(l4));
		t2 = GE_ma33((T6)3,
GE_ms("Project \'", 9),
((T22*)(C))->a2,
GE_ms("\': target list:", 15));
		T22f31(C, t2);
		t1 = (T123f5(GE_void(l4)));
		while (!(t1)) {
			l3 = (T123f6(GE_void(l4)));
			t2 = (T123f7(GE_void(l4)));
			t3 = (T26f30(GE_void(l3)));
			t2 = GE_ma33((T6)5,
GE_ms("  target `", 10),
t2,
GE_ms("\' (", 3),
t3,
GE_ms(")", 1));
			T22f31(C, t2);
			T26f92(GE_void(l3));
			T123f10(GE_void(l4));
			t1 = (T123f5(GE_void(l4)));
		}
	}
}

/* GEANT_TARGET.show_precursors */
void T26f92(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l1 = C;
	l2 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(1)));
	T33f12(GE_void(l2), GE_ms("    precursor list: ", 20), (T6)(GE_int32(1)));
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		t2 = (T33f10(GE_void(l2)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T33f14(GE_void(l2), GE_ms("\'", 1), t2);
		t3 = (T26f30(GE_void(l1)));
		t2 = (T33f10(GE_void(l2)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T33f14(GE_void(l2), t3, t2);
		t2 = (T33f10(GE_void(l2)));
		t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
		T33f14(GE_void(l2), GE_ms("\'", 1), t2);
		l1 = (((T26*)(GE_void(l1)))->a10);
		t1 = ((l1)!=(EIF_VOID));
		if (t1) {
			t2 = (T33f10(GE_void(l2)));
			t2 = ((T6)((t2)+((T6)(GE_int32(1)))));
			T33f14(GE_void(l2), GE_ms(", ", 2), t2);
		}
		t1 = ((l1)==(EIF_VOID));
	}
	T22f31(GE_void(((T26*)(C))->a4), l2);
}

/* ARRAY [STRING_8].force */
void T33f14(T0* C, T0* a1, T6 a2)
{
	T1 t1;
	t1 = ((T1)((a2)<(((T33*)(C))->a2)));
	if (t1) {
		T33f15(C, a2, ((T33*)(C))->a3);
	} else {
		t1 = (T6f1(&a2, ((T33*)(C))->a3));
		if (t1) {
			T33f15(C, ((T33*)(C))->a2, a2);
		}
	}
	T33f12(C, a1, a2);
}

/* ARRAY [STRING_8].auto_resize */
void T33f15(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T6 l5 = 0;
	T0* l6 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	t1 = (T33f6(C));
	if (t1) {
		l3 = a1;
		l4 = a2;
	} else {
		l3 = (T6f18(&a1, ((T33*)(C))->a2));
		l4 = (T6f10(&a2, ((T33*)(C))->a3));
	}
	t2 = ((T6)((l4)-(l3)));
	l2 = ((T6)((t2)+((T6)(GE_int32(1)))));
	t1 = (T33f6(C));
	t1 = ((T1)(!(t1)));
	if (t1) {
		l1 = (((T32*)(GE_void(((T33*)(C))->a1)))->z1);
		t1 = (T6f1(&l2, l1));
		if (t1) {
			t2 = ((T6)((l2)-(l1)));
			t3 = (T33f7(C));
			t1 = ((T1)((t2)<(t3)));
		}
		if (t1) {
			t2 = (T33f7(C));
			l2 = ((T6)((l1)+(t2)));
		}
	}
	t1 = (T33f6(C));
	if (t1) {
		T33f13(C, l2);
	} else {
		t1 = (T6f1(&l2, l1));
		if (t1) {
			((T33*)(C))->a1 = (T32f4(GE_void(((T33*)(C))->a1), l2));
		}
		t1 = ((T1)((l3)<(((T33*)(C))->a2)));
		if (t1) {
			l5 = ((T6)((((T33*)(C))->a2)-(l3)));
			t2 = (T33f8(C));
			T32f9(GE_void(((T33*)(C))->a1), (T6)(GE_int32(0)), l5, t2);
			t2 = ((T6)((l5)-((T6)(GE_int32(1)))));
			T32f12(GE_void(((T33*)(C))->a1), l6, (T6)(GE_int32(0)), t2);
		}
	}
	((T33*)(C))->a2 = l3;
	((T33*)(C))->a3 = l4;
}

/* SPECIAL [STRING_8].fill_with */
void T32f12(T0* C, T0* a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	l1 = a2;
	l2 = ((T6)((a3)+((T6)(GE_int32(1)))));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		((T32*)(C))->z2[l1] = (a1);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* ARRAY [STRING_8].capacity */
T6 T33f8(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((((T33*)(C))->a3)-(((T33*)(C))->a2)));
	R = ((T6)((t1)+((T6)(GE_int32(1)))));
	return R;
}

/* SPECIAL [STRING_8].aliased_resized_area */
T0* T32f4(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	t1 = ((T32*)(C))->z1;
	if (a1>t1) {
		R = (T0*)GE_alloc(sizeof(T32)+a1*sizeof(T0*));
		*(T32*)(R) = *(T32*)(C);
		memcpy(((T32*)(R))->z2,((T32*)(C))->z2,t1*sizeof(T0*));
	} else {
		R = C;
	}
	((T32*)(R))->z1 = a1;
	return R;
}

/* ARRAY [STRING_8].additional_space */
T6 T33f7(T0* C)
{
	T6 R = 0;
	T6 t1;
	t1 = (T33f8(C));
	t1 = ((T6)((t1)/((T6)(GE_int32(2)))));
	R = (T6f10(&t1, (T6)(GE_int32(5))));
	return R;
}

/* ARRAY [STRING_8].empty_area */
T1 T33f6(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T33*)(C))->a1)==(EIF_VOID));
	if (!(t1)) {
		t2 = (((T32*)(GE_void(((T33*)(C))->a1)))->z1);
		R = ((t2)==((T6)(GE_int32(0))));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* GEANT_INHERIT.apply_selects */
void T118f8(T0* C)
{
	T0* t1;
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)3,
GE_ms("\nProject \'", 10),
t1,
GE_ms("\': --> application of select clause:", 36));
	T22f31(GE_void(((T118*)(C))->a2), t1);
	T118f12(C);
	T118f13(C);
	T118f14(C);
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)3,
GE_ms("Project \'", 9),
t1,
GE_ms("\': <-- application of select clause done.", 41));
	T22f31(GE_void(((T118*)(C))->a2), t1);
}

/* GEANT_INHERIT.check_targets_for_conflicts */
void T118f14(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* t1;
	T1 t2;
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
	l1 = (T31f29(GE_void(t1)));
	T123f11(GE_void(l1));
	t2 = (T123f4(GE_void(l1)));
	while (!(t2)) {
		l2 = (T123f6(GE_void(l1)));
		l3 = (T123f7(GE_void(l1)));
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
		l4 = (T31f29(GE_void(t1)));
		T123f11(GE_void(l4));
		t2 = (T123f4(GE_void(l4)));
		while (!(t2)) {
			l5 = (T123f6(GE_void(l4)));
			l6 = (T123f7(GE_void(l4)));
			t2 = ((l5)!=(l2));
			if (t2) {
				t2 = (T26f34(GE_void(l5), l2));
				if (t2) {
					t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
					t1 = GE_ma33((T6)8,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Project \'", 9),
t1,
GE_ms("\' contains target `", 19),
l3,
GE_ms("\' which conflicts with target `", 31),
l6,
GE_ms("\'.\nUse a select clause to resolve the conflict.", 47));
					T118f15(C, (T6)(GE_int32(1)), t1);
				}
			}
			T123f12(GE_void(l4));
			t2 = (T123f4(GE_void(l4)));
		}
		T123f12(GE_void(l1));
		t2 = (T123f4(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].back */
void T123f12(T0* C)
{
	T31f67(GE_void(((T123*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_back */
void T31f67(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	l3 = (((T123*)(a1))->a2);
	t1 = ((l3)==((T6)(GE_int32(-2))));
	if (t1) {
		l2 = EIF_TRUE;
		l1 = ((T31*)(C))->a5;
	} else {
		l1 = ((T6)((l3)-((T6)(GE_int32(1)))));
	}
	t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
	if (!(t1)) {
		t2 = (T31f32(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
	if (t1) {
		T123f14(a1, (T6)(GE_int32(-1)));
		t1 = ((T1)(!(l2)));
		if (t1) {
			T31f69(C, a1);
		}
	} else {
		T123f14(a1, l1);
		if (l2) {
			T31f70(C, a1);
		}
	}
}

/* GEANT_INHERIT.exit_application */
void T118f15(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T118f4(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T118f4(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T118f4(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T118f4(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T118f5(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_INHERIT.exceptions */
T0* T118f5(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_INHERIT.std */
T0* T118f4(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_TARGET.conflicts_with */
T1 T26f34(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	T0* t2;
	T0* t3;
	t1 = (T26f24(C));
	t2 = (T26f38(C));
	t2 = (T26f30(GE_void(t2)));
	t3 = (T26f38(GE_void(a1)));
	t3 = (T26f30(GE_void(t3)));
	R = (T76f1(GE_void(t1), t2, t3));
	return R;
}

/* GEANT_TARGET.seed */
T0* T26f38(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	R = C;
	t1 = (((T26*)(GE_void(R)))->a10);
	t2 = ((t1)==(EIF_VOID));
	while (!(t2)) {
		R = (((T26*)(GE_void(R)))->a10);
		t1 = (((T26*)(GE_void(R)))->a10);
		t2 = ((t1)==(EIF_VOID));
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].before */
T1 T123f4(T0* C)
{
	T1 R = 0;
	R = (T31f36(GE_void(((T123*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_before */
T1 T31f36(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T123*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-1))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_TARGET, STRING_8].finish */
void T123f11(T0* C)
{
	T31f66(GE_void(((T123*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].cursor_finish */
void T31f66(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = (T31f39(C));
	if (t1) {
		T123f14(a1, (T6)(GE_int32(-1)));
	} else {
		l2 = (T31f40(C, a1));
		l1 = ((T31*)(C))->a5;
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (T31f32(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = ((T1)((l1)<((T6)(GE_int32(0)))));
		if (t1) {
			T123f14(a1, (T6)(GE_int32(-1)));
			t1 = ((T1)(!(l2)));
			if (t1) {
				T31f69(C, a1);
			}
		} else {
			T123f14(a1, l1);
			if (l2) {
				T31f70(C, a1);
			}
		}
	}
}

/* GEANT_INHERIT.sort_out_selected_targets */
void T118f13(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T1 l9 = 0;
	T6 l10 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)3,
GE_ms("Project \'", 9),
t1,
GE_ms("\': removing targets conflicting with selected targets", 53));
	T22f31(GE_void(((T118*)(C))->a2), t1);
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a10);
	t1 = (((T118*)(GE_void(t1)))->a1);
	l1 = (T184f7(GE_void(t1)));
	T185f8(GE_void(l1));
	t2 = (T185f6(GE_void(l1)));
	while (!(t2)) {
		l2 = (T185f4(GE_void(l1)));
		t1 = (((T182*)(GE_void(l2)))->a2);
		t1 = (((T22*)(GE_void(t1)))->a8);
		l3 = (T31f29(GE_void(t1)));
		T123f9(GE_void(l3));
		t2 = (T123f5(GE_void(l3)));
		while (!(t2)) {
			l5 = (T123f7(GE_void(l3)));
			t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
			t2 = (T31f24(GE_void(t1), l5));
			t2 = ((T1)(!(t2)));
			if (t2) {
				t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
				t1 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  project \'", 11),
t1,
GE_ms("\' selected target `", 19),
l5,
GE_ms("\' does not exist.", 17));
				T118f15(C, (T6)(GE_int32(1)), t1);
			}
			t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
			l4 = (T31f28(GE_void(t1), l5));
			l9 = EIF_TRUE;
			l10 = (T6)(GE_int32(0));
			t2 = ((l9)==(EIF_FALSE));
			while (!(t2)) {
				l9 = EIF_FALSE;
				t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
				l6 = (T31f29(GE_void(t1)));
				T123f11(GE_void(l6));
				t2 = (T123f4(GE_void(l6)));
				while (!(t2)) {
					l7 = (T123f6(GE_void(l6)));
					l8 = (T22f20(GE_void(((T118*)(C))->a2), l7));
					t2 = ((l7)!=(l4));
					if (t2) {
						t2 = (T26f34(GE_void(l4), l7));
						if (t2) {
							t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
							t3 = (T26f30(GE_void(l7)));
							t4 = (T26f30(GE_void(l4)));
							t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': conflict found! Replacing target `(", 38),
t3,
GE_ms(")\' with selected target `(", 26),
t4,
GE_ms(")\'.", 3));
							T22f31(GE_void(((T118*)(C))->a2), t1);
							t1 = GE_ma33((T6)1,
GE_ms("a_target: ", 10));
							T22f31(GE_void(((T118*)(C))->a2), t1);
							T26f92(GE_void(l7));
							t1 = GE_ma33((T6)1,
GE_ms("a_selected_target: ", 19));
							T22f31(GE_void(((T118*)(C))->a2), t1);
							T26f92(GE_void(l4));
							l9 = EIF_TRUE;
							l10 = ((T6)((l10)+((T6)(GE_int32(1)))));
							t1 = (((T26*)(GE_void(l7)))->a10);
							T26f96(GE_void(t1), l4);
							t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
							T31f63(GE_void(t1), l8);
						}
					}
					T123f12(GE_void(l6));
					t2 = (T123f4(GE_void(l6)));
				}
				t2 = ((l9)==(EIF_FALSE));
			}
			t2 = ((l10)==((T6)(GE_int32(0))));
			if (t2) {
				t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
				t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': There is no need to select target `", 38),
l5,
GE_ms("\' since there are no other conflicting targets.", 47));
				T118f15(C, (T6)(GE_int32(1)), t1);
			}
			T123f10(GE_void(l3));
			t2 = (T123f5(GE_void(l3)));
		}
		T185f9(GE_void(l1));
		t2 = (T185f6(GE_void(l1)));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].remove */
void T31f63(T0* C, T0* a1)
{
	T1 t1;
	T31f48(C);
	T31f46(C, a1);
	t1 = ((((T31*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T31f68(C, ((T31*)(C))->a1);
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].remove_position */
void T31f68(T0* C, T6 a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(((T31*)(C))->a1));
	if (t1) {
		l2 = (T31f31(C, a1));
		l4 = (T31f21(C, l2));
		t2 = (T31f25(C, l4));
		t1 = ((t2)==(a1));
		if (t1) {
			((T31*)(C))->a1 = a1;
			((T31*)(C))->a7 = l4;
			((T31*)(C))->a10 = (T6)(GE_int32(0));
		} else {
			l5 = ((T31*)(C))->a3;
			T31f71(C, EIF_VOID);
			T31f46(C, l2);
			T31f71(C, l5);
		}
	}
	T31f72(C, ((T31*)(C))->a1);
	t1 = ((((T31*)(C))->a10)==((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T31f32(C, ((T31*)(C))->a1));
		T31f52(C, t2, ((T31*)(C))->a7);
	} else {
		t2 = (T31f32(C, ((T31*)(C))->a1));
		T31f51(C, t2, ((T31*)(C))->a10);
	}
	T31f49(C, l1, ((T31*)(C))->a1);
	T31f53(C, l3, ((T31*)(C))->a1);
	t1 = ((((T31*)(C))->a16)==((T6)(GE_int32(0))));
	if (t1) {
		t1 = ((((T31*)(C))->a1)==(((T31*)(C))->a5));
	}
	if (t1) {
		((T31*)(C))->a5 = ((T6)((((T31*)(C))->a5)-((T6)(GE_int32(1)))));
		T31f51(C, (T6)(GE_int32(0)), ((T31*)(C))->a1);
	} else {
		t2 = (T6)(GE_int32(-1));
		t2 = ((T6)((t2)-(((T31*)(C))->a16)));
		T31f51(C, t2, ((T31*)(C))->a1);
		((T31*)(C))->a16 = ((T31*)(C))->a1;
	}
	((T31*)(C))->a8 = ((T6)((((T31*)(C))->a8)-((T6)(GE_int32(1)))));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].key_storage_put */
void T31f53(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T31*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].item_storage_put */
void T31f49(T0* C, T0* a1, T6 a2)
{
	((T119*)(GE_void(((T31*)(C))->a2)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].clashes_put */
void T31f51(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T31*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].slots_put */
void T31f52(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T31*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].move_cursors_forth */
void T31f72(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	l2 = ((T31*)(C))->a5;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T31f32(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T31f73(C, a1);
	} else {
		T31f74(C, a1, l1);
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].move_all_cursors */
void T31f74(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T31*)(C))->a17;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		t2 = (((T123*)(GE_void(l1)))->a2);
		t1 = ((t2)==(a1));
		if (t1) {
			T123f14(GE_void(l1), a2);
		}
		l1 = (((T123*)(GE_void(l1)))->a3);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].move_cursors_after */
void T31f73(T0* C, T6 a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T6 t1;
	T1 t2;
	l1 = ((T31*)(C))->a17;
	t1 = (((T123*)(GE_void(l1)))->a2);
	t2 = ((t1)==(a1));
	if (t2) {
		T123f14(GE_void(l1), (T6)(GE_int32(-2)));
	}
	l2 = l1;
	l1 = (((T123*)(GE_void(l1)))->a3);
	t2 = ((l1)==(EIF_VOID));
	while (!(t2)) {
		t1 = (((T123*)(GE_void(l1)))->a2);
		t2 = ((t1)==(a1));
		if (t2) {
			T123f14(GE_void(l1), (T6)(GE_int32(-2)));
			l3 = (((T123*)(GE_void(l1)))->a3);
			T123f15(GE_void(l2), l3);
			T123f15(GE_void(l1), EIF_VOID);
			l1 = l3;
		} else {
			l2 = l1;
			l1 = (((T123*)(GE_void(l1)))->a3);
		}
		t2 = ((l1)==(EIF_VOID));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].internal_set_key_equality_tester */
void T31f71(T0* C, T0* a1)
{
	((T31*)(C))->a3 = a1;
	T121f6(GE_void(((T31*)(C))->a4), a1);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_TARGET, STRING_8].internal_set_equality_tester */
void T121f6(T0* C, T0* a1)
{
	((T121*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].unset_found_item */
void T31f48(T0* C)
{
	((T31*)(C))->a12 = (T6)(GE_int32(0));
}

/* GEANT_TARGET.set_redefining_target */
void T26f96(T0* C, T0* a1)
{
	((T26*)(C))->a11 = a1;
}

/* GEANT_INHERIT.validate_parent_selects */
void T118f12(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)3,
GE_ms("Project \'", 9),
t1,
GE_ms("\': making sure there are no conflicting selects", 47));
	T22f31(GE_void(((T118*)(C))->a2), t1);
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a10);
	t1 = (((T118*)(GE_void(t1)))->a1);
	l1 = (T184f7(GE_void(t1)));
	T185f8(GE_void(l1));
	t2 = (T185f6(GE_void(l1)));
	while (!(t2)) {
		l2 = (T185f4(GE_void(l1)));
		t1 = (((T182*)(GE_void(l2)))->a2);
		t1 = (((T22*)(GE_void(t1)))->a8);
		l5 = (T31f29(GE_void(t1)));
		T123f9(GE_void(l5));
		t2 = (T123f5(GE_void(l5)));
		while (!(t2)) {
			l6 = (T123f6(GE_void(l5)));
			l9 = (T123f7(GE_void(l5)));
			l3 = (T184f7(GE_void(((T118*)(C))->a1)));
			T185f8(GE_void(l3));
			t2 = (T185f6(GE_void(l3)));
			while (!(t2)) {
				l4 = (T185f4(GE_void(l3)));
				t2 = ((l2)!=(l4));
				if (t2) {
					t1 = (((T182*)(GE_void(l4)))->a2);
					t1 = (((T22*)(GE_void(t1)))->a8);
					l7 = (T31f29(GE_void(t1)));
					T123f9(GE_void(l7));
					t2 = (T123f5(GE_void(l7)));
					while (!(t2)) {
						l8 = (T123f6(GE_void(l7)));
						t2 = (T26f34(GE_void(l6), l8));
						if (t2) {
							t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
							t3 = (T26f30(GE_void(l6)));
							t4 = (T26f30(GE_void(l8)));
							t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': conflicting selects: `", 25),
t3,
GE_ms("\' and `", 7),
t4,
GE_ms("\'.", 2));
							T118f15(C, (T6)(GE_int32(1)), t1);
						}
						T123f10(GE_void(l7));
						t2 = (T123f5(GE_void(l7)));
					}
				}
				T185f9(GE_void(l3));
				t2 = (T185f6(GE_void(l3)));
			}
			T123f10(GE_void(l5));
			t2 = (T123f5(GE_void(l5)));
		}
		T185f9(GE_void(l1));
		t2 = (T185f6(GE_void(l1)));
	}
}

/* GEANT_INHERIT.merge_in_parent_project */
void T118f7(T0* C, T0* a1)
{
	T0* t1;
	T0* t2;
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
	t2 = (((T182*)(GE_void(a1)))->a2);
	t2 = (((T22*)(GE_void(t2)))->a2);
	t1 = GE_ma33((T6)5,
GE_ms("\nProject \'", 10),
t1,
GE_ms("\': --> merging in parent \'", 26),
t2,
GE_ms("\':", 2));
	T22f31(GE_void(((T118*)(C))->a2), t1);
	T118f9(C, a1);
	T118f10(C, a1);
	T118f11(C, a1);
	t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
	t2 = (((T182*)(GE_void(a1)))->a2);
	t2 = (((T22*)(GE_void(t2)))->a2);
	t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': <-- merging in of parent `", 29),
t2,
GE_ms("\' done.\n", 8));
	T22f31(GE_void(((T118*)(C))->a2), t1);
}

/* GEANT_INHERIT.merge_in_unchanged_targets */
void T118f11(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	T0* t5;
	t1 = (((T182*)(GE_void(a1)))->a6);
	l1 = (T31f29(GE_void(t1)));
	T123f9(GE_void(l1));
	t2 = (T123f5(GE_void(l1)));
	while (!(t2)) {
		l3 = (T123f6(GE_void(l1)));
		l4 = (T123f7(GE_void(l1)));
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
		t3 = (T26f30(GE_void(l3)));
		t4 = (((T182*)(GE_void(a1)))->a2);
		t4 = (((T22*)(GE_void(t4)))->a2);
		t1 = GE_ma33((T6)9,
GE_ms("Project \'", 9),
t1,
GE_ms("\': merging in unchanged parent target `", 39),
l4,
GE_ms("\' (", 3),
t3,
GE_ms(") from parent \'", 15),
t4,
GE_ms("\'", 1));
		T22f31(GE_void(((T118*)(C))->a2), t1);
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
		t2 = (T31f24(GE_void(t1), l4));
		if (t2) {
			t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
			l2 = (T31f28(GE_void(t1), l4));
			t1 = (T118f3(C));
			t3 = (T26f30(GE_void(l2)));
			t4 = (T26f30(GE_void(l3)));
			t2 = (T76f1(GE_void(t1), t3, t4));
			if (t2) {
				t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
				t3 = (T26f30(GE_void(l3)));
				t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': sharing target `", 19),
l4,
GE_ms("\' since name and full_name (\'", 29),
t3,
GE_ms("\') is equal to the existing target.", 35));
				T22f31(GE_void(((T118*)(C))->a2), t1);
			} else {
				t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
				t3 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
				t3 = (T31f28(GE_void(t3), l4));
				t3 = (T26f30(GE_void(t3)));
				t4 = (T26f30(GE_void(l3)));
				t5 = (((T182*)(GE_void(a1)))->a2);
				t5 = (((T22*)(GE_void(t5)))->a2);
				t1 = GE_ma33((T6)16,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Project \'", 9),
t1,
GE_ms("\' contains target\n    `", 23),
t3,
GE_ms("\' named `", 9),
l4,
GE_ms("\'\n  which causes a name clash with target ", 42),
GE_ms("\n    `", 6),
t4,
GE_ms("\' named `", 9),
l4,
GE_ms("\'\n  inherited from project \'", 28),
t5,
GE_ms("\'.\n", 3),
GE_ms("  Use a rename or redefine clause to resolve the name clash.", 60));
				T118f15(C, (T6)(GE_int32(1)), t1);
			}
		}
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
		T31f45(GE_void(t1), l3, l4);
		T123f10(GE_void(l1));
		t2 = (T123f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].force_last */
void T31f45(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T31f48(C);
	T31f46(C, a2);
	t1 = ((((T31*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T31f49(C, a1, ((T31*)(C))->a1);
	} else {
		l1 = ((T6)((((T31*)(C))->a5)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T31*)(C))->a6));
		if (t1) {
			t2 = (T31f20(C, l1));
			T31f50(C, t2);
			l2 = (T31f21(C, a2));
		} else {
			l2 = ((T31*)(C))->a7;
		}
		t2 = (T31f25(C, l2));
		T31f51(C, t2, l1);
		T31f52(C, l1, l2);
		T31f49(C, a1, l1);
		T31f53(C, a2, l1);
		((T31*)(C))->a5 = l1;
		((T31*)(C))->a8 = ((T6)((((T31*)(C))->a8)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].resize */
void T31f50(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T31f48(C);
	l1 = (T31f22(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T31f55(C, t1);
	l2 = ((T31*)(C))->a9;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T31f52(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T31*)(C))->a9 = l1;
	l2 = ((T31*)(C))->a5;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T31f32(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T31f31(C, l2));
			l3 = (T31f21(C, t3));
			t1 = (T31f25(C, l3));
			T31f51(C, t1, l2);
			T31f52(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f56(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f57(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f58(C, t1);
	((T31*)(C))->a6 = a1;
	((T31*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].clashes_resize */
void T31f58(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T31f30(C));
	((T31*)(C))->a13 = (T65f1(GE_void(t1), ((T31*)(C))->a13, a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].special_integer_ */
T0* T31f30(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].key_storage_resize */
void T31f57(T0* C, T6 a1)
{
	((T31*)(C))->a15 = (T66f1(GE_void(((T31*)(C))->a19), ((T31*)(C))->a15, a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].item_storage_resize */
void T31f56(T0* C, T6 a1)
{
	((T31*)(C))->a2 = (T124f1(GE_void(((T31*)(C))->a18), ((T31*)(C))->a2, a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].slots_resize */
void T31f55(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T31f30(C));
	((T31*)(C))->a14 = (T65f1(GE_void(t1), ((T31*)(C))->a14, a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].new_modulus */
T6 T31f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].new_capacity */
T6 T31f20(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* GEANT_INHERIT.string_ */
T0* T118f3(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_INHERIT.merge_in_renamed_targets */
void T118f10(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	T0* t5;
	t1 = (((T182*)(GE_void(a1)))->a7);
	l1 = (T31f29(GE_void(t1)));
	T123f11(GE_void(l1));
	t2 = (T123f4(GE_void(l1)));
	while (!(t2)) {
		l3 = (T123f6(GE_void(l1)));
		l4 = (T123f7(GE_void(l1)));
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
		t3 = (T26f30(GE_void(l3)));
		t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': merging in renamed target `", 30),
l4,
GE_ms("\' (", 3),
t3,
GE_ms(")", 1));
		T22f31(GE_void(((T118*)(C))->a2), t1);
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
		t2 = (T31f24(GE_void(t1), l4));
		if (t2) {
			t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
			l2 = (T31f28(GE_void(t1), l4));
			t1 = (T118f3(C));
			t3 = (T26f30(GE_void(l2)));
			t4 = (T26f30(GE_void(l3)));
			t2 = (T76f1(GE_void(t1), t3, t4));
			if (t2) {
				t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
				t3 = (T26f30(GE_void(l3)));
				t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': sharing target `", 19),
l4,
GE_ms("\' since name and full_name (\'", 29),
t3,
GE_ms("\') is equal to the existing target.", 35));
				T22f31(GE_void(((T118*)(C))->a2), t1);
			} else {
				t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
				t3 = (T26f30(GE_void(l2)));
				t4 = (T26f30(GE_void(l3)));
				t5 = (((T182*)(GE_void(a1)))->a2);
				t5 = (((T22*)(GE_void(t5)))->a2);
				t1 = GE_ma33((T6)15,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Project \'", 9),
t1,
GE_ms("\': contains target `", 20),
t3,
GE_ms("\' named `", 9),
l4,
GE_ms("\' which causes a name clash with\n  target `", 43),
t4,
GE_ms("\' named `", 9),
l4,
GE_ms("\' inherited from project \'", 26),
t5,
GE_ms("\'.\n", 3),
GE_ms("  Use a rename or redefine clause to resolve the name clash.", 60));
				T118f15(C, (T6)(GE_int32(1)), t1);
			}
		} else {
			t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
			T31f45(GE_void(t1), l3, l4);
		}
		T123f12(GE_void(l1));
		t2 = (T123f4(GE_void(l1)));
	}
}

/* GEANT_INHERIT.merge_in_redefined_targets */
void T118f9(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	t1 = (((T182*)(GE_void(a1)))->a8);
	l1 = (T31f29(GE_void(t1)));
	T123f11(GE_void(l1));
	t2 = (T123f4(GE_void(l1)));
	while (!(t2)) {
		l3 = (T123f6(GE_void(l1)));
		l4 = (T123f7(GE_void(l1)));
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
		t3 = (T26f30(GE_void(l3)));
		t4 = (((T182*)(GE_void(a1)))->a2);
		t4 = (((T22*)(GE_void(t4)))->a2);
		t1 = GE_ma33((T6)9,
GE_ms("Project \'", 9),
t1,
GE_ms("\': merging in redefined target `", 32),
l4,
GE_ms("\' (", 3),
t3,
GE_ms(") from parent \'", 15),
t4,
GE_ms("\'", 1));
		T22f31(GE_void(((T118*)(C))->a2), t1);
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
		t2 = (T31f24(GE_void(t1), l4));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
			t1 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Project \'", 9),
t1,
GE_ms("\' does not redefine parent target `", 35),
l4,
GE_ms("\' as declared.", 14));
			T118f15(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a1);
		l2 = (T31f28(GE_void(t1), l4));
		t2 = (T26f33(GE_void(l2), l3));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t1 = (T26f30(GE_void(l2)));
			t3 = (T26f30(GE_void(l3)));
			t1 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("Target \'", 8),
t1,
GE_ms("\'s arguments do not match it\'s parent\'s (`", 42),
t3,
GE_ms("\'s) arguments.", 14));
			T118f15(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (((T22*)(GE_void(((T118*)(C))->a2)))->a2);
		t3 = (T26f30(GE_void(l2)));
		t4 = (T26f30(GE_void(l3)));
		t1 = GE_ma33((T6)7,
GE_ms("Project \'", 9),
t1,
GE_ms("\': connecting target `", 22),
t3,
GE_ms("\' and target `", 14),
t4,
GE_ms("\'", 1));
		T22f31(GE_void(((T118*)(C))->a2), t1);
		T26f96(GE_void(l3), l2);
		T26f91(GE_void(l2), l3);
		T123f12(GE_void(l1));
		t2 = (T123f4(GE_void(l1)));
	}
}

/* GEANT_TARGET.set_precursor_target */
void T26f91(T0* C, T0* a1)
{
	((T26*)(C))->a10 = a1;
}

/* GEANT_TARGET.formal_arguments_match */
T1 T26f33(T0* C, T0* a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (((T26*)(GE_void(a1)))->a3);
	R = (T34f33(GE_void(((T26*)(C))->a3), t1));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].forth */
void T185f9(T0* C)
{
	T184f20(GE_void(((T185*)(C))->a1), C);
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_forth */
void T184f20(T0* C, T0* a1)
{
	T1 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	l2 = (((T185*)(a1))->a2);
	l1 = ((l2)==((T6)(GE_int32(0))));
	l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
	t1 = (T6f1(&l2, ((T184*)(C))->a5));
	if (t1) {
		l2 = (T6)(GE_int32(-1));
		t1 = ((T1)(!(l1)));
		if (t1) {
			T184f22(C, a1);
		}
	} else {
		if (l1) {
			T184f21(C, a1);
		}
	}
	T185f10(a1, l2);
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].set_position */
void T185f10(T0* C, T6 a1)
{
	((T185*)(C))->a2 = a1;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].add_traversing_cursor */
void T184f21(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T184*)(C))->a4));
	if (t1) {
		t2 = (((T185*)(GE_void(((T184*)(C))->a4)))->a3);
		T185f11(a1, t2);
		T185f11(GE_void(((T184*)(C))->a4), a1);
	}
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].set_next_cursor */
void T185f11(T0* C, T0* a1)
{
	((T185*)(C))->a3 = a1;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].remove_traversing_cursor */
void T184f22(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T184*)(C))->a4));
	if (t1) {
		l2 = ((T184*)(C))->a4;
		l1 = (((T185*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T185*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T185*)(a1))->a3);
			T185f11(GE_void(l2), t2);
			T185f11(a1, EIF_VOID);
		}
	}
}

/* GEANT_PARENT.prepare_project */
void T182f14(T0* C)
{
	T0* t1;
	T0* t2;
	T1 t3;
	t1 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
	t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': --> preparing parent \'", 25),
t2,
GE_ms("\' for inheritance:", 18));
	T22f31(GE_void(((T182*)(C))->a5), t1);
	T182f15(C);
	T182f16(C);
	T182f17(C);
	t3 = (((T22*)(GE_void(((T182*)(C))->a5)))->a12);
	if (t3) {
		T182f18(C);
	}
	T182f19(C);
	t1 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
	t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a2);
	t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': <-- preparation of \'", 23),
t2,
GE_ms("\' for inheritance done.", 23));
	T22f31(GE_void(((T182*)(C))->a5), t1);
}

/* GEANT_PARENT.apply_selects */
void T182f19(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	l1 = (T264f26(GE_void(((T182*)(C))->a4)));
	T348f7(GE_void(l1));
	t1 = (T348f5(GE_void(l1)));
	while (!(t1)) {
		l2 = (T348f4(GE_void(l1)));
		t1 = (T263f2(GE_void(l2)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = GE_ma33((T6)1,
GE_ms("invalid select clause.", 22));
			T182f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T263*)(GE_void(l2)))->a1);
		t1 = (T31f24(GE_void(((T182*)(C))->a8), t2));
		if (t1) {
			t2 = (((T263*)(GE_void(l2)))->a1);
			l3 = (T31f28(GE_void(((T182*)(C))->a8), t2));
		} else {
			t2 = (((T263*)(GE_void(l2)))->a1);
			t1 = (T31f24(GE_void(((T182*)(C))->a7), t2));
			if (t1) {
				t2 = (((T263*)(GE_void(l2)))->a1);
				l3 = (T31f28(GE_void(((T182*)(C))->a7), t2));
			} else {
				t2 = (((T263*)(GE_void(l2)))->a1);
				t1 = (T31f24(GE_void(((T182*)(C))->a6), t2));
				if (t1) {
					t2 = (((T263*)(GE_void(l2)))->a1);
					l3 = (T31f28(GE_void(((T182*)(C))->a6), t2));
				}
			}
		}
		t1 = ((l3)==(EIF_VOID));
		if (t1) {
			t2 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
			t3 = (((T263*)(GE_void(l2)))->a1);
			t2 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project \'", 11),
t2,
GE_ms("\': selected target: `", 21),
t3,
GE_ms("\' does not exist.", 17));
			T182f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
		t3 = (((T263*)(GE_void(l2)))->a1);
		t2 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t2,
GE_ms("\': moving target \'", 18),
t3,
GE_ms("\' to list of selected targets.", 30));
		T22f31(GE_void(((T182*)(C))->a5), t2);
		t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a8);
		t3 = (((T263*)(GE_void(l2)))->a1);
		T31f45(GE_void(t2), l3, t3);
		T348f8(GE_void(l1));
		t1 = (T348f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].forth */
void T348f8(T0* C)
{
	T264f58(GE_void(((T348*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_forth */
void T264f58(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l4 = (((T348*)(a1))->a2);
	t1 = ((l4)==((T6)(GE_int32(-1))));
	if (t1) {
		l3 = EIF_TRUE;
	} else {
		l1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	}
	l2 = ((T264*)(C))->a3;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T264f25(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T264f25(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T348f9(a1, (T6)(GE_int32(-2)));
		t1 = ((T1)(!(l3)));
		if (t1) {
			T264f59(C, a1);
		}
	} else {
		T348f9(a1, l1);
		if (l3) {
			T264f60(C, a1);
		}
	}
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].add_traversing_cursor */
void T264f60(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T264*)(C))->a17));
	if (t1) {
		t2 = (((T348*)(GE_void(((T264*)(C))->a17)))->a3);
		T348f10(a1, t2);
		T348f10(GE_void(((T264*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].set_next_cursor */
void T348f10(T0* C, T0* a1)
{
	((T348*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].remove_traversing_cursor */
void T264f59(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T264*)(C))->a17));
	if (t1) {
		l2 = ((T264*)(C))->a17;
		l1 = (((T348*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T348*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T348*)(a1))->a3);
			T348f10(GE_void(l2), t2);
			T348f10(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].set_position */
void T348f9(T0* C, T6 a1)
{
	((T348*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].clashes_item */
T6 T264f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T264*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_PARENT.exit_application */
void T182f20(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T182f10(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T182f10(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T182f10(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T182f10(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T182f11(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PARENT.exceptions */
T0* T182f11(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_PARENT.std */
T0* T182f10(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_SELECT.is_executable */
T1 T263f2(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T263*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T263*)(C))->a1)))->id==17)?((T17*)(((T263*)(C))->a1))->a2:((T194*)(((T263*)(C))->a1))->a1));
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].item */
T0* T348f4(T0* C)
{
	T0* R = 0;
	R = (T264f32(GE_void(((T348*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_item */
T0* T264f32(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T348*)(a1))->a2);
	R = (T264f34(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].item_storage_item */
T0* T264f34(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T347*)(GE_void(((T264*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].after */
T1 T348f5(T0* C)
{
	T1 R = 0;
	R = (T264f31(GE_void(((T348*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_after */
T1 T264f31(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T348*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-2))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].start */
void T348f7(T0* C)
{
	T264f57(GE_void(((T348*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_start */
void T264f57(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = (T264f35(C));
	if (t1) {
		T348f9(a1, (T6)(GE_int32(-2)));
	} else {
		l3 = (T264f36(C, a1));
		l1 = (T6)(GE_int32(1));
		l2 = ((T264*)(C))->a3;
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T264f25(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (T264f25(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = (T6f1(&l1, l2));
		if (t1) {
			T348f9(a1, (T6)(GE_int32(-2)));
			t1 = ((T1)(!(l3)));
			if (t1) {
				T264f59(C, a1);
			}
		} else {
			T348f9(a1, l1);
			if (l3) {
				T264f60(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].cursor_off */
T1 T264f36(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T348*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].is_empty */
T1 T264f35(T0* C)
{
	T1 R = 0;
	R = ((((T264*)(C))->a6)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].new_cursor */
T0* T264f26(T0* C)
{
	T0* R = 0;
	R = T348c6(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_SELECT, STRING_8].make */
T0* T348c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T348));
	*(T348*)C = GE_default348;
	((T348*)(C))->a1 = a1;
	((T348*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* GEANT_PARENT.apply_undeclared_redefines */
void T182f18(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	t1 = (((T22*)(GE_void(((T182*)(C))->a5)))->a1);
	l1 = (T31f29(GE_void(t1)));
	T123f9(GE_void(l1));
	t2 = (T123f5(GE_void(l1)));
	while (!(t2)) {
		l2 = (T123f6(GE_void(l1)));
		l3 = (T123f7(GE_void(l1)));
		t2 = (T31f24(GE_void(((T182*)(C))->a6), l3));
		if (t2) {
			t1 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
			t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Applying implicit redefinition for target `", 55),
l3,
GE_ms("\' due to old inheritance format.", 32));
			T22f24(GE_void(((T182*)(C))->a5), t1);
			t1 = (T31f28(GE_void(((T182*)(C))->a6), l3));
			T31f45(GE_void(((T182*)(C))->a8), t1, l3);
			T31f63(GE_void(((T182*)(C))->a6), l3);
		}
		T123f10(GE_void(l1));
		t2 = (T123f5(GE_void(l1)));
	}
}

/* GEANT_PARENT.apply_unchangeds */
void T182f17(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T1 t3;
	t1 = (((T22*)(GE_void(((T182*)(C))->a2)))->a1);
	l1 = (T31f29(GE_void(t1)));
	T123f11(GE_void(l1));
	t2 = (T123f4(GE_void(l1)));
	while (!(t2)) {
		l2 = (T123f6(GE_void(l1)));
		l3 = (T123f7(GE_void(l1)));
		t2 = (T31f42(GE_void(((T182*)(C))->a7), l2));
		t2 = ((T1)(!(t2)));
		if (t2) {
			t3 = (T31f42(GE_void(((T182*)(C))->a8), l2));
			t2 = ((T1)(!(t3)));
		}
		if (t2) {
			T31f45(GE_void(((T182*)(C))->a6), l2, l3);
		}
		T123f12(GE_void(l1));
		t2 = (T123f4(GE_void(l1)));
	}
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].has_item */
T1 T31f42(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	l1 = ((T31*)(C))->a5;
	l2 = ((T31*)(C))->a11;
	t1 = ((l2)!=(EIF_VOID));
	if (t1) {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			if (t1) {
				t3 = (T31f27(C, l1));
				t1 = ((GE_void(l2), t3, a1, (T1)0));
			}
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	} else {
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		while (!(t1)) {
			t2 = (T31f32(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			if (t1) {
				t3 = (T31f27(C, l1));
				t1 = ((t3)==(a1));
			}
			if (t1) {
				R = EIF_TRUE;
				l1 = (T6)(GE_int32(0));
			} else {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* GEANT_PARENT.apply_redefines */
void T182f16(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	l1 = (T262f26(GE_void(((T182*)(C))->a3)));
	T342f7(GE_void(l1));
	t1 = (T342f5(GE_void(l1)));
	while (!(t1)) {
		l2 = (T342f4(GE_void(l1)));
		t1 = (T261f2(GE_void(l2)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = GE_ma33((T6)1,
GE_ms("invalid redefine clause.", 24));
			T182f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T261*)(GE_void(l2)))->a1);
		t1 = (T31f24(GE_void(((T182*)(C))->a7), t2));
		if (t1) {
			t2 = (((T261*)(GE_void(l2)))->a1);
			l3 = (T31f28(GE_void(((T182*)(C))->a7), t2));
		} else {
			t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a1);
			t3 = (((T261*)(GE_void(l2)))->a1);
			t1 = (T31f24(GE_void(t2), t3));
			if (t1) {
				t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a1);
				t3 = (((T261*)(GE_void(l2)))->a1);
				l3 = (T31f28(GE_void(t2), t3));
			}
		}
		t1 = ((l3)==(EIF_VOID));
		if (t1) {
			t2 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
			t3 = (((T261*)(GE_void(l2)))->a1);
			t2 = GE_ma33((T6)6,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project \'", 11),
t2,
GE_ms("\': cannot redefine target: `", 28),
t3,
GE_ms("\' since it does not exist.", 26));
			T182f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T261*)(GE_void(l2)))->a1);
		T31f45(GE_void(((T182*)(C))->a8), l3, t2);
		t2 = (((T261*)(GE_void(l2)))->a1);
		t1 = (T31f24(GE_void(((T182*)(C))->a7), t2));
		if (t1) {
			t2 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
			t3 = (((T261*)(GE_void(l2)))->a1);
			t2 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t2,
GE_ms("\': moving target \'", 18),
t3,
GE_ms("\' from list of renamed targets to list of redefined targets.", 60));
			T22f31(GE_void(((T182*)(C))->a5), t2);
			t2 = (((T261*)(GE_void(l2)))->a1);
			T31f63(GE_void(((T182*)(C))->a7), t2);
		} else {
			t2 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
			t3 = (((T261*)(GE_void(l2)))->a1);
			t2 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t2,
GE_ms("\': adding target \'", 18),
t3,
GE_ms("\' to list of redefined targets.", 31));
			T22f31(GE_void(((T182*)(C))->a5), t2);
		}
		T342f8(GE_void(l1));
		t1 = (T342f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].forth */
void T342f8(T0* C)
{
	T262f58(GE_void(((T342*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_forth */
void T262f58(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T6 l4 = 0;
	T1 t1;
	T6 t2;
	l4 = (((T342*)(a1))->a2);
	t1 = ((l4)==((T6)(GE_int32(-1))));
	if (t1) {
		l3 = EIF_TRUE;
	} else {
		l1 = ((T6)((l4)+((T6)(GE_int32(1)))));
	}
	l2 = ((T262*)(C))->a3;
	t1 = (T6f1(&l1, l2));
	if (!(t1)) {
		t2 = (T262f25(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T262f25(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = (T6f1(&l1, l2));
	if (t1) {
		T342f9(a1, (T6)(GE_int32(-2)));
		t1 = ((T1)(!(l3)));
		if (t1) {
			T262f59(C, a1);
		}
	} else {
		T342f9(a1, l1);
		if (l3) {
			T262f60(C, a1);
		}
	}
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].add_traversing_cursor */
void T262f60(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T262*)(C))->a17));
	if (t1) {
		t2 = (((T342*)(GE_void(((T262*)(C))->a17)))->a3);
		T342f10(a1, t2);
		T342f10(GE_void(((T262*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].set_next_cursor */
void T342f10(T0* C, T0* a1)
{
	((T342*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].remove_traversing_cursor */
void T262f59(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T262*)(C))->a17));
	if (t1) {
		l2 = ((T262*)(C))->a17;
		l1 = (((T342*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T342*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T342*)(a1))->a3);
			T342f10(GE_void(l2), t2);
			T342f10(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].set_position */
void T342f9(T0* C, T6 a1)
{
	((T342*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].clashes_item */
T6 T262f25(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T262*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_REDEFINE.is_executable */
T1 T261f2(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((((T261*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T261*)(C))->a1)))->id==17)?((T17*)(((T261*)(C))->a1))->a2:((T194*)(((T261*)(C))->a1))->a1));
		R = (T6f1(&t2, (T6)(GE_int32(0))));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].item */
T0* T342f4(T0* C)
{
	T0* R = 0;
	R = (T262f32(GE_void(((T342*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_item */
T0* T262f32(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T342*)(a1))->a2);
	R = (T262f34(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].item_storage_item */
T0* T262f34(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T341*)(GE_void(((T262*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].after */
T1 T342f5(T0* C)
{
	T1 R = 0;
	R = (T262f31(GE_void(((T342*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_after */
T1 T262f31(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T342*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-2))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].start */
void T342f7(T0* C)
{
	T262f57(GE_void(((T342*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_start */
void T262f57(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 t1;
	T6 t2;
	t1 = (T262f35(C));
	if (t1) {
		T342f9(a1, (T6)(GE_int32(-2)));
	} else {
		l3 = (T262f36(C, a1));
		l1 = (T6)(GE_int32(1));
		l2 = ((T262*)(C))->a3;
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (T262f25(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (T262f25(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = (T6f1(&l1, l2));
		if (t1) {
			T342f9(a1, (T6)(GE_int32(-2)));
			t1 = ((T1)(!(l3)));
			if (t1) {
				T262f59(C, a1);
			}
		} else {
			T342f9(a1, l1);
			if (l3) {
				T262f60(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].cursor_off */
T1 T262f36(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T342*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].is_empty */
T1 T262f35(T0* C)
{
	T1 R = 0;
	R = ((((T262*)(C))->a6)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].new_cursor */
T0* T262f26(T0* C)
{
	T0* R = 0;
	R = T342c6(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_REDEFINE, STRING_8].make */
T0* T342c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T342));
	*(T342*)C = GE_default342;
	((T342*)(C))->a1 = a1;
	((T342*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* GEANT_PARENT.apply_renames */
void T182f15(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	T0* t4;
	T0* t5;
	l1 = (T260f27(GE_void(((T182*)(C))->a1)));
	T336f7(GE_void(l1));
	t1 = (T336f5(GE_void(l1)));
	while (!(t1)) {
		l2 = (T336f4(GE_void(l1)));
		t1 = (T259f3(GE_void(l2)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = GE_ma33((T6)1,
GE_ms("invalid rename clause.", 22));
			T182f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a1);
		t3 = (((T259*)(GE_void(l2)))->a1);
		t1 = (T31f24(GE_void(t2), t3));
		t1 = ((T1)(!(t1)));
		if (t1) {
			t2 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
			t3 = (((T259*)(GE_void(l2)))->a1);
			t4 = (((T22*)(GE_void(((T182*)(C))->a2)))->a2);
			t2 = GE_ma33((T6)9,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project \'", 11),
t2,
GE_ms("\': VHRC-1: Inheritance clause contains inheritance operator", 59),
GE_ms(" \'rename\'\nfor a feature `", 25),
t3,
GE_ms("\' which does not exist in parent \'", 34),
t4,
GE_ms("\'.", 2));
			T182f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a1);
		t3 = (((T259*)(GE_void(l2)))->a2);
		t1 = (T31f24(GE_void(t2), t3));
		if (t1) {
			t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a2);
			t3 = (((T259*)(GE_void(l2)))->a1);
			t4 = (((T259*)(GE_void(l2)))->a2);
			t2 = GE_ma33((T6)8,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project \'", 11),
t2,
GE_ms("\': cannot rename target: `", 26),
t3,
GE_ms(" to `", 5),
t4,
GE_ms("\' since it already exists.", 26));
			T182f20(C, (T6)(GE_int32(1)), t2);
		}
		t2 = (((T22*)(GE_void(((T182*)(C))->a2)))->a1);
		t3 = (((T259*)(GE_void(l2)))->a1);
		l3 = (T31f28(GE_void(t2), t3));
		t2 = (((T22*)(GE_void(((T182*)(C))->a5)))->a2);
		t3 = (T26f30(GE_void(l3)));
		t4 = (((T259*)(GE_void(l2)))->a1);
		t5 = (((T259*)(GE_void(l2)))->a2);
		t2 = GE_ma33((T6)9,
GE_ms("Project \'", 9),
t2,
GE_ms("\': renaming target: `", 21),
t3,
GE_ms("\' named `", 9),
t4,
GE_ms("\' as: `", 7),
t5,
GE_ms("\'", 1));
		T22f31(GE_void(((T182*)(C))->a5), t2);
		t2 = (((T259*)(GE_void(l2)))->a2);
		T31f45(GE_void(((T182*)(C))->a7), l3, t2);
		T336f8(GE_void(l1));
		t1 = (T336f5(GE_void(l1)));
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].back */
void T336f8(T0* C)
{
	T260f59(GE_void(((T336*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_back */
void T260f59(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	l3 = (((T336*)(a1))->a2);
	t1 = ((l3)==((T6)(GE_int32(-2))));
	if (t1) {
		l2 = EIF_TRUE;
		l1 = ((T260*)(C))->a3;
	} else {
		l1 = ((T6)((l3)-((T6)(GE_int32(1)))));
	}
	t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
	if (!(t1)) {
		t2 = (T260f26(C, l1));
		t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
	}
	while (!(t1)) {
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (T260f26(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
	}
	t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
	if (t1) {
		T336f9(a1, (T6)(GE_int32(-1)));
		t1 = ((T1)(!(l2)));
		if (t1) {
			T260f60(C, a1);
		}
	} else {
		T336f9(a1, l1);
		if (l2) {
			T260f61(C, a1);
		}
	}
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].add_traversing_cursor */
void T260f61(T0* C, T0* a1)
{
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T260*)(C))->a17));
	if (t1) {
		t2 = (((T336*)(GE_void(((T260*)(C))->a17)))->a3);
		T336f10(a1, t2);
		T336f10(GE_void(((T260*)(C))->a17), a1);
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].set_next_cursor */
void T336f10(T0* C, T0* a1)
{
	((T336*)(C))->a3 = a1;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].remove_traversing_cursor */
void T260f60(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(((T260*)(C))->a17));
	if (t1) {
		l2 = ((T260*)(C))->a17;
		l1 = (((T336*)(GE_void(l2)))->a3);
		t1 = ((l1)==(a1));
		if (!(t1)) {
			t1 = ((l1)==(EIF_VOID));
		}
		while (!(t1)) {
			l2 = l1;
			l1 = (((T336*)(GE_void(l1)))->a3);
			t1 = ((l1)==(a1));
			if (!(t1)) {
				t1 = ((l1)==(EIF_VOID));
			}
		}
		t1 = ((l1)==(a1));
		if (t1) {
			t2 = (((T336*)(a1))->a3);
			T336f10(GE_void(l2), t2);
			T336f10(a1, EIF_VOID);
		}
	}
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].set_position */
void T336f9(T0* C, T6 a1)
{
	((T336*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].clashes_item */
T6 T260f26(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T260*)(C))->a13)))->z2[a1]);
	return R;
}

/* GEANT_RENAME.is_executable */
T1 T259f3(T0* C)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((((T259*)(C))->a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(((T259*)(C))->a1)))->id==17)?((T17*)(((T259*)(C))->a1))->a2:((T194*)(((T259*)(C))->a1))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t1 = ((((T259*)(C))->a2)!=(EIF_VOID));
	}
	if (t1) {
		t2 = (((((T0*)(GE_void(((T259*)(C))->a2)))->id==17)?((T17*)(((T259*)(C))->a2))->a2:((T194*)(((T259*)(C))->a2))->a1));
		t1 = (T6f1(&t2, (T6)(GE_int32(0))));
	}
	if (t1) {
		t3 = (T259f4(C));
		t1 = (T76f1(GE_void(t3), ((T259*)(C))->a1, ((T259*)(C))->a2));
		R = ((T1)(!(t1)));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* GEANT_RENAME.string_ */
T0* T259f4(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].item */
T0* T336f4(T0* C)
{
	T0* R = 0;
	R = (T260f33(GE_void(((T336*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_item */
T0* T260f33(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T336*)(a1))->a2);
	R = (T260f34(C, t1));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].item_storage_item */
T0* T260f34(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T335*)(GE_void(((T260*)(C))->a12)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].before */
T1 T336f5(T0* C)
{
	T1 R = 0;
	R = (T260f32(GE_void(((T336*)(C))->a1), C));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_before */
T1 T260f32(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T336*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-1))));
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].finish */
void T336f7(T0* C)
{
	T260f58(GE_void(((T336*)(C))->a1), C);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_finish */
void T260f58(T0* C, T0* a1)
{
	T6 l1 = 0;
	T1 l2 = 0;
	T1 t1;
	T6 t2;
	t1 = (T260f35(C));
	if (t1) {
		T336f9(a1, (T6)(GE_int32(-1)));
	} else {
		l2 = (T260f36(C, a1));
		l1 = ((T260*)(C))->a3;
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (T260f26(C, l1));
			t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (T260f26(C, l1));
				t1 = (T6f1(&t2, (T6)(GE_int32(-1))));
			}
		}
		t1 = ((T1)((l1)<((T6)(GE_int32(0)))));
		if (t1) {
			T336f9(a1, (T6)(GE_int32(-1)));
			t1 = ((T1)(!(l2)));
			if (t1) {
				T260f60(C, a1);
			}
		} else {
			T336f9(a1, l1);
			if (l2) {
				T260f61(C, a1);
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].cursor_off */
T1 T260f36(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T336*)(a1))->a2);
	R = ((T1)((t1)<((T6)(GE_int32(0)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].is_empty */
T1 T260f35(T0* C)
{
	T1 R = 0;
	R = ((((T260*)(C))->a6)==((T6)(GE_int32(0))));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].new_cursor */
T0* T260f27(T0* C)
{
	T0* R = 0;
	R = T336c6(C);
	return R;
}

/* DS_HASH_TABLE_CURSOR [GEANT_RENAME, STRING_8].make */
T0* T336c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T336));
	*(T336*)C = GE_default336;
	((T336*)(C))->a1 = a1;
	((T336*)(C))->a2 = ((T6)(GE_int32(-1)));
	return C;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].item */
T0* T185f4(T0* C)
{
	T0* R = 0;
	R = (T184f10(GE_void(((T185*)(C))->a1), C));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_item */
T0* T184f10(T0* C, T0* a1)
{
	T0* R = 0;
	T6 t1;
	t1 = (((T185*)(a1))->a2);
	R = (T184f12(C, t1));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].item */
T0* T184f12(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T250*)(GE_void(((T184*)(C))->a2)))->z2[a1]);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].after */
T1 T185f6(T0* C)
{
	T1 R = 0;
	R = (T184f9(GE_void(((T185*)(C))->a1), C));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_after */
T1 T184f9(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T185*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(-1))));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].start */
void T185f8(T0* C)
{
	T184f19(GE_void(((T185*)(C))->a1), C);
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_start */
void T184f19(T0* C, T0* a1)
{
	T1 l1 = 0;
	T1 t1;
	l1 = (T185f5(a1));
	t1 = (T184f13(C));
	if (t1) {
		T185f10(a1, (T6)(GE_int32(-1)));
	} else {
		T185f10(a1, (T6)(GE_int32(1)));
		if (l1) {
			T184f21(C, a1);
		}
	}
}

/* DS_ARRAYED_LIST [GEANT_PARENT].is_empty */
T1 T184f13(T0* C)
{
	T1 R = 0;
	R = ((((T184*)(C))->a5)==((T6)(GE_int32(0))));
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].off */
T1 T185f5(T0* C)
{
	T1 R = 0;
	R = (T184f14(GE_void(((T185*)(C))->a1), C));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_off */
T1 T184f14(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T184f9(C, a1));
	if (!(t1)) {
		R = (T184f15(C, a1));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].cursor_before */
T1 T184f15(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	t1 = (((T185*)(a1))->a2);
	R = ((t1)==((T6)(GE_int32(0))));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].new_cursor */
T0* T184f7(T0* C)
{
	T0* R = 0;
	R = T185c7(C);
	return R;
}

/* DS_ARRAYED_LIST_CURSOR [GEANT_PARENT].make */
T0* T185c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T185));
	*(T185*)C = GE_default185;
	((T185*)(C))->a1 = a1;
	return C;
}

/* GEANT_PROJECT_LOADER.load */
void T23f10(T0* C, T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* t1;
	T1 t2;
	T0* t3;
	T0* t4;
	((T23*)(C))->a1 = EIF_VOID;
	t1 = (((((T0*)(GE_void(((T23*)(C))->a2)))->id==17)?T17f4(((T23*)(C))->a2):T194f16(((T23*)(C))->a2)));
	l1 = T55c56(t1);
	T55f57(GE_void(l1));
	t2 = (T55f17(GE_void(l1)));
	if (t2) {
		l2 = T56c8(a1, a2, ((T23*)(C))->a2);
		T56f9(GE_void(l2), l1);
		T55f58(GE_void(l1));
		((T23*)(C))->a1 = (((T56*)(GE_void(l2)))->a1);
	} else {
		t1 = (T23f5(C));
		t1 = (T46f1(GE_void(t1)));
		T47f10(GE_void(t1), GE_ms("cannot read file: \'", 19));
		t1 = (T23f5(C));
		t1 = (T46f1(GE_void(t1)));
		T47f10(GE_void(t1), ((T23*)(C))->a2);
		t1 = (T23f5(C));
		t1 = (T46f1(GE_void(t1)));
		T47f18(GE_void(t1), (T2)('\''));
		t1 = (T23f5(C));
		t1 = (T46f1(GE_void(t1)));
		T47f11(GE_void(t1));
	}
	t2 = ((((T23*)(C))->a1)==(EIF_VOID));
	if (t2) {
		t1 = (T23f3(C));
		t3 = (T23f3(C));
		t4 = (T23f4(C));
		t3 = (((((T0*)(GE_void(t3)))->id==54)?T54f3(t3, ((T23*)(C))->a2, t4):T53f3(t3, ((T23*)(C))->a2, t4)));
		l3 = (((((T0*)(GE_void(t1)))->id==54)?T54f4(t1, t3):T53f4(t1, t3)));
		t1 = GE_ma33((T6)3,
GE_ms("Parsing error in file \'", 23),
l3,
GE_ms("\'", 1));
		T23f11(C, (T6)(GE_int32(1)), t1);
	}
}

/* GEANT_PROJECT_LOADER.exit_application */
void T23f11(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T23f5(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T23f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T23f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T23f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T23f6(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PROJECT_LOADER.exceptions */
T0* T23f6(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.absolute_pathname */
T0* T53f4(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = (T53f8(C, a1));
	if (t1) {
		R = a1;
	} else {
		t1 = (T53f9(C, a1));
		if (t1) {
			t2 = (T53f10(C));
			R = (T53f11(C, t2, a1));
		} else {
			t2 = (T53f12(C));
			t3 = (T53f13(C));
			R = (T76f6(GE_void(t2), t3, a1));
		}
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.current_drive */
T0* T53f13(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	l1 = (T53f10(C));
	l3 = (((T17*)(GE_void(l1)))->a2);
	l2 = (T6)(GE_int32(1));
	t1 = (T6f1(&l2, l3));
	if (!(t1)) {
		t2 = (T17f9(GE_void(l1), l2));
		t1 = (T53f19(C, t2));
	}
	while (!(t1)) {
		l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l2, l3));
		if (!(t1)) {
			t2 = (T17f9(GE_void(l1), l2));
			t1 = (T53f19(C, t2));
		}
	}
	t1 = (T6f1(&l2, (T6)(GE_int32(1))));
	if (t1) {
		t1 = (T6f9(&l2, l3));
	}
	if (t1) {
		t3 = ((T6)((l2)-((T6)(GE_int32(1)))));
		R = (T17f10(GE_void(l1), (T6)(GE_int32(1)), t3));
	} else {
		R = GE_ms("", 0);
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.is_directory_separator */
T1 T53f19(T0* C, T2 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = ((a1)==((T2)('\\')));
	if (!(t1)) {
		R = ((a1)==(((T53*)(C))->a1));
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.pathname */
T0* T53f11(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T2 t4;
	T1 t5;
	t1 = (T53f12(C));
	R = (T76f7(GE_void(t1), a1));
	t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T194*)(a2))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
		t3 = (T6f1(&l1, (T6)(GE_int32(0))));
		if (t3) {
			t4 = (((((T0*)(GE_void(R)))->id==17)?T17f9(R, l1):T194f10(R, l1)));
			t5 = (T53f19(C, t4));
			t3 = ((T1)(!(t5)));
		}
		if (t3) {
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('\\'));
			} else {
				T194f56(R, (T2)('\\'));
			}
		}
		t1 = (T53f12(C));
		R = (T76f5(GE_void(t1), R, a2));
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.is_relative_pathname */
T1 T53f9(T0* C, T0* a1)
{
	T1 R = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = (T53f8(C, a1));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((t2)==((T6)(GE_int32(0))));
		if (!(t1)) {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T194f10(a1, (T6)(GE_int32(1)))));
			t1 = (T53f19(C, t3));
			R = ((T1)(!(t1)));
		} else {
			R = EIF_TRUE;
		}
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.is_absolute_pathname */
T1 T53f8(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 l4 = 0;
	T2 l5 = 0;
	T1 t1;
	T2 t2;
	T1 t3;
	T6 t4;
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f5(&l2, (T6)(GE_int32(4))));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T194f10(a1, (T6)(GE_int32(1)))));
		t1 = (T53f19(C, t2));
	}
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(2))):T194f10(a1, (T6)(GE_int32(2)))));
		t1 = (T53f19(C, t2));
		if (t1) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(3))):T194f10(a1, (T6)(GE_int32(3)))));
			t3 = (T53f19(C, t2));
			t1 = ((T1)(!(t3)));
		}
		if (t1) {
			l1 = (T6)(GE_int32(4));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t1 = (R);
			}
			while (!(t1)) {
				l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t1 = (T53f19(C, l5));
				if (t1) {
					R = EIF_TRUE;
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t1 = (R);
				}
			}
		}
	} else {
		t1 = (T6f5(&l2, (T6)(GE_int32(3))));
		if (t1) {
			l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T194f10(a1, (T6)(GE_int32(1)))));
			t1 = (T53f19(C, l5));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t1 = ((l5)!=((T2)(':')));
			}
			if (t1) {
				l1 = (T6)(GE_int32(2));
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t1 = (l3);
				}
				if (!(t1)) {
					t1 = (l4);
				}
				while (!(t1)) {
					l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
					t1 = (T53f19(C, l5));
					if (t1) {
						l3 = EIF_TRUE;
					} else {
						t1 = ((l5)==((T2)(':')));
						if (t1) {
							l4 = EIF_TRUE;
						} else {
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						}
					}
					t1 = (T6f1(&l1, l2));
					if (!(t1)) {
						t1 = (l3);
					}
					if (!(t1)) {
						t1 = (l4);
					}
				}
				if (l4) {
					t1 = ((T1)((l1)<(l2)));
				} else {
					t1 = EIF_FALSE;
				}
				if (t1) {
					t4 = ((T6)((l1)+((T6)(GE_int32(1)))));
					l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, t4):T194f10(a1, t4)));
					R = (T53f19(C, l5));
				}
			}
		}
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.absolute_pathname */
T0* T54f4(T0* C, T0* a1)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	t1 = (T54f9(C, a1));
	if (t1) {
		R = a1;
	} else {
		t2 = (T54f10(C));
		R = (T54f11(C, t2, a1));
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.pathname */
T0* T54f11(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T6 l1 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T2 t4;
	t1 = (T54f13(C));
	R = (T76f7(GE_void(t1), a1));
	t2 = (((((T0*)(GE_void(a2)))->id==17)?((T17*)(a2))->a2:((T194*)(a2))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
		t3 = (T6f1(&l1, (T6)(GE_int32(0))));
		if (t3) {
			t4 = (((((T0*)(GE_void(R)))->id==17)?T17f9(R, l1):T194f10(R, l1)));
			t3 = ((t4)!=((T2)('/')));
		}
		if (t3) {
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('/'));
			} else {
				T194f56(R, (T2)('/'));
			}
		}
		t1 = (T54f13(C));
		R = (T76f5(GE_void(t1), R, a2));
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.is_absolute_pathname */
T1 T54f9(T0* C, T0* a1)
{
	T1 R = 0;
	T6 t1;
	T1 t2;
	T2 t3;
	t1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t2 = (T6f1(&t1, (T6)(GE_int32(0))));
	if (t2) {
		t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T194f10(a1, (T6)(GE_int32(1)))));
		R = ((t3)==((T2)('/')));
	} else {
		R = EIF_FALSE;
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.pathname_from_file_system */
T0* T53f3(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	t1 = (T53f6(C));
	t2 = (T82f1(GE_void(t1), C, a2));
	if (t2) {
		R = a1;
	} else {
		t1 = (T54f5(GE_void(a2), a1));
		R = (T53f7(C, t1));
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.pathname_to_string */
T0* T53f7(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T17c33((T6)(GE_int32(50)));
	l2 = (((T84*)(GE_void(a1)))->a1);
	l3 = (((T84*)(GE_void(a1)))->a2);
	t1 = ((l3)!=(EIF_VOID));
	if (t1) {
		t2 = (T53f12(C));
		R = (T76f5(GE_void(t2), R, l3));
		if (((T0*)(GE_void(R)))->id==17) {
			T17f34(R, (T2)('\\'));
		} else {
			T194f56(R, (T2)('\\'));
		}
	} else {
		l4 = (((T84*)(GE_void(a1)))->a3);
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('\\'));
			} else {
				T194f56(R, (T2)('\\'));
			}
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('\\'));
			} else {
				T194f56(R, (T2)('\\'));
			}
			t2 = (T53f12(C));
			R = (T76f5(GE_void(t2), R, l4));
			if (((T0*)(GE_void(R)))->id==17) {
				T17f34(R, (T2)('\\'));
			} else {
				T194f56(R, (T2)('\\'));
			}
			l5 = (((T84*)(GE_void(a1)))->a4);
			t1 = ((l5)!=(EIF_VOID));
			if (t1) {
				t2 = (T53f12(C));
				R = (T76f5(GE_void(t2), R, l5));
				t1 = (T6f1(&l2, (T6)(GE_int32(0))));
				if (t1) {
					if (((T0*)(GE_void(R)))->id==17) {
						T17f34(R, (T2)('\\'));
					} else {
						T194f56(R, (T2)('\\'));
					}
				}
			}
		} else {
			t1 = (((T84*)(GE_void(a1)))->a5);
			t1 = ((T1)(!(t1)));
			if (t1) {
				t2 = (T53f12(C));
				t3 = (T53f16(C));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
	}
	l1 = (T6)(GE_int32(1));
	t1 = (T6f5(&l1, l2));
	while (!(t1)) {
		t1 = (T84f11(GE_void(a1), l1));
		if (t1) {
			t2 = (T53f12(C));
			R = (T76f5(GE_void(t2), R, ge211ov3833));
		} else {
			t1 = (T84f7(GE_void(a1), l1));
			if (t1) {
				t2 = (T53f12(C));
				R = (T76f5(GE_void(t2), R, ge211ov3834));
			} else {
				t2 = (T53f12(C));
				t3 = (T84f8(GE_void(a1), l1));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
		if (((T0*)(GE_void(R)))->id==17) {
			T17f34(R, (T2)('\\'));
		} else {
			T194f56(R, (T2)('\\'));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f5(&l1, l2));
	}
	t1 = ((l1)==(l2));
	if (t1) {
		t1 = (T84f11(GE_void(a1), l1));
		if (t1) {
			t2 = (T53f12(C));
			R = (T76f5(GE_void(t2), R, ge211ov3833));
		} else {
			t1 = (T84f7(GE_void(a1), l1));
			if (t1) {
				t2 = (T53f12(C));
				R = (T76f5(GE_void(t2), R, ge211ov3834));
			} else {
				t2 = (T53f12(C));
				t3 = (T84f8(GE_void(a1), l1));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
	}
	return R;
}

/* KL_PATHNAME.item */
T0* T84f8(T0* C, T6 a1)
{
	T0* R = 0;
	R = (T33f4(GE_void(((T84*)(C))->a6), a1));
	return R;
}

/* KL_PATHNAME.is_parent */
T1 T84f7(T0* C, T6 a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T84f8(C, a1));
	R = ((t1)==(ge200ov4092));
	return R;
}

/* KL_PATHNAME.is_current */
T1 T84f11(T0* C, T6 a1)
{
	T1 R = 0;
	T0* t1;
	t1 = (T84f8(C, a1));
	R = ((t1)==(ge200ov4091));
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.root_directory */
unsigned char ge211os3835 = '\0';
T0* ge211ov3835;
T0* T53f16(T0* C)
{
	T0* R = 0;
	if (ge211os3835) {
		return ge211ov3835;
	} else {
		ge211os3835 = '\1';
	}
	R = GE_ms("\\", 1);
	ge211ov3835 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.string_to_pathname */
T0* T54f5(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 l4 = 0;
	T0* l5 = 0;
	T1 t1;
	T2 t2;
	T0* t3;
	R = T84c13();
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T194f10(a1, (T6)(GE_int32(1)))));
		t1 = ((t2)!=((T2)('/')));
		if (t1) {
			T84f14(GE_void(R), EIF_TRUE);
		}
	} else {
		T84f14(GE_void(R), EIF_TRUE);
	}
	l1 = (T6)(GE_int32(1));
	t1 = (T6f1(&l1, l2));
	while (!(t1)) {
		t1 = (T6f1(&l1, l2));
		if (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t1 = ((t2)!=((T2)('/')));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t1 = ((t2)!=((T2)('/')));
			}
		}
		t1 = (T6f9(&l1, l2));
		if (t1) {
			l3 = l1;
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t1 = ((t2)==((T2)('/')));
			}
			while (!(t1)) {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
					t1 = ((t2)==((T2)('/')));
				}
			}
			l4 = ((T6)((l1)-((T6)(GE_int32(1)))));
			l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, l3, l4):T194f11(a1, l3, l4)));
			t3 = (T54f13(C));
			t1 = (T76f1(GE_void(t3), l5, ge209ov3833));
			if (t1) {
				T84f15(GE_void(R));
			} else {
				t3 = (T54f13(C));
				t1 = (T76f1(GE_void(t3), l5, ge209ov3834));
				if (t1) {
					T84f16(GE_void(R));
				} else {
					T84f17(GE_void(R), l5);
				}
			}
		}
		t1 = (T6f1(&l1, l2));
	}
	return R;
}

/* KL_PATHNAME.append_name */
void T84f17(T0* C, T0* a1)
{
	((T84*)(C))->a1 = ((T6)((((T84*)(C))->a1)+((T6)(GE_int32(1)))));
	T33f14(GE_void(((T84*)(C))->a6), a1, ((T84*)(C))->a1);
}

/* KL_PATHNAME.append_parent */
void T84f16(T0* C)
{
	T84f17(C, ge200ov4092);
}

/* KL_PATHNAME.append_current */
void T84f15(T0* C)
{
	T84f17(C, ge200ov4091);
}

/* KL_PATHNAME.set_relative */
void T84f14(T0* C, T1 a1)
{
	((T84*)(C))->a5 = a1;
}

/* KL_PATHNAME.make */
T0* T84c13(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T84));
	*(T84*)C = GE_default84;
	((T84*)(C))->a6 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(10)));
	return C;
}

/* KL_WINDOWS_FILE_SYSTEM.any_ */
T0* T53f6(T0* C)
{
	T0* R = 0;
	if (ge166os1789) {
		return ge166ov1789;
	} else {
		ge166os1789 = '\1';
	}
	R = T82c3();
	ge166ov1789 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.pathname_from_file_system */
T0* T54f3(T0* C, T0* a1, T0* a2)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	t1 = (T54f7(C));
	t2 = (T82f1(GE_void(t1), C, a2));
	if (t2) {
		R = a1;
	} else {
		t1 = (T54f5(GE_void(a2), a1));
		R = (T54f8(C, t1));
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.pathname_to_string */
T0* T54f8(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T17c33((T6)(GE_int32(50)));
	t1 = (((T84*)(GE_void(a1)))->a5);
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = (T54f13(C));
		t3 = (T54f17(C));
		R = (T76f5(GE_void(t2), R, t3));
	}
	l2 = (((T84*)(GE_void(a1)))->a1);
	l1 = (T6)(GE_int32(1));
	t1 = (T6f5(&l1, l2));
	while (!(t1)) {
		t1 = (T84f11(GE_void(a1), l1));
		if (t1) {
			t2 = (T54f13(C));
			R = (T76f5(GE_void(t2), R, ge209ov3833));
		} else {
			t1 = (T84f7(GE_void(a1), l1));
			if (t1) {
				t2 = (T54f13(C));
				R = (T76f5(GE_void(t2), R, ge209ov3834));
			} else {
				t2 = (T54f13(C));
				t3 = (T84f8(GE_void(a1), l1));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
		if (((T0*)(GE_void(R)))->id==17) {
			T17f34(R, (T2)('/'));
		} else {
			T194f56(R, (T2)('/'));
		}
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = (T6f5(&l1, l2));
	}
	t1 = ((l1)==(l2));
	if (t1) {
		t1 = (T84f11(GE_void(a1), l1));
		if (t1) {
			t2 = (T54f13(C));
			R = (T76f5(GE_void(t2), R, ge209ov3833));
		} else {
			t1 = (T84f7(GE_void(a1), l1));
			if (t1) {
				t2 = (T54f13(C));
				R = (T76f5(GE_void(t2), R, ge209ov3834));
			} else {
				t2 = (T54f13(C));
				t3 = (T84f8(GE_void(a1), l1));
				R = (T76f5(GE_void(t2), R, t3));
			}
		}
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.root_directory */
unsigned char ge209os3835 = '\0';
T0* ge209ov3835;
T0* T54f17(T0* C)
{
	T0* R = 0;
	if (ge209os3835) {
		return ge209ov3835;
	} else {
		ge209os3835 = '\1';
	}
	R = GE_ms("/", 1);
	ge209ov3835 = R;
	return R;
}

/* KL_UNIX_FILE_SYSTEM.any_ */
T0* T54f7(T0* C)
{
	T0* R = 0;
	if (ge166os1789) {
		return ge166ov1789;
	} else {
		ge166os1789 = '\1';
	}
	R = T82c3();
	ge166ov1789 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.unix_file_system */
T0* T23f4(T0* C)
{
	T0* R = 0;
	if (ge203os1591) {
		return ge203ov1591;
	} else {
		ge203os1591 = '\1';
	}
	R = T54c32();
	ge203ov1591 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.file_system */
T0* T23f3(T0* C)
{
	T0* R = 0;
	T0* t1;
	T1 t2;
	if (ge203os1588) {
		return ge203ov1588;
	} else {
		ge203os1588 = '\1';
	}
	t1 = (T23f7(C));
	t2 = (T51f1(GE_void(t1)));
	if (t2) {
		R = (T23f8(C));
	} else {
		t1 = (T23f7(C));
		t2 = (T51f2(GE_void(t1)));
		if (t2) {
			R = (T23f4(C));
		} else {
			R = (T23f4(C));
		}
	}
	ge203ov1588 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.windows_file_system */
T0* T23f8(T0* C)
{
	T0* R = 0;
	if (ge203os1589) {
		return ge203ov1589;
	} else {
		ge203os1589 = '\1';
	}
	R = T53c36();
	ge203ov1589 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.operating_system */
T0* T23f7(T0* C)
{
	T0* R = 0;
	if (ge224os1592) {
		return ge224ov1592;
	} else {
		ge224os1592 = '\1';
	}
	R = T51c7();
	ge224ov1592 = R;
	return R;
}

/* GEANT_PROJECT_LOADER.std */
T0* T23f5(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* KL_TEXT_INPUT_FILE.close */
void T55f58(T0* C)
{
	GE_rescue r;
	T1 l1 = 0;
	T1 t1;
	if (GE_setjmp(r.jb) != 0) {
		t1 = ((T1)(!(l1)));
		if (t1) {
			l1 = EIF_TRUE;
			goto GE_retry;
		}
		GE_raise(8);
	}
GE_retry:
	r.previous = GE_last_rescue;
	GE_last_rescue = &r;
	t1 = ((T1)(!(l1)));
	if (t1) {
		T55f63(C);
		((T55*)(C))->a4 = EIF_VOID;
	}
	GE_last_rescue = r.previous;
}

/* KL_TEXT_INPUT_FILE.old_close */
void T55f63(T0* C)
{
	T55f64(C, ((T55*)(C))->a6);
	((T55*)(C))->a2 = (T6)(GE_int32(0));
	((T55*)(C))->a7 = EIF_FALSE;
}

/* KL_TEXT_INPUT_FILE.file_close */
void T55f64(T0* C, T14 a1)
{
	file_close((FILE *)a1);
}

/* GEANT_PROJECT_PARSER.parse_file */
void T56f9(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	((T56*)(C))->a1 = EIF_VOID;
	T90f205(GE_void(((T56*)(C))->a5), a1);
	t1 = (T90f121(GE_void(((T56*)(C))->a5)));
	if (t1) {
		t2 = (((T91*)(GE_void(((T56*)(C))->a6)))->a3);
		t1 = (((T97*)(GE_void(t2)))->a1);
		t1 = ((T1)(!(t1)));
		if (t1) {
			l1 = (T91f8(GE_void(((T56*)(C))->a6)));
			l2 = (((T95*)(GE_void(l1)))->a1);
			((T56*)(C))->a1 = T30c20(l2, ((T56*)(C))->a2, ((T56*)(C))->a3, ((T56*)(C))->a4);
		} else {
			t2 = (T56f7(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T91f5(GE_void(((T56*)(C))->a6)));
			T47f10(GE_void(t2), t3);
			t2 = (T56f7(C));
			t2 = (T46f1(GE_void(t2)));
			T47f21(GE_void(t2));
		}
	} else {
		t2 = (T56f7(C));
		t2 = (T46f1(GE_void(t2)));
		t3 = (T90f89(GE_void(((T56*)(C))->a5)));
		T47f10(GE_void(t2), t3);
		t2 = (T56f7(C));
		t2 = (T46f1(GE_void(t2)));
		T47f21(GE_void(t2));
	}
}

/* XM_EIFFEL_PARSER.last_error_extended_description */
T0* T90f89(T0* C)
{
	T0* R = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T90f128(C));
	t1 = (((T128*)(GE_void(t1)))->a1);
	R = (T90f170(C, t1));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f34(R, (T2)(':'));
	} else {
		T194f56(R, (T2)(':'));
	}
	t1 = (T90f128(C));
	t2 = (((T128*)(GE_void(t1)))->a2);
	t1 = (T6f12(&t2));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, t1);
	} else {
		T194f55(R, t1);
	}
	if (((T0*)(GE_void(R)))->id==17) {
		T17f34(R, (T2)(':'));
	} else {
		T194f56(R, (T2)(':'));
	}
	t1 = (T90f128(C));
	t2 = (((T128*)(GE_void(t1)))->a3);
	t1 = (T6f12(&t2));
	if (((T0*)(GE_void(R)))->id==17) {
		T17f39(R, t1);
	} else {
		T194f55(R, t1);
	}
	if (((T0*)(GE_void(R)))->id==17) {
		T17f34(R, (T2)(':'));
	} else {
		T194f56(R, (T2)(':'));
	}
	t1 = (T90f177(C));
	t3 = ((t1)!=(EIF_VOID));
	if (t3) {
		t1 = (T90f85(C));
		t4 = (T90f177(C));
		R = (T76f5(GE_void(t1), R, t4));
	}
	return R;
}

/* XM_EIFFEL_PARSER.string_ */
T0* T90f85(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* XM_EIFFEL_PARSER.last_error_description */
T0* T90f177(T0* C)
{
	T0* R = 0;
	R = ((T90*)(C))->a1;
	return R;
}

/* XM_EIFFEL_PARSER.safe_error_component */
T0* T90f170(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T1 t1;
	T6 t2;
	T2 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		R = ge1389ov5111;
	} else {
		R = T17c44();
		l1 = (T6)(GE_int32(1));
		t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = (T6f1(&l1, t2));
		if (!(t1)) {
			t1 = (T6f1(&l1, (T6)(GE_int32(100))));
		}
		while (!(t1)) {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t1 = (T90f109(C, t3));
			if (t1) {
				t3 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				T17f34(GE_void(R), t3);
			} else {
				T17f34(GE_void(R), (T2)('?'));
			}
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
			t1 = (T6f1(&l1, t2));
			if (!(t1)) {
				t1 = (T6f1(&l1, (T6)(GE_int32(100))));
			}
		}
		t1 = (T6f1(&l1, (T6)(GE_int32(100))));
		if (t1) {
			T17f39(GE_void(R), ge1389ov5110);
			t2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
			l1 = ((T6)((t2)+((T6)(GE_int32(1)))));
		}
	}
	return R;
}

/* XM_EIFFEL_PARSER.is_safe_error_character */
T1 T90f109(T0* C, T2 a1)
{
	T1 R = 0;
	T1 t1;
	T1 t2;
	t1 = (T2f4(&a1, (T2)('/')));
	if (t1) {
		t1 = (T2f5(&a1, (T2)('9')));
	}
	if (!(t1)) {
		t2 = (T2f4(&a1, (T2)('@')));
		if (t2) {
			t1 = (T2f5(&a1, (T2)('Z')));
		} else {
			t1 = EIF_FALSE;
		}
	}
	if (!(t1)) {
		t1 = (T2f4(&a1, (T2)('a')));
		if (t1) {
			R = (T2f5(&a1, (T2)('z')));
		} else {
			R = EIF_FALSE;
		}
	} else {
		R = EIF_TRUE;
	}
	return R;
}

/* CHARACTER_8.infix ">=" */
T1 T2f4(T2* C, T2 a1)
{
	T1 R = 0;
	T1 t1;
	t1 = (T2f5(C, a1));
	R = ((T1)(!(t1)));
	return R;
}

/* STRING_8.make_empty */
T0* T17c44(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T17));
	*(T17*)C = GE_default17;
	T17f33(C, (T6)(GE_int32(0)));
	return C;
}

/* XM_EIFFEL_PARSER.position */
T0* T90f128(T0* C)
{
	T0* R = 0;
	T1 t1;
	T0* t2;
	t1 = (T90f121(C));
	if (t1) {
		R = (T127x6646(GE_void(((T90*)(C))->a2)));
	} else {
		t2 = (T90f91(C));
		R = (T130f6(GE_void(t2)));
	}
	return R;
}

/* DS_BILINKED_LIST [XM_POSITION].first */
T0* T130f6(T0* C)
{
	T0* R = 0;
	R = (((T210*)(GE_void(((T130*)(C))->a1)))->a1);
	return R;
}

/* XM_EIFFEL_PARSER.positions */
T0* T90f91(T0* C)
{
	T0* R = 0;
	T1 t1;
	t1 = ((((T90*)(C))->a3)==(EIF_VOID));
	if (t1) {
		R = (T90f125(C));
	} else {
		R = ((T90*)(C))->a3;
	}
	return R;
}

/* XM_EIFFEL_PARSER.new_positions */
T0* T90f125(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* t1;
	T1 t2;
	l1 = T131c5();
	T131f6(GE_void(l1), ((T90*)(C))->a4);
	R = T130c8();
	t1 = (T127x6646(GE_void(((T90*)(C))->a2)));
	T130f9(GE_void(R), t1);
	t2 = (T131f3(GE_void(l1)));
	while (!(t2)) {
		t1 = (T131f4(GE_void(l1)));
		t1 = (T127x6646(GE_void(t1)));
		T130f9(GE_void(R), t1);
		T131f7(GE_void(l1));
		t2 = (T131f3(GE_void(l1)));
	}
	return R;
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].remove */
void T131f7(T0* C)
{
	((T131*)(C))->a2 = (((T212*)(GE_void(((T131*)(C))->a2)))->a2);
	((T131*)(C))->a1 = ((T6)((((T131*)(C))->a1)-((T6)(GE_int32(1)))));
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].item */
T0* T131f4(T0* C)
{
	T0* R = 0;
	R = (((T212*)(GE_void(((T131*)(C))->a2)))->a1);
	return R;
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].is_empty */
T1 T131f3(T0* C)
{
	T1 R = 0;
	R = ((((T131*)(C))->a1)==((T6)(GE_int32(0))));
	return R;
}

/* DS_BILINKED_LIST [XM_POSITION].force_last */
void T130f9(T0* C, T0* a1)
{
	T0* l1 = 0;
	T1 t1;
	t1 = (T130f5(C));
	if (t1) {
		((T130*)(C))->a1 = T210c4(a1);
		((T130*)(C))->a3 = ((T130*)(C))->a1;
		((T130*)(C))->a4 = (T6)(GE_int32(1));
	} else {
		l1 = ((T130*)(C))->a3;
		((T130*)(C))->a3 = T210c4(a1);
		T210f5(GE_void(l1), ((T130*)(C))->a3);
		((T130*)(C))->a4 = ((T6)((((T130*)(C))->a4)+((T6)(GE_int32(1)))));
	}
}

/* DS_BILINKABLE [XM_POSITION].put_right */
void T210f5(T0* C, T0* a1)
{
	((T210*)(C))->a2 = a1;
	T210f6(GE_void(a1), C);
}

/* DS_BILINKABLE [XM_POSITION].attach_left */
void T210f6(T0* C, T0* a1)
{
	((T210*)(C))->a3 = a1;
}

/* DS_BILINKABLE [XM_POSITION].make */
T0* T210c4(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T210));
	*(T210*)C = GE_default210;
	((T210*)(C))->a1 = a1;
	return C;
}

/* DS_BILINKED_LIST [XM_POSITION].is_empty */
T1 T130f5(T0* C)
{
	T1 R = 0;
	R = ((((T130*)(C))->a4)==((T6)(GE_int32(0))));
	return R;
}

/* DS_BILINKED_LIST [XM_POSITION].make */
T0* T130c8(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T130));
	*(T130*)C = GE_default130;
	((T130*)(C))->a2 = (T130f7(C));
	return C;
}

/* DS_BILINKED_LIST [XM_POSITION].new_cursor */
T0* T130f7(T0* C)
{
	T0* R = 0;
	R = T211c3(C);
	return R;
}

/* DS_BILINKED_LIST_CURSOR [XM_POSITION].make */
T0* T211c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T211));
	*(T211*)C = GE_default211;
	((T211*)(C))->a1 = a1;
	((T211*)(C))->a2 = EIF_TRUE;
	return C;
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].copy */
void T131f6(T0* C, T0* a1)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)!=(C));
	if (t1) {
		*(T131*)(C) = *(T131*)(a1);
		t1 = (T131f3(GE_void(a1)));
		t1 = ((T1)(!(t1)));
		if (t1) {
			l3 = (((T131*)(GE_void(a1)))->a2);
			t2 = (((T212*)(GE_void(l3)))->a1);
			((T131*)(C))->a2 = T212c3(t2);
			l1 = ((T131*)(C))->a2;
			l3 = (((T212*)(GE_void(l3)))->a2);
			t1 = ((l3)==(EIF_VOID));
			while (!(t1)) {
				t2 = (((T212*)(GE_void(l3)))->a1);
				l2 = T212c3(t2);
				T212f4(GE_void(l1), l2);
				l1 = l2;
				l3 = (((T212*)(GE_void(l3)))->a2);
				t1 = ((l3)==(EIF_VOID));
			}
		}
	}
}

/* DS_LINKABLE [XM_EIFFEL_SCANNER].put_right */
void T212f4(T0* C, T0* a1)
{
	((T212*)(C))->a2 = a1;
}

/* DS_LINKABLE [XM_EIFFEL_SCANNER].make */
T0* T212c3(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T212));
	*(T212*)C = GE_default212;
	((T212*)(C))->a1 = a1;
	return C;
}

/* DS_LINKED_STACK [XM_EIFFEL_SCANNER].make */
T0* T131c5(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T131));
	*(T131*)C = GE_default131;
	return C;
}

/* KL_STDERR_FILE.flush */
void T47f21(T0* C)
{
	T47f22(C);
}

/* KL_STDERR_FILE.old_flush */
void T47f22(T0* C)
{
	T47f23(C, ((T47*)(C))->a1);
}

/* KL_STDERR_FILE.file_flush */
void T47f23(T0* C, T14 a1)
{
	file_flush((FILE *)a1);
}

/* XM_TREE_CALLBACKS_PIPE.last_error */
T0* T91f5(T0* C)
{
	T0* R = 0;
	R = (((T97*)(GE_void(((T91*)(C))->a3)))->a2);
	return R;
}

/* GEANT_PROJECT_PARSER.std */
T0* T56f7(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* GEANT_PROJECT_ELEMENT.make */
T0* T30c20(T0* a1, T0* a2, T0* a3, T0* a4)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T0* t3;
	T6 t4;
	T0* t5;
	T0* t6;
	C = (T0*)GE_alloc(sizeof(T30));
	*(T30*)C = GE_default30;
	T30f21(C, a1);
	l8 = T22c23(a2, a3, GE_ms("trace_project", 13));
	t1 = GE_ma33((T6)2,
GE_ms("Loading Project\'s configuration from ", 37),
a4);
	T22f24(GE_void(l8), t1);
	t1 = (T30f5(C));
	t2 = (T30f3(C, t1));
	t2 = ((T1)(!(t2)));
	if (t2) {
		t1 = GE_ma33((T6)5,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  Project in file \'", 19),
a4,
GE_ms("\' does not have a name.\n", 24),
GE_ms("  Please specify a name for this project.", 41));
		T30f22(C, (T6)(GE_int32(1)), t1);
	}
	t1 = (T30f5(C));
	t1 = (T30f4(C, t1));
	((T30*)(C))->a1 = T22c23(a2, a3, t1);
	t1 = (T30f6(C));
	t2 = (T96f15(GE_void(((T30*)(C))->a2), t1));
	if (t2) {
		t1 = (T30f6(C));
		t1 = (T96f16(GE_void(((T30*)(C))->a2), t1));
		t1 = (T96f26(GE_void(t1)));
		T22f29(GE_void(((T30*)(C))->a1), t1);
	}
	t1 = (T30f7(C));
	t3 = (T30f8(C));
	l7 = (((((T0*)(GE_void(t1)))->id==54)?T54f3(t1, a4, t3):T53f3(t1, a4, t3)));
	t1 = (T30f7(C));
	t3 = (T30f7(C));
	t3 = (((((T0*)(GE_void(t3)))->id==54)?T54f4(t3, l7):T53f4(t3, l7)));
	l6 = (((((T0*)(GE_void(t1)))->id==54)?T54f20(t1, t3):T53f23(t1, t3)));
	t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
	t1 = (((((T0*)(GE_void(t1)))->id==17)?T17f8(t1, GE_ms(".absdir", 7)):T194f7(t1, GE_ms(".absdir", 7))));
	T25f58(GE_void(a2), t1, l6);
	t1 = (T30f7(C));
	l6 = (((((T0*)(GE_void(t1)))->id==54)?T54f20(t1, l7):T53f23(t1, l7)));
	t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
	t1 = (((((T0*)(GE_void(t1)))->id==17)?T17f8(t1, GE_ms(".dir", 4)):T194f7(t1, GE_ms(".dir", 4))));
	T25f58(GE_void(a2), t1, l6);
	t1 = (T30f7(C));
	l6 = (((((T0*)(GE_void(t1)))->id==54)?T54f21(t1, l7):T53f24(t1, l7)));
	t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
	t1 = (((((T0*)(GE_void(t1)))->id==17)?T17f8(t1, GE_ms(".filename", 9)):T194f7(t1, GE_ms(".filename", 9))));
	T25f58(GE_void(a2), t1, l6);
	t1 = (T30f9(C));
	t2 = (T30f3(C, t1));
	if (t2) {
		t1 = (T30f9(C));
		t1 = (T30f4(C, t1));
		T22f30(GE_void(((T30*)(C))->a1), t1);
	}
	t1 = (T30f10(C));
	l1 = (T30f11(C, t1));
	t4 = (((T115*)(GE_void(l1)))->a1);
	l3 = T31c43(t4);
	l5 = T59c3();
	T31f44(GE_void(l3), l5);
	t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
	t4 = (((T115*)(GE_void(l1)))->a1);
	t3 = (T6f12(&t4));
	t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': loading ", 11),
t3,
GE_ms(" immediate targets.", 19));
	T22f31(GE_void(((T30*)(C))->a1), t1);
	l2 = (T115f5(GE_void(l1)));
	T116f8(GE_void(l2));
	t2 = (((T116*)(GE_void(l2)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l2)));
		l4 = T26c80(((T30*)(C))->a1, t1);
		t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
		t3 = (((T26*)(GE_void(l4)))->a1);
		t1 = GE_ma33((T6)5,
GE_ms("Project \'", 9),
t1,
GE_ms("\': loading target `", 19),
t3,
GE_ms("\'", 1));
		T22f31(GE_void(((T30*)(C))->a1), t1);
		t1 = (((T26*)(GE_void(l4)))->a1);
		t2 = (T31f24(GE_void(l3), t1));
		if (t2) {
			t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
			t3 = (((T26*)(GE_void(l4)))->a1);
			t5 = (((T26*)(GE_void(l4)))->a1);
			t6 = (((T26*)(GE_void(l4)))->a1);
			t6 = (T31f28(GE_void(l3), t6));
			t6 = (((T26*)(GE_void(t6)))->a4);
			t6 = (((T22*)(GE_void(t6)))->a2);
			t1 = GE_ma33((T6)11,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  project \'", 11),
t1,
GE_ms("\' contains a target named `", 27),
t3,
GE_ms("\' which conflicts with target `", 31),
t5,
GE_ms("\' from project \'", 16),
t6,
GE_ms("\'.\n", 3),
GE_ms("  Either use a different name, use the rename clause, or redefine this target.", 78));
			T30f22(C, (T6)(GE_int32(1)), t1);
		}
		t1 = (((T26*)(GE_void(l4)))->a1);
		T31f45(GE_void(l3), l4, t1);
		T116f9(GE_void(l2));
		t2 = (((T116*)(GE_void(l2)))->a1);
	}
	T22f32(GE_void(((T30*)(C))->a1), l3);
	T30f23(C);
	return C;
}

/* GEANT_PROJECT_ELEMENT.load_parent_projects */
void T30f23(T0* C)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T1 t2;
	t1 = (T30f14(C));
	t2 = (T30f3(C, t1));
	if (t2) {
		t2 = (T30f15(C));
	}
	if (t2) {
		t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("\nLOAD ERROR in project \'", 24),
t1,
GE_ms("\':\n", 3),
GE_ms("  Remove obsolete attribute \'inherit\' and use subelement \'inherit\' instead.", 75));
		T30f22(C, (T6)(GE_int32(1)), t1);
	}
	t1 = (T30f14(C));
	t2 = (T30f3(C, t1));
	if (t2) {
		t1 = (((T22*)(GE_void(((T30*)(C))->a1)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("Project \'", 9),
t1,
GE_ms("\': WARNING: Obsolete inheritance format using attribute \'inherit\' found.\n", 73),
GE_ms("Use new inheritance format with subelement instead.", 51));
		T22f24(GE_void(((T30*)(C))->a1), t1);
		T22f33(GE_void(((T30*)(C))->a1), EIF_TRUE);
		l1 = T117c9(((T30*)(C))->a1, ((T30*)(C))->a2);
		t1 = (((T117*)(GE_void(l1)))->a1);
		T22f34(GE_void(((T30*)(C))->a1), t1);
	}
	t2 = (T30f15(C));
	if (t2) {
		t1 = (T30f16(C));
		l2 = (T96f16(GE_void(((T30*)(C))->a2), t1));
		l1 = T117c10(((T30*)(C))->a1, l2);
		t1 = (((T117*)(GE_void(l1)))->a1);
		T22f34(GE_void(((T30*)(C))->a1), t1);
	}
}

/* GEANT_INHERIT_ELEMENT.make */
T0* T117c10(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T0* t3;
	C = (T0*)GE_alloc(sizeof(T117));
	*(T117*)C = GE_default117;
	T117f11(C, a1, a2);
	((T117*)(C))->a1 = T118c6(((T117*)(C))->a2);
	t1 = (T117f7(C));
	l1 = (T117f4(C, t1));
	l2 = (T115f5(GE_void(l1)));
	T116f8(GE_void(l2));
	t2 = (((T116*)(GE_void(l2)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l2)));
		l3 = T200c18(((T117*)(C))->a2, t1);
		t1 = (((T200*)(GE_void(l3)))->a1);
		t2 = (T182f9(GE_void(t1)));
		if (t2) {
			t1 = (((T118*)(GE_void(((T117*)(C))->a1)))->a1);
			t3 = (((T200*)(GE_void(l3)))->a1);
			T184f17(GE_void(t1), t3);
		} else {
			t1 = GE_ma33((T6)1,
GE_ms("ERROR in \'parent\' clause", 24));
			T117f12(C, (T6)(GE_int32(1)), t1);
		}
		T116f9(GE_void(l2));
		t2 = (((T116*)(GE_void(l2)))->a1);
	}
	return C;
}

/* GEANT_INHERIT_ELEMENT.exit_application */
void T117f12(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(a2))->a2);
		l2 = (((T33*)(a2))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T117f5(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(a2, l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T117f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T117f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T117f5(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T117f6(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_INHERIT_ELEMENT.exceptions */
T0* T117f6(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_INHERIT_ELEMENT.std */
T0* T117f5(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].force_last */
void T184f17(T0* C, T0* a1)
{
	T1 t1;
	T6 t2;
	t1 = (T184f6(C, (T6)(GE_int32(1))));
	t1 = ((T1)(!(t1)));
	if (t1) {
		t2 = ((T6)((((T184*)(C))->a5)+((T6)(GE_int32(1)))));
		t2 = (T184f8(C, t2));
		T184f18(C, t2);
	}
	((T184*)(C))->a5 = ((T6)((((T184*)(C))->a5)+((T6)(GE_int32(1)))));
	((T250*)(GE_void(((T184*)(C))->a2)))->z2[((T184*)(C))->a5] = (a1);
}

/* DS_ARRAYED_LIST [GEANT_PARENT].resize */
void T184f18(T0* C, T6 a1)
{
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T184*)(C))->a2 = (T249f2(GE_void(((T184*)(C))->a1), ((T184*)(C))->a2, t1));
	((T184*)(C))->a3 = a1;
}

/* KL_SPECIAL_ROUTINES [GEANT_PARENT].resize */
T0* T249f2(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T250*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T250f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_PARENT].resized_area */
T0* T250f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T250c4(a1);
	t1 = (((T250*)(C))->z1);
	T250f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_PARENT].copy_data */
void T250f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T250f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T250*)(a1))->z2[l1]);
			((T250*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_PARENT].move_data */
void T250f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T250f8(C, a1, a2, a3);
			} else {
				T250f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T250f8(C, a1, a2, a3);
			} else {
				T250f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_PARENT].overlapping_move */
void T250f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T250*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T250*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T250*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T250*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_PARENT].non_overlapping_move */
void T250f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T250*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T250*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_PARENT].make */
T0* T250c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T250)+a1*sizeof(T0*));
	*(T250*)C = GE_default250;
	((T250*)(C))->z1 = a1;
	return C;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].new_capacity */
T6 T184f8(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].extendible */
T1 T184f6(T0* C, T6 a1)
{
	T1 R = 0;
	T6 t1;
	t1 = ((T6)((((T184*)(C))->a5)+(a1)));
	R = (T6f5(&(((T184*)(C))->a3), t1));
	return R;
}

/* GEANT_PARENT.is_executable */
T1 T182f9(T0* C)
{
	T1 R = 0;
	R = ((((T182*)(C))->a2)!=(EIF_VOID));
	return R;
}

/* GEANT_PARENT_ELEMENT.make */
T0* T200c18(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* l8 = 0;
	T0* l9 = 0;
	T0* l10 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T200));
	*(T200*)C = GE_default200;
	T200f19(C, a1, a2);
	((T200*)(C))->a1 = T182c12(a1);
	t1 = (T200f5(C));
	t2 = (T200f6(C, t1));
	if (t2) {
		t1 = (T200f5(C));
		l7 = (T200f13(C, t1));
		t3 = (((((T0*)(GE_void(l7)))->id==17)?((T17*)(l7))->a2:((T194*)(l7))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			l9 = T23c9(l7);
			t1 = (((T22*)(GE_void(a1)))->a7);
			t4 = (((T22*)(GE_void(a1)))->a9);
			T23f10(GE_void(l9), t1, t4);
			t1 = (((T23*)(GE_void(l9)))->a1);
			l10 = (((T30*)(GE_void(t1)))->a1);
			T182f13(GE_void(((T200*)(C))->a1), l10);
			T22f25(GE_void(l10));
		}
	}
	t1 = (T200f7(C));
	l2 = (T200f8(C, t1));
	l3 = (T115f5(GE_void(l2)));
	T116f8(GE_void(l3));
	t2 = (((T116*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l3)));
		l4 = T256c10(((T200*)(C))->a2, t1);
		t1 = (((T256*)(GE_void(l4)))->a1);
		l1 = (((T259*)(GE_void(t1)))->a1);
		t1 = (((T182*)(GE_void(((T200*)(C))->a1)))->a1);
		t2 = (T260f29(GE_void(t1), l1));
		if (t2) {
			l8 = T33c11((T6)(GE_int32(1)), (T6)(GE_int32(9)));
			T33f12(GE_void(l8), GE_ms("\nLOAD ERROR:\n", 13), (T6)(GE_int32(1)));
			T33f12(GE_void(l8), GE_ms("  Project \'", 11), (T6)(GE_int32(2)));
			t1 = (((T22*)(GE_void(((T200*)(C))->a2)))->a2);
			T33f12(GE_void(l8), t1, (T6)(GE_int32(3)));
			T33f12(GE_void(l8), GE_ms("\': VHRC-2: old_name `", 21), (T6)(GE_int32(4)));
			T33f12(GE_void(l8), l1, (T6)(GE_int32(5)));
			T33f12(GE_void(l8), GE_ms("\' appears more than once as the first element", 45), (T6)(GE_int32(6)));
			T33f12(GE_void(l8), GE_ms(" of a Rename_pair in the same Rename subclause of parent \'", 58), (T6)(GE_int32(7)));
			t1 = (((T182*)(GE_void(((T200*)(C))->a1)))->a2);
			t1 = (((T22*)(GE_void(t1)))->a2);
			T33f12(GE_void(l8), t1, (T6)(GE_int32(8)));
			T33f12(GE_void(l8), GE_ms("\'", 1), (T6)(GE_int32(9)));
			T200f20(C, (T6)(GE_int32(1)), l8);
		}
		t1 = (((T182*)(GE_void(((T200*)(C))->a1)))->a1);
		t4 = (((T256*)(GE_void(l4)))->a1);
		T260f39(GE_void(t1), t4, l1);
		T116f9(GE_void(l3));
		t2 = (((T116*)(GE_void(l3)))->a1);
	}
	t1 = (T200f9(C));
	l2 = (T200f8(C, t1));
	l3 = (T115f5(GE_void(l2)));
	T116f8(GE_void(l3));
	t2 = (((T116*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l3)));
		l5 = T257c9(((T200*)(C))->a2, t1);
		t1 = (((T257*)(GE_void(l5)))->a1);
		l1 = (((T261*)(GE_void(t1)))->a1);
		t1 = (((T182*)(GE_void(((T200*)(C))->a1)))->a3);
		t4 = (((T257*)(GE_void(l5)))->a1);
		T262f38(GE_void(t1), t4, l1);
		T116f9(GE_void(l3));
		t2 = (((T116*)(GE_void(l3)))->a1);
	}
	t1 = (T200f10(C));
	l2 = (T200f8(C, t1));
	l3 = (T115f5(GE_void(l2)));
	T116f8(GE_void(l3));
	t2 = (((T116*)(GE_void(l3)))->a1);
	while (!(t2)) {
		t1 = (T116f6(GE_void(l3)));
		l6 = T258c9(((T200*)(C))->a2, t1);
		t1 = (((T258*)(GE_void(l6)))->a1);
		l1 = (((T263*)(GE_void(t1)))->a1);
		t1 = (((T182*)(GE_void(((T200*)(C))->a1)))->a4);
		t4 = (((T258*)(GE_void(l6)))->a1);
		T264f38(GE_void(t1), t4, l1);
		T116f9(GE_void(l3));
		t2 = (((T116*)(GE_void(l3)))->a1);
	}
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].force_last */
void T264f38(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T264f41(C);
	T264f42(C, a2);
	t1 = ((((T264*)(C))->a2)!=((T6)(GE_int32(0))));
	if (t1) {
		T264f43(C, a1, ((T264*)(C))->a2);
	} else {
		l1 = ((T6)((((T264*)(C))->a3)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T264*)(C))->a4));
		if (t1) {
			t2 = (T264f22(C, l1));
			T264f44(C, t2);
			l2 = (T264f23(C, a2));
		} else {
			l2 = ((T264*)(C))->a5;
		}
		t2 = (T264f21(C, l2));
		T264f45(C, t2, l1);
		T264f46(C, l1, l2);
		T264f43(C, a1, l1);
		T264f47(C, a2, l1);
		((T264*)(C))->a3 = l1;
		((T264*)(C))->a6 = ((T6)((((T264*)(C))->a6)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].key_storage_put */
void T264f47(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T264*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].slots_put */
void T264f46(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T264*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].clashes_put */
void T264f45(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T264*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].slots_item */
T6 T264f21(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T264*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].hash_position */
T6 T264f23(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T264*)(C))->a10)));
	} else {
		R = ((T264*)(C))->a10;
	}
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].resize */
void T264f44(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T264f41(C);
	l1 = (T264f29(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T264f49(C, t1);
	l2 = ((T264*)(C))->a10;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T264f46(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T264*)(C))->a10 = l1;
	l2 = ((T264*)(C))->a3;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T264f25(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T264f24(C, l2));
			l3 = (T264f23(C, t3));
			t1 = (T264f21(C, l3));
			T264f45(C, t1, l2);
			T264f46(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f50(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f51(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f52(C, t1);
	((T264*)(C))->a4 = a1;
	((T264*)(C))->a2 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].clashes_resize */
void T264f52(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T264f27(C));
	((T264*)(C))->a13 = (T65f1(GE_void(t1), ((T264*)(C))->a13, a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].special_integer_ */
T0* T264f27(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].key_storage_resize */
void T264f51(T0* C, T6 a1)
{
	((T264*)(C))->a15 = (T66f1(GE_void(((T264*)(C))->a19), ((T264*)(C))->a15, a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].item_storage_resize */
void T264f50(T0* C, T6 a1)
{
	((T264*)(C))->a12 = (T349f1(GE_void(((T264*)(C))->a18), ((T264*)(C))->a12, a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_SELECT].resize */
T0* T349f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T347*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T347f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_SELECT].resized_area */
T0* T347f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T347c4(a1);
	t1 = (((T347*)(C))->z1);
	T347f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_SELECT].copy_data */
void T347f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T347f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T347*)(a1))->z2[l1]);
			((T347*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_SELECT].move_data */
void T347f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T347f8(C, a1, a2, a3);
			} else {
				T347f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T347f8(C, a1, a2, a3);
			} else {
				T347f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_SELECT].overlapping_move */
void T347f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T347*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T347*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T347*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T347*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_SELECT].non_overlapping_move */
void T347f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T347*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T347*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_SELECT].make */
T0* T347c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T347)+a1*sizeof(T0*));
	*(T347*)C = GE_default347;
	((T347*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].key_storage_item */
T0* T264f24(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T264*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].slots_resize */
void T264f49(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T264f27(C));
	((T264*)(C))->a14 = (T65f1(GE_void(t1), ((T264*)(C))->a14, a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].new_modulus */
T6 T264f29(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].new_capacity */
T6 T264f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].item_storage_put */
void T264f43(T0* C, T0* a1, T6 a2)
{
	((T347*)(GE_void(((T264*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].search_position */
void T264f42(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T264*)(C))->a2 = (T264f21(C, ((T264*)(C))->a10));
		((T264*)(C))->a5 = ((T264*)(C))->a10;
		((T264*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T264*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T264*)(C))->a2)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T264f24(C, ((T264*)(C))->a2));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T264*)(C))->a5 = (T264f23(C, a1));
				l1 = (T264f21(C, ((T264*)(C))->a5));
				((T264*)(C))->a2 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T264f24(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T264*)(C))->a2 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T264f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T264*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T264*)(C))->a2)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T264f24(C, ((T264*)(C))->a2));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T264*)(C))->a5 = (T264f23(C, a1));
				l1 = (T264f21(C, ((T264*)(C))->a5));
				((T264*)(C))->a2 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T264f24(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T264*)(C))->a2 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T264f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T264*)(C))->a11 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].unset_found_item */
void T264f41(T0* C)
{
	((T264*)(C))->a9 = (T6)(GE_int32(0));
}

/* GEANT_SELECT_ELEMENT.make */
T0* T258c9(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T258));
	*(T258*)C = GE_default258;
	T258f10(C, a1, a2);
	((T258*)(C))->a1 = T263c3();
	t1 = (T258f5(C));
	t2 = (T258f6(C, t1));
	if (t2) {
		t1 = (T258f5(C));
		l1 = (T258f4(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T263f4(GE_void(((T258*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_SELECT.set_name */
void T263f4(T0* C, T0* a1)
{
	((T263*)(C))->a1 = a1;
}

/* GEANT_SELECT_ELEMENT.attribute_value */
T0* T258f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T258*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T258f7(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T258f7(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T258f8(C));
		t4 = (((T22*)(GE_void(((T258*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T258f8(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_SELECT_ELEMENT.project_variables_resolver */
T0* T258f8(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_SELECT_ELEMENT.target_arguments_stack */
T0* T258f7(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_SELECT_ELEMENT.has_attribute */
T1 T258f6(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T258*)(C))->a3), a1));
	return R;
}

/* GEANT_SELECT_ELEMENT.target_attribute_name */
unsigned char ge149os8382 = '\0';
T0* ge149ov8382;
T0* T258f5(T0* C)
{
	T0* R = 0;
	if (ge149os8382) {
		return ge149ov8382;
	} else {
		ge149os8382 = '\1';
	}
	R = GE_ms("target", 6);
	ge149ov8382 = R;
	return R;
}

/* GEANT_SELECT.make */
T0* T263c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T263));
	*(T263*)C = GE_default263;
	return C;
}

/* GEANT_SELECT_ELEMENT.interpreting_element_make */
void T258f10(T0* C, T0* a1, T0* a2)
{
	T258f11(C, a2);
	T258f12(C, a1);
}

/* GEANT_SELECT_ELEMENT.set_project */
void T258f12(T0* C, T0* a1)
{
	((T258*)(C))->a2 = a1;
}

/* GEANT_SELECT_ELEMENT.element_make */
void T258f11(T0* C, T0* a1)
{
	T258f13(C, a1);
}

/* GEANT_SELECT_ELEMENT.set_xml_element */
void T258f13(T0* C, T0* a1)
{
	((T258*)(C))->a3 = a1;
}

/* GEANT_PARENT_ELEMENT.select_element_name */
unsigned char ge141os7944 = '\0';
T0* ge141ov7944;
T0* T200f10(T0* C)
{
	T0* R = 0;
	if (ge141os7944) {
		return ge141ov7944;
	} else {
		ge141os7944 = '\1';
	}
	R = GE_ms("select", 6);
	ge141ov7944 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].force_last */
void T262f38(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T262f41(C);
	T262f42(C, a2);
	t1 = ((((T262*)(C))->a2)!=((T6)(GE_int32(0))));
	if (t1) {
		T262f43(C, a1, ((T262*)(C))->a2);
	} else {
		l1 = ((T6)((((T262*)(C))->a3)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T262*)(C))->a4));
		if (t1) {
			t2 = (T262f22(C, l1));
			T262f44(C, t2);
			l2 = (T262f23(C, a2));
		} else {
			l2 = ((T262*)(C))->a5;
		}
		t2 = (T262f21(C, l2));
		T262f45(C, t2, l1);
		T262f46(C, l1, l2);
		T262f43(C, a1, l1);
		T262f47(C, a2, l1);
		((T262*)(C))->a3 = l1;
		((T262*)(C))->a6 = ((T6)((((T262*)(C))->a6)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].key_storage_put */
void T262f47(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T262*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].slots_put */
void T262f46(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T262*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].clashes_put */
void T262f45(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T262*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].slots_item */
T6 T262f21(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T262*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].hash_position */
T6 T262f23(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T262*)(C))->a10)));
	} else {
		R = ((T262*)(C))->a10;
	}
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].resize */
void T262f44(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T262f41(C);
	l1 = (T262f29(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T262f49(C, t1);
	l2 = ((T262*)(C))->a10;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T262f46(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T262*)(C))->a10 = l1;
	l2 = ((T262*)(C))->a3;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T262f25(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T262f24(C, l2));
			l3 = (T262f23(C, t3));
			t1 = (T262f21(C, l3));
			T262f45(C, t1, l2);
			T262f46(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f50(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f51(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f52(C, t1);
	((T262*)(C))->a4 = a1;
	((T262*)(C))->a2 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].clashes_resize */
void T262f52(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T262f27(C));
	((T262*)(C))->a13 = (T65f1(GE_void(t1), ((T262*)(C))->a13, a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].special_integer_ */
T0* T262f27(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].key_storage_resize */
void T262f51(T0* C, T6 a1)
{
	((T262*)(C))->a15 = (T66f1(GE_void(((T262*)(C))->a19), ((T262*)(C))->a15, a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].item_storage_resize */
void T262f50(T0* C, T6 a1)
{
	((T262*)(C))->a12 = (T343f1(GE_void(((T262*)(C))->a18), ((T262*)(C))->a12, a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_REDEFINE].resize */
T0* T343f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T341*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T341f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_REDEFINE].resized_area */
T0* T341f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T341c4(a1);
	t1 = (((T341*)(C))->z1);
	T341f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_REDEFINE].copy_data */
void T341f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T341f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T341*)(a1))->z2[l1]);
			((T341*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_REDEFINE].move_data */
void T341f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T341f8(C, a1, a2, a3);
			} else {
				T341f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T341f8(C, a1, a2, a3);
			} else {
				T341f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_REDEFINE].overlapping_move */
void T341f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T341*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T341*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T341*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T341*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_REDEFINE].non_overlapping_move */
void T341f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T341*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T341*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_REDEFINE].make */
T0* T341c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T341)+a1*sizeof(T0*));
	*(T341*)C = GE_default341;
	((T341*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].key_storage_item */
T0* T262f24(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T262*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].slots_resize */
void T262f49(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T262f27(C));
	((T262*)(C))->a14 = (T65f1(GE_void(t1), ((T262*)(C))->a14, a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].new_modulus */
T6 T262f29(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].new_capacity */
T6 T262f22(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].item_storage_put */
void T262f43(T0* C, T0* a1, T6 a2)
{
	((T341*)(GE_void(((T262*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].search_position */
void T262f42(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T262*)(C))->a2 = (T262f21(C, ((T262*)(C))->a10));
		((T262*)(C))->a5 = ((T262*)(C))->a10;
		((T262*)(C))->a11 = (T6)(GE_int32(0));
	} else {
		l4 = ((T262*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T262*)(C))->a2)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T262f24(C, ((T262*)(C))->a2));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T262*)(C))->a5 = (T262f23(C, a1));
				l1 = (T262f21(C, ((T262*)(C))->a5));
				((T262*)(C))->a2 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T262f24(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T262*)(C))->a2 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T262f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T262*)(C))->a11 = l2;
			}
		} else {
			t1 = ((((T262*)(C))->a2)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T262f24(C, ((T262*)(C))->a2));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T262*)(C))->a5 = (T262f23(C, a1));
				l1 = (T262f21(C, ((T262*)(C))->a5));
				((T262*)(C))->a2 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T262f24(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T262*)(C))->a2 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T262f25(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T262*)(C))->a11 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].unset_found_item */
void T262f41(T0* C)
{
	((T262*)(C))->a9 = (T6)(GE_int32(0));
}

/* GEANT_REDEFINE_ELEMENT.make */
T0* T257c9(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T257));
	*(T257*)C = GE_default257;
	T257f10(C, a1, a2);
	((T257*)(C))->a1 = T261c3();
	t1 = (T257f5(C));
	t2 = (T257f6(C, t1));
	if (t2) {
		t1 = (T257f5(C));
		l1 = (T257f4(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T261f4(GE_void(((T257*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_REDEFINE.set_name */
void T261f4(T0* C, T0* a1)
{
	((T261*)(C))->a1 = a1;
}

/* GEANT_REDEFINE_ELEMENT.attribute_value */
T0* T257f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T257*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T257f7(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T257f7(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T257f8(C));
		t4 = (((T22*)(GE_void(((T257*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T257f8(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_REDEFINE_ELEMENT.project_variables_resolver */
T0* T257f8(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_REDEFINE_ELEMENT.target_arguments_stack */
T0* T257f7(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_REDEFINE_ELEMENT.has_attribute */
T1 T257f6(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T257*)(C))->a3), a1));
	return R;
}

/* GEANT_REDEFINE_ELEMENT.target_attribute_name */
unsigned char ge145os8378 = '\0';
T0* ge145ov8378;
T0* T257f5(T0* C)
{
	T0* R = 0;
	if (ge145os8378) {
		return ge145ov8378;
	} else {
		ge145os8378 = '\1';
	}
	R = GE_ms("target", 6);
	ge145ov8378 = R;
	return R;
}

/* GEANT_REDEFINE.make */
T0* T261c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T261));
	*(T261*)C = GE_default261;
	return C;
}

/* GEANT_REDEFINE_ELEMENT.interpreting_element_make */
void T257f10(T0* C, T0* a1, T0* a2)
{
	T257f11(C, a2);
	T257f12(C, a1);
}

/* GEANT_REDEFINE_ELEMENT.set_project */
void T257f12(T0* C, T0* a1)
{
	((T257*)(C))->a2 = a1;
}

/* GEANT_REDEFINE_ELEMENT.element_make */
void T257f11(T0* C, T0* a1)
{
	T257f13(C, a1);
}

/* GEANT_REDEFINE_ELEMENT.set_xml_element */
void T257f13(T0* C, T0* a1)
{
	((T257*)(C))->a3 = a1;
}

/* GEANT_PARENT_ELEMENT.redefine_element_name */
unsigned char ge141os7943 = '\0';
T0* ge141ov7943;
T0* T200f9(T0* C)
{
	T0* R = 0;
	if (ge141os7943) {
		return ge141ov7943;
	} else {
		ge141os7943 = '\1';
	}
	R = GE_ms("redefine", 8);
	ge141ov7943 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].force_last */
void T260f39(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T260f43(C);
	T260f41(C, a2);
	t1 = ((((T260*)(C))->a1)!=((T6)(GE_int32(0))));
	if (t1) {
		T260f44(C, a1, ((T260*)(C))->a1);
	} else {
		l1 = ((T6)((((T260*)(C))->a3)+((T6)(GE_int32(1)))));
		t1 = (T6f1(&l1, ((T260*)(C))->a4));
		if (t1) {
			t2 = (T260f30(C, l1));
			T260f45(C, t2);
			l2 = (T260f22(C, a2));
		} else {
			l2 = ((T260*)(C))->a5;
		}
		t2 = (T260f24(C, l2));
		T260f46(C, t2, l1);
		T260f47(C, l1, l2);
		T260f44(C, a1, l1);
		T260f48(C, a2, l1);
		((T260*)(C))->a3 = l1;
		((T260*)(C))->a6 = ((T6)((((T260*)(C))->a6)+((T6)(GE_int32(1)))));
	}
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].key_storage_put */
void T260f48(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T260*)(C))->a15)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].slots_put */
void T260f47(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T260*)(C))->a14)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].clashes_put */
void T260f46(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T260*)(C))->a13)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].slots_item */
T6 T260f24(T0* C, T6 a1)
{
	T6 R = 0;
	R = (((T63*)(GE_void(((T260*)(C))->a14)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].hash_position */
T6 T260f22(T0* C, T0* a1)
{
	T6 R = 0;
	T1 t1;
	T6 t2;
	t1 = ((a1)!=(EIF_VOID));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f7(a1):T194f15(a1)));
		R = ((T6)((t2)%(((T260*)(C))->a9)));
	} else {
		R = ((T260*)(C))->a9;
	}
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].resize */
void T260f45(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T260f43(C);
	l1 = (T260f20(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T260f50(C, t1);
	l2 = ((T260*)(C))->a9;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T260f47(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T260*)(C))->a9 = l1;
	l2 = ((T260*)(C))->a3;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T260f26(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T260f25(C, l2));
			l3 = (T260f22(C, t3));
			t1 = (T260f24(C, l3));
			T260f46(C, t1, l2);
			T260f47(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T260f51(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T260f52(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T260f53(C, t1);
	((T260*)(C))->a4 = a1;
	((T260*)(C))->a1 = (T6)(GE_int32(0));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].clashes_resize */
void T260f53(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T260f28(C));
	((T260*)(C))->a13 = (T65f1(GE_void(t1), ((T260*)(C))->a13, a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].special_integer_ */
T0* T260f28(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].key_storage_resize */
void T260f52(T0* C, T6 a1)
{
	((T260*)(C))->a15 = (T66f1(GE_void(((T260*)(C))->a19), ((T260*)(C))->a15, a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].item_storage_resize */
void T260f51(T0* C, T6 a1)
{
	((T260*)(C))->a12 = (T337f1(GE_void(((T260*)(C))->a18), ((T260*)(C))->a12, a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_RENAME].resize */
T0* T337f1(T0* C, T0* a1, T6 a2)
{
	T0* R = 0;
	T6 t1;
	T1 t2;
	t1 = (((T335*)(GE_void(a1)))->z1);
	t2 = (T6f1(&a2, t1));
	if (t2) {
		R = (T335f2(GE_void(a1), a2));
	} else {
		R = a1;
	}
	return R;
}

/* SPECIAL [GEANT_RENAME].resized_area */
T0* T335f2(T0* C, T6 a1)
{
	T0* R = 0;
	T6 t1;
	R = T335c4(a1);
	t1 = (((T335*)(C))->z1);
	T335f6(GE_void(R), C, (T6)(GE_int32(0)), (T6)(GE_int32(0)), t1);
	return R;
}

/* SPECIAL [GEANT_RENAME].copy_data */
void T335f6(T0* C, T0* a1, T6 a2, T6 a3, T6 a4)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	t1 = ((a1)==(C));
	if (t1) {
		T335f7(C, a2, a3, a4);
	} else {
		l1 = a2;
		l2 = a3;
		l3 = ((T6)((a2)+(a4)));
		t1 = ((l1)==(l3));
		while (!(t1)) {
			t2 = (((T335*)(a1))->z2[l1]);
			((T335*)(C))->z2[l2] = (t2);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			l2 = ((T6)((l2)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l3));
		}
	}
}

/* SPECIAL [GEANT_RENAME].move_data */
void T335f7(T0* C, T6 a1, T6 a2, T6 a3)
{
	T1 t1;
	T6 t2;
	t1 = ((a1)==(a2));
	if (t1) {
	} else {
		t1 = (T6f1(&a1, a2));
		if (t1) {
			t2 = ((T6)((a2)+(a3)));
			t1 = ((T1)((t2)<(a1)));
			if (t1) {
				T335f8(C, a1, a2, a3);
			} else {
				T335f9(C, a1, a2, a3);
			}
		} else {
			t2 = ((T6)((a1)+(a3)));
			t1 = ((T1)((t2)<(a2)));
			if (t1) {
				T335f8(C, a1, a2, a3);
			} else {
				T335f9(C, a1, a2, a3);
			}
		}
	}
}

/* SPECIAL [GEANT_RENAME].overlapping_move */
void T335f9(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T6 t2;
	T0* t3;
	t1 = ((T1)((a1)<(a2)));
	if (t1) {
		t2 = ((T6)((a1)+(a3)));
		l1 = ((T6)((t2)-((T6)(GE_int32(1)))));
		l2 = ((T6)((a1)-((T6)(GE_int32(1)))));
		l3 = ((T6)((a2)-(a1)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T335*)(C))->z2[l1]);
			t2 = ((T6)((l1)+(l3)));
			((T335*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	} else {
		l1 = a1;
		l2 = ((T6)((a1)+(a3)));
		l3 = ((T6)((a1)-(a2)));
		t1 = ((l1)==(l2));
		while (!(t1)) {
			t3 = (((T335*)(C))->z2[l1]);
			t2 = ((T6)((l1)-(l3)));
			((T335*)(C))->z2[t2] = (t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = ((l1)==(l2));
		}
	}
}

/* SPECIAL [GEANT_RENAME].non_overlapping_move */
void T335f8(T0* C, T6 a1, T6 a2, T6 a3)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = a1;
	l2 = ((T6)((a1)+(a3)));
	l3 = ((T6)((a2)-(a1)));
	t1 = ((l1)==(l2));
	while (!(t1)) {
		t2 = (((T335*)(C))->z2[l1]);
		t3 = ((T6)((l1)+(l3)));
		((T335*)(C))->z2[t3] = (t2);
		l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
		t1 = ((l1)==(l2));
	}
}

/* SPECIAL [GEANT_RENAME].make */
T0* T335c4(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T335)+a1*sizeof(T0*));
	*(T335*)C = GE_default335;
	((T335*)(C))->z1 = a1;
	return C;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].key_storage_item */
T0* T260f25(T0* C, T6 a1)
{
	T0* R = 0;
	R = (((T32*)(GE_void(((T260*)(C))->a15)))->z2[a1]);
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].slots_resize */
void T260f50(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T260f28(C));
	((T260*)(C))->a14 = (T65f1(GE_void(t1), ((T260*)(C))->a14, a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].new_modulus */
T6 T260f20(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].new_capacity */
T6 T260f30(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].item_storage_put */
void T260f44(T0* C, T0* a1, T6 a2)
{
	((T335*)(GE_void(((T260*)(C))->a12)))->z2[a2] = (a1);
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].search_position */
void T260f41(T0* C, T0* a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T1 t1;
	T0* t2;
	T1 t3;
	t1 = ((a1)==(EIF_VOID));
	if (t1) {
		((T260*)(C))->a1 = (T260f24(C, ((T260*)(C))->a9));
		((T260*)(C))->a5 = ((T260*)(C))->a9;
		((T260*)(C))->a10 = (T6)(GE_int32(0));
	} else {
		l4 = ((T260*)(C))->a7;
		t1 = ((l4)!=(EIF_VOID));
		if (t1) {
			t1 = ((((T260*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T260f25(C, ((T260*)(C))->a1));
				t3 = (T59f1(GE_void(l4), a1, t2));
				t1 = ((T1)(!(t3)));
			}
			if (!(t1)) {
				t1 = (T59f1(GE_void(l4), a1, l3));
			}
			if (t1) {
				((T260*)(C))->a5 = (T260f22(C, a1));
				l1 = (T260f24(C, ((T260*)(C))->a5));
				((T260*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T260f25(C, l1));
					t1 = (T59f1(GE_void(l4), a1, t2));
					if (t1) {
						((T260*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T260f26(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T260*)(C))->a10 = l2;
			}
		} else {
			t1 = ((((T260*)(C))->a1)==((T6)(GE_int32(0))));
			if (!(t1)) {
				t2 = (T260f25(C, ((T260*)(C))->a1));
				t1 = ((a1)!=(t2));
			}
			if (!(t1)) {
				t1 = ((a1)==(l3));
			}
			if (t1) {
				((T260*)(C))->a5 = (T260f22(C, a1));
				l1 = (T260f24(C, ((T260*)(C))->a5));
				((T260*)(C))->a1 = (T6)(GE_int32(0));
				l2 = (T6)(GE_int32(0));
				t1 = ((l1)==((T6)(GE_int32(0))));
				while (!(t1)) {
					t2 = (T260f25(C, l1));
					t1 = ((a1)==(t2));
					if (t1) {
						((T260*)(C))->a1 = l1;
						l1 = (T6)(GE_int32(0));
					} else {
						l2 = l1;
						l1 = (T260f26(C, l1));
					}
					t1 = ((l1)==((T6)(GE_int32(0))));
				}
				((T260*)(C))->a10 = l2;
			}
		}
	}
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].unset_found_item */
void T260f43(T0* C)
{
	((T260*)(C))->a11 = (T6)(GE_int32(0));
}

/* GEANT_PARENT_ELEMENT.exit_application */
void T200f20(T0* C, T6 a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	t1 = ((a2)!=(EIF_VOID));
	if (t1) {
		l1 = (((T33*)(GE_void(a2)))->a2);
		l2 = (((T33*)(GE_void(a2)))->a3);
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (T200f11(C));
			t2 = (T46f1(GE_void(t2)));
			t3 = (T33f4(GE_void(a2), l1));
			T47f10(GE_void(t2), t3);
			l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			t1 = (T6f1(&l1, l2));
		}
		t2 = (T200f11(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
	}
	t1 = ((a1)!=((T6)(GE_int32(0))));
	if (t1) {
		t2 = (T200f11(C));
		t2 = (T46f1(GE_void(t2)));
		T47f11(GE_void(t2));
		t2 = (T200f11(C));
		t2 = (T46f1(GE_void(t2)));
		T47f12(GE_void(t2), GE_ms("BUILD FAILED!", 13));
	}
	t2 = (T200f12(C));
	T48f2(GE_void(t2), a1);
}

/* GEANT_PARENT_ELEMENT.exceptions */
T0* T200f12(T0* C)
{
	T0* R = 0;
	if (ge222os1585) {
		return ge222ov1585;
	} else {
		ge222os1585 = '\1';
	}
	R = T48c1();
	ge222ov1585 = R;
	return R;
}

/* GEANT_PARENT_ELEMENT.std */
T0* T200f11(T0* C)
{
	T0* R = 0;
	if (ge204os1587) {
		return ge204ov1587;
	} else {
		ge204os1587 = '\1';
	}
	R = T46c3();
	ge204ov1587 = R;
	return R;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].has */
T1 T260f29(T0* C, T0* a1)
{
	T1 R = 0;
	T260f41(C, a1);
	R = ((((T260*)(C))->a1)!=((T6)(GE_int32(0))));
	return R;
}

/* GEANT_RENAME_ELEMENT.make */
T0* T256c10(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T256));
	*(T256*)C = GE_default256;
	T256f11(C, a1, a2);
	((T256*)(C))->a1 = T259c5();
	t1 = (T256f6(C));
	t2 = (T256f7(C, t1));
	if (t2) {
		t1 = (T256f6(C));
		l1 = (T256f4(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T259f6(GE_void(((T256*)(C))->a1), l1);
		}
	}
	t1 = (T256f5(C));
	t2 = (T256f7(C, t1));
	if (t2) {
		t1 = (T256f5(C));
		l1 = (T256f4(C, t1));
		t3 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
		t2 = (T6f1(&t3, (T6)(GE_int32(0))));
		if (t2) {
			T259f7(GE_void(((T256*)(C))->a1), l1);
		}
	}
	return C;
}

/* GEANT_RENAME.set_new_name */
void T259f7(T0* C, T0* a1)
{
	((T259*)(C))->a2 = a1;
}

/* GEANT_RENAME_ELEMENT.as_attribute_name */
unsigned char ge147os8374 = '\0';
T0* ge147ov8374;
T0* T256f5(T0* C)
{
	T0* R = 0;
	if (ge147os8374) {
		return ge147ov8374;
	} else {
		ge147os8374 = '\1';
	}
	R = GE_ms("as", 2);
	ge147ov8374 = R;
	return R;
}

/* GEANT_RENAME.set_original_name */
void T259f6(T0* C, T0* a1)
{
	((T259*)(C))->a1 = a1;
}

/* GEANT_RENAME_ELEMENT.attribute_value */
T0* T256f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T256*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T256f8(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T256f8(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T256f9(C));
		t4 = (((T22*)(GE_void(((T256*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T256f9(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_RENAME_ELEMENT.project_variables_resolver */
T0* T256f9(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_RENAME_ELEMENT.target_arguments_stack */
T0* T256f8(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_RENAME_ELEMENT.has_attribute */
T1 T256f7(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T256*)(C))->a3), a1));
	return R;
}

/* GEANT_RENAME_ELEMENT.target_attribute_name */
unsigned char ge147os8373 = '\0';
T0* ge147ov8373;
T0* T256f6(T0* C)
{
	T0* R = 0;
	if (ge147os8373) {
		return ge147ov8373;
	} else {
		ge147os8373 = '\1';
	}
	R = GE_ms("target", 6);
	ge147ov8373 = R;
	return R;
}

/* GEANT_RENAME.make */
T0* T259c5(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T259));
	*(T259*)C = GE_default259;
	return C;
}

/* GEANT_RENAME_ELEMENT.interpreting_element_make */
void T256f11(T0* C, T0* a1, T0* a2)
{
	T256f12(C, a2);
	T256f13(C, a1);
}

/* GEANT_RENAME_ELEMENT.set_project */
void T256f13(T0* C, T0* a1)
{
	((T256*)(C))->a2 = a1;
}

/* GEANT_RENAME_ELEMENT.element_make */
void T256f12(T0* C, T0* a1)
{
	T256f14(C, a1);
}

/* GEANT_RENAME_ELEMENT.set_xml_element */
void T256f14(T0* C, T0* a1)
{
	((T256*)(C))->a3 = a1;
}

/* GEANT_PARENT_ELEMENT.elements_by_name */
T0* T200f8(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T200*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T200f14(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_PARENT_ELEMENT.string_ */
T0* T200f14(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_PARENT_ELEMENT.rename_element_name */
unsigned char ge141os7942 = '\0';
T0* ge141ov7942;
T0* T200f7(T0* C)
{
	T0* R = 0;
	if (ge141os7942) {
		return ge141ov7942;
	} else {
		ge141os7942 = '\1';
	}
	R = GE_ms("rename", 6);
	ge141ov7942 = R;
	return R;
}

/* GEANT_PARENT.set_parent_project */
void T182f13(T0* C, T0* a1)
{
	((T182*)(C))->a2 = a1;
}

/* GEANT_PARENT_ELEMENT.attribute_value */
T0* T200f13(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T200*)(C))->a3), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T200f15(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T200f15(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T200f16(C));
		t4 = (((T22*)(GE_void(((T200*)(C))->a2)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T200f16(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_PARENT_ELEMENT.project_variables_resolver */
T0* T200f16(T0* C)
{
	T0* R = 0;
	if (ge61os1577) {
		return ge61ov1577;
	} else {
		ge61os1577 = '\1';
	}
	R = T58c16();
	ge61ov1577 = R;
	return R;
}

/* GEANT_PARENT_ELEMENT.target_arguments_stack */
T0* T200f15(T0* C)
{
	T0* R = 0;
	T0* l1 = 0;
	if (ge61os1578) {
		return ge61ov1578;
	} else {
		ge61os1578 = '\1';
	}
	l1 = T100c8((T6)(GE_int32(10)));
	R = l1;
	ge61ov1578 = R;
	return R;
}

/* GEANT_PARENT_ELEMENT.has_attribute */
T1 T200f6(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T200*)(C))->a3), a1));
	return R;
}

/* GEANT_PARENT_ELEMENT.location_attribute_name */
unsigned char ge141os7940 = '\0';
T0* ge141ov7940;
T0* T200f5(T0* C)
{
	T0* R = 0;
	if (ge141os7940) {
		return ge141ov7940;
	} else {
		ge141os7940 = '\1';
	}
	R = GE_ms("location", 8);
	ge141ov7940 = R;
	return R;
}

/* GEANT_PARENT.make */
T0* T182c12(T0* a1)
{
	T0* l1 = 0;
	T0* C;
	C = (T0*)GE_alloc(sizeof(T182));
	*(T182*)C = GE_default182;
	((T182*)(C))->a5 = a1;
	l1 = T59c3();
	((T182*)(C))->a1 = T260c38((T6)(GE_int32(10)));
	T260f40(GE_void(((T182*)(C))->a1), l1);
	((T182*)(C))->a3 = T262c37((T6)(GE_int32(10)));
	T262f39(GE_void(((T182*)(C))->a3), l1);
	((T182*)(C))->a4 = T264c37((T6)(GE_int32(10)));
	T264f39(GE_void(((T182*)(C))->a4), l1);
	((T182*)(C))->a6 = T31c43((T6)(GE_int32(10)));
	T31f44(GE_void(((T182*)(C))->a6), l1);
	((T182*)(C))->a7 = T31c43((T6)(GE_int32(5)));
	T31f44(GE_void(((T182*)(C))->a7), l1);
	((T182*)(C))->a8 = T31c43((T6)(GE_int32(5)));
	T31f44(GE_void(((T182*)(C))->a8), l1);
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].set_key_equality_tester */
void T264f39(T0* C, T0* a1)
{
	((T264*)(C))->a7 = a1;
	T345f6(GE_void(((T264*)(C))->a8), a1);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_SELECT, STRING_8].internal_set_equality_tester */
void T345f6(T0* C, T0* a1)
{
	((T345*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_map_equal */
T0* T264c37(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T264));
	*(T264*)C = GE_default264;
	((T264*)(C))->a1 = T344c1();
	T264f40(C, a1, ((T264*)(C))->a1, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_with_equality_testers */
void T264f40(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T264*)(C))->a1 = a2;
	((T264*)(C))->a7 = a3;
	T264f48(C, a1);
	((T264*)(C))->a8 = T345c5(C);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_SELECT, STRING_8].make */
T0* T345c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T345));
	*(T345*)C = GE_default345;
	((T345*)(C))->a1 = a1;
	((T345*)(C))->a2 = (((T264*)(GE_void(((T345*)(C))->a1)))->a7);
	((T345*)(C))->a3 = (T345f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [GEANT_SELECT, STRING_8].new_cursor */
T0* T345f4(T0* C)
{
	T0* R = 0;
	R = T397c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [GEANT_SELECT, STRING_8].make */
T0* T397c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T397));
	*(T397*)C = GE_default397;
	((T397*)(C))->a1 = a1;
	t1 = (((T345*)(GE_void(((T397*)(C))->a1)))->a1);
	((T397*)(C))->a2 = (T264f26(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_sparse_container */
void T264f48(T0* C, T6 a1)
{
	T6 t1;
	((T264*)(C))->a4 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f53(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T264f55(C, t1);
	((T264*)(C))->a10 = (T264f29(C, a1));
	t1 = ((T6)((((T264*)(C))->a10)+((T6)(GE_int32(1)))));
	T264f56(C, t1);
	((T264*)(C))->a3 = (T6)(GE_int32(0));
	((T264*)(C))->a16 = (T6)(GE_int32(0));
	((T264*)(C))->a2 = (T6)(GE_int32(0));
	T264f41(C);
	((T264*)(C))->a17 = (T264f26(C));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_slots */
void T264f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T264f27(C));
	((T264*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_clashes */
void T264f55(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T264f27(C));
	((T264*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_key_storage */
void T264f54(T0* C, T6 a1)
{
	((T264*)(C))->a19 = T66c3();
	((T264*)(C))->a15 = (T66f2(GE_void(((T264*)(C))->a19), a1));
}

/* DS_HASH_TABLE [GEANT_SELECT, STRING_8].make_item_storage */
void T264f53(T0* C, T6 a1)
{
	((T264*)(C))->a18 = T349c3();
	((T264*)(C))->a12 = (T349f2(GE_void(((T264*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_SELECT].make */
T0* T349f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T398c2(a1);
	R = (((T398*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_SELECT].make_area */
T0* T398c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T398));
	*(T398*)C = GE_default398;
	((T398*)(C))->a1 = T347c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_SELECT].default_create */
T0* T349c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T349));
	*(T349*)C = GE_default349;
	return C;
}

/* KL_EQUALITY_TESTER [GEANT_SELECT].default_create */
T0* T344c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T344));
	*(T344*)C = GE_default344;
	return C;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].set_key_equality_tester */
void T262f39(T0* C, T0* a1)
{
	((T262*)(C))->a7 = a1;
	T339f6(GE_void(((T262*)(C))->a8), a1);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_REDEFINE, STRING_8].internal_set_equality_tester */
void T339f6(T0* C, T0* a1)
{
	((T339*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_map_equal */
T0* T262c37(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T262));
	*(T262*)C = GE_default262;
	((T262*)(C))->a1 = T338c1();
	T262f40(C, a1, ((T262*)(C))->a1, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_with_equality_testers */
void T262f40(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T262*)(C))->a1 = a2;
	((T262*)(C))->a7 = a3;
	T262f48(C, a1);
	((T262*)(C))->a8 = T339c5(C);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_REDEFINE, STRING_8].make */
T0* T339c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T339));
	*(T339*)C = GE_default339;
	((T339*)(C))->a1 = a1;
	((T339*)(C))->a2 = (((T262*)(GE_void(((T339*)(C))->a1)))->a7);
	((T339*)(C))->a3 = (T339f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [GEANT_REDEFINE, STRING_8].new_cursor */
T0* T339f4(T0* C)
{
	T0* R = 0;
	R = T395c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [GEANT_REDEFINE, STRING_8].make */
T0* T395c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T395));
	*(T395*)C = GE_default395;
	((T395*)(C))->a1 = a1;
	t1 = (((T339*)(GE_void(((T395*)(C))->a1)))->a1);
	((T395*)(C))->a2 = (T262f26(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_sparse_container */
void T262f48(T0* C, T6 a1)
{
	T6 t1;
	((T262*)(C))->a4 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f53(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T262f55(C, t1);
	((T262*)(C))->a10 = (T262f29(C, a1));
	t1 = ((T6)((((T262*)(C))->a10)+((T6)(GE_int32(1)))));
	T262f56(C, t1);
	((T262*)(C))->a3 = (T6)(GE_int32(0));
	((T262*)(C))->a16 = (T6)(GE_int32(0));
	((T262*)(C))->a2 = (T6)(GE_int32(0));
	T262f41(C);
	((T262*)(C))->a17 = (T262f26(C));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_slots */
void T262f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T262f27(C));
	((T262*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_clashes */
void T262f55(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T262f27(C));
	((T262*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_key_storage */
void T262f54(T0* C, T6 a1)
{
	((T262*)(C))->a19 = T66c3();
	((T262*)(C))->a15 = (T66f2(GE_void(((T262*)(C))->a19), a1));
}

/* DS_HASH_TABLE [GEANT_REDEFINE, STRING_8].make_item_storage */
void T262f53(T0* C, T6 a1)
{
	((T262*)(C))->a18 = T343c3();
	((T262*)(C))->a12 = (T343f2(GE_void(((T262*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_REDEFINE].make */
T0* T343f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T396c2(a1);
	R = (((T396*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_REDEFINE].make_area */
T0* T396c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T396));
	*(T396*)C = GE_default396;
	((T396*)(C))->a1 = T341c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_REDEFINE].default_create */
T0* T343c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T343));
	*(T343*)C = GE_default343;
	return C;
}

/* KL_EQUALITY_TESTER [GEANT_REDEFINE].default_create */
T0* T338c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T338));
	*(T338*)C = GE_default338;
	return C;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].set_key_equality_tester */
void T260f40(T0* C, T0* a1)
{
	((T260*)(C))->a7 = a1;
	T333f6(GE_void(((T260*)(C))->a8), a1);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_RENAME, STRING_8].internal_set_equality_tester */
void T333f6(T0* C, T0* a1)
{
	((T333*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_map_equal */
T0* T260c38(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T260));
	*(T260*)C = GE_default260;
	((T260*)(C))->a2 = T332c1();
	T260f42(C, a1, ((T260*)(C))->a2, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_with_equality_testers */
void T260f42(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T260*)(C))->a2 = a2;
	((T260*)(C))->a7 = a3;
	T260f49(C, a1);
	((T260*)(C))->a8 = T333c5(C);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_RENAME, STRING_8].make */
T0* T333c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T333));
	*(T333*)C = GE_default333;
	((T333*)(C))->a1 = a1;
	((T333*)(C))->a2 = (((T260*)(GE_void(((T333*)(C))->a1)))->a7);
	((T333*)(C))->a3 = (T333f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [GEANT_RENAME, STRING_8].new_cursor */
T0* T333f4(T0* C)
{
	T0* R = 0;
	R = T393c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [GEANT_RENAME, STRING_8].make */
T0* T393c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T393));
	*(T393*)C = GE_default393;
	((T393*)(C))->a1 = a1;
	t1 = (((T333*)(GE_void(((T393*)(C))->a1)))->a1);
	((T393*)(C))->a2 = (T260f27(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_sparse_container */
void T260f49(T0* C, T6 a1)
{
	T6 t1;
	((T260*)(C))->a4 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T260f54(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T260f55(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T260f56(C, t1);
	((T260*)(C))->a9 = (T260f20(C, a1));
	t1 = ((T6)((((T260*)(C))->a9)+((T6)(GE_int32(1)))));
	T260f57(C, t1);
	((T260*)(C))->a3 = (T6)(GE_int32(0));
	((T260*)(C))->a16 = (T6)(GE_int32(0));
	((T260*)(C))->a1 = (T6)(GE_int32(0));
	T260f43(C);
	((T260*)(C))->a17 = (T260f27(C));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_slots */
void T260f57(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T260f28(C));
	((T260*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_clashes */
void T260f56(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T260f28(C));
	((T260*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_key_storage */
void T260f55(T0* C, T6 a1)
{
	((T260*)(C))->a19 = T66c3();
	((T260*)(C))->a15 = (T66f2(GE_void(((T260*)(C))->a19), a1));
}

/* DS_HASH_TABLE [GEANT_RENAME, STRING_8].make_item_storage */
void T260f54(T0* C, T6 a1)
{
	((T260*)(C))->a18 = T337c3();
	((T260*)(C))->a12 = (T337f2(GE_void(((T260*)(C))->a18), a1));
}

/* KL_SPECIAL_ROUTINES [GEANT_RENAME].make */
T0* T337f2(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T394c2(a1);
	R = (((T394*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_RENAME].make_area */
T0* T394c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T394));
	*(T394*)C = GE_default394;
	((T394*)(C))->a1 = T335c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_RENAME].default_create */
T0* T337c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T337));
	*(T337*)C = GE_default337;
	return C;
}

/* KL_EQUALITY_TESTER [GEANT_RENAME].default_create */
T0* T332c1(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T332));
	*(T332*)C = GE_default332;
	return C;
}

/* GEANT_PARENT_ELEMENT.interpreting_element_make */
void T200f19(T0* C, T0* a1, T0* a2)
{
	T200f21(C, a2);
	T200f22(C, a1);
}

/* GEANT_PARENT_ELEMENT.set_project */
void T200f22(T0* C, T0* a1)
{
	((T200*)(C))->a2 = a1;
}

/* GEANT_PARENT_ELEMENT.element_make */
void T200f21(T0* C, T0* a1)
{
	T200f23(C, a1);
}

/* GEANT_PARENT_ELEMENT.set_xml_element */
void T200f23(T0* C, T0* a1)
{
	((T200*)(C))->a3 = a1;
}

/* GEANT_INHERIT_ELEMENT.elements_by_name */
T0* T117f4(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T117*)(C))->a3)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T117f8(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_INHERIT_ELEMENT.string_ */
T0* T117f8(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_INHERIT_ELEMENT.parent_element_name */
unsigned char ge135os6540 = '\0';
T0* ge135ov6540;
T0* T117f7(T0* C)
{
	T0* R = 0;
	if (ge135os6540) {
		return ge135ov6540;
	} else {
		ge135os6540 = '\1';
	}
	R = GE_ms("parent", 6);
	ge135ov6540 = R;
	return R;
}

/* GEANT_INHERIT.make */
T0* T118c6(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T118));
	*(T118*)C = GE_default118;
	((T118*)(C))->a2 = a1;
	((T118*)(C))->a1 = T184c16((T6)(GE_int32(5)));
	return C;
}

/* DS_ARRAYED_LIST [GEANT_PARENT].make */
T0* T184c16(T6 a1)
{
	T0* C;
	T6 t1;
	C = (T0*)GE_alloc(sizeof(T184));
	*(T184*)C = GE_default184;
	((T184*)(C))->a1 = T249c3();
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	((T184*)(C))->a2 = (T249f1(GE_void(((T184*)(C))->a1), t1));
	((T184*)(C))->a3 = a1;
	((T184*)(C))->a4 = (T184f7(C));
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_PARENT].make */
T0* T249f1(T0* C, T6 a1)
{
	T0* R = 0;
	T0* l1 = 0;
	l1 = T328c2(a1);
	R = (((T328*)(GE_void(l1)))->a1);
	return R;
}

/* TO_SPECIAL [GEANT_PARENT].make_area */
T0* T328c2(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T328));
	*(T328*)C = GE_default328;
	((T328*)(C))->a1 = T250c4(a1);
	return C;
}

/* KL_SPECIAL_ROUTINES [GEANT_PARENT].default_create */
T0* T249c3(void)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T249));
	*(T249*)C = GE_default249;
	return C;
}

/* GEANT_INHERIT_ELEMENT.interpreting_element_make */
void T117f11(T0* C, T0* a1, T0* a2)
{
	T117f13(C, a2);
	T117f14(C, a1);
}

/* GEANT_INHERIT_ELEMENT.set_project */
void T117f14(T0* C, T0* a1)
{
	((T117*)(C))->a2 = a1;
}

/* GEANT_INHERIT_ELEMENT.element_make */
void T117f13(T0* C, T0* a1)
{
	T117f15(C, a1);
}

/* GEANT_INHERIT_ELEMENT.set_xml_element */
void T117f15(T0* C, T0* a1)
{
	((T117*)(C))->a3 = a1;
}

/* GEANT_PROJECT_ELEMENT.inherit_element_name */
unsigned char ge142os2392 = '\0';
T0* ge142ov2392;
T0* T30f16(T0* C)
{
	T0* R = 0;
	if (ge142os2392) {
		return ge142ov2392;
	} else {
		ge142os2392 = '\1';
	}
	R = GE_ms("inherit", 7);
	ge142ov2392 = R;
	return R;
}

/* GEANT_PROJECT.set_inherit_clause */
void T22f34(T0* C, T0* a1)
{
	((T22*)(C))->a10 = a1;
}

/* GEANT_INHERIT_ELEMENT.make_old */
T0* T117c9(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T0* t3;
	C = (T0*)GE_alloc(sizeof(T117));
	*(T117*)C = GE_default117;
	T117f11(C, a1, a2);
	((T117*)(C))->a1 = T118c6(((T117*)(C))->a2);
	l1 = T200c17(((T117*)(C))->a2, a2);
	t1 = (((T200*)(GE_void(l1)))->a1);
	t2 = (T182f9(GE_void(t1)));
	t2 = ((T1)(!(t2)));
	if (t2) {
		t1 = GE_ma33((T6)1,
GE_ms("ERROR in \'parent\' clause", 24));
		T117f12(C, (T6)(GE_int32(1)), t1);
	}
	t1 = (((T118*)(GE_void(((T117*)(C))->a1)))->a1);
	t3 = (((T200*)(GE_void(l1)))->a1);
	T184f17(GE_void(t1), t3);
	return C;
}

/* GEANT_PARENT_ELEMENT.make_old */
T0* T200c17(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* C;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	C = (T0*)GE_alloc(sizeof(T200));
	*(T200*)C = GE_default200;
	T200f19(C, a1, a2);
	((T200*)(C))->a1 = T182c12(a1);
	t1 = (T200f4(C));
	l1 = (T200f13(C, t1));
	t2 = (((((T0*)(GE_void(l1)))->id==17)?((T17*)(l1))->a2:((T194*)(l1))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l2 = T23c9(l1);
		t1 = (((T22*)(GE_void(a1)))->a7);
		t4 = (((T22*)(GE_void(a1)))->a9);
		T23f10(GE_void(l2), t1, t4);
		t1 = (((T23*)(GE_void(l2)))->a1);
		l3 = (((T30*)(GE_void(t1)))->a1);
		T182f13(GE_void(((T200*)(C))->a1), l3);
		T22f25(GE_void(l3));
	} else {
		t1 = (((T22*)(GE_void(((T200*)(C))->a2)))->a2);
		t1 = GE_ma33((T6)4,
GE_ms("\nLOAD ERROR:\n", 13),
GE_ms("  project \'", 11),
t1,
GE_ms("\' invalid inherit clause.", 25));
		T200f20(C, (T6)(GE_int32(1)), t1);
	}
	return C;
}

/* GEANT_PARENT_ELEMENT.inherit_attribute_name */
unsigned char ge141os7941 = '\0';
T0* ge141ov7941;
T0* T200f4(T0* C)
{
	T0* R = 0;
	if (ge141os7941) {
		return ge141ov7941;
	} else {
		ge141os7941 = '\1';
	}
	R = GE_ms("inherit", 7);
	ge141ov7941 = R;
	return R;
}

/* GEANT_PROJECT.set_old_inherit */
void T22f33(T0* C, T1 a1)
{
	((T22*)(C))->a12 = a1;
}

/* GEANT_PROJECT_ELEMENT.has_inherit_element */
T1 T30f15(T0* C)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	t1 = (T30f16(C));
	l1 = (T96f16(GE_void(((T30*)(C))->a2), t1));
	R = ((l1)!=(EIF_VOID));
	return R;
}

/* GEANT_PROJECT_ELEMENT.inherit_attribute_name */
unsigned char ge142os2391 = '\0';
T0* ge142ov2391;
T0* T30f14(T0* C)
{
	T0* R = 0;
	if (ge142os2391) {
		return ge142ov2391;
	} else {
		ge142os2391 = '\1';
	}
	R = GE_ms("inherit", 7);
	ge142ov2391 = R;
	return R;
}

/* GEANT_PROJECT.set_targets */
void T22f32(T0* C, T0* a1)
{
	((T22*)(C))->a1 = a1;
}

/* GEANT_TARGET.make */
T0* T26c80(T0* a1, T0* a2)
{
	T0* l1 = 0;
	T0* l2 = 0;
	T0* l3 = 0;
	T0* l4 = 0;
	T0* l5 = 0;
	T0* l6 = 0;
	T0* l7 = 0;
	T0* C;
	T0* t1;
	T1 t2;
	T6 t3;
	C = (T0*)GE_alloc(sizeof(T26));
	*(T26*)C = GE_default26;
	T26f80p1(C, a1, a2);
	t1 = (T26f12(C));
	t2 = (T96f20(GE_void(a2), t1));
	t2 = ((T1)(!(t2)));
	if (t2) {
		t1 = GE_ma33((T6)2,
GE_ms("Element \'target\' without attribute \'name\' found.", 48),
GE_ms(" Make sure each target has an associated attribute \'name\'.", 58));
		T26f81(C, (T6)(GE_int32(1)), t1);
	}
	t1 = (T26f12(C));
	t1 = (T96f21(GE_void(((T26*)(C))->a2), t1));
	t1 = (((T189*)(GE_void(t1)))->a3);
	T26f82(C, t1);
	t1 = (T26f16(C));
	l3 = (T96f16(GE_void(a2), t1));
	t2 = ((l3)!=(EIF_VOID));
	if (t2) {
		t1 = (T96f26(GE_void(l3)));
		T26f83(C, t1);
	}
	t1 = (T26f19(C));
	l2 = (T96f16(GE_void(a2), t1));
	t2 = ((l2)!=(EIF_VOID));
	if (t2) {
		t1 = (T96f26(GE_void(l2)));
		T26f84(C, t1);
	} else {
		T26f84(C, GE_ms("", 0));
	}
	t1 = (T26f20(C));
	t2 = (T96f20(GE_void(a2), t1));
	if (t2) {
		t1 = (T26f20(C));
		t1 = (T96f21(GE_void(a2), t1));
		t1 = (((T189*)(GE_void(t1)))->a3);
		l4 = (T26f21(C, t1, (T2)(',')));
	} else {
		l4 = T71c23((T6)(GE_int32(1)));
		t1 = (T26f22(C));
		T71f29(GE_void(l4), t1, (T6)(GE_int32(1)));
	}
	l1 = T59c3();
	T71f37(GE_void(l4), l1);
	T26f85(C, l4);
	t1 = (T26f31(C));
	t2 = (T26f35(C, t1));
	if (t2) {
		t1 = (T26f31(C));
		t2 = (T26f37(C, t1));
		T26f86(C, t2);
	}
	((T26*)(C))->a3 = (T26f13(C));
	t1 = (T26f14(C));
	l5 = (T26f15(C, t1));
	t3 = (((T115*)(GE_void(l5)))->a1);
	t2 = ((t3)!=((T6)(GE_int32(0))));
	if (t2) {
		((T26*)(C))->a3 = T34c45();
		l7 = (T115f5(GE_void(l5)));
		T116f8(GE_void(l7));
		t2 = (((T116*)(GE_void(l7)))->a1);
		while (!(t2)) {
			t1 = (T116f6(GE_void(l7)));
			l6 = T187c7(t1);
			t2 = (T187f6(GE_void(l6)));
			if (t2) {
				t1 = (T187f2(GE_void(l6)));
				t3 = (((((T0*)(GE_void(t1)))->id==17)?((T17*)(t1))->a2:((T194*)(t1))->a1));
				t2 = (T6f1(&t3, (T6)(GE_int32(0))));
			}
			if (t2) {
				t1 = (T187f2(GE_void(l6)));
				T34f66(GE_void(((T26*)(C))->a3), GE_ms("dummy_value", 11), t1);
				t1 = (T187f2(GE_void(l6)));
				t1 = GE_ma33((T6)3,
GE_ms("found formal argument \'", 23),
t1,
GE_ms("\'\n", 2));
				T22f31(GE_void(((T26*)(C))->a4), t1);
			}
			T116f9(GE_void(l7));
			t2 = (((T116*)(GE_void(l7)))->a1);
		}
	}
	return C;
}

/* GEANT_ARGUMENT_ELEMENT.name */
T0* T187f2(T0* C)
{
	T0* R = 0;
	T0* t1;
	t1 = (T187f3(C));
	R = (T187f5(C, t1));
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.attribute_value */
T0* T187f5(T0* C, T0* a1)
{
	T0* R = 0;
	T0* t1;
	t1 = (T96f21(GE_void(((T187*)(C))->a1), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.name_attribute_name */
T0* T187f3(T0* C)
{
	T0* R = 0;
	if (ge139os7650) {
		return ge139ov7650;
	} else {
		ge139os7650 = '\1';
	}
	R = GE_ms("name", 4);
	ge139ov7650 = R;
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.has_name */
T1 T187f6(T0* C)
{
	T1 R = 0;
	T0* t1;
	t1 = (T187f3(C));
	R = (T187f4(C, t1));
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.has_attribute */
T1 T187f4(T0* C, T0* a1)
{
	T1 R = 0;
	R = (T96f20(GE_void(((T187*)(C))->a1), a1));
	return R;
}

/* GEANT_ARGUMENT_ELEMENT.make */
T0* T187c7(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T187));
	*(T187*)C = GE_default187;
	T187f8(C, a1);
	return C;
}

/* GEANT_ARGUMENT_ELEMENT.set_xml_element */
void T187f8(T0* C, T0* a1)
{
	((T187*)(C))->a1 = a1;
}

/* GEANT_TARGET.elements_by_name */
T0* T26f15(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T26*)(C))->a2)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T26f24(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_TARGET.empty_argument_variables */
unsigned char ge61os1573 = '\0';
T0* ge61ov1573;
T0* T26f13(T0* C)
{
	T0* R = 0;
	if (ge61os1573) {
		return ge61ov1573;
	} else {
		ge61os1573 = '\1';
	}
	R = T34c45();
	ge61ov1573 = R;
	return R;
}

/* GEANT_TARGET.set_execute_once */
void T26f86(T0* C, T1 a1)
{
	((T26*)(C))->a8 = a1;
}

/* GEANT_TARGET.boolean_value */
T1 T26f37(T0* C, T0* a1)
{
	T1 R = 0;
	T0* l1 = 0;
	T0* t1;
	T0* t2;
	T1 t3;
	l1 = (T26f23(C, a1));
	t1 = (T26f24(C));
	t2 = (T26f25(C));
	t3 = (T76f1(GE_void(t1), t2, l1));
	if (t3) {
		R = EIF_TRUE;
	} else {
		t1 = (T26f24(C));
		t2 = (T26f26(C));
		t3 = (T76f1(GE_void(t1), t2, l1));
		if (t3) {
			R = EIF_FALSE;
		} else {
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("WARNING: wrong value \'", 22));
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), l1);
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), GE_ms("\' for attribute \'", 17));
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f10(GE_void(t1), a1);
			t1 = (T26f17(C));
			t1 = (T46f1(GE_void(t1)));
			T47f12(GE_void(t1), GE_ms("\'. Valid values are \'true\' and \'false\'. Using \'false\'.", 54));
			R = EIF_FALSE;
		}
	}
	return R;
}

/* GEANT_TARGET.false_attribute_value */
T0* T26f26(T0* C)
{
	T0* R = 0;
	if (ge129os2258) {
		return ge129ov2258;
	} else {
		ge129os2258 = '\1';
	}
	R = GE_ms("false", 5);
	ge129ov2258 = R;
	return R;
}

/* GEANT_TARGET.true_attribute_value */
T0* T26f25(T0* C)
{
	T0* R = 0;
	if (ge129os2257) {
		return ge129ov2257;
	} else {
		ge129os2257 = '\1';
	}
	R = GE_ms("true", 4);
	ge129ov2257 = R;
	return R;
}

/* GEANT_TARGET.attribute_value */
T0* T26f23(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T0* t1;
	T6 t2;
	T1 t3;
	T0* t4;
	t1 = (T96f21(GE_void(((T26*)(C))->a2), a1));
	R = (((T189*)(GE_void(t1)))->a3);
	t2 = (((((T0*)(GE_void(R)))->id==17)?((T17*)(R))->a2:((T194*)(R))->a1));
	t3 = (T6f1(&t2, (T6)(GE_int32(0))));
	if (t3) {
		l1 = T243c7();
		t1 = (T26f27(C));
		t2 = (((T100*)(GE_void(t1)))->a1);
		t3 = (T6f1(&t2, (T6)(GE_int32(0))));
		if (t3) {
			l2 = T244c4();
			T243f8(GE_void(l1), l2);
			t1 = (T26f27(C));
			t1 = (T100f5(GE_void(t1)));
			T244f5(GE_void(l2), t1);
			R = (T243f5(GE_void(l1), R));
		}
		t1 = (T26f28(C));
		t4 = (((T22*)(GE_void(((T26*)(C))->a4)))->a7);
		T58f17(GE_void(t1), t4);
		t1 = (T26f28(C));
		T243f8(GE_void(l1), t1);
		R = (T243f5(GE_void(l1), R));
	}
	return R;
}

/* GEANT_TARGET.once_attribute_name */
unsigned char ge63os2235 = '\0';
T0* ge63ov2235;
T0* T26f31(T0* C)
{
	T0* R = 0;
	if (ge63os2235) {
		return ge63ov2235;
	} else {
		ge63os2235 = '\1';
	}
	R = GE_ms("once", 4);
	ge63ov2235 = R;
	return R;
}

/* GEANT_TARGET.set_exports */
void T26f85(T0* C, T0* a1)
{
	((T26*)(C))->a7 = a1;
}

/* DS_ARRAYED_LIST [STRING_8].set_equality_tester */
void T71f37(T0* C, T0* a1)
{
	((T71*)(C))->a6 = a1;
}

/* DS_ARRAYED_LIST [STRING_8].put */
void T71f29(T0* C, T0* a1, T6 a2)
{
	T6 t1;
	T1 t2;
	t1 = ((T6)((((T71*)(C))->a1)+((T6)(GE_int32(1)))));
	t2 = ((a2)==(t1));
	if (t2) {
		T71f32(C, a1);
	} else {
		T71f33(C, a2, (T6)(GE_int32(1)));
		T71f34(C, a2, (T6)(GE_int32(1)));
		((T32*)(GE_void(((T71*)(C))->a2)))->z2[a2] = (a1);
	}
}

/* DS_ARRAYED_LIST [STRING_8].move_cursors_right */
void T71f34(T0* C, T6 a1, T6 a2)
{
	T0* l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	l1 = ((T71*)(C))->a3;
	t1 = ((l1)==(EIF_VOID));
	while (!(t1)) {
		l2 = (((T72*)(GE_void(l1)))->a1);
		t1 = (T6f5(&l2, a1));
		if (t1) {
			t2 = ((T6)((l2)+(a2)));
			T72f10(GE_void(l1), t2);
		}
		l1 = (((T72*)(GE_void(l1)))->a2);
		t1 = ((l1)==(EIF_VOID));
	}
}

/* DS_ARRAYED_LIST_CURSOR [STRING_8].set_position */
void T72f10(T0* C, T6 a1)
{
	((T72*)(C))->a1 = a1;
}

/* DS_ARRAYED_LIST [STRING_8].move_right */
void T71f33(T0* C, T6 a1, T6 a2)
{
	T6 l1 = 0;
	T1 t1;
	T0* t2;
	T6 t3;
	l1 = ((T71*)(C))->a1;
	((T71*)(C))->a1 = ((T6)((((T71*)(C))->a1)+(a2)));
	t1 = ((T1)((l1)<(a1)));
	while (!(t1)) {
		t2 = (((T32*)(GE_void(((T71*)(C))->a2)))->z2[l1]);
		t3 = ((T6)((l1)+(a2)));
		((T32*)(GE_void(((T71*)(C))->a2)))->z2[t3] = (t2);
		l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
		t1 = ((T1)((l1)<(a1)));
	}
}

/* DS_ARRAYED_LIST [STRING_8].put_last */
void T71f32(T0* C, T0* a1)
{
	((T71*)(C))->a1 = ((T6)((((T71*)(C))->a1)+((T6)(GE_int32(1)))));
	((T32*)(GE_void(((T71*)(C))->a2)))->z2[((T71*)(C))->a1] = (a1);
}

/* GEANT_TARGET.export_attribute_name */
unsigned char ge63os2234 = '\0';
T0* ge63ov2234;
T0* T26f20(T0* C)
{
	T0* R = 0;
	if (ge63os2234) {
		return ge63ov2234;
	} else {
		ge63os2234 = '\1';
	}
	R = GE_ms("export", 6);
	ge63ov2234 = R;
	return R;
}

/* GEANT_TARGET.set_description */
void T26f84(T0* C, T0* a1)
{
	((T26*)(C))->a6 = a1;
}

/* GEANT_TARGET.set_obsolete_message */
void T26f83(T0* C, T0* a1)
{
	((T26*)(C))->a5 = a1;
}

/* GEANT_TARGET.set_name */
void T26f82(T0* C, T0* a1)
{
	((T26*)(C))->a1 = a1;
}

/* GEANT_TARGET.name_attribute_name */
unsigned char ge63os2232 = '\0';
T0* ge63ov2232;
T0* T26f12(T0* C)
{
	T0* R = 0;
	if (ge63os2232) {
		return ge63ov2232;
	} else {
		ge63os2232 = '\1';
	}
	R = GE_ms("name", 4);
	ge63ov2232 = R;
	return R;
}

/* GEANT_TARGET.make */
void T26f80p1(T0* C, T0* a1, T0* a2)
{
	T26f87(C, a2);
	T26f88(C, a1);
}

/* GEANT_TARGET.set_project */
void T26f88(T0* C, T0* a1)
{
	((T26*)(C))->a4 = a1;
}

/* GEANT_TARGET.element_make */
void T26f87(T0* C, T0* a1)
{
	T26f89(C, a1);
}

/* GEANT_TARGET.set_xml_element */
void T26f89(T0* C, T0* a1)
{
	((T26*)(C))->a2 = a1;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].set_key_equality_tester */
void T31f44(T0* C, T0* a1)
{
	((T31*)(C))->a3 = a1;
	T121f6(GE_void(((T31*)(C))->a4), a1);
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_map */
T0* T31c43(T6 a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T31));
	*(T31*)C = GE_default31;
	T31f47(C, a1, EIF_VOID, EIF_VOID);
	return C;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_with_equality_testers */
void T31f47(T0* C, T6 a1, T0* a2, T0* a3)
{
	((T31*)(C))->a11 = a2;
	((T31*)(C))->a3 = a3;
	T31f54(C, a1);
	((T31*)(C))->a4 = T121c5(C);
}

/* DS_SPARSE_TABLE_KEYS [GEANT_TARGET, STRING_8].make */
T0* T121c5(T0* a1)
{
	T0* C;
	C = (T0*)GE_alloc(sizeof(T121));
	*(T121*)C = GE_default121;
	((T121*)(C))->a1 = a1;
	((T121*)(C))->a2 = (((T31*)(GE_void(((T121*)(C))->a1)))->a3);
	((T121*)(C))->a3 = (T121f4(C));
	return C;
}

/* DS_SPARSE_TABLE_KEYS [GEANT_TARGET, STRING_8].new_cursor */
T0* T121f4(T0* C)
{
	T0* R = 0;
	R = T202c3(C);
	return R;
}

/* DS_SPARSE_TABLE_KEYS_CURSOR [GEANT_TARGET, STRING_8].make */
T0* T202c3(T0* a1)
{
	T0* C;
	T0* t1;
	C = (T0*)GE_alloc(sizeof(T202));
	*(T202*)C = GE_default202;
	((T202*)(C))->a1 = a1;
	t1 = (((T121*)(GE_void(((T202*)(C))->a1)))->a1);
	((T202*)(C))->a2 = (T31f29(GE_void(t1)));
	return C;
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_sparse_container */
void T31f54(T0* C, T6 a1)
{
	T6 t1;
	((T31*)(C))->a6 = a1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f59(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f60(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T31f61(C, t1);
	((T31*)(C))->a9 = (T31f22(C, a1));
	t1 = ((T6)((((T31*)(C))->a9)+((T6)(GE_int32(1)))));
	T31f62(C, t1);
	((T31*)(C))->a5 = (T6)(GE_int32(0));
	((T31*)(C))->a16 = (T6)(GE_int32(0));
	((T31*)(C))->a1 = (T6)(GE_int32(0));
	T31f48(C);
	((T31*)(C))->a17 = (T31f29(C));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_slots */
void T31f62(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T31f30(C));
	((T31*)(C))->a14 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_clashes */
void T31f61(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T31f30(C));
	((T31*)(C))->a13 = (T65f2(GE_void(t1), a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_key_storage */
void T31f60(T0* C, T6 a1)
{
	((T31*)(C))->a19 = T66c3();
	((T31*)(C))->a15 = (T66f2(GE_void(((T31*)(C))->a19), a1));
}

/* DS_HASH_TABLE [GEANT_TARGET, STRING_8].make_item_storage */
void T31f59(T0* C, T6 a1)
{
	((T31*)(C))->a18 = T124c3();
	((T31*)(C))->a2 = (T124f2(GE_void(((T31*)(C))->a18), a1));
}

/* GEANT_PROJECT_ELEMENT.elements_by_name */
T0* T30f11(T0* C, T0* a1)
{
	T0* R = 0;
	T0* l1 = 0;
	T0* l2 = 0;
	T1 t1;
	T0* t2;
	T0* t3;
	R = T115c8();
	l1 = (T96f19(GE_void(((T30*)(C))->a2)));
	T190f10(GE_void(l1));
	t1 = (((T190*)(GE_void(l1)))->a1);
	while (!(t1)) {
		t2 = (T190f8(GE_void(l1)));
		if ((t2)==EIF_VOID) {
			l2 = EIF_VOID;
		} else {
			switch (((T0*)(t2))->id) {
			case 96:
				l2 = t2;
				break;
			default:
				l2 = EIF_VOID;
			}
		}
		t1 = ((l2)!=(EIF_VOID));
		if (t1) {
			t2 = (T30f19(C));
			t3 = (((T96*)(GE_void(l2)))->a3);
			t1 = (T76f1(GE_void(t2), t3, a1));
		}
		if (t1) {
			T115f9(GE_void(R), l2);
		}
		T190f11(GE_void(l1));
		t1 = (((T190*)(GE_void(l1)))->a1);
	}
	return R;
}

/* GEANT_PROJECT_ELEMENT.string_ */
T0* T30f19(T0* C)
{
	T0* R = 0;
	if (ge174os1583) {
		return ge174ov1583;
	} else {
		ge174os1583 = '\1';
	}
	R = T76c19();
	ge174ov1583 = R;
	return R;
}

/* GEANT_PROJECT_ELEMENT.target_element_name */
unsigned char ge142os2394 = '\0';
T0* ge142ov2394;
T0* T30f10(T0* C)
{
	T0* R = 0;
	if (ge142os2394) {
		return ge142ov2394;
	} else {
		ge142os2394 = '\1';
	}
	R = GE_ms("target", 6);
	ge142ov2394 = R;
	return R;
}

/* GEANT_PROJECT.set_default_target_name */
void T22f30(T0* C, T0* a1)
{
	((T22*)(C))->a5 = a1;
}

/* GEANT_PROJECT_ELEMENT.default_attribute_name */
unsigned char ge142os2390 = '\0';
T0* ge142ov2390;
T0* T30f9(T0* C)
{
	T0* R = 0;
	if (ge142os2390) {
		return ge142ov2390;
	} else {
		ge142os2390 = '\1';
	}
	R = GE_ms("default", 7);
	ge142ov2390 = R;
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.basename */
T0* T53f24(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T2 t2;
	T1 t3;
	T6 t4;
	t1 = (T53f25(C, a1));
	if (t1) {
		R = (T53f16(C));
	} else {
		l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t3 = (T53f19(C, t2));
			t1 = ((T1)(!(t3)));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t3 = (T53f19(C, t2));
				t1 = ((T1)(!(t3)));
			}
		}
		l2 = l1;
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t1 = (T53f19(C, t2));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t1 = (T53f19(C, t2));
			}
		}
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (t1) {
			t4 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
			t1 = ((l2)==(t4));
		}
		if (t1) {
			R = a1;
		} else {
			t4 = ((T6)((l1)+((T6)(GE_int32(1)))));
			R = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, t4, l2):T194f11(a1, t4, l2)));
		}
	}
	return R;
}

/* KL_WINDOWS_FILE_SYSTEM.is_root_directory */
T1 T53f25(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 l3 = 0;
	T1 l4 = 0;
	T2 l5 = 0;
	T1 t1;
	T2 t2;
	T1 t3;
	T6 t4;
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f5(&l2, (T6)(GE_int32(4))));
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T194f10(a1, (T6)(GE_int32(1)))));
		t1 = (T53f19(C, t2));
	}
	if (t1) {
		t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(2))):T194f10(a1, (T6)(GE_int32(2)))));
		t1 = (T53f19(C, t2));
		if (t1) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(3))):T194f10(a1, (T6)(GE_int32(3)))));
			t3 = (T53f19(C, t2));
			t1 = ((T1)(!(t3)));
		}
		if (t1) {
			l1 = (T6)(GE_int32(4));
			t1 = (T6f1(&l1, l2));
			if (!(t1)) {
				t1 = (l4);
			}
			while (!(t1)) {
				l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t1 = (T53f19(C, l5));
				if (t1) {
					l4 = EIF_TRUE;
				} else {
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
				}
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t1 = (l4);
				}
			}
			if (l4) {
				t1 = ((T1)((l1)<(l2)));
				if (t1) {
					t4 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, t4):T194f10(a1, t4)));
					t3 = (T53f19(C, t2));
					t1 = ((T1)(!(t3)));
				}
				if (t1) {
					l4 = EIF_FALSE;
					l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t1 = (T6f1(&l1, l2));
					if (!(t1)) {
						t1 = (l4);
					}
					while (!(t1)) {
						l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
						t1 = (T53f19(C, l5));
						if (t1) {
							l4 = EIF_TRUE;
						} else {
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						}
						t1 = (T6f1(&l1, l2));
						if (!(t1)) {
							t1 = (l4);
						}
					}
					if (l4) {
						l4 = EIF_FALSE;
						l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						t1 = (T6f1(&l1, l2));
						if (!(t1)) {
							t1 = (l4);
						}
						while (!(t1)) {
							l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
							t1 = (T53f19(C, l5));
							t1 = ((T1)(!(t1)));
							if (t1) {
								l4 = EIF_TRUE;
							} else {
								l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
							}
							t1 = (T6f1(&l1, l2));
							if (!(t1)) {
								t1 = (l4);
							}
						}
						R = ((T1)(!(l4)));
					} else {
						R = EIF_TRUE;
					}
				}
			}
		}
	} else {
		t1 = (T6f5(&l2, (T6)(GE_int32(3))));
		if (t1) {
			l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T194f10(a1, (T6)(GE_int32(1)))));
			t1 = (T53f19(C, l5));
			t1 = ((T1)(!(t1)));
			if (t1) {
				t1 = ((l5)!=((T2)(':')));
			}
			if (t1) {
				l1 = (T6)(GE_int32(2));
				t1 = (T6f1(&l1, l2));
				if (!(t1)) {
					t1 = (l3);
				}
				if (!(t1)) {
					t1 = (l4);
				}
				while (!(t1)) {
					l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
					t1 = (T53f19(C, l5));
					if (t1) {
						l3 = EIF_TRUE;
					} else {
						t1 = ((l5)==((T2)(':')));
						if (t1) {
							l4 = EIF_TRUE;
						} else {
							l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
						}
					}
					t1 = (T6f1(&l1, l2));
					if (!(t1)) {
						t1 = (l3);
					}
					if (!(t1)) {
						t1 = (l4);
					}
				}
				if (l4) {
					t4 = ((T6)((l1)+((T6)(GE_int32(1)))));
					t1 = ((t4)==(l2));
				} else {
					t1 = EIF_FALSE;
				}
				if (t1) {
					l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l2):T194f10(a1, l2)));
					R = (T53f19(C, l5));
				}
			}
		} else {
			t1 = ((l2)==((T6)(GE_int32(1))));
			if (t1) {
				l5 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, (T6)(GE_int32(1))):T194f10(a1, (T6)(GE_int32(1)))));
				R = (T53f19(C, l5));
			}
		}
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.basename */
T0* T54f21(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T2 t2;
	T6 t3;
	t1 = (T54f22(C, a1));
	if (t1) {
		R = (T54f17(C));
	} else {
		l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t1 = ((t2)!=((T2)('/')));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t1 = ((t2)!=((T2)('/')));
			}
		}
		l2 = l1;
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t1 = ((t2)==((T2)('/')));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t1 = ((t2)==((T2)('/')));
			}
		}
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (t1) {
			t3 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
			t1 = ((l2)==(t3));
		}
		if (t1) {
			R = a1;
		} else {
			t3 = ((T6)((l1)+((T6)(GE_int32(1)))));
			R = (((((T0*)(GE_void(a1)))->id==17)?T17f10(a1, t3, l2):T194f11(a1, t3, l2)));
		}
	}
	return R;
}

/* KL_UNIX_FILE_SYSTEM.is_root_directory */
T1 T54f22(T0* C, T0* a1)
{
	T1 R = 0;
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T2 t2;
	l2 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
	t1 = (T6f1(&l2, (T6)(GE_int32(0))));
	if (t1) {
		R = EIF_TRUE;
		l1 = (T6)(GE_int32(1));
		t1 = (T6f1(&l1, l2));
		while (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t1 = ((t2)!=((T2)('/')));
			if (t1) {
				R = EIF_FALSE;
				l1 = ((T6)((l2)+((T6)(GE_int32(1)))));
			} else {
				l1 = ((T6)((l1)+((T6)(GE_int32(1)))));
			}
			t1 = (T6f1(&l1, l2));
		}
	}
	return R;
}

/* GEANT_PROJECT_VARIABLES.set_variable_value */
void T25f58(T0* C, T0* a1, T0* a2)
{
	T25f61(C, a2, a1);
}

/* GEANT_PROJECT_VARIABLES.force */
void T25f61(T0* C, T0* a1, T0* a2)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T1 t1;
	T6 t2;
	T6 t3;
	T25f63(C);
	T25f64(C, a2);
	t1 = ((((T25*)(C))->a3)!=((T6)(GE_int32(0))));
	if (t1) {
		T25f65(C, a1, ((T25*)(C))->a3);
	} else {
		t1 = ((((T25*)(C))->a4)==(((T25*)(C))->a5));
		if (t1) {
			t2 = ((T6)((((T25*)(C))->a4)+((T6)(GE_int32(1)))));
			t2 = (T25f32(C, t2));
			T25f66(C, t2);
			l2 = (T25f33(C, a2));
		} else {
			l2 = ((T25*)(C))->a6;
		}
		l1 = ((T25*)(C))->a7;
		t1 = ((l1)==((T6)(GE_int32(0))));
		if (t1) {
			((T25*)(C))->a8 = ((T6)((((T25*)(C))->a8)+((T6)(GE_int32(1)))));
			l1 = ((T25*)(C))->a8;
		} else {
			t2 = (T6)(GE_int32(-1));
			t3 = (T25f21(C, l1));
			((T25*)(C))->a7 = ((T6)((t2)-(t3)));
		}
		t2 = (T25f22(C, l2));
		T25f67(C, t2, l1);
		T25f68(C, l1, l2);
		T25f65(C, a1, l1);
		T25f69(C, a2, l1);
		((T25*)(C))->a4 = ((T6)((((T25*)(C))->a4)+((T6)(GE_int32(1)))));
	}
}

/* GEANT_PROJECT_VARIABLES.key_storage_put */
void T25f69(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T25*)(C))->a16)))->z2[a2] = (a1);
}

/* GEANT_PROJECT_VARIABLES.slots_put */
void T25f68(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T25*)(C))->a15)))->z2[a2] = (a1);
}

/* GEANT_PROJECT_VARIABLES.clashes_put */
void T25f67(T0* C, T6 a1, T6 a2)
{
	((T63*)(GE_void(((T25*)(C))->a14)))->z2[a2] = (a1);
}

/* GEANT_PROJECT_VARIABLES.resize */
void T25f66(T0* C, T6 a1)
{
	T6 l1 = 0;
	T6 l2 = 0;
	T6 l3 = 0;
	T6 t1;
	T1 t2;
	T0* t3;
	T25f63(C);
	l1 = (T25f29(C, a1));
	t1 = ((T6)((l1)+((T6)(GE_int32(1)))));
	T25f71(C, t1);
	l2 = ((T25*)(C))->a11;
	t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	while (!(t2)) {
		T25f68(C, (T6)(GE_int32(0)), l2);
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(0)))));
	}
	((T25*)(C))->a11 = l1;
	l2 = ((T25*)(C))->a8;
	t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	while (!(t2)) {
		t1 = (T25f21(C, l2));
		t2 = (T6f1(&t1, (T6)(GE_int32(-1))));
		if (t2) {
			t3 = (T25f27(C, l2));
			l3 = (T25f33(C, t3));
			t1 = (T25f22(C, l3));
			T25f67(C, t1, l2);
			T25f68(C, l2, l3);
		}
		l2 = ((T6)((l2)-((T6)(GE_int32(1)))));
		t2 = ((T1)((l2)<((T6)(GE_int32(1)))));
	}
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T25f72(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T25f73(C, t1);
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	T25f74(C, t1);
	((T25*)(C))->a5 = a1;
	((T25*)(C))->a3 = (T6)(GE_int32(0));
}

/* GEANT_PROJECT_VARIABLES.clashes_resize */
void T25f74(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T25f36(C));
	((T25*)(C))->a14 = (T65f1(GE_void(t1), ((T25*)(C))->a14, a1));
}

/* GEANT_PROJECT_VARIABLES.special_integer_ */
T0* T25f36(T0* C)
{
	T0* R = 0;
	if (ge172os1952) {
		return ge172ov1952;
	} else {
		ge172os1952 = '\1';
	}
	R = T65c4();
	ge172ov1952 = R;
	return R;
}

/* GEANT_PROJECT_VARIABLES.key_storage_resize */
void T25f73(T0* C, T6 a1)
{
	((T25*)(C))->a16 = (T66f1(GE_void(((T25*)(C))->a19), ((T25*)(C))->a16, a1));
}

/* GEANT_PROJECT_VARIABLES.item_storage_resize */
void T25f72(T0* C, T6 a1)
{
	((T25*)(C))->a13 = (T66f1(GE_void(((T25*)(C))->a18), ((T25*)(C))->a13, a1));
}

/* GEANT_PROJECT_VARIABLES.slots_resize */
void T25f71(T0* C, T6 a1)
{
	T0* t1;
	t1 = (T25f36(C));
	((T25*)(C))->a15 = (T65f1(GE_void(t1), ((T25*)(C))->a15, a1));
}

/* GEANT_PROJECT_VARIABLES.new_modulus */
T6 T25f29(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = ((T6)((a1)+((T6)(GE_int32(1)))));
	t1 = ((T6)((t1)*((T6)(GE_int32(3)))));
	R = ((T6)((t1)/((T6)(GE_int32(2)))));
	return R;
}

/* GEANT_PROJECT_VARIABLES.new_capacity */
T6 T25f32(T0* C, T6 a1)
{
	T6 R = 0;
	T6 t1;
	t1 = (T6)(GE_int32(2));
	R = ((T6)((t1)*(a1)));
	return R;
}

/* GEANT_PROJECT_VARIABLES.item_storage_put */
void T25f65(T0* C, T0* a1, T6 a2)
{
	((T32*)(GE_void(((T25*)(C))->a13)))->z2[a2] = (a1);
}

/* GEANT_PROJECT_VARIABLES.unset_found_item */
void T25f63(T0* C)
{
	((T25*)(C))->a10 = (T6)(GE_int32(0));
}

/* KL_WINDOWS_FILE_SYSTEM.dirname */
T0* T53f23(T0* C, T0* a1)
{
	T0* R = 0;
	T6 l1 = 0;
	T1 t1;
	T2 t2;
	T1 t3;
	T6 t4;
	t1 = (T53f25(C, a1));
	if (t1) {
		R = a1;
	} else {
		l1 = (((((T0*)(GE_void(a1)))->id==17)?((T17*)(a1))->a2:((T194*)(a1))->a1));
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t3 = (T53f19(C, t2));
			t1 = ((T1)(!(t3)));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t3 = (T53f19(C, t2));
				t1 = ((T1)(!(t3)));
			}
		}
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (!(t1)) {
			t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
			t1 = (T53f19(C, t2));
		}
		while (!(t1)) {
			l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t1 = (T53f19(C, t2));
			}
		}
		t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
		if (t1) {
			R = ge211ov3833;
		} else {
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (!(t1)) {
				t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
				t3 = (T53f19(C, t2));
				t1 = ((T1)(!(t3)));
			}
			while (!(t1)) {
				l1 = ((T6)((l1)-((T6)(GE_int32(1)))));
				t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
				if (!(t1)) {
					t2 = (((((T0*)(GE_void(a1)))->id==17)?T17f9(a1, l1):T194f10(a1, l1)));
					t3 = (T53f19(C, t2));
					t1 = ((T1)(!(t3)));
				}
			}
			t1 = ((T1)((l1)<((T6)(GE_int32(1)))));
			if (t1) {
				R = (T53f16(C));
			} else {
				t1 = ((t2)==((T2)(':')));
				if (t1) {
				}
		}