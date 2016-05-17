#include "common.hpp"
#include "model_oc8051_class.hpp"

BIT_VEC model_oc8051::cppUpdateFun_TH0()
{
	BIT_VEC cppVar_72426;
	BIT_VEC cppVar_72427 = ROM.rd(PC);
	bool cppVar_72429 = (cppVar_72427 == 208);
	if (cppVar_72429) {
	BIT_VEC cppVar_72430;
	BIT_VEC cppVar_72432 = PC + 1;
	cppVar_72432 = (cppVar_72432 & cppMask_un_16_);
	BIT_VEC cppVar_72433 = ROM.rd(cppVar_72432);
	bool cppVar_72435 = (cppVar_72433 == 140);
	if (cppVar_72435) {
	BIT_VEC cppVar_72436 = IRAM.rd(SP);
	cppVar_72430 = cppVar_72436;
	} else {
	cppVar_72430 = TH0;
	}
	cppVar_72426 = cppVar_72430;
	} else {
	BIT_VEC cppVar_72437;
	BIT_VEC cppVar_72438 = ROM.rd(PC);
	bool cppVar_72440 = (cppVar_72438 == 245);
	BIT_VEC cppVar_72441 = ROM.rd(PC);
	bool cppVar_72443 = (cppVar_72441 == 197);
	bool cppVar_72444 = cppVar_72440 || cppVar_72443;
	if (cppVar_72444) {
	BIT_VEC cppVar_72445;
	BIT_VEC cppVar_72447 = PC + 1;
	cppVar_72447 = (cppVar_72447 & cppMask_un_16_);
	BIT_VEC cppVar_72448 = ROM.rd(cppVar_72447);
	bool cppVar_72450 = (cppVar_72448 == 140);
	if (cppVar_72450) {
	cppVar_72445 = ACC;
	} else {
	cppVar_72445 = TH0;
	}
	cppVar_72437 = cppVar_72445;
	} else {
	BIT_VEC cppVar_72451;
	BIT_VEC cppVar_72452 = ROM.rd(PC);
	bool cppVar_72454 = (cppVar_72452 == 143);
	if (cppVar_72454) {
	BIT_VEC cppVar_72455;
	BIT_VEC cppVar_72457 = PC + 1;
	cppVar_72457 = (cppVar_72457 & cppMask_un_16_);
	BIT_VEC cppVar_72458 = ROM.rd(cppVar_72457);
	bool cppVar_72460 = (cppVar_72458 == 140);
	if (cppVar_72460) {
	BIT_VEC cppVar_72461;
	BIT_VEC cppVar_72463 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72465 = (cppVar_72463 << 3) | 7;
	cppVar_72465 = (cppVar_72465 & cppMask_un_5_);
	BIT_VEC cppVar_72466 = (0 << 5) | cppVar_72465;
	cppVar_72466 = (cppVar_72466 & cppMask_un_8_);
	BIT_VEC cppVar_72467 = (cppVar_72466 >> 7) & cppMask_un_1_;
	bool cppVar_72469 = (cppVar_72467 == 0);
	if (cppVar_72469) {
	BIT_VEC cppVar_72470 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72471 = (cppVar_72470 << 3) | 7;
	cppVar_72471 = (cppVar_72471 & cppMask_un_5_);
	BIT_VEC cppVar_72472 = (0 << 5) | cppVar_72471;
	cppVar_72472 = (cppVar_72472 & cppMask_un_8_);
	BIT_VEC cppVar_72473 = IRAM.rd(cppVar_72472);
	cppVar_72461 = cppVar_72473;
	} else {
	BIT_VEC cppVar_72474;
	BIT_VEC cppVar_72475 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72476 = (cppVar_72475 << 3) | 7;
	cppVar_72476 = (cppVar_72476 & cppMask_un_5_);
	BIT_VEC cppVar_72477 = (0 << 5) | cppVar_72476;
	cppVar_72477 = (cppVar_72477 & cppMask_un_8_);
	bool cppVar_72479 = (cppVar_72477 == 128);
	if (cppVar_72479) {
	cppVar_72474 = P0;
	} else {
	BIT_VEC cppVar_72480;
	BIT_VEC cppVar_72481 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72482 = (cppVar_72481 << 3) | 7;
	cppVar_72482 = (cppVar_72482 & cppMask_un_5_);
	BIT_VEC cppVar_72483 = (0 << 5) | cppVar_72482;
	cppVar_72483 = (cppVar_72483 & cppMask_un_8_);
	bool cppVar_72485 = (cppVar_72483 == 129);
	if (cppVar_72485) {
	cppVar_72480 = SP;
	} else {
	BIT_VEC cppVar_72486;
	BIT_VEC cppVar_72487 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72488 = (cppVar_72487 << 3) | 7;
	cppVar_72488 = (cppVar_72488 & cppMask_un_5_);
	BIT_VEC cppVar_72489 = (0 << 5) | cppVar_72488;
	cppVar_72489 = (cppVar_72489 & cppMask_un_8_);
	bool cppVar_72491 = (cppVar_72489 == 130);
	if (cppVar_72491) {
	cppVar_72486 = DPL;
	} else {
	BIT_VEC cppVar_72492;
	BIT_VEC cppVar_72493 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72494 = (cppVar_72493 << 3) | 7;
	cppVar_72494 = (cppVar_72494 & cppMask_un_5_);
	BIT_VEC cppVar_72495 = (0 << 5) | cppVar_72494;
	cppVar_72495 = (cppVar_72495 & cppMask_un_8_);
	bool cppVar_72497 = (cppVar_72495 == 131);
	if (cppVar_72497) {
	cppVar_72492 = DPH;
	} else {
	BIT_VEC cppVar_72498;
	BIT_VEC cppVar_72499 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72500 = (cppVar_72499 << 3) | 7;
	cppVar_72500 = (cppVar_72500 & cppMask_un_5_);
	BIT_VEC cppVar_72501 = (0 << 5) | cppVar_72500;
	cppVar_72501 = (cppVar_72501 & cppMask_un_8_);
	bool cppVar_72503 = (cppVar_72501 == 135);
	if (cppVar_72503) {
	cppVar_72498 = PCON;
	} else {
	BIT_VEC cppVar_72504;
	BIT_VEC cppVar_72505 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72506 = (cppVar_72505 << 3) | 7;
	cppVar_72506 = (cppVar_72506 & cppMask_un_5_);
	BIT_VEC cppVar_72507 = (0 << 5) | cppVar_72506;
	cppVar_72507 = (cppVar_72507 & cppMask_un_8_);
	bool cppVar_72509 = (cppVar_72507 == 136);
	if (cppVar_72509) {
	cppVar_72504 = TCON;
	} else {
	BIT_VEC cppVar_72510;
	BIT_VEC cppVar_72511 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72512 = (cppVar_72511 << 3) | 7;
	cppVar_72512 = (cppVar_72512 & cppMask_un_5_);
	BIT_VEC cppVar_72513 = (0 << 5) | cppVar_72512;
	cppVar_72513 = (cppVar_72513 & cppMask_un_8_);
	bool cppVar_72515 = (cppVar_72513 == 137);
	if (cppVar_72515) {
	cppVar_72510 = TMOD;
	} else {
	BIT_VEC cppVar_72516;
	BIT_VEC cppVar_72517 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72518 = (cppVar_72517 << 3) | 7;
	cppVar_72518 = (cppVar_72518 & cppMask_un_5_);
	BIT_VEC cppVar_72519 = (0 << 5) | cppVar_72518;
	cppVar_72519 = (cppVar_72519 & cppMask_un_8_);
	bool cppVar_72521 = (cppVar_72519 == 138);
	if (cppVar_72521) {
	cppVar_72516 = TL0;
	} else {
	BIT_VEC cppVar_72522;
	BIT_VEC cppVar_72523 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72524 = (cppVar_72523 << 3) | 7;
	cppVar_72524 = (cppVar_72524 & cppMask_un_5_);
	BIT_VEC cppVar_72525 = (0 << 5) | cppVar_72524;
	cppVar_72525 = (cppVar_72525 & cppMask_un_8_);
	bool cppVar_72527 = (cppVar_72525 == 140);
	if (cppVar_72527) {
	cppVar_72522 = TH0;
	} else {
	BIT_VEC cppVar_72528;
	BIT_VEC cppVar_72529 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72530 = (cppVar_72529 << 3) | 7;
	cppVar_72530 = (cppVar_72530 & cppMask_un_5_);
	BIT_VEC cppVar_72531 = (0 << 5) | cppVar_72530;
	cppVar_72531 = (cppVar_72531 & cppMask_un_8_);
	bool cppVar_72533 = (cppVar_72531 == 139);
	if (cppVar_72533) {
	cppVar_72528 = TL1;
	} else {
	BIT_VEC cppVar_72534;
	BIT_VEC cppVar_72535 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72536 = (cppVar_72535 << 3) | 7;
	cppVar_72536 = (cppVar_72536 & cppMask_un_5_);
	BIT_VEC cppVar_72537 = (0 << 5) | cppVar_72536;
	cppVar_72537 = (cppVar_72537 & cppMask_un_8_);
	bool cppVar_72539 = (cppVar_72537 == 141);
	if (cppVar_72539) {
	cppVar_72534 = TH1;
	} else {
	BIT_VEC cppVar_72540;
	BIT_VEC cppVar_72541 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72542 = (cppVar_72541 << 3) | 7;
	cppVar_72542 = (cppVar_72542 & cppMask_un_5_);
	BIT_VEC cppVar_72543 = (0 << 5) | cppVar_72542;
	cppVar_72543 = (cppVar_72543 & cppMask_un_8_);
	bool cppVar_72545 = (cppVar_72543 == 144);
	if (cppVar_72545) {
	cppVar_72540 = P1;
	} else {
	BIT_VEC cppVar_72546;
	BIT_VEC cppVar_72547 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72548 = (cppVar_72547 << 3) | 7;
	cppVar_72548 = (cppVar_72548 & cppMask_un_5_);
	BIT_VEC cppVar_72549 = (0 << 5) | cppVar_72548;
	cppVar_72549 = (cppVar_72549 & cppMask_un_8_);
	bool cppVar_72551 = (cppVar_72549 == 152);
	if (cppVar_72551) {
	cppVar_72546 = SCON;
	} else {
	BIT_VEC cppVar_72552;
	BIT_VEC cppVar_72553 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72554 = (cppVar_72553 << 3) | 7;
	cppVar_72554 = (cppVar_72554 & cppMask_un_5_);
	BIT_VEC cppVar_72555 = (0 << 5) | cppVar_72554;
	cppVar_72555 = (cppVar_72555 & cppMask_un_8_);
	bool cppVar_72557 = (cppVar_72555 == 153);
	if (cppVar_72557) {
	cppVar_72552 = SBUF;
	} else {
	BIT_VEC cppVar_72558;
	BIT_VEC cppVar_72559 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72560 = (cppVar_72559 << 3) | 7;
	cppVar_72560 = (cppVar_72560 & cppMask_un_5_);
	BIT_VEC cppVar_72561 = (0 << 5) | cppVar_72560;
	cppVar_72561 = (cppVar_72561 & cppMask_un_8_);
	bool cppVar_72563 = (cppVar_72561 == 160);
	if (cppVar_72563) {
	cppVar_72558 = P2;
	} else {
	BIT_VEC cppVar_72564;
	BIT_VEC cppVar_72565 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72566 = (cppVar_72565 << 3) | 7;
	cppVar_72566 = (cppVar_72566 & cppMask_un_5_);
	BIT_VEC cppVar_72567 = (0 << 5) | cppVar_72566;
	cppVar_72567 = (cppVar_72567 & cppMask_un_8_);
	bool cppVar_72569 = (cppVar_72567 == 168);
	if (cppVar_72569) {
	cppVar_72564 = IE;
	} else {
	BIT_VEC cppVar_72570;
	BIT_VEC cppVar_72571 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72572 = (cppVar_72571 << 3) | 7;
	cppVar_72572 = (cppVar_72572 & cppMask_un_5_);
	BIT_VEC cppVar_72573 = (0 << 5) | cppVar_72572;
	cppVar_72573 = (cppVar_72573 & cppMask_un_8_);
	bool cppVar_72575 = (cppVar_72573 == 176);
	if (cppVar_72575) {
	cppVar_72570 = P3;
	} else {
	BIT_VEC cppVar_72576;
	BIT_VEC cppVar_72577 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72578 = (cppVar_72577 << 3) | 7;
	cppVar_72578 = (cppVar_72578 & cppMask_un_5_);
	BIT_VEC cppVar_72579 = (0 << 5) | cppVar_72578;
	cppVar_72579 = (cppVar_72579 & cppMask_un_8_);
	bool cppVar_72581 = (cppVar_72579 == 184);
	if (cppVar_72581) {
	cppVar_72576 = IP;
	} else {
	BIT_VEC cppVar_72582;
	BIT_VEC cppVar_72583 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72584 = (cppVar_72583 << 3) | 7;
	cppVar_72584 = (cppVar_72584 & cppMask_un_5_);
	BIT_VEC cppVar_72585 = (0 << 5) | cppVar_72584;
	cppVar_72585 = (cppVar_72585 & cppMask_un_8_);
	bool cppVar_72587 = (cppVar_72585 == 208);
	if (cppVar_72587) {
	cppVar_72582 = PSW;
	} else {
	BIT_VEC cppVar_72588;
	BIT_VEC cppVar_72589 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72590 = (cppVar_72589 << 3) | 7;
	cppVar_72590 = (cppVar_72590 & cppMask_un_5_);
	BIT_VEC cppVar_72591 = (0 << 5) | cppVar_72590;
	cppVar_72591 = (cppVar_72591 & cppMask_un_8_);
	bool cppVar_72593 = (cppVar_72591 == 224);
	if (cppVar_72593) {
	cppVar_72588 = ACC;
	} else {
	BIT_VEC cppVar_72594;
	BIT_VEC cppVar_72595 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72596 = (cppVar_72595 << 3) | 7;
	cppVar_72596 = (cppVar_72596 & cppMask_un_5_);
	BIT_VEC cppVar_72597 = (0 << 5) | cppVar_72596;
	cppVar_72597 = (cppVar_72597 & cppMask_un_8_);
	bool cppVar_72599 = (cppVar_72597 == 240);
	if (cppVar_72599) {
	cppVar_72594 = B;
	} else {
	cppVar_72594 = 0;
	}
	cppVar_72588 = cppVar_72594;
	}
	cppVar_72582 = cppVar_72588;
	}
	cppVar_72576 = cppVar_72582;
	}
	cppVar_72570 = cppVar_72576;
	}
	cppVar_72564 = cppVar_72570;
	}
	cppVar_72558 = cppVar_72564;
	}
	cppVar_72552 = cppVar_72558;
	}
	cppVar_72546 = cppVar_72552;
	}
	cppVar_72540 = cppVar_72546;
	}
	cppVar_72534 = cppVar_72540;
	}
	cppVar_72528 = cppVar_72534;
	}
	cppVar_72522 = cppVar_72528;
	}
	cppVar_72516 = cppVar_72522;
	}
	cppVar_72510 = cppVar_72516;
	}
	cppVar_72504 = cppVar_72510;
	}
	cppVar_72498 = cppVar_72504;
	}
	cppVar_72492 = cppVar_72498;
	}
	cppVar_72486 = cppVar_72492;
	}
	cppVar_72480 = cppVar_72486;
	}
	cppVar_72474 = cppVar_72480;
	}
	cppVar_72461 = cppVar_72474;
	}
	cppVar_72455 = cppVar_72461;
	} else {
	cppVar_72455 = TH0;
	}
	cppVar_72451 = cppVar_72455;
	} else {
	BIT_VEC cppVar_72601;
	BIT_VEC cppVar_72602 = ROM.rd(PC);
	bool cppVar_72604 = (cppVar_72602 == 142);
	if (cppVar_72604) {
	BIT_VEC cppVar_72605;
	BIT_VEC cppVar_72607 = PC + 1;
	cppVar_72607 = (cppVar_72607 & cppMask_un_16_);
	BIT_VEC cppVar_72608 = ROM.rd(cppVar_72607);
	bool cppVar_72610 = (cppVar_72608 == 140);
	if (cppVar_72610) {
	BIT_VEC cppVar_72611;
	BIT_VEC cppVar_72613 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72615 = (cppVar_72613 << 3) | 6;
	cppVar_72615 = (cppVar_72615 & cppMask_un_5_);
	BIT_VEC cppVar_72616 = (0 << 5) | cppVar_72615;
	cppVar_72616 = (cppVar_72616 & cppMask_un_8_);
	BIT_VEC cppVar_72617 = (cppVar_72616 >> 7) & cppMask_un_1_;
	bool cppVar_72619 = (cppVar_72617 == 0);
	if (cppVar_72619) {
	BIT_VEC cppVar_72620 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72621 = (cppVar_72620 << 3) | 6;
	cppVar_72621 = (cppVar_72621 & cppMask_un_5_);
	BIT_VEC cppVar_72622 = (0 << 5) | cppVar_72621;
	cppVar_72622 = (cppVar_72622 & cppMask_un_8_);
	BIT_VEC cppVar_72623 = IRAM.rd(cppVar_72622);
	cppVar_72611 = cppVar_72623;
	} else {
	BIT_VEC cppVar_72624;
	BIT_VEC cppVar_72625 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72626 = (cppVar_72625 << 3) | 6;
	cppVar_72626 = (cppVar_72626 & cppMask_un_5_);
	BIT_VEC cppVar_72627 = (0 << 5) | cppVar_72626;
	cppVar_72627 = (cppVar_72627 & cppMask_un_8_);
	bool cppVar_72629 = (cppVar_72627 == 128);
	if (cppVar_72629) {
	cppVar_72624 = P0;
	} else {
	BIT_VEC cppVar_72630;
	BIT_VEC cppVar_72631 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72632 = (cppVar_72631 << 3) | 6;
	cppVar_72632 = (cppVar_72632 & cppMask_un_5_);
	BIT_VEC cppVar_72633 = (0 << 5) | cppVar_72632;
	cppVar_72633 = (cppVar_72633 & cppMask_un_8_);
	bool cppVar_72635 = (cppVar_72633 == 129);
	if (cppVar_72635) {
	cppVar_72630 = SP;
	} else {
	BIT_VEC cppVar_72636;
	BIT_VEC cppVar_72637 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72638 = (cppVar_72637 << 3) | 6;
	cppVar_72638 = (cppVar_72638 & cppMask_un_5_);
	BIT_VEC cppVar_72639 = (0 << 5) | cppVar_72638;
	cppVar_72639 = (cppVar_72639 & cppMask_un_8_);
	bool cppVar_72641 = (cppVar_72639 == 130);
	if (cppVar_72641) {
	cppVar_72636 = DPL;
	} else {
	BIT_VEC cppVar_72642;
	BIT_VEC cppVar_72643 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72644 = (cppVar_72643 << 3) | 6;
	cppVar_72644 = (cppVar_72644 & cppMask_un_5_);
	BIT_VEC cppVar_72645 = (0 << 5) | cppVar_72644;
	cppVar_72645 = (cppVar_72645 & cppMask_un_8_);
	bool cppVar_72647 = (cppVar_72645 == 131);
	if (cppVar_72647) {
	cppVar_72642 = DPH;
	} else {
	BIT_VEC cppVar_72648;
	BIT_VEC cppVar_72649 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72650 = (cppVar_72649 << 3) | 6;
	cppVar_72650 = (cppVar_72650 & cppMask_un_5_);
	BIT_VEC cppVar_72651 = (0 << 5) | cppVar_72650;
	cppVar_72651 = (cppVar_72651 & cppMask_un_8_);
	bool cppVar_72653 = (cppVar_72651 == 135);
	if (cppVar_72653) {
	cppVar_72648 = PCON;
	} else {
	BIT_VEC cppVar_72654;
	BIT_VEC cppVar_72655 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72656 = (cppVar_72655 << 3) | 6;
	cppVar_72656 = (cppVar_72656 & cppMask_un_5_);
	BIT_VEC cppVar_72657 = (0 << 5) | cppVar_72656;
	cppVar_72657 = (cppVar_72657 & cppMask_un_8_);
	bool cppVar_72659 = (cppVar_72657 == 136);
	if (cppVar_72659) {
	cppVar_72654 = TCON;
	} else {
	BIT_VEC cppVar_72660;
	BIT_VEC cppVar_72661 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72662 = (cppVar_72661 << 3) | 6;
	cppVar_72662 = (cppVar_72662 & cppMask_un_5_);
	BIT_VEC cppVar_72663 = (0 << 5) | cppVar_72662;
	cppVar_72663 = (cppVar_72663 & cppMask_un_8_);
	bool cppVar_72665 = (cppVar_72663 == 137);
	if (cppVar_72665) {
	cppVar_72660 = TMOD;
	} else {
	BIT_VEC cppVar_72666;
	BIT_VEC cppVar_72667 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72668 = (cppVar_72667 << 3) | 6;
	cppVar_72668 = (cppVar_72668 & cppMask_un_5_);
	BIT_VEC cppVar_72669 = (0 << 5) | cppVar_72668;
	cppVar_72669 = (cppVar_72669 & cppMask_un_8_);
	bool cppVar_72671 = (cppVar_72669 == 138);
	if (cppVar_72671) {
	cppVar_72666 = TL0;
	} else {
	BIT_VEC cppVar_72672;
	BIT_VEC cppVar_72673 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72674 = (cppVar_72673 << 3) | 6;
	cppVar_72674 = (cppVar_72674 & cppMask_un_5_);
	BIT_VEC cppVar_72675 = (0 << 5) | cppVar_72674;
	cppVar_72675 = (cppVar_72675 & cppMask_un_8_);
	bool cppVar_72677 = (cppVar_72675 == 140);
	if (cppVar_72677) {
	cppVar_72672 = TH0;
	} else {
	BIT_VEC cppVar_72678;
	BIT_VEC cppVar_72679 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72680 = (cppVar_72679 << 3) | 6;
	cppVar_72680 = (cppVar_72680 & cppMask_un_5_);
	BIT_VEC cppVar_72681 = (0 << 5) | cppVar_72680;
	cppVar_72681 = (cppVar_72681 & cppMask_un_8_);
	bool cppVar_72683 = (cppVar_72681 == 139);
	if (cppVar_72683) {
	cppVar_72678 = TL1;
	} else {
	BIT_VEC cppVar_72684;
	BIT_VEC cppVar_72685 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72686 = (cppVar_72685 << 3) | 6;
	cppVar_72686 = (cppVar_72686 & cppMask_un_5_);
	BIT_VEC cppVar_72687 = (0 << 5) | cppVar_72686;
	cppVar_72687 = (cppVar_72687 & cppMask_un_8_);
	bool cppVar_72689 = (cppVar_72687 == 141);
	if (cppVar_72689) {
	cppVar_72684 = TH1;
	} else {
	BIT_VEC cppVar_72690;
	BIT_VEC cppVar_72691 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72692 = (cppVar_72691 << 3) | 6;
	cppVar_72692 = (cppVar_72692 & cppMask_un_5_);
	BIT_VEC cppVar_72693 = (0 << 5) | cppVar_72692;
	cppVar_72693 = (cppVar_72693 & cppMask_un_8_);
	bool cppVar_72695 = (cppVar_72693 == 144);
	if (cppVar_72695) {
	cppVar_72690 = P1;
	} else {
	BIT_VEC cppVar_72696;
	BIT_VEC cppVar_72697 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72698 = (cppVar_72697 << 3) | 6;
	cppVar_72698 = (cppVar_72698 & cppMask_un_5_);
	BIT_VEC cppVar_72699 = (0 << 5) | cppVar_72698;
	cppVar_72699 = (cppVar_72699 & cppMask_un_8_);
	bool cppVar_72701 = (cppVar_72699 == 152);
	if (cppVar_72701) {
	cppVar_72696 = SCON;
	} else {
	BIT_VEC cppVar_72702;
	BIT_VEC cppVar_72703 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72704 = (cppVar_72703 << 3) | 6;
	cppVar_72704 = (cppVar_72704 & cppMask_un_5_);
	BIT_VEC cppVar_72705 = (0 << 5) | cppVar_72704;
	cppVar_72705 = (cppVar_72705 & cppMask_un_8_);
	bool cppVar_72707 = (cppVar_72705 == 153);
	if (cppVar_72707) {
	cppVar_72702 = SBUF;
	} else {
	BIT_VEC cppVar_72708;
	BIT_VEC cppVar_72709 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72710 = (cppVar_72709 << 3) | 6;
	cppVar_72710 = (cppVar_72710 & cppMask_un_5_);
	BIT_VEC cppVar_72711 = (0 << 5) | cppVar_72710;
	cppVar_72711 = (cppVar_72711 & cppMask_un_8_);
	bool cppVar_72713 = (cppVar_72711 == 160);
	if (cppVar_72713) {
	cppVar_72708 = P2;
	} else {
	BIT_VEC cppVar_72714;
	BIT_VEC cppVar_72715 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72716 = (cppVar_72715 << 3) | 6;
	cppVar_72716 = (cppVar_72716 & cppMask_un_5_);
	BIT_VEC cppVar_72717 = (0 << 5) | cppVar_72716;
	cppVar_72717 = (cppVar_72717 & cppMask_un_8_);
	bool cppVar_72719 = (cppVar_72717 == 168);
	if (cppVar_72719) {
	cppVar_72714 = IE;
	} else {
	BIT_VEC cppVar_72720;
	BIT_VEC cppVar_72721 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72722 = (cppVar_72721 << 3) | 6;
	cppVar_72722 = (cppVar_72722 & cppMask_un_5_);
	BIT_VEC cppVar_72723 = (0 << 5) | cppVar_72722;
	cppVar_72723 = (cppVar_72723 & cppMask_un_8_);
	bool cppVar_72725 = (cppVar_72723 == 176);
	if (cppVar_72725) {
	cppVar_72720 = P3;
	} else {
	BIT_VEC cppVar_72726;
	BIT_VEC cppVar_72727 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72728 = (cppVar_72727 << 3) | 6;
	cppVar_72728 = (cppVar_72728 & cppMask_un_5_);
	BIT_VEC cppVar_72729 = (0 << 5) | cppVar_72728;
	cppVar_72729 = (cppVar_72729 & cppMask_un_8_);
	bool cppVar_72731 = (cppVar_72729 == 184);
	if (cppVar_72731) {
	cppVar_72726 = IP;
	} else {
	BIT_VEC cppVar_72732;
	BIT_VEC cppVar_72733 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72734 = (cppVar_72733 << 3) | 6;
	cppVar_72734 = (cppVar_72734 & cppMask_un_5_);
	BIT_VEC cppVar_72735 = (0 << 5) | cppVar_72734;
	cppVar_72735 = (cppVar_72735 & cppMask_un_8_);
	bool cppVar_72737 = (cppVar_72735 == 208);
	if (cppVar_72737) {
	cppVar_72732 = PSW;
	} else {
	BIT_VEC cppVar_72738;
	BIT_VEC cppVar_72739 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72740 = (cppVar_72739 << 3) | 6;
	cppVar_72740 = (cppVar_72740 & cppMask_un_5_);
	BIT_VEC cppVar_72741 = (0 << 5) | cppVar_72740;
	cppVar_72741 = (cppVar_72741 & cppMask_un_8_);
	bool cppVar_72743 = (cppVar_72741 == 224);
	if (cppVar_72743) {
	cppVar_72738 = ACC;
	} else {
	BIT_VEC cppVar_72744;
	BIT_VEC cppVar_72745 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72746 = (cppVar_72745 << 3) | 6;
	cppVar_72746 = (cppVar_72746 & cppMask_un_5_);
	BIT_VEC cppVar_72747 = (0 << 5) | cppVar_72746;
	cppVar_72747 = (cppVar_72747 & cppMask_un_8_);
	bool cppVar_72749 = (cppVar_72747 == 240);
	if (cppVar_72749) {
	cppVar_72744 = B;
	} else {
	cppVar_72744 = 0;
	}
	cppVar_72738 = cppVar_72744;
	}
	cppVar_72732 = cppVar_72738;
	}
	cppVar_72726 = cppVar_72732;
	}
	cppVar_72720 = cppVar_72726;
	}
	cppVar_72714 = cppVar_72720;
	}
	cppVar_72708 = cppVar_72714;
	}
	cppVar_72702 = cppVar_72708;
	}
	cppVar_72696 = cppVar_72702;
	}
	cppVar_72690 = cppVar_72696;
	}
	cppVar_72684 = cppVar_72690;
	}
	cppVar_72678 = cppVar_72684;
	}
	cppVar_72672 = cppVar_72678;
	}
	cppVar_72666 = cppVar_72672;
	}
	cppVar_72660 = cppVar_72666;
	}
	cppVar_72654 = cppVar_72660;
	}
	cppVar_72648 = cppVar_72654;
	}
	cppVar_72642 = cppVar_72648;
	}
	cppVar_72636 = cppVar_72642;
	}
	cppVar_72630 = cppVar_72636;
	}
	cppVar_72624 = cppVar_72630;
	}
	cppVar_72611 = cppVar_72624;
	}
	cppVar_72605 = cppVar_72611;
	} else {
	cppVar_72605 = TH0;
	}
	cppVar_72601 = cppVar_72605;
	} else {
	BIT_VEC cppVar_72751;
	BIT_VEC cppVar_72752 = ROM.rd(PC);
	bool cppVar_72754 = (cppVar_72752 == 141);
	if (cppVar_72754) {
	BIT_VEC cppVar_72755;
	BIT_VEC cppVar_72757 = PC + 1;
	cppVar_72757 = (cppVar_72757 & cppMask_un_16_);
	BIT_VEC cppVar_72758 = ROM.rd(cppVar_72757);
	bool cppVar_72760 = (cppVar_72758 == 140);
	if (cppVar_72760) {
	BIT_VEC cppVar_72761;
	BIT_VEC cppVar_72763 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72765 = (cppVar_72763 << 3) | 5;
	cppVar_72765 = (cppVar_72765 & cppMask_un_5_);
	BIT_VEC cppVar_72766 = (0 << 5) | cppVar_72765;
	cppVar_72766 = (cppVar_72766 & cppMask_un_8_);
	BIT_VEC cppVar_72767 = (cppVar_72766 >> 7) & cppMask_un_1_;
	bool cppVar_72769 = (cppVar_72767 == 0);
	if (cppVar_72769) {
	BIT_VEC cppVar_72770 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72771 = (cppVar_72770 << 3) | 5;
	cppVar_72771 = (cppVar_72771 & cppMask_un_5_);
	BIT_VEC cppVar_72772 = (0 << 5) | cppVar_72771;
	cppVar_72772 = (cppVar_72772 & cppMask_un_8_);
	BIT_VEC cppVar_72773 = IRAM.rd(cppVar_72772);
	cppVar_72761 = cppVar_72773;
	} else {
	BIT_VEC cppVar_72774;
	BIT_VEC cppVar_72775 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72776 = (cppVar_72775 << 3) | 5;
	cppVar_72776 = (cppVar_72776 & cppMask_un_5_);
	BIT_VEC cppVar_72777 = (0 << 5) | cppVar_72776;
	cppVar_72777 = (cppVar_72777 & cppMask_un_8_);
	bool cppVar_72779 = (cppVar_72777 == 128);
	if (cppVar_72779) {
	cppVar_72774 = P0;
	} else {
	BIT_VEC cppVar_72780;
	BIT_VEC cppVar_72781 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72782 = (cppVar_72781 << 3) | 5;
	cppVar_72782 = (cppVar_72782 & cppMask_un_5_);
	BIT_VEC cppVar_72783 = (0 << 5) | cppVar_72782;
	cppVar_72783 = (cppVar_72783 & cppMask_un_8_);
	bool cppVar_72785 = (cppVar_72783 == 129);
	if (cppVar_72785) {
	cppVar_72780 = SP;
	} else {
	BIT_VEC cppVar_72786;
	BIT_VEC cppVar_72787 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72788 = (cppVar_72787 << 3) | 5;
	cppVar_72788 = (cppVar_72788 & cppMask_un_5_);
	BIT_VEC cppVar_72789 = (0 << 5) | cppVar_72788;
	cppVar_72789 = (cppVar_72789 & cppMask_un_8_);
	bool cppVar_72791 = (cppVar_72789 == 130);
	if (cppVar_72791) {
	cppVar_72786 = DPL;
	} else {
	BIT_VEC cppVar_72792;
	BIT_VEC cppVar_72793 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72794 = (cppVar_72793 << 3) | 5;
	cppVar_72794 = (cppVar_72794 & cppMask_un_5_);
	BIT_VEC cppVar_72795 = (0 << 5) | cppVar_72794;
	cppVar_72795 = (cppVar_72795 & cppMask_un_8_);
	bool cppVar_72797 = (cppVar_72795 == 131);
	if (cppVar_72797) {
	cppVar_72792 = DPH;
	} else {
	BIT_VEC cppVar_72798;
	BIT_VEC cppVar_72799 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72800 = (cppVar_72799 << 3) | 5;
	cppVar_72800 = (cppVar_72800 & cppMask_un_5_);
	BIT_VEC cppVar_72801 = (0 << 5) | cppVar_72800;
	cppVar_72801 = (cppVar_72801 & cppMask_un_8_);
	bool cppVar_72803 = (cppVar_72801 == 135);
	if (cppVar_72803) {
	cppVar_72798 = PCON;
	} else {
	BIT_VEC cppVar_72804;
	BIT_VEC cppVar_72805 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72806 = (cppVar_72805 << 3) | 5;
	cppVar_72806 = (cppVar_72806 & cppMask_un_5_);
	BIT_VEC cppVar_72807 = (0 << 5) | cppVar_72806;
	cppVar_72807 = (cppVar_72807 & cppMask_un_8_);
	bool cppVar_72809 = (cppVar_72807 == 136);
	if (cppVar_72809) {
	cppVar_72804 = TCON;
	} else {
	BIT_VEC cppVar_72810;
	BIT_VEC cppVar_72811 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72812 = (cppVar_72811 << 3) | 5;
	cppVar_72812 = (cppVar_72812 & cppMask_un_5_);
	BIT_VEC cppVar_72813 = (0 << 5) | cppVar_72812;
	cppVar_72813 = (cppVar_72813 & cppMask_un_8_);
	bool cppVar_72815 = (cppVar_72813 == 137);
	if (cppVar_72815) {
	cppVar_72810 = TMOD;
	} else {
	BIT_VEC cppVar_72816;
	BIT_VEC cppVar_72817 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72818 = (cppVar_72817 << 3) | 5;
	cppVar_72818 = (cppVar_72818 & cppMask_un_5_);
	BIT_VEC cppVar_72819 = (0 << 5) | cppVar_72818;
	cppVar_72819 = (cppVar_72819 & cppMask_un_8_);
	bool cppVar_72821 = (cppVar_72819 == 138);
	if (cppVar_72821) {
	cppVar_72816 = TL0;
	} else {
	BIT_VEC cppVar_72822;
	BIT_VEC cppVar_72823 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72824 = (cppVar_72823 << 3) | 5;
	cppVar_72824 = (cppVar_72824 & cppMask_un_5_);
	BIT_VEC cppVar_72825 = (0 << 5) | cppVar_72824;
	cppVar_72825 = (cppVar_72825 & cppMask_un_8_);
	bool cppVar_72827 = (cppVar_72825 == 140);
	if (cppVar_72827) {
	cppVar_72822 = TH0;
	} else {
	BIT_VEC cppVar_72828;
	BIT_VEC cppVar_72829 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72830 = (cppVar_72829 << 3) | 5;
	cppVar_72830 = (cppVar_72830 & cppMask_un_5_);
	BIT_VEC cppVar_72831 = (0 << 5) | cppVar_72830;
	cppVar_72831 = (cppVar_72831 & cppMask_un_8_);
	bool cppVar_72833 = (cppVar_72831 == 139);
	if (cppVar_72833) {
	cppVar_72828 = TL1;
	} else {
	BIT_VEC cppVar_72834;
	BIT_VEC cppVar_72835 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72836 = (cppVar_72835 << 3) | 5;
	cppVar_72836 = (cppVar_72836 & cppMask_un_5_);
	BIT_VEC cppVar_72837 = (0 << 5) | cppVar_72836;
	cppVar_72837 = (cppVar_72837 & cppMask_un_8_);
	bool cppVar_72839 = (cppVar_72837 == 141);
	if (cppVar_72839) {
	cppVar_72834 = TH1;
	} else {
	BIT_VEC cppVar_72840;
	BIT_VEC cppVar_72841 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72842 = (cppVar_72841 << 3) | 5;
	cppVar_72842 = (cppVar_72842 & cppMask_un_5_);
	BIT_VEC cppVar_72843 = (0 << 5) | cppVar_72842;
	cppVar_72843 = (cppVar_72843 & cppMask_un_8_);
	bool cppVar_72845 = (cppVar_72843 == 144);
	if (cppVar_72845) {
	cppVar_72840 = P1;
	} else {
	BIT_VEC cppVar_72846;
	BIT_VEC cppVar_72847 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72848 = (cppVar_72847 << 3) | 5;
	cppVar_72848 = (cppVar_72848 & cppMask_un_5_);
	BIT_VEC cppVar_72849 = (0 << 5) | cppVar_72848;
	cppVar_72849 = (cppVar_72849 & cppMask_un_8_);
	bool cppVar_72851 = (cppVar_72849 == 152);
	if (cppVar_72851) {
	cppVar_72846 = SCON;
	} else {
	BIT_VEC cppVar_72852;
	BIT_VEC cppVar_72853 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72854 = (cppVar_72853 << 3) | 5;
	cppVar_72854 = (cppVar_72854 & cppMask_un_5_);
	BIT_VEC cppVar_72855 = (0 << 5) | cppVar_72854;
	cppVar_72855 = (cppVar_72855 & cppMask_un_8_);
	bool cppVar_72857 = (cppVar_72855 == 153);
	if (cppVar_72857) {
	cppVar_72852 = SBUF;
	} else {
	BIT_VEC cppVar_72858;
	BIT_VEC cppVar_72859 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72860 = (cppVar_72859 << 3) | 5;
	cppVar_72860 = (cppVar_72860 & cppMask_un_5_);
	BIT_VEC cppVar_72861 = (0 << 5) | cppVar_72860;
	cppVar_72861 = (cppVar_72861 & cppMask_un_8_);
	bool cppVar_72863 = (cppVar_72861 == 160);
	if (cppVar_72863) {
	cppVar_72858 = P2;
	} else {
	BIT_VEC cppVar_72864;
	BIT_VEC cppVar_72865 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72866 = (cppVar_72865 << 3) | 5;
	cppVar_72866 = (cppVar_72866 & cppMask_un_5_);
	BIT_VEC cppVar_72867 = (0 << 5) | cppVar_72866;
	cppVar_72867 = (cppVar_72867 & cppMask_un_8_);
	bool cppVar_72869 = (cppVar_72867 == 168);
	if (cppVar_72869) {
	cppVar_72864 = IE;
	} else {
	BIT_VEC cppVar_72870;
	BIT_VEC cppVar_72871 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72872 = (cppVar_72871 << 3) | 5;
	cppVar_72872 = (cppVar_72872 & cppMask_un_5_);
	BIT_VEC cppVar_72873 = (0 << 5) | cppVar_72872;
	cppVar_72873 = (cppVar_72873 & cppMask_un_8_);
	bool cppVar_72875 = (cppVar_72873 == 176);
	if (cppVar_72875) {
	cppVar_72870 = P3;
	} else {
	BIT_VEC cppVar_72876;
	BIT_VEC cppVar_72877 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72878 = (cppVar_72877 << 3) | 5;
	cppVar_72878 = (cppVar_72878 & cppMask_un_5_);
	BIT_VEC cppVar_72879 = (0 << 5) | cppVar_72878;
	cppVar_72879 = (cppVar_72879 & cppMask_un_8_);
	bool cppVar_72881 = (cppVar_72879 == 184);
	if (cppVar_72881) {
	cppVar_72876 = IP;
	} else {
	BIT_VEC cppVar_72882;
	BIT_VEC cppVar_72883 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72884 = (cppVar_72883 << 3) | 5;
	cppVar_72884 = (cppVar_72884 & cppMask_un_5_);
	BIT_VEC cppVar_72885 = (0 << 5) | cppVar_72884;
	cppVar_72885 = (cppVar_72885 & cppMask_un_8_);
	bool cppVar_72887 = (cppVar_72885 == 208);
	if (cppVar_72887) {
	cppVar_72882 = PSW;
	} else {
	BIT_VEC cppVar_72888;
	BIT_VEC cppVar_72889 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72890 = (cppVar_72889 << 3) | 5;
	cppVar_72890 = (cppVar_72890 & cppMask_un_5_);
	BIT_VEC cppVar_72891 = (0 << 5) | cppVar_72890;
	cppVar_72891 = (cppVar_72891 & cppMask_un_8_);
	bool cppVar_72893 = (cppVar_72891 == 224);
	if (cppVar_72893) {
	cppVar_72888 = ACC;
	} else {
	BIT_VEC cppVar_72894;
	BIT_VEC cppVar_72895 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72896 = (cppVar_72895 << 3) | 5;
	cppVar_72896 = (cppVar_72896 & cppMask_un_5_);
	BIT_VEC cppVar_72897 = (0 << 5) | cppVar_72896;
	cppVar_72897 = (cppVar_72897 & cppMask_un_8_);
	bool cppVar_72899 = (cppVar_72897 == 240);
	if (cppVar_72899) {
	cppVar_72894 = B;
	} else {
	cppVar_72894 = 0;
	}
	cppVar_72888 = cppVar_72894;
	}
	cppVar_72882 = cppVar_72888;
	}
	cppVar_72876 = cppVar_72882;
	}
	cppVar_72870 = cppVar_72876;
	}
	cppVar_72864 = cppVar_72870;
	}
	cppVar_72858 = cppVar_72864;
	}
	cppVar_72852 = cppVar_72858;
	}
	cppVar_72846 = cppVar_72852;
	}
	cppVar_72840 = cppVar_72846;
	}
	cppVar_72834 = cppVar_72840;
	}
	cppVar_72828 = cppVar_72834;
	}
	cppVar_72822 = cppVar_72828;
	}
	cppVar_72816 = cppVar_72822;
	}
	cppVar_72810 = cppVar_72816;
	}
	cppVar_72804 = cppVar_72810;
	}
	cppVar_72798 = cppVar_72804;
	}
	cppVar_72792 = cppVar_72798;
	}
	cppVar_72786 = cppVar_72792;
	}
	cppVar_72780 = cppVar_72786;
	}
	cppVar_72774 = cppVar_72780;
	}
	cppVar_72761 = cppVar_72774;
	}
	cppVar_72755 = cppVar_72761;
	} else {
	cppVar_72755 = TH0;
	}
	cppVar_72751 = cppVar_72755;
	} else {
	BIT_VEC cppVar_72901;
	BIT_VEC cppVar_72902 = ROM.rd(PC);
	bool cppVar_72904 = (cppVar_72902 == 140);
	if (cppVar_72904) {
	BIT_VEC cppVar_72905;
	BIT_VEC cppVar_72907 = PC + 1;
	cppVar_72907 = (cppVar_72907 & cppMask_un_16_);
	BIT_VEC cppVar_72908 = ROM.rd(cppVar_72907);
	bool cppVar_72910 = (cppVar_72908 == 140);
	if (cppVar_72910) {
	BIT_VEC cppVar_72911;
	BIT_VEC cppVar_72913 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72915 = (cppVar_72913 << 3) | 4;
	cppVar_72915 = (cppVar_72915 & cppMask_un_5_);
	BIT_VEC cppVar_72916 = (0 << 5) | cppVar_72915;
	cppVar_72916 = (cppVar_72916 & cppMask_un_8_);
	BIT_VEC cppVar_72917 = (cppVar_72916 >> 7) & cppMask_un_1_;
	bool cppVar_72919 = (cppVar_72917 == 0);
	if (cppVar_72919) {
	BIT_VEC cppVar_72920 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72921 = (cppVar_72920 << 3) | 4;
	cppVar_72921 = (cppVar_72921 & cppMask_un_5_);
	BIT_VEC cppVar_72922 = (0 << 5) | cppVar_72921;
	cppVar_72922 = (cppVar_72922 & cppMask_un_8_);
	BIT_VEC cppVar_72923 = IRAM.rd(cppVar_72922);
	cppVar_72911 = cppVar_72923;
	} else {
	BIT_VEC cppVar_72924;
	BIT_VEC cppVar_72925 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72926 = (cppVar_72925 << 3) | 4;
	cppVar_72926 = (cppVar_72926 & cppMask_un_5_);
	BIT_VEC cppVar_72927 = (0 << 5) | cppVar_72926;
	cppVar_72927 = (cppVar_72927 & cppMask_un_8_);
	bool cppVar_72929 = (cppVar_72927 == 128);
	if (cppVar_72929) {
	cppVar_72924 = P0;
	} else {
	BIT_VEC cppVar_72930;
	BIT_VEC cppVar_72931 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72932 = (cppVar_72931 << 3) | 4;
	cppVar_72932 = (cppVar_72932 & cppMask_un_5_);
	BIT_VEC cppVar_72933 = (0 << 5) | cppVar_72932;
	cppVar_72933 = (cppVar_72933 & cppMask_un_8_);
	bool cppVar_72935 = (cppVar_72933 == 129);
	if (cppVar_72935) {
	cppVar_72930 = SP;
	} else {
	BIT_VEC cppVar_72936;
	BIT_VEC cppVar_72937 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72938 = (cppVar_72937 << 3) | 4;
	cppVar_72938 = (cppVar_72938 & cppMask_un_5_);
	BIT_VEC cppVar_72939 = (0 << 5) | cppVar_72938;
	cppVar_72939 = (cppVar_72939 & cppMask_un_8_);
	bool cppVar_72941 = (cppVar_72939 == 130);
	if (cppVar_72941) {
	cppVar_72936 = DPL;
	} else {
	BIT_VEC cppVar_72942;
	BIT_VEC cppVar_72943 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72944 = (cppVar_72943 << 3) | 4;
	cppVar_72944 = (cppVar_72944 & cppMask_un_5_);
	BIT_VEC cppVar_72945 = (0 << 5) | cppVar_72944;
	cppVar_72945 = (cppVar_72945 & cppMask_un_8_);
	bool cppVar_72947 = (cppVar_72945 == 131);
	if (cppVar_72947) {
	cppVar_72942 = DPH;
	} else {
	BIT_VEC cppVar_72948;
	BIT_VEC cppVar_72949 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72950 = (cppVar_72949 << 3) | 4;
	cppVar_72950 = (cppVar_72950 & cppMask_un_5_);
	BIT_VEC cppVar_72951 = (0 << 5) | cppVar_72950;
	cppVar_72951 = (cppVar_72951 & cppMask_un_8_);
	bool cppVar_72953 = (cppVar_72951 == 135);
	if (cppVar_72953) {
	cppVar_72948 = PCON;
	} else {
	BIT_VEC cppVar_72954;
	BIT_VEC cppVar_72955 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72956 = (cppVar_72955 << 3) | 4;
	cppVar_72956 = (cppVar_72956 & cppMask_un_5_);
	BIT_VEC cppVar_72957 = (0 << 5) | cppVar_72956;
	cppVar_72957 = (cppVar_72957 & cppMask_un_8_);
	bool cppVar_72959 = (cppVar_72957 == 136);
	if (cppVar_72959) {
	cppVar_72954 = TCON;
	} else {
	BIT_VEC cppVar_72960;
	BIT_VEC cppVar_72961 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72962 = (cppVar_72961 << 3) | 4;
	cppVar_72962 = (cppVar_72962 & cppMask_un_5_);
	BIT_VEC cppVar_72963 = (0 << 5) | cppVar_72962;
	cppVar_72963 = (cppVar_72963 & cppMask_un_8_);
	bool cppVar_72965 = (cppVar_72963 == 137);
	if (cppVar_72965) {
	cppVar_72960 = TMOD;
	} else {
	BIT_VEC cppVar_72966;
	BIT_VEC cppVar_72967 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72968 = (cppVar_72967 << 3) | 4;
	cppVar_72968 = (cppVar_72968 & cppMask_un_5_);
	BIT_VEC cppVar_72969 = (0 << 5) | cppVar_72968;
	cppVar_72969 = (cppVar_72969 & cppMask_un_8_);
	bool cppVar_72971 = (cppVar_72969 == 138);
	if (cppVar_72971) {
	cppVar_72966 = TL0;
	} else {
	BIT_VEC cppVar_72972;
	BIT_VEC cppVar_72973 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72974 = (cppVar_72973 << 3) | 4;
	cppVar_72974 = (cppVar_72974 & cppMask_un_5_);
	BIT_VEC cppVar_72975 = (0 << 5) | cppVar_72974;
	cppVar_72975 = (cppVar_72975 & cppMask_un_8_);
	bool cppVar_72977 = (cppVar_72975 == 140);
	if (cppVar_72977) {
	cppVar_72972 = TH0;
	} else {
	BIT_VEC cppVar_72978;
	BIT_VEC cppVar_72979 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72980 = (cppVar_72979 << 3) | 4;
	cppVar_72980 = (cppVar_72980 & cppMask_un_5_);
	BIT_VEC cppVar_72981 = (0 << 5) | cppVar_72980;
	cppVar_72981 = (cppVar_72981 & cppMask_un_8_);
	bool cppVar_72983 = (cppVar_72981 == 139);
	if (cppVar_72983) {
	cppVar_72978 = TL1;
	} else {
	BIT_VEC cppVar_72984;
	BIT_VEC cppVar_72985 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72986 = (cppVar_72985 << 3) | 4;
	cppVar_72986 = (cppVar_72986 & cppMask_un_5_);
	BIT_VEC cppVar_72987 = (0 << 5) | cppVar_72986;
	cppVar_72987 = (cppVar_72987 & cppMask_un_8_);
	bool cppVar_72989 = (cppVar_72987 == 141);
	if (cppVar_72989) {
	cppVar_72984 = TH1;
	} else {
	BIT_VEC cppVar_72990;
	BIT_VEC cppVar_72991 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72992 = (cppVar_72991 << 3) | 4;
	cppVar_72992 = (cppVar_72992 & cppMask_un_5_);
	BIT_VEC cppVar_72993 = (0 << 5) | cppVar_72992;
	cppVar_72993 = (cppVar_72993 & cppMask_un_8_);
	bool cppVar_72995 = (cppVar_72993 == 144);
	if (cppVar_72995) {
	cppVar_72990 = P1;
	} else {
	BIT_VEC cppVar_72996;
	BIT_VEC cppVar_72997 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_72998 = (cppVar_72997 << 3) | 4;
	cppVar_72998 = (cppVar_72998 & cppMask_un_5_);
	BIT_VEC cppVar_72999 = (0 << 5) | cppVar_72998;
	cppVar_72999 = (cppVar_72999 & cppMask_un_8_);
	bool cppVar_73001 = (cppVar_72999 == 152);
	if (cppVar_73001) {
	cppVar_72996 = SCON;
	} else {
	BIT_VEC cppVar_73002;
	BIT_VEC cppVar_73003 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73004 = (cppVar_73003 << 3) | 4;
	cppVar_73004 = (cppVar_73004 & cppMask_un_5_);
	BIT_VEC cppVar_73005 = (0 << 5) | cppVar_73004;
	cppVar_73005 = (cppVar_73005 & cppMask_un_8_);
	bool cppVar_73007 = (cppVar_73005 == 153);
	if (cppVar_73007) {
	cppVar_73002 = SBUF;
	} else {
	BIT_VEC cppVar_73008;
	BIT_VEC cppVar_73009 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73010 = (cppVar_73009 << 3) | 4;
	cppVar_73010 = (cppVar_73010 & cppMask_un_5_);
	BIT_VEC cppVar_73011 = (0 << 5) | cppVar_73010;
	cppVar_73011 = (cppVar_73011 & cppMask_un_8_);
	bool cppVar_73013 = (cppVar_73011 == 160);
	if (cppVar_73013) {
	cppVar_73008 = P2;
	} else {
	BIT_VEC cppVar_73014;
	BIT_VEC cppVar_73015 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73016 = (cppVar_73015 << 3) | 4;
	cppVar_73016 = (cppVar_73016 & cppMask_un_5_);
	BIT_VEC cppVar_73017 = (0 << 5) | cppVar_73016;
	cppVar_73017 = (cppVar_73017 & cppMask_un_8_);
	bool cppVar_73019 = (cppVar_73017 == 168);
	if (cppVar_73019) {
	cppVar_73014 = IE;
	} else {
	BIT_VEC cppVar_73020;
	BIT_VEC cppVar_73021 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73022 = (cppVar_73021 << 3) | 4;
	cppVar_73022 = (cppVar_73022 & cppMask_un_5_);
	BIT_VEC cppVar_73023 = (0 << 5) | cppVar_73022;
	cppVar_73023 = (cppVar_73023 & cppMask_un_8_);
	bool cppVar_73025 = (cppVar_73023 == 176);
	if (cppVar_73025) {
	cppVar_73020 = P3;
	} else {
	BIT_VEC cppVar_73026;
	BIT_VEC cppVar_73027 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73028 = (cppVar_73027 << 3) | 4;
	cppVar_73028 = (cppVar_73028 & cppMask_un_5_);
	BIT_VEC cppVar_73029 = (0 << 5) | cppVar_73028;
	cppVar_73029 = (cppVar_73029 & cppMask_un_8_);
	bool cppVar_73031 = (cppVar_73029 == 184);
	if (cppVar_73031) {
	cppVar_73026 = IP;
	} else {
	BIT_VEC cppVar_73032;
	BIT_VEC cppVar_73033 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73034 = (cppVar_73033 << 3) | 4;
	cppVar_73034 = (cppVar_73034 & cppMask_un_5_);
	BIT_VEC cppVar_73035 = (0 << 5) | cppVar_73034;
	cppVar_73035 = (cppVar_73035 & cppMask_un_8_);
	bool cppVar_73037 = (cppVar_73035 == 208);
	if (cppVar_73037) {
	cppVar_73032 = PSW;
	} else {
	BIT_VEC cppVar_73038;
	BIT_VEC cppVar_73039 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73040 = (cppVar_73039 << 3) | 4;
	cppVar_73040 = (cppVar_73040 & cppMask_un_5_);
	BIT_VEC cppVar_73041 = (0 << 5) | cppVar_73040;
	cppVar_73041 = (cppVar_73041 & cppMask_un_8_);
	bool cppVar_73043 = (cppVar_73041 == 224);
	if (cppVar_73043) {
	cppVar_73038 = ACC;
	} else {
	BIT_VEC cppVar_73044;
	BIT_VEC cppVar_73045 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73046 = (cppVar_73045 << 3) | 4;
	cppVar_73046 = (cppVar_73046 & cppMask_un_5_);
	BIT_VEC cppVar_73047 = (0 << 5) | cppVar_73046;
	cppVar_73047 = (cppVar_73047 & cppMask_un_8_);
	bool cppVar_73049 = (cppVar_73047 == 240);
	if (cppVar_73049) {
	cppVar_73044 = B;
	} else {
	cppVar_73044 = 0;
	}
	cppVar_73038 = cppVar_73044;
	}
	cppVar_73032 = cppVar_73038;
	}
	cppVar_73026 = cppVar_73032;
	}
	cppVar_73020 = cppVar_73026;
	}
	cppVar_73014 = cppVar_73020;
	}
	cppVar_73008 = cppVar_73014;
	}
	cppVar_73002 = cppVar_73008;
	}
	cppVar_72996 = cppVar_73002;
	}
	cppVar_72990 = cppVar_72996;
	}
	cppVar_72984 = cppVar_72990;
	}
	cppVar_72978 = cppVar_72984;
	}
	cppVar_72972 = cppVar_72978;
	}
	cppVar_72966 = cppVar_72972;
	}
	cppVar_72960 = cppVar_72966;
	}
	cppVar_72954 = cppVar_72960;
	}
	cppVar_72948 = cppVar_72954;
	}
	cppVar_72942 = cppVar_72948;
	}
	cppVar_72936 = cppVar_72942;
	}
	cppVar_72930 = cppVar_72936;
	}
	cppVar_72924 = cppVar_72930;
	}
	cppVar_72911 = cppVar_72924;
	}
	cppVar_72905 = cppVar_72911;
	} else {
	cppVar_72905 = TH0;
	}
	cppVar_72901 = cppVar_72905;
	} else {
	BIT_VEC cppVar_73051;
	BIT_VEC cppVar_73052 = ROM.rd(PC);
	bool cppVar_73054 = (cppVar_73052 == 139);
	if (cppVar_73054) {
	BIT_VEC cppVar_73055;
	BIT_VEC cppVar_73057 = PC + 1;
	cppVar_73057 = (cppVar_73057 & cppMask_un_16_);
	BIT_VEC cppVar_73058 = ROM.rd(cppVar_73057);
	bool cppVar_73060 = (cppVar_73058 == 140);
	if (cppVar_73060) {
	BIT_VEC cppVar_73061;
	BIT_VEC cppVar_73063 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73065 = (cppVar_73063 << 3) | 3;
	cppVar_73065 = (cppVar_73065 & cppMask_un_5_);
	BIT_VEC cppVar_73066 = (0 << 5) | cppVar_73065;
	cppVar_73066 = (cppVar_73066 & cppMask_un_8_);
	BIT_VEC cppVar_73067 = (cppVar_73066 >> 7) & cppMask_un_1_;
	bool cppVar_73069 = (cppVar_73067 == 0);
	if (cppVar_73069) {
	BIT_VEC cppVar_73070 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73071 = (cppVar_73070 << 3) | 3;
	cppVar_73071 = (cppVar_73071 & cppMask_un_5_);
	BIT_VEC cppVar_73072 = (0 << 5) | cppVar_73071;
	cppVar_73072 = (cppVar_73072 & cppMask_un_8_);
	BIT_VEC cppVar_73073 = IRAM.rd(cppVar_73072);
	cppVar_73061 = cppVar_73073;
	} else {
	BIT_VEC cppVar_73074;
	BIT_VEC cppVar_73075 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73076 = (cppVar_73075 << 3) | 3;
	cppVar_73076 = (cppVar_73076 & cppMask_un_5_);
	BIT_VEC cppVar_73077 = (0 << 5) | cppVar_73076;
	cppVar_73077 = (cppVar_73077 & cppMask_un_8_);
	bool cppVar_73079 = (cppVar_73077 == 128);
	if (cppVar_73079) {
	cppVar_73074 = P0;
	} else {
	BIT_VEC cppVar_73080;
	BIT_VEC cppVar_73081 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73082 = (cppVar_73081 << 3) | 3;
	cppVar_73082 = (cppVar_73082 & cppMask_un_5_);
	BIT_VEC cppVar_73083 = (0 << 5) | cppVar_73082;
	cppVar_73083 = (cppVar_73083 & cppMask_un_8_);
	bool cppVar_73085 = (cppVar_73083 == 129);
	if (cppVar_73085) {
	cppVar_73080 = SP;
	} else {
	BIT_VEC cppVar_73086;
	BIT_VEC cppVar_73087 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73088 = (cppVar_73087 << 3) | 3;
	cppVar_73088 = (cppVar_73088 & cppMask_un_5_);
	BIT_VEC cppVar_73089 = (0 << 5) | cppVar_73088;
	cppVar_73089 = (cppVar_73089 & cppMask_un_8_);
	bool cppVar_73091 = (cppVar_73089 == 130);
	if (cppVar_73091) {
	cppVar_73086 = DPL;
	} else {
	BIT_VEC cppVar_73092;
	BIT_VEC cppVar_73093 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73094 = (cppVar_73093 << 3) | 3;
	cppVar_73094 = (cppVar_73094 & cppMask_un_5_);
	BIT_VEC cppVar_73095 = (0 << 5) | cppVar_73094;
	cppVar_73095 = (cppVar_73095 & cppMask_un_8_);
	bool cppVar_73097 = (cppVar_73095 == 131);
	if (cppVar_73097) {
	cppVar_73092 = DPH;
	} else {
	BIT_VEC cppVar_73098;
	BIT_VEC cppVar_73099 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73100 = (cppVar_73099 << 3) | 3;
	cppVar_73100 = (cppVar_73100 & cppMask_un_5_);
	BIT_VEC cppVar_73101 = (0 << 5) | cppVar_73100;
	cppVar_73101 = (cppVar_73101 & cppMask_un_8_);
	bool cppVar_73103 = (cppVar_73101 == 135);
	if (cppVar_73103) {
	cppVar_73098 = PCON;
	} else {
	BIT_VEC cppVar_73104;
	BIT_VEC cppVar_73105 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73106 = (cppVar_73105 << 3) | 3;
	cppVar_73106 = (cppVar_73106 & cppMask_un_5_);
	BIT_VEC cppVar_73107 = (0 << 5) | cppVar_73106;
	cppVar_73107 = (cppVar_73107 & cppMask_un_8_);
	bool cppVar_73109 = (cppVar_73107 == 136);
	if (cppVar_73109) {
	cppVar_73104 = TCON;
	} else {
	BIT_VEC cppVar_73110;
	BIT_VEC cppVar_73111 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73112 = (cppVar_73111 << 3) | 3;
	cppVar_73112 = (cppVar_73112 & cppMask_un_5_);
	BIT_VEC cppVar_73113 = (0 << 5) | cppVar_73112;
	cppVar_73113 = (cppVar_73113 & cppMask_un_8_);
	bool cppVar_73115 = (cppVar_73113 == 137);
	if (cppVar_73115) {
	cppVar_73110 = TMOD;
	} else {
	BIT_VEC cppVar_73116;
	BIT_VEC cppVar_73117 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73118 = (cppVar_73117 << 3) | 3;
	cppVar_73118 = (cppVar_73118 & cppMask_un_5_);
	BIT_VEC cppVar_73119 = (0 << 5) | cppVar_73118;
	cppVar_73119 = (cppVar_73119 & cppMask_un_8_);
	bool cppVar_73121 = (cppVar_73119 == 138);
	if (cppVar_73121) {
	cppVar_73116 = TL0;
	} else {
	BIT_VEC cppVar_73122;
	BIT_VEC cppVar_73123 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73124 = (cppVar_73123 << 3) | 3;
	cppVar_73124 = (cppVar_73124 & cppMask_un_5_);
	BIT_VEC cppVar_73125 = (0 << 5) | cppVar_73124;
	cppVar_73125 = (cppVar_73125 & cppMask_un_8_);
	bool cppVar_73127 = (cppVar_73125 == 140);
	if (cppVar_73127) {
	cppVar_73122 = TH0;
	} else {
	BIT_VEC cppVar_73128;
	BIT_VEC cppVar_73129 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73130 = (cppVar_73129 << 3) | 3;
	cppVar_73130 = (cppVar_73130 & cppMask_un_5_);
	BIT_VEC cppVar_73131 = (0 << 5) | cppVar_73130;
	cppVar_73131 = (cppVar_73131 & cppMask_un_8_);
	bool cppVar_73133 = (cppVar_73131 == 139);
	if (cppVar_73133) {
	cppVar_73128 = TL1;
	} else {
	BIT_VEC cppVar_73134;
	BIT_VEC cppVar_73135 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73136 = (cppVar_73135 << 3) | 3;
	cppVar_73136 = (cppVar_73136 & cppMask_un_5_);
	BIT_VEC cppVar_73137 = (0 << 5) | cppVar_73136;
	cppVar_73137 = (cppVar_73137 & cppMask_un_8_);
	bool cppVar_73139 = (cppVar_73137 == 141);
	if (cppVar_73139) {
	cppVar_73134 = TH1;
	} else {
	BIT_VEC cppVar_73140;
	BIT_VEC cppVar_73141 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73142 = (cppVar_73141 << 3) | 3;
	cppVar_73142 = (cppVar_73142 & cppMask_un_5_);
	BIT_VEC cppVar_73143 = (0 << 5) | cppVar_73142;
	cppVar_73143 = (cppVar_73143 & cppMask_un_8_);
	bool cppVar_73145 = (cppVar_73143 == 144);
	if (cppVar_73145) {
	cppVar_73140 = P1;
	} else {
	BIT_VEC cppVar_73146;
	BIT_VEC cppVar_73147 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73148 = (cppVar_73147 << 3) | 3;
	cppVar_73148 = (cppVar_73148 & cppMask_un_5_);
	BIT_VEC cppVar_73149 = (0 << 5) | cppVar_73148;
	cppVar_73149 = (cppVar_73149 & cppMask_un_8_);
	bool cppVar_73151 = (cppVar_73149 == 152);
	if (cppVar_73151) {
	cppVar_73146 = SCON;
	} else {
	BIT_VEC cppVar_73152;
	BIT_VEC cppVar_73153 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73154 = (cppVar_73153 << 3) | 3;
	cppVar_73154 = (cppVar_73154 & cppMask_un_5_);
	BIT_VEC cppVar_73155 = (0 << 5) | cppVar_73154;
	cppVar_73155 = (cppVar_73155 & cppMask_un_8_);
	bool cppVar_73157 = (cppVar_73155 == 153);
	if (cppVar_73157) {
	cppVar_73152 = SBUF;
	} else {
	BIT_VEC cppVar_73158;
	BIT_VEC cppVar_73159 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73160 = (cppVar_73159 << 3) | 3;
	cppVar_73160 = (cppVar_73160 & cppMask_un_5_);
	BIT_VEC cppVar_73161 = (0 << 5) | cppVar_73160;
	cppVar_73161 = (cppVar_73161 & cppMask_un_8_);
	bool cppVar_73163 = (cppVar_73161 == 160);
	if (cppVar_73163) {
	cppVar_73158 = P2;
	} else {
	BIT_VEC cppVar_73164;
	BIT_VEC cppVar_73165 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73166 = (cppVar_73165 << 3) | 3;
	cppVar_73166 = (cppVar_73166 & cppMask_un_5_);
	BIT_VEC cppVar_73167 = (0 << 5) | cppVar_73166;
	cppVar_73167 = (cppVar_73167 & cppMask_un_8_);
	bool cppVar_73169 = (cppVar_73167 == 168);
	if (cppVar_73169) {
	cppVar_73164 = IE;
	} else {
	BIT_VEC cppVar_73170;
	BIT_VEC cppVar_73171 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73172 = (cppVar_73171 << 3) | 3;
	cppVar_73172 = (cppVar_73172 & cppMask_un_5_);
	BIT_VEC cppVar_73173 = (0 << 5) | cppVar_73172;
	cppVar_73173 = (cppVar_73173 & cppMask_un_8_);
	bool cppVar_73175 = (cppVar_73173 == 176);
	if (cppVar_73175) {
	cppVar_73170 = P3;
	} else {
	BIT_VEC cppVar_73176;
	BIT_VEC cppVar_73177 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73178 = (cppVar_73177 << 3) | 3;
	cppVar_73178 = (cppVar_73178 & cppMask_un_5_);
	BIT_VEC cppVar_73179 = (0 << 5) | cppVar_73178;
	cppVar_73179 = (cppVar_73179 & cppMask_un_8_);
	bool cppVar_73181 = (cppVar_73179 == 184);
	if (cppVar_73181) {
	cppVar_73176 = IP;
	} else {
	BIT_VEC cppVar_73182;
	BIT_VEC cppVar_73183 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73184 = (cppVar_73183 << 3) | 3;
	cppVar_73184 = (cppVar_73184 & cppMask_un_5_);
	BIT_VEC cppVar_73185 = (0 << 5) | cppVar_73184;
	cppVar_73185 = (cppVar_73185 & cppMask_un_8_);
	bool cppVar_73187 = (cppVar_73185 == 208);
	if (cppVar_73187) {
	cppVar_73182 = PSW;
	} else {
	BIT_VEC cppVar_73188;
	BIT_VEC cppVar_73189 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73190 = (cppVar_73189 << 3) | 3;
	cppVar_73190 = (cppVar_73190 & cppMask_un_5_);
	BIT_VEC cppVar_73191 = (0 << 5) | cppVar_73190;
	cppVar_73191 = (cppVar_73191 & cppMask_un_8_);
	bool cppVar_73193 = (cppVar_73191 == 224);
	if (cppVar_73193) {
	cppVar_73188 = ACC;
	} else {
	BIT_VEC cppVar_73194;
	BIT_VEC cppVar_73195 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73196 = (cppVar_73195 << 3) | 3;
	cppVar_73196 = (cppVar_73196 & cppMask_un_5_);
	BIT_VEC cppVar_73197 = (0 << 5) | cppVar_73196;
	cppVar_73197 = (cppVar_73197 & cppMask_un_8_);
	bool cppVar_73199 = (cppVar_73197 == 240);
	if (cppVar_73199) {
	cppVar_73194 = B;
	} else {
	cppVar_73194 = 0;
	}
	cppVar_73188 = cppVar_73194;
	}
	cppVar_73182 = cppVar_73188;
	}
	cppVar_73176 = cppVar_73182;
	}
	cppVar_73170 = cppVar_73176;
	}
	cppVar_73164 = cppVar_73170;
	}
	cppVar_73158 = cppVar_73164;
	}
	cppVar_73152 = cppVar_73158;
	}
	cppVar_73146 = cppVar_73152;
	}
	cppVar_73140 = cppVar_73146;
	}
	cppVar_73134 = cppVar_73140;
	}
	cppVar_73128 = cppVar_73134;
	}
	cppVar_73122 = cppVar_73128;
	}
	cppVar_73116 = cppVar_73122;
	}
	cppVar_73110 = cppVar_73116;
	}
	cppVar_73104 = cppVar_73110;
	}
	cppVar_73098 = cppVar_73104;
	}
	cppVar_73092 = cppVar_73098;
	}
	cppVar_73086 = cppVar_73092;
	}
	cppVar_73080 = cppVar_73086;
	}
	cppVar_73074 = cppVar_73080;
	}
	cppVar_73061 = cppVar_73074;
	}
	cppVar_73055 = cppVar_73061;
	} else {
	cppVar_73055 = TH0;
	}
	cppVar_73051 = cppVar_73055;
	} else {
	BIT_VEC cppVar_73201;
	BIT_VEC cppVar_73202 = ROM.rd(PC);
	bool cppVar_73204 = (cppVar_73202 == 138);
	if (cppVar_73204) {
	BIT_VEC cppVar_73205;
	BIT_VEC cppVar_73207 = PC + 1;
	cppVar_73207 = (cppVar_73207 & cppMask_un_16_);
	BIT_VEC cppVar_73208 = ROM.rd(cppVar_73207);
	bool cppVar_73210 = (cppVar_73208 == 140);
	if (cppVar_73210) {
	BIT_VEC cppVar_73211;
	BIT_VEC cppVar_73213 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73215 = (cppVar_73213 << 3) | 2;
	cppVar_73215 = (cppVar_73215 & cppMask_un_5_);
	BIT_VEC cppVar_73216 = (0 << 5) | cppVar_73215;
	cppVar_73216 = (cppVar_73216 & cppMask_un_8_);
	BIT_VEC cppVar_73217 = (cppVar_73216 >> 7) & cppMask_un_1_;
	bool cppVar_73219 = (cppVar_73217 == 0);
	if (cppVar_73219) {
	BIT_VEC cppVar_73220 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73221 = (cppVar_73220 << 3) | 2;
	cppVar_73221 = (cppVar_73221 & cppMask_un_5_);
	BIT_VEC cppVar_73222 = (0 << 5) | cppVar_73221;
	cppVar_73222 = (cppVar_73222 & cppMask_un_8_);
	BIT_VEC cppVar_73223 = IRAM.rd(cppVar_73222);
	cppVar_73211 = cppVar_73223;
	} else {
	BIT_VEC cppVar_73224;
	BIT_VEC cppVar_73225 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73226 = (cppVar_73225 << 3) | 2;
	cppVar_73226 = (cppVar_73226 & cppMask_un_5_);
	BIT_VEC cppVar_73227 = (0 << 5) | cppVar_73226;
	cppVar_73227 = (cppVar_73227 & cppMask_un_8_);
	bool cppVar_73229 = (cppVar_73227 == 128);
	if (cppVar_73229) {
	cppVar_73224 = P0;
	} else {
	BIT_VEC cppVar_73230;
	BIT_VEC cppVar_73231 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73232 = (cppVar_73231 << 3) | 2;
	cppVar_73232 = (cppVar_73232 & cppMask_un_5_);
	BIT_VEC cppVar_73233 = (0 << 5) | cppVar_73232;
	cppVar_73233 = (cppVar_73233 & cppMask_un_8_);
	bool cppVar_73235 = (cppVar_73233 == 129);
	if (cppVar_73235) {
	cppVar_73230 = SP;
	} else {
	BIT_VEC cppVar_73236;
	BIT_VEC cppVar_73237 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73238 = (cppVar_73237 << 3) | 2;
	cppVar_73238 = (cppVar_73238 & cppMask_un_5_);
	BIT_VEC cppVar_73239 = (0 << 5) | cppVar_73238;
	cppVar_73239 = (cppVar_73239 & cppMask_un_8_);
	bool cppVar_73241 = (cppVar_73239 == 130);
	if (cppVar_73241) {
	cppVar_73236 = DPL;
	} else {
	BIT_VEC cppVar_73242;
	BIT_VEC cppVar_73243 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73244 = (cppVar_73243 << 3) | 2;
	cppVar_73244 = (cppVar_73244 & cppMask_un_5_);
	BIT_VEC cppVar_73245 = (0 << 5) | cppVar_73244;
	cppVar_73245 = (cppVar_73245 & cppMask_un_8_);
	bool cppVar_73247 = (cppVar_73245 == 131);
	if (cppVar_73247) {
	cppVar_73242 = DPH;
	} else {
	BIT_VEC cppVar_73248;
	BIT_VEC cppVar_73249 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73250 = (cppVar_73249 << 3) | 2;
	cppVar_73250 = (cppVar_73250 & cppMask_un_5_);
	BIT_VEC cppVar_73251 = (0 << 5) | cppVar_73250;
	cppVar_73251 = (cppVar_73251 & cppMask_un_8_);
	bool cppVar_73253 = (cppVar_73251 == 135);
	if (cppVar_73253) {
	cppVar_73248 = PCON;
	} else {
	BIT_VEC cppVar_73254;
	BIT_VEC cppVar_73255 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73256 = (cppVar_73255 << 3) | 2;
	cppVar_73256 = (cppVar_73256 & cppMask_un_5_);
	BIT_VEC cppVar_73257 = (0 << 5) | cppVar_73256;
	cppVar_73257 = (cppVar_73257 & cppMask_un_8_);
	bool cppVar_73259 = (cppVar_73257 == 136);
	if (cppVar_73259) {
	cppVar_73254 = TCON;
	} else {
	BIT_VEC cppVar_73260;
	BIT_VEC cppVar_73261 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73262 = (cppVar_73261 << 3) | 2;
	cppVar_73262 = (cppVar_73262 & cppMask_un_5_);
	BIT_VEC cppVar_73263 = (0 << 5) | cppVar_73262;
	cppVar_73263 = (cppVar_73263 & cppMask_un_8_);
	bool cppVar_73265 = (cppVar_73263 == 137);
	if (cppVar_73265) {
	cppVar_73260 = TMOD;
	} else {
	BIT_VEC cppVar_73266;
	BIT_VEC cppVar_73267 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73268 = (cppVar_73267 << 3) | 2;
	cppVar_73268 = (cppVar_73268 & cppMask_un_5_);
	BIT_VEC cppVar_73269 = (0 << 5) | cppVar_73268;
	cppVar_73269 = (cppVar_73269 & cppMask_un_8_);
	bool cppVar_73271 = (cppVar_73269 == 138);
	if (cppVar_73271) {
	cppVar_73266 = TL0;
	} else {
	BIT_VEC cppVar_73272;
	BIT_VEC cppVar_73273 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73274 = (cppVar_73273 << 3) | 2;
	cppVar_73274 = (cppVar_73274 & cppMask_un_5_);
	BIT_VEC cppVar_73275 = (0 << 5) | cppVar_73274;
	cppVar_73275 = (cppVar_73275 & cppMask_un_8_);
	bool cppVar_73277 = (cppVar_73275 == 140);
	if (cppVar_73277) {
	cppVar_73272 = TH0;
	} else {
	BIT_VEC cppVar_73278;
	BIT_VEC cppVar_73279 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73280 = (cppVar_73279 << 3) | 2;
	cppVar_73280 = (cppVar_73280 & cppMask_un_5_);
	BIT_VEC cppVar_73281 = (0 << 5) | cppVar_73280;
	cppVar_73281 = (cppVar_73281 & cppMask_un_8_);
	bool cppVar_73283 = (cppVar_73281 == 139);
	if (cppVar_73283) {
	cppVar_73278 = TL1;
	} else {
	BIT_VEC cppVar_73284;
	BIT_VEC cppVar_73285 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73286 = (cppVar_73285 << 3) | 2;
	cppVar_73286 = (cppVar_73286 & cppMask_un_5_);
	BIT_VEC cppVar_73287 = (0 << 5) | cppVar_73286;
	cppVar_73287 = (cppVar_73287 & cppMask_un_8_);
	bool cppVar_73289 = (cppVar_73287 == 141);
	if (cppVar_73289) {
	cppVar_73284 = TH1;
	} else {
	BIT_VEC cppVar_73290;
	BIT_VEC cppVar_73291 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73292 = (cppVar_73291 << 3) | 2;
	cppVar_73292 = (cppVar_73292 & cppMask_un_5_);
	BIT_VEC cppVar_73293 = (0 << 5) | cppVar_73292;
	cppVar_73293 = (cppVar_73293 & cppMask_un_8_);
	bool cppVar_73295 = (cppVar_73293 == 144);
	if (cppVar_73295) {
	cppVar_73290 = P1;
	} else {
	BIT_VEC cppVar_73296;
	BIT_VEC cppVar_73297 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73298 = (cppVar_73297 << 3) | 2;
	cppVar_73298 = (cppVar_73298 & cppMask_un_5_);
	BIT_VEC cppVar_73299 = (0 << 5) | cppVar_73298;
	cppVar_73299 = (cppVar_73299 & cppMask_un_8_);
	bool cppVar_73301 = (cppVar_73299 == 152);
	if (cppVar_73301) {
	cppVar_73296 = SCON;
	} else {
	BIT_VEC cppVar_73302;
	BIT_VEC cppVar_73303 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73304 = (cppVar_73303 << 3) | 2;
	cppVar_73304 = (cppVar_73304 & cppMask_un_5_);
	BIT_VEC cppVar_73305 = (0 << 5) | cppVar_73304;
	cppVar_73305 = (cppVar_73305 & cppMask_un_8_);
	bool cppVar_73307 = (cppVar_73305 == 153);
	if (cppVar_73307) {
	cppVar_73302 = SBUF;
	} else {
	BIT_VEC cppVar_73308;
	BIT_VEC cppVar_73309 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73310 = (cppVar_73309 << 3) | 2;
	cppVar_73310 = (cppVar_73310 & cppMask_un_5_);
	BIT_VEC cppVar_73311 = (0 << 5) | cppVar_73310;
	cppVar_73311 = (cppVar_73311 & cppMask_un_8_);
	bool cppVar_73313 = (cppVar_73311 == 160);
	if (cppVar_73313) {
	cppVar_73308 = P2;
	} else {
	BIT_VEC cppVar_73314;
	BIT_VEC cppVar_73315 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73316 = (cppVar_73315 << 3) | 2;
	cppVar_73316 = (cppVar_73316 & cppMask_un_5_);
	BIT_VEC cppVar_73317 = (0 << 5) | cppVar_73316;
	cppVar_73317 = (cppVar_73317 & cppMask_un_8_);
	bool cppVar_73319 = (cppVar_73317 == 168);
	if (cppVar_73319) {
	cppVar_73314 = IE;
	} else {
	BIT_VEC cppVar_73320;
	BIT_VEC cppVar_73321 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73322 = (cppVar_73321 << 3) | 2;
	cppVar_73322 = (cppVar_73322 & cppMask_un_5_);
	BIT_VEC cppVar_73323 = (0 << 5) | cppVar_73322;
	cppVar_73323 = (cppVar_73323 & cppMask_un_8_);
	bool cppVar_73325 = (cppVar_73323 == 176);
	if (cppVar_73325) {
	cppVar_73320 = P3;
	} else {
	BIT_VEC cppVar_73326;
	BIT_VEC cppVar_73327 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73328 = (cppVar_73327 << 3) | 2;
	cppVar_73328 = (cppVar_73328 & cppMask_un_5_);
	BIT_VEC cppVar_73329 = (0 << 5) | cppVar_73328;
	cppVar_73329 = (cppVar_73329 & cppMask_un_8_);
	bool cppVar_73331 = (cppVar_73329 == 184);
	if (cppVar_73331) {
	cppVar_73326 = IP;
	} else {
	BIT_VEC cppVar_73332;
	BIT_VEC cppVar_73333 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73334 = (cppVar_73333 << 3) | 2;
	cppVar_73334 = (cppVar_73334 & cppMask_un_5_);
	BIT_VEC cppVar_73335 = (0 << 5) | cppVar_73334;
	cppVar_73335 = (cppVar_73335 & cppMask_un_8_);
	bool cppVar_73337 = (cppVar_73335 == 208);
	if (cppVar_73337) {
	cppVar_73332 = PSW;
	} else {
	BIT_VEC cppVar_73338;
	BIT_VEC cppVar_73339 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73340 = (cppVar_73339 << 3) | 2;
	cppVar_73340 = (cppVar_73340 & cppMask_un_5_);
	BIT_VEC cppVar_73341 = (0 << 5) | cppVar_73340;
	cppVar_73341 = (cppVar_73341 & cppMask_un_8_);
	bool cppVar_73343 = (cppVar_73341 == 224);
	if (cppVar_73343) {
	cppVar_73338 = ACC;
	} else {
	BIT_VEC cppVar_73344;
	BIT_VEC cppVar_73345 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73346 = (cppVar_73345 << 3) | 2;
	cppVar_73346 = (cppVar_73346 & cppMask_un_5_);
	BIT_VEC cppVar_73347 = (0 << 5) | cppVar_73346;
	cppVar_73347 = (cppVar_73347 & cppMask_un_8_);
	bool cppVar_73349 = (cppVar_73347 == 240);
	if (cppVar_73349) {
	cppVar_73344 = B;
	} else {
	cppVar_73344 = 0;
	}
	cppVar_73338 = cppVar_73344;
	}
	cppVar_73332 = cppVar_73338;
	}
	cppVar_73326 = cppVar_73332;
	}
	cppVar_73320 = cppVar_73326;
	}
	cppVar_73314 = cppVar_73320;
	}
	cppVar_73308 = cppVar_73314;
	}
	cppVar_73302 = cppVar_73308;
	}
	cppVar_73296 = cppVar_73302;
	}
	cppVar_73290 = cppVar_73296;
	}
	cppVar_73284 = cppVar_73290;
	}
	cppVar_73278 = cppVar_73284;
	}
	cppVar_73272 = cppVar_73278;
	}
	cppVar_73266 = cppVar_73272;
	}
	cppVar_73260 = cppVar_73266;
	}
	cppVar_73254 = cppVar_73260;
	}
	cppVar_73248 = cppVar_73254;
	}
	cppVar_73242 = cppVar_73248;
	}
	cppVar_73236 = cppVar_73242;
	}
	cppVar_73230 = cppVar_73236;
	}
	cppVar_73224 = cppVar_73230;
	}
	cppVar_73211 = cppVar_73224;
	}
	cppVar_73205 = cppVar_73211;
	} else {
	cppVar_73205 = TH0;
	}
	cppVar_73201 = cppVar_73205;
	} else {
	BIT_VEC cppVar_73351;
	BIT_VEC cppVar_73352 = ROM.rd(PC);
	bool cppVar_73354 = (cppVar_73352 == 137);
	if (cppVar_73354) {
	BIT_VEC cppVar_73355;
	BIT_VEC cppVar_73357 = PC + 1;
	cppVar_73357 = (cppVar_73357 & cppMask_un_16_);
	BIT_VEC cppVar_73358 = ROM.rd(cppVar_73357);
	bool cppVar_73360 = (cppVar_73358 == 140);
	if (cppVar_73360) {
	BIT_VEC cppVar_73361;
	BIT_VEC cppVar_73363 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73365 = (cppVar_73363 << 3) | 1;
	cppVar_73365 = (cppVar_73365 & cppMask_un_5_);
	BIT_VEC cppVar_73366 = (0 << 5) | cppVar_73365;
	cppVar_73366 = (cppVar_73366 & cppMask_un_8_);
	BIT_VEC cppVar_73367 = (cppVar_73366 >> 7) & cppMask_un_1_;
	bool cppVar_73369 = (cppVar_73367 == 0);
	if (cppVar_73369) {
	BIT_VEC cppVar_73370 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73371 = (cppVar_73370 << 3) | 1;
	cppVar_73371 = (cppVar_73371 & cppMask_un_5_);
	BIT_VEC cppVar_73372 = (0 << 5) | cppVar_73371;
	cppVar_73372 = (cppVar_73372 & cppMask_un_8_);
	BIT_VEC cppVar_73373 = IRAM.rd(cppVar_73372);
	cppVar_73361 = cppVar_73373;
	} else {
	BIT_VEC cppVar_73374;
	BIT_VEC cppVar_73375 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73376 = (cppVar_73375 << 3) | 1;
	cppVar_73376 = (cppVar_73376 & cppMask_un_5_);
	BIT_VEC cppVar_73377 = (0 << 5) | cppVar_73376;
	cppVar_73377 = (cppVar_73377 & cppMask_un_8_);
	bool cppVar_73379 = (cppVar_73377 == 128);
	if (cppVar_73379) {
	cppVar_73374 = P0;
	} else {
	BIT_VEC cppVar_73380;
	BIT_VEC cppVar_73381 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73382 = (cppVar_73381 << 3) | 1;
	cppVar_73382 = (cppVar_73382 & cppMask_un_5_);
	BIT_VEC cppVar_73383 = (0 << 5) | cppVar_73382;
	cppVar_73383 = (cppVar_73383 & cppMask_un_8_);
	bool cppVar_73385 = (cppVar_73383 == 129);
	if (cppVar_73385) {
	cppVar_73380 = SP;
	} else {
	BIT_VEC cppVar_73386;
	BIT_VEC cppVar_73387 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73388 = (cppVar_73387 << 3) | 1;
	cppVar_73388 = (cppVar_73388 & cppMask_un_5_);
	BIT_VEC cppVar_73389 = (0 << 5) | cppVar_73388;
	cppVar_73389 = (cppVar_73389 & cppMask_un_8_);
	bool cppVar_73391 = (cppVar_73389 == 130);
	if (cppVar_73391) {
	cppVar_73386 = DPL;
	} else {
	BIT_VEC cppVar_73392;
	BIT_VEC cppVar_73393 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73394 = (cppVar_73393 << 3) | 1;
	cppVar_73394 = (cppVar_73394 & cppMask_un_5_);
	BIT_VEC cppVar_73395 = (0 << 5) | cppVar_73394;
	cppVar_73395 = (cppVar_73395 & cppMask_un_8_);
	bool cppVar_73397 = (cppVar_73395 == 131);
	if (cppVar_73397) {
	cppVar_73392 = DPH;
	} else {
	BIT_VEC cppVar_73398;
	BIT_VEC cppVar_73399 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73400 = (cppVar_73399 << 3) | 1;
	cppVar_73400 = (cppVar_73400 & cppMask_un_5_);
	BIT_VEC cppVar_73401 = (0 << 5) | cppVar_73400;
	cppVar_73401 = (cppVar_73401 & cppMask_un_8_);
	bool cppVar_73403 = (cppVar_73401 == 135);
	if (cppVar_73403) {
	cppVar_73398 = PCON;
	} else {
	BIT_VEC cppVar_73404;
	BIT_VEC cppVar_73405 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73406 = (cppVar_73405 << 3) | 1;
	cppVar_73406 = (cppVar_73406 & cppMask_un_5_);
	BIT_VEC cppVar_73407 = (0 << 5) | cppVar_73406;
	cppVar_73407 = (cppVar_73407 & cppMask_un_8_);
	bool cppVar_73409 = (cppVar_73407 == 136);
	if (cppVar_73409) {
	cppVar_73404 = TCON;
	} else {
	BIT_VEC cppVar_73410;
	BIT_VEC cppVar_73411 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73412 = (cppVar_73411 << 3) | 1;
	cppVar_73412 = (cppVar_73412 & cppMask_un_5_);
	BIT_VEC cppVar_73413 = (0 << 5) | cppVar_73412;
	cppVar_73413 = (cppVar_73413 & cppMask_un_8_);
	bool cppVar_73415 = (cppVar_73413 == 137);
	if (cppVar_73415) {
	cppVar_73410 = TMOD;
	} else {
	BIT_VEC cppVar_73416;
	BIT_VEC cppVar_73417 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73418 = (cppVar_73417 << 3) | 1;
	cppVar_73418 = (cppVar_73418 & cppMask_un_5_);
	BIT_VEC cppVar_73419 = (0 << 5) | cppVar_73418;
	cppVar_73419 = (cppVar_73419 & cppMask_un_8_);
	bool cppVar_73421 = (cppVar_73419 == 138);
	if (cppVar_73421) {
	cppVar_73416 = TL0;
	} else {
	BIT_VEC cppVar_73422;
	BIT_VEC cppVar_73423 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73424 = (cppVar_73423 << 3) | 1;
	cppVar_73424 = (cppVar_73424 & cppMask_un_5_);
	BIT_VEC cppVar_73425 = (0 << 5) | cppVar_73424;
	cppVar_73425 = (cppVar_73425 & cppMask_un_8_);
	bool cppVar_73427 = (cppVar_73425 == 140);
	if (cppVar_73427) {
	cppVar_73422 = TH0;
	} else {
	BIT_VEC cppVar_73428;
	BIT_VEC cppVar_73429 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73430 = (cppVar_73429 << 3) | 1;
	cppVar_73430 = (cppVar_73430 & cppMask_un_5_);
	BIT_VEC cppVar_73431 = (0 << 5) | cppVar_73430;
	cppVar_73431 = (cppVar_73431 & cppMask_un_8_);
	bool cppVar_73433 = (cppVar_73431 == 139);
	if (cppVar_73433) {
	cppVar_73428 = TL1;
	} else {
	BIT_VEC cppVar_73434;
	BIT_VEC cppVar_73435 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73436 = (cppVar_73435 << 3) | 1;
	cppVar_73436 = (cppVar_73436 & cppMask_un_5_);
	BIT_VEC cppVar_73437 = (0 << 5) | cppVar_73436;
	cppVar_73437 = (cppVar_73437 & cppMask_un_8_);
	bool cppVar_73439 = (cppVar_73437 == 141);
	if (cppVar_73439) {
	cppVar_73434 = TH1;
	} else {
	BIT_VEC cppVar_73440;
	BIT_VEC cppVar_73441 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73442 = (cppVar_73441 << 3) | 1;
	cppVar_73442 = (cppVar_73442 & cppMask_un_5_);
	BIT_VEC cppVar_73443 = (0 << 5) | cppVar_73442;
	cppVar_73443 = (cppVar_73443 & cppMask_un_8_);
	bool cppVar_73445 = (cppVar_73443 == 144);
	if (cppVar_73445) {
	cppVar_73440 = P1;
	} else {
	BIT_VEC cppVar_73446;
	BIT_VEC cppVar_73447 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73448 = (cppVar_73447 << 3) | 1;
	cppVar_73448 = (cppVar_73448 & cppMask_un_5_);
	BIT_VEC cppVar_73449 = (0 << 5) | cppVar_73448;
	cppVar_73449 = (cppVar_73449 & cppMask_un_8_);
	bool cppVar_73451 = (cppVar_73449 == 152);
	if (cppVar_73451) {
	cppVar_73446 = SCON;
	} else {
	BIT_VEC cppVar_73452;
	BIT_VEC cppVar_73453 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73454 = (cppVar_73453 << 3) | 1;
	cppVar_73454 = (cppVar_73454 & cppMask_un_5_);
	BIT_VEC cppVar_73455 = (0 << 5) | cppVar_73454;
	cppVar_73455 = (cppVar_73455 & cppMask_un_8_);
	bool cppVar_73457 = (cppVar_73455 == 153);
	if (cppVar_73457) {
	cppVar_73452 = SBUF;
	} else {
	BIT_VEC cppVar_73458;
	BIT_VEC cppVar_73459 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73460 = (cppVar_73459 << 3) | 1;
	cppVar_73460 = (cppVar_73460 & cppMask_un_5_);
	BIT_VEC cppVar_73461 = (0 << 5) | cppVar_73460;
	cppVar_73461 = (cppVar_73461 & cppMask_un_8_);
	bool cppVar_73463 = (cppVar_73461 == 160);
	if (cppVar_73463) {
	cppVar_73458 = P2;
	} else {
	BIT_VEC cppVar_73464;
	BIT_VEC cppVar_73465 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73466 = (cppVar_73465 << 3) | 1;
	cppVar_73466 = (cppVar_73466 & cppMask_un_5_);
	BIT_VEC cppVar_73467 = (0 << 5) | cppVar_73466;
	cppVar_73467 = (cppVar_73467 & cppMask_un_8_);
	bool cppVar_73469 = (cppVar_73467 == 168);
	if (cppVar_73469) {
	cppVar_73464 = IE;
	} else {
	BIT_VEC cppVar_73470;
	BIT_VEC cppVar_73471 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73472 = (cppVar_73471 << 3) | 1;
	cppVar_73472 = (cppVar_73472 & cppMask_un_5_);
	BIT_VEC cppVar_73473 = (0 << 5) | cppVar_73472;
	cppVar_73473 = (cppVar_73473 & cppMask_un_8_);
	bool cppVar_73475 = (cppVar_73473 == 176);
	if (cppVar_73475) {
	cppVar_73470 = P3;
	} else {
	BIT_VEC cppVar_73476;
	BIT_VEC cppVar_73477 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73478 = (cppVar_73477 << 3) | 1;
	cppVar_73478 = (cppVar_73478 & cppMask_un_5_);
	BIT_VEC cppVar_73479 = (0 << 5) | cppVar_73478;
	cppVar_73479 = (cppVar_73479 & cppMask_un_8_);
	bool cppVar_73481 = (cppVar_73479 == 184);
	if (cppVar_73481) {
	cppVar_73476 = IP;
	} else {
	BIT_VEC cppVar_73482;
	BIT_VEC cppVar_73483 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73484 = (cppVar_73483 << 3) | 1;
	cppVar_73484 = (cppVar_73484 & cppMask_un_5_);
	BIT_VEC cppVar_73485 = (0 << 5) | cppVar_73484;
	cppVar_73485 = (cppVar_73485 & cppMask_un_8_);
	bool cppVar_73487 = (cppVar_73485 == 208);
	if (cppVar_73487) {
	cppVar_73482 = PSW;
	} else {
	BIT_VEC cppVar_73488;
	BIT_VEC cppVar_73489 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73490 = (cppVar_73489 << 3) | 1;
	cppVar_73490 = (cppVar_73490 & cppMask_un_5_);
	BIT_VEC cppVar_73491 = (0 << 5) | cppVar_73490;
	cppVar_73491 = (cppVar_73491 & cppMask_un_8_);
	bool cppVar_73493 = (cppVar_73491 == 224);
	if (cppVar_73493) {
	cppVar_73488 = ACC;
	} else {
	BIT_VEC cppVar_73494;
	BIT_VEC cppVar_73495 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73496 = (cppVar_73495 << 3) | 1;
	cppVar_73496 = (cppVar_73496 & cppMask_un_5_);
	BIT_VEC cppVar_73497 = (0 << 5) | cppVar_73496;
	cppVar_73497 = (cppVar_73497 & cppMask_un_8_);
	bool cppVar_73499 = (cppVar_73497 == 240);
	if (cppVar_73499) {
	cppVar_73494 = B;
	} else {
	cppVar_73494 = 0;
	}
	cppVar_73488 = cppVar_73494;
	}
	cppVar_73482 = cppVar_73488;
	}
	cppVar_73476 = cppVar_73482;
	}
	cppVar_73470 = cppVar_73476;
	}
	cppVar_73464 = cppVar_73470;
	}
	cppVar_73458 = cppVar_73464;
	}
	cppVar_73452 = cppVar_73458;
	}
	cppVar_73446 = cppVar_73452;
	}
	cppVar_73440 = cppVar_73446;
	}
	cppVar_73434 = cppVar_73440;
	}
	cppVar_73428 = cppVar_73434;
	}
	cppVar_73422 = cppVar_73428;
	}
	cppVar_73416 = cppVar_73422;
	}
	cppVar_73410 = cppVar_73416;
	}
	cppVar_73404 = cppVar_73410;
	}
	cppVar_73398 = cppVar_73404;
	}
	cppVar_73392 = cppVar_73398;
	}
	cppVar_73386 = cppVar_73392;
	}
	cppVar_73380 = cppVar_73386;
	}
	cppVar_73374 = cppVar_73380;
	}
	cppVar_73361 = cppVar_73374;
	}
	cppVar_73355 = cppVar_73361;
	} else {
	cppVar_73355 = TH0;
	}
	cppVar_73351 = cppVar_73355;
	} else {
	BIT_VEC cppVar_73501;
	BIT_VEC cppVar_73502 = ROM.rd(PC);
	bool cppVar_73504 = (cppVar_73502 == 136);
	if (cppVar_73504) {
	BIT_VEC cppVar_73505;
	BIT_VEC cppVar_73507 = PC + 1;
	cppVar_73507 = (cppVar_73507 & cppMask_un_16_);
	BIT_VEC cppVar_73508 = ROM.rd(cppVar_73507);
	bool cppVar_73510 = (cppVar_73508 == 140);
	if (cppVar_73510) {
	BIT_VEC cppVar_73511;
	BIT_VEC cppVar_73513 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73515 = (cppVar_73513 << 3) | 0;
	cppVar_73515 = (cppVar_73515 & cppMask_un_5_);
	BIT_VEC cppVar_73516 = (0 << 5) | cppVar_73515;
	cppVar_73516 = (cppVar_73516 & cppMask_un_8_);
	BIT_VEC cppVar_73517 = (cppVar_73516 >> 7) & cppMask_un_1_;
	bool cppVar_73519 = (cppVar_73517 == 0);
	if (cppVar_73519) {
	BIT_VEC cppVar_73520 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73521 = (cppVar_73520 << 3) | 0;
	cppVar_73521 = (cppVar_73521 & cppMask_un_5_);
	BIT_VEC cppVar_73522 = (0 << 5) | cppVar_73521;
	cppVar_73522 = (cppVar_73522 & cppMask_un_8_);
	BIT_VEC cppVar_73523 = IRAM.rd(cppVar_73522);
	cppVar_73511 = cppVar_73523;
	} else {
	BIT_VEC cppVar_73524;
	BIT_VEC cppVar_73525 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73526 = (cppVar_73525 << 3) | 0;
	cppVar_73526 = (cppVar_73526 & cppMask_un_5_);
	BIT_VEC cppVar_73527 = (0 << 5) | cppVar_73526;
	cppVar_73527 = (cppVar_73527 & cppMask_un_8_);
	bool cppVar_73529 = (cppVar_73527 == 128);
	if (cppVar_73529) {
	cppVar_73524 = P0;
	} else {
	BIT_VEC cppVar_73530;
	BIT_VEC cppVar_73531 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73532 = (cppVar_73531 << 3) | 0;
	cppVar_73532 = (cppVar_73532 & cppMask_un_5_);
	BIT_VEC cppVar_73533 = (0 << 5) | cppVar_73532;
	cppVar_73533 = (cppVar_73533 & cppMask_un_8_);
	bool cppVar_73535 = (cppVar_73533 == 129);
	if (cppVar_73535) {
	cppVar_73530 = SP;
	} else {
	BIT_VEC cppVar_73536;
	BIT_VEC cppVar_73537 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73538 = (cppVar_73537 << 3) | 0;
	cppVar_73538 = (cppVar_73538 & cppMask_un_5_);
	BIT_VEC cppVar_73539 = (0 << 5) | cppVar_73538;
	cppVar_73539 = (cppVar_73539 & cppMask_un_8_);
	bool cppVar_73541 = (cppVar_73539 == 130);
	if (cppVar_73541) {
	cppVar_73536 = DPL;
	} else {
	BIT_VEC cppVar_73542;
	BIT_VEC cppVar_73543 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73544 = (cppVar_73543 << 3) | 0;
	cppVar_73544 = (cppVar_73544 & cppMask_un_5_);
	BIT_VEC cppVar_73545 = (0 << 5) | cppVar_73544;
	cppVar_73545 = (cppVar_73545 & cppMask_un_8_);
	bool cppVar_73547 = (cppVar_73545 == 131);
	if (cppVar_73547) {
	cppVar_73542 = DPH;
	} else {
	BIT_VEC cppVar_73548;
	BIT_VEC cppVar_73549 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73550 = (cppVar_73549 << 3) | 0;
	cppVar_73550 = (cppVar_73550 & cppMask_un_5_);
	BIT_VEC cppVar_73551 = (0 << 5) | cppVar_73550;
	cppVar_73551 = (cppVar_73551 & cppMask_un_8_);
	bool cppVar_73553 = (cppVar_73551 == 135);
	if (cppVar_73553) {
	cppVar_73548 = PCON;
	} else {
	BIT_VEC cppVar_73554;
	BIT_VEC cppVar_73555 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73556 = (cppVar_73555 << 3) | 0;
	cppVar_73556 = (cppVar_73556 & cppMask_un_5_);
	BIT_VEC cppVar_73557 = (0 << 5) | cppVar_73556;
	cppVar_73557 = (cppVar_73557 & cppMask_un_8_);
	bool cppVar_73559 = (cppVar_73557 == 136);
	if (cppVar_73559) {
	cppVar_73554 = TCON;
	} else {
	BIT_VEC cppVar_73560;
	BIT_VEC cppVar_73561 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73562 = (cppVar_73561 << 3) | 0;
	cppVar_73562 = (cppVar_73562 & cppMask_un_5_);
	BIT_VEC cppVar_73563 = (0 << 5) | cppVar_73562;
	cppVar_73563 = (cppVar_73563 & cppMask_un_8_);
	bool cppVar_73565 = (cppVar_73563 == 137);
	if (cppVar_73565) {
	cppVar_73560 = TMOD;
	} else {
	BIT_VEC cppVar_73566;
	BIT_VEC cppVar_73567 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73568 = (cppVar_73567 << 3) | 0;
	cppVar_73568 = (cppVar_73568 & cppMask_un_5_);
	BIT_VEC cppVar_73569 = (0 << 5) | cppVar_73568;
	cppVar_73569 = (cppVar_73569 & cppMask_un_8_);
	bool cppVar_73571 = (cppVar_73569 == 138);
	if (cppVar_73571) {
	cppVar_73566 = TL0;
	} else {
	BIT_VEC cppVar_73572;
	BIT_VEC cppVar_73573 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73574 = (cppVar_73573 << 3) | 0;
	cppVar_73574 = (cppVar_73574 & cppMask_un_5_);
	BIT_VEC cppVar_73575 = (0 << 5) | cppVar_73574;
	cppVar_73575 = (cppVar_73575 & cppMask_un_8_);
	bool cppVar_73577 = (cppVar_73575 == 140);
	if (cppVar_73577) {
	cppVar_73572 = TH0;
	} else {
	BIT_VEC cppVar_73578;
	BIT_VEC cppVar_73579 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73580 = (cppVar_73579 << 3) | 0;
	cppVar_73580 = (cppVar_73580 & cppMask_un_5_);
	BIT_VEC cppVar_73581 = (0 << 5) | cppVar_73580;
	cppVar_73581 = (cppVar_73581 & cppMask_un_8_);
	bool cppVar_73583 = (cppVar_73581 == 139);
	if (cppVar_73583) {
	cppVar_73578 = TL1;
	} else {
	BIT_VEC cppVar_73584;
	BIT_VEC cppVar_73585 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73586 = (cppVar_73585 << 3) | 0;
	cppVar_73586 = (cppVar_73586 & cppMask_un_5_);
	BIT_VEC cppVar_73587 = (0 << 5) | cppVar_73586;
	cppVar_73587 = (cppVar_73587 & cppMask_un_8_);
	bool cppVar_73589 = (cppVar_73587 == 141);
	if (cppVar_73589) {
	cppVar_73584 = TH1;
	} else {
	BIT_VEC cppVar_73590;
	BIT_VEC cppVar_73591 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73592 = (cppVar_73591 << 3) | 0;
	cppVar_73592 = (cppVar_73592 & cppMask_un_5_);
	BIT_VEC cppVar_73593 = (0 << 5) | cppVar_73592;
	cppVar_73593 = (cppVar_73593 & cppMask_un_8_);
	bool cppVar_73595 = (cppVar_73593 == 144);
	if (cppVar_73595) {
	cppVar_73590 = P1;
	} else {
	BIT_VEC cppVar_73596;
	BIT_VEC cppVar_73597 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73598 = (cppVar_73597 << 3) | 0;
	cppVar_73598 = (cppVar_73598 & cppMask_un_5_);
	BIT_VEC cppVar_73599 = (0 << 5) | cppVar_73598;
	cppVar_73599 = (cppVar_73599 & cppMask_un_8_);
	bool cppVar_73601 = (cppVar_73599 == 152);
	if (cppVar_73601) {
	cppVar_73596 = SCON;
	} else {
	BIT_VEC cppVar_73602;
	BIT_VEC cppVar_73603 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73604 = (cppVar_73603 << 3) | 0;
	cppVar_73604 = (cppVar_73604 & cppMask_un_5_);
	BIT_VEC cppVar_73605 = (0 << 5) | cppVar_73604;
	cppVar_73605 = (cppVar_73605 & cppMask_un_8_);
	bool cppVar_73607 = (cppVar_73605 == 153);
	if (cppVar_73607) {
	cppVar_73602 = SBUF;
	} else {
	BIT_VEC cppVar_73608;
	BIT_VEC cppVar_73609 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73610 = (cppVar_73609 << 3) | 0;
	cppVar_73610 = (cppVar_73610 & cppMask_un_5_);
	BIT_VEC cppVar_73611 = (0 << 5) | cppVar_73610;
	cppVar_73611 = (cppVar_73611 & cppMask_un_8_);
	bool cppVar_73613 = (cppVar_73611 == 160);
	if (cppVar_73613) {
	cppVar_73608 = P2;
	} else {
	BIT_VEC cppVar_73614;
	BIT_VEC cppVar_73615 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73616 = (cppVar_73615 << 3) | 0;
	cppVar_73616 = (cppVar_73616 & cppMask_un_5_);
	BIT_VEC cppVar_73617 = (0 << 5) | cppVar_73616;
	cppVar_73617 = (cppVar_73617 & cppMask_un_8_);
	bool cppVar_73619 = (cppVar_73617 == 168);
	if (cppVar_73619) {
	cppVar_73614 = IE;
	} else {
	BIT_VEC cppVar_73620;
	BIT_VEC cppVar_73621 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73622 = (cppVar_73621 << 3) | 0;
	cppVar_73622 = (cppVar_73622 & cppMask_un_5_);
	BIT_VEC cppVar_73623 = (0 << 5) | cppVar_73622;
	cppVar_73623 = (cppVar_73623 & cppMask_un_8_);
	bool cppVar_73625 = (cppVar_73623 == 176);
	if (cppVar_73625) {
	cppVar_73620 = P3;
	} else {
	BIT_VEC cppVar_73626;
	BIT_VEC cppVar_73627 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73628 = (cppVar_73627 << 3) | 0;
	cppVar_73628 = (cppVar_73628 & cppMask_un_5_);
	BIT_VEC cppVar_73629 = (0 << 5) | cppVar_73628;
	cppVar_73629 = (cppVar_73629 & cppMask_un_8_);
	bool cppVar_73631 = (cppVar_73629 == 184);
	if (cppVar_73631) {
	cppVar_73626 = IP;
	} else {
	BIT_VEC cppVar_73632;
	BIT_VEC cppVar_73633 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73634 = (cppVar_73633 << 3) | 0;
	cppVar_73634 = (cppVar_73634 & cppMask_un_5_);
	BIT_VEC cppVar_73635 = (0 << 5) | cppVar_73634;
	cppVar_73635 = (cppVar_73635 & cppMask_un_8_);
	bool cppVar_73637 = (cppVar_73635 == 208);
	if (cppVar_73637) {
	cppVar_73632 = PSW;
	} else {
	BIT_VEC cppVar_73638;
	BIT_VEC cppVar_73639 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73640 = (cppVar_73639 << 3) | 0;
	cppVar_73640 = (cppVar_73640 & cppMask_un_5_);
	BIT_VEC cppVar_73641 = (0 << 5) | cppVar_73640;
	cppVar_73641 = (cppVar_73641 & cppMask_un_8_);
	bool cppVar_73643 = (cppVar_73641 == 224);
	if (cppVar_73643) {
	cppVar_73638 = ACC;
	} else {
	BIT_VEC cppVar_73644;
	BIT_VEC cppVar_73645 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73646 = (cppVar_73645 << 3) | 0;
	cppVar_73646 = (cppVar_73646 & cppMask_un_5_);
	BIT_VEC cppVar_73647 = (0 << 5) | cppVar_73646;
	cppVar_73647 = (cppVar_73647 & cppMask_un_8_);
	bool cppVar_73649 = (cppVar_73647 == 240);
	if (cppVar_73649) {
	cppVar_73644 = B;
	} else {
	cppVar_73644 = 0;
	}
	cppVar_73638 = cppVar_73644;
	}
	cppVar_73632 = cppVar_73638;
	}
	cppVar_73626 = cppVar_73632;
	}
	cppVar_73620 = cppVar_73626;
	}
	cppVar_73614 = cppVar_73620;
	}
	cppVar_73608 = cppVar_73614;
	}
	cppVar_73602 = cppVar_73608;
	}
	cppVar_73596 = cppVar_73602;
	}
	cppVar_73590 = cppVar_73596;
	}
	cppVar_73584 = cppVar_73590;
	}
	cppVar_73578 = cppVar_73584;
	}
	cppVar_73572 = cppVar_73578;
	}
	cppVar_73566 = cppVar_73572;
	}
	cppVar_73560 = cppVar_73566;
	}
	cppVar_73554 = cppVar_73560;
	}
	cppVar_73548 = cppVar_73554;
	}
	cppVar_73542 = cppVar_73548;
	}
	cppVar_73536 = cppVar_73542;
	}
	cppVar_73530 = cppVar_73536;
	}
	cppVar_73524 = cppVar_73530;
	}
	cppVar_73511 = cppVar_73524;
	}
	cppVar_73505 = cppVar_73511;
	} else {
	cppVar_73505 = TH0;
	}
	cppVar_73501 = cppVar_73505;
	} else {
	BIT_VEC cppVar_73651;
	BIT_VEC cppVar_73652 = ROM.rd(PC);
	bool cppVar_73654 = (cppVar_73652 == 135);
	if (cppVar_73654) {
	BIT_VEC cppVar_73655;
	BIT_VEC cppVar_73657 = PC + 1;
	cppVar_73657 = (cppVar_73657 & cppMask_un_16_);
	BIT_VEC cppVar_73658 = ROM.rd(cppVar_73657);
	bool cppVar_73660 = (cppVar_73658 == 140);
	if (cppVar_73660) {
	BIT_VEC cppVar_73662 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73664 = (cppVar_73662 << 3) | 1;
	cppVar_73664 = (cppVar_73664 & cppMask_un_5_);
	BIT_VEC cppVar_73665 = (0 << 5) | cppVar_73664;
	cppVar_73665 = (cppVar_73665 & cppMask_un_8_);
	BIT_VEC cppVar_73666 = IRAM.rd(cppVar_73665);
	BIT_VEC cppVar_73667 = IRAM.rd(cppVar_73666);
	cppVar_73655 = cppVar_73667;
	} else {
	cppVar_73655 = TH0;
	}
	cppVar_73651 = cppVar_73655;
	} else {
	BIT_VEC cppVar_73668;
	BIT_VEC cppVar_73669 = ROM.rd(PC);
	bool cppVar_73671 = (cppVar_73669 == 134);
	if (cppVar_73671) {
	BIT_VEC cppVar_73672;
	BIT_VEC cppVar_73674 = PC + 1;
	cppVar_73674 = (cppVar_73674 & cppMask_un_16_);
	BIT_VEC cppVar_73675 = ROM.rd(cppVar_73674);
	bool cppVar_73677 = (cppVar_73675 == 140);
	if (cppVar_73677) {
	BIT_VEC cppVar_73679 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_73681 = (cppVar_73679 << 3) | 0;
	cppVar_73681 = (cppVar_73681 & cppMask_un_5_);
	BIT_VEC cppVar_73682 = (0 << 5) | cppVar_73681;
	cppVar_73682 = (cppVar_73682 & cppMask_un_8_);
	BIT_VEC cppVar_73683 = IRAM.rd(cppVar_73682);
	BIT_VEC cppVar_73684 = IRAM.rd(cppVar_73683);
	cppVar_73672 = cppVar_73684;
	} else {
	cppVar_73672 = TH0;
	}
	cppVar_73668 = cppVar_73672;
	} else {
	BIT_VEC cppVar_73685;
	BIT_VEC cppVar_73686 = ROM.rd(PC);
	bool cppVar_73688 = (cppVar_73686 == 133);
	if (cppVar_73688) {
	BIT_VEC cppVar_73689;
	BIT_VEC cppVar_73691 = PC + 2;
	cppVar_73691 = (cppVar_73691 & cppMask_un_16_);
	BIT_VEC cppVar_73692 = ROM.rd(cppVar_73691);
	bool cppVar_73694 = (cppVar_73692 == 140);
	if (cppVar_73694) {
	BIT_VEC cppVar_73695;
	BIT_VEC cppVar_73697 = PC + 1;
	cppVar_73697 = (cppVar_73697 & cppMask_un_16_);
	BIT_VEC cppVar_73698 = ROM.rd(cppVar_73697);
	BIT_VEC cppVar_73699 = (cppVar_73698 >> 7) & cppMask_un_1_;
	bool cppVar_73701 = (cppVar_73699 == 0);
	if (cppVar_73701) {
	BIT_VEC cppVar_73702 = PC + 1;
	cppVar_73702 = (cppVar_73702 & cppMask_un_16_);
	BIT_VEC cppVar_73703 = ROM.rd(cppVar_73702);
	BIT_VEC cppVar_73704 = IRAM.rd(cppVar_73703);
	cppVar_73695 = cppVar_73704;
	} else {
	BIT_VEC cppVar_73705;
	BIT_VEC cppVar_73706 = PC + 1;
	cppVar_73706 = (cppVar_73706 & cppMask_un_16_);
	BIT_VEC cppVar_73707 = ROM.rd(cppVar_73706);
	bool cppVar_73709 = (cppVar_73707 == 128);
	if (cppVar_73709) {
	cppVar_73705 = P0;
	} else {
	BIT_VEC cppVar_73710;
	BIT_VEC cppVar_73711 = PC + 1;
	cppVar_73711 = (cppVar_73711 & cppMask_un_16_);
	BIT_VEC cppVar_73712 = ROM.rd(cppVar_73711);
	bool cppVar_73714 = (cppVar_73712 == 129);
	if (cppVar_73714) {
	cppVar_73710 = SP;
	} else {
	BIT_VEC cppVar_73715;
	BIT_VEC cppVar_73716 = PC + 1;
	cppVar_73716 = (cppVar_73716 & cppMask_un_16_);
	BIT_VEC cppVar_73717 = ROM.rd(cppVar_73716);
	bool cppVar_73719 = (cppVar_73717 == 130);
	if (cppVar_73719) {
	cppVar_73715 = DPL;
	} else {
	BIT_VEC cppVar_73720;
	BIT_VEC cppVar_73721 = PC + 1;
	cppVar_73721 = (cppVar_73721 & cppMask_un_16_);
	BIT_VEC cppVar_73722 = ROM.rd(cppVar_73721);
	bool cppVar_73724 = (cppVar_73722 == 131);
	if (cppVar_73724) {
	cppVar_73720 = DPH;
	} else {
	BIT_VEC cppVar_73725;
	BIT_VEC cppVar_73726 = PC + 1;
	cppVar_73726 = (cppVar_73726 & cppMask_un_16_);
	BIT_VEC cppVar_73727 = ROM.rd(cppVar_73726);
	bool cppVar_73729 = (cppVar_73727 == 135);
	if (cppVar_73729) {
	cppVar_73725 = PCON;
	} else {
	BIT_VEC cppVar_73730;
	BIT_VEC cppVar_73731 = PC + 1;
	cppVar_73731 = (cppVar_73731 & cppMask_un_16_);
	BIT_VEC cppVar_73732 = ROM.rd(cppVar_73731);
	bool cppVar_73734 = (cppVar_73732 == 136);
	if (cppVar_73734) {
	cppVar_73730 = TCON;
	} else {
	BIT_VEC cppVar_73735;
	BIT_VEC cppVar_73736 = PC + 1;
	cppVar_73736 = (cppVar_73736 & cppMask_un_16_);
	BIT_VEC cppVar_73737 = ROM.rd(cppVar_73736);
	bool cppVar_73739 = (cppVar_73737 == 137);
	if (cppVar_73739) {
	cppVar_73735 = TMOD;
	} else {
	BIT_VEC cppVar_73740;
	BIT_VEC cppVar_73741 = PC + 1;
	cppVar_73741 = (cppVar_73741 & cppMask_un_16_);
	BIT_VEC cppVar_73742 = ROM.rd(cppVar_73741);
	bool cppVar_73744 = (cppVar_73742 == 138);
	if (cppVar_73744) {
	cppVar_73740 = TL0;
	} else {
	BIT_VEC cppVar_73745;
	BIT_VEC cppVar_73746 = PC + 1;
	cppVar_73746 = (cppVar_73746 & cppMask_un_16_);
	BIT_VEC cppVar_73747 = ROM.rd(cppVar_73746);
	bool cppVar_73749 = (cppVar_73747 == 140);
	if (cppVar_73749) {
	cppVar_73745 = TH0;
	} else {
	BIT_VEC cppVar_73750;
	BIT_VEC cppVar_73751 = PC + 1;
	cppVar_73751 = (cppVar_73751 & cppMask_un_16_);
	BIT_VEC cppVar_73752 = ROM.rd(cppVar_73751);
	bool cppVar_73754 = (cppVar_73752 == 139);
	if (cppVar_73754) {
	cppVar_73750 = TL1;
	} else {
	BIT_VEC cppVar_73755;
	BIT_VEC cppVar_73756 = PC + 1;
	cppVar_73756 = (cppVar_73756 & cppMask_un_16_);
	BIT_VEC cppVar_73757 = ROM.rd(cppVar_73756);
	bool cppVar_73759 = (cppVar_73757 == 141);
	if (cppVar_73759) {
	cppVar_73755 = TH1;
	} else {
	BIT_VEC cppVar_73760;
	BIT_VEC cppVar_73761 = PC + 1;
	cppVar_73761 = (cppVar_73761 & cppMask_un_16_);
	BIT_VEC cppVar_73762 = ROM.rd(cppVar_73761);
	bool cppVar_73764 = (cppVar_73762 == 144);
	if (cppVar_73764) {
	cppVar_73760 = P1;
	} else {
	BIT_VEC cppVar_73765;
	BIT_VEC cppVar_73766 = PC + 1;
	cppVar_73766 = (cppVar_73766 & cppMask_un_16_);
	BIT_VEC cppVar_73767 = ROM.rd(cppVar_73766);
	bool cppVar_73769 = (cppVar_73767 == 152);
	if (cppVar_73769) {
	cppVar_73765 = SCON;
	} else {
	BIT_VEC cppVar_73770;
	BIT_VEC cppVar_73771 = PC + 1;
	cppVar_73771 = (cppVar_73771 & cppMask_un_16_);
	BIT_VEC cppVar_73772 = ROM.rd(cppVar_73771);
	bool cppVar_73774 = (cppVar_73772 == 153);
	if (cppVar_73774) {
	cppVar_73770 = SBUF;
	} else {
	BIT_VEC cppVar_73775;
	BIT_VEC cppVar_73776 = PC + 1;
	cppVar_73776 = (cppVar_73776 & cppMask_un_16_);
	BIT_VEC cppVar_73777 = ROM.rd(cppVar_73776);
	bool cppVar_73779 = (cppVar_73777 == 160);
	if (cppVar_73779) {
	cppVar_73775 = P2;
	} else {
	BIT_VEC cppVar_73780;
	BIT_VEC cppVar_73781 = PC + 1;
	cppVar_73781 = (cppVar_73781 & cppMask_un_16_);
	BIT_VEC cppVar_73782 = ROM.rd(cppVar_73781);
	bool cppVar_73784 = (cppVar_73782 == 168);
	if (cppVar_73784) {
	cppVar_73780 = IE;
	} else {
	BIT_VEC cppVar_73785;
	BIT_VEC cppVar_73786 = PC + 1;
	cppVar_73786 = (cppVar_73786 & cppMask_un_16_);
	BIT_VEC cppVar_73787 = ROM.rd(cppVar_73786);
	bool cppVar_73789 = (cppVar_73787 == 176);
	if (cppVar_73789) {
	cppVar_73785 = P3;
	} else {
	BIT_VEC cppVar_73790;
	BIT_VEC cppVar_73791 = PC + 1;
	cppVar_73791 = (cppVar_73791 & cppMask_un_16_);
	BIT_VEC cppVar_73792 = ROM.rd(cppVar_73791);
	bool cppVar_73794 = (cppVar_73792 == 184);
	if (cppVar_73794) {
	cppVar_73790 = IP;
	} else {
	BIT_VEC cppVar_73795;
	BIT_VEC cppVar_73796 = PC + 1;
	cppVar_73796 = (cppVar_73796 & cppMask_un_16_);
	BIT_VEC cppVar_73797 = ROM.rd(cppVar_73796);
	bool cppVar_73799 = (cppVar_73797 == 208);
	if (cppVar_73799) {
	cppVar_73795 = PSW;
	} else {
	BIT_VEC cppVar_73800;
	BIT_VEC cppVar_73801 = PC + 1;
	cppVar_73801 = (cppVar_73801 & cppMask_un_16_);
	BIT_VEC cppVar_73802 = ROM.rd(cppVar_73801);
	bool cppVar_73804 = (cppVar_73802 == 224);
	if (cppVar_73804) {
	cppVar_73800 = ACC;
	} else {
	BIT_VEC cppVar_73805;
	BIT_VEC cppVar_73806 = PC + 1;
	cppVar_73806 = (cppVar_73806 & cppMask_un_16_);
	BIT_VEC cppVar_73807 = ROM.rd(cppVar_73806);
	bool cppVar_73809 = (cppVar_73807 == 240);
	if (cppVar_73809) {
	cppVar_73805 = B;
	} else {
	cppVar_73805 = 0;
	}
	cppVar_73800 = cppVar_73805;
	}
	cppVar_73795 = cppVar_73800;
	}
	cppVar_73790 = cppVar_73795;
	}
	cppVar_73785 = cppVar_73790;
	}
	cppVar_73780 = cppVar_73785;
	}
	cppVar_73775 = cppVar_73780;
	}
	cppVar_73770 = cppVar_73775;
	}
	cppVar_73765 = cppVar_73770;
	}
	cppVar_73760 = cppVar_73765;
	}
	cppVar_73755 = cppVar_73760;
	}
	cppVar_73750 = cppVar_73755;
	}
	cppVar_73745 = cppVar_73750;
	}
	cppVar_73740 = cppVar_73745;
	}
	cppVar_73735 = cppVar_73740;
	}
	cppVar_73730 = cppVar_73735;
	}
	cppVar_73725 = cppVar_73730;
	}
	cppVar_73720 = cppVar_73725;
	}
	cppVar_73715 = cppVar_73720;
	}
	cppVar_73710 = cppVar_73715;
	}
	cppVar_73705 = cppVar_73710;
	}
	cppVar_73695 = cppVar_73705;
	}
	cppVar_73689 = cppVar_73695;
	} else {
	cppVar_73689 = TH0;
	}
	cppVar_73685 = cppVar_73689;
	} else {
	BIT_VEC cppVar_73811;
	BIT_VEC cppVar_73812 = ROM.rd(PC);
	bool cppVar_73814 = (cppVar_73812 == 117);
	if (cppVar_73814) {
	BIT_VEC cppVar_73815;
	BIT_VEC cppVar_73817 = PC + 1;
	cppVar_73817 = (cppVar_73817 & cppMask_un_16_);
	BIT_VEC cppVar_73818 = ROM.rd(cppVar_73817);
	bool cppVar_73820 = (cppVar_73818 == 140);
	if (cppVar_73820) {
	BIT_VEC cppVar_73822 = PC + 2;
	cppVar_73822 = (cppVar_73822 & cppMask_un_16_);
	BIT_VEC cppVar_73823 = ROM.rd(cppVar_73822);
	cppVar_73815 = cppVar_73823;
	} else {
	cppVar_73815 = TH0;
	}
	cppVar_73811 = cppVar_73815;
	} else {
	BIT_VEC cppVar_73824;
	BIT_VEC cppVar_73825 = ROM.rd(PC);
	bool cppVar_73827 = (cppVar_73825 == 99);
	if (cppVar_73827) {
	BIT_VEC cppVar_73828;
	BIT_VEC cppVar_73830 = PC + 1;
	cppVar_73830 = (cppVar_73830 & cppMask_un_16_);
	BIT_VEC cppVar_73831 = ROM.rd(cppVar_73830);
	bool cppVar_73833 = (cppVar_73831 == 140);
	if (cppVar_73833) {
	BIT_VEC cppVar_73834;
	BIT_VEC cppVar_73835 = PC + 1;
	cppVar_73835 = (cppVar_73835 & cppMask_un_16_);
	BIT_VEC cppVar_73836 = ROM.rd(cppVar_73835);
	BIT_VEC cppVar_73837 = (cppVar_73836 >> 7) & cppMask_un_1_;
	bool cppVar_73839 = (cppVar_73837 == 0);
	if (cppVar_73839) {
	BIT_VEC cppVar_73840 = PC + 1;
	cppVar_73840 = (cppVar_73840 & cppMask_un_16_);
	BIT_VEC cppVar_73841 = ROM.rd(cppVar_73840);
	BIT_VEC cppVar_73842 = IRAM.rd(cppVar_73841);
	cppVar_73834 = cppVar_73842;
	} else {
	BIT_VEC cppVar_73843;
	BIT_VEC cppVar_73844 = PC + 1;
	cppVar_73844 = (cppVar_73844 & cppMask_un_16_);
	BIT_VEC cppVar_73845 = ROM.rd(cppVar_73844);
	bool cppVar_73847 = (cppVar_73845 == 128);
	if (cppVar_73847) {
	cppVar_73843 = P0;
	} else {
	BIT_VEC cppVar_73848;
	BIT_VEC cppVar_73849 = PC + 1;
	cppVar_73849 = (cppVar_73849 & cppMask_un_16_);
	BIT_VEC cppVar_73850 = ROM.rd(cppVar_73849);
	bool cppVar_73852 = (cppVar_73850 == 129);
	if (cppVar_73852) {
	cppVar_73848 = SP;
	} else {
	BIT_VEC cppVar_73853;
	BIT_VEC cppVar_73854 = PC + 1;
	cppVar_73854 = (cppVar_73854 & cppMask_un_16_);
	BIT_VEC cppVar_73855 = ROM.rd(cppVar_73854);
	bool cppVar_73857 = (cppVar_73855 == 130);
	if (cppVar_73857) {
	cppVar_73853 = DPL;
	} else {
	BIT_VEC cppVar_73858;
	BIT_VEC cppVar_73859 = PC + 1;
	cppVar_73859 = (cppVar_73859 & cppMask_un_16_);
	BIT_VEC cppVar_73860 = ROM.rd(cppVar_73859);
	bool cppVar_73862 = (cppVar_73860 == 131);
	if (cppVar_73862) {
	cppVar_73858 = DPH;
	} else {
	BIT_VEC cppVar_73863;
	BIT_VEC cppVar_73864 = PC + 1;
	cppVar_73864 = (cppVar_73864 & cppMask_un_16_);
	BIT_VEC cppVar_73865 = ROM.rd(cppVar_73864);
	bool cppVar_73867 = (cppVar_73865 == 135);
	if (cppVar_73867) {
	cppVar_73863 = PCON;
	} else {
	BIT_VEC cppVar_73868;
	BIT_VEC cppVar_73869 = PC + 1;
	cppVar_73869 = (cppVar_73869 & cppMask_un_16_);
	BIT_VEC cppVar_73870 = ROM.rd(cppVar_73869);
	bool cppVar_73872 = (cppVar_73870 == 136);
	if (cppVar_73872) {
	cppVar_73868 = TCON;
	} else {
	BIT_VEC cppVar_73873;
	BIT_VEC cppVar_73874 = PC + 1;
	cppVar_73874 = (cppVar_73874 & cppMask_un_16_);
	BIT_VEC cppVar_73875 = ROM.rd(cppVar_73874);
	bool cppVar_73877 = (cppVar_73875 == 137);
	if (cppVar_73877) {
	cppVar_73873 = TMOD;
	} else {
	BIT_VEC cppVar_73878;
	BIT_VEC cppVar_73879 = PC + 1;
	cppVar_73879 = (cppVar_73879 & cppMask_un_16_);
	BIT_VEC cppVar_73880 = ROM.rd(cppVar_73879);
	bool cppVar_73882 = (cppVar_73880 == 138);
	if (cppVar_73882) {
	cppVar_73878 = TL0;
	} else {
	BIT_VEC cppVar_73883;
	BIT_VEC cppVar_73884 = PC + 1;
	cppVar_73884 = (cppVar_73884 & cppMask_un_16_);
	BIT_VEC cppVar_73885 = ROM.rd(cppVar_73884);
	bool cppVar_73887 = (cppVar_73885 == 140);
	if (cppVar_73887) {
	cppVar_73883 = TH0;
	} else {
	BIT_VEC cppVar_73888;
	BIT_VEC cppVar_73889 = PC + 1;
	cppVar_73889 = (cppVar_73889 & cppMask_un_16_);
	BIT_VEC cppVar_73890 = ROM.rd(cppVar_73889);
	bool cppVar_73892 = (cppVar_73890 == 139);
	if (cppVar_73892) {
	cppVar_73888 = TL1;
	} else {
	BIT_VEC cppVar_73893;
	BIT_VEC cppVar_73894 = PC + 1;
	cppVar_73894 = (cppVar_73894 & cppMask_un_16_);
	BIT_VEC cppVar_73895 = ROM.rd(cppVar_73894);
	bool cppVar_73897 = (cppVar_73895 == 141);
	if (cppVar_73897) {
	cppVar_73893 = TH1;
	} else {
	BIT_VEC cppVar_73898;
	BIT_VEC cppVar_73899 = PC + 1;
	cppVar_73899 = (cppVar_73899 & cppMask_un_16_);
	BIT_VEC cppVar_73900 = ROM.rd(cppVar_73899);
	bool cppVar_73902 = (cppVar_73900 == 144);
	if (cppVar_73902) {
	cppVar_73898 = P1;
	} else {
	BIT_VEC cppVar_73903;
	BIT_VEC cppVar_73904 = PC + 1;
	cppVar_73904 = (cppVar_73904 & cppMask_un_16_);
	BIT_VEC cppVar_73905 = ROM.rd(cppVar_73904);
	bool cppVar_73907 = (cppVar_73905 == 152);
	if (cppVar_73907) {
	cppVar_73903 = SCON;
	} else {
	BIT_VEC cppVar_73908;
	BIT_VEC cppVar_73909 = PC + 1;
	cppVar_73909 = (cppVar_73909 & cppMask_un_16_);
	BIT_VEC cppVar_73910 = ROM.rd(cppVar_73909);
	bool cppVar_73912 = (cppVar_73910 == 153);
	if (cppVar_73912) {
	cppVar_73908 = SBUF;
	} else {
	BIT_VEC cppVar_73913;
	BIT_VEC cppVar_73914 = PC + 1;
	cppVar_73914 = (cppVar_73914 & cppMask_un_16_);
	BIT_VEC cppVar_73915 = ROM.rd(cppVar_73914);
	bool cppVar_73917 = (cppVar_73915 == 160);
	if (cppVar_73917) {
	cppVar_73913 = P2;
	} else {
	BIT_VEC cppVar_73918;
	BIT_VEC cppVar_73919 = PC + 1;
	cppVar_73919 = (cppVar_73919 & cppMask_un_16_);
	BIT_VEC cppVar_73920 = ROM.rd(cppVar_73919);
	bool cppVar_73922 = (cppVar_73920 == 168);
	if (cppVar_73922) {
	cppVar_73918 = IE;
	} else {
	BIT_VEC cppVar_73923;
	BIT_VEC cppVar_73924 = PC + 1;
	cppVar_73924 = (cppVar_73924 & cppMask_un_16_);
	BIT_VEC cppVar_73925 = ROM.rd(cppVar_73924);
	bool cppVar_73927 = (cppVar_73925 == 176);
	if (cppVar_73927) {
	cppVar_73923 = P3;
	} else {
	BIT_VEC cppVar_73928;
	BIT_VEC cppVar_73929 = PC + 1;
	cppVar_73929 = (cppVar_73929 & cppMask_un_16_);
	BIT_VEC cppVar_73930 = ROM.rd(cppVar_73929);
	bool cppVar_73932 = (cppVar_73930 == 184);
	if (cppVar_73932) {
	cppVar_73928 = IP;
	} else {
	BIT_VEC cppVar_73933;
	BIT_VEC cppVar_73934 = PC + 1;
	cppVar_73934 = (cppVar_73934 & cppMask_un_16_);
	BIT_VEC cppVar_73935 = ROM.rd(cppVar_73934);
	bool cppVar_73937 = (cppVar_73935 == 208);
	if (cppVar_73937) {
	cppVar_73933 = PSW;
	} else {
	BIT_VEC cppVar_73938;
	BIT_VEC cppVar_73939 = PC + 1;
	cppVar_73939 = (cppVar_73939 & cppMask_un_16_);
	BIT_VEC cppVar_73940 = ROM.rd(cppVar_73939);
	bool cppVar_73942 = (cppVar_73940 == 224);
	if (cppVar_73942) {
	cppVar_73938 = ACC;
	} else {
	BIT_VEC cppVar_73943;
	BIT_VEC cppVar_73944 = PC + 1;
	cppVar_73944 = (cppVar_73944 & cppMask_un_16_);
	BIT_VEC cppVar_73945 = ROM.rd(cppVar_73944);
	bool cppVar_73947 = (cppVar_73945 == 240);
	if (cppVar_73947) {
	cppVar_73943 = B;
	} else {
	cppVar_73943 = 0;
	}
	cppVar_73938 = cppVar_73943;
	}
	cppVar_73933 = cppVar_73938;
	}
	cppVar_73928 = cppVar_73933;
	}
	cppVar_73923 = cppVar_73928;
	}
	cppVar_73918 = cppVar_73923;
	}
	cppVar_73913 = cppVar_73918;
	}
	cppVar_73908 = cppVar_73913;
	}
	cppVar_73903 = cppVar_73908;
	}
	cppVar_73898 = cppVar_73903;
	}
	cppVar_73893 = cppVar_73898;
	}
	cppVar_73888 = cppVar_73893;
	}
	cppVar_73883 = cppVar_73888;
	}
	cppVar_73878 = cppVar_73883;
	}
	cppVar_73873 = cppVar_73878;
	}
	cppVar_73868 = cppVar_73873;
	}
	cppVar_73863 = cppVar_73868;
	}
	cppVar_73858 = cppVar_73863;
	}
	cppVar_73853 = cppVar_73858;
	}
	cppVar_73848 = cppVar_73853;
	}
	cppVar_73843 = cppVar_73848;
	}
	cppVar_73834 = cppVar_73843;
	}
	BIT_VEC cppVar_73950 = PC + 2;
	cppVar_73950 = (cppVar_73950 & cppMask_un_16_);
	BIT_VEC cppVar_73951 = ROM.rd(cppVar_73950);
	BIT_VEC cppVar_73952 = cppVar_73834 ^ cppVar_73951;
	cppVar_73828 = cppVar_73952;
	} else {
	cppVar_73828 = TH0;
	}
	cppVar_73824 = cppVar_73828;
	} else {
	BIT_VEC cppVar_73953;
	BIT_VEC cppVar_73954 = ROM.rd(PC);
	bool cppVar_73956 = (cppVar_73954 == 98);
	if (cppVar_73956) {
	BIT_VEC cppVar_73957;
	BIT_VEC cppVar_73959 = PC + 1;
	cppVar_73959 = (cppVar_73959 & cppMask_un_16_);
	BIT_VEC cppVar_73960 = ROM.rd(cppVar_73959);
	bool cppVar_73962 = (cppVar_73960 == 140);
	if (cppVar_73962) {
	BIT_VEC cppVar_73963;
	BIT_VEC cppVar_73964 = PC + 1;
	cppVar_73964 = (cppVar_73964 & cppMask_un_16_);
	BIT_VEC cppVar_73965 = ROM.rd(cppVar_73964);
	BIT_VEC cppVar_73966 = (cppVar_73965 >> 7) & cppMask_un_1_;
	bool cppVar_73968 = (cppVar_73966 == 0);
	if (cppVar_73968) {
	BIT_VEC cppVar_73969 = PC + 1;
	cppVar_73969 = (cppVar_73969 & cppMask_un_16_);
	BIT_VEC cppVar_73970 = ROM.rd(cppVar_73969);
	BIT_VEC cppVar_73971 = IRAM.rd(cppVar_73970);
	cppVar_73963 = cppVar_73971;
	} else {
	BIT_VEC cppVar_73972;
	BIT_VEC cppVar_73973 = PC + 1;
	cppVar_73973 = (cppVar_73973 & cppMask_un_16_);
	BIT_VEC cppVar_73974 = ROM.rd(cppVar_73973);
	bool cppVar_73976 = (cppVar_73974 == 128);
	if (cppVar_73976) {
	cppVar_73972 = P0;
	} else {
	BIT_VEC cppVar_73977;
	BIT_VEC cppVar_73978 = PC + 1;
	cppVar_73978 = (cppVar_73978 & cppMask_un_16_);
	BIT_VEC cppVar_73979 = ROM.rd(cppVar_73978);
	bool cppVar_73981 = (cppVar_73979 == 129);
	if (cppVar_73981) {
	cppVar_73977 = SP;
	} else {
	BIT_VEC cppVar_73982;
	BIT_VEC cppVar_73983 = PC + 1;
	cppVar_73983 = (cppVar_73983 & cppMask_un_16_);
	BIT_VEC cppVar_73984 = ROM.rd(cppVar_73983);
	bool cppVar_73986 = (cppVar_73984 == 130);
	if (cppVar_73986) {
	cppVar_73982 = DPL;
	} else {
	BIT_VEC cppVar_73987;
	BIT_VEC cppVar_73988 = PC + 1;
	cppVar_73988 = (cppVar_73988 & cppMask_un_16_);
	BIT_VEC cppVar_73989 = ROM.rd(cppVar_73988);
	bool cppVar_73991 = (cppVar_73989 == 131);
	if (cppVar_73991) {
	cppVar_73987 = DPH;
	} else {
	BIT_VEC cppVar_73992;
	BIT_VEC cppVar_73993 = PC + 1;
	cppVar_73993 = (cppVar_73993 & cppMask_un_16_);
	BIT_VEC cppVar_73994 = ROM.rd(cppVar_73993);
	bool cppVar_73996 = (cppVar_73994 == 135);
	if (cppVar_73996) {
	cppVar_73992 = PCON;
	} else {
	BIT_VEC cppVar_73997;
	BIT_VEC cppVar_73998 = PC + 1;
	cppVar_73998 = (cppVar_73998 & cppMask_un_16_);
	BIT_VEC cppVar_73999 = ROM.rd(cppVar_73998);
	bool cppVar_74001 = (cppVar_73999 == 136);
	if (cppVar_74001) {
	cppVar_73997 = TCON;
	} else {
	BIT_VEC cppVar_74002;
	BIT_VEC cppVar_74003 = PC + 1;
	cppVar_74003 = (cppVar_74003 & cppMask_un_16_);
	BIT_VEC cppVar_74004 = ROM.rd(cppVar_74003);
	bool cppVar_74006 = (cppVar_74004 == 137);
	if (cppVar_74006) {
	cppVar_74002 = TMOD;
	} else {
	BIT_VEC cppVar_74007;
	BIT_VEC cppVar_74008 = PC + 1;
	cppVar_74008 = (cppVar_74008 & cppMask_un_16_);
	BIT_VEC cppVar_74009 = ROM.rd(cppVar_74008);
	bool cppVar_74011 = (cppVar_74009 == 138);
	if (cppVar_74011) {
	cppVar_74007 = TL0;
	} else {
	BIT_VEC cppVar_74012;
	BIT_VEC cppVar_74013 = PC + 1;
	cppVar_74013 = (cppVar_74013 & cppMask_un_16_);
	BIT_VEC cppVar_74014 = ROM.rd(cppVar_74013);
	bool cppVar_74016 = (cppVar_74014 == 140);
	if (cppVar_74016) {
	cppVar_74012 = TH0;
	} else {
	BIT_VEC cppVar_74017;
	BIT_VEC cppVar_74018 = PC + 1;
	cppVar_74018 = (cppVar_74018 & cppMask_un_16_);
	BIT_VEC cppVar_74019 = ROM.rd(cppVar_74018);
	bool cppVar_74021 = (cppVar_74019 == 139);
	if (cppVar_74021) {
	cppVar_74017 = TL1;
	} else {
	BIT_VEC cppVar_74022;
	BIT_VEC cppVar_74023 = PC + 1;
	cppVar_74023 = (cppVar_74023 & cppMask_un_16_);
	BIT_VEC cppVar_74024 = ROM.rd(cppVar_74023);
	bool cppVar_74026 = (cppVar_74024 == 141);
	if (cppVar_74026) {
	cppVar_74022 = TH1;
	} else {
	BIT_VEC cppVar_74027;
	BIT_VEC cppVar_74028 = PC + 1;
	cppVar_74028 = (cppVar_74028 & cppMask_un_16_);
	BIT_VEC cppVar_74029 = ROM.rd(cppVar_74028);
	bool cppVar_74031 = (cppVar_74029 == 144);
	if (cppVar_74031) {
	cppVar_74027 = P1;
	} else {
	BIT_VEC cppVar_74032;
	BIT_VEC cppVar_74033 = PC + 1;
	cppVar_74033 = (cppVar_74033 & cppMask_un_16_);
	BIT_VEC cppVar_74034 = ROM.rd(cppVar_74033);
	bool cppVar_74036 = (cppVar_74034 == 152);
	if (cppVar_74036) {
	cppVar_74032 = SCON;
	} else {
	BIT_VEC cppVar_74037;
	BIT_VEC cppVar_74038 = PC + 1;
	cppVar_74038 = (cppVar_74038 & cppMask_un_16_);
	BIT_VEC cppVar_74039 = ROM.rd(cppVar_74038);
	bool cppVar_74041 = (cppVar_74039 == 153);
	if (cppVar_74041) {
	cppVar_74037 = SBUF;
	} else {
	BIT_VEC cppVar_74042;
	BIT_VEC cppVar_74043 = PC + 1;
	cppVar_74043 = (cppVar_74043 & cppMask_un_16_);
	BIT_VEC cppVar_74044 = ROM.rd(cppVar_74043);
	bool cppVar_74046 = (cppVar_74044 == 160);
	if (cppVar_74046) {
	cppVar_74042 = P2;
	} else {
	BIT_VEC cppVar_74047;
	BIT_VEC cppVar_74048 = PC + 1;
	cppVar_74048 = (cppVar_74048 & cppMask_un_16_);
	BIT_VEC cppVar_74049 = ROM.rd(cppVar_74048);
	bool cppVar_74051 = (cppVar_74049 == 168);
	if (cppVar_74051) {
	cppVar_74047 = IE;
	} else {
	BIT_VEC cppVar_74052;
	BIT_VEC cppVar_74053 = PC + 1;
	cppVar_74053 = (cppVar_74053 & cppMask_un_16_);
	BIT_VEC cppVar_74054 = ROM.rd(cppVar_74053);
	bool cppVar_74056 = (cppVar_74054 == 176);
	if (cppVar_74056) {
	cppVar_74052 = P3;
	} else {
	BIT_VEC cppVar_74057;
	BIT_VEC cppVar_74058 = PC + 1;
	cppVar_74058 = (cppVar_74058 & cppMask_un_16_);
	BIT_VEC cppVar_74059 = ROM.rd(cppVar_74058);
	bool cppVar_74061 = (cppVar_74059 == 184);
	if (cppVar_74061) {
	cppVar_74057 = IP;
	} else {
	BIT_VEC cppVar_74062;
	BIT_VEC cppVar_74063 = PC + 1;
	cppVar_74063 = (cppVar_74063 & cppMask_un_16_);
	BIT_VEC cppVar_74064 = ROM.rd(cppVar_74063);
	bool cppVar_74066 = (cppVar_74064 == 208);
	if (cppVar_74066) {
	cppVar_74062 = PSW;
	} else {
	BIT_VEC cppVar_74067;
	BIT_VEC cppVar_74068 = PC + 1;
	cppVar_74068 = (cppVar_74068 & cppMask_un_16_);
	BIT_VEC cppVar_74069 = ROM.rd(cppVar_74068);
	bool cppVar_74071 = (cppVar_74069 == 224);
	if (cppVar_74071) {
	cppVar_74067 = ACC;
	} else {
	BIT_VEC cppVar_74072;
	BIT_VEC cppVar_74073 = PC + 1;
	cppVar_74073 = (cppVar_74073 & cppMask_un_16_);
	BIT_VEC cppVar_74074 = ROM.rd(cppVar_74073);
	bool cppVar_74076 = (cppVar_74074 == 240);
	if (cppVar_74076) {
	cppVar_74072 = B;
	} else {
	cppVar_74072 = 0;
	}
	cppVar_74067 = cppVar_74072;
	}
	cppVar_74062 = cppVar_74067;
	}
	cppVar_74057 = cppVar_74062;
	}
	cppVar_74052 = cppVar_74057;
	}
	cppVar_74047 = cppVar_74052;
	}
	cppVar_74042 = cppVar_74047;
	}
	cppVar_74037 = cppVar_74042;
	}
	cppVar_74032 = cppVar_74037;
	}
	cppVar_74027 = cppVar_74032;
	}
	cppVar_74022 = cppVar_74027;
	}
	cppVar_74017 = cppVar_74022;
	}
	cppVar_74012 = cppVar_74017;
	}
	cppVar_74007 = cppVar_74012;
	}
	cppVar_74002 = cppVar_74007;
	}
	cppVar_73997 = cppVar_74002;
	}
	cppVar_73992 = cppVar_73997;
	}
	cppVar_73987 = cppVar_73992;
	}
	cppVar_73982 = cppVar_73987;
	}
	cppVar_73977 = cppVar_73982;
	}
	cppVar_73972 = cppVar_73977;
	}
	cppVar_73963 = cppVar_73972;
	}
	BIT_VEC cppVar_74078 = cppVar_73963 ^ ACC;
	cppVar_73957 = cppVar_74078;
	} else {
	cppVar_73957 = TH0;
	}
	cppVar_73953 = cppVar_73957;
	} else {
	BIT_VEC cppVar_74079;
	BIT_VEC cppVar_74080 = ROM.rd(PC);
	bool cppVar_74082 = (cppVar_74080 == 83);
	if (cppVar_74082) {
	BIT_VEC cppVar_74083;
	BIT_VEC cppVar_74085 = PC + 1;
	cppVar_74085 = (cppVar_74085 & cppMask_un_16_);
	BIT_VEC cppVar_74086 = ROM.rd(cppVar_74085);
	bool cppVar_74088 = (cppVar_74086 == 140);
	if (cppVar_74088) {
	BIT_VEC cppVar_74089;
	BIT_VEC cppVar_74090 = PC + 1;
	cppVar_74090 = (cppVar_74090 & cppMask_un_16_);
	BIT_VEC cppVar_74091 = ROM.rd(cppVar_74090);
	BIT_VEC cppVar_74092 = (cppVar_74091 >> 7) & cppMask_un_1_;
	bool cppVar_74094 = (cppVar_74092 == 0);
	if (cppVar_74094) {
	BIT_VEC cppVar_74095 = PC + 1;
	cppVar_74095 = (cppVar_74095 & cppMask_un_16_);
	BIT_VEC cppVar_74096 = ROM.rd(cppVar_74095);
	BIT_VEC cppVar_74097 = IRAM.rd(cppVar_74096);
	cppVar_74089 = cppVar_74097;
	} else {
	BIT_VEC cppVar_74098;
	BIT_VEC cppVar_74099 = PC + 1;
	cppVar_74099 = (cppVar_74099 & cppMask_un_16_);
	BIT_VEC cppVar_74100 = ROM.rd(cppVar_74099);
	bool cppVar_74102 = (cppVar_74100 == 128);
	if (cppVar_74102) {
	cppVar_74098 = P0;
	} else {
	BIT_VEC cppVar_74103;
	BIT_VEC cppVar_74104 = PC + 1;
	cppVar_74104 = (cppVar_74104 & cppMask_un_16_);
	BIT_VEC cppVar_74105 = ROM.rd(cppVar_74104);
	bool cppVar_74107 = (cppVar_74105 == 129);
	if (cppVar_74107) {
	cppVar_74103 = SP;
	} else {
	BIT_VEC cppVar_74108;
	BIT_VEC cppVar_74109 = PC + 1;
	cppVar_74109 = (cppVar_74109 & cppMask_un_16_);
	BIT_VEC cppVar_74110 = ROM.rd(cppVar_74109);
	bool cppVar_74112 = (cppVar_74110 == 130);
	if (cppVar_74112) {
	cppVar_74108 = DPL;
	} else {
	BIT_VEC cppVar_74113;
	BIT_VEC cppVar_74114 = PC + 1;
	cppVar_74114 = (cppVar_74114 & cppMask_un_16_);
	BIT_VEC cppVar_74115 = ROM.rd(cppVar_74114);
	bool cppVar_74117 = (cppVar_74115 == 131);
	if (cppVar_74117) {
	cppVar_74113 = DPH;
	} else {
	BIT_VEC cppVar_74118;
	BIT_VEC cppVar_74119 = PC + 1;
	cppVar_74119 = (cppVar_74119 & cppMask_un_16_);
	BIT_VEC cppVar_74120 = ROM.rd(cppVar_74119);
	bool cppVar_74122 = (cppVar_74120 == 135);
	if (cppVar_74122) {
	cppVar_74118 = PCON;
	} else {
	BIT_VEC cppVar_74123;
	BIT_VEC cppVar_74124 = PC + 1;
	cppVar_74124 = (cppVar_74124 & cppMask_un_16_);
	BIT_VEC cppVar_74125 = ROM.rd(cppVar_74124);
	bool cppVar_74127 = (cppVar_74125 == 136);
	if (cppVar_74127) {
	cppVar_74123 = TCON;
	} else {
	BIT_VEC cppVar_74128;
	BIT_VEC cppVar_74129 = PC + 1;
	cppVar_74129 = (cppVar_74129 & cppMask_un_16_);
	BIT_VEC cppVar_74130 = ROM.rd(cppVar_74129);
	bool cppVar_74132 = (cppVar_74130 == 137);
	if (cppVar_74132) {
	cppVar_74128 = TMOD;
	} else {
	BIT_VEC cppVar_74133;
	BIT_VEC cppVar_74134 = PC + 1;
	cppVar_74134 = (cppVar_74134 & cppMask_un_16_);
	BIT_VEC cppVar_74135 = ROM.rd(cppVar_74134);
	bool cppVar_74137 = (cppVar_74135 == 138);
	if (cppVar_74137) {
	cppVar_74133 = TL0;
	} else {
	BIT_VEC cppVar_74138;
	BIT_VEC cppVar_74139 = PC + 1;
	cppVar_74139 = (cppVar_74139 & cppMask_un_16_);
	BIT_VEC cppVar_74140 = ROM.rd(cppVar_74139);
	bool cppVar_74142 = (cppVar_74140 == 140);
	if (cppVar_74142) {
	cppVar_74138 = TH0;
	} else {
	BIT_VEC cppVar_74143;
	BIT_VEC cppVar_74144 = PC + 1;
	cppVar_74144 = (cppVar_74144 & cppMask_un_16_);
	BIT_VEC cppVar_74145 = ROM.rd(cppVar_74144);
	bool cppVar_74147 = (cppVar_74145 == 139);
	if (cppVar_74147) {
	cppVar_74143 = TL1;
	} else {
	BIT_VEC cppVar_74148;
	BIT_VEC cppVar_74149 = PC + 1;
	cppVar_74149 = (cppVar_74149 & cppMask_un_16_);
	BIT_VEC cppVar_74150 = ROM.rd(cppVar_74149);
	bool cppVar_74152 = (cppVar_74150 == 141);
	if (cppVar_74152) {
	cppVar_74148 = TH1;
	} else {
	BIT_VEC cppVar_74153;
	BIT_VEC cppVar_74154 = PC + 1;
	cppVar_74154 = (cppVar_74154 & cppMask_un_16_);
	BIT_VEC cppVar_74155 = ROM.rd(cppVar_74154);
	bool cppVar_74157 = (cppVar_74155 == 144);
	if (cppVar_74157) {
	cppVar_74153 = P1;
	} else {
	BIT_VEC cppVar_74158;
	BIT_VEC cppVar_74159 = PC + 1;
	cppVar_74159 = (cppVar_74159 & cppMask_un_16_);
	BIT_VEC cppVar_74160 = ROM.rd(cppVar_74159);
	bool cppVar_74162 = (cppVar_74160 == 152);
	if (cppVar_74162) {
	cppVar_74158 = SCON;
	} else {
	BIT_VEC cppVar_74163;
	BIT_VEC cppVar_74164 = PC + 1;
	cppVar_74164 = (cppVar_74164 & cppMask_un_16_);
	BIT_VEC cppVar_74165 = ROM.rd(cppVar_74164);
	bool cppVar_74167 = (cppVar_74165 == 153);
	if (cppVar_74167) {
	cppVar_74163 = SBUF;
	} else {
	BIT_VEC cppVar_74168;
	BIT_VEC cppVar_74169 = PC + 1;
	cppVar_74169 = (cppVar_74169 & cppMask_un_16_);
	BIT_VEC cppVar_74170 = ROM.rd(cppVar_74169);
	bool cppVar_74172 = (cppVar_74170 == 160);
	if (cppVar_74172) {
	cppVar_74168 = P2;
	} else {
	BIT_VEC cppVar_74173;
	BIT_VEC cppVar_74174 = PC + 1;
	cppVar_74174 = (cppVar_74174 & cppMask_un_16_);
	BIT_VEC cppVar_74175 = ROM.rd(cppVar_74174);
	bool cppVar_74177 = (cppVar_74175 == 168);
	if (cppVar_74177) {
	cppVar_74173 = IE;
	} else {
	BIT_VEC cppVar_74178;
	BIT_VEC cppVar_74179 = PC + 1;
	cppVar_74179 = (cppVar_74179 & cppMask_un_16_);
	BIT_VEC cppVar_74180 = ROM.rd(cppVar_74179);
	bool cppVar_74182 = (cppVar_74180 == 176);
	if (cppVar_74182) {
	cppVar_74178 = P3;
	} else {
	BIT_VEC cppVar_74183;
	BIT_VEC cppVar_74184 = PC + 1;
	cppVar_74184 = (cppVar_74184 & cppMask_un_16_);
	BIT_VEC cppVar_74185 = ROM.rd(cppVar_74184);
	bool cppVar_74187 = (cppVar_74185 == 184);
	if (cppVar_74187) {
	cppVar_74183 = IP;
	} else {
	BIT_VEC cppVar_74188;
	BIT_VEC cppVar_74189 = PC + 1;
	cppVar_74189 = (cppVar_74189 & cppMask_un_16_);
	BIT_VEC cppVar_74190 = ROM.rd(cppVar_74189);
	bool cppVar_74192 = (cppVar_74190 == 208);
	if (cppVar_74192) {
	cppVar_74188 = PSW;
	} else {
	BIT_VEC cppVar_74193;
	BIT_VEC cppVar_74194 = PC + 1;
	cppVar_74194 = (cppVar_74194 & cppMask_un_16_);
	BIT_VEC cppVar_74195 = ROM.rd(cppVar_74194);
	bool cppVar_74197 = (cppVar_74195 == 224);
	if (cppVar_74197) {
	cppVar_74193 = ACC;
	} else {
	BIT_VEC cppVar_74198;
	BIT_VEC cppVar_74199 = PC + 1;
	cppVar_74199 = (cppVar_74199 & cppMask_un_16_);
	BIT_VEC cppVar_74200 = ROM.rd(cppVar_74199);
	bool cppVar_74202 = (cppVar_74200 == 240);
	if (cppVar_74202) {
	cppVar_74198 = B;
	} else {
	cppVar_74198 = 0;
	}
	cppVar_74193 = cppVar_74198;
	}
	cppVar_74188 = cppVar_74193;
	}
	cppVar_74183 = cppVar_74188;
	}
	cppVar_74178 = cppVar_74183;
	}
	cppVar_74173 = cppVar_74178;
	}
	cppVar_74168 = cppVar_74173;
	}
	cppVar_74163 = cppVar_74168;
	}
	cppVar_74158 = cppVar_74163;
	}
	cppVar_74153 = cppVar_74158;
	}
	cppVar_74148 = cppVar_74153;
	}
	cppVar_74143 = cppVar_74148;
	}
	cppVar_74138 = cppVar_74143;
	}
	cppVar_74133 = cppVar_74138;
	}
	cppVar_74128 = cppVar_74133;
	}
	cppVar_74123 = cppVar_74128;
	}
	cppVar_74118 = cppVar_74123;
	}
	cppVar_74113 = cppVar_74118;
	}
	cppVar_74108 = cppVar_74113;
	}
	cppVar_74103 = cppVar_74108;
	}
	cppVar_74098 = cppVar_74103;
	}
	cppVar_74089 = cppVar_74098;
	}
	BIT_VEC cppVar_74205 = PC + 2;
	cppVar_74205 = (cppVar_74205 & cppMask_un_16_);
	BIT_VEC cppVar_74206 = ROM.rd(cppVar_74205);
	BIT_VEC cppVar_74207 = cppVar_74089 & cppVar_74206;
	cppVar_74083 = cppVar_74207;
	} else {
	cppVar_74083 = TH0;
	}
	cppVar_74079 = cppVar_74083;
	} else {
	BIT_VEC cppVar_74208;
	BIT_VEC cppVar_74209 = ROM.rd(PC);
	bool cppVar_74211 = (cppVar_74209 == 82);
	if (cppVar_74211) {
	BIT_VEC cppVar_74212;
	BIT_VEC cppVar_74214 = PC + 1;
	cppVar_74214 = (cppVar_74214 & cppMask_un_16_);
	BIT_VEC cppVar_74215 = ROM.rd(cppVar_74214);
	bool cppVar_74217 = (cppVar_74215 == 140);
	if (cppVar_74217) {
	BIT_VEC cppVar_74218;
	BIT_VEC cppVar_74219 = PC + 1;
	cppVar_74219 = (cppVar_74219 & cppMask_un_16_);
	BIT_VEC cppVar_74220 = ROM.rd(cppVar_74219);
	BIT_VEC cppVar_74221 = (cppVar_74220 >> 7) & cppMask_un_1_;
	bool cppVar_74223 = (cppVar_74221 == 0);
	if (cppVar_74223) {
	BIT_VEC cppVar_74224 = PC + 1;
	cppVar_74224 = (cppVar_74224 & cppMask_un_16_);
	BIT_VEC cppVar_74225 = ROM.rd(cppVar_74224);
	BIT_VEC cppVar_74226 = IRAM.rd(cppVar_74225);
	cppVar_74218 = cppVar_74226;
	} else {
	BIT_VEC cppVar_74227;
	BIT_VEC cppVar_74228 = PC + 1;
	cppVar_74228 = (cppVar_74228 & cppMask_un_16_);
	BIT_VEC cppVar_74229 = ROM.rd(cppVar_74228);
	bool cppVar_74231 = (cppVar_74229 == 128);
	if (cppVar_74231) {
	cppVar_74227 = P0;
	} else {
	BIT_VEC cppVar_74232;
	BIT_VEC cppVar_74233 = PC + 1;
	cppVar_74233 = (cppVar_74233 & cppMask_un_16_);
	BIT_VEC cppVar_74234 = ROM.rd(cppVar_74233);
	bool cppVar_74236 = (cppVar_74234 == 129);
	if (cppVar_74236) {
	cppVar_74232 = SP;
	} else {
	BIT_VEC cppVar_74237;
	BIT_VEC cppVar_74238 = PC + 1;
	cppVar_74238 = (cppVar_74238 & cppMask_un_16_);
	BIT_VEC cppVar_74239 = ROM.rd(cppVar_74238);
	bool cppVar_74241 = (cppVar_74239 == 130);
	if (cppVar_74241) {
	cppVar_74237 = DPL;
	} else {
	BIT_VEC cppVar_74242;
	BIT_VEC cppVar_74243 = PC + 1;
	cppVar_74243 = (cppVar_74243 & cppMask_un_16_);
	BIT_VEC cppVar_74244 = ROM.rd(cppVar_74243);
	bool cppVar_74246 = (cppVar_74244 == 131);
	if (cppVar_74246) {
	cppVar_74242 = DPH;
	} else {
	BIT_VEC cppVar_74247;
	BIT_VEC cppVar_74248 = PC + 1;
	cppVar_74248 = (cppVar_74248 & cppMask_un_16_);
	BIT_VEC cppVar_74249 = ROM.rd(cppVar_74248);
	bool cppVar_74251 = (cppVar_74249 == 135);
	if (cppVar_74251) {
	cppVar_74247 = PCON;
	} else {
	BIT_VEC cppVar_74252;
	BIT_VEC cppVar_74253 = PC + 1;
	cppVar_74253 = (cppVar_74253 & cppMask_un_16_);
	BIT_VEC cppVar_74254 = ROM.rd(cppVar_74253);
	bool cppVar_74256 = (cppVar_74254 == 136);
	if (cppVar_74256) {
	cppVar_74252 = TCON;
	} else {
	BIT_VEC cppVar_74257;
	BIT_VEC cppVar_74258 = PC + 1;
	cppVar_74258 = (cppVar_74258 & cppMask_un_16_);
	BIT_VEC cppVar_74259 = ROM.rd(cppVar_74258);
	bool cppVar_74261 = (cppVar_74259 == 137);
	if (cppVar_74261) {
	cppVar_74257 = TMOD;
	} else {
	BIT_VEC cppVar_74262;
	BIT_VEC cppVar_74263 = PC + 1;
	cppVar_74263 = (cppVar_74263 & cppMask_un_16_);
	BIT_VEC cppVar_74264 = ROM.rd(cppVar_74263);
	bool cppVar_74266 = (cppVar_74264 == 138);
	if (cppVar_74266) {
	cppVar_74262 = TL0;
	} else {
	BIT_VEC cppVar_74267;
	BIT_VEC cppVar_74268 = PC + 1;
	cppVar_74268 = (cppVar_74268 & cppMask_un_16_);
	BIT_VEC cppVar_74269 = ROM.rd(cppVar_74268);
	bool cppVar_74271 = (cppVar_74269 == 140);
	if (cppVar_74271) {
	cppVar_74267 = TH0;
	} else {
	BIT_VEC cppVar_74272;
	BIT_VEC cppVar_74273 = PC + 1;
	cppVar_74273 = (cppVar_74273 & cppMask_un_16_);
	BIT_VEC cppVar_74274 = ROM.rd(cppVar_74273);
	bool cppVar_74276 = (cppVar_74274 == 139);
	if (cppVar_74276) {
	cppVar_74272 = TL1;
	} else {
	BIT_VEC cppVar_74277;
	BIT_VEC cppVar_74278 = PC + 1;
	cppVar_74278 = (cppVar_74278 & cppMask_un_16_);
	BIT_VEC cppVar_74279 = ROM.rd(cppVar_74278);
	bool cppVar_74281 = (cppVar_74279 == 141);
	if (cppVar_74281) {
	cppVar_74277 = TH1;
	} else {
	BIT_VEC cppVar_74282;
	BIT_VEC cppVar_74283 = PC + 1;
	cppVar_74283 = (cppVar_74283 & cppMask_un_16_);
	BIT_VEC cppVar_74284 = ROM.rd(cppVar_74283);
	bool cppVar_74286 = (cppVar_74284 == 144);
	if (cppVar_74286) {
	cppVar_74282 = P1;
	} else {
	BIT_VEC cppVar_74287;
	BIT_VEC cppVar_74288 = PC + 1;
	cppVar_74288 = (cppVar_74288 & cppMask_un_16_);
	BIT_VEC cppVar_74289 = ROM.rd(cppVar_74288);
	bool cppVar_74291 = (cppVar_74289 == 152);
	if (cppVar_74291) {
	cppVar_74287 = SCON;
	} else {
	BIT_VEC cppVar_74292;
	BIT_VEC cppVar_74293 = PC + 1;
	cppVar_74293 = (cppVar_74293 & cppMask_un_16_);
	BIT_VEC cppVar_74294 = ROM.rd(cppVar_74293);
	bool cppVar_74296 = (cppVar_74294 == 153);
	if (cppVar_74296) {
	cppVar_74292 = SBUF;
	} else {
	BIT_VEC cppVar_74297;
	BIT_VEC cppVar_74298 = PC + 1;
	cppVar_74298 = (cppVar_74298 & cppMask_un_16_);
	BIT_VEC cppVar_74299 = ROM.rd(cppVar_74298);
	bool cppVar_74301 = (cppVar_74299 == 160);
	if (cppVar_74301) {
	cppVar_74297 = P2;
	} else {
	BIT_VEC cppVar_74302;
	BIT_VEC cppVar_74303 = PC + 1;
	cppVar_74303 = (cppVar_74303 & cppMask_un_16_);
	BIT_VEC cppVar_74304 = ROM.rd(cppVar_74303);
	bool cppVar_74306 = (cppVar_74304 == 168);
	if (cppVar_74306) {
	cppVar_74302 = IE;
	} else {
	BIT_VEC cppVar_74307;
	BIT_VEC cppVar_74308 = PC + 1;
	cppVar_74308 = (cppVar_74308 & cppMask_un_16_);
	BIT_VEC cppVar_74309 = ROM.rd(cppVar_74308);
	bool cppVar_74311 = (cppVar_74309 == 176);
	if (cppVar_74311) {
	cppVar_74307 = P3;
	} else {
	BIT_VEC cppVar_74312;
	BIT_VEC cppVar_74313 = PC + 1;
	cppVar_74313 = (cppVar_74313 & cppMask_un_16_);
	BIT_VEC cppVar_74314 = ROM.rd(cppVar_74313);
	bool cppVar_74316 = (cppVar_74314 == 184);
	if (cppVar_74316) {
	cppVar_74312 = IP;
	} else {
	BIT_VEC cppVar_74317;
	BIT_VEC cppVar_74318 = PC + 1;
	cppVar_74318 = (cppVar_74318 & cppMask_un_16_);
	BIT_VEC cppVar_74319 = ROM.rd(cppVar_74318);
	bool cppVar_74321 = (cppVar_74319 == 208);
	if (cppVar_74321) {
	cppVar_74317 = PSW;
	} else {
	BIT_VEC cppVar_74322;
	BIT_VEC cppVar_74323 = PC + 1;
	cppVar_74323 = (cppVar_74323 & cppMask_un_16_);
	BIT_VEC cppVar_74324 = ROM.rd(cppVar_74323);
	bool cppVar_74326 = (cppVar_74324 == 224);
	if (cppVar_74326) {
	cppVar_74322 = ACC;
	} else {
	BIT_VEC cppVar_74327;
	BIT_VEC cppVar_74328 = PC + 1;
	cppVar_74328 = (cppVar_74328 & cppMask_un_16_);
	BIT_VEC cppVar_74329 = ROM.rd(cppVar_74328);
	bool cppVar_74331 = (cppVar_74329 == 240);
	if (cppVar_74331) {
	cppVar_74327 = B;
	} else {
	cppVar_74327 = 0;
	}
	cppVar_74322 = cppVar_74327;
	}
	cppVar_74317 = cppVar_74322;
	}
	cppVar_74312 = cppVar_74317;
	}
	cppVar_74307 = cppVar_74312;
	}
	cppVar_74302 = cppVar_74307;
	}
	cppVar_74297 = cppVar_74302;
	}
	cppVar_74292 = cppVar_74297;
	}
	cppVar_74287 = cppVar_74292;
	}
	cppVar_74282 = cppVar_74287;
	}
	cppVar_74277 = cppVar_74282;
	}
	cppVar_74272 = cppVar_74277;
	}
	cppVar_74267 = cppVar_74272;
	}
	cppVar_74262 = cppVar_74267;
	}
	cppVar_74257 = cppVar_74262;
	}
	cppVar_74252 = cppVar_74257;
	}
	cppVar_74247 = cppVar_74252;
	}
	cppVar_74242 = cppVar_74247;
	}
	cppVar_74237 = cppVar_74242;
	}
	cppVar_74232 = cppVar_74237;
	}
	cppVar_74227 = cppVar_74232;
	}
	cppVar_74218 = cppVar_74227;
	}
	BIT_VEC cppVar_74333 = cppVar_74218 & ACC;
	cppVar_74212 = cppVar_74333;
	} else {
	cppVar_74212 = TH0;
	}
	cppVar_74208 = cppVar_74212;
	} else {
	BIT_VEC cppVar_74334;
	BIT_VEC cppVar_74335 = ROM.rd(PC);
	bool cppVar_74337 = (cppVar_74335 == 67);
	if (cppVar_74337) {
	BIT_VEC cppVar_74338;
	BIT_VEC cppVar_74340 = PC + 1;
	cppVar_74340 = (cppVar_74340 & cppMask_un_16_);
	BIT_VEC cppVar_74341 = ROM.rd(cppVar_74340);
	bool cppVar_74343 = (cppVar_74341 == 140);
	if (cppVar_74343) {
	BIT_VEC cppVar_74344;
	BIT_VEC cppVar_74345 = PC + 1;
	cppVar_74345 = (cppVar_74345 & cppMask_un_16_);
	BIT_VEC cppVar_74346 = ROM.rd(cppVar_74345);
	BIT_VEC cppVar_74347 = (cppVar_74346 >> 7) & cppMask_un_1_;
	bool cppVar_74349 = (cppVar_74347 == 0);
	if (cppVar_74349) {
	BIT_VEC cppVar_74350 = PC + 1;
	cppVar_74350 = (cppVar_74350 & cppMask_un_16_);
	BIT_VEC cppVar_74351 = ROM.rd(cppVar_74350);
	BIT_VEC cppVar_74352 = IRAM.rd(cppVar_74351);
	cppVar_74344 = cppVar_74352;
	} else {
	BIT_VEC cppVar_74353;
	BIT_VEC cppVar_74354 = PC + 1;
	cppVar_74354 = (cppVar_74354 & cppMask_un_16_);
	BIT_VEC cppVar_74355 = ROM.rd(cppVar_74354);
	bool cppVar_74357 = (cppVar_74355 == 128);
	if (cppVar_74357) {
	cppVar_74353 = P0;
	} else {
	BIT_VEC cppVar_74358;
	BIT_VEC cppVar_74359 = PC + 1;
	cppVar_74359 = (cppVar_74359 & cppMask_un_16_);
	BIT_VEC cppVar_74360 = ROM.rd(cppVar_74359);
	bool cppVar_74362 = (cppVar_74360 == 129);
	if (cppVar_74362) {
	cppVar_74358 = SP;
	} else {
	BIT_VEC cppVar_74363;
	BIT_VEC cppVar_74364 = PC + 1;
	cppVar_74364 = (cppVar_74364 & cppMask_un_16_);
	BIT_VEC cppVar_74365 = ROM.rd(cppVar_74364);
	bool cppVar_74367 = (cppVar_74365 == 130);
	if (cppVar_74367) {
	cppVar_74363 = DPL;
	} else {
	BIT_VEC cppVar_74368;
	BIT_VEC cppVar_74369 = PC + 1;
	cppVar_74369 = (cppVar_74369 & cppMask_un_16_);
	BIT_VEC cppVar_74370 = ROM.rd(cppVar_74369);
	bool cppVar_74372 = (cppVar_74370 == 131);
	if (cppVar_74372) {
	cppVar_74368 = DPH;
	} else {
	BIT_VEC cppVar_74373;
	BIT_VEC cppVar_74374 = PC + 1;
	cppVar_74374 = (cppVar_74374 & cppMask_un_16_);
	BIT_VEC cppVar_74375 = ROM.rd(cppVar_74374);
	bool cppVar_74377 = (cppVar_74375 == 135);
	if (cppVar_74377) {
	cppVar_74373 = PCON;
	} else {
	BIT_VEC cppVar_74378;
	BIT_VEC cppVar_74379 = PC + 1;
	cppVar_74379 = (cppVar_74379 & cppMask_un_16_);
	BIT_VEC cppVar_74380 = ROM.rd(cppVar_74379);
	bool cppVar_74382 = (cppVar_74380 == 136);
	if (cppVar_74382) {
	cppVar_74378 = TCON;
	} else {
	BIT_VEC cppVar_74383;
	BIT_VEC cppVar_74384 = PC + 1;
	cppVar_74384 = (cppVar_74384 & cppMask_un_16_);
	BIT_VEC cppVar_74385 = ROM.rd(cppVar_74384);
	bool cppVar_74387 = (cppVar_74385 == 137);
	if (cppVar_74387) {
	cppVar_74383 = TMOD;
	} else {
	BIT_VEC cppVar_74388;
	BIT_VEC cppVar_74389 = PC + 1;
	cppVar_74389 = (cppVar_74389 & cppMask_un_16_);
	BIT_VEC cppVar_74390 = ROM.rd(cppVar_74389);
	bool cppVar_74392 = (cppVar_74390 == 138);
	if (cppVar_74392) {
	cppVar_74388 = TL0;
	} else {
	BIT_VEC cppVar_74393;
	BIT_VEC cppVar_74394 = PC + 1;
	cppVar_74394 = (cppVar_74394 & cppMask_un_16_);
	BIT_VEC cppVar_74395 = ROM.rd(cppVar_74394);
	bool cppVar_74397 = (cppVar_74395 == 140);
	if (cppVar_74397) {
	cppVar_74393 = TH0;
	} else {
	BIT_VEC cppVar_74398;
	BIT_VEC cppVar_74399 = PC + 1;
	cppVar_74399 = (cppVar_74399 & cppMask_un_16_);
	BIT_VEC cppVar_74400 = ROM.rd(cppVar_74399);
	bool cppVar_74402 = (cppVar_74400 == 139);
	if (cppVar_74402) {
	cppVar_74398 = TL1;
	} else {
	BIT_VEC cppVar_74403;
	BIT_VEC cppVar_74404 = PC + 1;
	cppVar_74404 = (cppVar_74404 & cppMask_un_16_);
	BIT_VEC cppVar_74405 = ROM.rd(cppVar_74404);
	bool cppVar_74407 = (cppVar_74405 == 141);
	if (cppVar_74407) {
	cppVar_74403 = TH1;
	} else {
	BIT_VEC cppVar_74408;
	BIT_VEC cppVar_74409 = PC + 1;
	cppVar_74409 = (cppVar_74409 & cppMask_un_16_);
	BIT_VEC cppVar_74410 = ROM.rd(cppVar_74409);
	bool cppVar_74412 = (cppVar_74410 == 144);
	if (cppVar_74412) {
	cppVar_74408 = P1;
	} else {
	BIT_VEC cppVar_74413;
	BIT_VEC cppVar_74414 = PC + 1;
	cppVar_74414 = (cppVar_74414 & cppMask_un_16_);
	BIT_VEC cppVar_74415 = ROM.rd(cppVar_74414);
	bool cppVar_74417 = (cppVar_74415 == 152);
	if (cppVar_74417) {
	cppVar_74413 = SCON;
	} else {
	BIT_VEC cppVar_74418;
	BIT_VEC cppVar_74419 = PC + 1;
	cppVar_74419 = (cppVar_74419 & cppMask_un_16_);
	BIT_VEC cppVar_74420 = ROM.rd(cppVar_74419);
	bool cppVar_74422 = (cppVar_74420 == 153);
	if (cppVar_74422) {
	cppVar_74418 = SBUF;
	} else {
	BIT_VEC cppVar_74423;
	BIT_VEC cppVar_74424 = PC + 1;
	cppVar_74424 = (cppVar_74424 & cppMask_un_16_);
	BIT_VEC cppVar_74425 = ROM.rd(cppVar_74424);
	bool cppVar_74427 = (cppVar_74425 == 160);
	if (cppVar_74427) {
	cppVar_74423 = P2;
	} else {
	BIT_VEC cppVar_74428;
	BIT_VEC cppVar_74429 = PC + 1;
	cppVar_74429 = (cppVar_74429 & cppMask_un_16_);
	BIT_VEC cppVar_74430 = ROM.rd(cppVar_74429);
	bool cppVar_74432 = (cppVar_74430 == 168);
	if (cppVar_74432) {
	cppVar_74428 = IE;
	} else {
	BIT_VEC cppVar_74433;
	BIT_VEC cppVar_74434 = PC + 1;
	cppVar_74434 = (cppVar_74434 & cppMask_un_16_);
	BIT_VEC cppVar_74435 = ROM.rd(cppVar_74434);
	bool cppVar_74437 = (cppVar_74435 == 176);
	if (cppVar_74437) {
	cppVar_74433 = P3;
	} else {
	BIT_VEC cppVar_74438;
	BIT_VEC cppVar_74439 = PC + 1;
	cppVar_74439 = (cppVar_74439 & cppMask_un_16_);
	BIT_VEC cppVar_74440 = ROM.rd(cppVar_74439);
	bool cppVar_74442 = (cppVar_74440 == 184);
	if (cppVar_74442) {
	cppVar_74438 = IP;
	} else {
	BIT_VEC cppVar_74443;
	BIT_VEC cppVar_74444 = PC + 1;
	cppVar_74444 = (cppVar_74444 & cppMask_un_16_);
	BIT_VEC cppVar_74445 = ROM.rd(cppVar_74444);
	bool cppVar_74447 = (cppVar_74445 == 208);
	if (cppVar_74447) {
	cppVar_74443 = PSW;
	} else {
	BIT_VEC cppVar_74448;
	BIT_VEC cppVar_74449 = PC + 1;
	cppVar_74449 = (cppVar_74449 & cppMask_un_16_);
	BIT_VEC cppVar_74450 = ROM.rd(cppVar_74449);
	bool cppVar_74452 = (cppVar_74450 == 224);
	if (cppVar_74452) {
	cppVar_74448 = ACC;
	} else {
	BIT_VEC cppVar_74453;
	BIT_VEC cppVar_74454 = PC + 1;
	cppVar_74454 = (cppVar_74454 & cppMask_un_16_);
	BIT_VEC cppVar_74455 = ROM.rd(cppVar_74454);
	bool cppVar_74457 = (cppVar_74455 == 240);
	if (cppVar_74457) {
	cppVar_74453 = B;
	} else {
	cppVar_74453 = 0;
	}
	cppVar_74448 = cppVar_74453;
	}
	cppVar_74443 = cppVar_74448;
	}
	cppVar_74438 = cppVar_74443;
	}
	cppVar_74433 = cppVar_74438;
	}
	cppVar_74428 = cppVar_74433;
	}
	cppVar_74423 = cppVar_74428;
	}
	cppVar_74418 = cppVar_74423;
	}
	cppVar_74413 = cppVar_74418;
	}
	cppVar_74408 = cppVar_74413;
	}
	cppVar_74403 = cppVar_74408;
	}
	cppVar_74398 = cppVar_74403;
	}
	cppVar_74393 = cppVar_74398;
	}
	cppVar_74388 = cppVar_74393;
	}
	cppVar_74383 = cppVar_74388;
	}
	cppVar_74378 = cppVar_74383;
	}
	cppVar_74373 = cppVar_74378;
	}
	cppVar_74368 = cppVar_74373;
	}
	cppVar_74363 = cppVar_74368;
	}
	cppVar_74358 = cppVar_74363;
	}
	cppVar_74353 = cppVar_74358;
	}
	cppVar_74344 = cppVar_74353;
	}
	BIT_VEC cppVar_74460 = PC + 2;
	cppVar_74460 = (cppVar_74460 & cppMask_un_16_);
	BIT_VEC cppVar_74461 = ROM.rd(cppVar_74460);
	BIT_VEC cppVar_74462 = cppVar_74344 | cppVar_74461;
	cppVar_74338 = cppVar_74462;
	} else {
	cppVar_74338 = TH0;
	}
	cppVar_74334 = cppVar_74338;
	} else {
	BIT_VEC cppVar_74463;
	BIT_VEC cppVar_74464 = ROM.rd(PC);
	bool cppVar_74466 = (cppVar_74464 == 66);
	if (cppVar_74466) {
	BIT_VEC cppVar_74467;
	BIT_VEC cppVar_74469 = PC + 1;
	cppVar_74469 = (cppVar_74469 & cppMask_un_16_);
	BIT_VEC cppVar_74470 = ROM.rd(cppVar_74469);
	bool cppVar_74472 = (cppVar_74470 == 140);
	if (cppVar_74472) {
	BIT_VEC cppVar_74473;
	BIT_VEC cppVar_74474 = PC + 1;
	cppVar_74474 = (cppVar_74474 & cppMask_un_16_);
	BIT_VEC cppVar_74475 = ROM.rd(cppVar_74474);
	BIT_VEC cppVar_74476 = (cppVar_74475 >> 7) & cppMask_un_1_;
	bool cppVar_74478 = (cppVar_74476 == 0);
	if (cppVar_74478) {
	BIT_VEC cppVar_74479 = PC + 1;
	cppVar_74479 = (cppVar_74479 & cppMask_un_16_);
	BIT_VEC cppVar_74480 = ROM.rd(cppVar_74479);
	BIT_VEC cppVar_74481 = IRAM.rd(cppVar_74480);
	cppVar_74473 = cppVar_74481;
	} else {
	BIT_VEC cppVar_74482;
	BIT_VEC cppVar_74483 = PC + 1;
	cppVar_74483 = (cppVar_74483 & cppMask_un_16_);
	BIT_VEC cppVar_74484 = ROM.rd(cppVar_74483);
	bool cppVar_74486 = (cppVar_74484 == 128);
	if (cppVar_74486) {
	cppVar_74482 = P0;
	} else {
	BIT_VEC cppVar_74487;
	BIT_VEC cppVar_74488 = PC + 1;
	cppVar_74488 = (cppVar_74488 & cppMask_un_16_);
	BIT_VEC cppVar_74489 = ROM.rd(cppVar_74488);
	bool cppVar_74491 = (cppVar_74489 == 129);
	if (cppVar_74491) {
	cppVar_74487 = SP;
	} else {
	BIT_VEC cppVar_74492;
	BIT_VEC cppVar_74493 = PC + 1;
	cppVar_74493 = (cppVar_74493 & cppMask_un_16_);
	BIT_VEC cppVar_74494 = ROM.rd(cppVar_74493);
	bool cppVar_74496 = (cppVar_74494 == 130);
	if (cppVar_74496) {
	cppVar_74492 = DPL;
	} else {
	BIT_VEC cppVar_74497;
	BIT_VEC cppVar_74498 = PC + 1;
	cppVar_74498 = (cppVar_74498 & cppMask_un_16_);
	BIT_VEC cppVar_74499 = ROM.rd(cppVar_74498);
	bool cppVar_74501 = (cppVar_74499 == 131);
	if (cppVar_74501) {
	cppVar_74497 = DPH;
	} else {
	BIT_VEC cppVar_74502;
	BIT_VEC cppVar_74503 = PC + 1;
	cppVar_74503 = (cppVar_74503 & cppMask_un_16_);
	BIT_VEC cppVar_74504 = ROM.rd(cppVar_74503);
	bool cppVar_74506 = (cppVar_74504 == 135);
	if (cppVar_74506) {
	cppVar_74502 = PCON;
	} else {
	BIT_VEC cppVar_74507;
	BIT_VEC cppVar_74508 = PC + 1;
	cppVar_74508 = (cppVar_74508 & cppMask_un_16_);
	BIT_VEC cppVar_74509 = ROM.rd(cppVar_74508);
	bool cppVar_74511 = (cppVar_74509 == 136);
	if (cppVar_74511) {
	cppVar_74507 = TCON;
	} else {
	BIT_VEC cppVar_74512;
	BIT_VEC cppVar_74513 = PC + 1;
	cppVar_74513 = (cppVar_74513 & cppMask_un_16_);
	BIT_VEC cppVar_74514 = ROM.rd(cppVar_74513);
	bool cppVar_74516 = (cppVar_74514 == 137);
	if (cppVar_74516) {
	cppVar_74512 = TMOD;
	} else {
	BIT_VEC cppVar_74517;
	BIT_VEC cppVar_74518 = PC + 1;
	cppVar_74518 = (cppVar_74518 & cppMask_un_16_);
	BIT_VEC cppVar_74519 = ROM.rd(cppVar_74518);
	bool cppVar_74521 = (cppVar_74519 == 138);
	if (cppVar_74521) {
	cppVar_74517 = TL0;
	} else {
	BIT_VEC cppVar_74522;
	BIT_VEC cppVar_74523 = PC + 1;
	cppVar_74523 = (cppVar_74523 & cppMask_un_16_);
	BIT_VEC cppVar_74524 = ROM.rd(cppVar_74523);
	bool cppVar_74526 = (cppVar_74524 == 140);
	if (cppVar_74526) {
	cppVar_74522 = TH0;
	} else {
	BIT_VEC cppVar_74527;
	BIT_VEC cppVar_74528 = PC + 1;
	cppVar_74528 = (cppVar_74528 & cppMask_un_16_);
	BIT_VEC cppVar_74529 = ROM.rd(cppVar_74528);
	bool cppVar_74531 = (cppVar_74529 == 139);
	if (cppVar_74531) {
	cppVar_74527 = TL1;
	} else {
	BIT_VEC cppVar_74532;
	BIT_VEC cppVar_74533 = PC + 1;
	cppVar_74533 = (cppVar_74533 & cppMask_un_16_);
	BIT_VEC cppVar_74534 = ROM.rd(cppVar_74533);
	bool cppVar_74536 = (cppVar_74534 == 141);
	if (cppVar_74536) {
	cppVar_74532 = TH1;
	} else {
	BIT_VEC cppVar_74537;
	BIT_VEC cppVar_74538 = PC + 1;
	cppVar_74538 = (cppVar_74538 & cppMask_un_16_);
	BIT_VEC cppVar_74539 = ROM.rd(cppVar_74538);
	bool cppVar_74541 = (cppVar_74539 == 144);
	if (cppVar_74541) {
	cppVar_74537 = P1;
	} else {
	BIT_VEC cppVar_74542;
	BIT_VEC cppVar_74543 = PC + 1;
	cppVar_74543 = (cppVar_74543 & cppMask_un_16_);
	BIT_VEC cppVar_74544 = ROM.rd(cppVar_74543);
	bool cppVar_74546 = (cppVar_74544 == 152);
	if (cppVar_74546) {
	cppVar_74542 = SCON;
	} else {
	BIT_VEC cppVar_74547;
	BIT_VEC cppVar_74548 = PC + 1;
	cppVar_74548 = (cppVar_74548 & cppMask_un_16_);
	BIT_VEC cppVar_74549 = ROM.rd(cppVar_74548);
	bool cppVar_74551 = (cppVar_74549 == 153);
	if (cppVar_74551) {
	cppVar_74547 = SBUF;
	} else {
	BIT_VEC cppVar_74552;
	BIT_VEC cppVar_74553 = PC + 1;
	cppVar_74553 = (cppVar_74553 & cppMask_un_16_);
	BIT_VEC cppVar_74554 = ROM.rd(cppVar_74553);
	bool cppVar_74556 = (cppVar_74554 == 160);
	if (cppVar_74556) {
	cppVar_74552 = P2;
	} else {
	BIT_VEC cppVar_74557;
	BIT_VEC cppVar_74558 = PC + 1;
	cppVar_74558 = (cppVar_74558 & cppMask_un_16_);
	BIT_VEC cppVar_74559 = ROM.rd(cppVar_74558);
	bool cppVar_74561 = (cppVar_74559 == 168);
	if (cppVar_74561) {
	cppVar_74557 = IE;
	} else {
	BIT_VEC cppVar_74562;
	BIT_VEC cppVar_74563 = PC + 1;
	cppVar_74563 = (cppVar_74563 & cppMask_un_16_);
	BIT_VEC cppVar_74564 = ROM.rd(cppVar_74563);
	bool cppVar_74566 = (cppVar_74564 == 176);
	if (cppVar_74566) {
	cppVar_74562 = P3;
	} else {
	BIT_VEC cppVar_74567;
	BIT_VEC cppVar_74568 = PC + 1;
	cppVar_74568 = (cppVar_74568 & cppMask_un_16_);
	BIT_VEC cppVar_74569 = ROM.rd(cppVar_74568);
	bool cppVar_74571 = (cppVar_74569 == 184);
	if (cppVar_74571) {
	cppVar_74567 = IP;
	} else {
	BIT_VEC cppVar_74572;
	BIT_VEC cppVar_74573 = PC + 1;
	cppVar_74573 = (cppVar_74573 & cppMask_un_16_);
	BIT_VEC cppVar_74574 = ROM.rd(cppVar_74573);
	bool cppVar_74576 = (cppVar_74574 == 208);
	if (cppVar_74576) {
	cppVar_74572 = PSW;
	} else {
	BIT_VEC cppVar_74577;
	BIT_VEC cppVar_74578 = PC + 1;
	cppVar_74578 = (cppVar_74578 & cppMask_un_16_);
	BIT_VEC cppVar_74579 = ROM.rd(cppVar_74578);
	bool cppVar_74581 = (cppVar_74579 == 224);
	if (cppVar_74581) {
	cppVar_74577 = ACC;
	} else {
	BIT_VEC cppVar_74582;
	BIT_VEC cppVar_74583 = PC + 1;
	cppVar_74583 = (cppVar_74583 & cppMask_un_16_);
	BIT_VEC cppVar_74584 = ROM.rd(cppVar_74583);
	bool cppVar_74586 = (cppVar_74584 == 240);
	if (cppVar_74586) {
	cppVar_74582 = B;
	} else {
	cppVar_74582 = 0;
	}
	cppVar_74577 = cppVar_74582;
	}
	cppVar_74572 = cppVar_74577;
	}
	cppVar_74567 = cppVar_74572;
	}
	cppVar_74562 = cppVar_74567;
	}
	cppVar_74557 = cppVar_74562;
	}
	cppVar_74552 = cppVar_74557;
	}
	cppVar_74547 = cppVar_74552;
	}
	cppVar_74542 = cppVar_74547;
	}
	cppVar_74537 = cppVar_74542;
	}
	cppVar_74532 = cppVar_74537;
	}
	cppVar_74527 = cppVar_74532;
	}
	cppVar_74522 = cppVar_74527;
	}
	cppVar_74517 = cppVar_74522;
	}
	cppVar_74512 = cppVar_74517;
	}
	cppVar_74507 = cppVar_74512;
	}
	cppVar_74502 = cppVar_74507;
	}
	cppVar_74497 = cppVar_74502;
	}
	cppVar_74492 = cppVar_74497;
	}
	cppVar_74487 = cppVar_74492;
	}
	cppVar_74482 = cppVar_74487;
	}
	cppVar_74473 = cppVar_74482;
	}
	BIT_VEC cppVar_74588 = cppVar_74473 | ACC;
	cppVar_74467 = cppVar_74588;
	} else {
	cppVar_74467 = TH0;
	}
	cppVar_74463 = cppVar_74467;
	} else {
	BIT_VEC cppVar_74589;
	BIT_VEC cppVar_74590 = ROM.rd(PC);
	bool cppVar_74592 = (cppVar_74590 == 213);
	BIT_VEC cppVar_74593 = ROM.rd(PC);
	bool cppVar_74595 = (cppVar_74593 == 21);
	bool cppVar_74596 = cppVar_74592 || cppVar_74595;
	if (cppVar_74596) {
	BIT_VEC cppVar_74597;
	BIT_VEC cppVar_74599 = PC + 1;
	cppVar_74599 = (cppVar_74599 & cppMask_un_16_);
	BIT_VEC cppVar_74600 = ROM.rd(cppVar_74599);
	bool cppVar_74602 = (cppVar_74600 == 140);
	if (cppVar_74602) {
	BIT_VEC cppVar_74603;
	BIT_VEC cppVar_74604 = PC + 1;
	cppVar_74604 = (cppVar_74604 & cppMask_un_16_);
	BIT_VEC cppVar_74605 = ROM.rd(cppVar_74604);
	BIT_VEC cppVar_74606 = (cppVar_74605 >> 7) & cppMask_un_1_;
	bool cppVar_74608 = (cppVar_74606 == 0);
	if (cppVar_74608) {
	BIT_VEC cppVar_74609 = PC + 1;
	cppVar_74609 = (cppVar_74609 & cppMask_un_16_);
	BIT_VEC cppVar_74610 = ROM.rd(cppVar_74609);
	BIT_VEC cppVar_74611 = IRAM.rd(cppVar_74610);
	cppVar_74603 = cppVar_74611;
	} else {
	BIT_VEC cppVar_74612;
	BIT_VEC cppVar_74613 = PC + 1;
	cppVar_74613 = (cppVar_74613 & cppMask_un_16_);
	BIT_VEC cppVar_74614 = ROM.rd(cppVar_74613);
	bool cppVar_74616 = (cppVar_74614 == 128);
	if (cppVar_74616) {
	cppVar_74612 = P0;
	} else {
	BIT_VEC cppVar_74617;
	BIT_VEC cppVar_74618 = PC + 1;
	cppVar_74618 = (cppVar_74618 & cppMask_un_16_);
	BIT_VEC cppVar_74619 = ROM.rd(cppVar_74618);
	bool cppVar_74621 = (cppVar_74619 == 129);
	if (cppVar_74621) {
	cppVar_74617 = SP;
	} else {
	BIT_VEC cppVar_74622;
	BIT_VEC cppVar_74623 = PC + 1;
	cppVar_74623 = (cppVar_74623 & cppMask_un_16_);
	BIT_VEC cppVar_74624 = ROM.rd(cppVar_74623);
	bool cppVar_74626 = (cppVar_74624 == 130);
	if (cppVar_74626) {
	cppVar_74622 = DPL;
	} else {
	BIT_VEC cppVar_74627;
	BIT_VEC cppVar_74628 = PC + 1;
	cppVar_74628 = (cppVar_74628 & cppMask_un_16_);
	BIT_VEC cppVar_74629 = ROM.rd(cppVar_74628);
	bool cppVar_74631 = (cppVar_74629 == 131);
	if (cppVar_74631) {
	cppVar_74627 = DPH;
	} else {
	BIT_VEC cppVar_74632;
	BIT_VEC cppVar_74633 = PC + 1;
	cppVar_74633 = (cppVar_74633 & cppMask_un_16_);
	BIT_VEC cppVar_74634 = ROM.rd(cppVar_74633);
	bool cppVar_74636 = (cppVar_74634 == 135);
	if (cppVar_74636) {
	cppVar_74632 = PCON;
	} else {
	BIT_VEC cppVar_74637;
	BIT_VEC cppVar_74638 = PC + 1;
	cppVar_74638 = (cppVar_74638 & cppMask_un_16_);
	BIT_VEC cppVar_74639 = ROM.rd(cppVar_74638);
	bool cppVar_74641 = (cppVar_74639 == 136);
	if (cppVar_74641) {
	cppVar_74637 = TCON;
	} else {
	BIT_VEC cppVar_74642;
	BIT_VEC cppVar_74643 = PC + 1;
	cppVar_74643 = (cppVar_74643 & cppMask_un_16_);
	BIT_VEC cppVar_74644 = ROM.rd(cppVar_74643);
	bool cppVar_74646 = (cppVar_74644 == 137);
	if (cppVar_74646) {
	cppVar_74642 = TMOD;
	} else {
	BIT_VEC cppVar_74647;
	BIT_VEC cppVar_74648 = PC + 1;
	cppVar_74648 = (cppVar_74648 & cppMask_un_16_);
	BIT_VEC cppVar_74649 = ROM.rd(cppVar_74648);
	bool cppVar_74651 = (cppVar_74649 == 138);
	if (cppVar_74651) {
	cppVar_74647 = TL0;
	} else {
	BIT_VEC cppVar_74652;
	BIT_VEC cppVar_74653 = PC + 1;
	cppVar_74653 = (cppVar_74653 & cppMask_un_16_);
	BIT_VEC cppVar_74654 = ROM.rd(cppVar_74653);
	bool cppVar_74656 = (cppVar_74654 == 140);
	if (cppVar_74656) {
	cppVar_74652 = TH0;
	} else {
	BIT_VEC cppVar_74657;
	BIT_VEC cppVar_74658 = PC + 1;
	cppVar_74658 = (cppVar_74658 & cppMask_un_16_);
	BIT_VEC cppVar_74659 = ROM.rd(cppVar_74658);
	bool cppVar_74661 = (cppVar_74659 == 139);
	if (cppVar_74661) {
	cppVar_74657 = TL1;
	} else {
	BIT_VEC cppVar_74662;
	BIT_VEC cppVar_74663 = PC + 1;
	cppVar_74663 = (cppVar_74663 & cppMask_un_16_);
	BIT_VEC cppVar_74664 = ROM.rd(cppVar_74663);
	bool cppVar_74666 = (cppVar_74664 == 141);
	if (cppVar_74666) {
	cppVar_74662 = TH1;
	} else {
	BIT_VEC cppVar_74667;
	BIT_VEC cppVar_74668 = PC + 1;
	cppVar_74668 = (cppVar_74668 & cppMask_un_16_);
	BIT_VEC cppVar_74669 = ROM.rd(cppVar_74668);
	bool cppVar_74671 = (cppVar_74669 == 144);
	if (cppVar_74671) {
	cppVar_74667 = P1;
	} else {
	BIT_VEC cppVar_74672;
	BIT_VEC cppVar_74673 = PC + 1;
	cppVar_74673 = (cppVar_74673 & cppMask_un_16_);
	BIT_VEC cppVar_74674 = ROM.rd(cppVar_74673);
	bool cppVar_74676 = (cppVar_74674 == 152);
	if (cppVar_74676) {
	cppVar_74672 = SCON;
	} else {
	BIT_VEC cppVar_74677;
	BIT_VEC cppVar_74678 = PC + 1;
	cppVar_74678 = (cppVar_74678 & cppMask_un_16_);
	BIT_VEC cppVar_74679 = ROM.rd(cppVar_74678);
	bool cppVar_74681 = (cppVar_74679 == 153);
	if (cppVar_74681) {
	cppVar_74677 = SBUF;
	} else {
	BIT_VEC cppVar_74682;
	BIT_VEC cppVar_74683 = PC + 1;
	cppVar_74683 = (cppVar_74683 & cppMask_un_16_);
	BIT_VEC cppVar_74684 = ROM.rd(cppVar_74683);
	bool cppVar_74686 = (cppVar_74684 == 160);
	if (cppVar_74686) {
	cppVar_74682 = P2;
	} else {
	BIT_VEC cppVar_74687;
	BIT_VEC cppVar_74688 = PC + 1;
	cppVar_74688 = (cppVar_74688 & cppMask_un_16_);
	BIT_VEC cppVar_74689 = ROM.rd(cppVar_74688);
	bool cppVar_74691 = (cppVar_74689 == 168);
	if (cppVar_74691) {
	cppVar_74687 = IE;
	} else {
	BIT_VEC cppVar_74692;
	BIT_VEC cppVar_74693 = PC + 1;
	cppVar_74693 = (cppVar_74693 & cppMask_un_16_);
	BIT_VEC cppVar_74694 = ROM.rd(cppVar_74693);
	bool cppVar_74696 = (cppVar_74694 == 176);
	if (cppVar_74696) {
	cppVar_74692 = P3;
	} else {
	BIT_VEC cppVar_74697;
	BIT_VEC cppVar_74698 = PC + 1;
	cppVar_74698 = (cppVar_74698 & cppMask_un_16_);
	BIT_VEC cppVar_74699 = ROM.rd(cppVar_74698);
	bool cppVar_74701 = (cppVar_74699 == 184);
	if (cppVar_74701) {
	cppVar_74697 = IP;
	} else {
	BIT_VEC cppVar_74702;
	BIT_VEC cppVar_74703 = PC + 1;
	cppVar_74703 = (cppVar_74703 & cppMask_un_16_);
	BIT_VEC cppVar_74704 = ROM.rd(cppVar_74703);
	bool cppVar_74706 = (cppVar_74704 == 208);
	if (cppVar_74706) {
	cppVar_74702 = PSW;
	} else {
	BIT_VEC cppVar_74707;
	BIT_VEC cppVar_74708 = PC + 1;
	cppVar_74708 = (cppVar_74708 & cppMask_un_16_);
	BIT_VEC cppVar_74709 = ROM.rd(cppVar_74708);
	bool cppVar_74711 = (cppVar_74709 == 224);
	if (cppVar_74711) {
	cppVar_74707 = ACC;
	} else {
	BIT_VEC cppVar_74712;
	BIT_VEC cppVar_74713 = PC + 1;
	cppVar_74713 = (cppVar_74713 & cppMask_un_16_);
	BIT_VEC cppVar_74714 = ROM.rd(cppVar_74713);
	bool cppVar_74716 = (cppVar_74714 == 240);
	if (cppVar_74716) {
	cppVar_74712 = B;
	} else {
	cppVar_74712 = 0;
	}
	cppVar_74707 = cppVar_74712;
	}
	cppVar_74702 = cppVar_74707;
	}
	cppVar_74697 = cppVar_74702;
	}
	cppVar_74692 = cppVar_74697;
	}
	cppVar_74687 = cppVar_74692;
	}
	cppVar_74682 = cppVar_74687;
	}
	cppVar_74677 = cppVar_74682;
	}
	cppVar_74672 = cppVar_74677;
	}
	cppVar_74667 = cppVar_74672;
	}
	cppVar_74662 = cppVar_74667;
	}
	cppVar_74657 = cppVar_74662;
	}
	cppVar_74652 = cppVar_74657;
	}
	cppVar_74647 = cppVar_74652;
	}
	cppVar_74642 = cppVar_74647;
	}
	cppVar_74637 = cppVar_74642;
	}
	cppVar_74632 = cppVar_74637;
	}
	cppVar_74627 = cppVar_74632;
	}
	cppVar_74622 = cppVar_74627;
	}
	cppVar_74617 = cppVar_74622;
	}
	cppVar_74612 = cppVar_74617;
	}
	cppVar_74603 = cppVar_74612;
	}
	BIT_VEC cppVar_74719 = cppVar_74603 - 1;
	cppVar_74719 = (cppVar_74719 & cppMask_un_8_);
	cppVar_74597 = cppVar_74719;
	} else {
	cppVar_74597 = TH0;
	}
	cppVar_74589 = cppVar_74597;
	} else {
	BIT_VEC cppVar_74720;
	BIT_VEC cppVar_74721 = ROM.rd(PC);
	bool cppVar_74723 = (cppVar_74721 == 5);
	if (cppVar_74723) {
	BIT_VEC cppVar_74724;
	BIT_VEC cppVar_74726 = PC + 1;
	cppVar_74726 = (cppVar_74726 & cppMask_un_16_);
	BIT_VEC cppVar_74727 = ROM.rd(cppVar_74726);
	bool cppVar_74729 = (cppVar_74727 == 140);
	if (cppVar_74729) {
	BIT_VEC cppVar_74730;
	BIT_VEC cppVar_74731 = PC + 1;
	cppVar_74731 = (cppVar_74731 & cppMask_un_16_);
	BIT_VEC cppVar_74732 = ROM.rd(cppVar_74731);
	BIT_VEC cppVar_74733 = (cppVar_74732 >> 7) & cppMask_un_1_;
	bool cppVar_74735 = (cppVar_74733 == 0);
	if (cppVar_74735) {
	BIT_VEC cppVar_74736 = PC + 1;
	cppVar_74736 = (cppVar_74736 & cppMask_un_16_);
	BIT_VEC cppVar_74737 = ROM.rd(cppVar_74736);
	BIT_VEC cppVar_74738 = IRAM.rd(cppVar_74737);
	cppVar_74730 = cppVar_74738;
	} else {
	BIT_VEC cppVar_74739;
	BIT_VEC cppVar_74740 = PC + 1;
	cppVar_74740 = (cppVar_74740 & cppMask_un_16_);
	BIT_VEC cppVar_74741 = ROM.rd(cppVar_74740);
	bool cppVar_74743 = (cppVar_74741 == 128);
	if (cppVar_74743) {
	cppVar_74739 = P0;
	} else {
	BIT_VEC cppVar_74744;
	BIT_VEC cppVar_74745 = PC + 1;
	cppVar_74745 = (cppVar_74745 & cppMask_un_16_);
	BIT_VEC cppVar_74746 = ROM.rd(cppVar_74745);
	bool cppVar_74748 = (cppVar_74746 == 129);
	if (cppVar_74748) {
	cppVar_74744 = SP;
	} else {
	BIT_VEC cppVar_74749;
	BIT_VEC cppVar_74750 = PC + 1;
	cppVar_74750 = (cppVar_74750 & cppMask_un_16_);
	BIT_VEC cppVar_74751 = ROM.rd(cppVar_74750);
	bool cppVar_74753 = (cppVar_74751 == 130);
	if (cppVar_74753) {
	cppVar_74749 = DPL;
	} else {
	BIT_VEC cppVar_74754;
	BIT_VEC cppVar_74755 = PC + 1;
	cppVar_74755 = (cppVar_74755 & cppMask_un_16_);
	BIT_VEC cppVar_74756 = ROM.rd(cppVar_74755);
	bool cppVar_74758 = (cppVar_74756 == 131);
	if (cppVar_74758) {
	cppVar_74754 = DPH;
	} else {
	BIT_VEC cppVar_74759;
	BIT_VEC cppVar_74760 = PC + 1;
	cppVar_74760 = (cppVar_74760 & cppMask_un_16_);
	BIT_VEC cppVar_74761 = ROM.rd(cppVar_74760);
	bool cppVar_74763 = (cppVar_74761 == 135);
	if (cppVar_74763) {
	cppVar_74759 = PCON;
	} else {
	BIT_VEC cppVar_74764;
	BIT_VEC cppVar_74765 = PC + 1;
	cppVar_74765 = (cppVar_74765 & cppMask_un_16_);
	BIT_VEC cppVar_74766 = ROM.rd(cppVar_74765);
	bool cppVar_74768 = (cppVar_74766 == 136);
	if (cppVar_74768) {
	cppVar_74764 = TCON;
	} else {
	BIT_VEC cppVar_74769;
	BIT_VEC cppVar_74770 = PC + 1;
	cppVar_74770 = (cppVar_74770 & cppMask_un_16_);
	BIT_VEC cppVar_74771 = ROM.rd(cppVar_74770);
	bool cppVar_74773 = (cppVar_74771 == 137);
	if (cppVar_74773) {
	cppVar_74769 = TMOD;
	} else {
	BIT_VEC cppVar_74774;
	BIT_VEC cppVar_74775 = PC + 1;
	cppVar_74775 = (cppVar_74775 & cppMask_un_16_);
	BIT_VEC cppVar_74776 = ROM.rd(cppVar_74775);
	bool cppVar_74778 = (cppVar_74776 == 138);
	if (cppVar_74778) {
	cppVar_74774 = TL0;
	} else {
	BIT_VEC cppVar_74779;
	BIT_VEC cppVar_74780 = PC + 1;
	cppVar_74780 = (cppVar_74780 & cppMask_un_16_);
	BIT_VEC cppVar_74781 = ROM.rd(cppVar_74780);
	bool cppVar_74783 = (cppVar_74781 == 140);
	if (cppVar_74783) {
	cppVar_74779 = TH0;
	} else {
	BIT_VEC cppVar_74784;
	BIT_VEC cppVar_74785 = PC + 1;
	cppVar_74785 = (cppVar_74785 & cppMask_un_16_);
	BIT_VEC cppVar_74786 = ROM.rd(cppVar_74785);
	bool cppVar_74788 = (cppVar_74786 == 139);
	if (cppVar_74788) {
	cppVar_74784 = TL1;
	} else {
	BIT_VEC cppVar_74789;
	BIT_VEC cppVar_74790 = PC + 1;
	cppVar_74790 = (cppVar_74790 & cppMask_un_16_);
	BIT_VEC cppVar_74791 = ROM.rd(cppVar_74790);
	bool cppVar_74793 = (cppVar_74791 == 141);
	if (cppVar_74793) {
	cppVar_74789 = TH1;
	} else {
	BIT_VEC cppVar_74794;
	BIT_VEC cppVar_74795 = PC + 1;
	cppVar_74795 = (cppVar_74795 & cppMask_un_16_);
	BIT_VEC cppVar_74796 = ROM.rd(cppVar_74795);
	bool cppVar_74798 = (cppVar_74796 == 144);
	if (cppVar_74798) {
	cppVar_74794 = P1;
	} else {
	BIT_VEC cppVar_74799;
	BIT_VEC cppVar_74800 = PC + 1;
	cppVar_74800 = (cppVar_74800 & cppMask_un_16_);
	BIT_VEC cppVar_74801 = ROM.rd(cppVar_74800);
	bool cppVar_74803 = (cppVar_74801 == 152);
	if (cppVar_74803) {
	cppVar_74799 = SCON;
	} else {
	BIT_VEC cppVar_74804;
	BIT_VEC cppVar_74805 = PC + 1;
	cppVar_74805 = (cppVar_74805 & cppMask_un_16_);
	BIT_VEC cppVar_74806 = ROM.rd(cppVar_74805);
	bool cppVar_74808 = (cppVar_74806 == 153);
	if (cppVar_74808) {
	cppVar_74804 = SBUF;
	} else {
	BIT_VEC cppVar_74809;
	BIT_VEC cppVar_74810 = PC + 1;
	cppVar_74810 = (cppVar_74810 & cppMask_un_16_);
	BIT_VEC cppVar_74811 = ROM.rd(cppVar_74810);
	bool cppVar_74813 = (cppVar_74811 == 160);
	if (cppVar_74813) {
	cppVar_74809 = P2;
	} else {
	BIT_VEC cppVar_74814;
	BIT_VEC cppVar_74815 = PC + 1;
	cppVar_74815 = (cppVar_74815 & cppMask_un_16_);
	BIT_VEC cppVar_74816 = ROM.rd(cppVar_74815);
	bool cppVar_74818 = (cppVar_74816 == 168);
	if (cppVar_74818) {
	cppVar_74814 = IE;
	} else {
	BIT_VEC cppVar_74819;
	BIT_VEC cppVar_74820 = PC + 1;
	cppVar_74820 = (cppVar_74820 & cppMask_un_16_);
	BIT_VEC cppVar_74821 = ROM.rd(cppVar_74820);
	bool cppVar_74823 = (cppVar_74821 == 176);
	if (cppVar_74823) {
	cppVar_74819 = P3;
	} else {
	BIT_VEC cppVar_74824;
	BIT_VEC cppVar_74825 = PC + 1;
	cppVar_74825 = (cppVar_74825 & cppMask_un_16_);
	BIT_VEC cppVar_74826 = ROM.rd(cppVar_74825);
	bool cppVar_74828 = (cppVar_74826 == 184);
	if (cppVar_74828) {
	cppVar_74824 = IP;
	} else {
	BIT_VEC cppVar_74829;
	BIT_VEC cppVar_74830 = PC + 1;
	cppVar_74830 = (cppVar_74830 & cppMask_un_16_);
	BIT_VEC cppVar_74831 = ROM.rd(cppVar_74830);
	bool cppVar_74833 = (cppVar_74831 == 208);
	if (cppVar_74833) {
	cppVar_74829 = PSW;
	} else {
	BIT_VEC cppVar_74834;
	BIT_VEC cppVar_74835 = PC + 1;
	cppVar_74835 = (cppVar_74835 & cppMask_un_16_);
	BIT_VEC cppVar_74836 = ROM.rd(cppVar_74835);
	bool cppVar_74838 = (cppVar_74836 == 224);
	if (cppVar_74838) {
	cppVar_74834 = ACC;
	} else {
	BIT_VEC cppVar_74839;
	BIT_VEC cppVar_74840 = PC + 1;
	cppVar_74840 = (cppVar_74840 & cppMask_un_16_);
	BIT_VEC cppVar_74841 = ROM.rd(cppVar_74840);
	bool cppVar_74843 = (cppVar_74841 == 240);
	if (cppVar_74843) {
	cppVar_74839 = B;
	} else {
	cppVar_74839 = 0;
	}
	cppVar_74834 = cppVar_74839;
	}
	cppVar_74829 = cppVar_74834;
	}
	cppVar_74824 = cppVar_74829;
	}
	cppVar_74819 = cppVar_74824;
	}
	cppVar_74814 = cppVar_74819;
	}
	cppVar_74809 = cppVar_74814;
	}
	cppVar_74804 = cppVar_74809;
	}
	cppVar_74799 = cppVar_74804;
	}
	cppVar_74794 = cppVar_74799;
	}
	cppVar_74789 = cppVar_74794;
	}
	cppVar_74784 = cppVar_74789;
	}
	cppVar_74779 = cppVar_74784;
	}
	cppVar_74774 = cppVar_74779;
	}
	cppVar_74769 = cppVar_74774;
	}
	cppVar_74764 = cppVar_74769;
	}
	cppVar_74759 = cppVar_74764;
	}
	cppVar_74754 = cppVar_74759;
	}
	cppVar_74749 = cppVar_74754;
	}
	cppVar_74744 = cppVar_74749;
	}
	cppVar_74739 = cppVar_74744;
	}
	cppVar_74730 = cppVar_74739;
	}
	BIT_VEC cppVar_74846 = cppVar_74730 + 1;
	cppVar_74846 = (cppVar_74846 & cppMask_un_8_);
	cppVar_74724 = cppVar_74846;
	} else {
	cppVar_74724 = TH0;
	}
	cppVar_74720 = cppVar_74724;
	} else {
	cppVar_74720 = TH0;
	}
	cppVar_74589 = cppVar_74720;
	}
	cppVar_74463 = cppVar_74589;
	}
	cppVar_74334 = cppVar_74463;
	}
	cppVar_74208 = cppVar_74334;
	}
	cppVar_74079 = cppVar_74208;
	}
	cppVar_73953 = cppVar_74079;
	}
	cppVar_73824 = cppVar_73953;
	}
	cppVar_73811 = cppVar_73824;
	}
	cppVar_73685 = cppVar_73811;
	}
	cppVar_73668 = cppVar_73685;
	}
	cppVar_73651 = cppVar_73668;
	}
	cppVar_73501 = cppVar_73651;
	}
	cppVar_73351 = cppVar_73501;
	}
	cppVar_73201 = cppVar_73351;
	}
	cppVar_73051 = cppVar_73201;
	}
	cppVar_72901 = cppVar_73051;
	}
	cppVar_72751 = cppVar_72901;
	}
	cppVar_72601 = cppVar_72751;
	}
	cppVar_72451 = cppVar_72601;
	}
	cppVar_72437 = cppVar_72451;
	}
	cppVar_72426 = cppVar_72437;
	}
	return cppVar_72426;
}
