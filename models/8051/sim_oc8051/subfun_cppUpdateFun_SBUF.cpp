#include "common.hpp"
#include "model_oc8051_class.hpp"

BIT_VEC model_oc8051::cppUpdateFun_SBUF()
{
	BIT_VEC cppVar_57109;
	BIT_VEC cppVar_57110 = ROM.rd(PC);
	bool cppVar_57112 = (cppVar_57110 == 208);
	if (cppVar_57112) {
	BIT_VEC cppVar_57113;
	BIT_VEC cppVar_57115 = PC + 1;
	cppVar_57115 = (cppVar_57115 & cppMask_un_16_);
	BIT_VEC cppVar_57116 = ROM.rd(cppVar_57115);
	bool cppVar_57118 = (cppVar_57116 == 153);
	if (cppVar_57118) {
	BIT_VEC cppVar_57119 = IRAM.rd(SP);
	cppVar_57113 = cppVar_57119;
	} else {
	cppVar_57113 = SBUF;
	}
	cppVar_57109 = cppVar_57113;
	} else {
	BIT_VEC cppVar_57120;
	BIT_VEC cppVar_57121 = ROM.rd(PC);
	bool cppVar_57123 = (cppVar_57121 == 245);
	BIT_VEC cppVar_57124 = ROM.rd(PC);
	bool cppVar_57126 = (cppVar_57124 == 197);
	bool cppVar_57127 = cppVar_57123 || cppVar_57126;
	if (cppVar_57127) {
	BIT_VEC cppVar_57128;
	BIT_VEC cppVar_57130 = PC + 1;
	cppVar_57130 = (cppVar_57130 & cppMask_un_16_);
	BIT_VEC cppVar_57131 = ROM.rd(cppVar_57130);
	bool cppVar_57133 = (cppVar_57131 == 153);
	if (cppVar_57133) {
	cppVar_57128 = ACC;
	} else {
	cppVar_57128 = SBUF;
	}
	cppVar_57120 = cppVar_57128;
	} else {
	BIT_VEC cppVar_57134;
	BIT_VEC cppVar_57135 = ROM.rd(PC);
	bool cppVar_57137 = (cppVar_57135 == 143);
	if (cppVar_57137) {
	BIT_VEC cppVar_57138;
	BIT_VEC cppVar_57140 = PC + 1;
	cppVar_57140 = (cppVar_57140 & cppMask_un_16_);
	BIT_VEC cppVar_57141 = ROM.rd(cppVar_57140);
	bool cppVar_57143 = (cppVar_57141 == 153);
	if (cppVar_57143) {
	BIT_VEC cppVar_57144;
	BIT_VEC cppVar_57146 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57148 = (cppVar_57146 << 3) | 7;
	cppVar_57148 = (cppVar_57148 & cppMask_un_5_);
	BIT_VEC cppVar_57149 = (0 << 5) | cppVar_57148;
	cppVar_57149 = (cppVar_57149 & cppMask_un_8_);
	BIT_VEC cppVar_57150 = (cppVar_57149 >> 7) & cppMask_un_1_;
	bool cppVar_57152 = (cppVar_57150 == 0);
	if (cppVar_57152) {
	BIT_VEC cppVar_57153 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57154 = (cppVar_57153 << 3) | 7;
	cppVar_57154 = (cppVar_57154 & cppMask_un_5_);
	BIT_VEC cppVar_57155 = (0 << 5) | cppVar_57154;
	cppVar_57155 = (cppVar_57155 & cppMask_un_8_);
	BIT_VEC cppVar_57156 = IRAM.rd(cppVar_57155);
	cppVar_57144 = cppVar_57156;
	} else {
	BIT_VEC cppVar_57157;
	BIT_VEC cppVar_57158 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57159 = (cppVar_57158 << 3) | 7;
	cppVar_57159 = (cppVar_57159 & cppMask_un_5_);
	BIT_VEC cppVar_57160 = (0 << 5) | cppVar_57159;
	cppVar_57160 = (cppVar_57160 & cppMask_un_8_);
	bool cppVar_57162 = (cppVar_57160 == 128);
	if (cppVar_57162) {
	cppVar_57157 = P0;
	} else {
	BIT_VEC cppVar_57163;
	BIT_VEC cppVar_57164 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57165 = (cppVar_57164 << 3) | 7;
	cppVar_57165 = (cppVar_57165 & cppMask_un_5_);
	BIT_VEC cppVar_57166 = (0 << 5) | cppVar_57165;
	cppVar_57166 = (cppVar_57166 & cppMask_un_8_);
	bool cppVar_57168 = (cppVar_57166 == 129);
	if (cppVar_57168) {
	cppVar_57163 = SP;
	} else {
	BIT_VEC cppVar_57169;
	BIT_VEC cppVar_57170 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57171 = (cppVar_57170 << 3) | 7;
	cppVar_57171 = (cppVar_57171 & cppMask_un_5_);
	BIT_VEC cppVar_57172 = (0 << 5) | cppVar_57171;
	cppVar_57172 = (cppVar_57172 & cppMask_un_8_);
	bool cppVar_57174 = (cppVar_57172 == 130);
	if (cppVar_57174) {
	cppVar_57169 = DPL;
	} else {
	BIT_VEC cppVar_57175;
	BIT_VEC cppVar_57176 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57177 = (cppVar_57176 << 3) | 7;
	cppVar_57177 = (cppVar_57177 & cppMask_un_5_);
	BIT_VEC cppVar_57178 = (0 << 5) | cppVar_57177;
	cppVar_57178 = (cppVar_57178 & cppMask_un_8_);
	bool cppVar_57180 = (cppVar_57178 == 131);
	if (cppVar_57180) {
	cppVar_57175 = DPH;
	} else {
	BIT_VEC cppVar_57181;
	BIT_VEC cppVar_57182 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57183 = (cppVar_57182 << 3) | 7;
	cppVar_57183 = (cppVar_57183 & cppMask_un_5_);
	BIT_VEC cppVar_57184 = (0 << 5) | cppVar_57183;
	cppVar_57184 = (cppVar_57184 & cppMask_un_8_);
	bool cppVar_57186 = (cppVar_57184 == 135);
	if (cppVar_57186) {
	cppVar_57181 = PCON;
	} else {
	BIT_VEC cppVar_57187;
	BIT_VEC cppVar_57188 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57189 = (cppVar_57188 << 3) | 7;
	cppVar_57189 = (cppVar_57189 & cppMask_un_5_);
	BIT_VEC cppVar_57190 = (0 << 5) | cppVar_57189;
	cppVar_57190 = (cppVar_57190 & cppMask_un_8_);
	bool cppVar_57192 = (cppVar_57190 == 136);
	if (cppVar_57192) {
	cppVar_57187 = TCON;
	} else {
	BIT_VEC cppVar_57193;
	BIT_VEC cppVar_57194 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57195 = (cppVar_57194 << 3) | 7;
	cppVar_57195 = (cppVar_57195 & cppMask_un_5_);
	BIT_VEC cppVar_57196 = (0 << 5) | cppVar_57195;
	cppVar_57196 = (cppVar_57196 & cppMask_un_8_);
	bool cppVar_57198 = (cppVar_57196 == 137);
	if (cppVar_57198) {
	cppVar_57193 = TMOD;
	} else {
	BIT_VEC cppVar_57199;
	BIT_VEC cppVar_57200 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57201 = (cppVar_57200 << 3) | 7;
	cppVar_57201 = (cppVar_57201 & cppMask_un_5_);
	BIT_VEC cppVar_57202 = (0 << 5) | cppVar_57201;
	cppVar_57202 = (cppVar_57202 & cppMask_un_8_);
	bool cppVar_57204 = (cppVar_57202 == 138);
	if (cppVar_57204) {
	cppVar_57199 = TL0;
	} else {
	BIT_VEC cppVar_57205;
	BIT_VEC cppVar_57206 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57207 = (cppVar_57206 << 3) | 7;
	cppVar_57207 = (cppVar_57207 & cppMask_un_5_);
	BIT_VEC cppVar_57208 = (0 << 5) | cppVar_57207;
	cppVar_57208 = (cppVar_57208 & cppMask_un_8_);
	bool cppVar_57210 = (cppVar_57208 == 140);
	if (cppVar_57210) {
	cppVar_57205 = TH0;
	} else {
	BIT_VEC cppVar_57211;
	BIT_VEC cppVar_57212 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57213 = (cppVar_57212 << 3) | 7;
	cppVar_57213 = (cppVar_57213 & cppMask_un_5_);
	BIT_VEC cppVar_57214 = (0 << 5) | cppVar_57213;
	cppVar_57214 = (cppVar_57214 & cppMask_un_8_);
	bool cppVar_57216 = (cppVar_57214 == 139);
	if (cppVar_57216) {
	cppVar_57211 = TL1;
	} else {
	BIT_VEC cppVar_57217;
	BIT_VEC cppVar_57218 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57219 = (cppVar_57218 << 3) | 7;
	cppVar_57219 = (cppVar_57219 & cppMask_un_5_);
	BIT_VEC cppVar_57220 = (0 << 5) | cppVar_57219;
	cppVar_57220 = (cppVar_57220 & cppMask_un_8_);
	bool cppVar_57222 = (cppVar_57220 == 141);
	if (cppVar_57222) {
	cppVar_57217 = TH1;
	} else {
	BIT_VEC cppVar_57223;
	BIT_VEC cppVar_57224 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57225 = (cppVar_57224 << 3) | 7;
	cppVar_57225 = (cppVar_57225 & cppMask_un_5_);
	BIT_VEC cppVar_57226 = (0 << 5) | cppVar_57225;
	cppVar_57226 = (cppVar_57226 & cppMask_un_8_);
	bool cppVar_57228 = (cppVar_57226 == 144);
	if (cppVar_57228) {
	cppVar_57223 = P1;
	} else {
	BIT_VEC cppVar_57229;
	BIT_VEC cppVar_57230 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57231 = (cppVar_57230 << 3) | 7;
	cppVar_57231 = (cppVar_57231 & cppMask_un_5_);
	BIT_VEC cppVar_57232 = (0 << 5) | cppVar_57231;
	cppVar_57232 = (cppVar_57232 & cppMask_un_8_);
	bool cppVar_57234 = (cppVar_57232 == 152);
	if (cppVar_57234) {
	cppVar_57229 = SCON;
	} else {
	BIT_VEC cppVar_57235;
	BIT_VEC cppVar_57236 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57237 = (cppVar_57236 << 3) | 7;
	cppVar_57237 = (cppVar_57237 & cppMask_un_5_);
	BIT_VEC cppVar_57238 = (0 << 5) | cppVar_57237;
	cppVar_57238 = (cppVar_57238 & cppMask_un_8_);
	bool cppVar_57240 = (cppVar_57238 == 153);
	if (cppVar_57240) {
	cppVar_57235 = SBUF;
	} else {
	BIT_VEC cppVar_57241;
	BIT_VEC cppVar_57242 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57243 = (cppVar_57242 << 3) | 7;
	cppVar_57243 = (cppVar_57243 & cppMask_un_5_);
	BIT_VEC cppVar_57244 = (0 << 5) | cppVar_57243;
	cppVar_57244 = (cppVar_57244 & cppMask_un_8_);
	bool cppVar_57246 = (cppVar_57244 == 160);
	if (cppVar_57246) {
	cppVar_57241 = P2;
	} else {
	BIT_VEC cppVar_57247;
	BIT_VEC cppVar_57248 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57249 = (cppVar_57248 << 3) | 7;
	cppVar_57249 = (cppVar_57249 & cppMask_un_5_);
	BIT_VEC cppVar_57250 = (0 << 5) | cppVar_57249;
	cppVar_57250 = (cppVar_57250 & cppMask_un_8_);
	bool cppVar_57252 = (cppVar_57250 == 168);
	if (cppVar_57252) {
	cppVar_57247 = IE;
	} else {
	BIT_VEC cppVar_57253;
	BIT_VEC cppVar_57254 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57255 = (cppVar_57254 << 3) | 7;
	cppVar_57255 = (cppVar_57255 & cppMask_un_5_);
	BIT_VEC cppVar_57256 = (0 << 5) | cppVar_57255;
	cppVar_57256 = (cppVar_57256 & cppMask_un_8_);
	bool cppVar_57258 = (cppVar_57256 == 176);
	if (cppVar_57258) {
	cppVar_57253 = P3;
	} else {
	BIT_VEC cppVar_57259;
	BIT_VEC cppVar_57260 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57261 = (cppVar_57260 << 3) | 7;
	cppVar_57261 = (cppVar_57261 & cppMask_un_5_);
	BIT_VEC cppVar_57262 = (0 << 5) | cppVar_57261;
	cppVar_57262 = (cppVar_57262 & cppMask_un_8_);
	bool cppVar_57264 = (cppVar_57262 == 184);
	if (cppVar_57264) {
	cppVar_57259 = IP;
	} else {
	BIT_VEC cppVar_57265;
	BIT_VEC cppVar_57266 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57267 = (cppVar_57266 << 3) | 7;
	cppVar_57267 = (cppVar_57267 & cppMask_un_5_);
	BIT_VEC cppVar_57268 = (0 << 5) | cppVar_57267;
	cppVar_57268 = (cppVar_57268 & cppMask_un_8_);
	bool cppVar_57270 = (cppVar_57268 == 208);
	if (cppVar_57270) {
	cppVar_57265 = PSW;
	} else {
	BIT_VEC cppVar_57271;
	BIT_VEC cppVar_57272 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57273 = (cppVar_57272 << 3) | 7;
	cppVar_57273 = (cppVar_57273 & cppMask_un_5_);
	BIT_VEC cppVar_57274 = (0 << 5) | cppVar_57273;
	cppVar_57274 = (cppVar_57274 & cppMask_un_8_);
	bool cppVar_57276 = (cppVar_57274 == 224);
	if (cppVar_57276) {
	cppVar_57271 = ACC;
	} else {
	BIT_VEC cppVar_57277;
	BIT_VEC cppVar_57278 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57279 = (cppVar_57278 << 3) | 7;
	cppVar_57279 = (cppVar_57279 & cppMask_un_5_);
	BIT_VEC cppVar_57280 = (0 << 5) | cppVar_57279;
	cppVar_57280 = (cppVar_57280 & cppMask_un_8_);
	bool cppVar_57282 = (cppVar_57280 == 240);
	if (cppVar_57282) {
	cppVar_57277 = B;
	} else {
	cppVar_57277 = 0;
	}
	cppVar_57271 = cppVar_57277;
	}
	cppVar_57265 = cppVar_57271;
	}
	cppVar_57259 = cppVar_57265;
	}
	cppVar_57253 = cppVar_57259;
	}
	cppVar_57247 = cppVar_57253;
	}
	cppVar_57241 = cppVar_57247;
	}
	cppVar_57235 = cppVar_57241;
	}
	cppVar_57229 = cppVar_57235;
	}
	cppVar_57223 = cppVar_57229;
	}
	cppVar_57217 = cppVar_57223;
	}
	cppVar_57211 = cppVar_57217;
	}
	cppVar_57205 = cppVar_57211;
	}
	cppVar_57199 = cppVar_57205;
	}
	cppVar_57193 = cppVar_57199;
	}
	cppVar_57187 = cppVar_57193;
	}
	cppVar_57181 = cppVar_57187;
	}
	cppVar_57175 = cppVar_57181;
	}
	cppVar_57169 = cppVar_57175;
	}
	cppVar_57163 = cppVar_57169;
	}
	cppVar_57157 = cppVar_57163;
	}
	cppVar_57144 = cppVar_57157;
	}
	cppVar_57138 = cppVar_57144;
	} else {
	cppVar_57138 = SBUF;
	}
	cppVar_57134 = cppVar_57138;
	} else {
	BIT_VEC cppVar_57284;
	BIT_VEC cppVar_57285 = ROM.rd(PC);
	bool cppVar_57287 = (cppVar_57285 == 142);
	if (cppVar_57287) {
	BIT_VEC cppVar_57288;
	BIT_VEC cppVar_57290 = PC + 1;
	cppVar_57290 = (cppVar_57290 & cppMask_un_16_);
	BIT_VEC cppVar_57291 = ROM.rd(cppVar_57290);
	bool cppVar_57293 = (cppVar_57291 == 153);
	if (cppVar_57293) {
	BIT_VEC cppVar_57294;
	BIT_VEC cppVar_57296 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57298 = (cppVar_57296 << 3) | 6;
	cppVar_57298 = (cppVar_57298 & cppMask_un_5_);
	BIT_VEC cppVar_57299 = (0 << 5) | cppVar_57298;
	cppVar_57299 = (cppVar_57299 & cppMask_un_8_);
	BIT_VEC cppVar_57300 = (cppVar_57299 >> 7) & cppMask_un_1_;
	bool cppVar_57302 = (cppVar_57300 == 0);
	if (cppVar_57302) {
	BIT_VEC cppVar_57303 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57304 = (cppVar_57303 << 3) | 6;
	cppVar_57304 = (cppVar_57304 & cppMask_un_5_);
	BIT_VEC cppVar_57305 = (0 << 5) | cppVar_57304;
	cppVar_57305 = (cppVar_57305 & cppMask_un_8_);
	BIT_VEC cppVar_57306 = IRAM.rd(cppVar_57305);
	cppVar_57294 = cppVar_57306;
	} else {
	BIT_VEC cppVar_57307;
	BIT_VEC cppVar_57308 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57309 = (cppVar_57308 << 3) | 6;
	cppVar_57309 = (cppVar_57309 & cppMask_un_5_);
	BIT_VEC cppVar_57310 = (0 << 5) | cppVar_57309;
	cppVar_57310 = (cppVar_57310 & cppMask_un_8_);
	bool cppVar_57312 = (cppVar_57310 == 128);
	if (cppVar_57312) {
	cppVar_57307 = P0;
	} else {
	BIT_VEC cppVar_57313;
	BIT_VEC cppVar_57314 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57315 = (cppVar_57314 << 3) | 6;
	cppVar_57315 = (cppVar_57315 & cppMask_un_5_);
	BIT_VEC cppVar_57316 = (0 << 5) | cppVar_57315;
	cppVar_57316 = (cppVar_57316 & cppMask_un_8_);
	bool cppVar_57318 = (cppVar_57316 == 129);
	if (cppVar_57318) {
	cppVar_57313 = SP;
	} else {
	BIT_VEC cppVar_57319;
	BIT_VEC cppVar_57320 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57321 = (cppVar_57320 << 3) | 6;
	cppVar_57321 = (cppVar_57321 & cppMask_un_5_);
	BIT_VEC cppVar_57322 = (0 << 5) | cppVar_57321;
	cppVar_57322 = (cppVar_57322 & cppMask_un_8_);
	bool cppVar_57324 = (cppVar_57322 == 130);
	if (cppVar_57324) {
	cppVar_57319 = DPL;
	} else {
	BIT_VEC cppVar_57325;
	BIT_VEC cppVar_57326 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57327 = (cppVar_57326 << 3) | 6;
	cppVar_57327 = (cppVar_57327 & cppMask_un_5_);
	BIT_VEC cppVar_57328 = (0 << 5) | cppVar_57327;
	cppVar_57328 = (cppVar_57328 & cppMask_un_8_);
	bool cppVar_57330 = (cppVar_57328 == 131);
	if (cppVar_57330) {
	cppVar_57325 = DPH;
	} else {
	BIT_VEC cppVar_57331;
	BIT_VEC cppVar_57332 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57333 = (cppVar_57332 << 3) | 6;
	cppVar_57333 = (cppVar_57333 & cppMask_un_5_);
	BIT_VEC cppVar_57334 = (0 << 5) | cppVar_57333;
	cppVar_57334 = (cppVar_57334 & cppMask_un_8_);
	bool cppVar_57336 = (cppVar_57334 == 135);
	if (cppVar_57336) {
	cppVar_57331 = PCON;
	} else {
	BIT_VEC cppVar_57337;
	BIT_VEC cppVar_57338 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57339 = (cppVar_57338 << 3) | 6;
	cppVar_57339 = (cppVar_57339 & cppMask_un_5_);
	BIT_VEC cppVar_57340 = (0 << 5) | cppVar_57339;
	cppVar_57340 = (cppVar_57340 & cppMask_un_8_);
	bool cppVar_57342 = (cppVar_57340 == 136);
	if (cppVar_57342) {
	cppVar_57337 = TCON;
	} else {
	BIT_VEC cppVar_57343;
	BIT_VEC cppVar_57344 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57345 = (cppVar_57344 << 3) | 6;
	cppVar_57345 = (cppVar_57345 & cppMask_un_5_);
	BIT_VEC cppVar_57346 = (0 << 5) | cppVar_57345;
	cppVar_57346 = (cppVar_57346 & cppMask_un_8_);
	bool cppVar_57348 = (cppVar_57346 == 137);
	if (cppVar_57348) {
	cppVar_57343 = TMOD;
	} else {
	BIT_VEC cppVar_57349;
	BIT_VEC cppVar_57350 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57351 = (cppVar_57350 << 3) | 6;
	cppVar_57351 = (cppVar_57351 & cppMask_un_5_);
	BIT_VEC cppVar_57352 = (0 << 5) | cppVar_57351;
	cppVar_57352 = (cppVar_57352 & cppMask_un_8_);
	bool cppVar_57354 = (cppVar_57352 == 138);
	if (cppVar_57354) {
	cppVar_57349 = TL0;
	} else {
	BIT_VEC cppVar_57355;
	BIT_VEC cppVar_57356 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57357 = (cppVar_57356 << 3) | 6;
	cppVar_57357 = (cppVar_57357 & cppMask_un_5_);
	BIT_VEC cppVar_57358 = (0 << 5) | cppVar_57357;
	cppVar_57358 = (cppVar_57358 & cppMask_un_8_);
	bool cppVar_57360 = (cppVar_57358 == 140);
	if (cppVar_57360) {
	cppVar_57355 = TH0;
	} else {
	BIT_VEC cppVar_57361;
	BIT_VEC cppVar_57362 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57363 = (cppVar_57362 << 3) | 6;
	cppVar_57363 = (cppVar_57363 & cppMask_un_5_);
	BIT_VEC cppVar_57364 = (0 << 5) | cppVar_57363;
	cppVar_57364 = (cppVar_57364 & cppMask_un_8_);
	bool cppVar_57366 = (cppVar_57364 == 139);
	if (cppVar_57366) {
	cppVar_57361 = TL1;
	} else {
	BIT_VEC cppVar_57367;
	BIT_VEC cppVar_57368 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57369 = (cppVar_57368 << 3) | 6;
	cppVar_57369 = (cppVar_57369 & cppMask_un_5_);
	BIT_VEC cppVar_57370 = (0 << 5) | cppVar_57369;
	cppVar_57370 = (cppVar_57370 & cppMask_un_8_);
	bool cppVar_57372 = (cppVar_57370 == 141);
	if (cppVar_57372) {
	cppVar_57367 = TH1;
	} else {
	BIT_VEC cppVar_57373;
	BIT_VEC cppVar_57374 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57375 = (cppVar_57374 << 3) | 6;
	cppVar_57375 = (cppVar_57375 & cppMask_un_5_);
	BIT_VEC cppVar_57376 = (0 << 5) | cppVar_57375;
	cppVar_57376 = (cppVar_57376 & cppMask_un_8_);
	bool cppVar_57378 = (cppVar_57376 == 144);
	if (cppVar_57378) {
	cppVar_57373 = P1;
	} else {
	BIT_VEC cppVar_57379;
	BIT_VEC cppVar_57380 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57381 = (cppVar_57380 << 3) | 6;
	cppVar_57381 = (cppVar_57381 & cppMask_un_5_);
	BIT_VEC cppVar_57382 = (0 << 5) | cppVar_57381;
	cppVar_57382 = (cppVar_57382 & cppMask_un_8_);
	bool cppVar_57384 = (cppVar_57382 == 152);
	if (cppVar_57384) {
	cppVar_57379 = SCON;
	} else {
	BIT_VEC cppVar_57385;
	BIT_VEC cppVar_57386 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57387 = (cppVar_57386 << 3) | 6;
	cppVar_57387 = (cppVar_57387 & cppMask_un_5_);
	BIT_VEC cppVar_57388 = (0 << 5) | cppVar_57387;
	cppVar_57388 = (cppVar_57388 & cppMask_un_8_);
	bool cppVar_57390 = (cppVar_57388 == 153);
	if (cppVar_57390) {
	cppVar_57385 = SBUF;
	} else {
	BIT_VEC cppVar_57391;
	BIT_VEC cppVar_57392 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57393 = (cppVar_57392 << 3) | 6;
	cppVar_57393 = (cppVar_57393 & cppMask_un_5_);
	BIT_VEC cppVar_57394 = (0 << 5) | cppVar_57393;
	cppVar_57394 = (cppVar_57394 & cppMask_un_8_);
	bool cppVar_57396 = (cppVar_57394 == 160);
	if (cppVar_57396) {
	cppVar_57391 = P2;
	} else {
	BIT_VEC cppVar_57397;
	BIT_VEC cppVar_57398 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57399 = (cppVar_57398 << 3) | 6;
	cppVar_57399 = (cppVar_57399 & cppMask_un_5_);
	BIT_VEC cppVar_57400 = (0 << 5) | cppVar_57399;
	cppVar_57400 = (cppVar_57400 & cppMask_un_8_);
	bool cppVar_57402 = (cppVar_57400 == 168);
	if (cppVar_57402) {
	cppVar_57397 = IE;
	} else {
	BIT_VEC cppVar_57403;
	BIT_VEC cppVar_57404 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57405 = (cppVar_57404 << 3) | 6;
	cppVar_57405 = (cppVar_57405 & cppMask_un_5_);
	BIT_VEC cppVar_57406 = (0 << 5) | cppVar_57405;
	cppVar_57406 = (cppVar_57406 & cppMask_un_8_);
	bool cppVar_57408 = (cppVar_57406 == 176);
	if (cppVar_57408) {
	cppVar_57403 = P3;
	} else {
	BIT_VEC cppVar_57409;
	BIT_VEC cppVar_57410 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57411 = (cppVar_57410 << 3) | 6;
	cppVar_57411 = (cppVar_57411 & cppMask_un_5_);
	BIT_VEC cppVar_57412 = (0 << 5) | cppVar_57411;
	cppVar_57412 = (cppVar_57412 & cppMask_un_8_);
	bool cppVar_57414 = (cppVar_57412 == 184);
	if (cppVar_57414) {
	cppVar_57409 = IP;
	} else {
	BIT_VEC cppVar_57415;
	BIT_VEC cppVar_57416 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57417 = (cppVar_57416 << 3) | 6;
	cppVar_57417 = (cppVar_57417 & cppMask_un_5_);
	BIT_VEC cppVar_57418 = (0 << 5) | cppVar_57417;
	cppVar_57418 = (cppVar_57418 & cppMask_un_8_);
	bool cppVar_57420 = (cppVar_57418 == 208);
	if (cppVar_57420) {
	cppVar_57415 = PSW;
	} else {
	BIT_VEC cppVar_57421;
	BIT_VEC cppVar_57422 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57423 = (cppVar_57422 << 3) | 6;
	cppVar_57423 = (cppVar_57423 & cppMask_un_5_);
	BIT_VEC cppVar_57424 = (0 << 5) | cppVar_57423;
	cppVar_57424 = (cppVar_57424 & cppMask_un_8_);
	bool cppVar_57426 = (cppVar_57424 == 224);
	if (cppVar_57426) {
	cppVar_57421 = ACC;
	} else {
	BIT_VEC cppVar_57427;
	BIT_VEC cppVar_57428 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57429 = (cppVar_57428 << 3) | 6;
	cppVar_57429 = (cppVar_57429 & cppMask_un_5_);
	BIT_VEC cppVar_57430 = (0 << 5) | cppVar_57429;
	cppVar_57430 = (cppVar_57430 & cppMask_un_8_);
	bool cppVar_57432 = (cppVar_57430 == 240);
	if (cppVar_57432) {
	cppVar_57427 = B;
	} else {
	cppVar_57427 = 0;
	}
	cppVar_57421 = cppVar_57427;
	}
	cppVar_57415 = cppVar_57421;
	}
	cppVar_57409 = cppVar_57415;
	}
	cppVar_57403 = cppVar_57409;
	}
	cppVar_57397 = cppVar_57403;
	}
	cppVar_57391 = cppVar_57397;
	}
	cppVar_57385 = cppVar_57391;
	}
	cppVar_57379 = cppVar_57385;
	}
	cppVar_57373 = cppVar_57379;
	}
	cppVar_57367 = cppVar_57373;
	}
	cppVar_57361 = cppVar_57367;
	}
	cppVar_57355 = cppVar_57361;
	}
	cppVar_57349 = cppVar_57355;
	}
	cppVar_57343 = cppVar_57349;
	}
	cppVar_57337 = cppVar_57343;
	}
	cppVar_57331 = cppVar_57337;
	}
	cppVar_57325 = cppVar_57331;
	}
	cppVar_57319 = cppVar_57325;
	}
	cppVar_57313 = cppVar_57319;
	}
	cppVar_57307 = cppVar_57313;
	}
	cppVar_57294 = cppVar_57307;
	}
	cppVar_57288 = cppVar_57294;
	} else {
	cppVar_57288 = SBUF;
	}
	cppVar_57284 = cppVar_57288;
	} else {
	BIT_VEC cppVar_57434;
	BIT_VEC cppVar_57435 = ROM.rd(PC);
	bool cppVar_57437 = (cppVar_57435 == 141);
	if (cppVar_57437) {
	BIT_VEC cppVar_57438;
	BIT_VEC cppVar_57440 = PC + 1;
	cppVar_57440 = (cppVar_57440 & cppMask_un_16_);
	BIT_VEC cppVar_57441 = ROM.rd(cppVar_57440);
	bool cppVar_57443 = (cppVar_57441 == 153);
	if (cppVar_57443) {
	BIT_VEC cppVar_57444;
	BIT_VEC cppVar_57446 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57448 = (cppVar_57446 << 3) | 5;
	cppVar_57448 = (cppVar_57448 & cppMask_un_5_);
	BIT_VEC cppVar_57449 = (0 << 5) | cppVar_57448;
	cppVar_57449 = (cppVar_57449 & cppMask_un_8_);
	BIT_VEC cppVar_57450 = (cppVar_57449 >> 7) & cppMask_un_1_;
	bool cppVar_57452 = (cppVar_57450 == 0);
	if (cppVar_57452) {
	BIT_VEC cppVar_57453 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57454 = (cppVar_57453 << 3) | 5;
	cppVar_57454 = (cppVar_57454 & cppMask_un_5_);
	BIT_VEC cppVar_57455 = (0 << 5) | cppVar_57454;
	cppVar_57455 = (cppVar_57455 & cppMask_un_8_);
	BIT_VEC cppVar_57456 = IRAM.rd(cppVar_57455);
	cppVar_57444 = cppVar_57456;
	} else {
	BIT_VEC cppVar_57457;
	BIT_VEC cppVar_57458 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57459 = (cppVar_57458 << 3) | 5;
	cppVar_57459 = (cppVar_57459 & cppMask_un_5_);
	BIT_VEC cppVar_57460 = (0 << 5) | cppVar_57459;
	cppVar_57460 = (cppVar_57460 & cppMask_un_8_);
	bool cppVar_57462 = (cppVar_57460 == 128);
	if (cppVar_57462) {
	cppVar_57457 = P0;
	} else {
	BIT_VEC cppVar_57463;
	BIT_VEC cppVar_57464 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57465 = (cppVar_57464 << 3) | 5;
	cppVar_57465 = (cppVar_57465 & cppMask_un_5_);
	BIT_VEC cppVar_57466 = (0 << 5) | cppVar_57465;
	cppVar_57466 = (cppVar_57466 & cppMask_un_8_);
	bool cppVar_57468 = (cppVar_57466 == 129);
	if (cppVar_57468) {
	cppVar_57463 = SP;
	} else {
	BIT_VEC cppVar_57469;
	BIT_VEC cppVar_57470 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57471 = (cppVar_57470 << 3) | 5;
	cppVar_57471 = (cppVar_57471 & cppMask_un_5_);
	BIT_VEC cppVar_57472 = (0 << 5) | cppVar_57471;
	cppVar_57472 = (cppVar_57472 & cppMask_un_8_);
	bool cppVar_57474 = (cppVar_57472 == 130);
	if (cppVar_57474) {
	cppVar_57469 = DPL;
	} else {
	BIT_VEC cppVar_57475;
	BIT_VEC cppVar_57476 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57477 = (cppVar_57476 << 3) | 5;
	cppVar_57477 = (cppVar_57477 & cppMask_un_5_);
	BIT_VEC cppVar_57478 = (0 << 5) | cppVar_57477;
	cppVar_57478 = (cppVar_57478 & cppMask_un_8_);
	bool cppVar_57480 = (cppVar_57478 == 131);
	if (cppVar_57480) {
	cppVar_57475 = DPH;
	} else {
	BIT_VEC cppVar_57481;
	BIT_VEC cppVar_57482 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57483 = (cppVar_57482 << 3) | 5;
	cppVar_57483 = (cppVar_57483 & cppMask_un_5_);
	BIT_VEC cppVar_57484 = (0 << 5) | cppVar_57483;
	cppVar_57484 = (cppVar_57484 & cppMask_un_8_);
	bool cppVar_57486 = (cppVar_57484 == 135);
	if (cppVar_57486) {
	cppVar_57481 = PCON;
	} else {
	BIT_VEC cppVar_57487;
	BIT_VEC cppVar_57488 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57489 = (cppVar_57488 << 3) | 5;
	cppVar_57489 = (cppVar_57489 & cppMask_un_5_);
	BIT_VEC cppVar_57490 = (0 << 5) | cppVar_57489;
	cppVar_57490 = (cppVar_57490 & cppMask_un_8_);
	bool cppVar_57492 = (cppVar_57490 == 136);
	if (cppVar_57492) {
	cppVar_57487 = TCON;
	} else {
	BIT_VEC cppVar_57493;
	BIT_VEC cppVar_57494 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57495 = (cppVar_57494 << 3) | 5;
	cppVar_57495 = (cppVar_57495 & cppMask_un_5_);
	BIT_VEC cppVar_57496 = (0 << 5) | cppVar_57495;
	cppVar_57496 = (cppVar_57496 & cppMask_un_8_);
	bool cppVar_57498 = (cppVar_57496 == 137);
	if (cppVar_57498) {
	cppVar_57493 = TMOD;
	} else {
	BIT_VEC cppVar_57499;
	BIT_VEC cppVar_57500 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57501 = (cppVar_57500 << 3) | 5;
	cppVar_57501 = (cppVar_57501 & cppMask_un_5_);
	BIT_VEC cppVar_57502 = (0 << 5) | cppVar_57501;
	cppVar_57502 = (cppVar_57502 & cppMask_un_8_);
	bool cppVar_57504 = (cppVar_57502 == 138);
	if (cppVar_57504) {
	cppVar_57499 = TL0;
	} else {
	BIT_VEC cppVar_57505;
	BIT_VEC cppVar_57506 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57507 = (cppVar_57506 << 3) | 5;
	cppVar_57507 = (cppVar_57507 & cppMask_un_5_);
	BIT_VEC cppVar_57508 = (0 << 5) | cppVar_57507;
	cppVar_57508 = (cppVar_57508 & cppMask_un_8_);
	bool cppVar_57510 = (cppVar_57508 == 140);
	if (cppVar_57510) {
	cppVar_57505 = TH0;
	} else {
	BIT_VEC cppVar_57511;
	BIT_VEC cppVar_57512 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57513 = (cppVar_57512 << 3) | 5;
	cppVar_57513 = (cppVar_57513 & cppMask_un_5_);
	BIT_VEC cppVar_57514 = (0 << 5) | cppVar_57513;
	cppVar_57514 = (cppVar_57514 & cppMask_un_8_);
	bool cppVar_57516 = (cppVar_57514 == 139);
	if (cppVar_57516) {
	cppVar_57511 = TL1;
	} else {
	BIT_VEC cppVar_57517;
	BIT_VEC cppVar_57518 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57519 = (cppVar_57518 << 3) | 5;
	cppVar_57519 = (cppVar_57519 & cppMask_un_5_);
	BIT_VEC cppVar_57520 = (0 << 5) | cppVar_57519;
	cppVar_57520 = (cppVar_57520 & cppMask_un_8_);
	bool cppVar_57522 = (cppVar_57520 == 141);
	if (cppVar_57522) {
	cppVar_57517 = TH1;
	} else {
	BIT_VEC cppVar_57523;
	BIT_VEC cppVar_57524 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57525 = (cppVar_57524 << 3) | 5;
	cppVar_57525 = (cppVar_57525 & cppMask_un_5_);
	BIT_VEC cppVar_57526 = (0 << 5) | cppVar_57525;
	cppVar_57526 = (cppVar_57526 & cppMask_un_8_);
	bool cppVar_57528 = (cppVar_57526 == 144);
	if (cppVar_57528) {
	cppVar_57523 = P1;
	} else {
	BIT_VEC cppVar_57529;
	BIT_VEC cppVar_57530 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57531 = (cppVar_57530 << 3) | 5;
	cppVar_57531 = (cppVar_57531 & cppMask_un_5_);
	BIT_VEC cppVar_57532 = (0 << 5) | cppVar_57531;
	cppVar_57532 = (cppVar_57532 & cppMask_un_8_);
	bool cppVar_57534 = (cppVar_57532 == 152);
	if (cppVar_57534) {
	cppVar_57529 = SCON;
	} else {
	BIT_VEC cppVar_57535;
	BIT_VEC cppVar_57536 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57537 = (cppVar_57536 << 3) | 5;
	cppVar_57537 = (cppVar_57537 & cppMask_un_5_);
	BIT_VEC cppVar_57538 = (0 << 5) | cppVar_57537;
	cppVar_57538 = (cppVar_57538 & cppMask_un_8_);
	bool cppVar_57540 = (cppVar_57538 == 153);
	if (cppVar_57540) {
	cppVar_57535 = SBUF;
	} else {
	BIT_VEC cppVar_57541;
	BIT_VEC cppVar_57542 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57543 = (cppVar_57542 << 3) | 5;
	cppVar_57543 = (cppVar_57543 & cppMask_un_5_);
	BIT_VEC cppVar_57544 = (0 << 5) | cppVar_57543;
	cppVar_57544 = (cppVar_57544 & cppMask_un_8_);
	bool cppVar_57546 = (cppVar_57544 == 160);
	if (cppVar_57546) {
	cppVar_57541 = P2;
	} else {
	BIT_VEC cppVar_57547;
	BIT_VEC cppVar_57548 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57549 = (cppVar_57548 << 3) | 5;
	cppVar_57549 = (cppVar_57549 & cppMask_un_5_);
	BIT_VEC cppVar_57550 = (0 << 5) | cppVar_57549;
	cppVar_57550 = (cppVar_57550 & cppMask_un_8_);
	bool cppVar_57552 = (cppVar_57550 == 168);
	if (cppVar_57552) {
	cppVar_57547 = IE;
	} else {
	BIT_VEC cppVar_57553;
	BIT_VEC cppVar_57554 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57555 = (cppVar_57554 << 3) | 5;
	cppVar_57555 = (cppVar_57555 & cppMask_un_5_);
	BIT_VEC cppVar_57556 = (0 << 5) | cppVar_57555;
	cppVar_57556 = (cppVar_57556 & cppMask_un_8_);
	bool cppVar_57558 = (cppVar_57556 == 176);
	if (cppVar_57558) {
	cppVar_57553 = P3;
	} else {
	BIT_VEC cppVar_57559;
	BIT_VEC cppVar_57560 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57561 = (cppVar_57560 << 3) | 5;
	cppVar_57561 = (cppVar_57561 & cppMask_un_5_);
	BIT_VEC cppVar_57562 = (0 << 5) | cppVar_57561;
	cppVar_57562 = (cppVar_57562 & cppMask_un_8_);
	bool cppVar_57564 = (cppVar_57562 == 184);
	if (cppVar_57564) {
	cppVar_57559 = IP;
	} else {
	BIT_VEC cppVar_57565;
	BIT_VEC cppVar_57566 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57567 = (cppVar_57566 << 3) | 5;
	cppVar_57567 = (cppVar_57567 & cppMask_un_5_);
	BIT_VEC cppVar_57568 = (0 << 5) | cppVar_57567;
	cppVar_57568 = (cppVar_57568 & cppMask_un_8_);
	bool cppVar_57570 = (cppVar_57568 == 208);
	if (cppVar_57570) {
	cppVar_57565 = PSW;
	} else {
	BIT_VEC cppVar_57571;
	BIT_VEC cppVar_57572 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57573 = (cppVar_57572 << 3) | 5;
	cppVar_57573 = (cppVar_57573 & cppMask_un_5_);
	BIT_VEC cppVar_57574 = (0 << 5) | cppVar_57573;
	cppVar_57574 = (cppVar_57574 & cppMask_un_8_);
	bool cppVar_57576 = (cppVar_57574 == 224);
	if (cppVar_57576) {
	cppVar_57571 = ACC;
	} else {
	BIT_VEC cppVar_57577;
	BIT_VEC cppVar_57578 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57579 = (cppVar_57578 << 3) | 5;
	cppVar_57579 = (cppVar_57579 & cppMask_un_5_);
	BIT_VEC cppVar_57580 = (0 << 5) | cppVar_57579;
	cppVar_57580 = (cppVar_57580 & cppMask_un_8_);
	bool cppVar_57582 = (cppVar_57580 == 240);
	if (cppVar_57582) {
	cppVar_57577 = B;
	} else {
	cppVar_57577 = 0;
	}
	cppVar_57571 = cppVar_57577;
	}
	cppVar_57565 = cppVar_57571;
	}
	cppVar_57559 = cppVar_57565;
	}
	cppVar_57553 = cppVar_57559;
	}
	cppVar_57547 = cppVar_57553;
	}
	cppVar_57541 = cppVar_57547;
	}
	cppVar_57535 = cppVar_57541;
	}
	cppVar_57529 = cppVar_57535;
	}
	cppVar_57523 = cppVar_57529;
	}
	cppVar_57517 = cppVar_57523;
	}
	cppVar_57511 = cppVar_57517;
	}
	cppVar_57505 = cppVar_57511;
	}
	cppVar_57499 = cppVar_57505;
	}
	cppVar_57493 = cppVar_57499;
	}
	cppVar_57487 = cppVar_57493;
	}
	cppVar_57481 = cppVar_57487;
	}
	cppVar_57475 = cppVar_57481;
	}
	cppVar_57469 = cppVar_57475;
	}
	cppVar_57463 = cppVar_57469;
	}
	cppVar_57457 = cppVar_57463;
	}
	cppVar_57444 = cppVar_57457;
	}
	cppVar_57438 = cppVar_57444;
	} else {
	cppVar_57438 = SBUF;
	}
	cppVar_57434 = cppVar_57438;
	} else {
	BIT_VEC cppVar_57584;
	BIT_VEC cppVar_57585 = ROM.rd(PC);
	bool cppVar_57587 = (cppVar_57585 == 140);
	if (cppVar_57587) {
	BIT_VEC cppVar_57588;
	BIT_VEC cppVar_57590 = PC + 1;
	cppVar_57590 = (cppVar_57590 & cppMask_un_16_);
	BIT_VEC cppVar_57591 = ROM.rd(cppVar_57590);
	bool cppVar_57593 = (cppVar_57591 == 153);
	if (cppVar_57593) {
	BIT_VEC cppVar_57594;
	BIT_VEC cppVar_57596 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57598 = (cppVar_57596 << 3) | 4;
	cppVar_57598 = (cppVar_57598 & cppMask_un_5_);
	BIT_VEC cppVar_57599 = (0 << 5) | cppVar_57598;
	cppVar_57599 = (cppVar_57599 & cppMask_un_8_);
	BIT_VEC cppVar_57600 = (cppVar_57599 >> 7) & cppMask_un_1_;
	bool cppVar_57602 = (cppVar_57600 == 0);
	if (cppVar_57602) {
	BIT_VEC cppVar_57603 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57604 = (cppVar_57603 << 3) | 4;
	cppVar_57604 = (cppVar_57604 & cppMask_un_5_);
	BIT_VEC cppVar_57605 = (0 << 5) | cppVar_57604;
	cppVar_57605 = (cppVar_57605 & cppMask_un_8_);
	BIT_VEC cppVar_57606 = IRAM.rd(cppVar_57605);
	cppVar_57594 = cppVar_57606;
	} else {
	BIT_VEC cppVar_57607;
	BIT_VEC cppVar_57608 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57609 = (cppVar_57608 << 3) | 4;
	cppVar_57609 = (cppVar_57609 & cppMask_un_5_);
	BIT_VEC cppVar_57610 = (0 << 5) | cppVar_57609;
	cppVar_57610 = (cppVar_57610 & cppMask_un_8_);
	bool cppVar_57612 = (cppVar_57610 == 128);
	if (cppVar_57612) {
	cppVar_57607 = P0;
	} else {
	BIT_VEC cppVar_57613;
	BIT_VEC cppVar_57614 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57615 = (cppVar_57614 << 3) | 4;
	cppVar_57615 = (cppVar_57615 & cppMask_un_5_);
	BIT_VEC cppVar_57616 = (0 << 5) | cppVar_57615;
	cppVar_57616 = (cppVar_57616 & cppMask_un_8_);
	bool cppVar_57618 = (cppVar_57616 == 129);
	if (cppVar_57618) {
	cppVar_57613 = SP;
	} else {
	BIT_VEC cppVar_57619;
	BIT_VEC cppVar_57620 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57621 = (cppVar_57620 << 3) | 4;
	cppVar_57621 = (cppVar_57621 & cppMask_un_5_);
	BIT_VEC cppVar_57622 = (0 << 5) | cppVar_57621;
	cppVar_57622 = (cppVar_57622 & cppMask_un_8_);
	bool cppVar_57624 = (cppVar_57622 == 130);
	if (cppVar_57624) {
	cppVar_57619 = DPL;
	} else {
	BIT_VEC cppVar_57625;
	BIT_VEC cppVar_57626 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57627 = (cppVar_57626 << 3) | 4;
	cppVar_57627 = (cppVar_57627 & cppMask_un_5_);
	BIT_VEC cppVar_57628 = (0 << 5) | cppVar_57627;
	cppVar_57628 = (cppVar_57628 & cppMask_un_8_);
	bool cppVar_57630 = (cppVar_57628 == 131);
	if (cppVar_57630) {
	cppVar_57625 = DPH;
	} else {
	BIT_VEC cppVar_57631;
	BIT_VEC cppVar_57632 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57633 = (cppVar_57632 << 3) | 4;
	cppVar_57633 = (cppVar_57633 & cppMask_un_5_);
	BIT_VEC cppVar_57634 = (0 << 5) | cppVar_57633;
	cppVar_57634 = (cppVar_57634 & cppMask_un_8_);
	bool cppVar_57636 = (cppVar_57634 == 135);
	if (cppVar_57636) {
	cppVar_57631 = PCON;
	} else {
	BIT_VEC cppVar_57637;
	BIT_VEC cppVar_57638 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57639 = (cppVar_57638 << 3) | 4;
	cppVar_57639 = (cppVar_57639 & cppMask_un_5_);
	BIT_VEC cppVar_57640 = (0 << 5) | cppVar_57639;
	cppVar_57640 = (cppVar_57640 & cppMask_un_8_);
	bool cppVar_57642 = (cppVar_57640 == 136);
	if (cppVar_57642) {
	cppVar_57637 = TCON;
	} else {
	BIT_VEC cppVar_57643;
	BIT_VEC cppVar_57644 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57645 = (cppVar_57644 << 3) | 4;
	cppVar_57645 = (cppVar_57645 & cppMask_un_5_);
	BIT_VEC cppVar_57646 = (0 << 5) | cppVar_57645;
	cppVar_57646 = (cppVar_57646 & cppMask_un_8_);
	bool cppVar_57648 = (cppVar_57646 == 137);
	if (cppVar_57648) {
	cppVar_57643 = TMOD;
	} else {
	BIT_VEC cppVar_57649;
	BIT_VEC cppVar_57650 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57651 = (cppVar_57650 << 3) | 4;
	cppVar_57651 = (cppVar_57651 & cppMask_un_5_);
	BIT_VEC cppVar_57652 = (0 << 5) | cppVar_57651;
	cppVar_57652 = (cppVar_57652 & cppMask_un_8_);
	bool cppVar_57654 = (cppVar_57652 == 138);
	if (cppVar_57654) {
	cppVar_57649 = TL0;
	} else {
	BIT_VEC cppVar_57655;
	BIT_VEC cppVar_57656 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57657 = (cppVar_57656 << 3) | 4;
	cppVar_57657 = (cppVar_57657 & cppMask_un_5_);
	BIT_VEC cppVar_57658 = (0 << 5) | cppVar_57657;
	cppVar_57658 = (cppVar_57658 & cppMask_un_8_);
	bool cppVar_57660 = (cppVar_57658 == 140);
	if (cppVar_57660) {
	cppVar_57655 = TH0;
	} else {
	BIT_VEC cppVar_57661;
	BIT_VEC cppVar_57662 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57663 = (cppVar_57662 << 3) | 4;
	cppVar_57663 = (cppVar_57663 & cppMask_un_5_);
	BIT_VEC cppVar_57664 = (0 << 5) | cppVar_57663;
	cppVar_57664 = (cppVar_57664 & cppMask_un_8_);
	bool cppVar_57666 = (cppVar_57664 == 139);
	if (cppVar_57666) {
	cppVar_57661 = TL1;
	} else {
	BIT_VEC cppVar_57667;
	BIT_VEC cppVar_57668 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57669 = (cppVar_57668 << 3) | 4;
	cppVar_57669 = (cppVar_57669 & cppMask_un_5_);
	BIT_VEC cppVar_57670 = (0 << 5) | cppVar_57669;
	cppVar_57670 = (cppVar_57670 & cppMask_un_8_);
	bool cppVar_57672 = (cppVar_57670 == 141);
	if (cppVar_57672) {
	cppVar_57667 = TH1;
	} else {
	BIT_VEC cppVar_57673;
	BIT_VEC cppVar_57674 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57675 = (cppVar_57674 << 3) | 4;
	cppVar_57675 = (cppVar_57675 & cppMask_un_5_);
	BIT_VEC cppVar_57676 = (0 << 5) | cppVar_57675;
	cppVar_57676 = (cppVar_57676 & cppMask_un_8_);
	bool cppVar_57678 = (cppVar_57676 == 144);
	if (cppVar_57678) {
	cppVar_57673 = P1;
	} else {
	BIT_VEC cppVar_57679;
	BIT_VEC cppVar_57680 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57681 = (cppVar_57680 << 3) | 4;
	cppVar_57681 = (cppVar_57681 & cppMask_un_5_);
	BIT_VEC cppVar_57682 = (0 << 5) | cppVar_57681;
	cppVar_57682 = (cppVar_57682 & cppMask_un_8_);
	bool cppVar_57684 = (cppVar_57682 == 152);
	if (cppVar_57684) {
	cppVar_57679 = SCON;
	} else {
	BIT_VEC cppVar_57685;
	BIT_VEC cppVar_57686 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57687 = (cppVar_57686 << 3) | 4;
	cppVar_57687 = (cppVar_57687 & cppMask_un_5_);
	BIT_VEC cppVar_57688 = (0 << 5) | cppVar_57687;
	cppVar_57688 = (cppVar_57688 & cppMask_un_8_);
	bool cppVar_57690 = (cppVar_57688 == 153);
	if (cppVar_57690) {
	cppVar_57685 = SBUF;
	} else {
	BIT_VEC cppVar_57691;
	BIT_VEC cppVar_57692 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57693 = (cppVar_57692 << 3) | 4;
	cppVar_57693 = (cppVar_57693 & cppMask_un_5_);
	BIT_VEC cppVar_57694 = (0 << 5) | cppVar_57693;
	cppVar_57694 = (cppVar_57694 & cppMask_un_8_);
	bool cppVar_57696 = (cppVar_57694 == 160);
	if (cppVar_57696) {
	cppVar_57691 = P2;
	} else {
	BIT_VEC cppVar_57697;
	BIT_VEC cppVar_57698 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57699 = (cppVar_57698 << 3) | 4;
	cppVar_57699 = (cppVar_57699 & cppMask_un_5_);
	BIT_VEC cppVar_57700 = (0 << 5) | cppVar_57699;
	cppVar_57700 = (cppVar_57700 & cppMask_un_8_);
	bool cppVar_57702 = (cppVar_57700 == 168);
	if (cppVar_57702) {
	cppVar_57697 = IE;
	} else {
	BIT_VEC cppVar_57703;
	BIT_VEC cppVar_57704 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57705 = (cppVar_57704 << 3) | 4;
	cppVar_57705 = (cppVar_57705 & cppMask_un_5_);
	BIT_VEC cppVar_57706 = (0 << 5) | cppVar_57705;
	cppVar_57706 = (cppVar_57706 & cppMask_un_8_);
	bool cppVar_57708 = (cppVar_57706 == 176);
	if (cppVar_57708) {
	cppVar_57703 = P3;
	} else {
	BIT_VEC cppVar_57709;
	BIT_VEC cppVar_57710 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57711 = (cppVar_57710 << 3) | 4;
	cppVar_57711 = (cppVar_57711 & cppMask_un_5_);
	BIT_VEC cppVar_57712 = (0 << 5) | cppVar_57711;
	cppVar_57712 = (cppVar_57712 & cppMask_un_8_);
	bool cppVar_57714 = (cppVar_57712 == 184);
	if (cppVar_57714) {
	cppVar_57709 = IP;
	} else {
	BIT_VEC cppVar_57715;
	BIT_VEC cppVar_57716 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57717 = (cppVar_57716 << 3) | 4;
	cppVar_57717 = (cppVar_57717 & cppMask_un_5_);
	BIT_VEC cppVar_57718 = (0 << 5) | cppVar_57717;
	cppVar_57718 = (cppVar_57718 & cppMask_un_8_);
	bool cppVar_57720 = (cppVar_57718 == 208);
	if (cppVar_57720) {
	cppVar_57715 = PSW;
	} else {
	BIT_VEC cppVar_57721;
	BIT_VEC cppVar_57722 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57723 = (cppVar_57722 << 3) | 4;
	cppVar_57723 = (cppVar_57723 & cppMask_un_5_);
	BIT_VEC cppVar_57724 = (0 << 5) | cppVar_57723;
	cppVar_57724 = (cppVar_57724 & cppMask_un_8_);
	bool cppVar_57726 = (cppVar_57724 == 224);
	if (cppVar_57726) {
	cppVar_57721 = ACC;
	} else {
	BIT_VEC cppVar_57727;
	BIT_VEC cppVar_57728 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57729 = (cppVar_57728 << 3) | 4;
	cppVar_57729 = (cppVar_57729 & cppMask_un_5_);
	BIT_VEC cppVar_57730 = (0 << 5) | cppVar_57729;
	cppVar_57730 = (cppVar_57730 & cppMask_un_8_);
	bool cppVar_57732 = (cppVar_57730 == 240);
	if (cppVar_57732) {
	cppVar_57727 = B;
	} else {
	cppVar_57727 = 0;
	}
	cppVar_57721 = cppVar_57727;
	}
	cppVar_57715 = cppVar_57721;
	}
	cppVar_57709 = cppVar_57715;
	}
	cppVar_57703 = cppVar_57709;
	}
	cppVar_57697 = cppVar_57703;
	}
	cppVar_57691 = cppVar_57697;
	}
	cppVar_57685 = cppVar_57691;
	}
	cppVar_57679 = cppVar_57685;
	}
	cppVar_57673 = cppVar_57679;
	}
	cppVar_57667 = cppVar_57673;
	}
	cppVar_57661 = cppVar_57667;
	}
	cppVar_57655 = cppVar_57661;
	}
	cppVar_57649 = cppVar_57655;
	}
	cppVar_57643 = cppVar_57649;
	}
	cppVar_57637 = cppVar_57643;
	}
	cppVar_57631 = cppVar_57637;
	}
	cppVar_57625 = cppVar_57631;
	}
	cppVar_57619 = cppVar_57625;
	}
	cppVar_57613 = cppVar_57619;
	}
	cppVar_57607 = cppVar_57613;
	}
	cppVar_57594 = cppVar_57607;
	}
	cppVar_57588 = cppVar_57594;
	} else {
	cppVar_57588 = SBUF;
	}
	cppVar_57584 = cppVar_57588;
	} else {
	BIT_VEC cppVar_57734;
	BIT_VEC cppVar_57735 = ROM.rd(PC);
	bool cppVar_57737 = (cppVar_57735 == 139);
	if (cppVar_57737) {
	BIT_VEC cppVar_57738;
	BIT_VEC cppVar_57740 = PC + 1;
	cppVar_57740 = (cppVar_57740 & cppMask_un_16_);
	BIT_VEC cppVar_57741 = ROM.rd(cppVar_57740);
	bool cppVar_57743 = (cppVar_57741 == 153);
	if (cppVar_57743) {
	BIT_VEC cppVar_57744;
	BIT_VEC cppVar_57746 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57748 = (cppVar_57746 << 3) | 3;
	cppVar_57748 = (cppVar_57748 & cppMask_un_5_);
	BIT_VEC cppVar_57749 = (0 << 5) | cppVar_57748;
	cppVar_57749 = (cppVar_57749 & cppMask_un_8_);
	BIT_VEC cppVar_57750 = (cppVar_57749 >> 7) & cppMask_un_1_;
	bool cppVar_57752 = (cppVar_57750 == 0);
	if (cppVar_57752) {
	BIT_VEC cppVar_57753 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57754 = (cppVar_57753 << 3) | 3;
	cppVar_57754 = (cppVar_57754 & cppMask_un_5_);
	BIT_VEC cppVar_57755 = (0 << 5) | cppVar_57754;
	cppVar_57755 = (cppVar_57755 & cppMask_un_8_);
	BIT_VEC cppVar_57756 = IRAM.rd(cppVar_57755);
	cppVar_57744 = cppVar_57756;
	} else {
	BIT_VEC cppVar_57757;
	BIT_VEC cppVar_57758 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57759 = (cppVar_57758 << 3) | 3;
	cppVar_57759 = (cppVar_57759 & cppMask_un_5_);
	BIT_VEC cppVar_57760 = (0 << 5) | cppVar_57759;
	cppVar_57760 = (cppVar_57760 & cppMask_un_8_);
	bool cppVar_57762 = (cppVar_57760 == 128);
	if (cppVar_57762) {
	cppVar_57757 = P0;
	} else {
	BIT_VEC cppVar_57763;
	BIT_VEC cppVar_57764 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57765 = (cppVar_57764 << 3) | 3;
	cppVar_57765 = (cppVar_57765 & cppMask_un_5_);
	BIT_VEC cppVar_57766 = (0 << 5) | cppVar_57765;
	cppVar_57766 = (cppVar_57766 & cppMask_un_8_);
	bool cppVar_57768 = (cppVar_57766 == 129);
	if (cppVar_57768) {
	cppVar_57763 = SP;
	} else {
	BIT_VEC cppVar_57769;
	BIT_VEC cppVar_57770 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57771 = (cppVar_57770 << 3) | 3;
	cppVar_57771 = (cppVar_57771 & cppMask_un_5_);
	BIT_VEC cppVar_57772 = (0 << 5) | cppVar_57771;
	cppVar_57772 = (cppVar_57772 & cppMask_un_8_);
	bool cppVar_57774 = (cppVar_57772 == 130);
	if (cppVar_57774) {
	cppVar_57769 = DPL;
	} else {
	BIT_VEC cppVar_57775;
	BIT_VEC cppVar_57776 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57777 = (cppVar_57776 << 3) | 3;
	cppVar_57777 = (cppVar_57777 & cppMask_un_5_);
	BIT_VEC cppVar_57778 = (0 << 5) | cppVar_57777;
	cppVar_57778 = (cppVar_57778 & cppMask_un_8_);
	bool cppVar_57780 = (cppVar_57778 == 131);
	if (cppVar_57780) {
	cppVar_57775 = DPH;
	} else {
	BIT_VEC cppVar_57781;
	BIT_VEC cppVar_57782 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57783 = (cppVar_57782 << 3) | 3;
	cppVar_57783 = (cppVar_57783 & cppMask_un_5_);
	BIT_VEC cppVar_57784 = (0 << 5) | cppVar_57783;
	cppVar_57784 = (cppVar_57784 & cppMask_un_8_);
	bool cppVar_57786 = (cppVar_57784 == 135);
	if (cppVar_57786) {
	cppVar_57781 = PCON;
	} else {
	BIT_VEC cppVar_57787;
	BIT_VEC cppVar_57788 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57789 = (cppVar_57788 << 3) | 3;
	cppVar_57789 = (cppVar_57789 & cppMask_un_5_);
	BIT_VEC cppVar_57790 = (0 << 5) | cppVar_57789;
	cppVar_57790 = (cppVar_57790 & cppMask_un_8_);
	bool cppVar_57792 = (cppVar_57790 == 136);
	if (cppVar_57792) {
	cppVar_57787 = TCON;
	} else {
	BIT_VEC cppVar_57793;
	BIT_VEC cppVar_57794 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57795 = (cppVar_57794 << 3) | 3;
	cppVar_57795 = (cppVar_57795 & cppMask_un_5_);
	BIT_VEC cppVar_57796 = (0 << 5) | cppVar_57795;
	cppVar_57796 = (cppVar_57796 & cppMask_un_8_);
	bool cppVar_57798 = (cppVar_57796 == 137);
	if (cppVar_57798) {
	cppVar_57793 = TMOD;
	} else {
	BIT_VEC cppVar_57799;
	BIT_VEC cppVar_57800 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57801 = (cppVar_57800 << 3) | 3;
	cppVar_57801 = (cppVar_57801 & cppMask_un_5_);
	BIT_VEC cppVar_57802 = (0 << 5) | cppVar_57801;
	cppVar_57802 = (cppVar_57802 & cppMask_un_8_);
	bool cppVar_57804 = (cppVar_57802 == 138);
	if (cppVar_57804) {
	cppVar_57799 = TL0;
	} else {
	BIT_VEC cppVar_57805;
	BIT_VEC cppVar_57806 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57807 = (cppVar_57806 << 3) | 3;
	cppVar_57807 = (cppVar_57807 & cppMask_un_5_);
	BIT_VEC cppVar_57808 = (0 << 5) | cppVar_57807;
	cppVar_57808 = (cppVar_57808 & cppMask_un_8_);
	bool cppVar_57810 = (cppVar_57808 == 140);
	if (cppVar_57810) {
	cppVar_57805 = TH0;
	} else {
	BIT_VEC cppVar_57811;
	BIT_VEC cppVar_57812 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57813 = (cppVar_57812 << 3) | 3;
	cppVar_57813 = (cppVar_57813 & cppMask_un_5_);
	BIT_VEC cppVar_57814 = (0 << 5) | cppVar_57813;
	cppVar_57814 = (cppVar_57814 & cppMask_un_8_);
	bool cppVar_57816 = (cppVar_57814 == 139);
	if (cppVar_57816) {
	cppVar_57811 = TL1;
	} else {
	BIT_VEC cppVar_57817;
	BIT_VEC cppVar_57818 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57819 = (cppVar_57818 << 3) | 3;
	cppVar_57819 = (cppVar_57819 & cppMask_un_5_);
	BIT_VEC cppVar_57820 = (0 << 5) | cppVar_57819;
	cppVar_57820 = (cppVar_57820 & cppMask_un_8_);
	bool cppVar_57822 = (cppVar_57820 == 141);
	if (cppVar_57822) {
	cppVar_57817 = TH1;
	} else {
	BIT_VEC cppVar_57823;
	BIT_VEC cppVar_57824 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57825 = (cppVar_57824 << 3) | 3;
	cppVar_57825 = (cppVar_57825 & cppMask_un_5_);
	BIT_VEC cppVar_57826 = (0 << 5) | cppVar_57825;
	cppVar_57826 = (cppVar_57826 & cppMask_un_8_);
	bool cppVar_57828 = (cppVar_57826 == 144);
	if (cppVar_57828) {
	cppVar_57823 = P1;
	} else {
	BIT_VEC cppVar_57829;
	BIT_VEC cppVar_57830 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57831 = (cppVar_57830 << 3) | 3;
	cppVar_57831 = (cppVar_57831 & cppMask_un_5_);
	BIT_VEC cppVar_57832 = (0 << 5) | cppVar_57831;
	cppVar_57832 = (cppVar_57832 & cppMask_un_8_);
	bool cppVar_57834 = (cppVar_57832 == 152);
	if (cppVar_57834) {
	cppVar_57829 = SCON;
	} else {
	BIT_VEC cppVar_57835;
	BIT_VEC cppVar_57836 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57837 = (cppVar_57836 << 3) | 3;
	cppVar_57837 = (cppVar_57837 & cppMask_un_5_);
	BIT_VEC cppVar_57838 = (0 << 5) | cppVar_57837;
	cppVar_57838 = (cppVar_57838 & cppMask_un_8_);
	bool cppVar_57840 = (cppVar_57838 == 153);
	if (cppVar_57840) {
	cppVar_57835 = SBUF;
	} else {
	BIT_VEC cppVar_57841;
	BIT_VEC cppVar_57842 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57843 = (cppVar_57842 << 3) | 3;
	cppVar_57843 = (cppVar_57843 & cppMask_un_5_);
	BIT_VEC cppVar_57844 = (0 << 5) | cppVar_57843;
	cppVar_57844 = (cppVar_57844 & cppMask_un_8_);
	bool cppVar_57846 = (cppVar_57844 == 160);
	if (cppVar_57846) {
	cppVar_57841 = P2;
	} else {
	BIT_VEC cppVar_57847;
	BIT_VEC cppVar_57848 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57849 = (cppVar_57848 << 3) | 3;
	cppVar_57849 = (cppVar_57849 & cppMask_un_5_);
	BIT_VEC cppVar_57850 = (0 << 5) | cppVar_57849;
	cppVar_57850 = (cppVar_57850 & cppMask_un_8_);
	bool cppVar_57852 = (cppVar_57850 == 168);
	if (cppVar_57852) {
	cppVar_57847 = IE;
	} else {
	BIT_VEC cppVar_57853;
	BIT_VEC cppVar_57854 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57855 = (cppVar_57854 << 3) | 3;
	cppVar_57855 = (cppVar_57855 & cppMask_un_5_);
	BIT_VEC cppVar_57856 = (0 << 5) | cppVar_57855;
	cppVar_57856 = (cppVar_57856 & cppMask_un_8_);
	bool cppVar_57858 = (cppVar_57856 == 176);
	if (cppVar_57858) {
	cppVar_57853 = P3;
	} else {
	BIT_VEC cppVar_57859;
	BIT_VEC cppVar_57860 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57861 = (cppVar_57860 << 3) | 3;
	cppVar_57861 = (cppVar_57861 & cppMask_un_5_);
	BIT_VEC cppVar_57862 = (0 << 5) | cppVar_57861;
	cppVar_57862 = (cppVar_57862 & cppMask_un_8_);
	bool cppVar_57864 = (cppVar_57862 == 184);
	if (cppVar_57864) {
	cppVar_57859 = IP;
	} else {
	BIT_VEC cppVar_57865;
	BIT_VEC cppVar_57866 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57867 = (cppVar_57866 << 3) | 3;
	cppVar_57867 = (cppVar_57867 & cppMask_un_5_);
	BIT_VEC cppVar_57868 = (0 << 5) | cppVar_57867;
	cppVar_57868 = (cppVar_57868 & cppMask_un_8_);
	bool cppVar_57870 = (cppVar_57868 == 208);
	if (cppVar_57870) {
	cppVar_57865 = PSW;
	} else {
	BIT_VEC cppVar_57871;
	BIT_VEC cppVar_57872 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57873 = (cppVar_57872 << 3) | 3;
	cppVar_57873 = (cppVar_57873 & cppMask_un_5_);
	BIT_VEC cppVar_57874 = (0 << 5) | cppVar_57873;
	cppVar_57874 = (cppVar_57874 & cppMask_un_8_);
	bool cppVar_57876 = (cppVar_57874 == 224);
	if (cppVar_57876) {
	cppVar_57871 = ACC;
	} else {
	BIT_VEC cppVar_57877;
	BIT_VEC cppVar_57878 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57879 = (cppVar_57878 << 3) | 3;
	cppVar_57879 = (cppVar_57879 & cppMask_un_5_);
	BIT_VEC cppVar_57880 = (0 << 5) | cppVar_57879;
	cppVar_57880 = (cppVar_57880 & cppMask_un_8_);
	bool cppVar_57882 = (cppVar_57880 == 240);
	if (cppVar_57882) {
	cppVar_57877 = B;
	} else {
	cppVar_57877 = 0;
	}
	cppVar_57871 = cppVar_57877;
	}
	cppVar_57865 = cppVar_57871;
	}
	cppVar_57859 = cppVar_57865;
	}
	cppVar_57853 = cppVar_57859;
	}
	cppVar_57847 = cppVar_57853;
	}
	cppVar_57841 = cppVar_57847;
	}
	cppVar_57835 = cppVar_57841;
	}
	cppVar_57829 = cppVar_57835;
	}
	cppVar_57823 = cppVar_57829;
	}
	cppVar_57817 = cppVar_57823;
	}
	cppVar_57811 = cppVar_57817;
	}
	cppVar_57805 = cppVar_57811;
	}
	cppVar_57799 = cppVar_57805;
	}
	cppVar_57793 = cppVar_57799;
	}
	cppVar_57787 = cppVar_57793;
	}
	cppVar_57781 = cppVar_57787;
	}
	cppVar_57775 = cppVar_57781;
	}
	cppVar_57769 = cppVar_57775;
	}
	cppVar_57763 = cppVar_57769;
	}
	cppVar_57757 = cppVar_57763;
	}
	cppVar_57744 = cppVar_57757;
	}
	cppVar_57738 = cppVar_57744;
	} else {
	cppVar_57738 = SBUF;
	}
	cppVar_57734 = cppVar_57738;
	} else {
	BIT_VEC cppVar_57884;
	BIT_VEC cppVar_57885 = ROM.rd(PC);
	bool cppVar_57887 = (cppVar_57885 == 138);
	if (cppVar_57887) {
	BIT_VEC cppVar_57888;
	BIT_VEC cppVar_57890 = PC + 1;
	cppVar_57890 = (cppVar_57890 & cppMask_un_16_);
	BIT_VEC cppVar_57891 = ROM.rd(cppVar_57890);
	bool cppVar_57893 = (cppVar_57891 == 153);
	if (cppVar_57893) {
	BIT_VEC cppVar_57894;
	BIT_VEC cppVar_57896 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57898 = (cppVar_57896 << 3) | 2;
	cppVar_57898 = (cppVar_57898 & cppMask_un_5_);
	BIT_VEC cppVar_57899 = (0 << 5) | cppVar_57898;
	cppVar_57899 = (cppVar_57899 & cppMask_un_8_);
	BIT_VEC cppVar_57900 = (cppVar_57899 >> 7) & cppMask_un_1_;
	bool cppVar_57902 = (cppVar_57900 == 0);
	if (cppVar_57902) {
	BIT_VEC cppVar_57903 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57904 = (cppVar_57903 << 3) | 2;
	cppVar_57904 = (cppVar_57904 & cppMask_un_5_);
	BIT_VEC cppVar_57905 = (0 << 5) | cppVar_57904;
	cppVar_57905 = (cppVar_57905 & cppMask_un_8_);
	BIT_VEC cppVar_57906 = IRAM.rd(cppVar_57905);
	cppVar_57894 = cppVar_57906;
	} else {
	BIT_VEC cppVar_57907;
	BIT_VEC cppVar_57908 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57909 = (cppVar_57908 << 3) | 2;
	cppVar_57909 = (cppVar_57909 & cppMask_un_5_);
	BIT_VEC cppVar_57910 = (0 << 5) | cppVar_57909;
	cppVar_57910 = (cppVar_57910 & cppMask_un_8_);
	bool cppVar_57912 = (cppVar_57910 == 128);
	if (cppVar_57912) {
	cppVar_57907 = P0;
	} else {
	BIT_VEC cppVar_57913;
	BIT_VEC cppVar_57914 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57915 = (cppVar_57914 << 3) | 2;
	cppVar_57915 = (cppVar_57915 & cppMask_un_5_);
	BIT_VEC cppVar_57916 = (0 << 5) | cppVar_57915;
	cppVar_57916 = (cppVar_57916 & cppMask_un_8_);
	bool cppVar_57918 = (cppVar_57916 == 129);
	if (cppVar_57918) {
	cppVar_57913 = SP;
	} else {
	BIT_VEC cppVar_57919;
	BIT_VEC cppVar_57920 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57921 = (cppVar_57920 << 3) | 2;
	cppVar_57921 = (cppVar_57921 & cppMask_un_5_);
	BIT_VEC cppVar_57922 = (0 << 5) | cppVar_57921;
	cppVar_57922 = (cppVar_57922 & cppMask_un_8_);
	bool cppVar_57924 = (cppVar_57922 == 130);
	if (cppVar_57924) {
	cppVar_57919 = DPL;
	} else {
	BIT_VEC cppVar_57925;
	BIT_VEC cppVar_57926 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57927 = (cppVar_57926 << 3) | 2;
	cppVar_57927 = (cppVar_57927 & cppMask_un_5_);
	BIT_VEC cppVar_57928 = (0 << 5) | cppVar_57927;
	cppVar_57928 = (cppVar_57928 & cppMask_un_8_);
	bool cppVar_57930 = (cppVar_57928 == 131);
	if (cppVar_57930) {
	cppVar_57925 = DPH;
	} else {
	BIT_VEC cppVar_57931;
	BIT_VEC cppVar_57932 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57933 = (cppVar_57932 << 3) | 2;
	cppVar_57933 = (cppVar_57933 & cppMask_un_5_);
	BIT_VEC cppVar_57934 = (0 << 5) | cppVar_57933;
	cppVar_57934 = (cppVar_57934 & cppMask_un_8_);
	bool cppVar_57936 = (cppVar_57934 == 135);
	if (cppVar_57936) {
	cppVar_57931 = PCON;
	} else {
	BIT_VEC cppVar_57937;
	BIT_VEC cppVar_57938 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57939 = (cppVar_57938 << 3) | 2;
	cppVar_57939 = (cppVar_57939 & cppMask_un_5_);
	BIT_VEC cppVar_57940 = (0 << 5) | cppVar_57939;
	cppVar_57940 = (cppVar_57940 & cppMask_un_8_);
	bool cppVar_57942 = (cppVar_57940 == 136);
	if (cppVar_57942) {
	cppVar_57937 = TCON;
	} else {
	BIT_VEC cppVar_57943;
	BIT_VEC cppVar_57944 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57945 = (cppVar_57944 << 3) | 2;
	cppVar_57945 = (cppVar_57945 & cppMask_un_5_);
	BIT_VEC cppVar_57946 = (0 << 5) | cppVar_57945;
	cppVar_57946 = (cppVar_57946 & cppMask_un_8_);
	bool cppVar_57948 = (cppVar_57946 == 137);
	if (cppVar_57948) {
	cppVar_57943 = TMOD;
	} else {
	BIT_VEC cppVar_57949;
	BIT_VEC cppVar_57950 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57951 = (cppVar_57950 << 3) | 2;
	cppVar_57951 = (cppVar_57951 & cppMask_un_5_);
	BIT_VEC cppVar_57952 = (0 << 5) | cppVar_57951;
	cppVar_57952 = (cppVar_57952 & cppMask_un_8_);
	bool cppVar_57954 = (cppVar_57952 == 138);
	if (cppVar_57954) {
	cppVar_57949 = TL0;
	} else {
	BIT_VEC cppVar_57955;
	BIT_VEC cppVar_57956 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57957 = (cppVar_57956 << 3) | 2;
	cppVar_57957 = (cppVar_57957 & cppMask_un_5_);
	BIT_VEC cppVar_57958 = (0 << 5) | cppVar_57957;
	cppVar_57958 = (cppVar_57958 & cppMask_un_8_);
	bool cppVar_57960 = (cppVar_57958 == 140);
	if (cppVar_57960) {
	cppVar_57955 = TH0;
	} else {
	BIT_VEC cppVar_57961;
	BIT_VEC cppVar_57962 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57963 = (cppVar_57962 << 3) | 2;
	cppVar_57963 = (cppVar_57963 & cppMask_un_5_);
	BIT_VEC cppVar_57964 = (0 << 5) | cppVar_57963;
	cppVar_57964 = (cppVar_57964 & cppMask_un_8_);
	bool cppVar_57966 = (cppVar_57964 == 139);
	if (cppVar_57966) {
	cppVar_57961 = TL1;
	} else {
	BIT_VEC cppVar_57967;
	BIT_VEC cppVar_57968 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57969 = (cppVar_57968 << 3) | 2;
	cppVar_57969 = (cppVar_57969 & cppMask_un_5_);
	BIT_VEC cppVar_57970 = (0 << 5) | cppVar_57969;
	cppVar_57970 = (cppVar_57970 & cppMask_un_8_);
	bool cppVar_57972 = (cppVar_57970 == 141);
	if (cppVar_57972) {
	cppVar_57967 = TH1;
	} else {
	BIT_VEC cppVar_57973;
	BIT_VEC cppVar_57974 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57975 = (cppVar_57974 << 3) | 2;
	cppVar_57975 = (cppVar_57975 & cppMask_un_5_);
	BIT_VEC cppVar_57976 = (0 << 5) | cppVar_57975;
	cppVar_57976 = (cppVar_57976 & cppMask_un_8_);
	bool cppVar_57978 = (cppVar_57976 == 144);
	if (cppVar_57978) {
	cppVar_57973 = P1;
	} else {
	BIT_VEC cppVar_57979;
	BIT_VEC cppVar_57980 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57981 = (cppVar_57980 << 3) | 2;
	cppVar_57981 = (cppVar_57981 & cppMask_un_5_);
	BIT_VEC cppVar_57982 = (0 << 5) | cppVar_57981;
	cppVar_57982 = (cppVar_57982 & cppMask_un_8_);
	bool cppVar_57984 = (cppVar_57982 == 152);
	if (cppVar_57984) {
	cppVar_57979 = SCON;
	} else {
	BIT_VEC cppVar_57985;
	BIT_VEC cppVar_57986 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57987 = (cppVar_57986 << 3) | 2;
	cppVar_57987 = (cppVar_57987 & cppMask_un_5_);
	BIT_VEC cppVar_57988 = (0 << 5) | cppVar_57987;
	cppVar_57988 = (cppVar_57988 & cppMask_un_8_);
	bool cppVar_57990 = (cppVar_57988 == 153);
	if (cppVar_57990) {
	cppVar_57985 = SBUF;
	} else {
	BIT_VEC cppVar_57991;
	BIT_VEC cppVar_57992 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57993 = (cppVar_57992 << 3) | 2;
	cppVar_57993 = (cppVar_57993 & cppMask_un_5_);
	BIT_VEC cppVar_57994 = (0 << 5) | cppVar_57993;
	cppVar_57994 = (cppVar_57994 & cppMask_un_8_);
	bool cppVar_57996 = (cppVar_57994 == 160);
	if (cppVar_57996) {
	cppVar_57991 = P2;
	} else {
	BIT_VEC cppVar_57997;
	BIT_VEC cppVar_57998 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_57999 = (cppVar_57998 << 3) | 2;
	cppVar_57999 = (cppVar_57999 & cppMask_un_5_);
	BIT_VEC cppVar_58000 = (0 << 5) | cppVar_57999;
	cppVar_58000 = (cppVar_58000 & cppMask_un_8_);
	bool cppVar_58002 = (cppVar_58000 == 168);
	if (cppVar_58002) {
	cppVar_57997 = IE;
	} else {
	BIT_VEC cppVar_58003;
	BIT_VEC cppVar_58004 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58005 = (cppVar_58004 << 3) | 2;
	cppVar_58005 = (cppVar_58005 & cppMask_un_5_);
	BIT_VEC cppVar_58006 = (0 << 5) | cppVar_58005;
	cppVar_58006 = (cppVar_58006 & cppMask_un_8_);
	bool cppVar_58008 = (cppVar_58006 == 176);
	if (cppVar_58008) {
	cppVar_58003 = P3;
	} else {
	BIT_VEC cppVar_58009;
	BIT_VEC cppVar_58010 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58011 = (cppVar_58010 << 3) | 2;
	cppVar_58011 = (cppVar_58011 & cppMask_un_5_);
	BIT_VEC cppVar_58012 = (0 << 5) | cppVar_58011;
	cppVar_58012 = (cppVar_58012 & cppMask_un_8_);
	bool cppVar_58014 = (cppVar_58012 == 184);
	if (cppVar_58014) {
	cppVar_58009 = IP;
	} else {
	BIT_VEC cppVar_58015;
	BIT_VEC cppVar_58016 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58017 = (cppVar_58016 << 3) | 2;
	cppVar_58017 = (cppVar_58017 & cppMask_un_5_);
	BIT_VEC cppVar_58018 = (0 << 5) | cppVar_58017;
	cppVar_58018 = (cppVar_58018 & cppMask_un_8_);
	bool cppVar_58020 = (cppVar_58018 == 208);
	if (cppVar_58020) {
	cppVar_58015 = PSW;
	} else {
	BIT_VEC cppVar_58021;
	BIT_VEC cppVar_58022 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58023 = (cppVar_58022 << 3) | 2;
	cppVar_58023 = (cppVar_58023 & cppMask_un_5_);
	BIT_VEC cppVar_58024 = (0 << 5) | cppVar_58023;
	cppVar_58024 = (cppVar_58024 & cppMask_un_8_);
	bool cppVar_58026 = (cppVar_58024 == 224);
	if (cppVar_58026) {
	cppVar_58021 = ACC;
	} else {
	BIT_VEC cppVar_58027;
	BIT_VEC cppVar_58028 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58029 = (cppVar_58028 << 3) | 2;
	cppVar_58029 = (cppVar_58029 & cppMask_un_5_);
	BIT_VEC cppVar_58030 = (0 << 5) | cppVar_58029;
	cppVar_58030 = (cppVar_58030 & cppMask_un_8_);
	bool cppVar_58032 = (cppVar_58030 == 240);
	if (cppVar_58032) {
	cppVar_58027 = B;
	} else {
	cppVar_58027 = 0;
	}
	cppVar_58021 = cppVar_58027;
	}
	cppVar_58015 = cppVar_58021;
	}
	cppVar_58009 = cppVar_58015;
	}
	cppVar_58003 = cppVar_58009;
	}
	cppVar_57997 = cppVar_58003;
	}
	cppVar_57991 = cppVar_57997;
	}
	cppVar_57985 = cppVar_57991;
	}
	cppVar_57979 = cppVar_57985;
	}
	cppVar_57973 = cppVar_57979;
	}
	cppVar_57967 = cppVar_57973;
	}
	cppVar_57961 = cppVar_57967;
	}
	cppVar_57955 = cppVar_57961;
	}
	cppVar_57949 = cppVar_57955;
	}
	cppVar_57943 = cppVar_57949;
	}
	cppVar_57937 = cppVar_57943;
	}
	cppVar_57931 = cppVar_57937;
	}
	cppVar_57925 = cppVar_57931;
	}
	cppVar_57919 = cppVar_57925;
	}
	cppVar_57913 = cppVar_57919;
	}
	cppVar_57907 = cppVar_57913;
	}
	cppVar_57894 = cppVar_57907;
	}
	cppVar_57888 = cppVar_57894;
	} else {
	cppVar_57888 = SBUF;
	}
	cppVar_57884 = cppVar_57888;
	} else {
	BIT_VEC cppVar_58034;
	BIT_VEC cppVar_58035 = ROM.rd(PC);
	bool cppVar_58037 = (cppVar_58035 == 137);
	if (cppVar_58037) {
	BIT_VEC cppVar_58038;
	BIT_VEC cppVar_58040 = PC + 1;
	cppVar_58040 = (cppVar_58040 & cppMask_un_16_);
	BIT_VEC cppVar_58041 = ROM.rd(cppVar_58040);
	bool cppVar_58043 = (cppVar_58041 == 153);
	if (cppVar_58043) {
	BIT_VEC cppVar_58044;
	BIT_VEC cppVar_58046 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58048 = (cppVar_58046 << 3) | 1;
	cppVar_58048 = (cppVar_58048 & cppMask_un_5_);
	BIT_VEC cppVar_58049 = (0 << 5) | cppVar_58048;
	cppVar_58049 = (cppVar_58049 & cppMask_un_8_);
	BIT_VEC cppVar_58050 = (cppVar_58049 >> 7) & cppMask_un_1_;
	bool cppVar_58052 = (cppVar_58050 == 0);
	if (cppVar_58052) {
	BIT_VEC cppVar_58053 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58054 = (cppVar_58053 << 3) | 1;
	cppVar_58054 = (cppVar_58054 & cppMask_un_5_);
	BIT_VEC cppVar_58055 = (0 << 5) | cppVar_58054;
	cppVar_58055 = (cppVar_58055 & cppMask_un_8_);
	BIT_VEC cppVar_58056 = IRAM.rd(cppVar_58055);
	cppVar_58044 = cppVar_58056;
	} else {
	BIT_VEC cppVar_58057;
	BIT_VEC cppVar_58058 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58059 = (cppVar_58058 << 3) | 1;
	cppVar_58059 = (cppVar_58059 & cppMask_un_5_);
	BIT_VEC cppVar_58060 = (0 << 5) | cppVar_58059;
	cppVar_58060 = (cppVar_58060 & cppMask_un_8_);
	bool cppVar_58062 = (cppVar_58060 == 128);
	if (cppVar_58062) {
	cppVar_58057 = P0;
	} else {
	BIT_VEC cppVar_58063;
	BIT_VEC cppVar_58064 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58065 = (cppVar_58064 << 3) | 1;
	cppVar_58065 = (cppVar_58065 & cppMask_un_5_);
	BIT_VEC cppVar_58066 = (0 << 5) | cppVar_58065;
	cppVar_58066 = (cppVar_58066 & cppMask_un_8_);
	bool cppVar_58068 = (cppVar_58066 == 129);
	if (cppVar_58068) {
	cppVar_58063 = SP;
	} else {
	BIT_VEC cppVar_58069;
	BIT_VEC cppVar_58070 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58071 = (cppVar_58070 << 3) | 1;
	cppVar_58071 = (cppVar_58071 & cppMask_un_5_);
	BIT_VEC cppVar_58072 = (0 << 5) | cppVar_58071;
	cppVar_58072 = (cppVar_58072 & cppMask_un_8_);
	bool cppVar_58074 = (cppVar_58072 == 130);
	if (cppVar_58074) {
	cppVar_58069 = DPL;
	} else {
	BIT_VEC cppVar_58075;
	BIT_VEC cppVar_58076 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58077 = (cppVar_58076 << 3) | 1;
	cppVar_58077 = (cppVar_58077 & cppMask_un_5_);
	BIT_VEC cppVar_58078 = (0 << 5) | cppVar_58077;
	cppVar_58078 = (cppVar_58078 & cppMask_un_8_);
	bool cppVar_58080 = (cppVar_58078 == 131);
	if (cppVar_58080) {
	cppVar_58075 = DPH;
	} else {
	BIT_VEC cppVar_58081;
	BIT_VEC cppVar_58082 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58083 = (cppVar_58082 << 3) | 1;
	cppVar_58083 = (cppVar_58083 & cppMask_un_5_);
	BIT_VEC cppVar_58084 = (0 << 5) | cppVar_58083;
	cppVar_58084 = (cppVar_58084 & cppMask_un_8_);
	bool cppVar_58086 = (cppVar_58084 == 135);
	if (cppVar_58086) {
	cppVar_58081 = PCON;
	} else {
	BIT_VEC cppVar_58087;
	BIT_VEC cppVar_58088 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58089 = (cppVar_58088 << 3) | 1;
	cppVar_58089 = (cppVar_58089 & cppMask_un_5_);
	BIT_VEC cppVar_58090 = (0 << 5) | cppVar_58089;
	cppVar_58090 = (cppVar_58090 & cppMask_un_8_);
	bool cppVar_58092 = (cppVar_58090 == 136);
	if (cppVar_58092) {
	cppVar_58087 = TCON;
	} else {
	BIT_VEC cppVar_58093;
	BIT_VEC cppVar_58094 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58095 = (cppVar_58094 << 3) | 1;
	cppVar_58095 = (cppVar_58095 & cppMask_un_5_);
	BIT_VEC cppVar_58096 = (0 << 5) | cppVar_58095;
	cppVar_58096 = (cppVar_58096 & cppMask_un_8_);
	bool cppVar_58098 = (cppVar_58096 == 137);
	if (cppVar_58098) {
	cppVar_58093 = TMOD;
	} else {
	BIT_VEC cppVar_58099;
	BIT_VEC cppVar_58100 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58101 = (cppVar_58100 << 3) | 1;
	cppVar_58101 = (cppVar_58101 & cppMask_un_5_);
	BIT_VEC cppVar_58102 = (0 << 5) | cppVar_58101;
	cppVar_58102 = (cppVar_58102 & cppMask_un_8_);
	bool cppVar_58104 = (cppVar_58102 == 138);
	if (cppVar_58104) {
	cppVar_58099 = TL0;
	} else {
	BIT_VEC cppVar_58105;
	BIT_VEC cppVar_58106 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58107 = (cppVar_58106 << 3) | 1;
	cppVar_58107 = (cppVar_58107 & cppMask_un_5_);
	BIT_VEC cppVar_58108 = (0 << 5) | cppVar_58107;
	cppVar_58108 = (cppVar_58108 & cppMask_un_8_);
	bool cppVar_58110 = (cppVar_58108 == 140);
	if (cppVar_58110) {
	cppVar_58105 = TH0;
	} else {
	BIT_VEC cppVar_58111;
	BIT_VEC cppVar_58112 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58113 = (cppVar_58112 << 3) | 1;
	cppVar_58113 = (cppVar_58113 & cppMask_un_5_);
	BIT_VEC cppVar_58114 = (0 << 5) | cppVar_58113;
	cppVar_58114 = (cppVar_58114 & cppMask_un_8_);
	bool cppVar_58116 = (cppVar_58114 == 139);
	if (cppVar_58116) {
	cppVar_58111 = TL1;
	} else {
	BIT_VEC cppVar_58117;
	BIT_VEC cppVar_58118 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58119 = (cppVar_58118 << 3) | 1;
	cppVar_58119 = (cppVar_58119 & cppMask_un_5_);
	BIT_VEC cppVar_58120 = (0 << 5) | cppVar_58119;
	cppVar_58120 = (cppVar_58120 & cppMask_un_8_);
	bool cppVar_58122 = (cppVar_58120 == 141);
	if (cppVar_58122) {
	cppVar_58117 = TH1;
	} else {
	BIT_VEC cppVar_58123;
	BIT_VEC cppVar_58124 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58125 = (cppVar_58124 << 3) | 1;
	cppVar_58125 = (cppVar_58125 & cppMask_un_5_);
	BIT_VEC cppVar_58126 = (0 << 5) | cppVar_58125;
	cppVar_58126 = (cppVar_58126 & cppMask_un_8_);
	bool cppVar_58128 = (cppVar_58126 == 144);
	if (cppVar_58128) {
	cppVar_58123 = P1;
	} else {
	BIT_VEC cppVar_58129;
	BIT_VEC cppVar_58130 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58131 = (cppVar_58130 << 3) | 1;
	cppVar_58131 = (cppVar_58131 & cppMask_un_5_);
	BIT_VEC cppVar_58132 = (0 << 5) | cppVar_58131;
	cppVar_58132 = (cppVar_58132 & cppMask_un_8_);
	bool cppVar_58134 = (cppVar_58132 == 152);
	if (cppVar_58134) {
	cppVar_58129 = SCON;
	} else {
	BIT_VEC cppVar_58135;
	BIT_VEC cppVar_58136 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58137 = (cppVar_58136 << 3) | 1;
	cppVar_58137 = (cppVar_58137 & cppMask_un_5_);
	BIT_VEC cppVar_58138 = (0 << 5) | cppVar_58137;
	cppVar_58138 = (cppVar_58138 & cppMask_un_8_);
	bool cppVar_58140 = (cppVar_58138 == 153);
	if (cppVar_58140) {
	cppVar_58135 = SBUF;
	} else {
	BIT_VEC cppVar_58141;
	BIT_VEC cppVar_58142 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58143 = (cppVar_58142 << 3) | 1;
	cppVar_58143 = (cppVar_58143 & cppMask_un_5_);
	BIT_VEC cppVar_58144 = (0 << 5) | cppVar_58143;
	cppVar_58144 = (cppVar_58144 & cppMask_un_8_);
	bool cppVar_58146 = (cppVar_58144 == 160);
	if (cppVar_58146) {
	cppVar_58141 = P2;
	} else {
	BIT_VEC cppVar_58147;
	BIT_VEC cppVar_58148 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58149 = (cppVar_58148 << 3) | 1;
	cppVar_58149 = (cppVar_58149 & cppMask_un_5_);
	BIT_VEC cppVar_58150 = (0 << 5) | cppVar_58149;
	cppVar_58150 = (cppVar_58150 & cppMask_un_8_);
	bool cppVar_58152 = (cppVar_58150 == 168);
	if (cppVar_58152) {
	cppVar_58147 = IE;
	} else {
	BIT_VEC cppVar_58153;
	BIT_VEC cppVar_58154 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58155 = (cppVar_58154 << 3) | 1;
	cppVar_58155 = (cppVar_58155 & cppMask_un_5_);
	BIT_VEC cppVar_58156 = (0 << 5) | cppVar_58155;
	cppVar_58156 = (cppVar_58156 & cppMask_un_8_);
	bool cppVar_58158 = (cppVar_58156 == 176);
	if (cppVar_58158) {
	cppVar_58153 = P3;
	} else {
	BIT_VEC cppVar_58159;
	BIT_VEC cppVar_58160 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58161 = (cppVar_58160 << 3) | 1;
	cppVar_58161 = (cppVar_58161 & cppMask_un_5_);
	BIT_VEC cppVar_58162 = (0 << 5) | cppVar_58161;
	cppVar_58162 = (cppVar_58162 & cppMask_un_8_);
	bool cppVar_58164 = (cppVar_58162 == 184);
	if (cppVar_58164) {
	cppVar_58159 = IP;
	} else {
	BIT_VEC cppVar_58165;
	BIT_VEC cppVar_58166 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58167 = (cppVar_58166 << 3) | 1;
	cppVar_58167 = (cppVar_58167 & cppMask_un_5_);
	BIT_VEC cppVar_58168 = (0 << 5) | cppVar_58167;
	cppVar_58168 = (cppVar_58168 & cppMask_un_8_);
	bool cppVar_58170 = (cppVar_58168 == 208);
	if (cppVar_58170) {
	cppVar_58165 = PSW;
	} else {
	BIT_VEC cppVar_58171;
	BIT_VEC cppVar_58172 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58173 = (cppVar_58172 << 3) | 1;
	cppVar_58173 = (cppVar_58173 & cppMask_un_5_);
	BIT_VEC cppVar_58174 = (0 << 5) | cppVar_58173;
	cppVar_58174 = (cppVar_58174 & cppMask_un_8_);
	bool cppVar_58176 = (cppVar_58174 == 224);
	if (cppVar_58176) {
	cppVar_58171 = ACC;
	} else {
	BIT_VEC cppVar_58177;
	BIT_VEC cppVar_58178 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58179 = (cppVar_58178 << 3) | 1;
	cppVar_58179 = (cppVar_58179 & cppMask_un_5_);
	BIT_VEC cppVar_58180 = (0 << 5) | cppVar_58179;
	cppVar_58180 = (cppVar_58180 & cppMask_un_8_);
	bool cppVar_58182 = (cppVar_58180 == 240);
	if (cppVar_58182) {
	cppVar_58177 = B;
	} else {
	cppVar_58177 = 0;
	}
	cppVar_58171 = cppVar_58177;
	}
	cppVar_58165 = cppVar_58171;
	}
	cppVar_58159 = cppVar_58165;
	}
	cppVar_58153 = cppVar_58159;
	}
	cppVar_58147 = cppVar_58153;
	}
	cppVar_58141 = cppVar_58147;
	}
	cppVar_58135 = cppVar_58141;
	}
	cppVar_58129 = cppVar_58135;
	}
	cppVar_58123 = cppVar_58129;
	}
	cppVar_58117 = cppVar_58123;
	}
	cppVar_58111 = cppVar_58117;
	}
	cppVar_58105 = cppVar_58111;
	}
	cppVar_58099 = cppVar_58105;
	}
	cppVar_58093 = cppVar_58099;
	}
	cppVar_58087 = cppVar_58093;
	}
	cppVar_58081 = cppVar_58087;
	}
	cppVar_58075 = cppVar_58081;
	}
	cppVar_58069 = cppVar_58075;
	}
	cppVar_58063 = cppVar_58069;
	}
	cppVar_58057 = cppVar_58063;
	}
	cppVar_58044 = cppVar_58057;
	}
	cppVar_58038 = cppVar_58044;
	} else {
	cppVar_58038 = SBUF;
	}
	cppVar_58034 = cppVar_58038;
	} else {
	BIT_VEC cppVar_58184;
	BIT_VEC cppVar_58185 = ROM.rd(PC);
	bool cppVar_58187 = (cppVar_58185 == 136);
	if (cppVar_58187) {
	BIT_VEC cppVar_58188;
	BIT_VEC cppVar_58190 = PC + 1;
	cppVar_58190 = (cppVar_58190 & cppMask_un_16_);
	BIT_VEC cppVar_58191 = ROM.rd(cppVar_58190);
	bool cppVar_58193 = (cppVar_58191 == 153);
	if (cppVar_58193) {
	BIT_VEC cppVar_58194;
	BIT_VEC cppVar_58196 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58198 = (cppVar_58196 << 3) | 0;
	cppVar_58198 = (cppVar_58198 & cppMask_un_5_);
	BIT_VEC cppVar_58199 = (0 << 5) | cppVar_58198;
	cppVar_58199 = (cppVar_58199 & cppMask_un_8_);
	BIT_VEC cppVar_58200 = (cppVar_58199 >> 7) & cppMask_un_1_;
	bool cppVar_58202 = (cppVar_58200 == 0);
	if (cppVar_58202) {
	BIT_VEC cppVar_58203 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58204 = (cppVar_58203 << 3) | 0;
	cppVar_58204 = (cppVar_58204 & cppMask_un_5_);
	BIT_VEC cppVar_58205 = (0 << 5) | cppVar_58204;
	cppVar_58205 = (cppVar_58205 & cppMask_un_8_);
	BIT_VEC cppVar_58206 = IRAM.rd(cppVar_58205);
	cppVar_58194 = cppVar_58206;
	} else {
	BIT_VEC cppVar_58207;
	BIT_VEC cppVar_58208 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58209 = (cppVar_58208 << 3) | 0;
	cppVar_58209 = (cppVar_58209 & cppMask_un_5_);
	BIT_VEC cppVar_58210 = (0 << 5) | cppVar_58209;
	cppVar_58210 = (cppVar_58210 & cppMask_un_8_);
	bool cppVar_58212 = (cppVar_58210 == 128);
	if (cppVar_58212) {
	cppVar_58207 = P0;
	} else {
	BIT_VEC cppVar_58213;
	BIT_VEC cppVar_58214 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58215 = (cppVar_58214 << 3) | 0;
	cppVar_58215 = (cppVar_58215 & cppMask_un_5_);
	BIT_VEC cppVar_58216 = (0 << 5) | cppVar_58215;
	cppVar_58216 = (cppVar_58216 & cppMask_un_8_);
	bool cppVar_58218 = (cppVar_58216 == 129);
	if (cppVar_58218) {
	cppVar_58213 = SP;
	} else {
	BIT_VEC cppVar_58219;
	BIT_VEC cppVar_58220 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58221 = (cppVar_58220 << 3) | 0;
	cppVar_58221 = (cppVar_58221 & cppMask_un_5_);
	BIT_VEC cppVar_58222 = (0 << 5) | cppVar_58221;
	cppVar_58222 = (cppVar_58222 & cppMask_un_8_);
	bool cppVar_58224 = (cppVar_58222 == 130);
	if (cppVar_58224) {
	cppVar_58219 = DPL;
	} else {
	BIT_VEC cppVar_58225;
	BIT_VEC cppVar_58226 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58227 = (cppVar_58226 << 3) | 0;
	cppVar_58227 = (cppVar_58227 & cppMask_un_5_);
	BIT_VEC cppVar_58228 = (0 << 5) | cppVar_58227;
	cppVar_58228 = (cppVar_58228 & cppMask_un_8_);
	bool cppVar_58230 = (cppVar_58228 == 131);
	if (cppVar_58230) {
	cppVar_58225 = DPH;
	} else {
	BIT_VEC cppVar_58231;
	BIT_VEC cppVar_58232 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58233 = (cppVar_58232 << 3) | 0;
	cppVar_58233 = (cppVar_58233 & cppMask_un_5_);
	BIT_VEC cppVar_58234 = (0 << 5) | cppVar_58233;
	cppVar_58234 = (cppVar_58234 & cppMask_un_8_);
	bool cppVar_58236 = (cppVar_58234 == 135);
	if (cppVar_58236) {
	cppVar_58231 = PCON;
	} else {
	BIT_VEC cppVar_58237;
	BIT_VEC cppVar_58238 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58239 = (cppVar_58238 << 3) | 0;
	cppVar_58239 = (cppVar_58239 & cppMask_un_5_);
	BIT_VEC cppVar_58240 = (0 << 5) | cppVar_58239;
	cppVar_58240 = (cppVar_58240 & cppMask_un_8_);
	bool cppVar_58242 = (cppVar_58240 == 136);
	if (cppVar_58242) {
	cppVar_58237 = TCON;
	} else {
	BIT_VEC cppVar_58243;
	BIT_VEC cppVar_58244 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58245 = (cppVar_58244 << 3) | 0;
	cppVar_58245 = (cppVar_58245 & cppMask_un_5_);
	BIT_VEC cppVar_58246 = (0 << 5) | cppVar_58245;
	cppVar_58246 = (cppVar_58246 & cppMask_un_8_);
	bool cppVar_58248 = (cppVar_58246 == 137);
	if (cppVar_58248) {
	cppVar_58243 = TMOD;
	} else {
	BIT_VEC cppVar_58249;
	BIT_VEC cppVar_58250 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58251 = (cppVar_58250 << 3) | 0;
	cppVar_58251 = (cppVar_58251 & cppMask_un_5_);
	BIT_VEC cppVar_58252 = (0 << 5) | cppVar_58251;
	cppVar_58252 = (cppVar_58252 & cppMask_un_8_);
	bool cppVar_58254 = (cppVar_58252 == 138);
	if (cppVar_58254) {
	cppVar_58249 = TL0;
	} else {
	BIT_VEC cppVar_58255;
	BIT_VEC cppVar_58256 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58257 = (cppVar_58256 << 3) | 0;
	cppVar_58257 = (cppVar_58257 & cppMask_un_5_);
	BIT_VEC cppVar_58258 = (0 << 5) | cppVar_58257;
	cppVar_58258 = (cppVar_58258 & cppMask_un_8_);
	bool cppVar_58260 = (cppVar_58258 == 140);
	if (cppVar_58260) {
	cppVar_58255 = TH0;
	} else {
	BIT_VEC cppVar_58261;
	BIT_VEC cppVar_58262 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58263 = (cppVar_58262 << 3) | 0;
	cppVar_58263 = (cppVar_58263 & cppMask_un_5_);
	BIT_VEC cppVar_58264 = (0 << 5) | cppVar_58263;
	cppVar_58264 = (cppVar_58264 & cppMask_un_8_);
	bool cppVar_58266 = (cppVar_58264 == 139);
	if (cppVar_58266) {
	cppVar_58261 = TL1;
	} else {
	BIT_VEC cppVar_58267;
	BIT_VEC cppVar_58268 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58269 = (cppVar_58268 << 3) | 0;
	cppVar_58269 = (cppVar_58269 & cppMask_un_5_);
	BIT_VEC cppVar_58270 = (0 << 5) | cppVar_58269;
	cppVar_58270 = (cppVar_58270 & cppMask_un_8_);
	bool cppVar_58272 = (cppVar_58270 == 141);
	if (cppVar_58272) {
	cppVar_58267 = TH1;
	} else {
	BIT_VEC cppVar_58273;
	BIT_VEC cppVar_58274 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58275 = (cppVar_58274 << 3) | 0;
	cppVar_58275 = (cppVar_58275 & cppMask_un_5_);
	BIT_VEC cppVar_58276 = (0 << 5) | cppVar_58275;
	cppVar_58276 = (cppVar_58276 & cppMask_un_8_);
	bool cppVar_58278 = (cppVar_58276 == 144);
	if (cppVar_58278) {
	cppVar_58273 = P1;
	} else {
	BIT_VEC cppVar_58279;
	BIT_VEC cppVar_58280 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58281 = (cppVar_58280 << 3) | 0;
	cppVar_58281 = (cppVar_58281 & cppMask_un_5_);
	BIT_VEC cppVar_58282 = (0 << 5) | cppVar_58281;
	cppVar_58282 = (cppVar_58282 & cppMask_un_8_);
	bool cppVar_58284 = (cppVar_58282 == 152);
	if (cppVar_58284) {
	cppVar_58279 = SCON;
	} else {
	BIT_VEC cppVar_58285;
	BIT_VEC cppVar_58286 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58287 = (cppVar_58286 << 3) | 0;
	cppVar_58287 = (cppVar_58287 & cppMask_un_5_);
	BIT_VEC cppVar_58288 = (0 << 5) | cppVar_58287;
	cppVar_58288 = (cppVar_58288 & cppMask_un_8_);
	bool cppVar_58290 = (cppVar_58288 == 153);
	if (cppVar_58290) {
	cppVar_58285 = SBUF;
	} else {
	BIT_VEC cppVar_58291;
	BIT_VEC cppVar_58292 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58293 = (cppVar_58292 << 3) | 0;
	cppVar_58293 = (cppVar_58293 & cppMask_un_5_);
	BIT_VEC cppVar_58294 = (0 << 5) | cppVar_58293;
	cppVar_58294 = (cppVar_58294 & cppMask_un_8_);
	bool cppVar_58296 = (cppVar_58294 == 160);
	if (cppVar_58296) {
	cppVar_58291 = P2;
	} else {
	BIT_VEC cppVar_58297;
	BIT_VEC cppVar_58298 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58299 = (cppVar_58298 << 3) | 0;
	cppVar_58299 = (cppVar_58299 & cppMask_un_5_);
	BIT_VEC cppVar_58300 = (0 << 5) | cppVar_58299;
	cppVar_58300 = (cppVar_58300 & cppMask_un_8_);
	bool cppVar_58302 = (cppVar_58300 == 168);
	if (cppVar_58302) {
	cppVar_58297 = IE;
	} else {
	BIT_VEC cppVar_58303;
	BIT_VEC cppVar_58304 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58305 = (cppVar_58304 << 3) | 0;
	cppVar_58305 = (cppVar_58305 & cppMask_un_5_);
	BIT_VEC cppVar_58306 = (0 << 5) | cppVar_58305;
	cppVar_58306 = (cppVar_58306 & cppMask_un_8_);
	bool cppVar_58308 = (cppVar_58306 == 176);
	if (cppVar_58308) {
	cppVar_58303 = P3;
	} else {
	BIT_VEC cppVar_58309;
	BIT_VEC cppVar_58310 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58311 = (cppVar_58310 << 3) | 0;
	cppVar_58311 = (cppVar_58311 & cppMask_un_5_);
	BIT_VEC cppVar_58312 = (0 << 5) | cppVar_58311;
	cppVar_58312 = (cppVar_58312 & cppMask_un_8_);
	bool cppVar_58314 = (cppVar_58312 == 184);
	if (cppVar_58314) {
	cppVar_58309 = IP;
	} else {
	BIT_VEC cppVar_58315;
	BIT_VEC cppVar_58316 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58317 = (cppVar_58316 << 3) | 0;
	cppVar_58317 = (cppVar_58317 & cppMask_un_5_);
	BIT_VEC cppVar_58318 = (0 << 5) | cppVar_58317;
	cppVar_58318 = (cppVar_58318 & cppMask_un_8_);
	bool cppVar_58320 = (cppVar_58318 == 208);
	if (cppVar_58320) {
	cppVar_58315 = PSW;
	} else {
	BIT_VEC cppVar_58321;
	BIT_VEC cppVar_58322 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58323 = (cppVar_58322 << 3) | 0;
	cppVar_58323 = (cppVar_58323 & cppMask_un_5_);
	BIT_VEC cppVar_58324 = (0 << 5) | cppVar_58323;
	cppVar_58324 = (cppVar_58324 & cppMask_un_8_);
	bool cppVar_58326 = (cppVar_58324 == 224);
	if (cppVar_58326) {
	cppVar_58321 = ACC;
	} else {
	BIT_VEC cppVar_58327;
	BIT_VEC cppVar_58328 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58329 = (cppVar_58328 << 3) | 0;
	cppVar_58329 = (cppVar_58329 & cppMask_un_5_);
	BIT_VEC cppVar_58330 = (0 << 5) | cppVar_58329;
	cppVar_58330 = (cppVar_58330 & cppMask_un_8_);
	bool cppVar_58332 = (cppVar_58330 == 240);
	if (cppVar_58332) {
	cppVar_58327 = B;
	} else {
	cppVar_58327 = 0;
	}
	cppVar_58321 = cppVar_58327;
	}
	cppVar_58315 = cppVar_58321;
	}
	cppVar_58309 = cppVar_58315;
	}
	cppVar_58303 = cppVar_58309;
	}
	cppVar_58297 = cppVar_58303;
	}
	cppVar_58291 = cppVar_58297;
	}
	cppVar_58285 = cppVar_58291;
	}
	cppVar_58279 = cppVar_58285;
	}
	cppVar_58273 = cppVar_58279;
	}
	cppVar_58267 = cppVar_58273;
	}
	cppVar_58261 = cppVar_58267;
	}
	cppVar_58255 = cppVar_58261;
	}
	cppVar_58249 = cppVar_58255;
	}
	cppVar_58243 = cppVar_58249;
	}
	cppVar_58237 = cppVar_58243;
	}
	cppVar_58231 = cppVar_58237;
	}
	cppVar_58225 = cppVar_58231;
	}
	cppVar_58219 = cppVar_58225;
	}
	cppVar_58213 = cppVar_58219;
	}
	cppVar_58207 = cppVar_58213;
	}
	cppVar_58194 = cppVar_58207;
	}
	cppVar_58188 = cppVar_58194;
	} else {
	cppVar_58188 = SBUF;
	}
	cppVar_58184 = cppVar_58188;
	} else {
	BIT_VEC cppVar_58334;
	BIT_VEC cppVar_58335 = ROM.rd(PC);
	bool cppVar_58337 = (cppVar_58335 == 135);
	if (cppVar_58337) {
	BIT_VEC cppVar_58338;
	BIT_VEC cppVar_58340 = PC + 1;
	cppVar_58340 = (cppVar_58340 & cppMask_un_16_);
	BIT_VEC cppVar_58341 = ROM.rd(cppVar_58340);
	bool cppVar_58343 = (cppVar_58341 == 153);
	if (cppVar_58343) {
	BIT_VEC cppVar_58345 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58347 = (cppVar_58345 << 3) | 1;
	cppVar_58347 = (cppVar_58347 & cppMask_un_5_);
	BIT_VEC cppVar_58348 = (0 << 5) | cppVar_58347;
	cppVar_58348 = (cppVar_58348 & cppMask_un_8_);
	BIT_VEC cppVar_58349 = IRAM.rd(cppVar_58348);
	BIT_VEC cppVar_58350 = IRAM.rd(cppVar_58349);
	cppVar_58338 = cppVar_58350;
	} else {
	cppVar_58338 = SBUF;
	}
	cppVar_58334 = cppVar_58338;
	} else {
	BIT_VEC cppVar_58351;
	BIT_VEC cppVar_58352 = ROM.rd(PC);
	bool cppVar_58354 = (cppVar_58352 == 134);
	if (cppVar_58354) {
	BIT_VEC cppVar_58355;
	BIT_VEC cppVar_58357 = PC + 1;
	cppVar_58357 = (cppVar_58357 & cppMask_un_16_);
	BIT_VEC cppVar_58358 = ROM.rd(cppVar_58357);
	bool cppVar_58360 = (cppVar_58358 == 153);
	if (cppVar_58360) {
	BIT_VEC cppVar_58362 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_58364 = (cppVar_58362 << 3) | 0;
	cppVar_58364 = (cppVar_58364 & cppMask_un_5_);
	BIT_VEC cppVar_58365 = (0 << 5) | cppVar_58364;
	cppVar_58365 = (cppVar_58365 & cppMask_un_8_);
	BIT_VEC cppVar_58366 = IRAM.rd(cppVar_58365);
	BIT_VEC cppVar_58367 = IRAM.rd(cppVar_58366);
	cppVar_58355 = cppVar_58367;
	} else {
	cppVar_58355 = SBUF;
	}
	cppVar_58351 = cppVar_58355;
	} else {
	BIT_VEC cppVar_58368;
	BIT_VEC cppVar_58369 = ROM.rd(PC);
	bool cppVar_58371 = (cppVar_58369 == 133);
	if (cppVar_58371) {
	BIT_VEC cppVar_58372;
	BIT_VEC cppVar_58374 = PC + 2;
	cppVar_58374 = (cppVar_58374 & cppMask_un_16_);
	BIT_VEC cppVar_58375 = ROM.rd(cppVar_58374);
	bool cppVar_58377 = (cppVar_58375 == 153);
	if (cppVar_58377) {
	BIT_VEC cppVar_58378;
	BIT_VEC cppVar_58380 = PC + 1;
	cppVar_58380 = (cppVar_58380 & cppMask_un_16_);
	BIT_VEC cppVar_58381 = ROM.rd(cppVar_58380);
	BIT_VEC cppVar_58382 = (cppVar_58381 >> 7) & cppMask_un_1_;
	bool cppVar_58384 = (cppVar_58382 == 0);
	if (cppVar_58384) {
	BIT_VEC cppVar_58385 = PC + 1;
	cppVar_58385 = (cppVar_58385 & cppMask_un_16_);
	BIT_VEC cppVar_58386 = ROM.rd(cppVar_58385);
	BIT_VEC cppVar_58387 = IRAM.rd(cppVar_58386);
	cppVar_58378 = cppVar_58387;
	} else {
	BIT_VEC cppVar_58388;
	BIT_VEC cppVar_58389 = PC + 1;
	cppVar_58389 = (cppVar_58389 & cppMask_un_16_);
	BIT_VEC cppVar_58390 = ROM.rd(cppVar_58389);
	bool cppVar_58392 = (cppVar_58390 == 128);
	if (cppVar_58392) {
	cppVar_58388 = P0;
	} else {
	BIT_VEC cppVar_58393;
	BIT_VEC cppVar_58394 = PC + 1;
	cppVar_58394 = (cppVar_58394 & cppMask_un_16_);
	BIT_VEC cppVar_58395 = ROM.rd(cppVar_58394);
	bool cppVar_58397 = (cppVar_58395 == 129);
	if (cppVar_58397) {
	cppVar_58393 = SP;
	} else {
	BIT_VEC cppVar_58398;
	BIT_VEC cppVar_58399 = PC + 1;
	cppVar_58399 = (cppVar_58399 & cppMask_un_16_);
	BIT_VEC cppVar_58400 = ROM.rd(cppVar_58399);
	bool cppVar_58402 = (cppVar_58400 == 130);
	if (cppVar_58402) {
	cppVar_58398 = DPL;
	} else {
	BIT_VEC cppVar_58403;
	BIT_VEC cppVar_58404 = PC + 1;
	cppVar_58404 = (cppVar_58404 & cppMask_un_16_);
	BIT_VEC cppVar_58405 = ROM.rd(cppVar_58404);
	bool cppVar_58407 = (cppVar_58405 == 131);
	if (cppVar_58407) {
	cppVar_58403 = DPH;
	} else {
	BIT_VEC cppVar_58408;
	BIT_VEC cppVar_58409 = PC + 1;
	cppVar_58409 = (cppVar_58409 & cppMask_un_16_);
	BIT_VEC cppVar_58410 = ROM.rd(cppVar_58409);
	bool cppVar_58412 = (cppVar_58410 == 135);
	if (cppVar_58412) {
	cppVar_58408 = PCON;
	} else {
	BIT_VEC cppVar_58413;
	BIT_VEC cppVar_58414 = PC + 1;
	cppVar_58414 = (cppVar_58414 & cppMask_un_16_);
	BIT_VEC cppVar_58415 = ROM.rd(cppVar_58414);
	bool cppVar_58417 = (cppVar_58415 == 136);
	if (cppVar_58417) {
	cppVar_58413 = TCON;
	} else {
	BIT_VEC cppVar_58418;
	BIT_VEC cppVar_58419 = PC + 1;
	cppVar_58419 = (cppVar_58419 & cppMask_un_16_);
	BIT_VEC cppVar_58420 = ROM.rd(cppVar_58419);
	bool cppVar_58422 = (cppVar_58420 == 137);
	if (cppVar_58422) {
	cppVar_58418 = TMOD;
	} else {
	BIT_VEC cppVar_58423;
	BIT_VEC cppVar_58424 = PC + 1;
	cppVar_58424 = (cppVar_58424 & cppMask_un_16_);
	BIT_VEC cppVar_58425 = ROM.rd(cppVar_58424);
	bool cppVar_58427 = (cppVar_58425 == 138);
	if (cppVar_58427) {
	cppVar_58423 = TL0;
	} else {
	BIT_VEC cppVar_58428;
	BIT_VEC cppVar_58429 = PC + 1;
	cppVar_58429 = (cppVar_58429 & cppMask_un_16_);
	BIT_VEC cppVar_58430 = ROM.rd(cppVar_58429);
	bool cppVar_58432 = (cppVar_58430 == 140);
	if (cppVar_58432) {
	cppVar_58428 = TH0;
	} else {
	BIT_VEC cppVar_58433;
	BIT_VEC cppVar_58434 = PC + 1;
	cppVar_58434 = (cppVar_58434 & cppMask_un_16_);
	BIT_VEC cppVar_58435 = ROM.rd(cppVar_58434);
	bool cppVar_58437 = (cppVar_58435 == 139);
	if (cppVar_58437) {
	cppVar_58433 = TL1;
	} else {
	BIT_VEC cppVar_58438;
	BIT_VEC cppVar_58439 = PC + 1;
	cppVar_58439 = (cppVar_58439 & cppMask_un_16_);
	BIT_VEC cppVar_58440 = ROM.rd(cppVar_58439);
	bool cppVar_58442 = (cppVar_58440 == 141);
	if (cppVar_58442) {
	cppVar_58438 = TH1;
	} else {
	BIT_VEC cppVar_58443;
	BIT_VEC cppVar_58444 = PC + 1;
	cppVar_58444 = (cppVar_58444 & cppMask_un_16_);
	BIT_VEC cppVar_58445 = ROM.rd(cppVar_58444);
	bool cppVar_58447 = (cppVar_58445 == 144);
	if (cppVar_58447) {
	cppVar_58443 = P1;
	} else {
	BIT_VEC cppVar_58448;
	BIT_VEC cppVar_58449 = PC + 1;
	cppVar_58449 = (cppVar_58449 & cppMask_un_16_);
	BIT_VEC cppVar_58450 = ROM.rd(cppVar_58449);
	bool cppVar_58452 = (cppVar_58450 == 152);
	if (cppVar_58452) {
	cppVar_58448 = SCON;
	} else {
	BIT_VEC cppVar_58453;
	BIT_VEC cppVar_58454 = PC + 1;
	cppVar_58454 = (cppVar_58454 & cppMask_un_16_);
	BIT_VEC cppVar_58455 = ROM.rd(cppVar_58454);
	bool cppVar_58457 = (cppVar_58455 == 153);
	if (cppVar_58457) {
	cppVar_58453 = SBUF;
	} else {
	BIT_VEC cppVar_58458;
	BIT_VEC cppVar_58459 = PC + 1;
	cppVar_58459 = (cppVar_58459 & cppMask_un_16_);
	BIT_VEC cppVar_58460 = ROM.rd(cppVar_58459);
	bool cppVar_58462 = (cppVar_58460 == 160);
	if (cppVar_58462) {
	cppVar_58458 = P2;
	} else {
	BIT_VEC cppVar_58463;
	BIT_VEC cppVar_58464 = PC + 1;
	cppVar_58464 = (cppVar_58464 & cppMask_un_16_);
	BIT_VEC cppVar_58465 = ROM.rd(cppVar_58464);
	bool cppVar_58467 = (cppVar_58465 == 168);
	if (cppVar_58467) {
	cppVar_58463 = IE;
	} else {
	BIT_VEC cppVar_58468;
	BIT_VEC cppVar_58469 = PC + 1;
	cppVar_58469 = (cppVar_58469 & cppMask_un_16_);
	BIT_VEC cppVar_58470 = ROM.rd(cppVar_58469);
	bool cppVar_58472 = (cppVar_58470 == 176);
	if (cppVar_58472) {
	cppVar_58468 = P3;
	} else {
	BIT_VEC cppVar_58473;
	BIT_VEC cppVar_58474 = PC + 1;
	cppVar_58474 = (cppVar_58474 & cppMask_un_16_);
	BIT_VEC cppVar_58475 = ROM.rd(cppVar_58474);
	bool cppVar_58477 = (cppVar_58475 == 184);
	if (cppVar_58477) {
	cppVar_58473 = IP;
	} else {
	BIT_VEC cppVar_58478;
	BIT_VEC cppVar_58479 = PC + 1;
	cppVar_58479 = (cppVar_58479 & cppMask_un_16_);
	BIT_VEC cppVar_58480 = ROM.rd(cppVar_58479);
	bool cppVar_58482 = (cppVar_58480 == 208);
	if (cppVar_58482) {
	cppVar_58478 = PSW;
	} else {
	BIT_VEC cppVar_58483;
	BIT_VEC cppVar_58484 = PC + 1;
	cppVar_58484 = (cppVar_58484 & cppMask_un_16_);
	BIT_VEC cppVar_58485 = ROM.rd(cppVar_58484);
	bool cppVar_58487 = (cppVar_58485 == 224);
	if (cppVar_58487) {
	cppVar_58483 = ACC;
	} else {
	BIT_VEC cppVar_58488;
	BIT_VEC cppVar_58489 = PC + 1;
	cppVar_58489 = (cppVar_58489 & cppMask_un_16_);
	BIT_VEC cppVar_58490 = ROM.rd(cppVar_58489);
	bool cppVar_58492 = (cppVar_58490 == 240);
	if (cppVar_58492) {
	cppVar_58488 = B;
	} else {
	cppVar_58488 = 0;
	}
	cppVar_58483 = cppVar_58488;
	}
	cppVar_58478 = cppVar_58483;
	}
	cppVar_58473 = cppVar_58478;
	}
	cppVar_58468 = cppVar_58473;
	}
	cppVar_58463 = cppVar_58468;
	}
	cppVar_58458 = cppVar_58463;
	}
	cppVar_58453 = cppVar_58458;
	}
	cppVar_58448 = cppVar_58453;
	}
	cppVar_58443 = cppVar_58448;
	}
	cppVar_58438 = cppVar_58443;
	}
	cppVar_58433 = cppVar_58438;
	}
	cppVar_58428 = cppVar_58433;
	}
	cppVar_58423 = cppVar_58428;
	}
	cppVar_58418 = cppVar_58423;
	}
	cppVar_58413 = cppVar_58418;
	}
	cppVar_58408 = cppVar_58413;
	}
	cppVar_58403 = cppVar_58408;
	}
	cppVar_58398 = cppVar_58403;
	}
	cppVar_58393 = cppVar_58398;
	}
	cppVar_58388 = cppVar_58393;
	}
	cppVar_58378 = cppVar_58388;
	}
	cppVar_58372 = cppVar_58378;
	} else {
	cppVar_58372 = SBUF;
	}
	cppVar_58368 = cppVar_58372;
	} else {
	BIT_VEC cppVar_58494;
	BIT_VEC cppVar_58495 = ROM.rd(PC);
	bool cppVar_58497 = (cppVar_58495 == 117);
	if (cppVar_58497) {
	BIT_VEC cppVar_58498;
	BIT_VEC cppVar_58500 = PC + 1;
	cppVar_58500 = (cppVar_58500 & cppMask_un_16_);
	BIT_VEC cppVar_58501 = ROM.rd(cppVar_58500);
	bool cppVar_58503 = (cppVar_58501 == 153);
	if (cppVar_58503) {
	BIT_VEC cppVar_58505 = PC + 2;
	cppVar_58505 = (cppVar_58505 & cppMask_un_16_);
	BIT_VEC cppVar_58506 = ROM.rd(cppVar_58505);
	cppVar_58498 = cppVar_58506;
	} else {
	cppVar_58498 = SBUF;
	}
	cppVar_58494 = cppVar_58498;
	} else {
	BIT_VEC cppVar_58507;
	BIT_VEC cppVar_58508 = ROM.rd(PC);
	bool cppVar_58510 = (cppVar_58508 == 99);
	if (cppVar_58510) {
	BIT_VEC cppVar_58511;
	BIT_VEC cppVar_58513 = PC + 1;
	cppVar_58513 = (cppVar_58513 & cppMask_un_16_);
	BIT_VEC cppVar_58514 = ROM.rd(cppVar_58513);
	bool cppVar_58516 = (cppVar_58514 == 153);
	if (cppVar_58516) {
	BIT_VEC cppVar_58517;
	BIT_VEC cppVar_58518 = PC + 1;
	cppVar_58518 = (cppVar_58518 & cppMask_un_16_);
	BIT_VEC cppVar_58519 = ROM.rd(cppVar_58518);
	BIT_VEC cppVar_58520 = (cppVar_58519 >> 7) & cppMask_un_1_;
	bool cppVar_58522 = (cppVar_58520 == 0);
	if (cppVar_58522) {
	BIT_VEC cppVar_58523 = PC + 1;
	cppVar_58523 = (cppVar_58523 & cppMask_un_16_);
	BIT_VEC cppVar_58524 = ROM.rd(cppVar_58523);
	BIT_VEC cppVar_58525 = IRAM.rd(cppVar_58524);
	cppVar_58517 = cppVar_58525;
	} else {
	BIT_VEC cppVar_58526;
	BIT_VEC cppVar_58527 = PC + 1;
	cppVar_58527 = (cppVar_58527 & cppMask_un_16_);
	BIT_VEC cppVar_58528 = ROM.rd(cppVar_58527);
	bool cppVar_58530 = (cppVar_58528 == 128);
	if (cppVar_58530) {
	cppVar_58526 = P0;
	} else {
	BIT_VEC cppVar_58531;
	BIT_VEC cppVar_58532 = PC + 1;
	cppVar_58532 = (cppVar_58532 & cppMask_un_16_);
	BIT_VEC cppVar_58533 = ROM.rd(cppVar_58532);
	bool cppVar_58535 = (cppVar_58533 == 129);
	if (cppVar_58535) {
	cppVar_58531 = SP;
	} else {
	BIT_VEC cppVar_58536;
	BIT_VEC cppVar_58537 = PC + 1;
	cppVar_58537 = (cppVar_58537 & cppMask_un_16_);
	BIT_VEC cppVar_58538 = ROM.rd(cppVar_58537);
	bool cppVar_58540 = (cppVar_58538 == 130);
	if (cppVar_58540) {
	cppVar_58536 = DPL;
	} else {
	BIT_VEC cppVar_58541;
	BIT_VEC cppVar_58542 = PC + 1;
	cppVar_58542 = (cppVar_58542 & cppMask_un_16_);
	BIT_VEC cppVar_58543 = ROM.rd(cppVar_58542);
	bool cppVar_58545 = (cppVar_58543 == 131);
	if (cppVar_58545) {
	cppVar_58541 = DPH;
	} else {
	BIT_VEC cppVar_58546;
	BIT_VEC cppVar_58547 = PC + 1;
	cppVar_58547 = (cppVar_58547 & cppMask_un_16_);
	BIT_VEC cppVar_58548 = ROM.rd(cppVar_58547);
	bool cppVar_58550 = (cppVar_58548 == 135);
	if (cppVar_58550) {
	cppVar_58546 = PCON;
	} else {
	BIT_VEC cppVar_58551;
	BIT_VEC cppVar_58552 = PC + 1;
	cppVar_58552 = (cppVar_58552 & cppMask_un_16_);
	BIT_VEC cppVar_58553 = ROM.rd(cppVar_58552);
	bool cppVar_58555 = (cppVar_58553 == 136);
	if (cppVar_58555) {
	cppVar_58551 = TCON;
	} else {
	BIT_VEC cppVar_58556;
	BIT_VEC cppVar_58557 = PC + 1;
	cppVar_58557 = (cppVar_58557 & cppMask_un_16_);
	BIT_VEC cppVar_58558 = ROM.rd(cppVar_58557);
	bool cppVar_58560 = (cppVar_58558 == 137);
	if (cppVar_58560) {
	cppVar_58556 = TMOD;
	} else {
	BIT_VEC cppVar_58561;
	BIT_VEC cppVar_58562 = PC + 1;
	cppVar_58562 = (cppVar_58562 & cppMask_un_16_);
	BIT_VEC cppVar_58563 = ROM.rd(cppVar_58562);
	bool cppVar_58565 = (cppVar_58563 == 138);
	if (cppVar_58565) {
	cppVar_58561 = TL0;
	} else {
	BIT_VEC cppVar_58566;
	BIT_VEC cppVar_58567 = PC + 1;
	cppVar_58567 = (cppVar_58567 & cppMask_un_16_);
	BIT_VEC cppVar_58568 = ROM.rd(cppVar_58567);
	bool cppVar_58570 = (cppVar_58568 == 140);
	if (cppVar_58570) {
	cppVar_58566 = TH0;
	} else {
	BIT_VEC cppVar_58571;
	BIT_VEC cppVar_58572 = PC + 1;
	cppVar_58572 = (cppVar_58572 & cppMask_un_16_);
	BIT_VEC cppVar_58573 = ROM.rd(cppVar_58572);
	bool cppVar_58575 = (cppVar_58573 == 139);
	if (cppVar_58575) {
	cppVar_58571 = TL1;
	} else {
	BIT_VEC cppVar_58576;
	BIT_VEC cppVar_58577 = PC + 1;
	cppVar_58577 = (cppVar_58577 & cppMask_un_16_);
	BIT_VEC cppVar_58578 = ROM.rd(cppVar_58577);
	bool cppVar_58580 = (cppVar_58578 == 141);
	if (cppVar_58580) {
	cppVar_58576 = TH1;
	} else {
	BIT_VEC cppVar_58581;
	BIT_VEC cppVar_58582 = PC + 1;
	cppVar_58582 = (cppVar_58582 & cppMask_un_16_);
	BIT_VEC cppVar_58583 = ROM.rd(cppVar_58582);
	bool cppVar_58585 = (cppVar_58583 == 144);
	if (cppVar_58585) {
	cppVar_58581 = P1;
	} else {
	BIT_VEC cppVar_58586;
	BIT_VEC cppVar_58587 = PC + 1;
	cppVar_58587 = (cppVar_58587 & cppMask_un_16_);
	BIT_VEC cppVar_58588 = ROM.rd(cppVar_58587);
	bool cppVar_58590 = (cppVar_58588 == 152);
	if (cppVar_58590) {
	cppVar_58586 = SCON;
	} else {
	BIT_VEC cppVar_58591;
	BIT_VEC cppVar_58592 = PC + 1;
	cppVar_58592 = (cppVar_58592 & cppMask_un_16_);
	BIT_VEC cppVar_58593 = ROM.rd(cppVar_58592);
	bool cppVar_58595 = (cppVar_58593 == 153);
	if (cppVar_58595) {
	cppVar_58591 = SBUF;
	} else {
	BIT_VEC cppVar_58596;
	BIT_VEC cppVar_58597 = PC + 1;
	cppVar_58597 = (cppVar_58597 & cppMask_un_16_);
	BIT_VEC cppVar_58598 = ROM.rd(cppVar_58597);
	bool cppVar_58600 = (cppVar_58598 == 160);
	if (cppVar_58600) {
	cppVar_58596 = P2;
	} else {
	BIT_VEC cppVar_58601;
	BIT_VEC cppVar_58602 = PC + 1;
	cppVar_58602 = (cppVar_58602 & cppMask_un_16_);
	BIT_VEC cppVar_58603 = ROM.rd(cppVar_58602);
	bool cppVar_58605 = (cppVar_58603 == 168);
	if (cppVar_58605) {
	cppVar_58601 = IE;
	} else {
	BIT_VEC cppVar_58606;
	BIT_VEC cppVar_58607 = PC + 1;
	cppVar_58607 = (cppVar_58607 & cppMask_un_16_);
	BIT_VEC cppVar_58608 = ROM.rd(cppVar_58607);
	bool cppVar_58610 = (cppVar_58608 == 176);
	if (cppVar_58610) {
	cppVar_58606 = P3;
	} else {
	BIT_VEC cppVar_58611;
	BIT_VEC cppVar_58612 = PC + 1;
	cppVar_58612 = (cppVar_58612 & cppMask_un_16_);
	BIT_VEC cppVar_58613 = ROM.rd(cppVar_58612);
	bool cppVar_58615 = (cppVar_58613 == 184);
	if (cppVar_58615) {
	cppVar_58611 = IP;
	} else {
	BIT_VEC cppVar_58616;
	BIT_VEC cppVar_58617 = PC + 1;
	cppVar_58617 = (cppVar_58617 & cppMask_un_16_);
	BIT_VEC cppVar_58618 = ROM.rd(cppVar_58617);
	bool cppVar_58620 = (cppVar_58618 == 208);
	if (cppVar_58620) {
	cppVar_58616 = PSW;
	} else {
	BIT_VEC cppVar_58621;
	BIT_VEC cppVar_58622 = PC + 1;
	cppVar_58622 = (cppVar_58622 & cppMask_un_16_);
	BIT_VEC cppVar_58623 = ROM.rd(cppVar_58622);
	bool cppVar_58625 = (cppVar_58623 == 224);
	if (cppVar_58625) {
	cppVar_58621 = ACC;
	} else {
	BIT_VEC cppVar_58626;
	BIT_VEC cppVar_58627 = PC + 1;
	cppVar_58627 = (cppVar_58627 & cppMask_un_16_);
	BIT_VEC cppVar_58628 = ROM.rd(cppVar_58627);
	bool cppVar_58630 = (cppVar_58628 == 240);
	if (cppVar_58630) {
	cppVar_58626 = B;
	} else {
	cppVar_58626 = 0;
	}
	cppVar_58621 = cppVar_58626;
	}
	cppVar_58616 = cppVar_58621;
	}
	cppVar_58611 = cppVar_58616;
	}
	cppVar_58606 = cppVar_58611;
	}
	cppVar_58601 = cppVar_58606;
	}
	cppVar_58596 = cppVar_58601;
	}
	cppVar_58591 = cppVar_58596;
	}
	cppVar_58586 = cppVar_58591;
	}
	cppVar_58581 = cppVar_58586;
	}
	cppVar_58576 = cppVar_58581;
	}
	cppVar_58571 = cppVar_58576;
	}
	cppVar_58566 = cppVar_58571;
	}
	cppVar_58561 = cppVar_58566;
	}
	cppVar_58556 = cppVar_58561;
	}
	cppVar_58551 = cppVar_58556;
	}
	cppVar_58546 = cppVar_58551;
	}
	cppVar_58541 = cppVar_58546;
	}
	cppVar_58536 = cppVar_58541;
	}
	cppVar_58531 = cppVar_58536;
	}
	cppVar_58526 = cppVar_58531;
	}
	cppVar_58517 = cppVar_58526;
	}
	BIT_VEC cppVar_58633 = PC + 2;
	cppVar_58633 = (cppVar_58633 & cppMask_un_16_);
	BIT_VEC cppVar_58634 = ROM.rd(cppVar_58633);
	BIT_VEC cppVar_58635 = cppVar_58517 ^ cppVar_58634;
	cppVar_58511 = cppVar_58635;
	} else {
	cppVar_58511 = SBUF;
	}
	cppVar_58507 = cppVar_58511;
	} else {
	BIT_VEC cppVar_58636;
	BIT_VEC cppVar_58637 = ROM.rd(PC);
	bool cppVar_58639 = (cppVar_58637 == 98);
	if (cppVar_58639) {
	BIT_VEC cppVar_58640;
	BIT_VEC cppVar_58642 = PC + 1;
	cppVar_58642 = (cppVar_58642 & cppMask_un_16_);
	BIT_VEC cppVar_58643 = ROM.rd(cppVar_58642);
	bool cppVar_58645 = (cppVar_58643 == 153);
	if (cppVar_58645) {
	BIT_VEC cppVar_58646;
	BIT_VEC cppVar_58647 = PC + 1;
	cppVar_58647 = (cppVar_58647 & cppMask_un_16_);
	BIT_VEC cppVar_58648 = ROM.rd(cppVar_58647);
	BIT_VEC cppVar_58649 = (cppVar_58648 >> 7) & cppMask_un_1_;
	bool cppVar_58651 = (cppVar_58649 == 0);
	if (cppVar_58651) {
	BIT_VEC cppVar_58652 = PC + 1;
	cppVar_58652 = (cppVar_58652 & cppMask_un_16_);
	BIT_VEC cppVar_58653 = ROM.rd(cppVar_58652);
	BIT_VEC cppVar_58654 = IRAM.rd(cppVar_58653);
	cppVar_58646 = cppVar_58654;
	} else {
	BIT_VEC cppVar_58655;
	BIT_VEC cppVar_58656 = PC + 1;
	cppVar_58656 = (cppVar_58656 & cppMask_un_16_);
	BIT_VEC cppVar_58657 = ROM.rd(cppVar_58656);
	bool cppVar_58659 = (cppVar_58657 == 128);
	if (cppVar_58659) {
	cppVar_58655 = P0;
	} else {
	BIT_VEC cppVar_58660;
	BIT_VEC cppVar_58661 = PC + 1;
	cppVar_58661 = (cppVar_58661 & cppMask_un_16_);
	BIT_VEC cppVar_58662 = ROM.rd(cppVar_58661);
	bool cppVar_58664 = (cppVar_58662 == 129);
	if (cppVar_58664) {
	cppVar_58660 = SP;
	} else {
	BIT_VEC cppVar_58665;
	BIT_VEC cppVar_58666 = PC + 1;
	cppVar_58666 = (cppVar_58666 & cppMask_un_16_);
	BIT_VEC cppVar_58667 = ROM.rd(cppVar_58666);
	bool cppVar_58669 = (cppVar_58667 == 130);
	if (cppVar_58669) {
	cppVar_58665 = DPL;
	} else {
	BIT_VEC cppVar_58670;
	BIT_VEC cppVar_58671 = PC + 1;
	cppVar_58671 = (cppVar_58671 & cppMask_un_16_);
	BIT_VEC cppVar_58672 = ROM.rd(cppVar_58671);
	bool cppVar_58674 = (cppVar_58672 == 131);
	if (cppVar_58674) {
	cppVar_58670 = DPH;
	} else {
	BIT_VEC cppVar_58675;
	BIT_VEC cppVar_58676 = PC + 1;
	cppVar_58676 = (cppVar_58676 & cppMask_un_16_);
	BIT_VEC cppVar_58677 = ROM.rd(cppVar_58676);
	bool cppVar_58679 = (cppVar_58677 == 135);
	if (cppVar_58679) {
	cppVar_58675 = PCON;
	} else {
	BIT_VEC cppVar_58680;
	BIT_VEC cppVar_58681 = PC + 1;
	cppVar_58681 = (cppVar_58681 & cppMask_un_16_);
	BIT_VEC cppVar_58682 = ROM.rd(cppVar_58681);
	bool cppVar_58684 = (cppVar_58682 == 136);
	if (cppVar_58684) {
	cppVar_58680 = TCON;
	} else {
	BIT_VEC cppVar_58685;
	BIT_VEC cppVar_58686 = PC + 1;
	cppVar_58686 = (cppVar_58686 & cppMask_un_16_);
	BIT_VEC cppVar_58687 = ROM.rd(cppVar_58686);
	bool cppVar_58689 = (cppVar_58687 == 137);
	if (cppVar_58689) {
	cppVar_58685 = TMOD;
	} else {
	BIT_VEC cppVar_58690;
	BIT_VEC cppVar_58691 = PC + 1;
	cppVar_58691 = (cppVar_58691 & cppMask_un_16_);
	BIT_VEC cppVar_58692 = ROM.rd(cppVar_58691);
	bool cppVar_58694 = (cppVar_58692 == 138);
	if (cppVar_58694) {
	cppVar_58690 = TL0;
	} else {
	BIT_VEC cppVar_58695;
	BIT_VEC cppVar_58696 = PC + 1;
	cppVar_58696 = (cppVar_58696 & cppMask_un_16_);
	BIT_VEC cppVar_58697 = ROM.rd(cppVar_58696);
	bool cppVar_58699 = (cppVar_58697 == 140);
	if (cppVar_58699) {
	cppVar_58695 = TH0;
	} else {
	BIT_VEC cppVar_58700;
	BIT_VEC cppVar_58701 = PC + 1;
	cppVar_58701 = (cppVar_58701 & cppMask_un_16_);
	BIT_VEC cppVar_58702 = ROM.rd(cppVar_58701);
	bool cppVar_58704 = (cppVar_58702 == 139);
	if (cppVar_58704) {
	cppVar_58700 = TL1;
	} else {
	BIT_VEC cppVar_58705;
	BIT_VEC cppVar_58706 = PC + 1;
	cppVar_58706 = (cppVar_58706 & cppMask_un_16_);
	BIT_VEC cppVar_58707 = ROM.rd(cppVar_58706);
	bool cppVar_58709 = (cppVar_58707 == 141);
	if (cppVar_58709) {
	cppVar_58705 = TH1;
	} else {
	BIT_VEC cppVar_58710;
	BIT_VEC cppVar_58711 = PC + 1;
	cppVar_58711 = (cppVar_58711 & cppMask_un_16_);
	BIT_VEC cppVar_58712 = ROM.rd(cppVar_58711);
	bool cppVar_58714 = (cppVar_58712 == 144);
	if (cppVar_58714) {
	cppVar_58710 = P1;
	} else {
	BIT_VEC cppVar_58715;
	BIT_VEC cppVar_58716 = PC + 1;
	cppVar_58716 = (cppVar_58716 & cppMask_un_16_);
	BIT_VEC cppVar_58717 = ROM.rd(cppVar_58716);
	bool cppVar_58719 = (cppVar_58717 == 152);
	if (cppVar_58719) {
	cppVar_58715 = SCON;
	} else {
	BIT_VEC cppVar_58720;
	BIT_VEC cppVar_58721 = PC + 1;
	cppVar_58721 = (cppVar_58721 & cppMask_un_16_);
	BIT_VEC cppVar_58722 = ROM.rd(cppVar_58721);
	bool cppVar_58724 = (cppVar_58722 == 153);
	if (cppVar_58724) {
	cppVar_58720 = SBUF;
	} else {
	BIT_VEC cppVar_58725;
	BIT_VEC cppVar_58726 = PC + 1;
	cppVar_58726 = (cppVar_58726 & cppMask_un_16_);
	BIT_VEC cppVar_58727 = ROM.rd(cppVar_58726);
	bool cppVar_58729 = (cppVar_58727 == 160);
	if (cppVar_58729) {
	cppVar_58725 = P2;
	} else {
	BIT_VEC cppVar_58730;
	BIT_VEC cppVar_58731 = PC + 1;
	cppVar_58731 = (cppVar_58731 & cppMask_un_16_);
	BIT_VEC cppVar_58732 = ROM.rd(cppVar_58731);
	bool cppVar_58734 = (cppVar_58732 == 168);
	if (cppVar_58734) {
	cppVar_58730 = IE;
	} else {
	BIT_VEC cppVar_58735;
	BIT_VEC cppVar_58736 = PC + 1;
	cppVar_58736 = (cppVar_58736 & cppMask_un_16_);
	BIT_VEC cppVar_58737 = ROM.rd(cppVar_58736);
	bool cppVar_58739 = (cppVar_58737 == 176);
	if (cppVar_58739) {
	cppVar_58735 = P3;
	} else {
	BIT_VEC cppVar_58740;
	BIT_VEC cppVar_58741 = PC + 1;
	cppVar_58741 = (cppVar_58741 & cppMask_un_16_);
	BIT_VEC cppVar_58742 = ROM.rd(cppVar_58741);
	bool cppVar_58744 = (cppVar_58742 == 184);
	if (cppVar_58744) {
	cppVar_58740 = IP;
	} else {
	BIT_VEC cppVar_58745;
	BIT_VEC cppVar_58746 = PC + 1;
	cppVar_58746 = (cppVar_58746 & cppMask_un_16_);
	BIT_VEC cppVar_58747 = ROM.rd(cppVar_58746);
	bool cppVar_58749 = (cppVar_58747 == 208);
	if (cppVar_58749) {
	cppVar_58745 = PSW;
	} else {
	BIT_VEC cppVar_58750;
	BIT_VEC cppVar_58751 = PC + 1;
	cppVar_58751 = (cppVar_58751 & cppMask_un_16_);
	BIT_VEC cppVar_58752 = ROM.rd(cppVar_58751);
	bool cppVar_58754 = (cppVar_58752 == 224);
	if (cppVar_58754) {
	cppVar_58750 = ACC;
	} else {
	BIT_VEC cppVar_58755;
	BIT_VEC cppVar_58756 = PC + 1;
	cppVar_58756 = (cppVar_58756 & cppMask_un_16_);
	BIT_VEC cppVar_58757 = ROM.rd(cppVar_58756);
	bool cppVar_58759 = (cppVar_58757 == 240);
	if (cppVar_58759) {
	cppVar_58755 = B;
	} else {
	cppVar_58755 = 0;
	}
	cppVar_58750 = cppVar_58755;
	}
	cppVar_58745 = cppVar_58750;
	}
	cppVar_58740 = cppVar_58745;
	}
	cppVar_58735 = cppVar_58740;
	}
	cppVar_58730 = cppVar_58735;
	}
	cppVar_58725 = cppVar_58730;
	}
	cppVar_58720 = cppVar_58725;
	}
	cppVar_58715 = cppVar_58720;
	}
	cppVar_58710 = cppVar_58715;
	}
	cppVar_58705 = cppVar_58710;
	}
	cppVar_58700 = cppVar_58705;
	}
	cppVar_58695 = cppVar_58700;
	}
	cppVar_58690 = cppVar_58695;
	}
	cppVar_58685 = cppVar_58690;
	}
	cppVar_58680 = cppVar_58685;
	}
	cppVar_58675 = cppVar_58680;
	}
	cppVar_58670 = cppVar_58675;
	}
	cppVar_58665 = cppVar_58670;
	}
	cppVar_58660 = cppVar_58665;
	}
	cppVar_58655 = cppVar_58660;
	}
	cppVar_58646 = cppVar_58655;
	}
	BIT_VEC cppVar_58761 = cppVar_58646 ^ ACC;
	cppVar_58640 = cppVar_58761;
	} else {
	cppVar_58640 = SBUF;
	}
	cppVar_58636 = cppVar_58640;
	} else {
	BIT_VEC cppVar_58762;
	BIT_VEC cppVar_58763 = ROM.rd(PC);
	bool cppVar_58765 = (cppVar_58763 == 83);
	if (cppVar_58765) {
	BIT_VEC cppVar_58766;
	BIT_VEC cppVar_58768 = PC + 1;
	cppVar_58768 = (cppVar_58768 & cppMask_un_16_);
	BIT_VEC cppVar_58769 = ROM.rd(cppVar_58768);
	bool cppVar_58771 = (cppVar_58769 == 153);
	if (cppVar_58771) {
	BIT_VEC cppVar_58772;
	BIT_VEC cppVar_58773 = PC + 1;
	cppVar_58773 = (cppVar_58773 & cppMask_un_16_);
	BIT_VEC cppVar_58774 = ROM.rd(cppVar_58773);
	BIT_VEC cppVar_58775 = (cppVar_58774 >> 7) & cppMask_un_1_;
	bool cppVar_58777 = (cppVar_58775 == 0);
	if (cppVar_58777) {
	BIT_VEC cppVar_58778 = PC + 1;
	cppVar_58778 = (cppVar_58778 & cppMask_un_16_);
	BIT_VEC cppVar_58779 = ROM.rd(cppVar_58778);
	BIT_VEC cppVar_58780 = IRAM.rd(cppVar_58779);
	cppVar_58772 = cppVar_58780;
	} else {
	BIT_VEC cppVar_58781;
	BIT_VEC cppVar_58782 = PC + 1;
	cppVar_58782 = (cppVar_58782 & cppMask_un_16_);
	BIT_VEC cppVar_58783 = ROM.rd(cppVar_58782);
	bool cppVar_58785 = (cppVar_58783 == 128);
	if (cppVar_58785) {
	cppVar_58781 = P0;
	} else {
	BIT_VEC cppVar_58786;
	BIT_VEC cppVar_58787 = PC + 1;
	cppVar_58787 = (cppVar_58787 & cppMask_un_16_);
	BIT_VEC cppVar_58788 = ROM.rd(cppVar_58787);
	bool cppVar_58790 = (cppVar_58788 == 129);
	if (cppVar_58790) {
	cppVar_58786 = SP;
	} else {
	BIT_VEC cppVar_58791;
	BIT_VEC cppVar_58792 = PC + 1;
	cppVar_58792 = (cppVar_58792 & cppMask_un_16_);
	BIT_VEC cppVar_58793 = ROM.rd(cppVar_58792);
	bool cppVar_58795 = (cppVar_58793 == 130);
	if (cppVar_58795) {
	cppVar_58791 = DPL;
	} else {
	BIT_VEC cppVar_58796;
	BIT_VEC cppVar_58797 = PC + 1;
	cppVar_58797 = (cppVar_58797 & cppMask_un_16_);
	BIT_VEC cppVar_58798 = ROM.rd(cppVar_58797);
	bool cppVar_58800 = (cppVar_58798 == 131);
	if (cppVar_58800) {
	cppVar_58796 = DPH;
	} else {
	BIT_VEC cppVar_58801;
	BIT_VEC cppVar_58802 = PC + 1;
	cppVar_58802 = (cppVar_58802 & cppMask_un_16_);
	BIT_VEC cppVar_58803 = ROM.rd(cppVar_58802);
	bool cppVar_58805 = (cppVar_58803 == 135);
	if (cppVar_58805) {
	cppVar_58801 = PCON;
	} else {
	BIT_VEC cppVar_58806;
	BIT_VEC cppVar_58807 = PC + 1;
	cppVar_58807 = (cppVar_58807 & cppMask_un_16_);
	BIT_VEC cppVar_58808 = ROM.rd(cppVar_58807);
	bool cppVar_58810 = (cppVar_58808 == 136);
	if (cppVar_58810) {
	cppVar_58806 = TCON;
	} else {
	BIT_VEC cppVar_58811;
	BIT_VEC cppVar_58812 = PC + 1;
	cppVar_58812 = (cppVar_58812 & cppMask_un_16_);
	BIT_VEC cppVar_58813 = ROM.rd(cppVar_58812);
	bool cppVar_58815 = (cppVar_58813 == 137);
	if (cppVar_58815) {
	cppVar_58811 = TMOD;
	} else {
	BIT_VEC cppVar_58816;
	BIT_VEC cppVar_58817 = PC + 1;
	cppVar_58817 = (cppVar_58817 & cppMask_un_16_);
	BIT_VEC cppVar_58818 = ROM.rd(cppVar_58817);
	bool cppVar_58820 = (cppVar_58818 == 138);
	if (cppVar_58820) {
	cppVar_58816 = TL0;
	} else {
	BIT_VEC cppVar_58821;
	BIT_VEC cppVar_58822 = PC + 1;
	cppVar_58822 = (cppVar_58822 & cppMask_un_16_);
	BIT_VEC cppVar_58823 = ROM.rd(cppVar_58822);
	bool cppVar_58825 = (cppVar_58823 == 140);
	if (cppVar_58825) {
	cppVar_58821 = TH0;
	} else {
	BIT_VEC cppVar_58826;
	BIT_VEC cppVar_58827 = PC + 1;
	cppVar_58827 = (cppVar_58827 & cppMask_un_16_);
	BIT_VEC cppVar_58828 = ROM.rd(cppVar_58827);
	bool cppVar_58830 = (cppVar_58828 == 139);
	if (cppVar_58830) {
	cppVar_58826 = TL1;
	} else {
	BIT_VEC cppVar_58831;
	BIT_VEC cppVar_58832 = PC + 1;
	cppVar_58832 = (cppVar_58832 & cppMask_un_16_);
	BIT_VEC cppVar_58833 = ROM.rd(cppVar_58832);
	bool cppVar_58835 = (cppVar_58833 == 141);
	if (cppVar_58835) {
	cppVar_58831 = TH1;
	} else {
	BIT_VEC cppVar_58836;
	BIT_VEC cppVar_58837 = PC + 1;
	cppVar_58837 = (cppVar_58837 & cppMask_un_16_);
	BIT_VEC cppVar_58838 = ROM.rd(cppVar_58837);
	bool cppVar_58840 = (cppVar_58838 == 144);
	if (cppVar_58840) {
	cppVar_58836 = P1;
	} else {
	BIT_VEC cppVar_58841;
	BIT_VEC cppVar_58842 = PC + 1;
	cppVar_58842 = (cppVar_58842 & cppMask_un_16_);
	BIT_VEC cppVar_58843 = ROM.rd(cppVar_58842);
	bool cppVar_58845 = (cppVar_58843 == 152);
	if (cppVar_58845) {
	cppVar_58841 = SCON;
	} else {
	BIT_VEC cppVar_58846;
	BIT_VEC cppVar_58847 = PC + 1;
	cppVar_58847 = (cppVar_58847 & cppMask_un_16_);
	BIT_VEC cppVar_58848 = ROM.rd(cppVar_58847);
	bool cppVar_58850 = (cppVar_58848 == 153);
	if (cppVar_58850) {
	cppVar_58846 = SBUF;
	} else {
	BIT_VEC cppVar_58851;
	BIT_VEC cppVar_58852 = PC + 1;
	cppVar_58852 = (cppVar_58852 & cppMask_un_16_);
	BIT_VEC cppVar_58853 = ROM.rd(cppVar_58852);
	bool cppVar_58855 = (cppVar_58853 == 160);
	if (cppVar_58855) {
	cppVar_58851 = P2;
	} else {
	BIT_VEC cppVar_58856;
	BIT_VEC cppVar_58857 = PC + 1;
	cppVar_58857 = (cppVar_58857 & cppMask_un_16_);
	BIT_VEC cppVar_58858 = ROM.rd(cppVar_58857);
	bool cppVar_58860 = (cppVar_58858 == 168);
	if (cppVar_58860) {
	cppVar_58856 = IE;
	} else {
	BIT_VEC cppVar_58861;
	BIT_VEC cppVar_58862 = PC + 1;
	cppVar_58862 = (cppVar_58862 & cppMask_un_16_);
	BIT_VEC cppVar_58863 = ROM.rd(cppVar_58862);
	bool cppVar_58865 = (cppVar_58863 == 176);
	if (cppVar_58865) {
	cppVar_58861 = P3;
	} else {
	BIT_VEC cppVar_58866;
	BIT_VEC cppVar_58867 = PC + 1;
	cppVar_58867 = (cppVar_58867 & cppMask_un_16_);
	BIT_VEC cppVar_58868 = ROM.rd(cppVar_58867);
	bool cppVar_58870 = (cppVar_58868 == 184);
	if (cppVar_58870) {
	cppVar_58866 = IP;
	} else {
	BIT_VEC cppVar_58871;
	BIT_VEC cppVar_58872 = PC + 1;
	cppVar_58872 = (cppVar_58872 & cppMask_un_16_);
	BIT_VEC cppVar_58873 = ROM.rd(cppVar_58872);
	bool cppVar_58875 = (cppVar_58873 == 208);
	if (cppVar_58875) {
	cppVar_58871 = PSW;
	} else {
	BIT_VEC cppVar_58876;
	BIT_VEC cppVar_58877 = PC + 1;
	cppVar_58877 = (cppVar_58877 & cppMask_un_16_);
	BIT_VEC cppVar_58878 = ROM.rd(cppVar_58877);
	bool cppVar_58880 = (cppVar_58878 == 224);
	if (cppVar_58880) {
	cppVar_58876 = ACC;
	} else {
	BIT_VEC cppVar_58881;
	BIT_VEC cppVar_58882 = PC + 1;
	cppVar_58882 = (cppVar_58882 & cppMask_un_16_);
	BIT_VEC cppVar_58883 = ROM.rd(cppVar_58882);
	bool cppVar_58885 = (cppVar_58883 == 240);
	if (cppVar_58885) {
	cppVar_58881 = B;
	} else {
	cppVar_58881 = 0;
	}
	cppVar_58876 = cppVar_58881;
	}
	cppVar_58871 = cppVar_58876;
	}
	cppVar_58866 = cppVar_58871;
	}
	cppVar_58861 = cppVar_58866;
	}
	cppVar_58856 = cppVar_58861;
	}
	cppVar_58851 = cppVar_58856;
	}
	cppVar_58846 = cppVar_58851;
	}
	cppVar_58841 = cppVar_58846;
	}
	cppVar_58836 = cppVar_58841;
	}
	cppVar_58831 = cppVar_58836;
	}
	cppVar_58826 = cppVar_58831;
	}
	cppVar_58821 = cppVar_58826;
	}
	cppVar_58816 = cppVar_58821;
	}
	cppVar_58811 = cppVar_58816;
	}
	cppVar_58806 = cppVar_58811;
	}
	cppVar_58801 = cppVar_58806;
	}
	cppVar_58796 = cppVar_58801;
	}
	cppVar_58791 = cppVar_58796;
	}
	cppVar_58786 = cppVar_58791;
	}
	cppVar_58781 = cppVar_58786;
	}
	cppVar_58772 = cppVar_58781;
	}
	BIT_VEC cppVar_58888 = PC + 2;
	cppVar_58888 = (cppVar_58888 & cppMask_un_16_);
	BIT_VEC cppVar_58889 = ROM.rd(cppVar_58888);
	BIT_VEC cppVar_58890 = cppVar_58772 & cppVar_58889;
	cppVar_58766 = cppVar_58890;
	} else {
	cppVar_58766 = SBUF;
	}
	cppVar_58762 = cppVar_58766;
	} else {
	BIT_VEC cppVar_58891;
	BIT_VEC cppVar_58892 = ROM.rd(PC);
	bool cppVar_58894 = (cppVar_58892 == 82);
	if (cppVar_58894) {
	BIT_VEC cppVar_58895;
	BIT_VEC cppVar_58897 = PC + 1;
	cppVar_58897 = (cppVar_58897 & cppMask_un_16_);
	BIT_VEC cppVar_58898 = ROM.rd(cppVar_58897);
	bool cppVar_58900 = (cppVar_58898 == 153);
	if (cppVar_58900) {
	BIT_VEC cppVar_58901;
	BIT_VEC cppVar_58902 = PC + 1;
	cppVar_58902 = (cppVar_58902 & cppMask_un_16_);
	BIT_VEC cppVar_58903 = ROM.rd(cppVar_58902);
	BIT_VEC cppVar_58904 = (cppVar_58903 >> 7) & cppMask_un_1_;
	bool cppVar_58906 = (cppVar_58904 == 0);
	if (cppVar_58906) {
	BIT_VEC cppVar_58907 = PC + 1;
	cppVar_58907 = (cppVar_58907 & cppMask_un_16_);
	BIT_VEC cppVar_58908 = ROM.rd(cppVar_58907);
	BIT_VEC cppVar_58909 = IRAM.rd(cppVar_58908);
	cppVar_58901 = cppVar_58909;
	} else {
	BIT_VEC cppVar_58910;
	BIT_VEC cppVar_58911 = PC + 1;
	cppVar_58911 = (cppVar_58911 & cppMask_un_16_);
	BIT_VEC cppVar_58912 = ROM.rd(cppVar_58911);
	bool cppVar_58914 = (cppVar_58912 == 128);
	if (cppVar_58914) {
	cppVar_58910 = P0;
	} else {
	BIT_VEC cppVar_58915;
	BIT_VEC cppVar_58916 = PC + 1;
	cppVar_58916 = (cppVar_58916 & cppMask_un_16_);
	BIT_VEC cppVar_58917 = ROM.rd(cppVar_58916);
	bool cppVar_58919 = (cppVar_58917 == 129);
	if (cppVar_58919) {
	cppVar_58915 = SP;
	} else {
	BIT_VEC cppVar_58920;
	BIT_VEC cppVar_58921 = PC + 1;
	cppVar_58921 = (cppVar_58921 & cppMask_un_16_);
	BIT_VEC cppVar_58922 = ROM.rd(cppVar_58921);
	bool cppVar_58924 = (cppVar_58922 == 130);
	if (cppVar_58924) {
	cppVar_58920 = DPL;
	} else {
	BIT_VEC cppVar_58925;
	BIT_VEC cppVar_58926 = PC + 1;
	cppVar_58926 = (cppVar_58926 & cppMask_un_16_);
	BIT_VEC cppVar_58927 = ROM.rd(cppVar_58926);
	bool cppVar_58929 = (cppVar_58927 == 131);
	if (cppVar_58929) {
	cppVar_58925 = DPH;
	} else {
	BIT_VEC cppVar_58930;
	BIT_VEC cppVar_58931 = PC + 1;
	cppVar_58931 = (cppVar_58931 & cppMask_un_16_);
	BIT_VEC cppVar_58932 = ROM.rd(cppVar_58931);
	bool cppVar_58934 = (cppVar_58932 == 135);
	if (cppVar_58934) {
	cppVar_58930 = PCON;
	} else {
	BIT_VEC cppVar_58935;
	BIT_VEC cppVar_58936 = PC + 1;
	cppVar_58936 = (cppVar_58936 & cppMask_un_16_);
	BIT_VEC cppVar_58937 = ROM.rd(cppVar_58936);
	bool cppVar_58939 = (cppVar_58937 == 136);
	if (cppVar_58939) {
	cppVar_58935 = TCON;
	} else {
	BIT_VEC cppVar_58940;
	BIT_VEC cppVar_58941 = PC + 1;
	cppVar_58941 = (cppVar_58941 & cppMask_un_16_);
	BIT_VEC cppVar_58942 = ROM.rd(cppVar_58941);
	bool cppVar_58944 = (cppVar_58942 == 137);
	if (cppVar_58944) {
	cppVar_58940 = TMOD;
	} else {
	BIT_VEC cppVar_58945;
	BIT_VEC cppVar_58946 = PC + 1;
	cppVar_58946 = (cppVar_58946 & cppMask_un_16_);
	BIT_VEC cppVar_58947 = ROM.rd(cppVar_58946);
	bool cppVar_58949 = (cppVar_58947 == 138);
	if (cppVar_58949) {
	cppVar_58945 = TL0;
	} else {
	BIT_VEC cppVar_58950;
	BIT_VEC cppVar_58951 = PC + 1;
	cppVar_58951 = (cppVar_58951 & cppMask_un_16_);
	BIT_VEC cppVar_58952 = ROM.rd(cppVar_58951);
	bool cppVar_58954 = (cppVar_58952 == 140);
	if (cppVar_58954) {
	cppVar_58950 = TH0;
	} else {
	BIT_VEC cppVar_58955;
	BIT_VEC cppVar_58956 = PC + 1;
	cppVar_58956 = (cppVar_58956 & cppMask_un_16_);
	BIT_VEC cppVar_58957 = ROM.rd(cppVar_58956);
	bool cppVar_58959 = (cppVar_58957 == 139);
	if (cppVar_58959) {
	cppVar_58955 = TL1;
	} else {
	BIT_VEC cppVar_58960;
	BIT_VEC cppVar_58961 = PC + 1;
	cppVar_58961 = (cppVar_58961 & cppMask_un_16_);
	BIT_VEC cppVar_58962 = ROM.rd(cppVar_58961);
	bool cppVar_58964 = (cppVar_58962 == 141);
	if (cppVar_58964) {
	cppVar_58960 = TH1;
	} else {
	BIT_VEC cppVar_58965;
	BIT_VEC cppVar_58966 = PC + 1;
	cppVar_58966 = (cppVar_58966 & cppMask_un_16_);
	BIT_VEC cppVar_58967 = ROM.rd(cppVar_58966);
	bool cppVar_58969 = (cppVar_58967 == 144);
	if (cppVar_58969) {
	cppVar_58965 = P1;
	} else {
	BIT_VEC cppVar_58970;
	BIT_VEC cppVar_58971 = PC + 1;
	cppVar_58971 = (cppVar_58971 & cppMask_un_16_);
	BIT_VEC cppVar_58972 = ROM.rd(cppVar_58971);
	bool cppVar_58974 = (cppVar_58972 == 152);
	if (cppVar_58974) {
	cppVar_58970 = SCON;
	} else {
	BIT_VEC cppVar_58975;
	BIT_VEC cppVar_58976 = PC + 1;
	cppVar_58976 = (cppVar_58976 & cppMask_un_16_);
	BIT_VEC cppVar_58977 = ROM.rd(cppVar_58976);
	bool cppVar_58979 = (cppVar_58977 == 153);
	if (cppVar_58979) {
	cppVar_58975 = SBUF;
	} else {
	BIT_VEC cppVar_58980;
	BIT_VEC cppVar_58981 = PC + 1;
	cppVar_58981 = (cppVar_58981 & cppMask_un_16_);
	BIT_VEC cppVar_58982 = ROM.rd(cppVar_58981);
	bool cppVar_58984 = (cppVar_58982 == 160);
	if (cppVar_58984) {
	cppVar_58980 = P2;
	} else {
	BIT_VEC cppVar_58985;
	BIT_VEC cppVar_58986 = PC + 1;
	cppVar_58986 = (cppVar_58986 & cppMask_un_16_);
	BIT_VEC cppVar_58987 = ROM.rd(cppVar_58986);
	bool cppVar_58989 = (cppVar_58987 == 168);
	if (cppVar_58989) {
	cppVar_58985 = IE;
	} else {
	BIT_VEC cppVar_58990;
	BIT_VEC cppVar_58991 = PC + 1;
	cppVar_58991 = (cppVar_58991 & cppMask_un_16_);
	BIT_VEC cppVar_58992 = ROM.rd(cppVar_58991);
	bool cppVar_58994 = (cppVar_58992 == 176);
	if (cppVar_58994) {
	cppVar_58990 = P3;
	} else {
	BIT_VEC cppVar_58995;
	BIT_VEC cppVar_58996 = PC + 1;
	cppVar_58996 = (cppVar_58996 & cppMask_un_16_);
	BIT_VEC cppVar_58997 = ROM.rd(cppVar_58996);
	bool cppVar_58999 = (cppVar_58997 == 184);
	if (cppVar_58999) {
	cppVar_58995 = IP;
	} else {
	BIT_VEC cppVar_59000;
	BIT_VEC cppVar_59001 = PC + 1;
	cppVar_59001 = (cppVar_59001 & cppMask_un_16_);
	BIT_VEC cppVar_59002 = ROM.rd(cppVar_59001);
	bool cppVar_59004 = (cppVar_59002 == 208);
	if (cppVar_59004) {
	cppVar_59000 = PSW;
	} else {
	BIT_VEC cppVar_59005;
	BIT_VEC cppVar_59006 = PC + 1;
	cppVar_59006 = (cppVar_59006 & cppMask_un_16_);
	BIT_VEC cppVar_59007 = ROM.rd(cppVar_59006);
	bool cppVar_59009 = (cppVar_59007 == 224);
	if (cppVar_59009) {
	cppVar_59005 = ACC;
	} else {
	BIT_VEC cppVar_59010;
	BIT_VEC cppVar_59011 = PC + 1;
	cppVar_59011 = (cppVar_59011 & cppMask_un_16_);
	BIT_VEC cppVar_59012 = ROM.rd(cppVar_59011);
	bool cppVar_59014 = (cppVar_59012 == 240);
	if (cppVar_59014) {
	cppVar_59010 = B;
	} else {
	cppVar_59010 = 0;
	}
	cppVar_59005 = cppVar_59010;
	}
	cppVar_59000 = cppVar_59005;
	}
	cppVar_58995 = cppVar_59000;
	}
	cppVar_58990 = cppVar_58995;
	}
	cppVar_58985 = cppVar_58990;
	}
	cppVar_58980 = cppVar_58985;
	}
	cppVar_58975 = cppVar_58980;
	}
	cppVar_58970 = cppVar_58975;
	}
	cppVar_58965 = cppVar_58970;
	}
	cppVar_58960 = cppVar_58965;
	}
	cppVar_58955 = cppVar_58960;
	}
	cppVar_58950 = cppVar_58955;
	}
	cppVar_58945 = cppVar_58950;
	}
	cppVar_58940 = cppVar_58945;
	}
	cppVar_58935 = cppVar_58940;
	}
	cppVar_58930 = cppVar_58935;
	}
	cppVar_58925 = cppVar_58930;
	}
	cppVar_58920 = cppVar_58925;
	}
	cppVar_58915 = cppVar_58920;
	}
	cppVar_58910 = cppVar_58915;
	}
	cppVar_58901 = cppVar_58910;
	}
	BIT_VEC cppVar_59016 = cppVar_58901 & ACC;
	cppVar_58895 = cppVar_59016;
	} else {
	cppVar_58895 = SBUF;
	}
	cppVar_58891 = cppVar_58895;
	} else {
	BIT_VEC cppVar_59017;
	BIT_VEC cppVar_59018 = ROM.rd(PC);
	bool cppVar_59020 = (cppVar_59018 == 67);
	if (cppVar_59020) {
	BIT_VEC cppVar_59021;
	BIT_VEC cppVar_59023 = PC + 1;
	cppVar_59023 = (cppVar_59023 & cppMask_un_16_);
	BIT_VEC cppVar_59024 = ROM.rd(cppVar_59023);
	bool cppVar_59026 = (cppVar_59024 == 153);
	if (cppVar_59026) {
	BIT_VEC cppVar_59027;
	BIT_VEC cppVar_59028 = PC + 1;
	cppVar_59028 = (cppVar_59028 & cppMask_un_16_);
	BIT_VEC cppVar_59029 = ROM.rd(cppVar_59028);
	BIT_VEC cppVar_59030 = (cppVar_59029 >> 7) & cppMask_un_1_;
	bool cppVar_59032 = (cppVar_59030 == 0);
	if (cppVar_59032) {
	BIT_VEC cppVar_59033 = PC + 1;
	cppVar_59033 = (cppVar_59033 & cppMask_un_16_);
	BIT_VEC cppVar_59034 = ROM.rd(cppVar_59033);
	BIT_VEC cppVar_59035 = IRAM.rd(cppVar_59034);
	cppVar_59027 = cppVar_59035;
	} else {
	BIT_VEC cppVar_59036;
	BIT_VEC cppVar_59037 = PC + 1;
	cppVar_59037 = (cppVar_59037 & cppMask_un_16_);
	BIT_VEC cppVar_59038 = ROM.rd(cppVar_59037);
	bool cppVar_59040 = (cppVar_59038 == 128);
	if (cppVar_59040) {
	cppVar_59036 = P0;
	} else {
	BIT_VEC cppVar_59041;
	BIT_VEC cppVar_59042 = PC + 1;
	cppVar_59042 = (cppVar_59042 & cppMask_un_16_);
	BIT_VEC cppVar_59043 = ROM.rd(cppVar_59042);
	bool cppVar_59045 = (cppVar_59043 == 129);
	if (cppVar_59045) {
	cppVar_59041 = SP;
	} else {
	BIT_VEC cppVar_59046;
	BIT_VEC cppVar_59047 = PC + 1;
	cppVar_59047 = (cppVar_59047 & cppMask_un_16_);
	BIT_VEC cppVar_59048 = ROM.rd(cppVar_59047);
	bool cppVar_59050 = (cppVar_59048 == 130);
	if (cppVar_59050) {
	cppVar_59046 = DPL;
	} else {
	BIT_VEC cppVar_59051;
	BIT_VEC cppVar_59052 = PC + 1;
	cppVar_59052 = (cppVar_59052 & cppMask_un_16_);
	BIT_VEC cppVar_59053 = ROM.rd(cppVar_59052);
	bool cppVar_59055 = (cppVar_59053 == 131);
	if (cppVar_59055) {
	cppVar_59051 = DPH;
	} else {
	BIT_VEC cppVar_59056;
	BIT_VEC cppVar_59057 = PC + 1;
	cppVar_59057 = (cppVar_59057 & cppMask_un_16_);
	BIT_VEC cppVar_59058 = ROM.rd(cppVar_59057);
	bool cppVar_59060 = (cppVar_59058 == 135);
	if (cppVar_59060) {
	cppVar_59056 = PCON;
	} else {
	BIT_VEC cppVar_59061;
	BIT_VEC cppVar_59062 = PC + 1;
	cppVar_59062 = (cppVar_59062 & cppMask_un_16_);
	BIT_VEC cppVar_59063 = ROM.rd(cppVar_59062);
	bool cppVar_59065 = (cppVar_59063 == 136);
	if (cppVar_59065) {
	cppVar_59061 = TCON;
	} else {
	BIT_VEC cppVar_59066;
	BIT_VEC cppVar_59067 = PC + 1;
	cppVar_59067 = (cppVar_59067 & cppMask_un_16_);
	BIT_VEC cppVar_59068 = ROM.rd(cppVar_59067);
	bool cppVar_59070 = (cppVar_59068 == 137);
	if (cppVar_59070) {
	cppVar_59066 = TMOD;
	} else {
	BIT_VEC cppVar_59071;
	BIT_VEC cppVar_59072 = PC + 1;
	cppVar_59072 = (cppVar_59072 & cppMask_un_16_);
	BIT_VEC cppVar_59073 = ROM.rd(cppVar_59072);
	bool cppVar_59075 = (cppVar_59073 == 138);
	if (cppVar_59075) {
	cppVar_59071 = TL0;
	} else {
	BIT_VEC cppVar_59076;
	BIT_VEC cppVar_59077 = PC + 1;
	cppVar_59077 = (cppVar_59077 & cppMask_un_16_);
	BIT_VEC cppVar_59078 = ROM.rd(cppVar_59077);
	bool cppVar_59080 = (cppVar_59078 == 140);
	if (cppVar_59080) {
	cppVar_59076 = TH0;
	} else {
	BIT_VEC cppVar_59081;
	BIT_VEC cppVar_59082 = PC + 1;
	cppVar_59082 = (cppVar_59082 & cppMask_un_16_);
	BIT_VEC cppVar_59083 = ROM.rd(cppVar_59082);
	bool cppVar_59085 = (cppVar_59083 == 139);
	if (cppVar_59085) {
	cppVar_59081 = TL1;
	} else {
	BIT_VEC cppVar_59086;
	BIT_VEC cppVar_59087 = PC + 1;
	cppVar_59087 = (cppVar_59087 & cppMask_un_16_);
	BIT_VEC cppVar_59088 = ROM.rd(cppVar_59087);
	bool cppVar_59090 = (cppVar_59088 == 141);
	if (cppVar_59090) {
	cppVar_59086 = TH1;
	} else {
	BIT_VEC cppVar_59091;
	BIT_VEC cppVar_59092 = PC + 1;
	cppVar_59092 = (cppVar_59092 & cppMask_un_16_);
	BIT_VEC cppVar_59093 = ROM.rd(cppVar_59092);
	bool cppVar_59095 = (cppVar_59093 == 144);
	if (cppVar_59095) {
	cppVar_59091 = P1;
	} else {
	BIT_VEC cppVar_59096;
	BIT_VEC cppVar_59097 = PC + 1;
	cppVar_59097 = (cppVar_59097 & cppMask_un_16_);
	BIT_VEC cppVar_59098 = ROM.rd(cppVar_59097);
	bool cppVar_59100 = (cppVar_59098 == 152);
	if (cppVar_59100) {
	cppVar_59096 = SCON;
	} else {
	BIT_VEC cppVar_59101;
	BIT_VEC cppVar_59102 = PC + 1;
	cppVar_59102 = (cppVar_59102 & cppMask_un_16_);
	BIT_VEC cppVar_59103 = ROM.rd(cppVar_59102);
	bool cppVar_59105 = (cppVar_59103 == 153);
	if (cppVar_59105) {
	cppVar_59101 = SBUF;
	} else {
	BIT_VEC cppVar_59106;
	BIT_VEC cppVar_59107 = PC + 1;
	cppVar_59107 = (cppVar_59107 & cppMask_un_16_);
	BIT_VEC cppVar_59108 = ROM.rd(cppVar_59107);
	bool cppVar_59110 = (cppVar_59108 == 160);
	if (cppVar_59110) {
	cppVar_59106 = P2;
	} else {
	BIT_VEC cppVar_59111;
	BIT_VEC cppVar_59112 = PC + 1;
	cppVar_59112 = (cppVar_59112 & cppMask_un_16_);
	BIT_VEC cppVar_59113 = ROM.rd(cppVar_59112);
	bool cppVar_59115 = (cppVar_59113 == 168);
	if (cppVar_59115) {
	cppVar_59111 = IE;
	} else {
	BIT_VEC cppVar_59116;
	BIT_VEC cppVar_59117 = PC + 1;
	cppVar_59117 = (cppVar_59117 & cppMask_un_16_);
	BIT_VEC cppVar_59118 = ROM.rd(cppVar_59117);
	bool cppVar_59120 = (cppVar_59118 == 176);
	if (cppVar_59120) {
	cppVar_59116 = P3;
	} else {
	BIT_VEC cppVar_59121;
	BIT_VEC cppVar_59122 = PC + 1;
	cppVar_59122 = (cppVar_59122 & cppMask_un_16_);
	BIT_VEC cppVar_59123 = ROM.rd(cppVar_59122);
	bool cppVar_59125 = (cppVar_59123 == 184);
	if (cppVar_59125) {
	cppVar_59121 = IP;
	} else {
	BIT_VEC cppVar_59126;
	BIT_VEC cppVar_59127 = PC + 1;
	cppVar_59127 = (cppVar_59127 & cppMask_un_16_);
	BIT_VEC cppVar_59128 = ROM.rd(cppVar_59127);
	bool cppVar_59130 = (cppVar_59128 == 208);
	if (cppVar_59130) {
	cppVar_59126 = PSW;
	} else {
	BIT_VEC cppVar_59131;
	BIT_VEC cppVar_59132 = PC + 1;
	cppVar_59132 = (cppVar_59132 & cppMask_un_16_);
	BIT_VEC cppVar_59133 = ROM.rd(cppVar_59132);
	bool cppVar_59135 = (cppVar_59133 == 224);
	if (cppVar_59135) {
	cppVar_59131 = ACC;
	} else {
	BIT_VEC cppVar_59136;
	BIT_VEC cppVar_59137 = PC + 1;
	cppVar_59137 = (cppVar_59137 & cppMask_un_16_);
	BIT_VEC cppVar_59138 = ROM.rd(cppVar_59137);
	bool cppVar_59140 = (cppVar_59138 == 240);
	if (cppVar_59140) {
	cppVar_59136 = B;
	} else {
	cppVar_59136 = 0;
	}
	cppVar_59131 = cppVar_59136;
	}
	cppVar_59126 = cppVar_59131;
	}
	cppVar_59121 = cppVar_59126;
	}
	cppVar_59116 = cppVar_59121;
	}
	cppVar_59111 = cppVar_59116;
	}
	cppVar_59106 = cppVar_59111;
	}
	cppVar_59101 = cppVar_59106;
	}
	cppVar_59096 = cppVar_59101;
	}
	cppVar_59091 = cppVar_59096;
	}
	cppVar_59086 = cppVar_59091;
	}
	cppVar_59081 = cppVar_59086;
	}
	cppVar_59076 = cppVar_59081;
	}
	cppVar_59071 = cppVar_59076;
	}
	cppVar_59066 = cppVar_59071;
	}
	cppVar_59061 = cppVar_59066;
	}
	cppVar_59056 = cppVar_59061;
	}
	cppVar_59051 = cppVar_59056;
	}
	cppVar_59046 = cppVar_59051;
	}
	cppVar_59041 = cppVar_59046;
	}
	cppVar_59036 = cppVar_59041;
	}
	cppVar_59027 = cppVar_59036;
	}
	BIT_VEC cppVar_59143 = PC + 2;
	cppVar_59143 = (cppVar_59143 & cppMask_un_16_);
	BIT_VEC cppVar_59144 = ROM.rd(cppVar_59143);
	BIT_VEC cppVar_59145 = cppVar_59027 | cppVar_59144;
	cppVar_59021 = cppVar_59145;
	} else {
	cppVar_59021 = SBUF;
	}
	cppVar_59017 = cppVar_59021;
	} else {
	BIT_VEC cppVar_59146;
	BIT_VEC cppVar_59147 = ROM.rd(PC);
	bool cppVar_59149 = (cppVar_59147 == 66);
	if (cppVar_59149) {
	BIT_VEC cppVar_59150;
	BIT_VEC cppVar_59152 = PC + 1;
	cppVar_59152 = (cppVar_59152 & cppMask_un_16_);
	BIT_VEC cppVar_59153 = ROM.rd(cppVar_59152);
	bool cppVar_59155 = (cppVar_59153 == 153);
	if (cppVar_59155) {
	BIT_VEC cppVar_59156;
	BIT_VEC cppVar_59157 = PC + 1;
	cppVar_59157 = (cppVar_59157 & cppMask_un_16_);
	BIT_VEC cppVar_59158 = ROM.rd(cppVar_59157);
	BIT_VEC cppVar_59159 = (cppVar_59158 >> 7) & cppMask_un_1_;
	bool cppVar_59161 = (cppVar_59159 == 0);
	if (cppVar_59161) {
	BIT_VEC cppVar_59162 = PC + 1;
	cppVar_59162 = (cppVar_59162 & cppMask_un_16_);
	BIT_VEC cppVar_59163 = ROM.rd(cppVar_59162);
	BIT_VEC cppVar_59164 = IRAM.rd(cppVar_59163);
	cppVar_59156 = cppVar_59164;
	} else {
	BIT_VEC cppVar_59165;
	BIT_VEC cppVar_59166 = PC + 1;
	cppVar_59166 = (cppVar_59166 & cppMask_un_16_);
	BIT_VEC cppVar_59167 = ROM.rd(cppVar_59166);
	bool cppVar_59169 = (cppVar_59167 == 128);
	if (cppVar_59169) {
	cppVar_59165 = P0;
	} else {
	BIT_VEC cppVar_59170;
	BIT_VEC cppVar_59171 = PC + 1;
	cppVar_59171 = (cppVar_59171 & cppMask_un_16_);
	BIT_VEC cppVar_59172 = ROM.rd(cppVar_59171);
	bool cppVar_59174 = (cppVar_59172 == 129);
	if (cppVar_59174) {
	cppVar_59170 = SP;
	} else {
	BIT_VEC cppVar_59175;
	BIT_VEC cppVar_59176 = PC + 1;
	cppVar_59176 = (cppVar_59176 & cppMask_un_16_);
	BIT_VEC cppVar_59177 = ROM.rd(cppVar_59176);
	bool cppVar_59179 = (cppVar_59177 == 130);
	if (cppVar_59179) {
	cppVar_59175 = DPL;
	} else {
	BIT_VEC cppVar_59180;
	BIT_VEC cppVar_59181 = PC + 1;
	cppVar_59181 = (cppVar_59181 & cppMask_un_16_);
	BIT_VEC cppVar_59182 = ROM.rd(cppVar_59181);
	bool cppVar_59184 = (cppVar_59182 == 131);
	if (cppVar_59184) {
	cppVar_59180 = DPH;
	} else {
	BIT_VEC cppVar_59185;
	BIT_VEC cppVar_59186 = PC + 1;
	cppVar_59186 = (cppVar_59186 & cppMask_un_16_);
	BIT_VEC cppVar_59187 = ROM.rd(cppVar_59186);
	bool cppVar_59189 = (cppVar_59187 == 135);
	if (cppVar_59189) {
	cppVar_59185 = PCON;
	} else {
	BIT_VEC cppVar_59190;
	BIT_VEC cppVar_59191 = PC + 1;
	cppVar_59191 = (cppVar_59191 & cppMask_un_16_);
	BIT_VEC cppVar_59192 = ROM.rd(cppVar_59191);
	bool cppVar_59194 = (cppVar_59192 == 136);
	if (cppVar_59194) {
	cppVar_59190 = TCON;
	} else {
	BIT_VEC cppVar_59195;
	BIT_VEC cppVar_59196 = PC + 1;
	cppVar_59196 = (cppVar_59196 & cppMask_un_16_);
	BIT_VEC cppVar_59197 = ROM.rd(cppVar_59196);
	bool cppVar_59199 = (cppVar_59197 == 137);
	if (cppVar_59199) {
	cppVar_59195 = TMOD;
	} else {
	BIT_VEC cppVar_59200;
	BIT_VEC cppVar_59201 = PC + 1;
	cppVar_59201 = (cppVar_59201 & cppMask_un_16_);
	BIT_VEC cppVar_59202 = ROM.rd(cppVar_59201);
	bool cppVar_59204 = (cppVar_59202 == 138);
	if (cppVar_59204) {
	cppVar_59200 = TL0;
	} else {
	BIT_VEC cppVar_59205;
	BIT_VEC cppVar_59206 = PC + 1;
	cppVar_59206 = (cppVar_59206 & cppMask_un_16_);
	BIT_VEC cppVar_59207 = ROM.rd(cppVar_59206);
	bool cppVar_59209 = (cppVar_59207 == 140);
	if (cppVar_59209) {
	cppVar_59205 = TH0;
	} else {
	BIT_VEC cppVar_59210;
	BIT_VEC cppVar_59211 = PC + 1;
	cppVar_59211 = (cppVar_59211 & cppMask_un_16_);
	BIT_VEC cppVar_59212 = ROM.rd(cppVar_59211);
	bool cppVar_59214 = (cppVar_59212 == 139);
	if (cppVar_59214) {
	cppVar_59210 = TL1;
	} else {
	BIT_VEC cppVar_59215;
	BIT_VEC cppVar_59216 = PC + 1;
	cppVar_59216 = (cppVar_59216 & cppMask_un_16_);
	BIT_VEC cppVar_59217 = ROM.rd(cppVar_59216);
	bool cppVar_59219 = (cppVar_59217 == 141);
	if (cppVar_59219) {
	cppVar_59215 = TH1;
	} else {
	BIT_VEC cppVar_59220;
	BIT_VEC cppVar_59221 = PC + 1;
	cppVar_59221 = (cppVar_59221 & cppMask_un_16_);
	BIT_VEC cppVar_59222 = ROM.rd(cppVar_59221);
	bool cppVar_59224 = (cppVar_59222 == 144);
	if (cppVar_59224) {
	cppVar_59220 = P1;
	} else {
	BIT_VEC cppVar_59225;
	BIT_VEC cppVar_59226 = PC + 1;
	cppVar_59226 = (cppVar_59226 & cppMask_un_16_);
	BIT_VEC cppVar_59227 = ROM.rd(cppVar_59226);
	bool cppVar_59229 = (cppVar_59227 == 152);
	if (cppVar_59229) {
	cppVar_59225 = SCON;
	} else {
	BIT_VEC cppVar_59230;
	BIT_VEC cppVar_59231 = PC + 1;
	cppVar_59231 = (cppVar_59231 & cppMask_un_16_);
	BIT_VEC cppVar_59232 = ROM.rd(cppVar_59231);
	bool cppVar_59234 = (cppVar_59232 == 153);
	if (cppVar_59234) {
	cppVar_59230 = SBUF;
	} else {
	BIT_VEC cppVar_59235;
	BIT_VEC cppVar_59236 = PC + 1;
	cppVar_59236 = (cppVar_59236 & cppMask_un_16_);
	BIT_VEC cppVar_59237 = ROM.rd(cppVar_59236);
	bool cppVar_59239 = (cppVar_59237 == 160);
	if (cppVar_59239) {
	cppVar_59235 = P2;
	} else {
	BIT_VEC cppVar_59240;
	BIT_VEC cppVar_59241 = PC + 1;
	cppVar_59241 = (cppVar_59241 & cppMask_un_16_);
	BIT_VEC cppVar_59242 = ROM.rd(cppVar_59241);
	bool cppVar_59244 = (cppVar_59242 == 168);
	if (cppVar_59244) {
	cppVar_59240 = IE;
	} else {
	BIT_VEC cppVar_59245;
	BIT_VEC cppVar_59246 = PC + 1;
	cppVar_59246 = (cppVar_59246 & cppMask_un_16_);
	BIT_VEC cppVar_59247 = ROM.rd(cppVar_59246);
	bool cppVar_59249 = (cppVar_59247 == 176);
	if (cppVar_59249) {
	cppVar_59245 = P3;
	} else {
	BIT_VEC cppVar_59250;
	BIT_VEC cppVar_59251 = PC + 1;
	cppVar_59251 = (cppVar_59251 & cppMask_un_16_);
	BIT_VEC cppVar_59252 = ROM.rd(cppVar_59251);
	bool cppVar_59254 = (cppVar_59252 == 184);
	if (cppVar_59254) {
	cppVar_59250 = IP;
	} else {
	BIT_VEC cppVar_59255;
	BIT_VEC cppVar_59256 = PC + 1;
	cppVar_59256 = (cppVar_59256 & cppMask_un_16_);
	BIT_VEC cppVar_59257 = ROM.rd(cppVar_59256);
	bool cppVar_59259 = (cppVar_59257 == 208);
	if (cppVar_59259) {
	cppVar_59255 = PSW;
	} else {
	BIT_VEC cppVar_59260;
	BIT_VEC cppVar_59261 = PC + 1;
	cppVar_59261 = (cppVar_59261 & cppMask_un_16_);
	BIT_VEC cppVar_59262 = ROM.rd(cppVar_59261);
	bool cppVar_59264 = (cppVar_59262 == 224);
	if (cppVar_59264) {
	cppVar_59260 = ACC;
	} else {
	BIT_VEC cppVar_59265;
	BIT_VEC cppVar_59266 = PC + 1;
	cppVar_59266 = (cppVar_59266 & cppMask_un_16_);
	BIT_VEC cppVar_59267 = ROM.rd(cppVar_59266);
	bool cppVar_59269 = (cppVar_59267 == 240);
	if (cppVar_59269) {
	cppVar_59265 = B;
	} else {
	cppVar_59265 = 0;
	}
	cppVar_59260 = cppVar_59265;
	}
	cppVar_59255 = cppVar_59260;
	}
	cppVar_59250 = cppVar_59255;
	}
	cppVar_59245 = cppVar_59250;
	}
	cppVar_59240 = cppVar_59245;
	}
	cppVar_59235 = cppVar_59240;
	}
	cppVar_59230 = cppVar_59235;
	}
	cppVar_59225 = cppVar_59230;
	}
	cppVar_59220 = cppVar_59225;
	}
	cppVar_59215 = cppVar_59220;
	}
	cppVar_59210 = cppVar_59215;
	}
	cppVar_59205 = cppVar_59210;
	}
	cppVar_59200 = cppVar_59205;
	}
	cppVar_59195 = cppVar_59200;
	}
	cppVar_59190 = cppVar_59195;
	}
	cppVar_59185 = cppVar_59190;
	}
	cppVar_59180 = cppVar_59185;
	}
	cppVar_59175 = cppVar_59180;
	}
	cppVar_59170 = cppVar_59175;
	}
	cppVar_59165 = cppVar_59170;
	}
	cppVar_59156 = cppVar_59165;
	}
	BIT_VEC cppVar_59271 = cppVar_59156 | ACC;
	cppVar_59150 = cppVar_59271;
	} else {
	cppVar_59150 = SBUF;
	}
	cppVar_59146 = cppVar_59150;
	} else {
	BIT_VEC cppVar_59272;
	BIT_VEC cppVar_59273 = ROM.rd(PC);
	bool cppVar_59275 = (cppVar_59273 == 213);
	BIT_VEC cppVar_59276 = ROM.rd(PC);
	bool cppVar_59278 = (cppVar_59276 == 21);
	bool cppVar_59279 = cppVar_59275 || cppVar_59278;
	if (cppVar_59279) {
	BIT_VEC cppVar_59280;
	BIT_VEC cppVar_59282 = PC + 1;
	cppVar_59282 = (cppVar_59282 & cppMask_un_16_);
	BIT_VEC cppVar_59283 = ROM.rd(cppVar_59282);
	bool cppVar_59285 = (cppVar_59283 == 153);
	if (cppVar_59285) {
	BIT_VEC cppVar_59286;
	BIT_VEC cppVar_59287 = PC + 1;
	cppVar_59287 = (cppVar_59287 & cppMask_un_16_);
	BIT_VEC cppVar_59288 = ROM.rd(cppVar_59287);
	BIT_VEC cppVar_59289 = (cppVar_59288 >> 7) & cppMask_un_1_;
	bool cppVar_59291 = (cppVar_59289 == 0);
	if (cppVar_59291) {
	BIT_VEC cppVar_59292 = PC + 1;
	cppVar_59292 = (cppVar_59292 & cppMask_un_16_);
	BIT_VEC cppVar_59293 = ROM.rd(cppVar_59292);
	BIT_VEC cppVar_59294 = IRAM.rd(cppVar_59293);
	cppVar_59286 = cppVar_59294;
	} else {
	BIT_VEC cppVar_59295;
	BIT_VEC cppVar_59296 = PC + 1;
	cppVar_59296 = (cppVar_59296 & cppMask_un_16_);
	BIT_VEC cppVar_59297 = ROM.rd(cppVar_59296);
	bool cppVar_59299 = (cppVar_59297 == 128);
	if (cppVar_59299) {
	cppVar_59295 = P0;
	} else {
	BIT_VEC cppVar_59300;
	BIT_VEC cppVar_59301 = PC + 1;
	cppVar_59301 = (cppVar_59301 & cppMask_un_16_);
	BIT_VEC cppVar_59302 = ROM.rd(cppVar_59301);
	bool cppVar_59304 = (cppVar_59302 == 129);
	if (cppVar_59304) {
	cppVar_59300 = SP;
	} else {
	BIT_VEC cppVar_59305;
	BIT_VEC cppVar_59306 = PC + 1;
	cppVar_59306 = (cppVar_59306 & cppMask_un_16_);
	BIT_VEC cppVar_59307 = ROM.rd(cppVar_59306);
	bool cppVar_59309 = (cppVar_59307 == 130);
	if (cppVar_59309) {
	cppVar_59305 = DPL;
	} else {
	BIT_VEC cppVar_59310;
	BIT_VEC cppVar_59311 = PC + 1;
	cppVar_59311 = (cppVar_59311 & cppMask_un_16_);
	BIT_VEC cppVar_59312 = ROM.rd(cppVar_59311);
	bool cppVar_59314 = (cppVar_59312 == 131);
	if (cppVar_59314) {
	cppVar_59310 = DPH;
	} else {
	BIT_VEC cppVar_59315;
	BIT_VEC cppVar_59316 = PC + 1;
	cppVar_59316 = (cppVar_59316 & cppMask_un_16_);
	BIT_VEC cppVar_59317 = ROM.rd(cppVar_59316);
	bool cppVar_59319 = (cppVar_59317 == 135);
	if (cppVar_59319) {
	cppVar_59315 = PCON;
	} else {
	BIT_VEC cppVar_59320;
	BIT_VEC cppVar_59321 = PC + 1;
	cppVar_59321 = (cppVar_59321 & cppMask_un_16_);
	BIT_VEC cppVar_59322 = ROM.rd(cppVar_59321);
	bool cppVar_59324 = (cppVar_59322 == 136);
	if (cppVar_59324) {
	cppVar_59320 = TCON;
	} else {
	BIT_VEC cppVar_59325;
	BIT_VEC cppVar_59326 = PC + 1;
	cppVar_59326 = (cppVar_59326 & cppMask_un_16_);
	BIT_VEC cppVar_59327 = ROM.rd(cppVar_59326);
	bool cppVar_59329 = (cppVar_59327 == 137);
	if (cppVar_59329) {
	cppVar_59325 = TMOD;
	} else {
	BIT_VEC cppVar_59330;
	BIT_VEC cppVar_59331 = PC + 1;
	cppVar_59331 = (cppVar_59331 & cppMask_un_16_);
	BIT_VEC cppVar_59332 = ROM.rd(cppVar_59331);
	bool cppVar_59334 = (cppVar_59332 == 138);
	if (cppVar_59334) {
	cppVar_59330 = TL0;
	} else {
	BIT_VEC cppVar_59335;
	BIT_VEC cppVar_59336 = PC + 1;
	cppVar_59336 = (cppVar_59336 & cppMask_un_16_);
	BIT_VEC cppVar_59337 = ROM.rd(cppVar_59336);
	bool cppVar_59339 = (cppVar_59337 == 140);
	if (cppVar_59339) {
	cppVar_59335 = TH0;
	} else {
	BIT_VEC cppVar_59340;
	BIT_VEC cppVar_59341 = PC + 1;
	cppVar_59341 = (cppVar_59341 & cppMask_un_16_);
	BIT_VEC cppVar_59342 = ROM.rd(cppVar_59341);
	bool cppVar_59344 = (cppVar_59342 == 139);
	if (cppVar_59344) {
	cppVar_59340 = TL1;
	} else {
	BIT_VEC cppVar_59345;
	BIT_VEC cppVar_59346 = PC + 1;
	cppVar_59346 = (cppVar_59346 & cppMask_un_16_);
	BIT_VEC cppVar_59347 = ROM.rd(cppVar_59346);
	bool cppVar_59349 = (cppVar_59347 == 141);
	if (cppVar_59349) {
	cppVar_59345 = TH1;
	} else {
	BIT_VEC cppVar_59350;
	BIT_VEC cppVar_59351 = PC + 1;
	cppVar_59351 = (cppVar_59351 & cppMask_un_16_);
	BIT_VEC cppVar_59352 = ROM.rd(cppVar_59351);
	bool cppVar_59354 = (cppVar_59352 == 144);
	if (cppVar_59354) {
	cppVar_59350 = P1;
	} else {
	BIT_VEC cppVar_59355;
	BIT_VEC cppVar_59356 = PC + 1;
	cppVar_59356 = (cppVar_59356 & cppMask_un_16_);
	BIT_VEC cppVar_59357 = ROM.rd(cppVar_59356);
	bool cppVar_59359 = (cppVar_59357 == 152);
	if (cppVar_59359) {
	cppVar_59355 = SCON;
	} else {
	BIT_VEC cppVar_59360;
	BIT_VEC cppVar_59361 = PC + 1;
	cppVar_59361 = (cppVar_59361 & cppMask_un_16_);
	BIT_VEC cppVar_59362 = ROM.rd(cppVar_59361);
	bool cppVar_59364 = (cppVar_59362 == 153);
	if (cppVar_59364) {
	cppVar_59360 = SBUF;
	} else {
	BIT_VEC cppVar_59365;
	BIT_VEC cppVar_59366 = PC + 1;
	cppVar_59366 = (cppVar_59366 & cppMask_un_16_);
	BIT_VEC cppVar_59367 = ROM.rd(cppVar_59366);
	bool cppVar_59369 = (cppVar_59367 == 160);
	if (cppVar_59369) {
	cppVar_59365 = P2;
	} else {
	BIT_VEC cppVar_59370;
	BIT_VEC cppVar_59371 = PC + 1;
	cppVar_59371 = (cppVar_59371 & cppMask_un_16_);
	BIT_VEC cppVar_59372 = ROM.rd(cppVar_59371);
	bool cppVar_59374 = (cppVar_59372 == 168);
	if (cppVar_59374) {
	cppVar_59370 = IE;
	} else {
	BIT_VEC cppVar_59375;
	BIT_VEC cppVar_59376 = PC + 1;
	cppVar_59376 = (cppVar_59376 & cppMask_un_16_);
	BIT_VEC cppVar_59377 = ROM.rd(cppVar_59376);
	bool cppVar_59379 = (cppVar_59377 == 176);
	if (cppVar_59379) {
	cppVar_59375 = P3;
	} else {
	BIT_VEC cppVar_59380;
	BIT_VEC cppVar_59381 = PC + 1;
	cppVar_59381 = (cppVar_59381 & cppMask_un_16_);
	BIT_VEC cppVar_59382 = ROM.rd(cppVar_59381);
	bool cppVar_59384 = (cppVar_59382 == 184);
	if (cppVar_59384) {
	cppVar_59380 = IP;
	} else {
	BIT_VEC cppVar_59385;
	BIT_VEC cppVar_59386 = PC + 1;
	cppVar_59386 = (cppVar_59386 & cppMask_un_16_);
	BIT_VEC cppVar_59387 = ROM.rd(cppVar_59386);
	bool cppVar_59389 = (cppVar_59387 == 208);
	if (cppVar_59389) {
	cppVar_59385 = PSW;
	} else {
	BIT_VEC cppVar_59390;
	BIT_VEC cppVar_59391 = PC + 1;
	cppVar_59391 = (cppVar_59391 & cppMask_un_16_);
	BIT_VEC cppVar_59392 = ROM.rd(cppVar_59391);
	bool cppVar_59394 = (cppVar_59392 == 224);
	if (cppVar_59394) {
	cppVar_59390 = ACC;
	} else {
	BIT_VEC cppVar_59395;
	BIT_VEC cppVar_59396 = PC + 1;
	cppVar_59396 = (cppVar_59396 & cppMask_un_16_);
	BIT_VEC cppVar_59397 = ROM.rd(cppVar_59396);
	bool cppVar_59399 = (cppVar_59397 == 240);
	if (cppVar_59399) {
	cppVar_59395 = B;
	} else {
	cppVar_59395 = 0;
	}
	cppVar_59390 = cppVar_59395;
	}
	cppVar_59385 = cppVar_59390;
	}
	cppVar_59380 = cppVar_59385;
	}
	cppVar_59375 = cppVar_59380;
	}
	cppVar_59370 = cppVar_59375;
	}
	cppVar_59365 = cppVar_59370;
	}
	cppVar_59360 = cppVar_59365;
	}
	cppVar_59355 = cppVar_59360;
	}
	cppVar_59350 = cppVar_59355;
	}
	cppVar_59345 = cppVar_59350;
	}
	cppVar_59340 = cppVar_59345;
	}
	cppVar_59335 = cppVar_59340;
	}
	cppVar_59330 = cppVar_59335;
	}
	cppVar_59325 = cppVar_59330;
	}
	cppVar_59320 = cppVar_59325;
	}
	cppVar_59315 = cppVar_59320;
	}
	cppVar_59310 = cppVar_59315;
	}
	cppVar_59305 = cppVar_59310;
	}
	cppVar_59300 = cppVar_59305;
	}
	cppVar_59295 = cppVar_59300;
	}
	cppVar_59286 = cppVar_59295;
	}
	BIT_VEC cppVar_59402 = cppVar_59286 - 1;
	cppVar_59402 = (cppVar_59402 & cppMask_un_8_);
	cppVar_59280 = cppVar_59402;
	} else {
	cppVar_59280 = SBUF;
	}
	cppVar_59272 = cppVar_59280;
	} else {
	BIT_VEC cppVar_59403;
	BIT_VEC cppVar_59404 = ROM.rd(PC);
	bool cppVar_59406 = (cppVar_59404 == 5);
	if (cppVar_59406) {
	BIT_VEC cppVar_59407;
	BIT_VEC cppVar_59409 = PC + 1;
	cppVar_59409 = (cppVar_59409 & cppMask_un_16_);
	BIT_VEC cppVar_59410 = ROM.rd(cppVar_59409);
	bool cppVar_59412 = (cppVar_59410 == 153);
	if (cppVar_59412) {
	BIT_VEC cppVar_59413;
	BIT_VEC cppVar_59414 = PC + 1;
	cppVar_59414 = (cppVar_59414 & cppMask_un_16_);
	BIT_VEC cppVar_59415 = ROM.rd(cppVar_59414);
	BIT_VEC cppVar_59416 = (cppVar_59415 >> 7) & cppMask_un_1_;
	bool cppVar_59418 = (cppVar_59416 == 0);
	if (cppVar_59418) {
	BIT_VEC cppVar_59419 = PC + 1;
	cppVar_59419 = (cppVar_59419 & cppMask_un_16_);
	BIT_VEC cppVar_59420 = ROM.rd(cppVar_59419);
	BIT_VEC cppVar_59421 = IRAM.rd(cppVar_59420);
	cppVar_59413 = cppVar_59421;
	} else {
	BIT_VEC cppVar_59422;
	BIT_VEC cppVar_59423 = PC + 1;
	cppVar_59423 = (cppVar_59423 & cppMask_un_16_);
	BIT_VEC cppVar_59424 = ROM.rd(cppVar_59423);
	bool cppVar_59426 = (cppVar_59424 == 128);
	if (cppVar_59426) {
	cppVar_59422 = P0;
	} else {
	BIT_VEC cppVar_59427;
	BIT_VEC cppVar_59428 = PC + 1;
	cppVar_59428 = (cppVar_59428 & cppMask_un_16_);
	BIT_VEC cppVar_59429 = ROM.rd(cppVar_59428);
	bool cppVar_59431 = (cppVar_59429 == 129);
	if (cppVar_59431) {
	cppVar_59427 = SP;
	} else {
	BIT_VEC cppVar_59432;
	BIT_VEC cppVar_59433 = PC + 1;
	cppVar_59433 = (cppVar_59433 & cppMask_un_16_);
	BIT_VEC cppVar_59434 = ROM.rd(cppVar_59433);
	bool cppVar_59436 = (cppVar_59434 == 130);
	if (cppVar_59436) {
	cppVar_59432 = DPL;
	} else {
	BIT_VEC cppVar_59437;
	BIT_VEC cppVar_59438 = PC + 1;
	cppVar_59438 = (cppVar_59438 & cppMask_un_16_);
	BIT_VEC cppVar_59439 = ROM.rd(cppVar_59438);
	bool cppVar_59441 = (cppVar_59439 == 131);
	if (cppVar_59441) {
	cppVar_59437 = DPH;
	} else {
	BIT_VEC cppVar_59442;
	BIT_VEC cppVar_59443 = PC + 1;
	cppVar_59443 = (cppVar_59443 & cppMask_un_16_);
	BIT_VEC cppVar_59444 = ROM.rd(cppVar_59443);
	bool cppVar_59446 = (cppVar_59444 == 135);
	if (cppVar_59446) {
	cppVar_59442 = PCON;
	} else {
	BIT_VEC cppVar_59447;
	BIT_VEC cppVar_59448 = PC + 1;
	cppVar_59448 = (cppVar_59448 & cppMask_un_16_);
	BIT_VEC cppVar_59449 = ROM.rd(cppVar_59448);
	bool cppVar_59451 = (cppVar_59449 == 136);
	if (cppVar_59451) {
	cppVar_59447 = TCON;
	} else {
	BIT_VEC cppVar_59452;
	BIT_VEC cppVar_59453 = PC + 1;
	cppVar_59453 = (cppVar_59453 & cppMask_un_16_);
	BIT_VEC cppVar_59454 = ROM.rd(cppVar_59453);
	bool cppVar_59456 = (cppVar_59454 == 137);
	if (cppVar_59456) {
	cppVar_59452 = TMOD;
	} else {
	BIT_VEC cppVar_59457;
	BIT_VEC cppVar_59458 = PC + 1;
	cppVar_59458 = (cppVar_59458 & cppMask_un_16_);
	BIT_VEC cppVar_59459 = ROM.rd(cppVar_59458);
	bool cppVar_59461 = (cppVar_59459 == 138);
	if (cppVar_59461) {
	cppVar_59457 = TL0;
	} else {
	BIT_VEC cppVar_59462;
	BIT_VEC cppVar_59463 = PC + 1;
	cppVar_59463 = (cppVar_59463 & cppMask_un_16_);
	BIT_VEC cppVar_59464 = ROM.rd(cppVar_59463);
	bool cppVar_59466 = (cppVar_59464 == 140);
	if (cppVar_59466) {
	cppVar_59462 = TH0;
	} else {
	BIT_VEC cppVar_59467;
	BIT_VEC cppVar_59468 = PC + 1;
	cppVar_59468 = (cppVar_59468 & cppMask_un_16_);
	BIT_VEC cppVar_59469 = ROM.rd(cppVar_59468);
	bool cppVar_59471 = (cppVar_59469 == 139);
	if (cppVar_59471) {
	cppVar_59467 = TL1;
	} else {
	BIT_VEC cppVar_59472;
	BIT_VEC cppVar_59473 = PC + 1;
	cppVar_59473 = (cppVar_59473 & cppMask_un_16_);
	BIT_VEC cppVar_59474 = ROM.rd(cppVar_59473);
	bool cppVar_59476 = (cppVar_59474 == 141);
	if (cppVar_59476) {
	cppVar_59472 = TH1;
	} else {
	BIT_VEC cppVar_59477;
	BIT_VEC cppVar_59478 = PC + 1;
	cppVar_59478 = (cppVar_59478 & cppMask_un_16_);
	BIT_VEC cppVar_59479 = ROM.rd(cppVar_59478);
	bool cppVar_59481 = (cppVar_59479 == 144);
	if (cppVar_59481) {
	cppVar_59477 = P1;
	} else {
	BIT_VEC cppVar_59482;
	BIT_VEC cppVar_59483 = PC + 1;
	cppVar_59483 = (cppVar_59483 & cppMask_un_16_);
	BIT_VEC cppVar_59484 = ROM.rd(cppVar_59483);
	bool cppVar_59486 = (cppVar_59484 == 152);
	if (cppVar_59486) {
	cppVar_59482 = SCON;
	} else {
	BIT_VEC cppVar_59487;
	BIT_VEC cppVar_59488 = PC + 1;
	cppVar_59488 = (cppVar_59488 & cppMask_un_16_);
	BIT_VEC cppVar_59489 = ROM.rd(cppVar_59488);
	bool cppVar_59491 = (cppVar_59489 == 153);
	if (cppVar_59491) {
	cppVar_59487 = SBUF;
	} else {
	BIT_VEC cppVar_59492;
	BIT_VEC cppVar_59493 = PC + 1;
	cppVar_59493 = (cppVar_59493 & cppMask_un_16_);
	BIT_VEC cppVar_59494 = ROM.rd(cppVar_59493);
	bool cppVar_59496 = (cppVar_59494 == 160);
	if (cppVar_59496) {
	cppVar_59492 = P2;
	} else {
	BIT_VEC cppVar_59497;
	BIT_VEC cppVar_59498 = PC + 1;
	cppVar_59498 = (cppVar_59498 & cppMask_un_16_);
	BIT_VEC cppVar_59499 = ROM.rd(cppVar_59498);
	bool cppVar_59501 = (cppVar_59499 == 168);
	if (cppVar_59501) {
	cppVar_59497 = IE;
	} else {
	BIT_VEC cppVar_59502;
	BIT_VEC cppVar_59503 = PC + 1;
	cppVar_59503 = (cppVar_59503 & cppMask_un_16_);
	BIT_VEC cppVar_59504 = ROM.rd(cppVar_59503);
	bool cppVar_59506 = (cppVar_59504 == 176);
	if (cppVar_59506) {
	cppVar_59502 = P3;
	} else {
	BIT_VEC cppVar_59507;
	BIT_VEC cppVar_59508 = PC + 1;
	cppVar_59508 = (cppVar_59508 & cppMask_un_16_);
	BIT_VEC cppVar_59509 = ROM.rd(cppVar_59508);
	bool cppVar_59511 = (cppVar_59509 == 184);
	if (cppVar_59511) {
	cppVar_59507 = IP;
	} else {
	BIT_VEC cppVar_59512;
	BIT_VEC cppVar_59513 = PC + 1;
	cppVar_59513 = (cppVar_59513 & cppMask_un_16_);
	BIT_VEC cppVar_59514 = ROM.rd(cppVar_59513);
	bool cppVar_59516 = (cppVar_59514 == 208);
	if (cppVar_59516) {
	cppVar_59512 = PSW;
	} else {
	BIT_VEC cppVar_59517;
	BIT_VEC cppVar_59518 = PC + 1;
	cppVar_59518 = (cppVar_59518 & cppMask_un_16_);
	BIT_VEC cppVar_59519 = ROM.rd(cppVar_59518);
	bool cppVar_59521 = (cppVar_59519 == 224);
	if (cppVar_59521) {
	cppVar_59517 = ACC;
	} else {
	BIT_VEC cppVar_59522;
	BIT_VEC cppVar_59523 = PC + 1;
	cppVar_59523 = (cppVar_59523 & cppMask_un_16_);
	BIT_VEC cppVar_59524 = ROM.rd(cppVar_59523);
	bool cppVar_59526 = (cppVar_59524 == 240);
	if (cppVar_59526) {
	cppVar_59522 = B;
	} else {
	cppVar_59522 = 0;
	}
	cppVar_59517 = cppVar_59522;
	}
	cppVar_59512 = cppVar_59517;
	}
	cppVar_59507 = cppVar_59512;
	}
	cppVar_59502 = cppVar_59507;
	}
	cppVar_59497 = cppVar_59502;
	}
	cppVar_59492 = cppVar_59497;
	}
	cppVar_59487 = cppVar_59492;
	}
	cppVar_59482 = cppVar_59487;
	}
	cppVar_59477 = cppVar_59482;
	}
	cppVar_59472 = cppVar_59477;
	}
	cppVar_59467 = cppVar_59472;
	}
	cppVar_59462 = cppVar_59467;
	}
	cppVar_59457 = cppVar_59462;
	}
	cppVar_59452 = cppVar_59457;
	}
	cppVar_59447 = cppVar_59452;
	}
	cppVar_59442 = cppVar_59447;
	}
	cppVar_59437 = cppVar_59442;
	}
	cppVar_59432 = cppVar_59437;
	}
	cppVar_59427 = cppVar_59432;
	}
	cppVar_59422 = cppVar_59427;
	}
	cppVar_59413 = cppVar_59422;
	}
	BIT_VEC cppVar_59529 = cppVar_59413 + 1;
	cppVar_59529 = (cppVar_59529 & cppMask_un_8_);
	cppVar_59407 = cppVar_59529;
	} else {
	cppVar_59407 = SBUF;
	}
	cppVar_59403 = cppVar_59407;
	} else {
	cppVar_59403 = SBUF;
	}
	cppVar_59272 = cppVar_59403;
	}
	cppVar_59146 = cppVar_59272;
	}
	cppVar_59017 = cppVar_59146;
	}
	cppVar_58891 = cppVar_59017;
	}
	cppVar_58762 = cppVar_58891;
	}
	cppVar_58636 = cppVar_58762;
	}
	cppVar_58507 = cppVar_58636;
	}
	cppVar_58494 = cppVar_58507;
	}
	cppVar_58368 = cppVar_58494;
	}
	cppVar_58351 = cppVar_58368;
	}
	cppVar_58334 = cppVar_58351;
	}
	cppVar_58184 = cppVar_58334;
	}
	cppVar_58034 = cppVar_58184;
	}
	cppVar_57884 = cppVar_58034;
	}
	cppVar_57734 = cppVar_57884;
	}
	cppVar_57584 = cppVar_57734;
	}
	cppVar_57434 = cppVar_57584;
	}
	cppVar_57284 = cppVar_57434;
	}
	cppVar_57134 = cppVar_57284;
	}
	cppVar_57120 = cppVar_57134;
	}
	cppVar_57109 = cppVar_57120;
	}
	return cppVar_57109;
}
