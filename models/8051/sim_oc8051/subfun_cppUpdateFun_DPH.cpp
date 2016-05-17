#include "common.hpp"
#include "model_oc8051_class.hpp"

BIT_VEC model_oc8051::cppUpdateFun_DPH()
{
	BIT_VEC cppVar_7516;
	BIT_VEC cppVar_7517 = ROM.rd(PC);
	bool cppVar_7519 = (cppVar_7517 == 208);
	if (cppVar_7519) {
	BIT_VEC cppVar_7520;
	BIT_VEC cppVar_7522 = PC + 1;
	cppVar_7522 = (cppVar_7522 & cppMask_un_16_);
	BIT_VEC cppVar_7523 = ROM.rd(cppVar_7522);
	bool cppVar_7525 = (cppVar_7523 == 131);
	if (cppVar_7525) {
	BIT_VEC cppVar_7526 = IRAM.rd(SP);
	cppVar_7520 = cppVar_7526;
	} else {
	cppVar_7520 = DPH;
	}
	cppVar_7516 = cppVar_7520;
	} else {
	BIT_VEC cppVar_7527;
	BIT_VEC cppVar_7528 = ROM.rd(PC);
	bool cppVar_7530 = (cppVar_7528 == 245);
	BIT_VEC cppVar_7531 = ROM.rd(PC);
	bool cppVar_7533 = (cppVar_7531 == 197);
	bool cppVar_7534 = cppVar_7530 || cppVar_7533;
	if (cppVar_7534) {
	BIT_VEC cppVar_7535;
	BIT_VEC cppVar_7537 = PC + 1;
	cppVar_7537 = (cppVar_7537 & cppMask_un_16_);
	BIT_VEC cppVar_7538 = ROM.rd(cppVar_7537);
	bool cppVar_7540 = (cppVar_7538 == 131);
	if (cppVar_7540) {
	cppVar_7535 = ACC;
	} else {
	cppVar_7535 = DPH;
	}
	cppVar_7527 = cppVar_7535;
	} else {
	BIT_VEC cppVar_7541;
	BIT_VEC cppVar_7542 = ROM.rd(PC);
	bool cppVar_7544 = (cppVar_7542 == 144);
	if (cppVar_7544) {
	BIT_VEC cppVar_7545;
	BIT_VEC cppVar_7547 = PC + 1;
	cppVar_7547 = (cppVar_7547 & cppMask_un_16_);
	BIT_VEC cppVar_7548 = ROM.rd(cppVar_7547);
	bool cppVar_7550 = (cppVar_7548 == 131);
	if (cppVar_7550) {
	BIT_VEC cppVar_7551 = PC + 1;
	cppVar_7551 = (cppVar_7551 & cppMask_un_16_);
	BIT_VEC cppVar_7552 = ROM.rd(cppVar_7551);
	cppVar_7545 = cppVar_7552;
	} else {
	cppVar_7545 = DPH;
	}
	cppVar_7541 = cppVar_7545;
	} else {
	BIT_VEC cppVar_7553;
	BIT_VEC cppVar_7554 = ROM.rd(PC);
	bool cppVar_7556 = (cppVar_7554 == 143);
	if (cppVar_7556) {
	BIT_VEC cppVar_7557;
	BIT_VEC cppVar_7559 = PC + 1;
	cppVar_7559 = (cppVar_7559 & cppMask_un_16_);
	BIT_VEC cppVar_7560 = ROM.rd(cppVar_7559);
	bool cppVar_7562 = (cppVar_7560 == 131);
	if (cppVar_7562) {
	BIT_VEC cppVar_7563;
	BIT_VEC cppVar_7565 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7567 = (cppVar_7565 << 3) | 7;
	cppVar_7567 = (cppVar_7567 & cppMask_un_5_);
	BIT_VEC cppVar_7568 = (0 << 5) | cppVar_7567;
	cppVar_7568 = (cppVar_7568 & cppMask_un_8_);
	BIT_VEC cppVar_7569 = (cppVar_7568 >> 7) & cppMask_un_1_;
	bool cppVar_7571 = (cppVar_7569 == 0);
	if (cppVar_7571) {
	BIT_VEC cppVar_7572 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7573 = (cppVar_7572 << 3) | 7;
	cppVar_7573 = (cppVar_7573 & cppMask_un_5_);
	BIT_VEC cppVar_7574 = (0 << 5) | cppVar_7573;
	cppVar_7574 = (cppVar_7574 & cppMask_un_8_);
	BIT_VEC cppVar_7575 = IRAM.rd(cppVar_7574);
	cppVar_7563 = cppVar_7575;
	} else {
	BIT_VEC cppVar_7576;
	BIT_VEC cppVar_7577 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7578 = (cppVar_7577 << 3) | 7;
	cppVar_7578 = (cppVar_7578 & cppMask_un_5_);
	BIT_VEC cppVar_7579 = (0 << 5) | cppVar_7578;
	cppVar_7579 = (cppVar_7579 & cppMask_un_8_);
	bool cppVar_7581 = (cppVar_7579 == 128);
	if (cppVar_7581) {
	cppVar_7576 = P0;
	} else {
	BIT_VEC cppVar_7582;
	BIT_VEC cppVar_7583 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7584 = (cppVar_7583 << 3) | 7;
	cppVar_7584 = (cppVar_7584 & cppMask_un_5_);
	BIT_VEC cppVar_7585 = (0 << 5) | cppVar_7584;
	cppVar_7585 = (cppVar_7585 & cppMask_un_8_);
	bool cppVar_7587 = (cppVar_7585 == 129);
	if (cppVar_7587) {
	cppVar_7582 = SP;
	} else {
	BIT_VEC cppVar_7588;
	BIT_VEC cppVar_7589 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7590 = (cppVar_7589 << 3) | 7;
	cppVar_7590 = (cppVar_7590 & cppMask_un_5_);
	BIT_VEC cppVar_7591 = (0 << 5) | cppVar_7590;
	cppVar_7591 = (cppVar_7591 & cppMask_un_8_);
	bool cppVar_7593 = (cppVar_7591 == 130);
	if (cppVar_7593) {
	cppVar_7588 = DPL;
	} else {
	BIT_VEC cppVar_7594;
	BIT_VEC cppVar_7595 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7596 = (cppVar_7595 << 3) | 7;
	cppVar_7596 = (cppVar_7596 & cppMask_un_5_);
	BIT_VEC cppVar_7597 = (0 << 5) | cppVar_7596;
	cppVar_7597 = (cppVar_7597 & cppMask_un_8_);
	bool cppVar_7599 = (cppVar_7597 == 131);
	if (cppVar_7599) {
	cppVar_7594 = DPH;
	} else {
	BIT_VEC cppVar_7600;
	BIT_VEC cppVar_7601 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7602 = (cppVar_7601 << 3) | 7;
	cppVar_7602 = (cppVar_7602 & cppMask_un_5_);
	BIT_VEC cppVar_7603 = (0 << 5) | cppVar_7602;
	cppVar_7603 = (cppVar_7603 & cppMask_un_8_);
	bool cppVar_7605 = (cppVar_7603 == 135);
	if (cppVar_7605) {
	cppVar_7600 = PCON;
	} else {
	BIT_VEC cppVar_7606;
	BIT_VEC cppVar_7607 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7608 = (cppVar_7607 << 3) | 7;
	cppVar_7608 = (cppVar_7608 & cppMask_un_5_);
	BIT_VEC cppVar_7609 = (0 << 5) | cppVar_7608;
	cppVar_7609 = (cppVar_7609 & cppMask_un_8_);
	bool cppVar_7611 = (cppVar_7609 == 136);
	if (cppVar_7611) {
	cppVar_7606 = TCON;
	} else {
	BIT_VEC cppVar_7612;
	BIT_VEC cppVar_7613 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7614 = (cppVar_7613 << 3) | 7;
	cppVar_7614 = (cppVar_7614 & cppMask_un_5_);
	BIT_VEC cppVar_7615 = (0 << 5) | cppVar_7614;
	cppVar_7615 = (cppVar_7615 & cppMask_un_8_);
	bool cppVar_7617 = (cppVar_7615 == 137);
	if (cppVar_7617) {
	cppVar_7612 = TMOD;
	} else {
	BIT_VEC cppVar_7618;
	BIT_VEC cppVar_7619 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7620 = (cppVar_7619 << 3) | 7;
	cppVar_7620 = (cppVar_7620 & cppMask_un_5_);
	BIT_VEC cppVar_7621 = (0 << 5) | cppVar_7620;
	cppVar_7621 = (cppVar_7621 & cppMask_un_8_);
	bool cppVar_7623 = (cppVar_7621 == 138);
	if (cppVar_7623) {
	cppVar_7618 = TL0;
	} else {
	BIT_VEC cppVar_7624;
	BIT_VEC cppVar_7625 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7626 = (cppVar_7625 << 3) | 7;
	cppVar_7626 = (cppVar_7626 & cppMask_un_5_);
	BIT_VEC cppVar_7627 = (0 << 5) | cppVar_7626;
	cppVar_7627 = (cppVar_7627 & cppMask_un_8_);
	bool cppVar_7629 = (cppVar_7627 == 140);
	if (cppVar_7629) {
	cppVar_7624 = TH0;
	} else {
	BIT_VEC cppVar_7630;
	BIT_VEC cppVar_7631 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7632 = (cppVar_7631 << 3) | 7;
	cppVar_7632 = (cppVar_7632 & cppMask_un_5_);
	BIT_VEC cppVar_7633 = (0 << 5) | cppVar_7632;
	cppVar_7633 = (cppVar_7633 & cppMask_un_8_);
	bool cppVar_7635 = (cppVar_7633 == 139);
	if (cppVar_7635) {
	cppVar_7630 = TL1;
	} else {
	BIT_VEC cppVar_7636;
	BIT_VEC cppVar_7637 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7638 = (cppVar_7637 << 3) | 7;
	cppVar_7638 = (cppVar_7638 & cppMask_un_5_);
	BIT_VEC cppVar_7639 = (0 << 5) | cppVar_7638;
	cppVar_7639 = (cppVar_7639 & cppMask_un_8_);
	bool cppVar_7641 = (cppVar_7639 == 141);
	if (cppVar_7641) {
	cppVar_7636 = TH1;
	} else {
	BIT_VEC cppVar_7642;
	BIT_VEC cppVar_7643 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7644 = (cppVar_7643 << 3) | 7;
	cppVar_7644 = (cppVar_7644 & cppMask_un_5_);
	BIT_VEC cppVar_7645 = (0 << 5) | cppVar_7644;
	cppVar_7645 = (cppVar_7645 & cppMask_un_8_);
	bool cppVar_7647 = (cppVar_7645 == 144);
	if (cppVar_7647) {
	cppVar_7642 = P1;
	} else {
	BIT_VEC cppVar_7648;
	BIT_VEC cppVar_7649 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7650 = (cppVar_7649 << 3) | 7;
	cppVar_7650 = (cppVar_7650 & cppMask_un_5_);
	BIT_VEC cppVar_7651 = (0 << 5) | cppVar_7650;
	cppVar_7651 = (cppVar_7651 & cppMask_un_8_);
	bool cppVar_7653 = (cppVar_7651 == 152);
	if (cppVar_7653) {
	cppVar_7648 = SCON;
	} else {
	BIT_VEC cppVar_7654;
	BIT_VEC cppVar_7655 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7656 = (cppVar_7655 << 3) | 7;
	cppVar_7656 = (cppVar_7656 & cppMask_un_5_);
	BIT_VEC cppVar_7657 = (0 << 5) | cppVar_7656;
	cppVar_7657 = (cppVar_7657 & cppMask_un_8_);
	bool cppVar_7659 = (cppVar_7657 == 153);
	if (cppVar_7659) {
	cppVar_7654 = SBUF;
	} else {
	BIT_VEC cppVar_7660;
	BIT_VEC cppVar_7661 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7662 = (cppVar_7661 << 3) | 7;
	cppVar_7662 = (cppVar_7662 & cppMask_un_5_);
	BIT_VEC cppVar_7663 = (0 << 5) | cppVar_7662;
	cppVar_7663 = (cppVar_7663 & cppMask_un_8_);
	bool cppVar_7665 = (cppVar_7663 == 160);
	if (cppVar_7665) {
	cppVar_7660 = P2;
	} else {
	BIT_VEC cppVar_7666;
	BIT_VEC cppVar_7667 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7668 = (cppVar_7667 << 3) | 7;
	cppVar_7668 = (cppVar_7668 & cppMask_un_5_);
	BIT_VEC cppVar_7669 = (0 << 5) | cppVar_7668;
	cppVar_7669 = (cppVar_7669 & cppMask_un_8_);
	bool cppVar_7671 = (cppVar_7669 == 168);
	if (cppVar_7671) {
	cppVar_7666 = IE;
	} else {
	BIT_VEC cppVar_7672;
	BIT_VEC cppVar_7673 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7674 = (cppVar_7673 << 3) | 7;
	cppVar_7674 = (cppVar_7674 & cppMask_un_5_);
	BIT_VEC cppVar_7675 = (0 << 5) | cppVar_7674;
	cppVar_7675 = (cppVar_7675 & cppMask_un_8_);
	bool cppVar_7677 = (cppVar_7675 == 176);
	if (cppVar_7677) {
	cppVar_7672 = P3;
	} else {
	BIT_VEC cppVar_7678;
	BIT_VEC cppVar_7679 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7680 = (cppVar_7679 << 3) | 7;
	cppVar_7680 = (cppVar_7680 & cppMask_un_5_);
	BIT_VEC cppVar_7681 = (0 << 5) | cppVar_7680;
	cppVar_7681 = (cppVar_7681 & cppMask_un_8_);
	bool cppVar_7683 = (cppVar_7681 == 184);
	if (cppVar_7683) {
	cppVar_7678 = IP;
	} else {
	BIT_VEC cppVar_7684;
	BIT_VEC cppVar_7685 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7686 = (cppVar_7685 << 3) | 7;
	cppVar_7686 = (cppVar_7686 & cppMask_un_5_);
	BIT_VEC cppVar_7687 = (0 << 5) | cppVar_7686;
	cppVar_7687 = (cppVar_7687 & cppMask_un_8_);
	bool cppVar_7689 = (cppVar_7687 == 208);
	if (cppVar_7689) {
	cppVar_7684 = PSW;
	} else {
	BIT_VEC cppVar_7690;
	BIT_VEC cppVar_7691 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7692 = (cppVar_7691 << 3) | 7;
	cppVar_7692 = (cppVar_7692 & cppMask_un_5_);
	BIT_VEC cppVar_7693 = (0 << 5) | cppVar_7692;
	cppVar_7693 = (cppVar_7693 & cppMask_un_8_);
	bool cppVar_7695 = (cppVar_7693 == 224);
	if (cppVar_7695) {
	cppVar_7690 = ACC;
	} else {
	BIT_VEC cppVar_7696;
	BIT_VEC cppVar_7697 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7698 = (cppVar_7697 << 3) | 7;
	cppVar_7698 = (cppVar_7698 & cppMask_un_5_);
	BIT_VEC cppVar_7699 = (0 << 5) | cppVar_7698;
	cppVar_7699 = (cppVar_7699 & cppMask_un_8_);
	bool cppVar_7701 = (cppVar_7699 == 240);
	if (cppVar_7701) {
	cppVar_7696 = B;
	} else {
	cppVar_7696 = 0;
	}
	cppVar_7690 = cppVar_7696;
	}
	cppVar_7684 = cppVar_7690;
	}
	cppVar_7678 = cppVar_7684;
	}
	cppVar_7672 = cppVar_7678;
	}
	cppVar_7666 = cppVar_7672;
	}
	cppVar_7660 = cppVar_7666;
	}
	cppVar_7654 = cppVar_7660;
	}
	cppVar_7648 = cppVar_7654;
	}
	cppVar_7642 = cppVar_7648;
	}
	cppVar_7636 = cppVar_7642;
	}
	cppVar_7630 = cppVar_7636;
	}
	cppVar_7624 = cppVar_7630;
	}
	cppVar_7618 = cppVar_7624;
	}
	cppVar_7612 = cppVar_7618;
	}
	cppVar_7606 = cppVar_7612;
	}
	cppVar_7600 = cppVar_7606;
	}
	cppVar_7594 = cppVar_7600;
	}
	cppVar_7588 = cppVar_7594;
	}
	cppVar_7582 = cppVar_7588;
	}
	cppVar_7576 = cppVar_7582;
	}
	cppVar_7563 = cppVar_7576;
	}
	cppVar_7557 = cppVar_7563;
	} else {
	cppVar_7557 = DPH;
	}
	cppVar_7553 = cppVar_7557;
	} else {
	BIT_VEC cppVar_7703;
	BIT_VEC cppVar_7704 = ROM.rd(PC);
	bool cppVar_7706 = (cppVar_7704 == 142);
	if (cppVar_7706) {
	BIT_VEC cppVar_7707;
	BIT_VEC cppVar_7709 = PC + 1;
	cppVar_7709 = (cppVar_7709 & cppMask_un_16_);
	BIT_VEC cppVar_7710 = ROM.rd(cppVar_7709);
	bool cppVar_7712 = (cppVar_7710 == 131);
	if (cppVar_7712) {
	BIT_VEC cppVar_7713;
	BIT_VEC cppVar_7715 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7717 = (cppVar_7715 << 3) | 6;
	cppVar_7717 = (cppVar_7717 & cppMask_un_5_);
	BIT_VEC cppVar_7718 = (0 << 5) | cppVar_7717;
	cppVar_7718 = (cppVar_7718 & cppMask_un_8_);
	BIT_VEC cppVar_7719 = (cppVar_7718 >> 7) & cppMask_un_1_;
	bool cppVar_7721 = (cppVar_7719 == 0);
	if (cppVar_7721) {
	BIT_VEC cppVar_7722 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7723 = (cppVar_7722 << 3) | 6;
	cppVar_7723 = (cppVar_7723 & cppMask_un_5_);
	BIT_VEC cppVar_7724 = (0 << 5) | cppVar_7723;
	cppVar_7724 = (cppVar_7724 & cppMask_un_8_);
	BIT_VEC cppVar_7725 = IRAM.rd(cppVar_7724);
	cppVar_7713 = cppVar_7725;
	} else {
	BIT_VEC cppVar_7726;
	BIT_VEC cppVar_7727 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7728 = (cppVar_7727 << 3) | 6;
	cppVar_7728 = (cppVar_7728 & cppMask_un_5_);
	BIT_VEC cppVar_7729 = (0 << 5) | cppVar_7728;
	cppVar_7729 = (cppVar_7729 & cppMask_un_8_);
	bool cppVar_7731 = (cppVar_7729 == 128);
	if (cppVar_7731) {
	cppVar_7726 = P0;
	} else {
	BIT_VEC cppVar_7732;
	BIT_VEC cppVar_7733 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7734 = (cppVar_7733 << 3) | 6;
	cppVar_7734 = (cppVar_7734 & cppMask_un_5_);
	BIT_VEC cppVar_7735 = (0 << 5) | cppVar_7734;
	cppVar_7735 = (cppVar_7735 & cppMask_un_8_);
	bool cppVar_7737 = (cppVar_7735 == 129);
	if (cppVar_7737) {
	cppVar_7732 = SP;
	} else {
	BIT_VEC cppVar_7738;
	BIT_VEC cppVar_7739 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7740 = (cppVar_7739 << 3) | 6;
	cppVar_7740 = (cppVar_7740 & cppMask_un_5_);
	BIT_VEC cppVar_7741 = (0 << 5) | cppVar_7740;
	cppVar_7741 = (cppVar_7741 & cppMask_un_8_);
	bool cppVar_7743 = (cppVar_7741 == 130);
	if (cppVar_7743) {
	cppVar_7738 = DPL;
	} else {
	BIT_VEC cppVar_7744;
	BIT_VEC cppVar_7745 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7746 = (cppVar_7745 << 3) | 6;
	cppVar_7746 = (cppVar_7746 & cppMask_un_5_);
	BIT_VEC cppVar_7747 = (0 << 5) | cppVar_7746;
	cppVar_7747 = (cppVar_7747 & cppMask_un_8_);
	bool cppVar_7749 = (cppVar_7747 == 131);
	if (cppVar_7749) {
	cppVar_7744 = DPH;
	} else {
	BIT_VEC cppVar_7750;
	BIT_VEC cppVar_7751 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7752 = (cppVar_7751 << 3) | 6;
	cppVar_7752 = (cppVar_7752 & cppMask_un_5_);
	BIT_VEC cppVar_7753 = (0 << 5) | cppVar_7752;
	cppVar_7753 = (cppVar_7753 & cppMask_un_8_);
	bool cppVar_7755 = (cppVar_7753 == 135);
	if (cppVar_7755) {
	cppVar_7750 = PCON;
	} else {
	BIT_VEC cppVar_7756;
	BIT_VEC cppVar_7757 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7758 = (cppVar_7757 << 3) | 6;
	cppVar_7758 = (cppVar_7758 & cppMask_un_5_);
	BIT_VEC cppVar_7759 = (0 << 5) | cppVar_7758;
	cppVar_7759 = (cppVar_7759 & cppMask_un_8_);
	bool cppVar_7761 = (cppVar_7759 == 136);
	if (cppVar_7761) {
	cppVar_7756 = TCON;
	} else {
	BIT_VEC cppVar_7762;
	BIT_VEC cppVar_7763 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7764 = (cppVar_7763 << 3) | 6;
	cppVar_7764 = (cppVar_7764 & cppMask_un_5_);
	BIT_VEC cppVar_7765 = (0 << 5) | cppVar_7764;
	cppVar_7765 = (cppVar_7765 & cppMask_un_8_);
	bool cppVar_7767 = (cppVar_7765 == 137);
	if (cppVar_7767) {
	cppVar_7762 = TMOD;
	} else {
	BIT_VEC cppVar_7768;
	BIT_VEC cppVar_7769 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7770 = (cppVar_7769 << 3) | 6;
	cppVar_7770 = (cppVar_7770 & cppMask_un_5_);
	BIT_VEC cppVar_7771 = (0 << 5) | cppVar_7770;
	cppVar_7771 = (cppVar_7771 & cppMask_un_8_);
	bool cppVar_7773 = (cppVar_7771 == 138);
	if (cppVar_7773) {
	cppVar_7768 = TL0;
	} else {
	BIT_VEC cppVar_7774;
	BIT_VEC cppVar_7775 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7776 = (cppVar_7775 << 3) | 6;
	cppVar_7776 = (cppVar_7776 & cppMask_un_5_);
	BIT_VEC cppVar_7777 = (0 << 5) | cppVar_7776;
	cppVar_7777 = (cppVar_7777 & cppMask_un_8_);
	bool cppVar_7779 = (cppVar_7777 == 140);
	if (cppVar_7779) {
	cppVar_7774 = TH0;
	} else {
	BIT_VEC cppVar_7780;
	BIT_VEC cppVar_7781 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7782 = (cppVar_7781 << 3) | 6;
	cppVar_7782 = (cppVar_7782 & cppMask_un_5_);
	BIT_VEC cppVar_7783 = (0 << 5) | cppVar_7782;
	cppVar_7783 = (cppVar_7783 & cppMask_un_8_);
	bool cppVar_7785 = (cppVar_7783 == 139);
	if (cppVar_7785) {
	cppVar_7780 = TL1;
	} else {
	BIT_VEC cppVar_7786;
	BIT_VEC cppVar_7787 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7788 = (cppVar_7787 << 3) | 6;
	cppVar_7788 = (cppVar_7788 & cppMask_un_5_);
	BIT_VEC cppVar_7789 = (0 << 5) | cppVar_7788;
	cppVar_7789 = (cppVar_7789 & cppMask_un_8_);
	bool cppVar_7791 = (cppVar_7789 == 141);
	if (cppVar_7791) {
	cppVar_7786 = TH1;
	} else {
	BIT_VEC cppVar_7792;
	BIT_VEC cppVar_7793 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7794 = (cppVar_7793 << 3) | 6;
	cppVar_7794 = (cppVar_7794 & cppMask_un_5_);
	BIT_VEC cppVar_7795 = (0 << 5) | cppVar_7794;
	cppVar_7795 = (cppVar_7795 & cppMask_un_8_);
	bool cppVar_7797 = (cppVar_7795 == 144);
	if (cppVar_7797) {
	cppVar_7792 = P1;
	} else {
	BIT_VEC cppVar_7798;
	BIT_VEC cppVar_7799 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7800 = (cppVar_7799 << 3) | 6;
	cppVar_7800 = (cppVar_7800 & cppMask_un_5_);
	BIT_VEC cppVar_7801 = (0 << 5) | cppVar_7800;
	cppVar_7801 = (cppVar_7801 & cppMask_un_8_);
	bool cppVar_7803 = (cppVar_7801 == 152);
	if (cppVar_7803) {
	cppVar_7798 = SCON;
	} else {
	BIT_VEC cppVar_7804;
	BIT_VEC cppVar_7805 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7806 = (cppVar_7805 << 3) | 6;
	cppVar_7806 = (cppVar_7806 & cppMask_un_5_);
	BIT_VEC cppVar_7807 = (0 << 5) | cppVar_7806;
	cppVar_7807 = (cppVar_7807 & cppMask_un_8_);
	bool cppVar_7809 = (cppVar_7807 == 153);
	if (cppVar_7809) {
	cppVar_7804 = SBUF;
	} else {
	BIT_VEC cppVar_7810;
	BIT_VEC cppVar_7811 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7812 = (cppVar_7811 << 3) | 6;
	cppVar_7812 = (cppVar_7812 & cppMask_un_5_);
	BIT_VEC cppVar_7813 = (0 << 5) | cppVar_7812;
	cppVar_7813 = (cppVar_7813 & cppMask_un_8_);
	bool cppVar_7815 = (cppVar_7813 == 160);
	if (cppVar_7815) {
	cppVar_7810 = P2;
	} else {
	BIT_VEC cppVar_7816;
	BIT_VEC cppVar_7817 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7818 = (cppVar_7817 << 3) | 6;
	cppVar_7818 = (cppVar_7818 & cppMask_un_5_);
	BIT_VEC cppVar_7819 = (0 << 5) | cppVar_7818;
	cppVar_7819 = (cppVar_7819 & cppMask_un_8_);
	bool cppVar_7821 = (cppVar_7819 == 168);
	if (cppVar_7821) {
	cppVar_7816 = IE;
	} else {
	BIT_VEC cppVar_7822;
	BIT_VEC cppVar_7823 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7824 = (cppVar_7823 << 3) | 6;
	cppVar_7824 = (cppVar_7824 & cppMask_un_5_);
	BIT_VEC cppVar_7825 = (0 << 5) | cppVar_7824;
	cppVar_7825 = (cppVar_7825 & cppMask_un_8_);
	bool cppVar_7827 = (cppVar_7825 == 176);
	if (cppVar_7827) {
	cppVar_7822 = P3;
	} else {
	BIT_VEC cppVar_7828;
	BIT_VEC cppVar_7829 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7830 = (cppVar_7829 << 3) | 6;
	cppVar_7830 = (cppVar_7830 & cppMask_un_5_);
	BIT_VEC cppVar_7831 = (0 << 5) | cppVar_7830;
	cppVar_7831 = (cppVar_7831 & cppMask_un_8_);
	bool cppVar_7833 = (cppVar_7831 == 184);
	if (cppVar_7833) {
	cppVar_7828 = IP;
	} else {
	BIT_VEC cppVar_7834;
	BIT_VEC cppVar_7835 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7836 = (cppVar_7835 << 3) | 6;
	cppVar_7836 = (cppVar_7836 & cppMask_un_5_);
	BIT_VEC cppVar_7837 = (0 << 5) | cppVar_7836;
	cppVar_7837 = (cppVar_7837 & cppMask_un_8_);
	bool cppVar_7839 = (cppVar_7837 == 208);
	if (cppVar_7839) {
	cppVar_7834 = PSW;
	} else {
	BIT_VEC cppVar_7840;
	BIT_VEC cppVar_7841 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7842 = (cppVar_7841 << 3) | 6;
	cppVar_7842 = (cppVar_7842 & cppMask_un_5_);
	BIT_VEC cppVar_7843 = (0 << 5) | cppVar_7842;
	cppVar_7843 = (cppVar_7843 & cppMask_un_8_);
	bool cppVar_7845 = (cppVar_7843 == 224);
	if (cppVar_7845) {
	cppVar_7840 = ACC;
	} else {
	BIT_VEC cppVar_7846;
	BIT_VEC cppVar_7847 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7848 = (cppVar_7847 << 3) | 6;
	cppVar_7848 = (cppVar_7848 & cppMask_un_5_);
	BIT_VEC cppVar_7849 = (0 << 5) | cppVar_7848;
	cppVar_7849 = (cppVar_7849 & cppMask_un_8_);
	bool cppVar_7851 = (cppVar_7849 == 240);
	if (cppVar_7851) {
	cppVar_7846 = B;
	} else {
	cppVar_7846 = 0;
	}
	cppVar_7840 = cppVar_7846;
	}
	cppVar_7834 = cppVar_7840;
	}
	cppVar_7828 = cppVar_7834;
	}
	cppVar_7822 = cppVar_7828;
	}
	cppVar_7816 = cppVar_7822;
	}
	cppVar_7810 = cppVar_7816;
	}
	cppVar_7804 = cppVar_7810;
	}
	cppVar_7798 = cppVar_7804;
	}
	cppVar_7792 = cppVar_7798;
	}
	cppVar_7786 = cppVar_7792;
	}
	cppVar_7780 = cppVar_7786;
	}
	cppVar_7774 = cppVar_7780;
	}
	cppVar_7768 = cppVar_7774;
	}
	cppVar_7762 = cppVar_7768;
	}
	cppVar_7756 = cppVar_7762;
	}
	cppVar_7750 = cppVar_7756;
	}
	cppVar_7744 = cppVar_7750;
	}
	cppVar_7738 = cppVar_7744;
	}
	cppVar_7732 = cppVar_7738;
	}
	cppVar_7726 = cppVar_7732;
	}
	cppVar_7713 = cppVar_7726;
	}
	cppVar_7707 = cppVar_7713;
	} else {
	cppVar_7707 = DPH;
	}
	cppVar_7703 = cppVar_7707;
	} else {
	BIT_VEC cppVar_7853;
	BIT_VEC cppVar_7854 = ROM.rd(PC);
	bool cppVar_7856 = (cppVar_7854 == 141);
	if (cppVar_7856) {
	BIT_VEC cppVar_7857;
	BIT_VEC cppVar_7859 = PC + 1;
	cppVar_7859 = (cppVar_7859 & cppMask_un_16_);
	BIT_VEC cppVar_7860 = ROM.rd(cppVar_7859);
	bool cppVar_7862 = (cppVar_7860 == 131);
	if (cppVar_7862) {
	BIT_VEC cppVar_7863;
	BIT_VEC cppVar_7865 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7867 = (cppVar_7865 << 3) | 5;
	cppVar_7867 = (cppVar_7867 & cppMask_un_5_);
	BIT_VEC cppVar_7868 = (0 << 5) | cppVar_7867;
	cppVar_7868 = (cppVar_7868 & cppMask_un_8_);
	BIT_VEC cppVar_7869 = (cppVar_7868 >> 7) & cppMask_un_1_;
	bool cppVar_7871 = (cppVar_7869 == 0);
	if (cppVar_7871) {
	BIT_VEC cppVar_7872 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7873 = (cppVar_7872 << 3) | 5;
	cppVar_7873 = (cppVar_7873 & cppMask_un_5_);
	BIT_VEC cppVar_7874 = (0 << 5) | cppVar_7873;
	cppVar_7874 = (cppVar_7874 & cppMask_un_8_);
	BIT_VEC cppVar_7875 = IRAM.rd(cppVar_7874);
	cppVar_7863 = cppVar_7875;
	} else {
	BIT_VEC cppVar_7876;
	BIT_VEC cppVar_7877 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7878 = (cppVar_7877 << 3) | 5;
	cppVar_7878 = (cppVar_7878 & cppMask_un_5_);
	BIT_VEC cppVar_7879 = (0 << 5) | cppVar_7878;
	cppVar_7879 = (cppVar_7879 & cppMask_un_8_);
	bool cppVar_7881 = (cppVar_7879 == 128);
	if (cppVar_7881) {
	cppVar_7876 = P0;
	} else {
	BIT_VEC cppVar_7882;
	BIT_VEC cppVar_7883 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7884 = (cppVar_7883 << 3) | 5;
	cppVar_7884 = (cppVar_7884 & cppMask_un_5_);
	BIT_VEC cppVar_7885 = (0 << 5) | cppVar_7884;
	cppVar_7885 = (cppVar_7885 & cppMask_un_8_);
	bool cppVar_7887 = (cppVar_7885 == 129);
	if (cppVar_7887) {
	cppVar_7882 = SP;
	} else {
	BIT_VEC cppVar_7888;
	BIT_VEC cppVar_7889 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7890 = (cppVar_7889 << 3) | 5;
	cppVar_7890 = (cppVar_7890 & cppMask_un_5_);
	BIT_VEC cppVar_7891 = (0 << 5) | cppVar_7890;
	cppVar_7891 = (cppVar_7891 & cppMask_un_8_);
	bool cppVar_7893 = (cppVar_7891 == 130);
	if (cppVar_7893) {
	cppVar_7888 = DPL;
	} else {
	BIT_VEC cppVar_7894;
	BIT_VEC cppVar_7895 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7896 = (cppVar_7895 << 3) | 5;
	cppVar_7896 = (cppVar_7896 & cppMask_un_5_);
	BIT_VEC cppVar_7897 = (0 << 5) | cppVar_7896;
	cppVar_7897 = (cppVar_7897 & cppMask_un_8_);
	bool cppVar_7899 = (cppVar_7897 == 131);
	if (cppVar_7899) {
	cppVar_7894 = DPH;
	} else {
	BIT_VEC cppVar_7900;
	BIT_VEC cppVar_7901 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7902 = (cppVar_7901 << 3) | 5;
	cppVar_7902 = (cppVar_7902 & cppMask_un_5_);
	BIT_VEC cppVar_7903 = (0 << 5) | cppVar_7902;
	cppVar_7903 = (cppVar_7903 & cppMask_un_8_);
	bool cppVar_7905 = (cppVar_7903 == 135);
	if (cppVar_7905) {
	cppVar_7900 = PCON;
	} else {
	BIT_VEC cppVar_7906;
	BIT_VEC cppVar_7907 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7908 = (cppVar_7907 << 3) | 5;
	cppVar_7908 = (cppVar_7908 & cppMask_un_5_);
	BIT_VEC cppVar_7909 = (0 << 5) | cppVar_7908;
	cppVar_7909 = (cppVar_7909 & cppMask_un_8_);
	bool cppVar_7911 = (cppVar_7909 == 136);
	if (cppVar_7911) {
	cppVar_7906 = TCON;
	} else {
	BIT_VEC cppVar_7912;
	BIT_VEC cppVar_7913 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7914 = (cppVar_7913 << 3) | 5;
	cppVar_7914 = (cppVar_7914 & cppMask_un_5_);
	BIT_VEC cppVar_7915 = (0 << 5) | cppVar_7914;
	cppVar_7915 = (cppVar_7915 & cppMask_un_8_);
	bool cppVar_7917 = (cppVar_7915 == 137);
	if (cppVar_7917) {
	cppVar_7912 = TMOD;
	} else {
	BIT_VEC cppVar_7918;
	BIT_VEC cppVar_7919 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7920 = (cppVar_7919 << 3) | 5;
	cppVar_7920 = (cppVar_7920 & cppMask_un_5_);
	BIT_VEC cppVar_7921 = (0 << 5) | cppVar_7920;
	cppVar_7921 = (cppVar_7921 & cppMask_un_8_);
	bool cppVar_7923 = (cppVar_7921 == 138);
	if (cppVar_7923) {
	cppVar_7918 = TL0;
	} else {
	BIT_VEC cppVar_7924;
	BIT_VEC cppVar_7925 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7926 = (cppVar_7925 << 3) | 5;
	cppVar_7926 = (cppVar_7926 & cppMask_un_5_);
	BIT_VEC cppVar_7927 = (0 << 5) | cppVar_7926;
	cppVar_7927 = (cppVar_7927 & cppMask_un_8_);
	bool cppVar_7929 = (cppVar_7927 == 140);
	if (cppVar_7929) {
	cppVar_7924 = TH0;
	} else {
	BIT_VEC cppVar_7930;
	BIT_VEC cppVar_7931 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7932 = (cppVar_7931 << 3) | 5;
	cppVar_7932 = (cppVar_7932 & cppMask_un_5_);
	BIT_VEC cppVar_7933 = (0 << 5) | cppVar_7932;
	cppVar_7933 = (cppVar_7933 & cppMask_un_8_);
	bool cppVar_7935 = (cppVar_7933 == 139);
	if (cppVar_7935) {
	cppVar_7930 = TL1;
	} else {
	BIT_VEC cppVar_7936;
	BIT_VEC cppVar_7937 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7938 = (cppVar_7937 << 3) | 5;
	cppVar_7938 = (cppVar_7938 & cppMask_un_5_);
	BIT_VEC cppVar_7939 = (0 << 5) | cppVar_7938;
	cppVar_7939 = (cppVar_7939 & cppMask_un_8_);
	bool cppVar_7941 = (cppVar_7939 == 141);
	if (cppVar_7941) {
	cppVar_7936 = TH1;
	} else {
	BIT_VEC cppVar_7942;
	BIT_VEC cppVar_7943 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7944 = (cppVar_7943 << 3) | 5;
	cppVar_7944 = (cppVar_7944 & cppMask_un_5_);
	BIT_VEC cppVar_7945 = (0 << 5) | cppVar_7944;
	cppVar_7945 = (cppVar_7945 & cppMask_un_8_);
	bool cppVar_7947 = (cppVar_7945 == 144);
	if (cppVar_7947) {
	cppVar_7942 = P1;
	} else {
	BIT_VEC cppVar_7948;
	BIT_VEC cppVar_7949 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7950 = (cppVar_7949 << 3) | 5;
	cppVar_7950 = (cppVar_7950 & cppMask_un_5_);
	BIT_VEC cppVar_7951 = (0 << 5) | cppVar_7950;
	cppVar_7951 = (cppVar_7951 & cppMask_un_8_);
	bool cppVar_7953 = (cppVar_7951 == 152);
	if (cppVar_7953) {
	cppVar_7948 = SCON;
	} else {
	BIT_VEC cppVar_7954;
	BIT_VEC cppVar_7955 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7956 = (cppVar_7955 << 3) | 5;
	cppVar_7956 = (cppVar_7956 & cppMask_un_5_);
	BIT_VEC cppVar_7957 = (0 << 5) | cppVar_7956;
	cppVar_7957 = (cppVar_7957 & cppMask_un_8_);
	bool cppVar_7959 = (cppVar_7957 == 153);
	if (cppVar_7959) {
	cppVar_7954 = SBUF;
	} else {
	BIT_VEC cppVar_7960;
	BIT_VEC cppVar_7961 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7962 = (cppVar_7961 << 3) | 5;
	cppVar_7962 = (cppVar_7962 & cppMask_un_5_);
	BIT_VEC cppVar_7963 = (0 << 5) | cppVar_7962;
	cppVar_7963 = (cppVar_7963 & cppMask_un_8_);
	bool cppVar_7965 = (cppVar_7963 == 160);
	if (cppVar_7965) {
	cppVar_7960 = P2;
	} else {
	BIT_VEC cppVar_7966;
	BIT_VEC cppVar_7967 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7968 = (cppVar_7967 << 3) | 5;
	cppVar_7968 = (cppVar_7968 & cppMask_un_5_);
	BIT_VEC cppVar_7969 = (0 << 5) | cppVar_7968;
	cppVar_7969 = (cppVar_7969 & cppMask_un_8_);
	bool cppVar_7971 = (cppVar_7969 == 168);
	if (cppVar_7971) {
	cppVar_7966 = IE;
	} else {
	BIT_VEC cppVar_7972;
	BIT_VEC cppVar_7973 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7974 = (cppVar_7973 << 3) | 5;
	cppVar_7974 = (cppVar_7974 & cppMask_un_5_);
	BIT_VEC cppVar_7975 = (0 << 5) | cppVar_7974;
	cppVar_7975 = (cppVar_7975 & cppMask_un_8_);
	bool cppVar_7977 = (cppVar_7975 == 176);
	if (cppVar_7977) {
	cppVar_7972 = P3;
	} else {
	BIT_VEC cppVar_7978;
	BIT_VEC cppVar_7979 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7980 = (cppVar_7979 << 3) | 5;
	cppVar_7980 = (cppVar_7980 & cppMask_un_5_);
	BIT_VEC cppVar_7981 = (0 << 5) | cppVar_7980;
	cppVar_7981 = (cppVar_7981 & cppMask_un_8_);
	bool cppVar_7983 = (cppVar_7981 == 184);
	if (cppVar_7983) {
	cppVar_7978 = IP;
	} else {
	BIT_VEC cppVar_7984;
	BIT_VEC cppVar_7985 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7986 = (cppVar_7985 << 3) | 5;
	cppVar_7986 = (cppVar_7986 & cppMask_un_5_);
	BIT_VEC cppVar_7987 = (0 << 5) | cppVar_7986;
	cppVar_7987 = (cppVar_7987 & cppMask_un_8_);
	bool cppVar_7989 = (cppVar_7987 == 208);
	if (cppVar_7989) {
	cppVar_7984 = PSW;
	} else {
	BIT_VEC cppVar_7990;
	BIT_VEC cppVar_7991 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7992 = (cppVar_7991 << 3) | 5;
	cppVar_7992 = (cppVar_7992 & cppMask_un_5_);
	BIT_VEC cppVar_7993 = (0 << 5) | cppVar_7992;
	cppVar_7993 = (cppVar_7993 & cppMask_un_8_);
	bool cppVar_7995 = (cppVar_7993 == 224);
	if (cppVar_7995) {
	cppVar_7990 = ACC;
	} else {
	BIT_VEC cppVar_7996;
	BIT_VEC cppVar_7997 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_7998 = (cppVar_7997 << 3) | 5;
	cppVar_7998 = (cppVar_7998 & cppMask_un_5_);
	BIT_VEC cppVar_7999 = (0 << 5) | cppVar_7998;
	cppVar_7999 = (cppVar_7999 & cppMask_un_8_);
	bool cppVar_8001 = (cppVar_7999 == 240);
	if (cppVar_8001) {
	cppVar_7996 = B;
	} else {
	cppVar_7996 = 0;
	}
	cppVar_7990 = cppVar_7996;
	}
	cppVar_7984 = cppVar_7990;
	}
	cppVar_7978 = cppVar_7984;
	}
	cppVar_7972 = cppVar_7978;
	}
	cppVar_7966 = cppVar_7972;
	}
	cppVar_7960 = cppVar_7966;
	}
	cppVar_7954 = cppVar_7960;
	}
	cppVar_7948 = cppVar_7954;
	}
	cppVar_7942 = cppVar_7948;
	}
	cppVar_7936 = cppVar_7942;
	}
	cppVar_7930 = cppVar_7936;
	}
	cppVar_7924 = cppVar_7930;
	}
	cppVar_7918 = cppVar_7924;
	}
	cppVar_7912 = cppVar_7918;
	}
	cppVar_7906 = cppVar_7912;
	}
	cppVar_7900 = cppVar_7906;
	}
	cppVar_7894 = cppVar_7900;
	}
	cppVar_7888 = cppVar_7894;
	}
	cppVar_7882 = cppVar_7888;
	}
	cppVar_7876 = cppVar_7882;
	}
	cppVar_7863 = cppVar_7876;
	}
	cppVar_7857 = cppVar_7863;
	} else {
	cppVar_7857 = DPH;
	}
	cppVar_7853 = cppVar_7857;
	} else {
	BIT_VEC cppVar_8003;
	BIT_VEC cppVar_8004 = ROM.rd(PC);
	bool cppVar_8006 = (cppVar_8004 == 140);
	if (cppVar_8006) {
	BIT_VEC cppVar_8007;
	BIT_VEC cppVar_8009 = PC + 1;
	cppVar_8009 = (cppVar_8009 & cppMask_un_16_);
	BIT_VEC cppVar_8010 = ROM.rd(cppVar_8009);
	bool cppVar_8012 = (cppVar_8010 == 131);
	if (cppVar_8012) {
	BIT_VEC cppVar_8013;
	BIT_VEC cppVar_8015 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8017 = (cppVar_8015 << 3) | 4;
	cppVar_8017 = (cppVar_8017 & cppMask_un_5_);
	BIT_VEC cppVar_8018 = (0 << 5) | cppVar_8017;
	cppVar_8018 = (cppVar_8018 & cppMask_un_8_);
	BIT_VEC cppVar_8019 = (cppVar_8018 >> 7) & cppMask_un_1_;
	bool cppVar_8021 = (cppVar_8019 == 0);
	if (cppVar_8021) {
	BIT_VEC cppVar_8022 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8023 = (cppVar_8022 << 3) | 4;
	cppVar_8023 = (cppVar_8023 & cppMask_un_5_);
	BIT_VEC cppVar_8024 = (0 << 5) | cppVar_8023;
	cppVar_8024 = (cppVar_8024 & cppMask_un_8_);
	BIT_VEC cppVar_8025 = IRAM.rd(cppVar_8024);
	cppVar_8013 = cppVar_8025;
	} else {
	BIT_VEC cppVar_8026;
	BIT_VEC cppVar_8027 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8028 = (cppVar_8027 << 3) | 4;
	cppVar_8028 = (cppVar_8028 & cppMask_un_5_);
	BIT_VEC cppVar_8029 = (0 << 5) | cppVar_8028;
	cppVar_8029 = (cppVar_8029 & cppMask_un_8_);
	bool cppVar_8031 = (cppVar_8029 == 128);
	if (cppVar_8031) {
	cppVar_8026 = P0;
	} else {
	BIT_VEC cppVar_8032;
	BIT_VEC cppVar_8033 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8034 = (cppVar_8033 << 3) | 4;
	cppVar_8034 = (cppVar_8034 & cppMask_un_5_);
	BIT_VEC cppVar_8035 = (0 << 5) | cppVar_8034;
	cppVar_8035 = (cppVar_8035 & cppMask_un_8_);
	bool cppVar_8037 = (cppVar_8035 == 129);
	if (cppVar_8037) {
	cppVar_8032 = SP;
	} else {
	BIT_VEC cppVar_8038;
	BIT_VEC cppVar_8039 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8040 = (cppVar_8039 << 3) | 4;
	cppVar_8040 = (cppVar_8040 & cppMask_un_5_);
	BIT_VEC cppVar_8041 = (0 << 5) | cppVar_8040;
	cppVar_8041 = (cppVar_8041 & cppMask_un_8_);
	bool cppVar_8043 = (cppVar_8041 == 130);
	if (cppVar_8043) {
	cppVar_8038 = DPL;
	} else {
	BIT_VEC cppVar_8044;
	BIT_VEC cppVar_8045 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8046 = (cppVar_8045 << 3) | 4;
	cppVar_8046 = (cppVar_8046 & cppMask_un_5_);
	BIT_VEC cppVar_8047 = (0 << 5) | cppVar_8046;
	cppVar_8047 = (cppVar_8047 & cppMask_un_8_);
	bool cppVar_8049 = (cppVar_8047 == 131);
	if (cppVar_8049) {
	cppVar_8044 = DPH;
	} else {
	BIT_VEC cppVar_8050;
	BIT_VEC cppVar_8051 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8052 = (cppVar_8051 << 3) | 4;
	cppVar_8052 = (cppVar_8052 & cppMask_un_5_);
	BIT_VEC cppVar_8053 = (0 << 5) | cppVar_8052;
	cppVar_8053 = (cppVar_8053 & cppMask_un_8_);
	bool cppVar_8055 = (cppVar_8053 == 135);
	if (cppVar_8055) {
	cppVar_8050 = PCON;
	} else {
	BIT_VEC cppVar_8056;
	BIT_VEC cppVar_8057 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8058 = (cppVar_8057 << 3) | 4;
	cppVar_8058 = (cppVar_8058 & cppMask_un_5_);
	BIT_VEC cppVar_8059 = (0 << 5) | cppVar_8058;
	cppVar_8059 = (cppVar_8059 & cppMask_un_8_);
	bool cppVar_8061 = (cppVar_8059 == 136);
	if (cppVar_8061) {
	cppVar_8056 = TCON;
	} else {
	BIT_VEC cppVar_8062;
	BIT_VEC cppVar_8063 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8064 = (cppVar_8063 << 3) | 4;
	cppVar_8064 = (cppVar_8064 & cppMask_un_5_);
	BIT_VEC cppVar_8065 = (0 << 5) | cppVar_8064;
	cppVar_8065 = (cppVar_8065 & cppMask_un_8_);
	bool cppVar_8067 = (cppVar_8065 == 137);
	if (cppVar_8067) {
	cppVar_8062 = TMOD;
	} else {
	BIT_VEC cppVar_8068;
	BIT_VEC cppVar_8069 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8070 = (cppVar_8069 << 3) | 4;
	cppVar_8070 = (cppVar_8070 & cppMask_un_5_);
	BIT_VEC cppVar_8071 = (0 << 5) | cppVar_8070;
	cppVar_8071 = (cppVar_8071 & cppMask_un_8_);
	bool cppVar_8073 = (cppVar_8071 == 138);
	if (cppVar_8073) {
	cppVar_8068 = TL0;
	} else {
	BIT_VEC cppVar_8074;
	BIT_VEC cppVar_8075 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8076 = (cppVar_8075 << 3) | 4;
	cppVar_8076 = (cppVar_8076 & cppMask_un_5_);
	BIT_VEC cppVar_8077 = (0 << 5) | cppVar_8076;
	cppVar_8077 = (cppVar_8077 & cppMask_un_8_);
	bool cppVar_8079 = (cppVar_8077 == 140);
	if (cppVar_8079) {
	cppVar_8074 = TH0;
	} else {
	BIT_VEC cppVar_8080;
	BIT_VEC cppVar_8081 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8082 = (cppVar_8081 << 3) | 4;
	cppVar_8082 = (cppVar_8082 & cppMask_un_5_);
	BIT_VEC cppVar_8083 = (0 << 5) | cppVar_8082;
	cppVar_8083 = (cppVar_8083 & cppMask_un_8_);
	bool cppVar_8085 = (cppVar_8083 == 139);
	if (cppVar_8085) {
	cppVar_8080 = TL1;
	} else {
	BIT_VEC cppVar_8086;
	BIT_VEC cppVar_8087 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8088 = (cppVar_8087 << 3) | 4;
	cppVar_8088 = (cppVar_8088 & cppMask_un_5_);
	BIT_VEC cppVar_8089 = (0 << 5) | cppVar_8088;
	cppVar_8089 = (cppVar_8089 & cppMask_un_8_);
	bool cppVar_8091 = (cppVar_8089 == 141);
	if (cppVar_8091) {
	cppVar_8086 = TH1;
	} else {
	BIT_VEC cppVar_8092;
	BIT_VEC cppVar_8093 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8094 = (cppVar_8093 << 3) | 4;
	cppVar_8094 = (cppVar_8094 & cppMask_un_5_);
	BIT_VEC cppVar_8095 = (0 << 5) | cppVar_8094;
	cppVar_8095 = (cppVar_8095 & cppMask_un_8_);
	bool cppVar_8097 = (cppVar_8095 == 144);
	if (cppVar_8097) {
	cppVar_8092 = P1;
	} else {
	BIT_VEC cppVar_8098;
	BIT_VEC cppVar_8099 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8100 = (cppVar_8099 << 3) | 4;
	cppVar_8100 = (cppVar_8100 & cppMask_un_5_);
	BIT_VEC cppVar_8101 = (0 << 5) | cppVar_8100;
	cppVar_8101 = (cppVar_8101 & cppMask_un_8_);
	bool cppVar_8103 = (cppVar_8101 == 152);
	if (cppVar_8103) {
	cppVar_8098 = SCON;
	} else {
	BIT_VEC cppVar_8104;
	BIT_VEC cppVar_8105 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8106 = (cppVar_8105 << 3) | 4;
	cppVar_8106 = (cppVar_8106 & cppMask_un_5_);
	BIT_VEC cppVar_8107 = (0 << 5) | cppVar_8106;
	cppVar_8107 = (cppVar_8107 & cppMask_un_8_);
	bool cppVar_8109 = (cppVar_8107 == 153);
	if (cppVar_8109) {
	cppVar_8104 = SBUF;
	} else {
	BIT_VEC cppVar_8110;
	BIT_VEC cppVar_8111 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8112 = (cppVar_8111 << 3) | 4;
	cppVar_8112 = (cppVar_8112 & cppMask_un_5_);
	BIT_VEC cppVar_8113 = (0 << 5) | cppVar_8112;
	cppVar_8113 = (cppVar_8113 & cppMask_un_8_);
	bool cppVar_8115 = (cppVar_8113 == 160);
	if (cppVar_8115) {
	cppVar_8110 = P2;
	} else {
	BIT_VEC cppVar_8116;
	BIT_VEC cppVar_8117 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8118 = (cppVar_8117 << 3) | 4;
	cppVar_8118 = (cppVar_8118 & cppMask_un_5_);
	BIT_VEC cppVar_8119 = (0 << 5) | cppVar_8118;
	cppVar_8119 = (cppVar_8119 & cppMask_un_8_);
	bool cppVar_8121 = (cppVar_8119 == 168);
	if (cppVar_8121) {
	cppVar_8116 = IE;
	} else {
	BIT_VEC cppVar_8122;
	BIT_VEC cppVar_8123 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8124 = (cppVar_8123 << 3) | 4;
	cppVar_8124 = (cppVar_8124 & cppMask_un_5_);
	BIT_VEC cppVar_8125 = (0 << 5) | cppVar_8124;
	cppVar_8125 = (cppVar_8125 & cppMask_un_8_);
	bool cppVar_8127 = (cppVar_8125 == 176);
	if (cppVar_8127) {
	cppVar_8122 = P3;
	} else {
	BIT_VEC cppVar_8128;
	BIT_VEC cppVar_8129 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8130 = (cppVar_8129 << 3) | 4;
	cppVar_8130 = (cppVar_8130 & cppMask_un_5_);
	BIT_VEC cppVar_8131 = (0 << 5) | cppVar_8130;
	cppVar_8131 = (cppVar_8131 & cppMask_un_8_);
	bool cppVar_8133 = (cppVar_8131 == 184);
	if (cppVar_8133) {
	cppVar_8128 = IP;
	} else {
	BIT_VEC cppVar_8134;
	BIT_VEC cppVar_8135 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8136 = (cppVar_8135 << 3) | 4;
	cppVar_8136 = (cppVar_8136 & cppMask_un_5_);
	BIT_VEC cppVar_8137 = (0 << 5) | cppVar_8136;
	cppVar_8137 = (cppVar_8137 & cppMask_un_8_);
	bool cppVar_8139 = (cppVar_8137 == 208);
	if (cppVar_8139) {
	cppVar_8134 = PSW;
	} else {
	BIT_VEC cppVar_8140;
	BIT_VEC cppVar_8141 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8142 = (cppVar_8141 << 3) | 4;
	cppVar_8142 = (cppVar_8142 & cppMask_un_5_);
	BIT_VEC cppVar_8143 = (0 << 5) | cppVar_8142;
	cppVar_8143 = (cppVar_8143 & cppMask_un_8_);
	bool cppVar_8145 = (cppVar_8143 == 224);
	if (cppVar_8145) {
	cppVar_8140 = ACC;
	} else {
	BIT_VEC cppVar_8146;
	BIT_VEC cppVar_8147 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8148 = (cppVar_8147 << 3) | 4;
	cppVar_8148 = (cppVar_8148 & cppMask_un_5_);
	BIT_VEC cppVar_8149 = (0 << 5) | cppVar_8148;
	cppVar_8149 = (cppVar_8149 & cppMask_un_8_);
	bool cppVar_8151 = (cppVar_8149 == 240);
	if (cppVar_8151) {
	cppVar_8146 = B;
	} else {
	cppVar_8146 = 0;
	}
	cppVar_8140 = cppVar_8146;
	}
	cppVar_8134 = cppVar_8140;
	}
	cppVar_8128 = cppVar_8134;
	}
	cppVar_8122 = cppVar_8128;
	}
	cppVar_8116 = cppVar_8122;
	}
	cppVar_8110 = cppVar_8116;
	}
	cppVar_8104 = cppVar_8110;
	}
	cppVar_8098 = cppVar_8104;
	}
	cppVar_8092 = cppVar_8098;
	}
	cppVar_8086 = cppVar_8092;
	}
	cppVar_8080 = cppVar_8086;
	}
	cppVar_8074 = cppVar_8080;
	}
	cppVar_8068 = cppVar_8074;
	}
	cppVar_8062 = cppVar_8068;
	}
	cppVar_8056 = cppVar_8062;
	}
	cppVar_8050 = cppVar_8056;
	}
	cppVar_8044 = cppVar_8050;
	}
	cppVar_8038 = cppVar_8044;
	}
	cppVar_8032 = cppVar_8038;
	}
	cppVar_8026 = cppVar_8032;
	}
	cppVar_8013 = cppVar_8026;
	}
	cppVar_8007 = cppVar_8013;
	} else {
	cppVar_8007 = DPH;
	}
	cppVar_8003 = cppVar_8007;
	} else {
	BIT_VEC cppVar_8153;
	BIT_VEC cppVar_8154 = ROM.rd(PC);
	bool cppVar_8156 = (cppVar_8154 == 139);
	if (cppVar_8156) {
	BIT_VEC cppVar_8157;
	BIT_VEC cppVar_8159 = PC + 1;
	cppVar_8159 = (cppVar_8159 & cppMask_un_16_);
	BIT_VEC cppVar_8160 = ROM.rd(cppVar_8159);
	bool cppVar_8162 = (cppVar_8160 == 131);
	if (cppVar_8162) {
	BIT_VEC cppVar_8163;
	BIT_VEC cppVar_8165 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8167 = (cppVar_8165 << 3) | 3;
	cppVar_8167 = (cppVar_8167 & cppMask_un_5_);
	BIT_VEC cppVar_8168 = (0 << 5) | cppVar_8167;
	cppVar_8168 = (cppVar_8168 & cppMask_un_8_);
	BIT_VEC cppVar_8169 = (cppVar_8168 >> 7) & cppMask_un_1_;
	bool cppVar_8171 = (cppVar_8169 == 0);
	if (cppVar_8171) {
	BIT_VEC cppVar_8172 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8173 = (cppVar_8172 << 3) | 3;
	cppVar_8173 = (cppVar_8173 & cppMask_un_5_);
	BIT_VEC cppVar_8174 = (0 << 5) | cppVar_8173;
	cppVar_8174 = (cppVar_8174 & cppMask_un_8_);
	BIT_VEC cppVar_8175 = IRAM.rd(cppVar_8174);
	cppVar_8163 = cppVar_8175;
	} else {
	BIT_VEC cppVar_8176;
	BIT_VEC cppVar_8177 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8178 = (cppVar_8177 << 3) | 3;
	cppVar_8178 = (cppVar_8178 & cppMask_un_5_);
	BIT_VEC cppVar_8179 = (0 << 5) | cppVar_8178;
	cppVar_8179 = (cppVar_8179 & cppMask_un_8_);
	bool cppVar_8181 = (cppVar_8179 == 128);
	if (cppVar_8181) {
	cppVar_8176 = P0;
	} else {
	BIT_VEC cppVar_8182;
	BIT_VEC cppVar_8183 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8184 = (cppVar_8183 << 3) | 3;
	cppVar_8184 = (cppVar_8184 & cppMask_un_5_);
	BIT_VEC cppVar_8185 = (0 << 5) | cppVar_8184;
	cppVar_8185 = (cppVar_8185 & cppMask_un_8_);
	bool cppVar_8187 = (cppVar_8185 == 129);
	if (cppVar_8187) {
	cppVar_8182 = SP;
	} else {
	BIT_VEC cppVar_8188;
	BIT_VEC cppVar_8189 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8190 = (cppVar_8189 << 3) | 3;
	cppVar_8190 = (cppVar_8190 & cppMask_un_5_);
	BIT_VEC cppVar_8191 = (0 << 5) | cppVar_8190;
	cppVar_8191 = (cppVar_8191 & cppMask_un_8_);
	bool cppVar_8193 = (cppVar_8191 == 130);
	if (cppVar_8193) {
	cppVar_8188 = DPL;
	} else {
	BIT_VEC cppVar_8194;
	BIT_VEC cppVar_8195 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8196 = (cppVar_8195 << 3) | 3;
	cppVar_8196 = (cppVar_8196 & cppMask_un_5_);
	BIT_VEC cppVar_8197 = (0 << 5) | cppVar_8196;
	cppVar_8197 = (cppVar_8197 & cppMask_un_8_);
	bool cppVar_8199 = (cppVar_8197 == 131);
	if (cppVar_8199) {
	cppVar_8194 = DPH;
	} else {
	BIT_VEC cppVar_8200;
	BIT_VEC cppVar_8201 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8202 = (cppVar_8201 << 3) | 3;
	cppVar_8202 = (cppVar_8202 & cppMask_un_5_);
	BIT_VEC cppVar_8203 = (0 << 5) | cppVar_8202;
	cppVar_8203 = (cppVar_8203 & cppMask_un_8_);
	bool cppVar_8205 = (cppVar_8203 == 135);
	if (cppVar_8205) {
	cppVar_8200 = PCON;
	} else {
	BIT_VEC cppVar_8206;
	BIT_VEC cppVar_8207 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8208 = (cppVar_8207 << 3) | 3;
	cppVar_8208 = (cppVar_8208 & cppMask_un_5_);
	BIT_VEC cppVar_8209 = (0 << 5) | cppVar_8208;
	cppVar_8209 = (cppVar_8209 & cppMask_un_8_);
	bool cppVar_8211 = (cppVar_8209 == 136);
	if (cppVar_8211) {
	cppVar_8206 = TCON;
	} else {
	BIT_VEC cppVar_8212;
	BIT_VEC cppVar_8213 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8214 = (cppVar_8213 << 3) | 3;
	cppVar_8214 = (cppVar_8214 & cppMask_un_5_);
	BIT_VEC cppVar_8215 = (0 << 5) | cppVar_8214;
	cppVar_8215 = (cppVar_8215 & cppMask_un_8_);
	bool cppVar_8217 = (cppVar_8215 == 137);
	if (cppVar_8217) {
	cppVar_8212 = TMOD;
	} else {
	BIT_VEC cppVar_8218;
	BIT_VEC cppVar_8219 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8220 = (cppVar_8219 << 3) | 3;
	cppVar_8220 = (cppVar_8220 & cppMask_un_5_);
	BIT_VEC cppVar_8221 = (0 << 5) | cppVar_8220;
	cppVar_8221 = (cppVar_8221 & cppMask_un_8_);
	bool cppVar_8223 = (cppVar_8221 == 138);
	if (cppVar_8223) {
	cppVar_8218 = TL0;
	} else {
	BIT_VEC cppVar_8224;
	BIT_VEC cppVar_8225 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8226 = (cppVar_8225 << 3) | 3;
	cppVar_8226 = (cppVar_8226 & cppMask_un_5_);
	BIT_VEC cppVar_8227 = (0 << 5) | cppVar_8226;
	cppVar_8227 = (cppVar_8227 & cppMask_un_8_);
	bool cppVar_8229 = (cppVar_8227 == 140);
	if (cppVar_8229) {
	cppVar_8224 = TH0;
	} else {
	BIT_VEC cppVar_8230;
	BIT_VEC cppVar_8231 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8232 = (cppVar_8231 << 3) | 3;
	cppVar_8232 = (cppVar_8232 & cppMask_un_5_);
	BIT_VEC cppVar_8233 = (0 << 5) | cppVar_8232;
	cppVar_8233 = (cppVar_8233 & cppMask_un_8_);
	bool cppVar_8235 = (cppVar_8233 == 139);
	if (cppVar_8235) {
	cppVar_8230 = TL1;
	} else {
	BIT_VEC cppVar_8236;
	BIT_VEC cppVar_8237 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8238 = (cppVar_8237 << 3) | 3;
	cppVar_8238 = (cppVar_8238 & cppMask_un_5_);
	BIT_VEC cppVar_8239 = (0 << 5) | cppVar_8238;
	cppVar_8239 = (cppVar_8239 & cppMask_un_8_);
	bool cppVar_8241 = (cppVar_8239 == 141);
	if (cppVar_8241) {
	cppVar_8236 = TH1;
	} else {
	BIT_VEC cppVar_8242;
	BIT_VEC cppVar_8243 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8244 = (cppVar_8243 << 3) | 3;
	cppVar_8244 = (cppVar_8244 & cppMask_un_5_);
	BIT_VEC cppVar_8245 = (0 << 5) | cppVar_8244;
	cppVar_8245 = (cppVar_8245 & cppMask_un_8_);
	bool cppVar_8247 = (cppVar_8245 == 144);
	if (cppVar_8247) {
	cppVar_8242 = P1;
	} else {
	BIT_VEC cppVar_8248;
	BIT_VEC cppVar_8249 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8250 = (cppVar_8249 << 3) | 3;
	cppVar_8250 = (cppVar_8250 & cppMask_un_5_);
	BIT_VEC cppVar_8251 = (0 << 5) | cppVar_8250;
	cppVar_8251 = (cppVar_8251 & cppMask_un_8_);
	bool cppVar_8253 = (cppVar_8251 == 152);
	if (cppVar_8253) {
	cppVar_8248 = SCON;
	} else {
	BIT_VEC cppVar_8254;
	BIT_VEC cppVar_8255 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8256 = (cppVar_8255 << 3) | 3;
	cppVar_8256 = (cppVar_8256 & cppMask_un_5_);
	BIT_VEC cppVar_8257 = (0 << 5) | cppVar_8256;
	cppVar_8257 = (cppVar_8257 & cppMask_un_8_);
	bool cppVar_8259 = (cppVar_8257 == 153);
	if (cppVar_8259) {
	cppVar_8254 = SBUF;
	} else {
	BIT_VEC cppVar_8260;
	BIT_VEC cppVar_8261 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8262 = (cppVar_8261 << 3) | 3;
	cppVar_8262 = (cppVar_8262 & cppMask_un_5_);
	BIT_VEC cppVar_8263 = (0 << 5) | cppVar_8262;
	cppVar_8263 = (cppVar_8263 & cppMask_un_8_);
	bool cppVar_8265 = (cppVar_8263 == 160);
	if (cppVar_8265) {
	cppVar_8260 = P2;
	} else {
	BIT_VEC cppVar_8266;
	BIT_VEC cppVar_8267 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8268 = (cppVar_8267 << 3) | 3;
	cppVar_8268 = (cppVar_8268 & cppMask_un_5_);
	BIT_VEC cppVar_8269 = (0 << 5) | cppVar_8268;
	cppVar_8269 = (cppVar_8269 & cppMask_un_8_);
	bool cppVar_8271 = (cppVar_8269 == 168);
	if (cppVar_8271) {
	cppVar_8266 = IE;
	} else {
	BIT_VEC cppVar_8272;
	BIT_VEC cppVar_8273 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8274 = (cppVar_8273 << 3) | 3;
	cppVar_8274 = (cppVar_8274 & cppMask_un_5_);
	BIT_VEC cppVar_8275 = (0 << 5) | cppVar_8274;
	cppVar_8275 = (cppVar_8275 & cppMask_un_8_);
	bool cppVar_8277 = (cppVar_8275 == 176);
	if (cppVar_8277) {
	cppVar_8272 = P3;
	} else {
	BIT_VEC cppVar_8278;
	BIT_VEC cppVar_8279 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8280 = (cppVar_8279 << 3) | 3;
	cppVar_8280 = (cppVar_8280 & cppMask_un_5_);
	BIT_VEC cppVar_8281 = (0 << 5) | cppVar_8280;
	cppVar_8281 = (cppVar_8281 & cppMask_un_8_);
	bool cppVar_8283 = (cppVar_8281 == 184);
	if (cppVar_8283) {
	cppVar_8278 = IP;
	} else {
	BIT_VEC cppVar_8284;
	BIT_VEC cppVar_8285 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8286 = (cppVar_8285 << 3) | 3;
	cppVar_8286 = (cppVar_8286 & cppMask_un_5_);
	BIT_VEC cppVar_8287 = (0 << 5) | cppVar_8286;
	cppVar_8287 = (cppVar_8287 & cppMask_un_8_);
	bool cppVar_8289 = (cppVar_8287 == 208);
	if (cppVar_8289) {
	cppVar_8284 = PSW;
	} else {
	BIT_VEC cppVar_8290;
	BIT_VEC cppVar_8291 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8292 = (cppVar_8291 << 3) | 3;
	cppVar_8292 = (cppVar_8292 & cppMask_un_5_);
	BIT_VEC cppVar_8293 = (0 << 5) | cppVar_8292;
	cppVar_8293 = (cppVar_8293 & cppMask_un_8_);
	bool cppVar_8295 = (cppVar_8293 == 224);
	if (cppVar_8295) {
	cppVar_8290 = ACC;
	} else {
	BIT_VEC cppVar_8296;
	BIT_VEC cppVar_8297 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8298 = (cppVar_8297 << 3) | 3;
	cppVar_8298 = (cppVar_8298 & cppMask_un_5_);
	BIT_VEC cppVar_8299 = (0 << 5) | cppVar_8298;
	cppVar_8299 = (cppVar_8299 & cppMask_un_8_);
	bool cppVar_8301 = (cppVar_8299 == 240);
	if (cppVar_8301) {
	cppVar_8296 = B;
	} else {
	cppVar_8296 = 0;
	}
	cppVar_8290 = cppVar_8296;
	}
	cppVar_8284 = cppVar_8290;
	}
	cppVar_8278 = cppVar_8284;
	}
	cppVar_8272 = cppVar_8278;
	}
	cppVar_8266 = cppVar_8272;
	}
	cppVar_8260 = cppVar_8266;
	}
	cppVar_8254 = cppVar_8260;
	}
	cppVar_8248 = cppVar_8254;
	}
	cppVar_8242 = cppVar_8248;
	}
	cppVar_8236 = cppVar_8242;
	}
	cppVar_8230 = cppVar_8236;
	}
	cppVar_8224 = cppVar_8230;
	}
	cppVar_8218 = cppVar_8224;
	}
	cppVar_8212 = cppVar_8218;
	}
	cppVar_8206 = cppVar_8212;
	}
	cppVar_8200 = cppVar_8206;
	}
	cppVar_8194 = cppVar_8200;
	}
	cppVar_8188 = cppVar_8194;
	}
	cppVar_8182 = cppVar_8188;
	}
	cppVar_8176 = cppVar_8182;
	}
	cppVar_8163 = cppVar_8176;
	}
	cppVar_8157 = cppVar_8163;
	} else {
	cppVar_8157 = DPH;
	}
	cppVar_8153 = cppVar_8157;
	} else {
	BIT_VEC cppVar_8303;
	BIT_VEC cppVar_8304 = ROM.rd(PC);
	bool cppVar_8306 = (cppVar_8304 == 138);
	if (cppVar_8306) {
	BIT_VEC cppVar_8307;
	BIT_VEC cppVar_8309 = PC + 1;
	cppVar_8309 = (cppVar_8309 & cppMask_un_16_);
	BIT_VEC cppVar_8310 = ROM.rd(cppVar_8309);
	bool cppVar_8312 = (cppVar_8310 == 131);
	if (cppVar_8312) {
	BIT_VEC cppVar_8313;
	BIT_VEC cppVar_8315 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8317 = (cppVar_8315 << 3) | 2;
	cppVar_8317 = (cppVar_8317 & cppMask_un_5_);
	BIT_VEC cppVar_8318 = (0 << 5) | cppVar_8317;
	cppVar_8318 = (cppVar_8318 & cppMask_un_8_);
	BIT_VEC cppVar_8319 = (cppVar_8318 >> 7) & cppMask_un_1_;
	bool cppVar_8321 = (cppVar_8319 == 0);
	if (cppVar_8321) {
	BIT_VEC cppVar_8322 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8323 = (cppVar_8322 << 3) | 2;
	cppVar_8323 = (cppVar_8323 & cppMask_un_5_);
	BIT_VEC cppVar_8324 = (0 << 5) | cppVar_8323;
	cppVar_8324 = (cppVar_8324 & cppMask_un_8_);
	BIT_VEC cppVar_8325 = IRAM.rd(cppVar_8324);
	cppVar_8313 = cppVar_8325;
	} else {
	BIT_VEC cppVar_8326;
	BIT_VEC cppVar_8327 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8328 = (cppVar_8327 << 3) | 2;
	cppVar_8328 = (cppVar_8328 & cppMask_un_5_);
	BIT_VEC cppVar_8329 = (0 << 5) | cppVar_8328;
	cppVar_8329 = (cppVar_8329 & cppMask_un_8_);
	bool cppVar_8331 = (cppVar_8329 == 128);
	if (cppVar_8331) {
	cppVar_8326 = P0;
	} else {
	BIT_VEC cppVar_8332;
	BIT_VEC cppVar_8333 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8334 = (cppVar_8333 << 3) | 2;
	cppVar_8334 = (cppVar_8334 & cppMask_un_5_);
	BIT_VEC cppVar_8335 = (0 << 5) | cppVar_8334;
	cppVar_8335 = (cppVar_8335 & cppMask_un_8_);
	bool cppVar_8337 = (cppVar_8335 == 129);
	if (cppVar_8337) {
	cppVar_8332 = SP;
	} else {
	BIT_VEC cppVar_8338;
	BIT_VEC cppVar_8339 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8340 = (cppVar_8339 << 3) | 2;
	cppVar_8340 = (cppVar_8340 & cppMask_un_5_);
	BIT_VEC cppVar_8341 = (0 << 5) | cppVar_8340;
	cppVar_8341 = (cppVar_8341 & cppMask_un_8_);
	bool cppVar_8343 = (cppVar_8341 == 130);
	if (cppVar_8343) {
	cppVar_8338 = DPL;
	} else {
	BIT_VEC cppVar_8344;
	BIT_VEC cppVar_8345 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8346 = (cppVar_8345 << 3) | 2;
	cppVar_8346 = (cppVar_8346 & cppMask_un_5_);
	BIT_VEC cppVar_8347 = (0 << 5) | cppVar_8346;
	cppVar_8347 = (cppVar_8347 & cppMask_un_8_);
	bool cppVar_8349 = (cppVar_8347 == 131);
	if (cppVar_8349) {
	cppVar_8344 = DPH;
	} else {
	BIT_VEC cppVar_8350;
	BIT_VEC cppVar_8351 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8352 = (cppVar_8351 << 3) | 2;
	cppVar_8352 = (cppVar_8352 & cppMask_un_5_);
	BIT_VEC cppVar_8353 = (0 << 5) | cppVar_8352;
	cppVar_8353 = (cppVar_8353 & cppMask_un_8_);
	bool cppVar_8355 = (cppVar_8353 == 135);
	if (cppVar_8355) {
	cppVar_8350 = PCON;
	} else {
	BIT_VEC cppVar_8356;
	BIT_VEC cppVar_8357 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8358 = (cppVar_8357 << 3) | 2;
	cppVar_8358 = (cppVar_8358 & cppMask_un_5_);
	BIT_VEC cppVar_8359 = (0 << 5) | cppVar_8358;
	cppVar_8359 = (cppVar_8359 & cppMask_un_8_);
	bool cppVar_8361 = (cppVar_8359 == 136);
	if (cppVar_8361) {
	cppVar_8356 = TCON;
	} else {
	BIT_VEC cppVar_8362;
	BIT_VEC cppVar_8363 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8364 = (cppVar_8363 << 3) | 2;
	cppVar_8364 = (cppVar_8364 & cppMask_un_5_);
	BIT_VEC cppVar_8365 = (0 << 5) | cppVar_8364;
	cppVar_8365 = (cppVar_8365 & cppMask_un_8_);
	bool cppVar_8367 = (cppVar_8365 == 137);
	if (cppVar_8367) {
	cppVar_8362 = TMOD;
	} else {
	BIT_VEC cppVar_8368;
	BIT_VEC cppVar_8369 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8370 = (cppVar_8369 << 3) | 2;
	cppVar_8370 = (cppVar_8370 & cppMask_un_5_);
	BIT_VEC cppVar_8371 = (0 << 5) | cppVar_8370;
	cppVar_8371 = (cppVar_8371 & cppMask_un_8_);
	bool cppVar_8373 = (cppVar_8371 == 138);
	if (cppVar_8373) {
	cppVar_8368 = TL0;
	} else {
	BIT_VEC cppVar_8374;
	BIT_VEC cppVar_8375 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8376 = (cppVar_8375 << 3) | 2;
	cppVar_8376 = (cppVar_8376 & cppMask_un_5_);
	BIT_VEC cppVar_8377 = (0 << 5) | cppVar_8376;
	cppVar_8377 = (cppVar_8377 & cppMask_un_8_);
	bool cppVar_8379 = (cppVar_8377 == 140);
	if (cppVar_8379) {
	cppVar_8374 = TH0;
	} else {
	BIT_VEC cppVar_8380;
	BIT_VEC cppVar_8381 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8382 = (cppVar_8381 << 3) | 2;
	cppVar_8382 = (cppVar_8382 & cppMask_un_5_);
	BIT_VEC cppVar_8383 = (0 << 5) | cppVar_8382;
	cppVar_8383 = (cppVar_8383 & cppMask_un_8_);
	bool cppVar_8385 = (cppVar_8383 == 139);
	if (cppVar_8385) {
	cppVar_8380 = TL1;
	} else {
	BIT_VEC cppVar_8386;
	BIT_VEC cppVar_8387 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8388 = (cppVar_8387 << 3) | 2;
	cppVar_8388 = (cppVar_8388 & cppMask_un_5_);
	BIT_VEC cppVar_8389 = (0 << 5) | cppVar_8388;
	cppVar_8389 = (cppVar_8389 & cppMask_un_8_);
	bool cppVar_8391 = (cppVar_8389 == 141);
	if (cppVar_8391) {
	cppVar_8386 = TH1;
	} else {
	BIT_VEC cppVar_8392;
	BIT_VEC cppVar_8393 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8394 = (cppVar_8393 << 3) | 2;
	cppVar_8394 = (cppVar_8394 & cppMask_un_5_);
	BIT_VEC cppVar_8395 = (0 << 5) | cppVar_8394;
	cppVar_8395 = (cppVar_8395 & cppMask_un_8_);
	bool cppVar_8397 = (cppVar_8395 == 144);
	if (cppVar_8397) {
	cppVar_8392 = P1;
	} else {
	BIT_VEC cppVar_8398;
	BIT_VEC cppVar_8399 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8400 = (cppVar_8399 << 3) | 2;
	cppVar_8400 = (cppVar_8400 & cppMask_un_5_);
	BIT_VEC cppVar_8401 = (0 << 5) | cppVar_8400;
	cppVar_8401 = (cppVar_8401 & cppMask_un_8_);
	bool cppVar_8403 = (cppVar_8401 == 152);
	if (cppVar_8403) {
	cppVar_8398 = SCON;
	} else {
	BIT_VEC cppVar_8404;
	BIT_VEC cppVar_8405 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8406 = (cppVar_8405 << 3) | 2;
	cppVar_8406 = (cppVar_8406 & cppMask_un_5_);
	BIT_VEC cppVar_8407 = (0 << 5) | cppVar_8406;
	cppVar_8407 = (cppVar_8407 & cppMask_un_8_);
	bool cppVar_8409 = (cppVar_8407 == 153);
	if (cppVar_8409) {
	cppVar_8404 = SBUF;
	} else {
	BIT_VEC cppVar_8410;
	BIT_VEC cppVar_8411 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8412 = (cppVar_8411 << 3) | 2;
	cppVar_8412 = (cppVar_8412 & cppMask_un_5_);
	BIT_VEC cppVar_8413 = (0 << 5) | cppVar_8412;
	cppVar_8413 = (cppVar_8413 & cppMask_un_8_);
	bool cppVar_8415 = (cppVar_8413 == 160);
	if (cppVar_8415) {
	cppVar_8410 = P2;
	} else {
	BIT_VEC cppVar_8416;
	BIT_VEC cppVar_8417 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8418 = (cppVar_8417 << 3) | 2;
	cppVar_8418 = (cppVar_8418 & cppMask_un_5_);
	BIT_VEC cppVar_8419 = (0 << 5) | cppVar_8418;
	cppVar_8419 = (cppVar_8419 & cppMask_un_8_);
	bool cppVar_8421 = (cppVar_8419 == 168);
	if (cppVar_8421) {
	cppVar_8416 = IE;
	} else {
	BIT_VEC cppVar_8422;
	BIT_VEC cppVar_8423 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8424 = (cppVar_8423 << 3) | 2;
	cppVar_8424 = (cppVar_8424 & cppMask_un_5_);
	BIT_VEC cppVar_8425 = (0 << 5) | cppVar_8424;
	cppVar_8425 = (cppVar_8425 & cppMask_un_8_);
	bool cppVar_8427 = (cppVar_8425 == 176);
	if (cppVar_8427) {
	cppVar_8422 = P3;
	} else {
	BIT_VEC cppVar_8428;
	BIT_VEC cppVar_8429 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8430 = (cppVar_8429 << 3) | 2;
	cppVar_8430 = (cppVar_8430 & cppMask_un_5_);
	BIT_VEC cppVar_8431 = (0 << 5) | cppVar_8430;
	cppVar_8431 = (cppVar_8431 & cppMask_un_8_);
	bool cppVar_8433 = (cppVar_8431 == 184);
	if (cppVar_8433) {
	cppVar_8428 = IP;
	} else {
	BIT_VEC cppVar_8434;
	BIT_VEC cppVar_8435 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8436 = (cppVar_8435 << 3) | 2;
	cppVar_8436 = (cppVar_8436 & cppMask_un_5_);
	BIT_VEC cppVar_8437 = (0 << 5) | cppVar_8436;
	cppVar_8437 = (cppVar_8437 & cppMask_un_8_);
	bool cppVar_8439 = (cppVar_8437 == 208);
	if (cppVar_8439) {
	cppVar_8434 = PSW;
	} else {
	BIT_VEC cppVar_8440;
	BIT_VEC cppVar_8441 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8442 = (cppVar_8441 << 3) | 2;
	cppVar_8442 = (cppVar_8442 & cppMask_un_5_);
	BIT_VEC cppVar_8443 = (0 << 5) | cppVar_8442;
	cppVar_8443 = (cppVar_8443 & cppMask_un_8_);
	bool cppVar_8445 = (cppVar_8443 == 224);
	if (cppVar_8445) {
	cppVar_8440 = ACC;
	} else {
	BIT_VEC cppVar_8446;
	BIT_VEC cppVar_8447 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8448 = (cppVar_8447 << 3) | 2;
	cppVar_8448 = (cppVar_8448 & cppMask_un_5_);
	BIT_VEC cppVar_8449 = (0 << 5) | cppVar_8448;
	cppVar_8449 = (cppVar_8449 & cppMask_un_8_);
	bool cppVar_8451 = (cppVar_8449 == 240);
	if (cppVar_8451) {
	cppVar_8446 = B;
	} else {
	cppVar_8446 = 0;
	}
	cppVar_8440 = cppVar_8446;
	}
	cppVar_8434 = cppVar_8440;
	}
	cppVar_8428 = cppVar_8434;
	}
	cppVar_8422 = cppVar_8428;
	}
	cppVar_8416 = cppVar_8422;
	}
	cppVar_8410 = cppVar_8416;
	}
	cppVar_8404 = cppVar_8410;
	}
	cppVar_8398 = cppVar_8404;
	}
	cppVar_8392 = cppVar_8398;
	}
	cppVar_8386 = cppVar_8392;
	}
	cppVar_8380 = cppVar_8386;
	}
	cppVar_8374 = cppVar_8380;
	}
	cppVar_8368 = cppVar_8374;
	}
	cppVar_8362 = cppVar_8368;
	}
	cppVar_8356 = cppVar_8362;
	}
	cppVar_8350 = cppVar_8356;
	}
	cppVar_8344 = cppVar_8350;
	}
	cppVar_8338 = cppVar_8344;
	}
	cppVar_8332 = cppVar_8338;
	}
	cppVar_8326 = cppVar_8332;
	}
	cppVar_8313 = cppVar_8326;
	}
	cppVar_8307 = cppVar_8313;
	} else {
	cppVar_8307 = DPH;
	}
	cppVar_8303 = cppVar_8307;
	} else {
	BIT_VEC cppVar_8453;
	BIT_VEC cppVar_8454 = ROM.rd(PC);
	bool cppVar_8456 = (cppVar_8454 == 137);
	if (cppVar_8456) {
	BIT_VEC cppVar_8457;
	BIT_VEC cppVar_8459 = PC + 1;
	cppVar_8459 = (cppVar_8459 & cppMask_un_16_);
	BIT_VEC cppVar_8460 = ROM.rd(cppVar_8459);
	bool cppVar_8462 = (cppVar_8460 == 131);
	if (cppVar_8462) {
	BIT_VEC cppVar_8463;
	BIT_VEC cppVar_8465 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8467 = (cppVar_8465 << 3) | 1;
	cppVar_8467 = (cppVar_8467 & cppMask_un_5_);
	BIT_VEC cppVar_8468 = (0 << 5) | cppVar_8467;
	cppVar_8468 = (cppVar_8468 & cppMask_un_8_);
	BIT_VEC cppVar_8469 = (cppVar_8468 >> 7) & cppMask_un_1_;
	bool cppVar_8471 = (cppVar_8469 == 0);
	if (cppVar_8471) {
	BIT_VEC cppVar_8472 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8473 = (cppVar_8472 << 3) | 1;
	cppVar_8473 = (cppVar_8473 & cppMask_un_5_);
	BIT_VEC cppVar_8474 = (0 << 5) | cppVar_8473;
	cppVar_8474 = (cppVar_8474 & cppMask_un_8_);
	BIT_VEC cppVar_8475 = IRAM.rd(cppVar_8474);
	cppVar_8463 = cppVar_8475;
	} else {
	BIT_VEC cppVar_8476;
	BIT_VEC cppVar_8477 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8478 = (cppVar_8477 << 3) | 1;
	cppVar_8478 = (cppVar_8478 & cppMask_un_5_);
	BIT_VEC cppVar_8479 = (0 << 5) | cppVar_8478;
	cppVar_8479 = (cppVar_8479 & cppMask_un_8_);
	bool cppVar_8481 = (cppVar_8479 == 128);
	if (cppVar_8481) {
	cppVar_8476 = P0;
	} else {
	BIT_VEC cppVar_8482;
	BIT_VEC cppVar_8483 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8484 = (cppVar_8483 << 3) | 1;
	cppVar_8484 = (cppVar_8484 & cppMask_un_5_);
	BIT_VEC cppVar_8485 = (0 << 5) | cppVar_8484;
	cppVar_8485 = (cppVar_8485 & cppMask_un_8_);
	bool cppVar_8487 = (cppVar_8485 == 129);
	if (cppVar_8487) {
	cppVar_8482 = SP;
	} else {
	BIT_VEC cppVar_8488;
	BIT_VEC cppVar_8489 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8490 = (cppVar_8489 << 3) | 1;
	cppVar_8490 = (cppVar_8490 & cppMask_un_5_);
	BIT_VEC cppVar_8491 = (0 << 5) | cppVar_8490;
	cppVar_8491 = (cppVar_8491 & cppMask_un_8_);
	bool cppVar_8493 = (cppVar_8491 == 130);
	if (cppVar_8493) {
	cppVar_8488 = DPL;
	} else {
	BIT_VEC cppVar_8494;
	BIT_VEC cppVar_8495 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8496 = (cppVar_8495 << 3) | 1;
	cppVar_8496 = (cppVar_8496 & cppMask_un_5_);
	BIT_VEC cppVar_8497 = (0 << 5) | cppVar_8496;
	cppVar_8497 = (cppVar_8497 & cppMask_un_8_);
	bool cppVar_8499 = (cppVar_8497 == 131);
	if (cppVar_8499) {
	cppVar_8494 = DPH;
	} else {
	BIT_VEC cppVar_8500;
	BIT_VEC cppVar_8501 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8502 = (cppVar_8501 << 3) | 1;
	cppVar_8502 = (cppVar_8502 & cppMask_un_5_);
	BIT_VEC cppVar_8503 = (0 << 5) | cppVar_8502;
	cppVar_8503 = (cppVar_8503 & cppMask_un_8_);
	bool cppVar_8505 = (cppVar_8503 == 135);
	if (cppVar_8505) {
	cppVar_8500 = PCON;
	} else {
	BIT_VEC cppVar_8506;
	BIT_VEC cppVar_8507 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8508 = (cppVar_8507 << 3) | 1;
	cppVar_8508 = (cppVar_8508 & cppMask_un_5_);
	BIT_VEC cppVar_8509 = (0 << 5) | cppVar_8508;
	cppVar_8509 = (cppVar_8509 & cppMask_un_8_);
	bool cppVar_8511 = (cppVar_8509 == 136);
	if (cppVar_8511) {
	cppVar_8506 = TCON;
	} else {
	BIT_VEC cppVar_8512;
	BIT_VEC cppVar_8513 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8514 = (cppVar_8513 << 3) | 1;
	cppVar_8514 = (cppVar_8514 & cppMask_un_5_);
	BIT_VEC cppVar_8515 = (0 << 5) | cppVar_8514;
	cppVar_8515 = (cppVar_8515 & cppMask_un_8_);
	bool cppVar_8517 = (cppVar_8515 == 137);
	if (cppVar_8517) {
	cppVar_8512 = TMOD;
	} else {
	BIT_VEC cppVar_8518;
	BIT_VEC cppVar_8519 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8520 = (cppVar_8519 << 3) | 1;
	cppVar_8520 = (cppVar_8520 & cppMask_un_5_);
	BIT_VEC cppVar_8521 = (0 << 5) | cppVar_8520;
	cppVar_8521 = (cppVar_8521 & cppMask_un_8_);
	bool cppVar_8523 = (cppVar_8521 == 138);
	if (cppVar_8523) {
	cppVar_8518 = TL0;
	} else {
	BIT_VEC cppVar_8524;
	BIT_VEC cppVar_8525 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8526 = (cppVar_8525 << 3) | 1;
	cppVar_8526 = (cppVar_8526 & cppMask_un_5_);
	BIT_VEC cppVar_8527 = (0 << 5) | cppVar_8526;
	cppVar_8527 = (cppVar_8527 & cppMask_un_8_);
	bool cppVar_8529 = (cppVar_8527 == 140);
	if (cppVar_8529) {
	cppVar_8524 = TH0;
	} else {
	BIT_VEC cppVar_8530;
	BIT_VEC cppVar_8531 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8532 = (cppVar_8531 << 3) | 1;
	cppVar_8532 = (cppVar_8532 & cppMask_un_5_);
	BIT_VEC cppVar_8533 = (0 << 5) | cppVar_8532;
	cppVar_8533 = (cppVar_8533 & cppMask_un_8_);
	bool cppVar_8535 = (cppVar_8533 == 139);
	if (cppVar_8535) {
	cppVar_8530 = TL1;
	} else {
	BIT_VEC cppVar_8536;
	BIT_VEC cppVar_8537 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8538 = (cppVar_8537 << 3) | 1;
	cppVar_8538 = (cppVar_8538 & cppMask_un_5_);
	BIT_VEC cppVar_8539 = (0 << 5) | cppVar_8538;
	cppVar_8539 = (cppVar_8539 & cppMask_un_8_);
	bool cppVar_8541 = (cppVar_8539 == 141);
	if (cppVar_8541) {
	cppVar_8536 = TH1;
	} else {
	BIT_VEC cppVar_8542;
	BIT_VEC cppVar_8543 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8544 = (cppVar_8543 << 3) | 1;
	cppVar_8544 = (cppVar_8544 & cppMask_un_5_);
	BIT_VEC cppVar_8545 = (0 << 5) | cppVar_8544;
	cppVar_8545 = (cppVar_8545 & cppMask_un_8_);
	bool cppVar_8547 = (cppVar_8545 == 144);
	if (cppVar_8547) {
	cppVar_8542 = P1;
	} else {
	BIT_VEC cppVar_8548;
	BIT_VEC cppVar_8549 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8550 = (cppVar_8549 << 3) | 1;
	cppVar_8550 = (cppVar_8550 & cppMask_un_5_);
	BIT_VEC cppVar_8551 = (0 << 5) | cppVar_8550;
	cppVar_8551 = (cppVar_8551 & cppMask_un_8_);
	bool cppVar_8553 = (cppVar_8551 == 152);
	if (cppVar_8553) {
	cppVar_8548 = SCON;
	} else {
	BIT_VEC cppVar_8554;
	BIT_VEC cppVar_8555 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8556 = (cppVar_8555 << 3) | 1;
	cppVar_8556 = (cppVar_8556 & cppMask_un_5_);
	BIT_VEC cppVar_8557 = (0 << 5) | cppVar_8556;
	cppVar_8557 = (cppVar_8557 & cppMask_un_8_);
	bool cppVar_8559 = (cppVar_8557 == 153);
	if (cppVar_8559) {
	cppVar_8554 = SBUF;
	} else {
	BIT_VEC cppVar_8560;
	BIT_VEC cppVar_8561 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8562 = (cppVar_8561 << 3) | 1;
	cppVar_8562 = (cppVar_8562 & cppMask_un_5_);
	BIT_VEC cppVar_8563 = (0 << 5) | cppVar_8562;
	cppVar_8563 = (cppVar_8563 & cppMask_un_8_);
	bool cppVar_8565 = (cppVar_8563 == 160);
	if (cppVar_8565) {
	cppVar_8560 = P2;
	} else {
	BIT_VEC cppVar_8566;
	BIT_VEC cppVar_8567 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8568 = (cppVar_8567 << 3) | 1;
	cppVar_8568 = (cppVar_8568 & cppMask_un_5_);
	BIT_VEC cppVar_8569 = (0 << 5) | cppVar_8568;
	cppVar_8569 = (cppVar_8569 & cppMask_un_8_);
	bool cppVar_8571 = (cppVar_8569 == 168);
	if (cppVar_8571) {
	cppVar_8566 = IE;
	} else {
	BIT_VEC cppVar_8572;
	BIT_VEC cppVar_8573 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8574 = (cppVar_8573 << 3) | 1;
	cppVar_8574 = (cppVar_8574 & cppMask_un_5_);
	BIT_VEC cppVar_8575 = (0 << 5) | cppVar_8574;
	cppVar_8575 = (cppVar_8575 & cppMask_un_8_);
	bool cppVar_8577 = (cppVar_8575 == 176);
	if (cppVar_8577) {
	cppVar_8572 = P3;
	} else {
	BIT_VEC cppVar_8578;
	BIT_VEC cppVar_8579 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8580 = (cppVar_8579 << 3) | 1;
	cppVar_8580 = (cppVar_8580 & cppMask_un_5_);
	BIT_VEC cppVar_8581 = (0 << 5) | cppVar_8580;
	cppVar_8581 = (cppVar_8581 & cppMask_un_8_);
	bool cppVar_8583 = (cppVar_8581 == 184);
	if (cppVar_8583) {
	cppVar_8578 = IP;
	} else {
	BIT_VEC cppVar_8584;
	BIT_VEC cppVar_8585 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8586 = (cppVar_8585 << 3) | 1;
	cppVar_8586 = (cppVar_8586 & cppMask_un_5_);
	BIT_VEC cppVar_8587 = (0 << 5) | cppVar_8586;
	cppVar_8587 = (cppVar_8587 & cppMask_un_8_);
	bool cppVar_8589 = (cppVar_8587 == 208);
	if (cppVar_8589) {
	cppVar_8584 = PSW;
	} else {
	BIT_VEC cppVar_8590;
	BIT_VEC cppVar_8591 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8592 = (cppVar_8591 << 3) | 1;
	cppVar_8592 = (cppVar_8592 & cppMask_un_5_);
	BIT_VEC cppVar_8593 = (0 << 5) | cppVar_8592;
	cppVar_8593 = (cppVar_8593 & cppMask_un_8_);
	bool cppVar_8595 = (cppVar_8593 == 224);
	if (cppVar_8595) {
	cppVar_8590 = ACC;
	} else {
	BIT_VEC cppVar_8596;
	BIT_VEC cppVar_8597 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8598 = (cppVar_8597 << 3) | 1;
	cppVar_8598 = (cppVar_8598 & cppMask_un_5_);
	BIT_VEC cppVar_8599 = (0 << 5) | cppVar_8598;
	cppVar_8599 = (cppVar_8599 & cppMask_un_8_);
	bool cppVar_8601 = (cppVar_8599 == 240);
	if (cppVar_8601) {
	cppVar_8596 = B;
	} else {
	cppVar_8596 = 0;
	}
	cppVar_8590 = cppVar_8596;
	}
	cppVar_8584 = cppVar_8590;
	}
	cppVar_8578 = cppVar_8584;
	}
	cppVar_8572 = cppVar_8578;
	}
	cppVar_8566 = cppVar_8572;
	}
	cppVar_8560 = cppVar_8566;
	}
	cppVar_8554 = cppVar_8560;
	}
	cppVar_8548 = cppVar_8554;
	}
	cppVar_8542 = cppVar_8548;
	}
	cppVar_8536 = cppVar_8542;
	}
	cppVar_8530 = cppVar_8536;
	}
	cppVar_8524 = cppVar_8530;
	}
	cppVar_8518 = cppVar_8524;
	}
	cppVar_8512 = cppVar_8518;
	}
	cppVar_8506 = cppVar_8512;
	}
	cppVar_8500 = cppVar_8506;
	}
	cppVar_8494 = cppVar_8500;
	}
	cppVar_8488 = cppVar_8494;
	}
	cppVar_8482 = cppVar_8488;
	}
	cppVar_8476 = cppVar_8482;
	}
	cppVar_8463 = cppVar_8476;
	}
	cppVar_8457 = cppVar_8463;
	} else {
	cppVar_8457 = DPH;
	}
	cppVar_8453 = cppVar_8457;
	} else {
	BIT_VEC cppVar_8603;
	BIT_VEC cppVar_8604 = ROM.rd(PC);
	bool cppVar_8606 = (cppVar_8604 == 136);
	if (cppVar_8606) {
	BIT_VEC cppVar_8607;
	BIT_VEC cppVar_8609 = PC + 1;
	cppVar_8609 = (cppVar_8609 & cppMask_un_16_);
	BIT_VEC cppVar_8610 = ROM.rd(cppVar_8609);
	bool cppVar_8612 = (cppVar_8610 == 131);
	if (cppVar_8612) {
	BIT_VEC cppVar_8613;
	BIT_VEC cppVar_8615 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8617 = (cppVar_8615 << 3) | 0;
	cppVar_8617 = (cppVar_8617 & cppMask_un_5_);
	BIT_VEC cppVar_8618 = (0 << 5) | cppVar_8617;
	cppVar_8618 = (cppVar_8618 & cppMask_un_8_);
	BIT_VEC cppVar_8619 = (cppVar_8618 >> 7) & cppMask_un_1_;
	bool cppVar_8621 = (cppVar_8619 == 0);
	if (cppVar_8621) {
	BIT_VEC cppVar_8622 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8623 = (cppVar_8622 << 3) | 0;
	cppVar_8623 = (cppVar_8623 & cppMask_un_5_);
	BIT_VEC cppVar_8624 = (0 << 5) | cppVar_8623;
	cppVar_8624 = (cppVar_8624 & cppMask_un_8_);
	BIT_VEC cppVar_8625 = IRAM.rd(cppVar_8624);
	cppVar_8613 = cppVar_8625;
	} else {
	BIT_VEC cppVar_8626;
	BIT_VEC cppVar_8627 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8628 = (cppVar_8627 << 3) | 0;
	cppVar_8628 = (cppVar_8628 & cppMask_un_5_);
	BIT_VEC cppVar_8629 = (0 << 5) | cppVar_8628;
	cppVar_8629 = (cppVar_8629 & cppMask_un_8_);
	bool cppVar_8631 = (cppVar_8629 == 128);
	if (cppVar_8631) {
	cppVar_8626 = P0;
	} else {
	BIT_VEC cppVar_8632;
	BIT_VEC cppVar_8633 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8634 = (cppVar_8633 << 3) | 0;
	cppVar_8634 = (cppVar_8634 & cppMask_un_5_);
	BIT_VEC cppVar_8635 = (0 << 5) | cppVar_8634;
	cppVar_8635 = (cppVar_8635 & cppMask_un_8_);
	bool cppVar_8637 = (cppVar_8635 == 129);
	if (cppVar_8637) {
	cppVar_8632 = SP;
	} else {
	BIT_VEC cppVar_8638;
	BIT_VEC cppVar_8639 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8640 = (cppVar_8639 << 3) | 0;
	cppVar_8640 = (cppVar_8640 & cppMask_un_5_);
	BIT_VEC cppVar_8641 = (0 << 5) | cppVar_8640;
	cppVar_8641 = (cppVar_8641 & cppMask_un_8_);
	bool cppVar_8643 = (cppVar_8641 == 130);
	if (cppVar_8643) {
	cppVar_8638 = DPL;
	} else {
	BIT_VEC cppVar_8644;
	BIT_VEC cppVar_8645 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8646 = (cppVar_8645 << 3) | 0;
	cppVar_8646 = (cppVar_8646 & cppMask_un_5_);
	BIT_VEC cppVar_8647 = (0 << 5) | cppVar_8646;
	cppVar_8647 = (cppVar_8647 & cppMask_un_8_);
	bool cppVar_8649 = (cppVar_8647 == 131);
	if (cppVar_8649) {
	cppVar_8644 = DPH;
	} else {
	BIT_VEC cppVar_8650;
	BIT_VEC cppVar_8651 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8652 = (cppVar_8651 << 3) | 0;
	cppVar_8652 = (cppVar_8652 & cppMask_un_5_);
	BIT_VEC cppVar_8653 = (0 << 5) | cppVar_8652;
	cppVar_8653 = (cppVar_8653 & cppMask_un_8_);
	bool cppVar_8655 = (cppVar_8653 == 135);
	if (cppVar_8655) {
	cppVar_8650 = PCON;
	} else {
	BIT_VEC cppVar_8656;
	BIT_VEC cppVar_8657 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8658 = (cppVar_8657 << 3) | 0;
	cppVar_8658 = (cppVar_8658 & cppMask_un_5_);
	BIT_VEC cppVar_8659 = (0 << 5) | cppVar_8658;
	cppVar_8659 = (cppVar_8659 & cppMask_un_8_);
	bool cppVar_8661 = (cppVar_8659 == 136);
	if (cppVar_8661) {
	cppVar_8656 = TCON;
	} else {
	BIT_VEC cppVar_8662;
	BIT_VEC cppVar_8663 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8664 = (cppVar_8663 << 3) | 0;
	cppVar_8664 = (cppVar_8664 & cppMask_un_5_);
	BIT_VEC cppVar_8665 = (0 << 5) | cppVar_8664;
	cppVar_8665 = (cppVar_8665 & cppMask_un_8_);
	bool cppVar_8667 = (cppVar_8665 == 137);
	if (cppVar_8667) {
	cppVar_8662 = TMOD;
	} else {
	BIT_VEC cppVar_8668;
	BIT_VEC cppVar_8669 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8670 = (cppVar_8669 << 3) | 0;
	cppVar_8670 = (cppVar_8670 & cppMask_un_5_);
	BIT_VEC cppVar_8671 = (0 << 5) | cppVar_8670;
	cppVar_8671 = (cppVar_8671 & cppMask_un_8_);
	bool cppVar_8673 = (cppVar_8671 == 138);
	if (cppVar_8673) {
	cppVar_8668 = TL0;
	} else {
	BIT_VEC cppVar_8674;
	BIT_VEC cppVar_8675 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8676 = (cppVar_8675 << 3) | 0;
	cppVar_8676 = (cppVar_8676 & cppMask_un_5_);
	BIT_VEC cppVar_8677 = (0 << 5) | cppVar_8676;
	cppVar_8677 = (cppVar_8677 & cppMask_un_8_);
	bool cppVar_8679 = (cppVar_8677 == 140);
	if (cppVar_8679) {
	cppVar_8674 = TH0;
	} else {
	BIT_VEC cppVar_8680;
	BIT_VEC cppVar_8681 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8682 = (cppVar_8681 << 3) | 0;
	cppVar_8682 = (cppVar_8682 & cppMask_un_5_);
	BIT_VEC cppVar_8683 = (0 << 5) | cppVar_8682;
	cppVar_8683 = (cppVar_8683 & cppMask_un_8_);
	bool cppVar_8685 = (cppVar_8683 == 139);
	if (cppVar_8685) {
	cppVar_8680 = TL1;
	} else {
	BIT_VEC cppVar_8686;
	BIT_VEC cppVar_8687 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8688 = (cppVar_8687 << 3) | 0;
	cppVar_8688 = (cppVar_8688 & cppMask_un_5_);
	BIT_VEC cppVar_8689 = (0 << 5) | cppVar_8688;
	cppVar_8689 = (cppVar_8689 & cppMask_un_8_);
	bool cppVar_8691 = (cppVar_8689 == 141);
	if (cppVar_8691) {
	cppVar_8686 = TH1;
	} else {
	BIT_VEC cppVar_8692;
	BIT_VEC cppVar_8693 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8694 = (cppVar_8693 << 3) | 0;
	cppVar_8694 = (cppVar_8694 & cppMask_un_5_);
	BIT_VEC cppVar_8695 = (0 << 5) | cppVar_8694;
	cppVar_8695 = (cppVar_8695 & cppMask_un_8_);
	bool cppVar_8697 = (cppVar_8695 == 144);
	if (cppVar_8697) {
	cppVar_8692 = P1;
	} else {
	BIT_VEC cppVar_8698;
	BIT_VEC cppVar_8699 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8700 = (cppVar_8699 << 3) | 0;
	cppVar_8700 = (cppVar_8700 & cppMask_un_5_);
	BIT_VEC cppVar_8701 = (0 << 5) | cppVar_8700;
	cppVar_8701 = (cppVar_8701 & cppMask_un_8_);
	bool cppVar_8703 = (cppVar_8701 == 152);
	if (cppVar_8703) {
	cppVar_8698 = SCON;
	} else {
	BIT_VEC cppVar_8704;
	BIT_VEC cppVar_8705 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8706 = (cppVar_8705 << 3) | 0;
	cppVar_8706 = (cppVar_8706 & cppMask_un_5_);
	BIT_VEC cppVar_8707 = (0 << 5) | cppVar_8706;
	cppVar_8707 = (cppVar_8707 & cppMask_un_8_);
	bool cppVar_8709 = (cppVar_8707 == 153);
	if (cppVar_8709) {
	cppVar_8704 = SBUF;
	} else {
	BIT_VEC cppVar_8710;
	BIT_VEC cppVar_8711 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8712 = (cppVar_8711 << 3) | 0;
	cppVar_8712 = (cppVar_8712 & cppMask_un_5_);
	BIT_VEC cppVar_8713 = (0 << 5) | cppVar_8712;
	cppVar_8713 = (cppVar_8713 & cppMask_un_8_);
	bool cppVar_8715 = (cppVar_8713 == 160);
	if (cppVar_8715) {
	cppVar_8710 = P2;
	} else {
	BIT_VEC cppVar_8716;
	BIT_VEC cppVar_8717 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8718 = (cppVar_8717 << 3) | 0;
	cppVar_8718 = (cppVar_8718 & cppMask_un_5_);
	BIT_VEC cppVar_8719 = (0 << 5) | cppVar_8718;
	cppVar_8719 = (cppVar_8719 & cppMask_un_8_);
	bool cppVar_8721 = (cppVar_8719 == 168);
	if (cppVar_8721) {
	cppVar_8716 = IE;
	} else {
	BIT_VEC cppVar_8722;
	BIT_VEC cppVar_8723 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8724 = (cppVar_8723 << 3) | 0;
	cppVar_8724 = (cppVar_8724 & cppMask_un_5_);
	BIT_VEC cppVar_8725 = (0 << 5) | cppVar_8724;
	cppVar_8725 = (cppVar_8725 & cppMask_un_8_);
	bool cppVar_8727 = (cppVar_8725 == 176);
	if (cppVar_8727) {
	cppVar_8722 = P3;
	} else {
	BIT_VEC cppVar_8728;
	BIT_VEC cppVar_8729 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8730 = (cppVar_8729 << 3) | 0;
	cppVar_8730 = (cppVar_8730 & cppMask_un_5_);
	BIT_VEC cppVar_8731 = (0 << 5) | cppVar_8730;
	cppVar_8731 = (cppVar_8731 & cppMask_un_8_);
	bool cppVar_8733 = (cppVar_8731 == 184);
	if (cppVar_8733) {
	cppVar_8728 = IP;
	} else {
	BIT_VEC cppVar_8734;
	BIT_VEC cppVar_8735 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8736 = (cppVar_8735 << 3) | 0;
	cppVar_8736 = (cppVar_8736 & cppMask_un_5_);
	BIT_VEC cppVar_8737 = (0 << 5) | cppVar_8736;
	cppVar_8737 = (cppVar_8737 & cppMask_un_8_);
	bool cppVar_8739 = (cppVar_8737 == 208);
	if (cppVar_8739) {
	cppVar_8734 = PSW;
	} else {
	BIT_VEC cppVar_8740;
	BIT_VEC cppVar_8741 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8742 = (cppVar_8741 << 3) | 0;
	cppVar_8742 = (cppVar_8742 & cppMask_un_5_);
	BIT_VEC cppVar_8743 = (0 << 5) | cppVar_8742;
	cppVar_8743 = (cppVar_8743 & cppMask_un_8_);
	bool cppVar_8745 = (cppVar_8743 == 224);
	if (cppVar_8745) {
	cppVar_8740 = ACC;
	} else {
	BIT_VEC cppVar_8746;
	BIT_VEC cppVar_8747 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8748 = (cppVar_8747 << 3) | 0;
	cppVar_8748 = (cppVar_8748 & cppMask_un_5_);
	BIT_VEC cppVar_8749 = (0 << 5) | cppVar_8748;
	cppVar_8749 = (cppVar_8749 & cppMask_un_8_);
	bool cppVar_8751 = (cppVar_8749 == 240);
	if (cppVar_8751) {
	cppVar_8746 = B;
	} else {
	cppVar_8746 = 0;
	}
	cppVar_8740 = cppVar_8746;
	}
	cppVar_8734 = cppVar_8740;
	}
	cppVar_8728 = cppVar_8734;
	}
	cppVar_8722 = cppVar_8728;
	}
	cppVar_8716 = cppVar_8722;
	}
	cppVar_8710 = cppVar_8716;
	}
	cppVar_8704 = cppVar_8710;
	}
	cppVar_8698 = cppVar_8704;
	}
	cppVar_8692 = cppVar_8698;
	}
	cppVar_8686 = cppVar_8692;
	}
	cppVar_8680 = cppVar_8686;
	}
	cppVar_8674 = cppVar_8680;
	}
	cppVar_8668 = cppVar_8674;
	}
	cppVar_8662 = cppVar_8668;
	}
	cppVar_8656 = cppVar_8662;
	}
	cppVar_8650 = cppVar_8656;
	}
	cppVar_8644 = cppVar_8650;
	}
	cppVar_8638 = cppVar_8644;
	}
	cppVar_8632 = cppVar_8638;
	}
	cppVar_8626 = cppVar_8632;
	}
	cppVar_8613 = cppVar_8626;
	}
	cppVar_8607 = cppVar_8613;
	} else {
	cppVar_8607 = DPH;
	}
	cppVar_8603 = cppVar_8607;
	} else {
	BIT_VEC cppVar_8753;
	BIT_VEC cppVar_8754 = ROM.rd(PC);
	bool cppVar_8756 = (cppVar_8754 == 135);
	if (cppVar_8756) {
	BIT_VEC cppVar_8757;
	BIT_VEC cppVar_8759 = PC + 1;
	cppVar_8759 = (cppVar_8759 & cppMask_un_16_);
	BIT_VEC cppVar_8760 = ROM.rd(cppVar_8759);
	bool cppVar_8762 = (cppVar_8760 == 131);
	if (cppVar_8762) {
	BIT_VEC cppVar_8764 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8766 = (cppVar_8764 << 3) | 1;
	cppVar_8766 = (cppVar_8766 & cppMask_un_5_);
	BIT_VEC cppVar_8767 = (0 << 5) | cppVar_8766;
	cppVar_8767 = (cppVar_8767 & cppMask_un_8_);
	BIT_VEC cppVar_8768 = IRAM.rd(cppVar_8767);
	BIT_VEC cppVar_8769 = IRAM.rd(cppVar_8768);
	cppVar_8757 = cppVar_8769;
	} else {
	cppVar_8757 = DPH;
	}
	cppVar_8753 = cppVar_8757;
	} else {
	BIT_VEC cppVar_8770;
	BIT_VEC cppVar_8771 = ROM.rd(PC);
	bool cppVar_8773 = (cppVar_8771 == 134);
	if (cppVar_8773) {
	BIT_VEC cppVar_8774;
	BIT_VEC cppVar_8776 = PC + 1;
	cppVar_8776 = (cppVar_8776 & cppMask_un_16_);
	BIT_VEC cppVar_8777 = ROM.rd(cppVar_8776);
	bool cppVar_8779 = (cppVar_8777 == 131);
	if (cppVar_8779) {
	BIT_VEC cppVar_8781 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_8783 = (cppVar_8781 << 3) | 0;
	cppVar_8783 = (cppVar_8783 & cppMask_un_5_);
	BIT_VEC cppVar_8784 = (0 << 5) | cppVar_8783;
	cppVar_8784 = (cppVar_8784 & cppMask_un_8_);
	BIT_VEC cppVar_8785 = IRAM.rd(cppVar_8784);
	BIT_VEC cppVar_8786 = IRAM.rd(cppVar_8785);
	cppVar_8774 = cppVar_8786;
	} else {
	cppVar_8774 = DPH;
	}
	cppVar_8770 = cppVar_8774;
	} else {
	BIT_VEC cppVar_8787;
	BIT_VEC cppVar_8788 = ROM.rd(PC);
	bool cppVar_8790 = (cppVar_8788 == 133);
	if (cppVar_8790) {
	BIT_VEC cppVar_8791;
	BIT_VEC cppVar_8793 = PC + 2;
	cppVar_8793 = (cppVar_8793 & cppMask_un_16_);
	BIT_VEC cppVar_8794 = ROM.rd(cppVar_8793);
	bool cppVar_8796 = (cppVar_8794 == 131);
	if (cppVar_8796) {
	BIT_VEC cppVar_8797;
	BIT_VEC cppVar_8799 = PC + 1;
	cppVar_8799 = (cppVar_8799 & cppMask_un_16_);
	BIT_VEC cppVar_8800 = ROM.rd(cppVar_8799);
	BIT_VEC cppVar_8801 = (cppVar_8800 >> 7) & cppMask_un_1_;
	bool cppVar_8803 = (cppVar_8801 == 0);
	if (cppVar_8803) {
	BIT_VEC cppVar_8804 = PC + 1;
	cppVar_8804 = (cppVar_8804 & cppMask_un_16_);
	BIT_VEC cppVar_8805 = ROM.rd(cppVar_8804);
	BIT_VEC cppVar_8806 = IRAM.rd(cppVar_8805);
	cppVar_8797 = cppVar_8806;
	} else {
	BIT_VEC cppVar_8807;
	BIT_VEC cppVar_8808 = PC + 1;
	cppVar_8808 = (cppVar_8808 & cppMask_un_16_);
	BIT_VEC cppVar_8809 = ROM.rd(cppVar_8808);
	bool cppVar_8811 = (cppVar_8809 == 128);
	if (cppVar_8811) {
	cppVar_8807 = P0;
	} else {
	BIT_VEC cppVar_8812;
	BIT_VEC cppVar_8813 = PC + 1;
	cppVar_8813 = (cppVar_8813 & cppMask_un_16_);
	BIT_VEC cppVar_8814 = ROM.rd(cppVar_8813);
	bool cppVar_8816 = (cppVar_8814 == 129);
	if (cppVar_8816) {
	cppVar_8812 = SP;
	} else {
	BIT_VEC cppVar_8817;
	BIT_VEC cppVar_8818 = PC + 1;
	cppVar_8818 = (cppVar_8818 & cppMask_un_16_);
	BIT_VEC cppVar_8819 = ROM.rd(cppVar_8818);
	bool cppVar_8821 = (cppVar_8819 == 130);
	if (cppVar_8821) {
	cppVar_8817 = DPL;
	} else {
	BIT_VEC cppVar_8822;
	BIT_VEC cppVar_8823 = PC + 1;
	cppVar_8823 = (cppVar_8823 & cppMask_un_16_);
	BIT_VEC cppVar_8824 = ROM.rd(cppVar_8823);
	bool cppVar_8826 = (cppVar_8824 == 131);
	if (cppVar_8826) {
	cppVar_8822 = DPH;
	} else {
	BIT_VEC cppVar_8827;
	BIT_VEC cppVar_8828 = PC + 1;
	cppVar_8828 = (cppVar_8828 & cppMask_un_16_);
	BIT_VEC cppVar_8829 = ROM.rd(cppVar_8828);
	bool cppVar_8831 = (cppVar_8829 == 135);
	if (cppVar_8831) {
	cppVar_8827 = PCON;
	} else {
	BIT_VEC cppVar_8832;
	BIT_VEC cppVar_8833 = PC + 1;
	cppVar_8833 = (cppVar_8833 & cppMask_un_16_);
	BIT_VEC cppVar_8834 = ROM.rd(cppVar_8833);
	bool cppVar_8836 = (cppVar_8834 == 136);
	if (cppVar_8836) {
	cppVar_8832 = TCON;
	} else {
	BIT_VEC cppVar_8837;
	BIT_VEC cppVar_8838 = PC + 1;
	cppVar_8838 = (cppVar_8838 & cppMask_un_16_);
	BIT_VEC cppVar_8839 = ROM.rd(cppVar_8838);
	bool cppVar_8841 = (cppVar_8839 == 137);
	if (cppVar_8841) {
	cppVar_8837 = TMOD;
	} else {
	BIT_VEC cppVar_8842;
	BIT_VEC cppVar_8843 = PC + 1;
	cppVar_8843 = (cppVar_8843 & cppMask_un_16_);
	BIT_VEC cppVar_8844 = ROM.rd(cppVar_8843);
	bool cppVar_8846 = (cppVar_8844 == 138);
	if (cppVar_8846) {
	cppVar_8842 = TL0;
	} else {
	BIT_VEC cppVar_8847;
	BIT_VEC cppVar_8848 = PC + 1;
	cppVar_8848 = (cppVar_8848 & cppMask_un_16_);
	BIT_VEC cppVar_8849 = ROM.rd(cppVar_8848);
	bool cppVar_8851 = (cppVar_8849 == 140);
	if (cppVar_8851) {
	cppVar_8847 = TH0;
	} else {
	BIT_VEC cppVar_8852;
	BIT_VEC cppVar_8853 = PC + 1;
	cppVar_8853 = (cppVar_8853 & cppMask_un_16_);
	BIT_VEC cppVar_8854 = ROM.rd(cppVar_8853);
	bool cppVar_8856 = (cppVar_8854 == 139);
	if (cppVar_8856) {
	cppVar_8852 = TL1;
	} else {
	BIT_VEC cppVar_8857;
	BIT_VEC cppVar_8858 = PC + 1;
	cppVar_8858 = (cppVar_8858 & cppMask_un_16_);
	BIT_VEC cppVar_8859 = ROM.rd(cppVar_8858);
	bool cppVar_8861 = (cppVar_8859 == 141);
	if (cppVar_8861) {
	cppVar_8857 = TH1;
	} else {
	BIT_VEC cppVar_8862;
	BIT_VEC cppVar_8863 = PC + 1;
	cppVar_8863 = (cppVar_8863 & cppMask_un_16_);
	BIT_VEC cppVar_8864 = ROM.rd(cppVar_8863);
	bool cppVar_8866 = (cppVar_8864 == 144);
	if (cppVar_8866) {
	cppVar_8862 = P1;
	} else {
	BIT_VEC cppVar_8867;
	BIT_VEC cppVar_8868 = PC + 1;
	cppVar_8868 = (cppVar_8868 & cppMask_un_16_);
	BIT_VEC cppVar_8869 = ROM.rd(cppVar_8868);
	bool cppVar_8871 = (cppVar_8869 == 152);
	if (cppVar_8871) {
	cppVar_8867 = SCON;
	} else {
	BIT_VEC cppVar_8872;
	BIT_VEC cppVar_8873 = PC + 1;
	cppVar_8873 = (cppVar_8873 & cppMask_un_16_);
	BIT_VEC cppVar_8874 = ROM.rd(cppVar_8873);
	bool cppVar_8876 = (cppVar_8874 == 153);
	if (cppVar_8876) {
	cppVar_8872 = SBUF;
	} else {
	BIT_VEC cppVar_8877;
	BIT_VEC cppVar_8878 = PC + 1;
	cppVar_8878 = (cppVar_8878 & cppMask_un_16_);
	BIT_VEC cppVar_8879 = ROM.rd(cppVar_8878);
	bool cppVar_8881 = (cppVar_8879 == 160);
	if (cppVar_8881) {
	cppVar_8877 = P2;
	} else {
	BIT_VEC cppVar_8882;
	BIT_VEC cppVar_8883 = PC + 1;
	cppVar_8883 = (cppVar_8883 & cppMask_un_16_);
	BIT_VEC cppVar_8884 = ROM.rd(cppVar_8883);
	bool cppVar_8886 = (cppVar_8884 == 168);
	if (cppVar_8886) {
	cppVar_8882 = IE;
	} else {
	BIT_VEC cppVar_8887;
	BIT_VEC cppVar_8888 = PC + 1;
	cppVar_8888 = (cppVar_8888 & cppMask_un_16_);
	BIT_VEC cppVar_8889 = ROM.rd(cppVar_8888);
	bool cppVar_8891 = (cppVar_8889 == 176);
	if (cppVar_8891) {
	cppVar_8887 = P3;
	} else {
	BIT_VEC cppVar_8892;
	BIT_VEC cppVar_8893 = PC + 1;
	cppVar_8893 = (cppVar_8893 & cppMask_un_16_);
	BIT_VEC cppVar_8894 = ROM.rd(cppVar_8893);
	bool cppVar_8896 = (cppVar_8894 == 184);
	if (cppVar_8896) {
	cppVar_8892 = IP;
	} else {
	BIT_VEC cppVar_8897;
	BIT_VEC cppVar_8898 = PC + 1;
	cppVar_8898 = (cppVar_8898 & cppMask_un_16_);
	BIT_VEC cppVar_8899 = ROM.rd(cppVar_8898);
	bool cppVar_8901 = (cppVar_8899 == 208);
	if (cppVar_8901) {
	cppVar_8897 = PSW;
	} else {
	BIT_VEC cppVar_8902;
	BIT_VEC cppVar_8903 = PC + 1;
	cppVar_8903 = (cppVar_8903 & cppMask_un_16_);
	BIT_VEC cppVar_8904 = ROM.rd(cppVar_8903);
	bool cppVar_8906 = (cppVar_8904 == 224);
	if (cppVar_8906) {
	cppVar_8902 = ACC;
	} else {
	BIT_VEC cppVar_8907;
	BIT_VEC cppVar_8908 = PC + 1;
	cppVar_8908 = (cppVar_8908 & cppMask_un_16_);
	BIT_VEC cppVar_8909 = ROM.rd(cppVar_8908);
	bool cppVar_8911 = (cppVar_8909 == 240);
	if (cppVar_8911) {
	cppVar_8907 = B;
	} else {
	cppVar_8907 = 0;
	}
	cppVar_8902 = cppVar_8907;
	}
	cppVar_8897 = cppVar_8902;
	}
	cppVar_8892 = cppVar_8897;
	}
	cppVar_8887 = cppVar_8892;
	}
	cppVar_8882 = cppVar_8887;
	}
	cppVar_8877 = cppVar_8882;
	}
	cppVar_8872 = cppVar_8877;
	}
	cppVar_8867 = cppVar_8872;
	}
	cppVar_8862 = cppVar_8867;
	}
	cppVar_8857 = cppVar_8862;
	}
	cppVar_8852 = cppVar_8857;
	}
	cppVar_8847 = cppVar_8852;
	}
	cppVar_8842 = cppVar_8847;
	}
	cppVar_8837 = cppVar_8842;
	}
	cppVar_8832 = cppVar_8837;
	}
	cppVar_8827 = cppVar_8832;
	}
	cppVar_8822 = cppVar_8827;
	}
	cppVar_8817 = cppVar_8822;
	}
	cppVar_8812 = cppVar_8817;
	}
	cppVar_8807 = cppVar_8812;
	}
	cppVar_8797 = cppVar_8807;
	}
	cppVar_8791 = cppVar_8797;
	} else {
	cppVar_8791 = DPH;
	}
	cppVar_8787 = cppVar_8791;
	} else {
	BIT_VEC cppVar_8913;
	BIT_VEC cppVar_8914 = ROM.rd(PC);
	bool cppVar_8916 = (cppVar_8914 == 117);
	if (cppVar_8916) {
	BIT_VEC cppVar_8917;
	BIT_VEC cppVar_8919 = PC + 1;
	cppVar_8919 = (cppVar_8919 & cppMask_un_16_);
	BIT_VEC cppVar_8920 = ROM.rd(cppVar_8919);
	bool cppVar_8922 = (cppVar_8920 == 131);
	if (cppVar_8922) {
	BIT_VEC cppVar_8924 = PC + 2;
	cppVar_8924 = (cppVar_8924 & cppMask_un_16_);
	BIT_VEC cppVar_8925 = ROM.rd(cppVar_8924);
	cppVar_8917 = cppVar_8925;
	} else {
	cppVar_8917 = DPH;
	}
	cppVar_8913 = cppVar_8917;
	} else {
	BIT_VEC cppVar_8926;
	BIT_VEC cppVar_8927 = ROM.rd(PC);
	bool cppVar_8929 = (cppVar_8927 == 99);
	if (cppVar_8929) {
	BIT_VEC cppVar_8930;
	BIT_VEC cppVar_8932 = PC + 1;
	cppVar_8932 = (cppVar_8932 & cppMask_un_16_);
	BIT_VEC cppVar_8933 = ROM.rd(cppVar_8932);
	bool cppVar_8935 = (cppVar_8933 == 131);
	if (cppVar_8935) {
	BIT_VEC cppVar_8936;
	BIT_VEC cppVar_8937 = PC + 1;
	cppVar_8937 = (cppVar_8937 & cppMask_un_16_);
	BIT_VEC cppVar_8938 = ROM.rd(cppVar_8937);
	BIT_VEC cppVar_8939 = (cppVar_8938 >> 7) & cppMask_un_1_;
	bool cppVar_8941 = (cppVar_8939 == 0);
	if (cppVar_8941) {
	BIT_VEC cppVar_8942 = PC + 1;
	cppVar_8942 = (cppVar_8942 & cppMask_un_16_);
	BIT_VEC cppVar_8943 = ROM.rd(cppVar_8942);
	BIT_VEC cppVar_8944 = IRAM.rd(cppVar_8943);
	cppVar_8936 = cppVar_8944;
	} else {
	BIT_VEC cppVar_8945;
	BIT_VEC cppVar_8946 = PC + 1;
	cppVar_8946 = (cppVar_8946 & cppMask_un_16_);
	BIT_VEC cppVar_8947 = ROM.rd(cppVar_8946);
	bool cppVar_8949 = (cppVar_8947 == 128);
	if (cppVar_8949) {
	cppVar_8945 = P0;
	} else {
	BIT_VEC cppVar_8950;
	BIT_VEC cppVar_8951 = PC + 1;
	cppVar_8951 = (cppVar_8951 & cppMask_un_16_);
	BIT_VEC cppVar_8952 = ROM.rd(cppVar_8951);
	bool cppVar_8954 = (cppVar_8952 == 129);
	if (cppVar_8954) {
	cppVar_8950 = SP;
	} else {
	BIT_VEC cppVar_8955;
	BIT_VEC cppVar_8956 = PC + 1;
	cppVar_8956 = (cppVar_8956 & cppMask_un_16_);
	BIT_VEC cppVar_8957 = ROM.rd(cppVar_8956);
	bool cppVar_8959 = (cppVar_8957 == 130);
	if (cppVar_8959) {
	cppVar_8955 = DPL;
	} else {
	BIT_VEC cppVar_8960;
	BIT_VEC cppVar_8961 = PC + 1;
	cppVar_8961 = (cppVar_8961 & cppMask_un_16_);
	BIT_VEC cppVar_8962 = ROM.rd(cppVar_8961);
	bool cppVar_8964 = (cppVar_8962 == 131);
	if (cppVar_8964) {
	cppVar_8960 = DPH;
	} else {
	BIT_VEC cppVar_8965;
	BIT_VEC cppVar_8966 = PC + 1;
	cppVar_8966 = (cppVar_8966 & cppMask_un_16_);
	BIT_VEC cppVar_8967 = ROM.rd(cppVar_8966);
	bool cppVar_8969 = (cppVar_8967 == 135);
	if (cppVar_8969) {
	cppVar_8965 = PCON;
	} else {
	BIT_VEC cppVar_8970;
	BIT_VEC cppVar_8971 = PC + 1;
	cppVar_8971 = (cppVar_8971 & cppMask_un_16_);
	BIT_VEC cppVar_8972 = ROM.rd(cppVar_8971);
	bool cppVar_8974 = (cppVar_8972 == 136);
	if (cppVar_8974) {
	cppVar_8970 = TCON;
	} else {
	BIT_VEC cppVar_8975;
	BIT_VEC cppVar_8976 = PC + 1;
	cppVar_8976 = (cppVar_8976 & cppMask_un_16_);
	BIT_VEC cppVar_8977 = ROM.rd(cppVar_8976);
	bool cppVar_8979 = (cppVar_8977 == 137);
	if (cppVar_8979) {
	cppVar_8975 = TMOD;
	} else {
	BIT_VEC cppVar_8980;
	BIT_VEC cppVar_8981 = PC + 1;
	cppVar_8981 = (cppVar_8981 & cppMask_un_16_);
	BIT_VEC cppVar_8982 = ROM.rd(cppVar_8981);
	bool cppVar_8984 = (cppVar_8982 == 138);
	if (cppVar_8984) {
	cppVar_8980 = TL0;
	} else {
	BIT_VEC cppVar_8985;
	BIT_VEC cppVar_8986 = PC + 1;
	cppVar_8986 = (cppVar_8986 & cppMask_un_16_);
	BIT_VEC cppVar_8987 = ROM.rd(cppVar_8986);
	bool cppVar_8989 = (cppVar_8987 == 140);
	if (cppVar_8989) {
	cppVar_8985 = TH0;
	} else {
	BIT_VEC cppVar_8990;
	BIT_VEC cppVar_8991 = PC + 1;
	cppVar_8991 = (cppVar_8991 & cppMask_un_16_);
	BIT_VEC cppVar_8992 = ROM.rd(cppVar_8991);
	bool cppVar_8994 = (cppVar_8992 == 139);
	if (cppVar_8994) {
	cppVar_8990 = TL1;
	} else {
	BIT_VEC cppVar_8995;
	BIT_VEC cppVar_8996 = PC + 1;
	cppVar_8996 = (cppVar_8996 & cppMask_un_16_);
	BIT_VEC cppVar_8997 = ROM.rd(cppVar_8996);
	bool cppVar_8999 = (cppVar_8997 == 141);
	if (cppVar_8999) {
	cppVar_8995 = TH1;
	} else {
	BIT_VEC cppVar_9000;
	BIT_VEC cppVar_9001 = PC + 1;
	cppVar_9001 = (cppVar_9001 & cppMask_un_16_);
	BIT_VEC cppVar_9002 = ROM.rd(cppVar_9001);
	bool cppVar_9004 = (cppVar_9002 == 144);
	if (cppVar_9004) {
	cppVar_9000 = P1;
	} else {
	BIT_VEC cppVar_9005;
	BIT_VEC cppVar_9006 = PC + 1;
	cppVar_9006 = (cppVar_9006 & cppMask_un_16_);
	BIT_VEC cppVar_9007 = ROM.rd(cppVar_9006);
	bool cppVar_9009 = (cppVar_9007 == 152);
	if (cppVar_9009) {
	cppVar_9005 = SCON;
	} else {
	BIT_VEC cppVar_9010;
	BIT_VEC cppVar_9011 = PC + 1;
	cppVar_9011 = (cppVar_9011 & cppMask_un_16_);
	BIT_VEC cppVar_9012 = ROM.rd(cppVar_9011);
	bool cppVar_9014 = (cppVar_9012 == 153);
	if (cppVar_9014) {
	cppVar_9010 = SBUF;
	} else {
	BIT_VEC cppVar_9015;
	BIT_VEC cppVar_9016 = PC + 1;
	cppVar_9016 = (cppVar_9016 & cppMask_un_16_);
	BIT_VEC cppVar_9017 = ROM.rd(cppVar_9016);
	bool cppVar_9019 = (cppVar_9017 == 160);
	if (cppVar_9019) {
	cppVar_9015 = P2;
	} else {
	BIT_VEC cppVar_9020;
	BIT_VEC cppVar_9021 = PC + 1;
	cppVar_9021 = (cppVar_9021 & cppMask_un_16_);
	BIT_VEC cppVar_9022 = ROM.rd(cppVar_9021);
	bool cppVar_9024 = (cppVar_9022 == 168);
	if (cppVar_9024) {
	cppVar_9020 = IE;
	} else {
	BIT_VEC cppVar_9025;
	BIT_VEC cppVar_9026 = PC + 1;
	cppVar_9026 = (cppVar_9026 & cppMask_un_16_);
	BIT_VEC cppVar_9027 = ROM.rd(cppVar_9026);
	bool cppVar_9029 = (cppVar_9027 == 176);
	if (cppVar_9029) {
	cppVar_9025 = P3;
	} else {
	BIT_VEC cppVar_9030;
	BIT_VEC cppVar_9031 = PC + 1;
	cppVar_9031 = (cppVar_9031 & cppMask_un_16_);
	BIT_VEC cppVar_9032 = ROM.rd(cppVar_9031);
	bool cppVar_9034 = (cppVar_9032 == 184);
	if (cppVar_9034) {
	cppVar_9030 = IP;
	} else {
	BIT_VEC cppVar_9035;
	BIT_VEC cppVar_9036 = PC + 1;
	cppVar_9036 = (cppVar_9036 & cppMask_un_16_);
	BIT_VEC cppVar_9037 = ROM.rd(cppVar_9036);
	bool cppVar_9039 = (cppVar_9037 == 208);
	if (cppVar_9039) {
	cppVar_9035 = PSW;
	} else {
	BIT_VEC cppVar_9040;
	BIT_VEC cppVar_9041 = PC + 1;
	cppVar_9041 = (cppVar_9041 & cppMask_un_16_);
	BIT_VEC cppVar_9042 = ROM.rd(cppVar_9041);
	bool cppVar_9044 = (cppVar_9042 == 224);
	if (cppVar_9044) {
	cppVar_9040 = ACC;
	} else {
	BIT_VEC cppVar_9045;
	BIT_VEC cppVar_9046 = PC + 1;
	cppVar_9046 = (cppVar_9046 & cppMask_un_16_);
	BIT_VEC cppVar_9047 = ROM.rd(cppVar_9046);
	bool cppVar_9049 = (cppVar_9047 == 240);
	if (cppVar_9049) {
	cppVar_9045 = B;
	} else {
	cppVar_9045 = 0;
	}
	cppVar_9040 = cppVar_9045;
	}
	cppVar_9035 = cppVar_9040;
	}
	cppVar_9030 = cppVar_9035;
	}
	cppVar_9025 = cppVar_9030;
	}
	cppVar_9020 = cppVar_9025;
	}
	cppVar_9015 = cppVar_9020;
	}
	cppVar_9010 = cppVar_9015;
	}
	cppVar_9005 = cppVar_9010;
	}
	cppVar_9000 = cppVar_9005;
	}
	cppVar_8995 = cppVar_9000;
	}
	cppVar_8990 = cppVar_8995;
	}
	cppVar_8985 = cppVar_8990;
	}
	cppVar_8980 = cppVar_8985;
	}
	cppVar_8975 = cppVar_8980;
	}
	cppVar_8970 = cppVar_8975;
	}
	cppVar_8965 = cppVar_8970;
	}
	cppVar_8960 = cppVar_8965;
	}
	cppVar_8955 = cppVar_8960;
	}
	cppVar_8950 = cppVar_8955;
	}
	cppVar_8945 = cppVar_8950;
	}
	cppVar_8936 = cppVar_8945;
	}
	BIT_VEC cppVar_9052 = PC + 2;
	cppVar_9052 = (cppVar_9052 & cppMask_un_16_);
	BIT_VEC cppVar_9053 = ROM.rd(cppVar_9052);
	BIT_VEC cppVar_9054 = cppVar_8936 ^ cppVar_9053;
	cppVar_8930 = cppVar_9054;
	} else {
	cppVar_8930 = DPH;
	}
	cppVar_8926 = cppVar_8930;
	} else {
	BIT_VEC cppVar_9055;
	BIT_VEC cppVar_9056 = ROM.rd(PC);
	bool cppVar_9058 = (cppVar_9056 == 98);
	if (cppVar_9058) {
	BIT_VEC cppVar_9059;
	BIT_VEC cppVar_9061 = PC + 1;
	cppVar_9061 = (cppVar_9061 & cppMask_un_16_);
	BIT_VEC cppVar_9062 = ROM.rd(cppVar_9061);
	bool cppVar_9064 = (cppVar_9062 == 131);
	if (cppVar_9064) {
	BIT_VEC cppVar_9065;
	BIT_VEC cppVar_9066 = PC + 1;
	cppVar_9066 = (cppVar_9066 & cppMask_un_16_);
	BIT_VEC cppVar_9067 = ROM.rd(cppVar_9066);
	BIT_VEC cppVar_9068 = (cppVar_9067 >> 7) & cppMask_un_1_;
	bool cppVar_9070 = (cppVar_9068 == 0);
	if (cppVar_9070) {
	BIT_VEC cppVar_9071 = PC + 1;
	cppVar_9071 = (cppVar_9071 & cppMask_un_16_);
	BIT_VEC cppVar_9072 = ROM.rd(cppVar_9071);
	BIT_VEC cppVar_9073 = IRAM.rd(cppVar_9072);
	cppVar_9065 = cppVar_9073;
	} else {
	BIT_VEC cppVar_9074;
	BIT_VEC cppVar_9075 = PC + 1;
	cppVar_9075 = (cppVar_9075 & cppMask_un_16_);
	BIT_VEC cppVar_9076 = ROM.rd(cppVar_9075);
	bool cppVar_9078 = (cppVar_9076 == 128);
	if (cppVar_9078) {
	cppVar_9074 = P0;
	} else {
	BIT_VEC cppVar_9079;
	BIT_VEC cppVar_9080 = PC + 1;
	cppVar_9080 = (cppVar_9080 & cppMask_un_16_);
	BIT_VEC cppVar_9081 = ROM.rd(cppVar_9080);
	bool cppVar_9083 = (cppVar_9081 == 129);
	if (cppVar_9083) {
	cppVar_9079 = SP;
	} else {
	BIT_VEC cppVar_9084;
	BIT_VEC cppVar_9085 = PC + 1;
	cppVar_9085 = (cppVar_9085 & cppMask_un_16_);
	BIT_VEC cppVar_9086 = ROM.rd(cppVar_9085);
	bool cppVar_9088 = (cppVar_9086 == 130);
	if (cppVar_9088) {
	cppVar_9084 = DPL;
	} else {
	BIT_VEC cppVar_9089;
	BIT_VEC cppVar_9090 = PC + 1;
	cppVar_9090 = (cppVar_9090 & cppMask_un_16_);
	BIT_VEC cppVar_9091 = ROM.rd(cppVar_9090);
	bool cppVar_9093 = (cppVar_9091 == 131);
	if (cppVar_9093) {
	cppVar_9089 = DPH;
	} else {
	BIT_VEC cppVar_9094;
	BIT_VEC cppVar_9095 = PC + 1;
	cppVar_9095 = (cppVar_9095 & cppMask_un_16_);
	BIT_VEC cppVar_9096 = ROM.rd(cppVar_9095);
	bool cppVar_9098 = (cppVar_9096 == 135);
	if (cppVar_9098) {
	cppVar_9094 = PCON;
	} else {
	BIT_VEC cppVar_9099;
	BIT_VEC cppVar_9100 = PC + 1;
	cppVar_9100 = (cppVar_9100 & cppMask_un_16_);
	BIT_VEC cppVar_9101 = ROM.rd(cppVar_9100);
	bool cppVar_9103 = (cppVar_9101 == 136);
	if (cppVar_9103) {
	cppVar_9099 = TCON;
	} else {
	BIT_VEC cppVar_9104;
	BIT_VEC cppVar_9105 = PC + 1;
	cppVar_9105 = (cppVar_9105 & cppMask_un_16_);
	BIT_VEC cppVar_9106 = ROM.rd(cppVar_9105);
	bool cppVar_9108 = (cppVar_9106 == 137);
	if (cppVar_9108) {
	cppVar_9104 = TMOD;
	} else {
	BIT_VEC cppVar_9109;
	BIT_VEC cppVar_9110 = PC + 1;
	cppVar_9110 = (cppVar_9110 & cppMask_un_16_);
	BIT_VEC cppVar_9111 = ROM.rd(cppVar_9110);
	bool cppVar_9113 = (cppVar_9111 == 138);
	if (cppVar_9113) {
	cppVar_9109 = TL0;
	} else {
	BIT_VEC cppVar_9114;
	BIT_VEC cppVar_9115 = PC + 1;
	cppVar_9115 = (cppVar_9115 & cppMask_un_16_);
	BIT_VEC cppVar_9116 = ROM.rd(cppVar_9115);
	bool cppVar_9118 = (cppVar_9116 == 140);
	if (cppVar_9118) {
	cppVar_9114 = TH0;
	} else {
	BIT_VEC cppVar_9119;
	BIT_VEC cppVar_9120 = PC + 1;
	cppVar_9120 = (cppVar_9120 & cppMask_un_16_);
	BIT_VEC cppVar_9121 = ROM.rd(cppVar_9120);
	bool cppVar_9123 = (cppVar_9121 == 139);
	if (cppVar_9123) {
	cppVar_9119 = TL1;
	} else {
	BIT_VEC cppVar_9124;
	BIT_VEC cppVar_9125 = PC + 1;
	cppVar_9125 = (cppVar_9125 & cppMask_un_16_);
	BIT_VEC cppVar_9126 = ROM.rd(cppVar_9125);
	bool cppVar_9128 = (cppVar_9126 == 141);
	if (cppVar_9128) {
	cppVar_9124 = TH1;
	} else {
	BIT_VEC cppVar_9129;
	BIT_VEC cppVar_9130 = PC + 1;
	cppVar_9130 = (cppVar_9130 & cppMask_un_16_);
	BIT_VEC cppVar_9131 = ROM.rd(cppVar_9130);
	bool cppVar_9133 = (cppVar_9131 == 144);
	if (cppVar_9133) {
	cppVar_9129 = P1;
	} else {
	BIT_VEC cppVar_9134;
	BIT_VEC cppVar_9135 = PC + 1;
	cppVar_9135 = (cppVar_9135 & cppMask_un_16_);
	BIT_VEC cppVar_9136 = ROM.rd(cppVar_9135);
	bool cppVar_9138 = (cppVar_9136 == 152);
	if (cppVar_9138) {
	cppVar_9134 = SCON;
	} else {
	BIT_VEC cppVar_9139;
	BIT_VEC cppVar_9140 = PC + 1;
	cppVar_9140 = (cppVar_9140 & cppMask_un_16_);
	BIT_VEC cppVar_9141 = ROM.rd(cppVar_9140);
	bool cppVar_9143 = (cppVar_9141 == 153);
	if (cppVar_9143) {
	cppVar_9139 = SBUF;
	} else {
	BIT_VEC cppVar_9144;
	BIT_VEC cppVar_9145 = PC + 1;
	cppVar_9145 = (cppVar_9145 & cppMask_un_16_);
	BIT_VEC cppVar_9146 = ROM.rd(cppVar_9145);
	bool cppVar_9148 = (cppVar_9146 == 160);
	if (cppVar_9148) {
	cppVar_9144 = P2;
	} else {
	BIT_VEC cppVar_9149;
	BIT_VEC cppVar_9150 = PC + 1;
	cppVar_9150 = (cppVar_9150 & cppMask_un_16_);
	BIT_VEC cppVar_9151 = ROM.rd(cppVar_9150);
	bool cppVar_9153 = (cppVar_9151 == 168);
	if (cppVar_9153) {
	cppVar_9149 = IE;
	} else {
	BIT_VEC cppVar_9154;
	BIT_VEC cppVar_9155 = PC + 1;
	cppVar_9155 = (cppVar_9155 & cppMask_un_16_);
	BIT_VEC cppVar_9156 = ROM.rd(cppVar_9155);
	bool cppVar_9158 = (cppVar_9156 == 176);
	if (cppVar_9158) {
	cppVar_9154 = P3;
	} else {
	BIT_VEC cppVar_9159;
	BIT_VEC cppVar_9160 = PC + 1;
	cppVar_9160 = (cppVar_9160 & cppMask_un_16_);
	BIT_VEC cppVar_9161 = ROM.rd(cppVar_9160);
	bool cppVar_9163 = (cppVar_9161 == 184);
	if (cppVar_9163) {
	cppVar_9159 = IP;
	} else {
	BIT_VEC cppVar_9164;
	BIT_VEC cppVar_9165 = PC + 1;
	cppVar_9165 = (cppVar_9165 & cppMask_un_16_);
	BIT_VEC cppVar_9166 = ROM.rd(cppVar_9165);
	bool cppVar_9168 = (cppVar_9166 == 208);
	if (cppVar_9168) {
	cppVar_9164 = PSW;
	} else {
	BIT_VEC cppVar_9169;
	BIT_VEC cppVar_9170 = PC + 1;
	cppVar_9170 = (cppVar_9170 & cppMask_un_16_);
	BIT_VEC cppVar_9171 = ROM.rd(cppVar_9170);
	bool cppVar_9173 = (cppVar_9171 == 224);
	if (cppVar_9173) {
	cppVar_9169 = ACC;
	} else {
	BIT_VEC cppVar_9174;
	BIT_VEC cppVar_9175 = PC + 1;
	cppVar_9175 = (cppVar_9175 & cppMask_un_16_);
	BIT_VEC cppVar_9176 = ROM.rd(cppVar_9175);
	bool cppVar_9178 = (cppVar_9176 == 240);
	if (cppVar_9178) {
	cppVar_9174 = B;
	} else {
	cppVar_9174 = 0;
	}
	cppVar_9169 = cppVar_9174;
	}
	cppVar_9164 = cppVar_9169;
	}
	cppVar_9159 = cppVar_9164;
	}
	cppVar_9154 = cppVar_9159;
	}
	cppVar_9149 = cppVar_9154;
	}
	cppVar_9144 = cppVar_9149;
	}
	cppVar_9139 = cppVar_9144;
	}
	cppVar_9134 = cppVar_9139;
	}
	cppVar_9129 = cppVar_9134;
	}
	cppVar_9124 = cppVar_9129;
	}
	cppVar_9119 = cppVar_9124;
	}
	cppVar_9114 = cppVar_9119;
	}
	cppVar_9109 = cppVar_9114;
	}
	cppVar_9104 = cppVar_9109;
	}
	cppVar_9099 = cppVar_9104;
	}
	cppVar_9094 = cppVar_9099;
	}
	cppVar_9089 = cppVar_9094;
	}
	cppVar_9084 = cppVar_9089;
	}
	cppVar_9079 = cppVar_9084;
	}
	cppVar_9074 = cppVar_9079;
	}
	cppVar_9065 = cppVar_9074;
	}
	BIT_VEC cppVar_9180 = cppVar_9065 ^ ACC;
	cppVar_9059 = cppVar_9180;
	} else {
	cppVar_9059 = DPH;
	}
	cppVar_9055 = cppVar_9059;
	} else {
	BIT_VEC cppVar_9181;
	BIT_VEC cppVar_9182 = ROM.rd(PC);
	bool cppVar_9184 = (cppVar_9182 == 83);
	if (cppVar_9184) {
	BIT_VEC cppVar_9185;
	BIT_VEC cppVar_9187 = PC + 1;
	cppVar_9187 = (cppVar_9187 & cppMask_un_16_);
	BIT_VEC cppVar_9188 = ROM.rd(cppVar_9187);
	bool cppVar_9190 = (cppVar_9188 == 131);
	if (cppVar_9190) {
	BIT_VEC cppVar_9191;
	BIT_VEC cppVar_9192 = PC + 1;
	cppVar_9192 = (cppVar_9192 & cppMask_un_16_);
	BIT_VEC cppVar_9193 = ROM.rd(cppVar_9192);
	BIT_VEC cppVar_9194 = (cppVar_9193 >> 7) & cppMask_un_1_;
	bool cppVar_9196 = (cppVar_9194 == 0);
	if (cppVar_9196) {
	BIT_VEC cppVar_9197 = PC + 1;
	cppVar_9197 = (cppVar_9197 & cppMask_un_16_);
	BIT_VEC cppVar_9198 = ROM.rd(cppVar_9197);
	BIT_VEC cppVar_9199 = IRAM.rd(cppVar_9198);
	cppVar_9191 = cppVar_9199;
	} else {
	BIT_VEC cppVar_9200;
	BIT_VEC cppVar_9201 = PC + 1;
	cppVar_9201 = (cppVar_9201 & cppMask_un_16_);
	BIT_VEC cppVar_9202 = ROM.rd(cppVar_9201);
	bool cppVar_9204 = (cppVar_9202 == 128);
	if (cppVar_9204) {
	cppVar_9200 = P0;
	} else {
	BIT_VEC cppVar_9205;
	BIT_VEC cppVar_9206 = PC + 1;
	cppVar_9206 = (cppVar_9206 & cppMask_un_16_);
	BIT_VEC cppVar_9207 = ROM.rd(cppVar_9206);
	bool cppVar_9209 = (cppVar_9207 == 129);
	if (cppVar_9209) {
	cppVar_9205 = SP;
	} else {
	BIT_VEC cppVar_9210;
	BIT_VEC cppVar_9211 = PC + 1;
	cppVar_9211 = (cppVar_9211 & cppMask_un_16_);
	BIT_VEC cppVar_9212 = ROM.rd(cppVar_9211);
	bool cppVar_9214 = (cppVar_9212 == 130);
	if (cppVar_9214) {
	cppVar_9210 = DPL;
	} else {
	BIT_VEC cppVar_9215;
	BIT_VEC cppVar_9216 = PC + 1;
	cppVar_9216 = (cppVar_9216 & cppMask_un_16_);
	BIT_VEC cppVar_9217 = ROM.rd(cppVar_9216);
	bool cppVar_9219 = (cppVar_9217 == 131);
	if (cppVar_9219) {
	cppVar_9215 = DPH;
	} else {
	BIT_VEC cppVar_9220;
	BIT_VEC cppVar_9221 = PC + 1;
	cppVar_9221 = (cppVar_9221 & cppMask_un_16_);
	BIT_VEC cppVar_9222 = ROM.rd(cppVar_9221);
	bool cppVar_9224 = (cppVar_9222 == 135);
	if (cppVar_9224) {
	cppVar_9220 = PCON;
	} else {
	BIT_VEC cppVar_9225;
	BIT_VEC cppVar_9226 = PC + 1;
	cppVar_9226 = (cppVar_9226 & cppMask_un_16_);
	BIT_VEC cppVar_9227 = ROM.rd(cppVar_9226);
	bool cppVar_9229 = (cppVar_9227 == 136);
	if (cppVar_9229) {
	cppVar_9225 = TCON;
	} else {
	BIT_VEC cppVar_9230;
	BIT_VEC cppVar_9231 = PC + 1;
	cppVar_9231 = (cppVar_9231 & cppMask_un_16_);
	BIT_VEC cppVar_9232 = ROM.rd(cppVar_9231);
	bool cppVar_9234 = (cppVar_9232 == 137);
	if (cppVar_9234) {
	cppVar_9230 = TMOD;
	} else {
	BIT_VEC cppVar_9235;
	BIT_VEC cppVar_9236 = PC + 1;
	cppVar_9236 = (cppVar_9236 & cppMask_un_16_);
	BIT_VEC cppVar_9237 = ROM.rd(cppVar_9236);
	bool cppVar_9239 = (cppVar_9237 == 138);
	if (cppVar_9239) {
	cppVar_9235 = TL0;
	} else {
	BIT_VEC cppVar_9240;
	BIT_VEC cppVar_9241 = PC + 1;
	cppVar_9241 = (cppVar_9241 & cppMask_un_16_);
	BIT_VEC cppVar_9242 = ROM.rd(cppVar_9241);
	bool cppVar_9244 = (cppVar_9242 == 140);
	if (cppVar_9244) {
	cppVar_9240 = TH0;
	} else {
	BIT_VEC cppVar_9245;
	BIT_VEC cppVar_9246 = PC + 1;
	cppVar_9246 = (cppVar_9246 & cppMask_un_16_);
	BIT_VEC cppVar_9247 = ROM.rd(cppVar_9246);
	bool cppVar_9249 = (cppVar_9247 == 139);
	if (cppVar_9249) {
	cppVar_9245 = TL1;
	} else {
	BIT_VEC cppVar_9250;
	BIT_VEC cppVar_9251 = PC + 1;
	cppVar_9251 = (cppVar_9251 & cppMask_un_16_);
	BIT_VEC cppVar_9252 = ROM.rd(cppVar_9251);
	bool cppVar_9254 = (cppVar_9252 == 141);
	if (cppVar_9254) {
	cppVar_9250 = TH1;
	} else {
	BIT_VEC cppVar_9255;
	BIT_VEC cppVar_9256 = PC + 1;
	cppVar_9256 = (cppVar_9256 & cppMask_un_16_);
	BIT_VEC cppVar_9257 = ROM.rd(cppVar_9256);
	bool cppVar_9259 = (cppVar_9257 == 144);
	if (cppVar_9259) {
	cppVar_9255 = P1;
	} else {
	BIT_VEC cppVar_9260;
	BIT_VEC cppVar_9261 = PC + 1;
	cppVar_9261 = (cppVar_9261 & cppMask_un_16_);
	BIT_VEC cppVar_9262 = ROM.rd(cppVar_9261);
	bool cppVar_9264 = (cppVar_9262 == 152);
	if (cppVar_9264) {
	cppVar_9260 = SCON;
	} else {
	BIT_VEC cppVar_9265;
	BIT_VEC cppVar_9266 = PC + 1;
	cppVar_9266 = (cppVar_9266 & cppMask_un_16_);
	BIT_VEC cppVar_9267 = ROM.rd(cppVar_9266);
	bool cppVar_9269 = (cppVar_9267 == 153);
	if (cppVar_9269) {
	cppVar_9265 = SBUF;
	} else {
	BIT_VEC cppVar_9270;
	BIT_VEC cppVar_9271 = PC + 1;
	cppVar_9271 = (cppVar_9271 & cppMask_un_16_);
	BIT_VEC cppVar_9272 = ROM.rd(cppVar_9271);
	bool cppVar_9274 = (cppVar_9272 == 160);
	if (cppVar_9274) {
	cppVar_9270 = P2;
	} else {
	BIT_VEC cppVar_9275;
	BIT_VEC cppVar_9276 = PC + 1;
	cppVar_9276 = (cppVar_9276 & cppMask_un_16_);
	BIT_VEC cppVar_9277 = ROM.rd(cppVar_9276);
	bool cppVar_9279 = (cppVar_9277 == 168);
	if (cppVar_9279) {
	cppVar_9275 = IE;
	} else {
	BIT_VEC cppVar_9280;
	BIT_VEC cppVar_9281 = PC + 1;
	cppVar_9281 = (cppVar_9281 & cppMask_un_16_);
	BIT_VEC cppVar_9282 = ROM.rd(cppVar_9281);
	bool cppVar_9284 = (cppVar_9282 == 176);
	if (cppVar_9284) {
	cppVar_9280 = P3;
	} else {
	BIT_VEC cppVar_9285;
	BIT_VEC cppVar_9286 = PC + 1;
	cppVar_9286 = (cppVar_9286 & cppMask_un_16_);
	BIT_VEC cppVar_9287 = ROM.rd(cppVar_9286);
	bool cppVar_9289 = (cppVar_9287 == 184);
	if (cppVar_9289) {
	cppVar_9285 = IP;
	} else {
	BIT_VEC cppVar_9290;
	BIT_VEC cppVar_9291 = PC + 1;
	cppVar_9291 = (cppVar_9291 & cppMask_un_16_);
	BIT_VEC cppVar_9292 = ROM.rd(cppVar_9291);
	bool cppVar_9294 = (cppVar_9292 == 208);
	if (cppVar_9294) {
	cppVar_9290 = PSW;
	} else {
	BIT_VEC cppVar_9295;
	BIT_VEC cppVar_9296 = PC + 1;
	cppVar_9296 = (cppVar_9296 & cppMask_un_16_);
	BIT_VEC cppVar_9297 = ROM.rd(cppVar_9296);
	bool cppVar_9299 = (cppVar_9297 == 224);
	if (cppVar_9299) {
	cppVar_9295 = ACC;
	} else {
	BIT_VEC cppVar_9300;
	BIT_VEC cppVar_9301 = PC + 1;
	cppVar_9301 = (cppVar_9301 & cppMask_un_16_);
	BIT_VEC cppVar_9302 = ROM.rd(cppVar_9301);
	bool cppVar_9304 = (cppVar_9302 == 240);
	if (cppVar_9304) {
	cppVar_9300 = B;
	} else {
	cppVar_9300 = 0;
	}
	cppVar_9295 = cppVar_9300;
	}
	cppVar_9290 = cppVar_9295;
	}
	cppVar_9285 = cppVar_9290;
	}
	cppVar_9280 = cppVar_9285;
	}
	cppVar_9275 = cppVar_9280;
	}
	cppVar_9270 = cppVar_9275;
	}
	cppVar_9265 = cppVar_9270;
	}
	cppVar_9260 = cppVar_9265;
	}
	cppVar_9255 = cppVar_9260;
	}
	cppVar_9250 = cppVar_9255;
	}
	cppVar_9245 = cppVar_9250;
	}
	cppVar_9240 = cppVar_9245;
	}
	cppVar_9235 = cppVar_9240;
	}
	cppVar_9230 = cppVar_9235;
	}
	cppVar_9225 = cppVar_9230;
	}
	cppVar_9220 = cppVar_9225;
	}
	cppVar_9215 = cppVar_9220;
	}
	cppVar_9210 = cppVar_9215;
	}
	cppVar_9205 = cppVar_9210;
	}
	cppVar_9200 = cppVar_9205;
	}
	cppVar_9191 = cppVar_9200;
	}
	BIT_VEC cppVar_9307 = PC + 2;
	cppVar_9307 = (cppVar_9307 & cppMask_un_16_);
	BIT_VEC cppVar_9308 = ROM.rd(cppVar_9307);
	BIT_VEC cppVar_9309 = cppVar_9191 & cppVar_9308;
	cppVar_9185 = cppVar_9309;
	} else {
	cppVar_9185 = DPH;
	}
	cppVar_9181 = cppVar_9185;
	} else {
	BIT_VEC cppVar_9310;
	BIT_VEC cppVar_9311 = ROM.rd(PC);
	bool cppVar_9313 = (cppVar_9311 == 82);
	if (cppVar_9313) {
	BIT_VEC cppVar_9314;
	BIT_VEC cppVar_9316 = PC + 1;
	cppVar_9316 = (cppVar_9316 & cppMask_un_16_);
	BIT_VEC cppVar_9317 = ROM.rd(cppVar_9316);
	bool cppVar_9319 = (cppVar_9317 == 131);
	if (cppVar_9319) {
	BIT_VEC cppVar_9320;
	BIT_VEC cppVar_9321 = PC + 1;
	cppVar_9321 = (cppVar_9321 & cppMask_un_16_);
	BIT_VEC cppVar_9322 = ROM.rd(cppVar_9321);
	BIT_VEC cppVar_9323 = (cppVar_9322 >> 7) & cppMask_un_1_;
	bool cppVar_9325 = (cppVar_9323 == 0);
	if (cppVar_9325) {
	BIT_VEC cppVar_9326 = PC + 1;
	cppVar_9326 = (cppVar_9326 & cppMask_un_16_);
	BIT_VEC cppVar_9327 = ROM.rd(cppVar_9326);
	BIT_VEC cppVar_9328 = IRAM.rd(cppVar_9327);
	cppVar_9320 = cppVar_9328;
	} else {
	BIT_VEC cppVar_9329;
	BIT_VEC cppVar_9330 = PC + 1;
	cppVar_9330 = (cppVar_9330 & cppMask_un_16_);
	BIT_VEC cppVar_9331 = ROM.rd(cppVar_9330);
	bool cppVar_9333 = (cppVar_9331 == 128);
	if (cppVar_9333) {
	cppVar_9329 = P0;
	} else {
	BIT_VEC cppVar_9334;
	BIT_VEC cppVar_9335 = PC + 1;
	cppVar_9335 = (cppVar_9335 & cppMask_un_16_);
	BIT_VEC cppVar_9336 = ROM.rd(cppVar_9335);
	bool cppVar_9338 = (cppVar_9336 == 129);
	if (cppVar_9338) {
	cppVar_9334 = SP;
	} else {
	BIT_VEC cppVar_9339;
	BIT_VEC cppVar_9340 = PC + 1;
	cppVar_9340 = (cppVar_9340 & cppMask_un_16_);
	BIT_VEC cppVar_9341 = ROM.rd(cppVar_9340);
	bool cppVar_9343 = (cppVar_9341 == 130);
	if (cppVar_9343) {
	cppVar_9339 = DPL;
	} else {
	BIT_VEC cppVar_9344;
	BIT_VEC cppVar_9345 = PC + 1;
	cppVar_9345 = (cppVar_9345 & cppMask_un_16_);
	BIT_VEC cppVar_9346 = ROM.rd(cppVar_9345);
	bool cppVar_9348 = (cppVar_9346 == 131);
	if (cppVar_9348) {
	cppVar_9344 = DPH;
	} else {
	BIT_VEC cppVar_9349;
	BIT_VEC cppVar_9350 = PC + 1;
	cppVar_9350 = (cppVar_9350 & cppMask_un_16_);
	BIT_VEC cppVar_9351 = ROM.rd(cppVar_9350);
	bool cppVar_9353 = (cppVar_9351 == 135);
	if (cppVar_9353) {
	cppVar_9349 = PCON;
	} else {
	BIT_VEC cppVar_9354;
	BIT_VEC cppVar_9355 = PC + 1;
	cppVar_9355 = (cppVar_9355 & cppMask_un_16_);
	BIT_VEC cppVar_9356 = ROM.rd(cppVar_9355);
	bool cppVar_9358 = (cppVar_9356 == 136);
	if (cppVar_9358) {
	cppVar_9354 = TCON;
	} else {
	BIT_VEC cppVar_9359;
	BIT_VEC cppVar_9360 = PC + 1;
	cppVar_9360 = (cppVar_9360 & cppMask_un_16_);
	BIT_VEC cppVar_9361 = ROM.rd(cppVar_9360);
	bool cppVar_9363 = (cppVar_9361 == 137);
	if (cppVar_9363) {
	cppVar_9359 = TMOD;
	} else {
	BIT_VEC cppVar_9364;
	BIT_VEC cppVar_9365 = PC + 1;
	cppVar_9365 = (cppVar_9365 & cppMask_un_16_);
	BIT_VEC cppVar_9366 = ROM.rd(cppVar_9365);
	bool cppVar_9368 = (cppVar_9366 == 138);
	if (cppVar_9368) {
	cppVar_9364 = TL0;
	} else {
	BIT_VEC cppVar_9369;
	BIT_VEC cppVar_9370 = PC + 1;
	cppVar_9370 = (cppVar_9370 & cppMask_un_16_);
	BIT_VEC cppVar_9371 = ROM.rd(cppVar_9370);
	bool cppVar_9373 = (cppVar_9371 == 140);
	if (cppVar_9373) {
	cppVar_9369 = TH0;
	} else {
	BIT_VEC cppVar_9374;
	BIT_VEC cppVar_9375 = PC + 1;
	cppVar_9375 = (cppVar_9375 & cppMask_un_16_);
	BIT_VEC cppVar_9376 = ROM.rd(cppVar_9375);
	bool cppVar_9378 = (cppVar_9376 == 139);
	if (cppVar_9378) {
	cppVar_9374 = TL1;
	} else {
	BIT_VEC cppVar_9379;
	BIT_VEC cppVar_9380 = PC + 1;
	cppVar_9380 = (cppVar_9380 & cppMask_un_16_);
	BIT_VEC cppVar_9381 = ROM.rd(cppVar_9380);
	bool cppVar_9383 = (cppVar_9381 == 141);
	if (cppVar_9383) {
	cppVar_9379 = TH1;
	} else {
	BIT_VEC cppVar_9384;
	BIT_VEC cppVar_9385 = PC + 1;
	cppVar_9385 = (cppVar_9385 & cppMask_un_16_);
	BIT_VEC cppVar_9386 = ROM.rd(cppVar_9385);
	bool cppVar_9388 = (cppVar_9386 == 144);
	if (cppVar_9388) {
	cppVar_9384 = P1;
	} else {
	BIT_VEC cppVar_9389;
	BIT_VEC cppVar_9390 = PC + 1;
	cppVar_9390 = (cppVar_9390 & cppMask_un_16_);
	BIT_VEC cppVar_9391 = ROM.rd(cppVar_9390);
	bool cppVar_9393 = (cppVar_9391 == 152);
	if (cppVar_9393) {
	cppVar_9389 = SCON;
	} else {
	BIT_VEC cppVar_9394;
	BIT_VEC cppVar_9395 = PC + 1;
	cppVar_9395 = (cppVar_9395 & cppMask_un_16_);
	BIT_VEC cppVar_9396 = ROM.rd(cppVar_9395);
	bool cppVar_9398 = (cppVar_9396 == 153);
	if (cppVar_9398) {
	cppVar_9394 = SBUF;
	} else {
	BIT_VEC cppVar_9399;
	BIT_VEC cppVar_9400 = PC + 1;
	cppVar_9400 = (cppVar_9400 & cppMask_un_16_);
	BIT_VEC cppVar_9401 = ROM.rd(cppVar_9400);
	bool cppVar_9403 = (cppVar_9401 == 160);
	if (cppVar_9403) {
	cppVar_9399 = P2;
	} else {
	BIT_VEC cppVar_9404;
	BIT_VEC cppVar_9405 = PC + 1;
	cppVar_9405 = (cppVar_9405 & cppMask_un_16_);
	BIT_VEC cppVar_9406 = ROM.rd(cppVar_9405);
	bool cppVar_9408 = (cppVar_9406 == 168);
	if (cppVar_9408) {
	cppVar_9404 = IE;
	} else {
	BIT_VEC cppVar_9409;
	BIT_VEC cppVar_9410 = PC + 1;
	cppVar_9410 = (cppVar_9410 & cppMask_un_16_);
	BIT_VEC cppVar_9411 = ROM.rd(cppVar_9410);
	bool cppVar_9413 = (cppVar_9411 == 176);
	if (cppVar_9413) {
	cppVar_9409 = P3;
	} else {
	BIT_VEC cppVar_9414;
	BIT_VEC cppVar_9415 = PC + 1;
	cppVar_9415 = (cppVar_9415 & cppMask_un_16_);
	BIT_VEC cppVar_9416 = ROM.rd(cppVar_9415);
	bool cppVar_9418 = (cppVar_9416 == 184);
	if (cppVar_9418) {
	cppVar_9414 = IP;
	} else {
	BIT_VEC cppVar_9419;
	BIT_VEC cppVar_9420 = PC + 1;
	cppVar_9420 = (cppVar_9420 & cppMask_un_16_);
	BIT_VEC cppVar_9421 = ROM.rd(cppVar_9420);
	bool cppVar_9423 = (cppVar_9421 == 208);
	if (cppVar_9423) {
	cppVar_9419 = PSW;
	} else {
	BIT_VEC cppVar_9424;
	BIT_VEC cppVar_9425 = PC + 1;
	cppVar_9425 = (cppVar_9425 & cppMask_un_16_);
	BIT_VEC cppVar_9426 = ROM.rd(cppVar_9425);
	bool cppVar_9428 = (cppVar_9426 == 224);
	if (cppVar_9428) {
	cppVar_9424 = ACC;
	} else {
	BIT_VEC cppVar_9429;
	BIT_VEC cppVar_9430 = PC + 1;
	cppVar_9430 = (cppVar_9430 & cppMask_un_16_);
	BIT_VEC cppVar_9431 = ROM.rd(cppVar_9430);
	bool cppVar_9433 = (cppVar_9431 == 240);
	if (cppVar_9433) {
	cppVar_9429 = B;
	} else {
	cppVar_9429 = 0;
	}
	cppVar_9424 = cppVar_9429;
	}
	cppVar_9419 = cppVar_9424;
	}
	cppVar_9414 = cppVar_9419;
	}
	cppVar_9409 = cppVar_9414;
	}
	cppVar_9404 = cppVar_9409;
	}
	cppVar_9399 = cppVar_9404;
	}
	cppVar_9394 = cppVar_9399;
	}
	cppVar_9389 = cppVar_9394;
	}
	cppVar_9384 = cppVar_9389;
	}
	cppVar_9379 = cppVar_9384;
	}
	cppVar_9374 = cppVar_9379;
	}
	cppVar_9369 = cppVar_9374;
	}
	cppVar_9364 = cppVar_9369;
	}
	cppVar_9359 = cppVar_9364;
	}
	cppVar_9354 = cppVar_9359;
	}
	cppVar_9349 = cppVar_9354;
	}
	cppVar_9344 = cppVar_9349;
	}
	cppVar_9339 = cppVar_9344;
	}
	cppVar_9334 = cppVar_9339;
	}
	cppVar_9329 = cppVar_9334;
	}
	cppVar_9320 = cppVar_9329;
	}
	BIT_VEC cppVar_9435 = cppVar_9320 & ACC;
	cppVar_9314 = cppVar_9435;
	} else {
	cppVar_9314 = DPH;
	}
	cppVar_9310 = cppVar_9314;
	} else {
	BIT_VEC cppVar_9436;
	BIT_VEC cppVar_9437 = ROM.rd(PC);
	bool cppVar_9439 = (cppVar_9437 == 67);
	if (cppVar_9439) {
	BIT_VEC cppVar_9440;
	BIT_VEC cppVar_9442 = PC + 1;
	cppVar_9442 = (cppVar_9442 & cppMask_un_16_);
	BIT_VEC cppVar_9443 = ROM.rd(cppVar_9442);
	bool cppVar_9445 = (cppVar_9443 == 131);
	if (cppVar_9445) {
	BIT_VEC cppVar_9446;
	BIT_VEC cppVar_9447 = PC + 1;
	cppVar_9447 = (cppVar_9447 & cppMask_un_16_);
	BIT_VEC cppVar_9448 = ROM.rd(cppVar_9447);
	BIT_VEC cppVar_9449 = (cppVar_9448 >> 7) & cppMask_un_1_;
	bool cppVar_9451 = (cppVar_9449 == 0);
	if (cppVar_9451) {
	BIT_VEC cppVar_9452 = PC + 1;
	cppVar_9452 = (cppVar_9452 & cppMask_un_16_);
	BIT_VEC cppVar_9453 = ROM.rd(cppVar_9452);
	BIT_VEC cppVar_9454 = IRAM.rd(cppVar_9453);
	cppVar_9446 = cppVar_9454;
	} else {
	BIT_VEC cppVar_9455;
	BIT_VEC cppVar_9456 = PC + 1;
	cppVar_9456 = (cppVar_9456 & cppMask_un_16_);
	BIT_VEC cppVar_9457 = ROM.rd(cppVar_9456);
	bool cppVar_9459 = (cppVar_9457 == 128);
	if (cppVar_9459) {
	cppVar_9455 = P0;
	} else {
	BIT_VEC cppVar_9460;
	BIT_VEC cppVar_9461 = PC + 1;
	cppVar_9461 = (cppVar_9461 & cppMask_un_16_);
	BIT_VEC cppVar_9462 = ROM.rd(cppVar_9461);
	bool cppVar_9464 = (cppVar_9462 == 129);
	if (cppVar_9464) {
	cppVar_9460 = SP;
	} else {
	BIT_VEC cppVar_9465;
	BIT_VEC cppVar_9466 = PC + 1;
	cppVar_9466 = (cppVar_9466 & cppMask_un_16_);
	BIT_VEC cppVar_9467 = ROM.rd(cppVar_9466);
	bool cppVar_9469 = (cppVar_9467 == 130);
	if (cppVar_9469) {
	cppVar_9465 = DPL;
	} else {
	BIT_VEC cppVar_9470;
	BIT_VEC cppVar_9471 = PC + 1;
	cppVar_9471 = (cppVar_9471 & cppMask_un_16_);
	BIT_VEC cppVar_9472 = ROM.rd(cppVar_9471);
	bool cppVar_9474 = (cppVar_9472 == 131);
	if (cppVar_9474) {
	cppVar_9470 = DPH;
	} else {
	BIT_VEC cppVar_9475;
	BIT_VEC cppVar_9476 = PC + 1;
	cppVar_9476 = (cppVar_9476 & cppMask_un_16_);
	BIT_VEC cppVar_9477 = ROM.rd(cppVar_9476);
	bool cppVar_9479 = (cppVar_9477 == 135);
	if (cppVar_9479) {
	cppVar_9475 = PCON;
	} else {
	BIT_VEC cppVar_9480;
	BIT_VEC cppVar_9481 = PC + 1;
	cppVar_9481 = (cppVar_9481 & cppMask_un_16_);
	BIT_VEC cppVar_9482 = ROM.rd(cppVar_9481);
	bool cppVar_9484 = (cppVar_9482 == 136);
	if (cppVar_9484) {
	cppVar_9480 = TCON;
	} else {
	BIT_VEC cppVar_9485;
	BIT_VEC cppVar_9486 = PC + 1;
	cppVar_9486 = (cppVar_9486 & cppMask_un_16_);
	BIT_VEC cppVar_9487 = ROM.rd(cppVar_9486);
	bool cppVar_9489 = (cppVar_9487 == 137);
	if (cppVar_9489) {
	cppVar_9485 = TMOD;
	} else {
	BIT_VEC cppVar_9490;
	BIT_VEC cppVar_9491 = PC + 1;
	cppVar_9491 = (cppVar_9491 & cppMask_un_16_);
	BIT_VEC cppVar_9492 = ROM.rd(cppVar_9491);
	bool cppVar_9494 = (cppVar_9492 == 138);
	if (cppVar_9494) {
	cppVar_9490 = TL0;
	} else {
	BIT_VEC cppVar_9495;
	BIT_VEC cppVar_9496 = PC + 1;
	cppVar_9496 = (cppVar_9496 & cppMask_un_16_);
	BIT_VEC cppVar_9497 = ROM.rd(cppVar_9496);
	bool cppVar_9499 = (cppVar_9497 == 140);
	if (cppVar_9499) {
	cppVar_9495 = TH0;
	} else {
	BIT_VEC cppVar_9500;
	BIT_VEC cppVar_9501 = PC + 1;
	cppVar_9501 = (cppVar_9501 & cppMask_un_16_);
	BIT_VEC cppVar_9502 = ROM.rd(cppVar_9501);
	bool cppVar_9504 = (cppVar_9502 == 139);
	if (cppVar_9504) {
	cppVar_9500 = TL1;
	} else {
	BIT_VEC cppVar_9505;
	BIT_VEC cppVar_9506 = PC + 1;
	cppVar_9506 = (cppVar_9506 & cppMask_un_16_);
	BIT_VEC cppVar_9507 = ROM.rd(cppVar_9506);
	bool cppVar_9509 = (cppVar_9507 == 141);
	if (cppVar_9509) {
	cppVar_9505 = TH1;
	} else {
	BIT_VEC cppVar_9510;
	BIT_VEC cppVar_9511 = PC + 1;
	cppVar_9511 = (cppVar_9511 & cppMask_un_16_);
	BIT_VEC cppVar_9512 = ROM.rd(cppVar_9511);
	bool cppVar_9514 = (cppVar_9512 == 144);
	if (cppVar_9514) {
	cppVar_9510 = P1;
	} else {
	BIT_VEC cppVar_9515;
	BIT_VEC cppVar_9516 = PC + 1;
	cppVar_9516 = (cppVar_9516 & cppMask_un_16_);
	BIT_VEC cppVar_9517 = ROM.rd(cppVar_9516);
	bool cppVar_9519 = (cppVar_9517 == 152);
	if (cppVar_9519) {
	cppVar_9515 = SCON;
	} else {
	BIT_VEC cppVar_9520;
	BIT_VEC cppVar_9521 = PC + 1;
	cppVar_9521 = (cppVar_9521 & cppMask_un_16_);
	BIT_VEC cppVar_9522 = ROM.rd(cppVar_9521);
	bool cppVar_9524 = (cppVar_9522 == 153);
	if (cppVar_9524) {
	cppVar_9520 = SBUF;
	} else {
	BIT_VEC cppVar_9525;
	BIT_VEC cppVar_9526 = PC + 1;
	cppVar_9526 = (cppVar_9526 & cppMask_un_16_);
	BIT_VEC cppVar_9527 = ROM.rd(cppVar_9526);
	bool cppVar_9529 = (cppVar_9527 == 160);
	if (cppVar_9529) {
	cppVar_9525 = P2;
	} else {
	BIT_VEC cppVar_9530;
	BIT_VEC cppVar_9531 = PC + 1;
	cppVar_9531 = (cppVar_9531 & cppMask_un_16_);
	BIT_VEC cppVar_9532 = ROM.rd(cppVar_9531);
	bool cppVar_9534 = (cppVar_9532 == 168);
	if (cppVar_9534) {
	cppVar_9530 = IE;
	} else {
	BIT_VEC cppVar_9535;
	BIT_VEC cppVar_9536 = PC + 1;
	cppVar_9536 = (cppVar_9536 & cppMask_un_16_);
	BIT_VEC cppVar_9537 = ROM.rd(cppVar_9536);
	bool cppVar_9539 = (cppVar_9537 == 176);
	if (cppVar_9539) {
	cppVar_9535 = P3;
	} else {
	BIT_VEC cppVar_9540;
	BIT_VEC cppVar_9541 = PC + 1;
	cppVar_9541 = (cppVar_9541 & cppMask_un_16_);
	BIT_VEC cppVar_9542 = ROM.rd(cppVar_9541);
	bool cppVar_9544 = (cppVar_9542 == 184);
	if (cppVar_9544) {
	cppVar_9540 = IP;
	} else {
	BIT_VEC cppVar_9545;
	BIT_VEC cppVar_9546 = PC + 1;
	cppVar_9546 = (cppVar_9546 & cppMask_un_16_);
	BIT_VEC cppVar_9547 = ROM.rd(cppVar_9546);
	bool cppVar_9549 = (cppVar_9547 == 208);
	if (cppVar_9549) {
	cppVar_9545 = PSW;
	} else {
	BIT_VEC cppVar_9550;
	BIT_VEC cppVar_9551 = PC + 1;
	cppVar_9551 = (cppVar_9551 & cppMask_un_16_);
	BIT_VEC cppVar_9552 = ROM.rd(cppVar_9551);
	bool cppVar_9554 = (cppVar_9552 == 224);
	if (cppVar_9554) {
	cppVar_9550 = ACC;
	} else {
	BIT_VEC cppVar_9555;
	BIT_VEC cppVar_9556 = PC + 1;
	cppVar_9556 = (cppVar_9556 & cppMask_un_16_);
	BIT_VEC cppVar_9557 = ROM.rd(cppVar_9556);
	bool cppVar_9559 = (cppVar_9557 == 240);
	if (cppVar_9559) {
	cppVar_9555 = B;
	} else {
	cppVar_9555 = 0;
	}
	cppVar_9550 = cppVar_9555;
	}
	cppVar_9545 = cppVar_9550;
	}
	cppVar_9540 = cppVar_9545;
	}
	cppVar_9535 = cppVar_9540;
	}
	cppVar_9530 = cppVar_9535;
	}
	cppVar_9525 = cppVar_9530;
	}
	cppVar_9520 = cppVar_9525;
	}
	cppVar_9515 = cppVar_9520;
	}
	cppVar_9510 = cppVar_9515;
	}
	cppVar_9505 = cppVar_9510;
	}
	cppVar_9500 = cppVar_9505;
	}
	cppVar_9495 = cppVar_9500;
	}
	cppVar_9490 = cppVar_9495;
	}
	cppVar_9485 = cppVar_9490;
	}
	cppVar_9480 = cppVar_9485;
	}
	cppVar_9475 = cppVar_9480;
	}
	cppVar_9470 = cppVar_9475;
	}
	cppVar_9465 = cppVar_9470;
	}
	cppVar_9460 = cppVar_9465;
	}
	cppVar_9455 = cppVar_9460;
	}
	cppVar_9446 = cppVar_9455;
	}
	BIT_VEC cppVar_9562 = PC + 2;
	cppVar_9562 = (cppVar_9562 & cppMask_un_16_);
	BIT_VEC cppVar_9563 = ROM.rd(cppVar_9562);
	BIT_VEC cppVar_9564 = cppVar_9446 | cppVar_9563;
	cppVar_9440 = cppVar_9564;
	} else {
	cppVar_9440 = DPH;
	}
	cppVar_9436 = cppVar_9440;
	} else {
	BIT_VEC cppVar_9565;
	BIT_VEC cppVar_9566 = ROM.rd(PC);
	bool cppVar_9568 = (cppVar_9566 == 66);
	if (cppVar_9568) {
	BIT_VEC cppVar_9569;
	BIT_VEC cppVar_9571 = PC + 1;
	cppVar_9571 = (cppVar_9571 & cppMask_un_16_);
	BIT_VEC cppVar_9572 = ROM.rd(cppVar_9571);
	bool cppVar_9574 = (cppVar_9572 == 131);
	if (cppVar_9574) {
	BIT_VEC cppVar_9575;
	BIT_VEC cppVar_9576 = PC + 1;
	cppVar_9576 = (cppVar_9576 & cppMask_un_16_);
	BIT_VEC cppVar_9577 = ROM.rd(cppVar_9576);
	BIT_VEC cppVar_9578 = (cppVar_9577 >> 7) & cppMask_un_1_;
	bool cppVar_9580 = (cppVar_9578 == 0);
	if (cppVar_9580) {
	BIT_VEC cppVar_9581 = PC + 1;
	cppVar_9581 = (cppVar_9581 & cppMask_un_16_);
	BIT_VEC cppVar_9582 = ROM.rd(cppVar_9581);
	BIT_VEC cppVar_9583 = IRAM.rd(cppVar_9582);
	cppVar_9575 = cppVar_9583;
	} else {
	BIT_VEC cppVar_9584;
	BIT_VEC cppVar_9585 = PC + 1;
	cppVar_9585 = (cppVar_9585 & cppMask_un_16_);
	BIT_VEC cppVar_9586 = ROM.rd(cppVar_9585);
	bool cppVar_9588 = (cppVar_9586 == 128);
	if (cppVar_9588) {
	cppVar_9584 = P0;
	} else {
	BIT_VEC cppVar_9589;
	BIT_VEC cppVar_9590 = PC + 1;
	cppVar_9590 = (cppVar_9590 & cppMask_un_16_);
	BIT_VEC cppVar_9591 = ROM.rd(cppVar_9590);
	bool cppVar_9593 = (cppVar_9591 == 129);
	if (cppVar_9593) {
	cppVar_9589 = SP;
	} else {
	BIT_VEC cppVar_9594;
	BIT_VEC cppVar_9595 = PC + 1;
	cppVar_9595 = (cppVar_9595 & cppMask_un_16_);
	BIT_VEC cppVar_9596 = ROM.rd(cppVar_9595);
	bool cppVar_9598 = (cppVar_9596 == 130);
	if (cppVar_9598) {
	cppVar_9594 = DPL;
	} else {
	BIT_VEC cppVar_9599;
	BIT_VEC cppVar_9600 = PC + 1;
	cppVar_9600 = (cppVar_9600 & cppMask_un_16_);
	BIT_VEC cppVar_9601 = ROM.rd(cppVar_9600);
	bool cppVar_9603 = (cppVar_9601 == 131);
	if (cppVar_9603) {
	cppVar_9599 = DPH;
	} else {
	BIT_VEC cppVar_9604;
	BIT_VEC cppVar_9605 = PC + 1;
	cppVar_9605 = (cppVar_9605 & cppMask_un_16_);
	BIT_VEC cppVar_9606 = ROM.rd(cppVar_9605);
	bool cppVar_9608 = (cppVar_9606 == 135);
	if (cppVar_9608) {
	cppVar_9604 = PCON;
	} else {
	BIT_VEC cppVar_9609;
	BIT_VEC cppVar_9610 = PC + 1;
	cppVar_9610 = (cppVar_9610 & cppMask_un_16_);
	BIT_VEC cppVar_9611 = ROM.rd(cppVar_9610);
	bool cppVar_9613 = (cppVar_9611 == 136);
	if (cppVar_9613) {
	cppVar_9609 = TCON;
	} else {
	BIT_VEC cppVar_9614;
	BIT_VEC cppVar_9615 = PC + 1;
	cppVar_9615 = (cppVar_9615 & cppMask_un_16_);
	BIT_VEC cppVar_9616 = ROM.rd(cppVar_9615);
	bool cppVar_9618 = (cppVar_9616 == 137);
	if (cppVar_9618) {
	cppVar_9614 = TMOD;
	} else {
	BIT_VEC cppVar_9619;
	BIT_VEC cppVar_9620 = PC + 1;
	cppVar_9620 = (cppVar_9620 & cppMask_un_16_);
	BIT_VEC cppVar_9621 = ROM.rd(cppVar_9620);
	bool cppVar_9623 = (cppVar_9621 == 138);
	if (cppVar_9623) {
	cppVar_9619 = TL0;
	} else {
	BIT_VEC cppVar_9624;
	BIT_VEC cppVar_9625 = PC + 1;
	cppVar_9625 = (cppVar_9625 & cppMask_un_16_);
	BIT_VEC cppVar_9626 = ROM.rd(cppVar_9625);
	bool cppVar_9628 = (cppVar_9626 == 140);
	if (cppVar_9628) {
	cppVar_9624 = TH0;
	} else {
	BIT_VEC cppVar_9629;
	BIT_VEC cppVar_9630 = PC + 1;
	cppVar_9630 = (cppVar_9630 & cppMask_un_16_);
	BIT_VEC cppVar_9631 = ROM.rd(cppVar_9630);
	bool cppVar_9633 = (cppVar_9631 == 139);
	if (cppVar_9633) {
	cppVar_9629 = TL1;
	} else {
	BIT_VEC cppVar_9634;
	BIT_VEC cppVar_9635 = PC + 1;
	cppVar_9635 = (cppVar_9635 & cppMask_un_16_);
	BIT_VEC cppVar_9636 = ROM.rd(cppVar_9635);
	bool cppVar_9638 = (cppVar_9636 == 141);
	if (cppVar_9638) {
	cppVar_9634 = TH1;
	} else {
	BIT_VEC cppVar_9639;
	BIT_VEC cppVar_9640 = PC + 1;
	cppVar_9640 = (cppVar_9640 & cppMask_un_16_);
	BIT_VEC cppVar_9641 = ROM.rd(cppVar_9640);
	bool cppVar_9643 = (cppVar_9641 == 144);
	if (cppVar_9643) {
	cppVar_9639 = P1;
	} else {
	BIT_VEC cppVar_9644;
	BIT_VEC cppVar_9645 = PC + 1;
	cppVar_9645 = (cppVar_9645 & cppMask_un_16_);
	BIT_VEC cppVar_9646 = ROM.rd(cppVar_9645);
	bool cppVar_9648 = (cppVar_9646 == 152);
	if (cppVar_9648) {
	cppVar_9644 = SCON;
	} else {
	BIT_VEC cppVar_9649;
	BIT_VEC cppVar_9650 = PC + 1;
	cppVar_9650 = (cppVar_9650 & cppMask_un_16_);
	BIT_VEC cppVar_9651 = ROM.rd(cppVar_9650);
	bool cppVar_9653 = (cppVar_9651 == 153);
	if (cppVar_9653) {
	cppVar_9649 = SBUF;
	} else {
	BIT_VEC cppVar_9654;
	BIT_VEC cppVar_9655 = PC + 1;
	cppVar_9655 = (cppVar_9655 & cppMask_un_16_);
	BIT_VEC cppVar_9656 = ROM.rd(cppVar_9655);
	bool cppVar_9658 = (cppVar_9656 == 160);
	if (cppVar_9658) {
	cppVar_9654 = P2;
	} else {
	BIT_VEC cppVar_9659;
	BIT_VEC cppVar_9660 = PC + 1;
	cppVar_9660 = (cppVar_9660 & cppMask_un_16_);
	BIT_VEC cppVar_9661 = ROM.rd(cppVar_9660);
	bool cppVar_9663 = (cppVar_9661 == 168);
	if (cppVar_9663) {
	cppVar_9659 = IE;
	} else {
	BIT_VEC cppVar_9664;
	BIT_VEC cppVar_9665 = PC + 1;
	cppVar_9665 = (cppVar_9665 & cppMask_un_16_);
	BIT_VEC cppVar_9666 = ROM.rd(cppVar_9665);
	bool cppVar_9668 = (cppVar_9666 == 176);
	if (cppVar_9668) {
	cppVar_9664 = P3;
	} else {
	BIT_VEC cppVar_9669;
	BIT_VEC cppVar_9670 = PC + 1;
	cppVar_9670 = (cppVar_9670 & cppMask_un_16_);
	BIT_VEC cppVar_9671 = ROM.rd(cppVar_9670);
	bool cppVar_9673 = (cppVar_9671 == 184);
	if (cppVar_9673) {
	cppVar_9669 = IP;
	} else {
	BIT_VEC cppVar_9674;
	BIT_VEC cppVar_9675 = PC + 1;
	cppVar_9675 = (cppVar_9675 & cppMask_un_16_);
	BIT_VEC cppVar_9676 = ROM.rd(cppVar_9675);
	bool cppVar_9678 = (cppVar_9676 == 208);
	if (cppVar_9678) {
	cppVar_9674 = PSW;
	} else {
	BIT_VEC cppVar_9679;
	BIT_VEC cppVar_9680 = PC + 1;
	cppVar_9680 = (cppVar_9680 & cppMask_un_16_);
	BIT_VEC cppVar_9681 = ROM.rd(cppVar_9680);
	bool cppVar_9683 = (cppVar_9681 == 224);
	if (cppVar_9683) {
	cppVar_9679 = ACC;
	} else {
	BIT_VEC cppVar_9684;
	BIT_VEC cppVar_9685 = PC + 1;
	cppVar_9685 = (cppVar_9685 & cppMask_un_16_);
	BIT_VEC cppVar_9686 = ROM.rd(cppVar_9685);
	bool cppVar_9688 = (cppVar_9686 == 240);
	if (cppVar_9688) {
	cppVar_9684 = B;
	} else {
	cppVar_9684 = 0;
	}
	cppVar_9679 = cppVar_9684;
	}
	cppVar_9674 = cppVar_9679;
	}
	cppVar_9669 = cppVar_9674;
	}
	cppVar_9664 = cppVar_9669;
	}
	cppVar_9659 = cppVar_9664;
	}
	cppVar_9654 = cppVar_9659;
	}
	cppVar_9649 = cppVar_9654;
	}
	cppVar_9644 = cppVar_9649;
	}
	cppVar_9639 = cppVar_9644;
	}
	cppVar_9634 = cppVar_9639;
	}
	cppVar_9629 = cppVar_9634;
	}
	cppVar_9624 = cppVar_9629;
	}
	cppVar_9619 = cppVar_9624;
	}
	cppVar_9614 = cppVar_9619;
	}
	cppVar_9609 = cppVar_9614;
	}
	cppVar_9604 = cppVar_9609;
	}
	cppVar_9599 = cppVar_9604;
	}
	cppVar_9594 = cppVar_9599;
	}
	cppVar_9589 = cppVar_9594;
	}
	cppVar_9584 = cppVar_9589;
	}
	cppVar_9575 = cppVar_9584;
	}
	BIT_VEC cppVar_9690 = cppVar_9575 | ACC;
	cppVar_9569 = cppVar_9690;
	} else {
	cppVar_9569 = DPH;
	}
	cppVar_9565 = cppVar_9569;
	} else {
	BIT_VEC cppVar_9691;
	BIT_VEC cppVar_9692 = ROM.rd(PC);
	bool cppVar_9694 = (cppVar_9692 == 213);
	BIT_VEC cppVar_9695 = ROM.rd(PC);
	bool cppVar_9697 = (cppVar_9695 == 21);
	bool cppVar_9698 = cppVar_9694 || cppVar_9697;
	if (cppVar_9698) {
	BIT_VEC cppVar_9699;
	BIT_VEC cppVar_9701 = PC + 1;
	cppVar_9701 = (cppVar_9701 & cppMask_un_16_);
	BIT_VEC cppVar_9702 = ROM.rd(cppVar_9701);
	bool cppVar_9704 = (cppVar_9702 == 131);
	if (cppVar_9704) {
	BIT_VEC cppVar_9705;
	BIT_VEC cppVar_9706 = PC + 1;
	cppVar_9706 = (cppVar_9706 & cppMask_un_16_);
	BIT_VEC cppVar_9707 = ROM.rd(cppVar_9706);
	BIT_VEC cppVar_9708 = (cppVar_9707 >> 7) & cppMask_un_1_;
	bool cppVar_9710 = (cppVar_9708 == 0);
	if (cppVar_9710) {
	BIT_VEC cppVar_9711 = PC + 1;
	cppVar_9711 = (cppVar_9711 & cppMask_un_16_);
	BIT_VEC cppVar_9712 = ROM.rd(cppVar_9711);
	BIT_VEC cppVar_9713 = IRAM.rd(cppVar_9712);
	cppVar_9705 = cppVar_9713;
	} else {
	BIT_VEC cppVar_9714;
	BIT_VEC cppVar_9715 = PC + 1;
	cppVar_9715 = (cppVar_9715 & cppMask_un_16_);
	BIT_VEC cppVar_9716 = ROM.rd(cppVar_9715);
	bool cppVar_9718 = (cppVar_9716 == 128);
	if (cppVar_9718) {
	cppVar_9714 = P0;
	} else {
	BIT_VEC cppVar_9719;
	BIT_VEC cppVar_9720 = PC + 1;
	cppVar_9720 = (cppVar_9720 & cppMask_un_16_);
	BIT_VEC cppVar_9721 = ROM.rd(cppVar_9720);
	bool cppVar_9723 = (cppVar_9721 == 129);
	if (cppVar_9723) {
	cppVar_9719 = SP;
	} else {
	BIT_VEC cppVar_9724;
	BIT_VEC cppVar_9725 = PC + 1;
	cppVar_9725 = (cppVar_9725 & cppMask_un_16_);
	BIT_VEC cppVar_9726 = ROM.rd(cppVar_9725);
	bool cppVar_9728 = (cppVar_9726 == 130);
	if (cppVar_9728) {
	cppVar_9724 = DPL;
	} else {
	BIT_VEC cppVar_9729;
	BIT_VEC cppVar_9730 = PC + 1;
	cppVar_9730 = (cppVar_9730 & cppMask_un_16_);
	BIT_VEC cppVar_9731 = ROM.rd(cppVar_9730);
	bool cppVar_9733 = (cppVar_9731 == 131);
	if (cppVar_9733) {
	cppVar_9729 = DPH;
	} else {
	BIT_VEC cppVar_9734;
	BIT_VEC cppVar_9735 = PC + 1;
	cppVar_9735 = (cppVar_9735 & cppMask_un_16_);
	BIT_VEC cppVar_9736 = ROM.rd(cppVar_9735);
	bool cppVar_9738 = (cppVar_9736 == 135);
	if (cppVar_9738) {
	cppVar_9734 = PCON;
	} else {
	BIT_VEC cppVar_9739;
	BIT_VEC cppVar_9740 = PC + 1;
	cppVar_9740 = (cppVar_9740 & cppMask_un_16_);
	BIT_VEC cppVar_9741 = ROM.rd(cppVar_9740);
	bool cppVar_9743 = (cppVar_9741 == 136);
	if (cppVar_9743) {
	cppVar_9739 = TCON;
	} else {
	BIT_VEC cppVar_9744;
	BIT_VEC cppVar_9745 = PC + 1;
	cppVar_9745 = (cppVar_9745 & cppMask_un_16_);
	BIT_VEC cppVar_9746 = ROM.rd(cppVar_9745);
	bool cppVar_9748 = (cppVar_9746 == 137);
	if (cppVar_9748) {
	cppVar_9744 = TMOD;
	} else {
	BIT_VEC cppVar_9749;
	BIT_VEC cppVar_9750 = PC + 1;
	cppVar_9750 = (cppVar_9750 & cppMask_un_16_);
	BIT_VEC cppVar_9751 = ROM.rd(cppVar_9750);
	bool cppVar_9753 = (cppVar_9751 == 138);
	if (cppVar_9753) {
	cppVar_9749 = TL0;
	} else {
	BIT_VEC cppVar_9754;
	BIT_VEC cppVar_9755 = PC + 1;
	cppVar_9755 = (cppVar_9755 & cppMask_un_16_);
	BIT_VEC cppVar_9756 = ROM.rd(cppVar_9755);
	bool cppVar_9758 = (cppVar_9756 == 140);
	if (cppVar_9758) {
	cppVar_9754 = TH0;
	} else {
	BIT_VEC cppVar_9759;
	BIT_VEC cppVar_9760 = PC + 1;
	cppVar_9760 = (cppVar_9760 & cppMask_un_16_);
	BIT_VEC cppVar_9761 = ROM.rd(cppVar_9760);
	bool cppVar_9763 = (cppVar_9761 == 139);
	if (cppVar_9763) {
	cppVar_9759 = TL1;
	} else {
	BIT_VEC cppVar_9764;
	BIT_VEC cppVar_9765 = PC + 1;
	cppVar_9765 = (cppVar_9765 & cppMask_un_16_);
	BIT_VEC cppVar_9766 = ROM.rd(cppVar_9765);
	bool cppVar_9768 = (cppVar_9766 == 141);
	if (cppVar_9768) {
	cppVar_9764 = TH1;
	} else {
	BIT_VEC cppVar_9769;
	BIT_VEC cppVar_9770 = PC + 1;
	cppVar_9770 = (cppVar_9770 & cppMask_un_16_);
	BIT_VEC cppVar_9771 = ROM.rd(cppVar_9770);
	bool cppVar_9773 = (cppVar_9771 == 144);
	if (cppVar_9773) {
	cppVar_9769 = P1;
	} else {
	BIT_VEC cppVar_9774;
	BIT_VEC cppVar_9775 = PC + 1;
	cppVar_9775 = (cppVar_9775 & cppMask_un_16_);
	BIT_VEC cppVar_9776 = ROM.rd(cppVar_9775);
	bool cppVar_9778 = (cppVar_9776 == 152);
	if (cppVar_9778) {
	cppVar_9774 = SCON;
	} else {
	BIT_VEC cppVar_9779;
	BIT_VEC cppVar_9780 = PC + 1;
	cppVar_9780 = (cppVar_9780 & cppMask_un_16_);
	BIT_VEC cppVar_9781 = ROM.rd(cppVar_9780);
	bool cppVar_9783 = (cppVar_9781 == 153);
	if (cppVar_9783) {
	cppVar_9779 = SBUF;
	} else {
	BIT_VEC cppVar_9784;
	BIT_VEC cppVar_9785 = PC + 1;
	cppVar_9785 = (cppVar_9785 & cppMask_un_16_);
	BIT_VEC cppVar_9786 = ROM.rd(cppVar_9785);
	bool cppVar_9788 = (cppVar_9786 == 160);
	if (cppVar_9788) {
	cppVar_9784 = P2;
	} else {
	BIT_VEC cppVar_9789;
	BIT_VEC cppVar_9790 = PC + 1;
	cppVar_9790 = (cppVar_9790 & cppMask_un_16_);
	BIT_VEC cppVar_9791 = ROM.rd(cppVar_9790);
	bool cppVar_9793 = (cppVar_9791 == 168);
	if (cppVar_9793) {
	cppVar_9789 = IE;
	} else {
	BIT_VEC cppVar_9794;
	BIT_VEC cppVar_9795 = PC + 1;
	cppVar_9795 = (cppVar_9795 & cppMask_un_16_);
	BIT_VEC cppVar_9796 = ROM.rd(cppVar_9795);
	bool cppVar_9798 = (cppVar_9796 == 176);
	if (cppVar_9798) {
	cppVar_9794 = P3;
	} else {
	BIT_VEC cppVar_9799;
	BIT_VEC cppVar_9800 = PC + 1;
	cppVar_9800 = (cppVar_9800 & cppMask_un_16_);
	BIT_VEC cppVar_9801 = ROM.rd(cppVar_9800);
	bool cppVar_9803 = (cppVar_9801 == 184);
	if (cppVar_9803) {
	cppVar_9799 = IP;
	} else {
	BIT_VEC cppVar_9804;
	BIT_VEC cppVar_9805 = PC + 1;
	cppVar_9805 = (cppVar_9805 & cppMask_un_16_);
	BIT_VEC cppVar_9806 = ROM.rd(cppVar_9805);
	bool cppVar_9808 = (cppVar_9806 == 208);
	if (cppVar_9808) {
	cppVar_9804 = PSW;
	} else {
	BIT_VEC cppVar_9809;
	BIT_VEC cppVar_9810 = PC + 1;
	cppVar_9810 = (cppVar_9810 & cppMask_un_16_);
	BIT_VEC cppVar_9811 = ROM.rd(cppVar_9810);
	bool cppVar_9813 = (cppVar_9811 == 224);
	if (cppVar_9813) {
	cppVar_9809 = ACC;
	} else {
	BIT_VEC cppVar_9814;
	BIT_VEC cppVar_9815 = PC + 1;
	cppVar_9815 = (cppVar_9815 & cppMask_un_16_);
	BIT_VEC cppVar_9816 = ROM.rd(cppVar_9815);
	bool cppVar_9818 = (cppVar_9816 == 240);
	if (cppVar_9818) {
	cppVar_9814 = B;
	} else {
	cppVar_9814 = 0;
	}
	cppVar_9809 = cppVar_9814;
	}
	cppVar_9804 = cppVar_9809;
	}
	cppVar_9799 = cppVar_9804;
	}
	cppVar_9794 = cppVar_9799;
	}
	cppVar_9789 = cppVar_9794;
	}
	cppVar_9784 = cppVar_9789;
	}
	cppVar_9779 = cppVar_9784;
	}
	cppVar_9774 = cppVar_9779;
	}
	cppVar_9769 = cppVar_9774;
	}
	cppVar_9764 = cppVar_9769;
	}
	cppVar_9759 = cppVar_9764;
	}
	cppVar_9754 = cppVar_9759;
	}
	cppVar_9749 = cppVar_9754;
	}
	cppVar_9744 = cppVar_9749;
	}
	cppVar_9739 = cppVar_9744;
	}
	cppVar_9734 = cppVar_9739;
	}
	cppVar_9729 = cppVar_9734;
	}
	cppVar_9724 = cppVar_9729;
	}
	cppVar_9719 = cppVar_9724;
	}
	cppVar_9714 = cppVar_9719;
	}
	cppVar_9705 = cppVar_9714;
	}
	BIT_VEC cppVar_9821 = cppVar_9705 - 1;
	cppVar_9821 = (cppVar_9821 & cppMask_un_8_);
	cppVar_9699 = cppVar_9821;
	} else {
	cppVar_9699 = DPH;
	}
	cppVar_9691 = cppVar_9699;
	} else {
	BIT_VEC cppVar_9822;
	BIT_VEC cppVar_9823 = ROM.rd(PC);
	bool cppVar_9825 = (cppVar_9823 == 5);
	if (cppVar_9825) {
	BIT_VEC cppVar_9826;
	BIT_VEC cppVar_9828 = PC + 1;
	cppVar_9828 = (cppVar_9828 & cppMask_un_16_);
	BIT_VEC cppVar_9829 = ROM.rd(cppVar_9828);
	bool cppVar_9831 = (cppVar_9829 == 131);
	if (cppVar_9831) {
	BIT_VEC cppVar_9832;
	BIT_VEC cppVar_9833 = PC + 1;
	cppVar_9833 = (cppVar_9833 & cppMask_un_16_);
	BIT_VEC cppVar_9834 = ROM.rd(cppVar_9833);
	BIT_VEC cppVar_9835 = (cppVar_9834 >> 7) & cppMask_un_1_;
	bool cppVar_9837 = (cppVar_9835 == 0);
	if (cppVar_9837) {
	BIT_VEC cppVar_9838 = PC + 1;
	cppVar_9838 = (cppVar_9838 & cppMask_un_16_);
	BIT_VEC cppVar_9839 = ROM.rd(cppVar_9838);
	BIT_VEC cppVar_9840 = IRAM.rd(cppVar_9839);
	cppVar_9832 = cppVar_9840;
	} else {
	BIT_VEC cppVar_9841;
	BIT_VEC cppVar_9842 = PC + 1;
	cppVar_9842 = (cppVar_9842 & cppMask_un_16_);
	BIT_VEC cppVar_9843 = ROM.rd(cppVar_9842);
	bool cppVar_9845 = (cppVar_9843 == 128);
	if (cppVar_9845) {
	cppVar_9841 = P0;
	} else {
	BIT_VEC cppVar_9846;
	BIT_VEC cppVar_9847 = PC + 1;
	cppVar_9847 = (cppVar_9847 & cppMask_un_16_);
	BIT_VEC cppVar_9848 = ROM.rd(cppVar_9847);
	bool cppVar_9850 = (cppVar_9848 == 129);
	if (cppVar_9850) {
	cppVar_9846 = SP;
	} else {
	BIT_VEC cppVar_9851;
	BIT_VEC cppVar_9852 = PC + 1;
	cppVar_9852 = (cppVar_9852 & cppMask_un_16_);
	BIT_VEC cppVar_9853 = ROM.rd(cppVar_9852);
	bool cppVar_9855 = (cppVar_9853 == 130);
	if (cppVar_9855) {
	cppVar_9851 = DPL;
	} else {
	BIT_VEC cppVar_9856;
	BIT_VEC cppVar_9857 = PC + 1;
	cppVar_9857 = (cppVar_9857 & cppMask_un_16_);
	BIT_VEC cppVar_9858 = ROM.rd(cppVar_9857);
	bool cppVar_9860 = (cppVar_9858 == 131);
	if (cppVar_9860) {
	cppVar_9856 = DPH;
	} else {
	BIT_VEC cppVar_9861;
	BIT_VEC cppVar_9862 = PC + 1;
	cppVar_9862 = (cppVar_9862 & cppMask_un_16_);
	BIT_VEC cppVar_9863 = ROM.rd(cppVar_9862);
	bool cppVar_9865 = (cppVar_9863 == 135);
	if (cppVar_9865) {
	cppVar_9861 = PCON;
	} else {
	BIT_VEC cppVar_9866;
	BIT_VEC cppVar_9867 = PC + 1;
	cppVar_9867 = (cppVar_9867 & cppMask_un_16_);
	BIT_VEC cppVar_9868 = ROM.rd(cppVar_9867);
	bool cppVar_9870 = (cppVar_9868 == 136);
	if (cppVar_9870) {
	cppVar_9866 = TCON;
	} else {
	BIT_VEC cppVar_9871;
	BIT_VEC cppVar_9872 = PC + 1;
	cppVar_9872 = (cppVar_9872 & cppMask_un_16_);
	BIT_VEC cppVar_9873 = ROM.rd(cppVar_9872);
	bool cppVar_9875 = (cppVar_9873 == 137);
	if (cppVar_9875) {
	cppVar_9871 = TMOD;
	} else {
	BIT_VEC cppVar_9876;
	BIT_VEC cppVar_9877 = PC + 1;
	cppVar_9877 = (cppVar_9877 & cppMask_un_16_);
	BIT_VEC cppVar_9878 = ROM.rd(cppVar_9877);
	bool cppVar_9880 = (cppVar_9878 == 138);
	if (cppVar_9880) {
	cppVar_9876 = TL0;
	} else {
	BIT_VEC cppVar_9881;
	BIT_VEC cppVar_9882 = PC + 1;
	cppVar_9882 = (cppVar_9882 & cppMask_un_16_);
	BIT_VEC cppVar_9883 = ROM.rd(cppVar_9882);
	bool cppVar_9885 = (cppVar_9883 == 140);
	if (cppVar_9885) {
	cppVar_9881 = TH0;
	} else {
	BIT_VEC cppVar_9886;
	BIT_VEC cppVar_9887 = PC + 1;
	cppVar_9887 = (cppVar_9887 & cppMask_un_16_);
	BIT_VEC cppVar_9888 = ROM.rd(cppVar_9887);
	bool cppVar_9890 = (cppVar_9888 == 139);
	if (cppVar_9890) {
	cppVar_9886 = TL1;
	} else {
	BIT_VEC cppVar_9891;
	BIT_VEC cppVar_9892 = PC + 1;
	cppVar_9892 = (cppVar_9892 & cppMask_un_16_);
	BIT_VEC cppVar_9893 = ROM.rd(cppVar_9892);
	bool cppVar_9895 = (cppVar_9893 == 141);
	if (cppVar_9895) {
	cppVar_9891 = TH1;
	} else {
	BIT_VEC cppVar_9896;
	BIT_VEC cppVar_9897 = PC + 1;
	cppVar_9897 = (cppVar_9897 & cppMask_un_16_);
	BIT_VEC cppVar_9898 = ROM.rd(cppVar_9897);
	bool cppVar_9900 = (cppVar_9898 == 144);
	if (cppVar_9900) {
	cppVar_9896 = P1;
	} else {
	BIT_VEC cppVar_9901;
	BIT_VEC cppVar_9902 = PC + 1;
	cppVar_9902 = (cppVar_9902 & cppMask_un_16_);
	BIT_VEC cppVar_9903 = ROM.rd(cppVar_9902);
	bool cppVar_9905 = (cppVar_9903 == 152);
	if (cppVar_9905) {
	cppVar_9901 = SCON;
	} else {
	BIT_VEC cppVar_9906;
	BIT_VEC cppVar_9907 = PC + 1;
	cppVar_9907 = (cppVar_9907 & cppMask_un_16_);
	BIT_VEC cppVar_9908 = ROM.rd(cppVar_9907);
	bool cppVar_9910 = (cppVar_9908 == 153);
	if (cppVar_9910) {
	cppVar_9906 = SBUF;
	} else {
	BIT_VEC cppVar_9911;
	BIT_VEC cppVar_9912 = PC + 1;
	cppVar_9912 = (cppVar_9912 & cppMask_un_16_);
	BIT_VEC cppVar_9913 = ROM.rd(cppVar_9912);
	bool cppVar_9915 = (cppVar_9913 == 160);
	if (cppVar_9915) {
	cppVar_9911 = P2;
	} else {
	BIT_VEC cppVar_9916;
	BIT_VEC cppVar_9917 = PC + 1;
	cppVar_9917 = (cppVar_9917 & cppMask_un_16_);
	BIT_VEC cppVar_9918 = ROM.rd(cppVar_9917);
	bool cppVar_9920 = (cppVar_9918 == 168);
	if (cppVar_9920) {
	cppVar_9916 = IE;
	} else {
	BIT_VEC cppVar_9921;
	BIT_VEC cppVar_9922 = PC + 1;
	cppVar_9922 = (cppVar_9922 & cppMask_un_16_);
	BIT_VEC cppVar_9923 = ROM.rd(cppVar_9922);
	bool cppVar_9925 = (cppVar_9923 == 176);
	if (cppVar_9925) {
	cppVar_9921 = P3;
	} else {
	BIT_VEC cppVar_9926;
	BIT_VEC cppVar_9927 = PC + 1;
	cppVar_9927 = (cppVar_9927 & cppMask_un_16_);
	BIT_VEC cppVar_9928 = ROM.rd(cppVar_9927);
	bool cppVar_9930 = (cppVar_9928 == 184);
	if (cppVar_9930) {
	cppVar_9926 = IP;
	} else {
	BIT_VEC cppVar_9931;
	BIT_VEC cppVar_9932 = PC + 1;
	cppVar_9932 = (cppVar_9932 & cppMask_un_16_);
	BIT_VEC cppVar_9933 = ROM.rd(cppVar_9932);
	bool cppVar_9935 = (cppVar_9933 == 208);
	if (cppVar_9935) {
	cppVar_9931 = PSW;
	} else {
	BIT_VEC cppVar_9936;
	BIT_VEC cppVar_9937 = PC + 1;
	cppVar_9937 = (cppVar_9937 & cppMask_un_16_);
	BIT_VEC cppVar_9938 = ROM.rd(cppVar_9937);
	bool cppVar_9940 = (cppVar_9938 == 224);
	if (cppVar_9940) {
	cppVar_9936 = ACC;
	} else {
	BIT_VEC cppVar_9941;
	BIT_VEC cppVar_9942 = PC + 1;
	cppVar_9942 = (cppVar_9942 & cppMask_un_16_);
	BIT_VEC cppVar_9943 = ROM.rd(cppVar_9942);
	bool cppVar_9945 = (cppVar_9943 == 240);
	if (cppVar_9945) {
	cppVar_9941 = B;
	} else {
	cppVar_9941 = 0;
	}
	cppVar_9936 = cppVar_9941;
	}
	cppVar_9931 = cppVar_9936;
	}
	cppVar_9926 = cppVar_9931;
	}
	cppVar_9921 = cppVar_9926;
	}
	cppVar_9916 = cppVar_9921;
	}
	cppVar_9911 = cppVar_9916;
	}
	cppVar_9906 = cppVar_9911;
	}
	cppVar_9901 = cppVar_9906;
	}
	cppVar_9896 = cppVar_9901;
	}
	cppVar_9891 = cppVar_9896;
	}
	cppVar_9886 = cppVar_9891;
	}
	cppVar_9881 = cppVar_9886;
	}
	cppVar_9876 = cppVar_9881;
	}
	cppVar_9871 = cppVar_9876;
	}
	cppVar_9866 = cppVar_9871;
	}
	cppVar_9861 = cppVar_9866;
	}
	cppVar_9856 = cppVar_9861;
	}
	cppVar_9851 = cppVar_9856;
	}
	cppVar_9846 = cppVar_9851;
	}
	cppVar_9841 = cppVar_9846;
	}
	cppVar_9832 = cppVar_9841;
	}
	BIT_VEC cppVar_9948 = cppVar_9832 + 1;
	cppVar_9948 = (cppVar_9948 & cppMask_un_8_);
	cppVar_9826 = cppVar_9948;
	} else {
	cppVar_9826 = DPH;
	}
	cppVar_9822 = cppVar_9826;
	} else {
	cppVar_9822 = DPH;
	}
	cppVar_9691 = cppVar_9822;
	}
	cppVar_9565 = cppVar_9691;
	}
	cppVar_9436 = cppVar_9565;
	}
	cppVar_9310 = cppVar_9436;
	}
	cppVar_9181 = cppVar_9310;
	}
	cppVar_9055 = cppVar_9181;
	}
	cppVar_8926 = cppVar_9055;
	}
	cppVar_8913 = cppVar_8926;
	}
	cppVar_8787 = cppVar_8913;
	}
	cppVar_8770 = cppVar_8787;
	}
	cppVar_8753 = cppVar_8770;
	}
	cppVar_8603 = cppVar_8753;
	}
	cppVar_8453 = cppVar_8603;
	}
	cppVar_8303 = cppVar_8453;
	}
	cppVar_8153 = cppVar_8303;
	}
	cppVar_8003 = cppVar_8153;
	}
	cppVar_7853 = cppVar_8003;
	}
	cppVar_7703 = cppVar_7853;
	}
	cppVar_7553 = cppVar_7703;
	}
	cppVar_7541 = cppVar_7553;
	}
	cppVar_7527 = cppVar_7541;
	}
	cppVar_7516 = cppVar_7527;
	}
	return cppVar_7516;
}
