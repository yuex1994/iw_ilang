#include "common.hpp"
#include "model_oc8051_class.hpp"

BIT_VEC model_oc8051::cppUpdateFun_TL1()
{
	BIT_VEC cppVar_79692;
	BIT_VEC cppVar_79693 = ROM.rd(PC);
	bool cppVar_79695 = (cppVar_79693 == 208);
	if (cppVar_79695) {
	BIT_VEC cppVar_79696;
	BIT_VEC cppVar_79698 = PC + 1;
	cppVar_79698 = (cppVar_79698 & cppMask_un_16_);
	BIT_VEC cppVar_79699 = ROM.rd(cppVar_79698);
	bool cppVar_79701 = (cppVar_79699 == 139);
	if (cppVar_79701) {
	BIT_VEC cppVar_79702 = IRAM.rd(SP);
	cppVar_79696 = cppVar_79702;
	} else {
	cppVar_79696 = TL1;
	}
	cppVar_79692 = cppVar_79696;
	} else {
	BIT_VEC cppVar_79703;
	BIT_VEC cppVar_79704 = ROM.rd(PC);
	bool cppVar_79706 = (cppVar_79704 == 245);
	BIT_VEC cppVar_79707 = ROM.rd(PC);
	bool cppVar_79709 = (cppVar_79707 == 197);
	bool cppVar_79710 = cppVar_79706 || cppVar_79709;
	if (cppVar_79710) {
	BIT_VEC cppVar_79711;
	BIT_VEC cppVar_79713 = PC + 1;
	cppVar_79713 = (cppVar_79713 & cppMask_un_16_);
	BIT_VEC cppVar_79714 = ROM.rd(cppVar_79713);
	bool cppVar_79716 = (cppVar_79714 == 139);
	if (cppVar_79716) {
	cppVar_79711 = ACC;
	} else {
	cppVar_79711 = TL1;
	}
	cppVar_79703 = cppVar_79711;
	} else {
	BIT_VEC cppVar_79717;
	BIT_VEC cppVar_79718 = ROM.rd(PC);
	bool cppVar_79720 = (cppVar_79718 == 143);
	if (cppVar_79720) {
	BIT_VEC cppVar_79721;
	BIT_VEC cppVar_79723 = PC + 1;
	cppVar_79723 = (cppVar_79723 & cppMask_un_16_);
	BIT_VEC cppVar_79724 = ROM.rd(cppVar_79723);
	bool cppVar_79726 = (cppVar_79724 == 139);
	if (cppVar_79726) {
	BIT_VEC cppVar_79727;
	BIT_VEC cppVar_79729 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79731 = (cppVar_79729 << 3) | 7;
	cppVar_79731 = (cppVar_79731 & cppMask_un_5_);
	BIT_VEC cppVar_79732 = (0 << 5) | cppVar_79731;
	cppVar_79732 = (cppVar_79732 & cppMask_un_8_);
	BIT_VEC cppVar_79733 = (cppVar_79732 >> 7) & cppMask_un_1_;
	bool cppVar_79735 = (cppVar_79733 == 0);
	if (cppVar_79735) {
	BIT_VEC cppVar_79736 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79737 = (cppVar_79736 << 3) | 7;
	cppVar_79737 = (cppVar_79737 & cppMask_un_5_);
	BIT_VEC cppVar_79738 = (0 << 5) | cppVar_79737;
	cppVar_79738 = (cppVar_79738 & cppMask_un_8_);
	BIT_VEC cppVar_79739 = IRAM.rd(cppVar_79738);
	cppVar_79727 = cppVar_79739;
	} else {
	BIT_VEC cppVar_79740;
	BIT_VEC cppVar_79741 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79742 = (cppVar_79741 << 3) | 7;
	cppVar_79742 = (cppVar_79742 & cppMask_un_5_);
	BIT_VEC cppVar_79743 = (0 << 5) | cppVar_79742;
	cppVar_79743 = (cppVar_79743 & cppMask_un_8_);
	bool cppVar_79745 = (cppVar_79743 == 128);
	if (cppVar_79745) {
	cppVar_79740 = P0;
	} else {
	BIT_VEC cppVar_79746;
	BIT_VEC cppVar_79747 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79748 = (cppVar_79747 << 3) | 7;
	cppVar_79748 = (cppVar_79748 & cppMask_un_5_);
	BIT_VEC cppVar_79749 = (0 << 5) | cppVar_79748;
	cppVar_79749 = (cppVar_79749 & cppMask_un_8_);
	bool cppVar_79751 = (cppVar_79749 == 129);
	if (cppVar_79751) {
	cppVar_79746 = SP;
	} else {
	BIT_VEC cppVar_79752;
	BIT_VEC cppVar_79753 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79754 = (cppVar_79753 << 3) | 7;
	cppVar_79754 = (cppVar_79754 & cppMask_un_5_);
	BIT_VEC cppVar_79755 = (0 << 5) | cppVar_79754;
	cppVar_79755 = (cppVar_79755 & cppMask_un_8_);
	bool cppVar_79757 = (cppVar_79755 == 130);
	if (cppVar_79757) {
	cppVar_79752 = DPL;
	} else {
	BIT_VEC cppVar_79758;
	BIT_VEC cppVar_79759 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79760 = (cppVar_79759 << 3) | 7;
	cppVar_79760 = (cppVar_79760 & cppMask_un_5_);
	BIT_VEC cppVar_79761 = (0 << 5) | cppVar_79760;
	cppVar_79761 = (cppVar_79761 & cppMask_un_8_);
	bool cppVar_79763 = (cppVar_79761 == 131);
	if (cppVar_79763) {
	cppVar_79758 = DPH;
	} else {
	BIT_VEC cppVar_79764;
	BIT_VEC cppVar_79765 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79766 = (cppVar_79765 << 3) | 7;
	cppVar_79766 = (cppVar_79766 & cppMask_un_5_);
	BIT_VEC cppVar_79767 = (0 << 5) | cppVar_79766;
	cppVar_79767 = (cppVar_79767 & cppMask_un_8_);
	bool cppVar_79769 = (cppVar_79767 == 135);
	if (cppVar_79769) {
	cppVar_79764 = PCON;
	} else {
	BIT_VEC cppVar_79770;
	BIT_VEC cppVar_79771 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79772 = (cppVar_79771 << 3) | 7;
	cppVar_79772 = (cppVar_79772 & cppMask_un_5_);
	BIT_VEC cppVar_79773 = (0 << 5) | cppVar_79772;
	cppVar_79773 = (cppVar_79773 & cppMask_un_8_);
	bool cppVar_79775 = (cppVar_79773 == 136);
	if (cppVar_79775) {
	cppVar_79770 = TCON;
	} else {
	BIT_VEC cppVar_79776;
	BIT_VEC cppVar_79777 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79778 = (cppVar_79777 << 3) | 7;
	cppVar_79778 = (cppVar_79778 & cppMask_un_5_);
	BIT_VEC cppVar_79779 = (0 << 5) | cppVar_79778;
	cppVar_79779 = (cppVar_79779 & cppMask_un_8_);
	bool cppVar_79781 = (cppVar_79779 == 137);
	if (cppVar_79781) {
	cppVar_79776 = TMOD;
	} else {
	BIT_VEC cppVar_79782;
	BIT_VEC cppVar_79783 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79784 = (cppVar_79783 << 3) | 7;
	cppVar_79784 = (cppVar_79784 & cppMask_un_5_);
	BIT_VEC cppVar_79785 = (0 << 5) | cppVar_79784;
	cppVar_79785 = (cppVar_79785 & cppMask_un_8_);
	bool cppVar_79787 = (cppVar_79785 == 138);
	if (cppVar_79787) {
	cppVar_79782 = TL0;
	} else {
	BIT_VEC cppVar_79788;
	BIT_VEC cppVar_79789 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79790 = (cppVar_79789 << 3) | 7;
	cppVar_79790 = (cppVar_79790 & cppMask_un_5_);
	BIT_VEC cppVar_79791 = (0 << 5) | cppVar_79790;
	cppVar_79791 = (cppVar_79791 & cppMask_un_8_);
	bool cppVar_79793 = (cppVar_79791 == 140);
	if (cppVar_79793) {
	cppVar_79788 = TH0;
	} else {
	BIT_VEC cppVar_79794;
	BIT_VEC cppVar_79795 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79796 = (cppVar_79795 << 3) | 7;
	cppVar_79796 = (cppVar_79796 & cppMask_un_5_);
	BIT_VEC cppVar_79797 = (0 << 5) | cppVar_79796;
	cppVar_79797 = (cppVar_79797 & cppMask_un_8_);
	bool cppVar_79799 = (cppVar_79797 == 139);
	if (cppVar_79799) {
	cppVar_79794 = TL1;
	} else {
	BIT_VEC cppVar_79800;
	BIT_VEC cppVar_79801 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79802 = (cppVar_79801 << 3) | 7;
	cppVar_79802 = (cppVar_79802 & cppMask_un_5_);
	BIT_VEC cppVar_79803 = (0 << 5) | cppVar_79802;
	cppVar_79803 = (cppVar_79803 & cppMask_un_8_);
	bool cppVar_79805 = (cppVar_79803 == 141);
	if (cppVar_79805) {
	cppVar_79800 = TH1;
	} else {
	BIT_VEC cppVar_79806;
	BIT_VEC cppVar_79807 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79808 = (cppVar_79807 << 3) | 7;
	cppVar_79808 = (cppVar_79808 & cppMask_un_5_);
	BIT_VEC cppVar_79809 = (0 << 5) | cppVar_79808;
	cppVar_79809 = (cppVar_79809 & cppMask_un_8_);
	bool cppVar_79811 = (cppVar_79809 == 144);
	if (cppVar_79811) {
	cppVar_79806 = P1;
	} else {
	BIT_VEC cppVar_79812;
	BIT_VEC cppVar_79813 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79814 = (cppVar_79813 << 3) | 7;
	cppVar_79814 = (cppVar_79814 & cppMask_un_5_);
	BIT_VEC cppVar_79815 = (0 << 5) | cppVar_79814;
	cppVar_79815 = (cppVar_79815 & cppMask_un_8_);
	bool cppVar_79817 = (cppVar_79815 == 152);
	if (cppVar_79817) {
	cppVar_79812 = SCON;
	} else {
	BIT_VEC cppVar_79818;
	BIT_VEC cppVar_79819 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79820 = (cppVar_79819 << 3) | 7;
	cppVar_79820 = (cppVar_79820 & cppMask_un_5_);
	BIT_VEC cppVar_79821 = (0 << 5) | cppVar_79820;
	cppVar_79821 = (cppVar_79821 & cppMask_un_8_);
	bool cppVar_79823 = (cppVar_79821 == 153);
	if (cppVar_79823) {
	cppVar_79818 = SBUF;
	} else {
	BIT_VEC cppVar_79824;
	BIT_VEC cppVar_79825 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79826 = (cppVar_79825 << 3) | 7;
	cppVar_79826 = (cppVar_79826 & cppMask_un_5_);
	BIT_VEC cppVar_79827 = (0 << 5) | cppVar_79826;
	cppVar_79827 = (cppVar_79827 & cppMask_un_8_);
	bool cppVar_79829 = (cppVar_79827 == 160);
	if (cppVar_79829) {
	cppVar_79824 = P2;
	} else {
	BIT_VEC cppVar_79830;
	BIT_VEC cppVar_79831 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79832 = (cppVar_79831 << 3) | 7;
	cppVar_79832 = (cppVar_79832 & cppMask_un_5_);
	BIT_VEC cppVar_79833 = (0 << 5) | cppVar_79832;
	cppVar_79833 = (cppVar_79833 & cppMask_un_8_);
	bool cppVar_79835 = (cppVar_79833 == 168);
	if (cppVar_79835) {
	cppVar_79830 = IE;
	} else {
	BIT_VEC cppVar_79836;
	BIT_VEC cppVar_79837 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79838 = (cppVar_79837 << 3) | 7;
	cppVar_79838 = (cppVar_79838 & cppMask_un_5_);
	BIT_VEC cppVar_79839 = (0 << 5) | cppVar_79838;
	cppVar_79839 = (cppVar_79839 & cppMask_un_8_);
	bool cppVar_79841 = (cppVar_79839 == 176);
	if (cppVar_79841) {
	cppVar_79836 = P3;
	} else {
	BIT_VEC cppVar_79842;
	BIT_VEC cppVar_79843 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79844 = (cppVar_79843 << 3) | 7;
	cppVar_79844 = (cppVar_79844 & cppMask_un_5_);
	BIT_VEC cppVar_79845 = (0 << 5) | cppVar_79844;
	cppVar_79845 = (cppVar_79845 & cppMask_un_8_);
	bool cppVar_79847 = (cppVar_79845 == 184);
	if (cppVar_79847) {
	cppVar_79842 = IP;
	} else {
	BIT_VEC cppVar_79848;
	BIT_VEC cppVar_79849 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79850 = (cppVar_79849 << 3) | 7;
	cppVar_79850 = (cppVar_79850 & cppMask_un_5_);
	BIT_VEC cppVar_79851 = (0 << 5) | cppVar_79850;
	cppVar_79851 = (cppVar_79851 & cppMask_un_8_);
	bool cppVar_79853 = (cppVar_79851 == 208);
	if (cppVar_79853) {
	cppVar_79848 = PSW;
	} else {
	BIT_VEC cppVar_79854;
	BIT_VEC cppVar_79855 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79856 = (cppVar_79855 << 3) | 7;
	cppVar_79856 = (cppVar_79856 & cppMask_un_5_);
	BIT_VEC cppVar_79857 = (0 << 5) | cppVar_79856;
	cppVar_79857 = (cppVar_79857 & cppMask_un_8_);
	bool cppVar_79859 = (cppVar_79857 == 224);
	if (cppVar_79859) {
	cppVar_79854 = ACC;
	} else {
	BIT_VEC cppVar_79860;
	BIT_VEC cppVar_79861 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79862 = (cppVar_79861 << 3) | 7;
	cppVar_79862 = (cppVar_79862 & cppMask_un_5_);
	BIT_VEC cppVar_79863 = (0 << 5) | cppVar_79862;
	cppVar_79863 = (cppVar_79863 & cppMask_un_8_);
	bool cppVar_79865 = (cppVar_79863 == 240);
	if (cppVar_79865) {
	cppVar_79860 = B;
	} else {
	cppVar_79860 = 0;
	}
	cppVar_79854 = cppVar_79860;
	}
	cppVar_79848 = cppVar_79854;
	}
	cppVar_79842 = cppVar_79848;
	}
	cppVar_79836 = cppVar_79842;
	}
	cppVar_79830 = cppVar_79836;
	}
	cppVar_79824 = cppVar_79830;
	}
	cppVar_79818 = cppVar_79824;
	}
	cppVar_79812 = cppVar_79818;
	}
	cppVar_79806 = cppVar_79812;
	}
	cppVar_79800 = cppVar_79806;
	}
	cppVar_79794 = cppVar_79800;
	}
	cppVar_79788 = cppVar_79794;
	}
	cppVar_79782 = cppVar_79788;
	}
	cppVar_79776 = cppVar_79782;
	}
	cppVar_79770 = cppVar_79776;
	}
	cppVar_79764 = cppVar_79770;
	}
	cppVar_79758 = cppVar_79764;
	}
	cppVar_79752 = cppVar_79758;
	}
	cppVar_79746 = cppVar_79752;
	}
	cppVar_79740 = cppVar_79746;
	}
	cppVar_79727 = cppVar_79740;
	}
	cppVar_79721 = cppVar_79727;
	} else {
	cppVar_79721 = TL1;
	}
	cppVar_79717 = cppVar_79721;
	} else {
	BIT_VEC cppVar_79867;
	BIT_VEC cppVar_79868 = ROM.rd(PC);
	bool cppVar_79870 = (cppVar_79868 == 142);
	if (cppVar_79870) {
	BIT_VEC cppVar_79871;
	BIT_VEC cppVar_79873 = PC + 1;
	cppVar_79873 = (cppVar_79873 & cppMask_un_16_);
	BIT_VEC cppVar_79874 = ROM.rd(cppVar_79873);
	bool cppVar_79876 = (cppVar_79874 == 139);
	if (cppVar_79876) {
	BIT_VEC cppVar_79877;
	BIT_VEC cppVar_79879 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79881 = (cppVar_79879 << 3) | 6;
	cppVar_79881 = (cppVar_79881 & cppMask_un_5_);
	BIT_VEC cppVar_79882 = (0 << 5) | cppVar_79881;
	cppVar_79882 = (cppVar_79882 & cppMask_un_8_);
	BIT_VEC cppVar_79883 = (cppVar_79882 >> 7) & cppMask_un_1_;
	bool cppVar_79885 = (cppVar_79883 == 0);
	if (cppVar_79885) {
	BIT_VEC cppVar_79886 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79887 = (cppVar_79886 << 3) | 6;
	cppVar_79887 = (cppVar_79887 & cppMask_un_5_);
	BIT_VEC cppVar_79888 = (0 << 5) | cppVar_79887;
	cppVar_79888 = (cppVar_79888 & cppMask_un_8_);
	BIT_VEC cppVar_79889 = IRAM.rd(cppVar_79888);
	cppVar_79877 = cppVar_79889;
	} else {
	BIT_VEC cppVar_79890;
	BIT_VEC cppVar_79891 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79892 = (cppVar_79891 << 3) | 6;
	cppVar_79892 = (cppVar_79892 & cppMask_un_5_);
	BIT_VEC cppVar_79893 = (0 << 5) | cppVar_79892;
	cppVar_79893 = (cppVar_79893 & cppMask_un_8_);
	bool cppVar_79895 = (cppVar_79893 == 128);
	if (cppVar_79895) {
	cppVar_79890 = P0;
	} else {
	BIT_VEC cppVar_79896;
	BIT_VEC cppVar_79897 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79898 = (cppVar_79897 << 3) | 6;
	cppVar_79898 = (cppVar_79898 & cppMask_un_5_);
	BIT_VEC cppVar_79899 = (0 << 5) | cppVar_79898;
	cppVar_79899 = (cppVar_79899 & cppMask_un_8_);
	bool cppVar_79901 = (cppVar_79899 == 129);
	if (cppVar_79901) {
	cppVar_79896 = SP;
	} else {
	BIT_VEC cppVar_79902;
	BIT_VEC cppVar_79903 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79904 = (cppVar_79903 << 3) | 6;
	cppVar_79904 = (cppVar_79904 & cppMask_un_5_);
	BIT_VEC cppVar_79905 = (0 << 5) | cppVar_79904;
	cppVar_79905 = (cppVar_79905 & cppMask_un_8_);
	bool cppVar_79907 = (cppVar_79905 == 130);
	if (cppVar_79907) {
	cppVar_79902 = DPL;
	} else {
	BIT_VEC cppVar_79908;
	BIT_VEC cppVar_79909 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79910 = (cppVar_79909 << 3) | 6;
	cppVar_79910 = (cppVar_79910 & cppMask_un_5_);
	BIT_VEC cppVar_79911 = (0 << 5) | cppVar_79910;
	cppVar_79911 = (cppVar_79911 & cppMask_un_8_);
	bool cppVar_79913 = (cppVar_79911 == 131);
	if (cppVar_79913) {
	cppVar_79908 = DPH;
	} else {
	BIT_VEC cppVar_79914;
	BIT_VEC cppVar_79915 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79916 = (cppVar_79915 << 3) | 6;
	cppVar_79916 = (cppVar_79916 & cppMask_un_5_);
	BIT_VEC cppVar_79917 = (0 << 5) | cppVar_79916;
	cppVar_79917 = (cppVar_79917 & cppMask_un_8_);
	bool cppVar_79919 = (cppVar_79917 == 135);
	if (cppVar_79919) {
	cppVar_79914 = PCON;
	} else {
	BIT_VEC cppVar_79920;
	BIT_VEC cppVar_79921 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79922 = (cppVar_79921 << 3) | 6;
	cppVar_79922 = (cppVar_79922 & cppMask_un_5_);
	BIT_VEC cppVar_79923 = (0 << 5) | cppVar_79922;
	cppVar_79923 = (cppVar_79923 & cppMask_un_8_);
	bool cppVar_79925 = (cppVar_79923 == 136);
	if (cppVar_79925) {
	cppVar_79920 = TCON;
	} else {
	BIT_VEC cppVar_79926;
	BIT_VEC cppVar_79927 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79928 = (cppVar_79927 << 3) | 6;
	cppVar_79928 = (cppVar_79928 & cppMask_un_5_);
	BIT_VEC cppVar_79929 = (0 << 5) | cppVar_79928;
	cppVar_79929 = (cppVar_79929 & cppMask_un_8_);
	bool cppVar_79931 = (cppVar_79929 == 137);
	if (cppVar_79931) {
	cppVar_79926 = TMOD;
	} else {
	BIT_VEC cppVar_79932;
	BIT_VEC cppVar_79933 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79934 = (cppVar_79933 << 3) | 6;
	cppVar_79934 = (cppVar_79934 & cppMask_un_5_);
	BIT_VEC cppVar_79935 = (0 << 5) | cppVar_79934;
	cppVar_79935 = (cppVar_79935 & cppMask_un_8_);
	bool cppVar_79937 = (cppVar_79935 == 138);
	if (cppVar_79937) {
	cppVar_79932 = TL0;
	} else {
	BIT_VEC cppVar_79938;
	BIT_VEC cppVar_79939 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79940 = (cppVar_79939 << 3) | 6;
	cppVar_79940 = (cppVar_79940 & cppMask_un_5_);
	BIT_VEC cppVar_79941 = (0 << 5) | cppVar_79940;
	cppVar_79941 = (cppVar_79941 & cppMask_un_8_);
	bool cppVar_79943 = (cppVar_79941 == 140);
	if (cppVar_79943) {
	cppVar_79938 = TH0;
	} else {
	BIT_VEC cppVar_79944;
	BIT_VEC cppVar_79945 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79946 = (cppVar_79945 << 3) | 6;
	cppVar_79946 = (cppVar_79946 & cppMask_un_5_);
	BIT_VEC cppVar_79947 = (0 << 5) | cppVar_79946;
	cppVar_79947 = (cppVar_79947 & cppMask_un_8_);
	bool cppVar_79949 = (cppVar_79947 == 139);
	if (cppVar_79949) {
	cppVar_79944 = TL1;
	} else {
	BIT_VEC cppVar_79950;
	BIT_VEC cppVar_79951 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79952 = (cppVar_79951 << 3) | 6;
	cppVar_79952 = (cppVar_79952 & cppMask_un_5_);
	BIT_VEC cppVar_79953 = (0 << 5) | cppVar_79952;
	cppVar_79953 = (cppVar_79953 & cppMask_un_8_);
	bool cppVar_79955 = (cppVar_79953 == 141);
	if (cppVar_79955) {
	cppVar_79950 = TH1;
	} else {
	BIT_VEC cppVar_79956;
	BIT_VEC cppVar_79957 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79958 = (cppVar_79957 << 3) | 6;
	cppVar_79958 = (cppVar_79958 & cppMask_un_5_);
	BIT_VEC cppVar_79959 = (0 << 5) | cppVar_79958;
	cppVar_79959 = (cppVar_79959 & cppMask_un_8_);
	bool cppVar_79961 = (cppVar_79959 == 144);
	if (cppVar_79961) {
	cppVar_79956 = P1;
	} else {
	BIT_VEC cppVar_79962;
	BIT_VEC cppVar_79963 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79964 = (cppVar_79963 << 3) | 6;
	cppVar_79964 = (cppVar_79964 & cppMask_un_5_);
	BIT_VEC cppVar_79965 = (0 << 5) | cppVar_79964;
	cppVar_79965 = (cppVar_79965 & cppMask_un_8_);
	bool cppVar_79967 = (cppVar_79965 == 152);
	if (cppVar_79967) {
	cppVar_79962 = SCON;
	} else {
	BIT_VEC cppVar_79968;
	BIT_VEC cppVar_79969 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79970 = (cppVar_79969 << 3) | 6;
	cppVar_79970 = (cppVar_79970 & cppMask_un_5_);
	BIT_VEC cppVar_79971 = (0 << 5) | cppVar_79970;
	cppVar_79971 = (cppVar_79971 & cppMask_un_8_);
	bool cppVar_79973 = (cppVar_79971 == 153);
	if (cppVar_79973) {
	cppVar_79968 = SBUF;
	} else {
	BIT_VEC cppVar_79974;
	BIT_VEC cppVar_79975 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79976 = (cppVar_79975 << 3) | 6;
	cppVar_79976 = (cppVar_79976 & cppMask_un_5_);
	BIT_VEC cppVar_79977 = (0 << 5) | cppVar_79976;
	cppVar_79977 = (cppVar_79977 & cppMask_un_8_);
	bool cppVar_79979 = (cppVar_79977 == 160);
	if (cppVar_79979) {
	cppVar_79974 = P2;
	} else {
	BIT_VEC cppVar_79980;
	BIT_VEC cppVar_79981 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79982 = (cppVar_79981 << 3) | 6;
	cppVar_79982 = (cppVar_79982 & cppMask_un_5_);
	BIT_VEC cppVar_79983 = (0 << 5) | cppVar_79982;
	cppVar_79983 = (cppVar_79983 & cppMask_un_8_);
	bool cppVar_79985 = (cppVar_79983 == 168);
	if (cppVar_79985) {
	cppVar_79980 = IE;
	} else {
	BIT_VEC cppVar_79986;
	BIT_VEC cppVar_79987 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79988 = (cppVar_79987 << 3) | 6;
	cppVar_79988 = (cppVar_79988 & cppMask_un_5_);
	BIT_VEC cppVar_79989 = (0 << 5) | cppVar_79988;
	cppVar_79989 = (cppVar_79989 & cppMask_un_8_);
	bool cppVar_79991 = (cppVar_79989 == 176);
	if (cppVar_79991) {
	cppVar_79986 = P3;
	} else {
	BIT_VEC cppVar_79992;
	BIT_VEC cppVar_79993 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_79994 = (cppVar_79993 << 3) | 6;
	cppVar_79994 = (cppVar_79994 & cppMask_un_5_);
	BIT_VEC cppVar_79995 = (0 << 5) | cppVar_79994;
	cppVar_79995 = (cppVar_79995 & cppMask_un_8_);
	bool cppVar_79997 = (cppVar_79995 == 184);
	if (cppVar_79997) {
	cppVar_79992 = IP;
	} else {
	BIT_VEC cppVar_79998;
	BIT_VEC cppVar_79999 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80000 = (cppVar_79999 << 3) | 6;
	cppVar_80000 = (cppVar_80000 & cppMask_un_5_);
	BIT_VEC cppVar_80001 = (0 << 5) | cppVar_80000;
	cppVar_80001 = (cppVar_80001 & cppMask_un_8_);
	bool cppVar_80003 = (cppVar_80001 == 208);
	if (cppVar_80003) {
	cppVar_79998 = PSW;
	} else {
	BIT_VEC cppVar_80004;
	BIT_VEC cppVar_80005 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80006 = (cppVar_80005 << 3) | 6;
	cppVar_80006 = (cppVar_80006 & cppMask_un_5_);
	BIT_VEC cppVar_80007 = (0 << 5) | cppVar_80006;
	cppVar_80007 = (cppVar_80007 & cppMask_un_8_);
	bool cppVar_80009 = (cppVar_80007 == 224);
	if (cppVar_80009) {
	cppVar_80004 = ACC;
	} else {
	BIT_VEC cppVar_80010;
	BIT_VEC cppVar_80011 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80012 = (cppVar_80011 << 3) | 6;
	cppVar_80012 = (cppVar_80012 & cppMask_un_5_);
	BIT_VEC cppVar_80013 = (0 << 5) | cppVar_80012;
	cppVar_80013 = (cppVar_80013 & cppMask_un_8_);
	bool cppVar_80015 = (cppVar_80013 == 240);
	if (cppVar_80015) {
	cppVar_80010 = B;
	} else {
	cppVar_80010 = 0;
	}
	cppVar_80004 = cppVar_80010;
	}
	cppVar_79998 = cppVar_80004;
	}
	cppVar_79992 = cppVar_79998;
	}
	cppVar_79986 = cppVar_79992;
	}
	cppVar_79980 = cppVar_79986;
	}
	cppVar_79974 = cppVar_79980;
	}
	cppVar_79968 = cppVar_79974;
	}
	cppVar_79962 = cppVar_79968;
	}
	cppVar_79956 = cppVar_79962;
	}
	cppVar_79950 = cppVar_79956;
	}
	cppVar_79944 = cppVar_79950;
	}
	cppVar_79938 = cppVar_79944;
	}
	cppVar_79932 = cppVar_79938;
	}
	cppVar_79926 = cppVar_79932;
	}
	cppVar_79920 = cppVar_79926;
	}
	cppVar_79914 = cppVar_79920;
	}
	cppVar_79908 = cppVar_79914;
	}
	cppVar_79902 = cppVar_79908;
	}
	cppVar_79896 = cppVar_79902;
	}
	cppVar_79890 = cppVar_79896;
	}
	cppVar_79877 = cppVar_79890;
	}
	cppVar_79871 = cppVar_79877;
	} else {
	cppVar_79871 = TL1;
	}
	cppVar_79867 = cppVar_79871;
	} else {
	BIT_VEC cppVar_80017;
	BIT_VEC cppVar_80018 = ROM.rd(PC);
	bool cppVar_80020 = (cppVar_80018 == 141);
	if (cppVar_80020) {
	BIT_VEC cppVar_80021;
	BIT_VEC cppVar_80023 = PC + 1;
	cppVar_80023 = (cppVar_80023 & cppMask_un_16_);
	BIT_VEC cppVar_80024 = ROM.rd(cppVar_80023);
	bool cppVar_80026 = (cppVar_80024 == 139);
	if (cppVar_80026) {
	BIT_VEC cppVar_80027;
	BIT_VEC cppVar_80029 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80031 = (cppVar_80029 << 3) | 5;
	cppVar_80031 = (cppVar_80031 & cppMask_un_5_);
	BIT_VEC cppVar_80032 = (0 << 5) | cppVar_80031;
	cppVar_80032 = (cppVar_80032 & cppMask_un_8_);
	BIT_VEC cppVar_80033 = (cppVar_80032 >> 7) & cppMask_un_1_;
	bool cppVar_80035 = (cppVar_80033 == 0);
	if (cppVar_80035) {
	BIT_VEC cppVar_80036 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80037 = (cppVar_80036 << 3) | 5;
	cppVar_80037 = (cppVar_80037 & cppMask_un_5_);
	BIT_VEC cppVar_80038 = (0 << 5) | cppVar_80037;
	cppVar_80038 = (cppVar_80038 & cppMask_un_8_);
	BIT_VEC cppVar_80039 = IRAM.rd(cppVar_80038);
	cppVar_80027 = cppVar_80039;
	} else {
	BIT_VEC cppVar_80040;
	BIT_VEC cppVar_80041 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80042 = (cppVar_80041 << 3) | 5;
	cppVar_80042 = (cppVar_80042 & cppMask_un_5_);
	BIT_VEC cppVar_80043 = (0 << 5) | cppVar_80042;
	cppVar_80043 = (cppVar_80043 & cppMask_un_8_);
	bool cppVar_80045 = (cppVar_80043 == 128);
	if (cppVar_80045) {
	cppVar_80040 = P0;
	} else {
	BIT_VEC cppVar_80046;
	BIT_VEC cppVar_80047 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80048 = (cppVar_80047 << 3) | 5;
	cppVar_80048 = (cppVar_80048 & cppMask_un_5_);
	BIT_VEC cppVar_80049 = (0 << 5) | cppVar_80048;
	cppVar_80049 = (cppVar_80049 & cppMask_un_8_);
	bool cppVar_80051 = (cppVar_80049 == 129);
	if (cppVar_80051) {
	cppVar_80046 = SP;
	} else {
	BIT_VEC cppVar_80052;
	BIT_VEC cppVar_80053 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80054 = (cppVar_80053 << 3) | 5;
	cppVar_80054 = (cppVar_80054 & cppMask_un_5_);
	BIT_VEC cppVar_80055 = (0 << 5) | cppVar_80054;
	cppVar_80055 = (cppVar_80055 & cppMask_un_8_);
	bool cppVar_80057 = (cppVar_80055 == 130);
	if (cppVar_80057) {
	cppVar_80052 = DPL;
	} else {
	BIT_VEC cppVar_80058;
	BIT_VEC cppVar_80059 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80060 = (cppVar_80059 << 3) | 5;
	cppVar_80060 = (cppVar_80060 & cppMask_un_5_);
	BIT_VEC cppVar_80061 = (0 << 5) | cppVar_80060;
	cppVar_80061 = (cppVar_80061 & cppMask_un_8_);
	bool cppVar_80063 = (cppVar_80061 == 131);
	if (cppVar_80063) {
	cppVar_80058 = DPH;
	} else {
	BIT_VEC cppVar_80064;
	BIT_VEC cppVar_80065 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80066 = (cppVar_80065 << 3) | 5;
	cppVar_80066 = (cppVar_80066 & cppMask_un_5_);
	BIT_VEC cppVar_80067 = (0 << 5) | cppVar_80066;
	cppVar_80067 = (cppVar_80067 & cppMask_un_8_);
	bool cppVar_80069 = (cppVar_80067 == 135);
	if (cppVar_80069) {
	cppVar_80064 = PCON;
	} else {
	BIT_VEC cppVar_80070;
	BIT_VEC cppVar_80071 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80072 = (cppVar_80071 << 3) | 5;
	cppVar_80072 = (cppVar_80072 & cppMask_un_5_);
	BIT_VEC cppVar_80073 = (0 << 5) | cppVar_80072;
	cppVar_80073 = (cppVar_80073 & cppMask_un_8_);
	bool cppVar_80075 = (cppVar_80073 == 136);
	if (cppVar_80075) {
	cppVar_80070 = TCON;
	} else {
	BIT_VEC cppVar_80076;
	BIT_VEC cppVar_80077 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80078 = (cppVar_80077 << 3) | 5;
	cppVar_80078 = (cppVar_80078 & cppMask_un_5_);
	BIT_VEC cppVar_80079 = (0 << 5) | cppVar_80078;
	cppVar_80079 = (cppVar_80079 & cppMask_un_8_);
	bool cppVar_80081 = (cppVar_80079 == 137);
	if (cppVar_80081) {
	cppVar_80076 = TMOD;
	} else {
	BIT_VEC cppVar_80082;
	BIT_VEC cppVar_80083 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80084 = (cppVar_80083 << 3) | 5;
	cppVar_80084 = (cppVar_80084 & cppMask_un_5_);
	BIT_VEC cppVar_80085 = (0 << 5) | cppVar_80084;
	cppVar_80085 = (cppVar_80085 & cppMask_un_8_);
	bool cppVar_80087 = (cppVar_80085 == 138);
	if (cppVar_80087) {
	cppVar_80082 = TL0;
	} else {
	BIT_VEC cppVar_80088;
	BIT_VEC cppVar_80089 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80090 = (cppVar_80089 << 3) | 5;
	cppVar_80090 = (cppVar_80090 & cppMask_un_5_);
	BIT_VEC cppVar_80091 = (0 << 5) | cppVar_80090;
	cppVar_80091 = (cppVar_80091 & cppMask_un_8_);
	bool cppVar_80093 = (cppVar_80091 == 140);
	if (cppVar_80093) {
	cppVar_80088 = TH0;
	} else {
	BIT_VEC cppVar_80094;
	BIT_VEC cppVar_80095 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80096 = (cppVar_80095 << 3) | 5;
	cppVar_80096 = (cppVar_80096 & cppMask_un_5_);
	BIT_VEC cppVar_80097 = (0 << 5) | cppVar_80096;
	cppVar_80097 = (cppVar_80097 & cppMask_un_8_);
	bool cppVar_80099 = (cppVar_80097 == 139);
	if (cppVar_80099) {
	cppVar_80094 = TL1;
	} else {
	BIT_VEC cppVar_80100;
	BIT_VEC cppVar_80101 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80102 = (cppVar_80101 << 3) | 5;
	cppVar_80102 = (cppVar_80102 & cppMask_un_5_);
	BIT_VEC cppVar_80103 = (0 << 5) | cppVar_80102;
	cppVar_80103 = (cppVar_80103 & cppMask_un_8_);
	bool cppVar_80105 = (cppVar_80103 == 141);
	if (cppVar_80105) {
	cppVar_80100 = TH1;
	} else {
	BIT_VEC cppVar_80106;
	BIT_VEC cppVar_80107 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80108 = (cppVar_80107 << 3) | 5;
	cppVar_80108 = (cppVar_80108 & cppMask_un_5_);
	BIT_VEC cppVar_80109 = (0 << 5) | cppVar_80108;
	cppVar_80109 = (cppVar_80109 & cppMask_un_8_);
	bool cppVar_80111 = (cppVar_80109 == 144);
	if (cppVar_80111) {
	cppVar_80106 = P1;
	} else {
	BIT_VEC cppVar_80112;
	BIT_VEC cppVar_80113 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80114 = (cppVar_80113 << 3) | 5;
	cppVar_80114 = (cppVar_80114 & cppMask_un_5_);
	BIT_VEC cppVar_80115 = (0 << 5) | cppVar_80114;
	cppVar_80115 = (cppVar_80115 & cppMask_un_8_);
	bool cppVar_80117 = (cppVar_80115 == 152);
	if (cppVar_80117) {
	cppVar_80112 = SCON;
	} else {
	BIT_VEC cppVar_80118;
	BIT_VEC cppVar_80119 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80120 = (cppVar_80119 << 3) | 5;
	cppVar_80120 = (cppVar_80120 & cppMask_un_5_);
	BIT_VEC cppVar_80121 = (0 << 5) | cppVar_80120;
	cppVar_80121 = (cppVar_80121 & cppMask_un_8_);
	bool cppVar_80123 = (cppVar_80121 == 153);
	if (cppVar_80123) {
	cppVar_80118 = SBUF;
	} else {
	BIT_VEC cppVar_80124;
	BIT_VEC cppVar_80125 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80126 = (cppVar_80125 << 3) | 5;
	cppVar_80126 = (cppVar_80126 & cppMask_un_5_);
	BIT_VEC cppVar_80127 = (0 << 5) | cppVar_80126;
	cppVar_80127 = (cppVar_80127 & cppMask_un_8_);
	bool cppVar_80129 = (cppVar_80127 == 160);
	if (cppVar_80129) {
	cppVar_80124 = P2;
	} else {
	BIT_VEC cppVar_80130;
	BIT_VEC cppVar_80131 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80132 = (cppVar_80131 << 3) | 5;
	cppVar_80132 = (cppVar_80132 & cppMask_un_5_);
	BIT_VEC cppVar_80133 = (0 << 5) | cppVar_80132;
	cppVar_80133 = (cppVar_80133 & cppMask_un_8_);
	bool cppVar_80135 = (cppVar_80133 == 168);
	if (cppVar_80135) {
	cppVar_80130 = IE;
	} else {
	BIT_VEC cppVar_80136;
	BIT_VEC cppVar_80137 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80138 = (cppVar_80137 << 3) | 5;
	cppVar_80138 = (cppVar_80138 & cppMask_un_5_);
	BIT_VEC cppVar_80139 = (0 << 5) | cppVar_80138;
	cppVar_80139 = (cppVar_80139 & cppMask_un_8_);
	bool cppVar_80141 = (cppVar_80139 == 176);
	if (cppVar_80141) {
	cppVar_80136 = P3;
	} else {
	BIT_VEC cppVar_80142;
	BIT_VEC cppVar_80143 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80144 = (cppVar_80143 << 3) | 5;
	cppVar_80144 = (cppVar_80144 & cppMask_un_5_);
	BIT_VEC cppVar_80145 = (0 << 5) | cppVar_80144;
	cppVar_80145 = (cppVar_80145 & cppMask_un_8_);
	bool cppVar_80147 = (cppVar_80145 == 184);
	if (cppVar_80147) {
	cppVar_80142 = IP;
	} else {
	BIT_VEC cppVar_80148;
	BIT_VEC cppVar_80149 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80150 = (cppVar_80149 << 3) | 5;
	cppVar_80150 = (cppVar_80150 & cppMask_un_5_);
	BIT_VEC cppVar_80151 = (0 << 5) | cppVar_80150;
	cppVar_80151 = (cppVar_80151 & cppMask_un_8_);
	bool cppVar_80153 = (cppVar_80151 == 208);
	if (cppVar_80153) {
	cppVar_80148 = PSW;
	} else {
	BIT_VEC cppVar_80154;
	BIT_VEC cppVar_80155 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80156 = (cppVar_80155 << 3) | 5;
	cppVar_80156 = (cppVar_80156 & cppMask_un_5_);
	BIT_VEC cppVar_80157 = (0 << 5) | cppVar_80156;
	cppVar_80157 = (cppVar_80157 & cppMask_un_8_);
	bool cppVar_80159 = (cppVar_80157 == 224);
	if (cppVar_80159) {
	cppVar_80154 = ACC;
	} else {
	BIT_VEC cppVar_80160;
	BIT_VEC cppVar_80161 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80162 = (cppVar_80161 << 3) | 5;
	cppVar_80162 = (cppVar_80162 & cppMask_un_5_);
	BIT_VEC cppVar_80163 = (0 << 5) | cppVar_80162;
	cppVar_80163 = (cppVar_80163 & cppMask_un_8_);
	bool cppVar_80165 = (cppVar_80163 == 240);
	if (cppVar_80165) {
	cppVar_80160 = B;
	} else {
	cppVar_80160 = 0;
	}
	cppVar_80154 = cppVar_80160;
	}
	cppVar_80148 = cppVar_80154;
	}
	cppVar_80142 = cppVar_80148;
	}
	cppVar_80136 = cppVar_80142;
	}
	cppVar_80130 = cppVar_80136;
	}
	cppVar_80124 = cppVar_80130;
	}
	cppVar_80118 = cppVar_80124;
	}
	cppVar_80112 = cppVar_80118;
	}
	cppVar_80106 = cppVar_80112;
	}
	cppVar_80100 = cppVar_80106;
	}
	cppVar_80094 = cppVar_80100;
	}
	cppVar_80088 = cppVar_80094;
	}
	cppVar_80082 = cppVar_80088;
	}
	cppVar_80076 = cppVar_80082;
	}
	cppVar_80070 = cppVar_80076;
	}
	cppVar_80064 = cppVar_80070;
	}
	cppVar_80058 = cppVar_80064;
	}
	cppVar_80052 = cppVar_80058;
	}
	cppVar_80046 = cppVar_80052;
	}
	cppVar_80040 = cppVar_80046;
	}
	cppVar_80027 = cppVar_80040;
	}
	cppVar_80021 = cppVar_80027;
	} else {
	cppVar_80021 = TL1;
	}
	cppVar_80017 = cppVar_80021;
	} else {
	BIT_VEC cppVar_80167;
	BIT_VEC cppVar_80168 = ROM.rd(PC);
	bool cppVar_80170 = (cppVar_80168 == 140);
	if (cppVar_80170) {
	BIT_VEC cppVar_80171;
	BIT_VEC cppVar_80173 = PC + 1;
	cppVar_80173 = (cppVar_80173 & cppMask_un_16_);
	BIT_VEC cppVar_80174 = ROM.rd(cppVar_80173);
	bool cppVar_80176 = (cppVar_80174 == 139);
	if (cppVar_80176) {
	BIT_VEC cppVar_80177;
	BIT_VEC cppVar_80179 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80181 = (cppVar_80179 << 3) | 4;
	cppVar_80181 = (cppVar_80181 & cppMask_un_5_);
	BIT_VEC cppVar_80182 = (0 << 5) | cppVar_80181;
	cppVar_80182 = (cppVar_80182 & cppMask_un_8_);
	BIT_VEC cppVar_80183 = (cppVar_80182 >> 7) & cppMask_un_1_;
	bool cppVar_80185 = (cppVar_80183 == 0);
	if (cppVar_80185) {
	BIT_VEC cppVar_80186 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80187 = (cppVar_80186 << 3) | 4;
	cppVar_80187 = (cppVar_80187 & cppMask_un_5_);
	BIT_VEC cppVar_80188 = (0 << 5) | cppVar_80187;
	cppVar_80188 = (cppVar_80188 & cppMask_un_8_);
	BIT_VEC cppVar_80189 = IRAM.rd(cppVar_80188);
	cppVar_80177 = cppVar_80189;
	} else {
	BIT_VEC cppVar_80190;
	BIT_VEC cppVar_80191 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80192 = (cppVar_80191 << 3) | 4;
	cppVar_80192 = (cppVar_80192 & cppMask_un_5_);
	BIT_VEC cppVar_80193 = (0 << 5) | cppVar_80192;
	cppVar_80193 = (cppVar_80193 & cppMask_un_8_);
	bool cppVar_80195 = (cppVar_80193 == 128);
	if (cppVar_80195) {
	cppVar_80190 = P0;
	} else {
	BIT_VEC cppVar_80196;
	BIT_VEC cppVar_80197 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80198 = (cppVar_80197 << 3) | 4;
	cppVar_80198 = (cppVar_80198 & cppMask_un_5_);
	BIT_VEC cppVar_80199 = (0 << 5) | cppVar_80198;
	cppVar_80199 = (cppVar_80199 & cppMask_un_8_);
	bool cppVar_80201 = (cppVar_80199 == 129);
	if (cppVar_80201) {
	cppVar_80196 = SP;
	} else {
	BIT_VEC cppVar_80202;
	BIT_VEC cppVar_80203 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80204 = (cppVar_80203 << 3) | 4;
	cppVar_80204 = (cppVar_80204 & cppMask_un_5_);
	BIT_VEC cppVar_80205 = (0 << 5) | cppVar_80204;
	cppVar_80205 = (cppVar_80205 & cppMask_un_8_);
	bool cppVar_80207 = (cppVar_80205 == 130);
	if (cppVar_80207) {
	cppVar_80202 = DPL;
	} else {
	BIT_VEC cppVar_80208;
	BIT_VEC cppVar_80209 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80210 = (cppVar_80209 << 3) | 4;
	cppVar_80210 = (cppVar_80210 & cppMask_un_5_);
	BIT_VEC cppVar_80211 = (0 << 5) | cppVar_80210;
	cppVar_80211 = (cppVar_80211 & cppMask_un_8_);
	bool cppVar_80213 = (cppVar_80211 == 131);
	if (cppVar_80213) {
	cppVar_80208 = DPH;
	} else {
	BIT_VEC cppVar_80214;
	BIT_VEC cppVar_80215 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80216 = (cppVar_80215 << 3) | 4;
	cppVar_80216 = (cppVar_80216 & cppMask_un_5_);
	BIT_VEC cppVar_80217 = (0 << 5) | cppVar_80216;
	cppVar_80217 = (cppVar_80217 & cppMask_un_8_);
	bool cppVar_80219 = (cppVar_80217 == 135);
	if (cppVar_80219) {
	cppVar_80214 = PCON;
	} else {
	BIT_VEC cppVar_80220;
	BIT_VEC cppVar_80221 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80222 = (cppVar_80221 << 3) | 4;
	cppVar_80222 = (cppVar_80222 & cppMask_un_5_);
	BIT_VEC cppVar_80223 = (0 << 5) | cppVar_80222;
	cppVar_80223 = (cppVar_80223 & cppMask_un_8_);
	bool cppVar_80225 = (cppVar_80223 == 136);
	if (cppVar_80225) {
	cppVar_80220 = TCON;
	} else {
	BIT_VEC cppVar_80226;
	BIT_VEC cppVar_80227 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80228 = (cppVar_80227 << 3) | 4;
	cppVar_80228 = (cppVar_80228 & cppMask_un_5_);
	BIT_VEC cppVar_80229 = (0 << 5) | cppVar_80228;
	cppVar_80229 = (cppVar_80229 & cppMask_un_8_);
	bool cppVar_80231 = (cppVar_80229 == 137);
	if (cppVar_80231) {
	cppVar_80226 = TMOD;
	} else {
	BIT_VEC cppVar_80232;
	BIT_VEC cppVar_80233 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80234 = (cppVar_80233 << 3) | 4;
	cppVar_80234 = (cppVar_80234 & cppMask_un_5_);
	BIT_VEC cppVar_80235 = (0 << 5) | cppVar_80234;
	cppVar_80235 = (cppVar_80235 & cppMask_un_8_);
	bool cppVar_80237 = (cppVar_80235 == 138);
	if (cppVar_80237) {
	cppVar_80232 = TL0;
	} else {
	BIT_VEC cppVar_80238;
	BIT_VEC cppVar_80239 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80240 = (cppVar_80239 << 3) | 4;
	cppVar_80240 = (cppVar_80240 & cppMask_un_5_);
	BIT_VEC cppVar_80241 = (0 << 5) | cppVar_80240;
	cppVar_80241 = (cppVar_80241 & cppMask_un_8_);
	bool cppVar_80243 = (cppVar_80241 == 140);
	if (cppVar_80243) {
	cppVar_80238 = TH0;
	} else {
	BIT_VEC cppVar_80244;
	BIT_VEC cppVar_80245 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80246 = (cppVar_80245 << 3) | 4;
	cppVar_80246 = (cppVar_80246 & cppMask_un_5_);
	BIT_VEC cppVar_80247 = (0 << 5) | cppVar_80246;
	cppVar_80247 = (cppVar_80247 & cppMask_un_8_);
	bool cppVar_80249 = (cppVar_80247 == 139);
	if (cppVar_80249) {
	cppVar_80244 = TL1;
	} else {
	BIT_VEC cppVar_80250;
	BIT_VEC cppVar_80251 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80252 = (cppVar_80251 << 3) | 4;
	cppVar_80252 = (cppVar_80252 & cppMask_un_5_);
	BIT_VEC cppVar_80253 = (0 << 5) | cppVar_80252;
	cppVar_80253 = (cppVar_80253 & cppMask_un_8_);
	bool cppVar_80255 = (cppVar_80253 == 141);
	if (cppVar_80255) {
	cppVar_80250 = TH1;
	} else {
	BIT_VEC cppVar_80256;
	BIT_VEC cppVar_80257 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80258 = (cppVar_80257 << 3) | 4;
	cppVar_80258 = (cppVar_80258 & cppMask_un_5_);
	BIT_VEC cppVar_80259 = (0 << 5) | cppVar_80258;
	cppVar_80259 = (cppVar_80259 & cppMask_un_8_);
	bool cppVar_80261 = (cppVar_80259 == 144);
	if (cppVar_80261) {
	cppVar_80256 = P1;
	} else {
	BIT_VEC cppVar_80262;
	BIT_VEC cppVar_80263 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80264 = (cppVar_80263 << 3) | 4;
	cppVar_80264 = (cppVar_80264 & cppMask_un_5_);
	BIT_VEC cppVar_80265 = (0 << 5) | cppVar_80264;
	cppVar_80265 = (cppVar_80265 & cppMask_un_8_);
	bool cppVar_80267 = (cppVar_80265 == 152);
	if (cppVar_80267) {
	cppVar_80262 = SCON;
	} else {
	BIT_VEC cppVar_80268;
	BIT_VEC cppVar_80269 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80270 = (cppVar_80269 << 3) | 4;
	cppVar_80270 = (cppVar_80270 & cppMask_un_5_);
	BIT_VEC cppVar_80271 = (0 << 5) | cppVar_80270;
	cppVar_80271 = (cppVar_80271 & cppMask_un_8_);
	bool cppVar_80273 = (cppVar_80271 == 153);
	if (cppVar_80273) {
	cppVar_80268 = SBUF;
	} else {
	BIT_VEC cppVar_80274;
	BIT_VEC cppVar_80275 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80276 = (cppVar_80275 << 3) | 4;
	cppVar_80276 = (cppVar_80276 & cppMask_un_5_);
	BIT_VEC cppVar_80277 = (0 << 5) | cppVar_80276;
	cppVar_80277 = (cppVar_80277 & cppMask_un_8_);
	bool cppVar_80279 = (cppVar_80277 == 160);
	if (cppVar_80279) {
	cppVar_80274 = P2;
	} else {
	BIT_VEC cppVar_80280;
	BIT_VEC cppVar_80281 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80282 = (cppVar_80281 << 3) | 4;
	cppVar_80282 = (cppVar_80282 & cppMask_un_5_);
	BIT_VEC cppVar_80283 = (0 << 5) | cppVar_80282;
	cppVar_80283 = (cppVar_80283 & cppMask_un_8_);
	bool cppVar_80285 = (cppVar_80283 == 168);
	if (cppVar_80285) {
	cppVar_80280 = IE;
	} else {
	BIT_VEC cppVar_80286;
	BIT_VEC cppVar_80287 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80288 = (cppVar_80287 << 3) | 4;
	cppVar_80288 = (cppVar_80288 & cppMask_un_5_);
	BIT_VEC cppVar_80289 = (0 << 5) | cppVar_80288;
	cppVar_80289 = (cppVar_80289 & cppMask_un_8_);
	bool cppVar_80291 = (cppVar_80289 == 176);
	if (cppVar_80291) {
	cppVar_80286 = P3;
	} else {
	BIT_VEC cppVar_80292;
	BIT_VEC cppVar_80293 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80294 = (cppVar_80293 << 3) | 4;
	cppVar_80294 = (cppVar_80294 & cppMask_un_5_);
	BIT_VEC cppVar_80295 = (0 << 5) | cppVar_80294;
	cppVar_80295 = (cppVar_80295 & cppMask_un_8_);
	bool cppVar_80297 = (cppVar_80295 == 184);
	if (cppVar_80297) {
	cppVar_80292 = IP;
	} else {
	BIT_VEC cppVar_80298;
	BIT_VEC cppVar_80299 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80300 = (cppVar_80299 << 3) | 4;
	cppVar_80300 = (cppVar_80300 & cppMask_un_5_);
	BIT_VEC cppVar_80301 = (0 << 5) | cppVar_80300;
	cppVar_80301 = (cppVar_80301 & cppMask_un_8_);
	bool cppVar_80303 = (cppVar_80301 == 208);
	if (cppVar_80303) {
	cppVar_80298 = PSW;
	} else {
	BIT_VEC cppVar_80304;
	BIT_VEC cppVar_80305 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80306 = (cppVar_80305 << 3) | 4;
	cppVar_80306 = (cppVar_80306 & cppMask_un_5_);
	BIT_VEC cppVar_80307 = (0 << 5) | cppVar_80306;
	cppVar_80307 = (cppVar_80307 & cppMask_un_8_);
	bool cppVar_80309 = (cppVar_80307 == 224);
	if (cppVar_80309) {
	cppVar_80304 = ACC;
	} else {
	BIT_VEC cppVar_80310;
	BIT_VEC cppVar_80311 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80312 = (cppVar_80311 << 3) | 4;
	cppVar_80312 = (cppVar_80312 & cppMask_un_5_);
	BIT_VEC cppVar_80313 = (0 << 5) | cppVar_80312;
	cppVar_80313 = (cppVar_80313 & cppMask_un_8_);
	bool cppVar_80315 = (cppVar_80313 == 240);
	if (cppVar_80315) {
	cppVar_80310 = B;
	} else {
	cppVar_80310 = 0;
	}
	cppVar_80304 = cppVar_80310;
	}
	cppVar_80298 = cppVar_80304;
	}
	cppVar_80292 = cppVar_80298;
	}
	cppVar_80286 = cppVar_80292;
	}
	cppVar_80280 = cppVar_80286;
	}
	cppVar_80274 = cppVar_80280;
	}
	cppVar_80268 = cppVar_80274;
	}
	cppVar_80262 = cppVar_80268;
	}
	cppVar_80256 = cppVar_80262;
	}
	cppVar_80250 = cppVar_80256;
	}
	cppVar_80244 = cppVar_80250;
	}
	cppVar_80238 = cppVar_80244;
	}
	cppVar_80232 = cppVar_80238;
	}
	cppVar_80226 = cppVar_80232;
	}
	cppVar_80220 = cppVar_80226;
	}
	cppVar_80214 = cppVar_80220;
	}
	cppVar_80208 = cppVar_80214;
	}
	cppVar_80202 = cppVar_80208;
	}
	cppVar_80196 = cppVar_80202;
	}
	cppVar_80190 = cppVar_80196;
	}
	cppVar_80177 = cppVar_80190;
	}
	cppVar_80171 = cppVar_80177;
	} else {
	cppVar_80171 = TL1;
	}
	cppVar_80167 = cppVar_80171;
	} else {
	BIT_VEC cppVar_80317;
	BIT_VEC cppVar_80318 = ROM.rd(PC);
	bool cppVar_80320 = (cppVar_80318 == 139);
	if (cppVar_80320) {
	BIT_VEC cppVar_80321;
	BIT_VEC cppVar_80323 = PC + 1;
	cppVar_80323 = (cppVar_80323 & cppMask_un_16_);
	BIT_VEC cppVar_80324 = ROM.rd(cppVar_80323);
	bool cppVar_80326 = (cppVar_80324 == 139);
	if (cppVar_80326) {
	BIT_VEC cppVar_80327;
	BIT_VEC cppVar_80329 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80331 = (cppVar_80329 << 3) | 3;
	cppVar_80331 = (cppVar_80331 & cppMask_un_5_);
	BIT_VEC cppVar_80332 = (0 << 5) | cppVar_80331;
	cppVar_80332 = (cppVar_80332 & cppMask_un_8_);
	BIT_VEC cppVar_80333 = (cppVar_80332 >> 7) & cppMask_un_1_;
	bool cppVar_80335 = (cppVar_80333 == 0);
	if (cppVar_80335) {
	BIT_VEC cppVar_80336 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80337 = (cppVar_80336 << 3) | 3;
	cppVar_80337 = (cppVar_80337 & cppMask_un_5_);
	BIT_VEC cppVar_80338 = (0 << 5) | cppVar_80337;
	cppVar_80338 = (cppVar_80338 & cppMask_un_8_);
	BIT_VEC cppVar_80339 = IRAM.rd(cppVar_80338);
	cppVar_80327 = cppVar_80339;
	} else {
	BIT_VEC cppVar_80340;
	BIT_VEC cppVar_80341 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80342 = (cppVar_80341 << 3) | 3;
	cppVar_80342 = (cppVar_80342 & cppMask_un_5_);
	BIT_VEC cppVar_80343 = (0 << 5) | cppVar_80342;
	cppVar_80343 = (cppVar_80343 & cppMask_un_8_);
	bool cppVar_80345 = (cppVar_80343 == 128);
	if (cppVar_80345) {
	cppVar_80340 = P0;
	} else {
	BIT_VEC cppVar_80346;
	BIT_VEC cppVar_80347 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80348 = (cppVar_80347 << 3) | 3;
	cppVar_80348 = (cppVar_80348 & cppMask_un_5_);
	BIT_VEC cppVar_80349 = (0 << 5) | cppVar_80348;
	cppVar_80349 = (cppVar_80349 & cppMask_un_8_);
	bool cppVar_80351 = (cppVar_80349 == 129);
	if (cppVar_80351) {
	cppVar_80346 = SP;
	} else {
	BIT_VEC cppVar_80352;
	BIT_VEC cppVar_80353 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80354 = (cppVar_80353 << 3) | 3;
	cppVar_80354 = (cppVar_80354 & cppMask_un_5_);
	BIT_VEC cppVar_80355 = (0 << 5) | cppVar_80354;
	cppVar_80355 = (cppVar_80355 & cppMask_un_8_);
	bool cppVar_80357 = (cppVar_80355 == 130);
	if (cppVar_80357) {
	cppVar_80352 = DPL;
	} else {
	BIT_VEC cppVar_80358;
	BIT_VEC cppVar_80359 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80360 = (cppVar_80359 << 3) | 3;
	cppVar_80360 = (cppVar_80360 & cppMask_un_5_);
	BIT_VEC cppVar_80361 = (0 << 5) | cppVar_80360;
	cppVar_80361 = (cppVar_80361 & cppMask_un_8_);
	bool cppVar_80363 = (cppVar_80361 == 131);
	if (cppVar_80363) {
	cppVar_80358 = DPH;
	} else {
	BIT_VEC cppVar_80364;
	BIT_VEC cppVar_80365 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80366 = (cppVar_80365 << 3) | 3;
	cppVar_80366 = (cppVar_80366 & cppMask_un_5_);
	BIT_VEC cppVar_80367 = (0 << 5) | cppVar_80366;
	cppVar_80367 = (cppVar_80367 & cppMask_un_8_);
	bool cppVar_80369 = (cppVar_80367 == 135);
	if (cppVar_80369) {
	cppVar_80364 = PCON;
	} else {
	BIT_VEC cppVar_80370;
	BIT_VEC cppVar_80371 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80372 = (cppVar_80371 << 3) | 3;
	cppVar_80372 = (cppVar_80372 & cppMask_un_5_);
	BIT_VEC cppVar_80373 = (0 << 5) | cppVar_80372;
	cppVar_80373 = (cppVar_80373 & cppMask_un_8_);
	bool cppVar_80375 = (cppVar_80373 == 136);
	if (cppVar_80375) {
	cppVar_80370 = TCON;
	} else {
	BIT_VEC cppVar_80376;
	BIT_VEC cppVar_80377 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80378 = (cppVar_80377 << 3) | 3;
	cppVar_80378 = (cppVar_80378 & cppMask_un_5_);
	BIT_VEC cppVar_80379 = (0 << 5) | cppVar_80378;
	cppVar_80379 = (cppVar_80379 & cppMask_un_8_);
	bool cppVar_80381 = (cppVar_80379 == 137);
	if (cppVar_80381) {
	cppVar_80376 = TMOD;
	} else {
	BIT_VEC cppVar_80382;
	BIT_VEC cppVar_80383 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80384 = (cppVar_80383 << 3) | 3;
	cppVar_80384 = (cppVar_80384 & cppMask_un_5_);
	BIT_VEC cppVar_80385 = (0 << 5) | cppVar_80384;
	cppVar_80385 = (cppVar_80385 & cppMask_un_8_);
	bool cppVar_80387 = (cppVar_80385 == 138);
	if (cppVar_80387) {
	cppVar_80382 = TL0;
	} else {
	BIT_VEC cppVar_80388;
	BIT_VEC cppVar_80389 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80390 = (cppVar_80389 << 3) | 3;
	cppVar_80390 = (cppVar_80390 & cppMask_un_5_);
	BIT_VEC cppVar_80391 = (0 << 5) | cppVar_80390;
	cppVar_80391 = (cppVar_80391 & cppMask_un_8_);
	bool cppVar_80393 = (cppVar_80391 == 140);
	if (cppVar_80393) {
	cppVar_80388 = TH0;
	} else {
	BIT_VEC cppVar_80394;
	BIT_VEC cppVar_80395 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80396 = (cppVar_80395 << 3) | 3;
	cppVar_80396 = (cppVar_80396 & cppMask_un_5_);
	BIT_VEC cppVar_80397 = (0 << 5) | cppVar_80396;
	cppVar_80397 = (cppVar_80397 & cppMask_un_8_);
	bool cppVar_80399 = (cppVar_80397 == 139);
	if (cppVar_80399) {
	cppVar_80394 = TL1;
	} else {
	BIT_VEC cppVar_80400;
	BIT_VEC cppVar_80401 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80402 = (cppVar_80401 << 3) | 3;
	cppVar_80402 = (cppVar_80402 & cppMask_un_5_);
	BIT_VEC cppVar_80403 = (0 << 5) | cppVar_80402;
	cppVar_80403 = (cppVar_80403 & cppMask_un_8_);
	bool cppVar_80405 = (cppVar_80403 == 141);
	if (cppVar_80405) {
	cppVar_80400 = TH1;
	} else {
	BIT_VEC cppVar_80406;
	BIT_VEC cppVar_80407 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80408 = (cppVar_80407 << 3) | 3;
	cppVar_80408 = (cppVar_80408 & cppMask_un_5_);
	BIT_VEC cppVar_80409 = (0 << 5) | cppVar_80408;
	cppVar_80409 = (cppVar_80409 & cppMask_un_8_);
	bool cppVar_80411 = (cppVar_80409 == 144);
	if (cppVar_80411) {
	cppVar_80406 = P1;
	} else {
	BIT_VEC cppVar_80412;
	BIT_VEC cppVar_80413 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80414 = (cppVar_80413 << 3) | 3;
	cppVar_80414 = (cppVar_80414 & cppMask_un_5_);
	BIT_VEC cppVar_80415 = (0 << 5) | cppVar_80414;
	cppVar_80415 = (cppVar_80415 & cppMask_un_8_);
	bool cppVar_80417 = (cppVar_80415 == 152);
	if (cppVar_80417) {
	cppVar_80412 = SCON;
	} else {
	BIT_VEC cppVar_80418;
	BIT_VEC cppVar_80419 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80420 = (cppVar_80419 << 3) | 3;
	cppVar_80420 = (cppVar_80420 & cppMask_un_5_);
	BIT_VEC cppVar_80421 = (0 << 5) | cppVar_80420;
	cppVar_80421 = (cppVar_80421 & cppMask_un_8_);
	bool cppVar_80423 = (cppVar_80421 == 153);
	if (cppVar_80423) {
	cppVar_80418 = SBUF;
	} else {
	BIT_VEC cppVar_80424;
	BIT_VEC cppVar_80425 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80426 = (cppVar_80425 << 3) | 3;
	cppVar_80426 = (cppVar_80426 & cppMask_un_5_);
	BIT_VEC cppVar_80427 = (0 << 5) | cppVar_80426;
	cppVar_80427 = (cppVar_80427 & cppMask_un_8_);
	bool cppVar_80429 = (cppVar_80427 == 160);
	if (cppVar_80429) {
	cppVar_80424 = P2;
	} else {
	BIT_VEC cppVar_80430;
	BIT_VEC cppVar_80431 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80432 = (cppVar_80431 << 3) | 3;
	cppVar_80432 = (cppVar_80432 & cppMask_un_5_);
	BIT_VEC cppVar_80433 = (0 << 5) | cppVar_80432;
	cppVar_80433 = (cppVar_80433 & cppMask_un_8_);
	bool cppVar_80435 = (cppVar_80433 == 168);
	if (cppVar_80435) {
	cppVar_80430 = IE;
	} else {
	BIT_VEC cppVar_80436;
	BIT_VEC cppVar_80437 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80438 = (cppVar_80437 << 3) | 3;
	cppVar_80438 = (cppVar_80438 & cppMask_un_5_);
	BIT_VEC cppVar_80439 = (0 << 5) | cppVar_80438;
	cppVar_80439 = (cppVar_80439 & cppMask_un_8_);
	bool cppVar_80441 = (cppVar_80439 == 176);
	if (cppVar_80441) {
	cppVar_80436 = P3;
	} else {
	BIT_VEC cppVar_80442;
	BIT_VEC cppVar_80443 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80444 = (cppVar_80443 << 3) | 3;
	cppVar_80444 = (cppVar_80444 & cppMask_un_5_);
	BIT_VEC cppVar_80445 = (0 << 5) | cppVar_80444;
	cppVar_80445 = (cppVar_80445 & cppMask_un_8_);
	bool cppVar_80447 = (cppVar_80445 == 184);
	if (cppVar_80447) {
	cppVar_80442 = IP;
	} else {
	BIT_VEC cppVar_80448;
	BIT_VEC cppVar_80449 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80450 = (cppVar_80449 << 3) | 3;
	cppVar_80450 = (cppVar_80450 & cppMask_un_5_);
	BIT_VEC cppVar_80451 = (0 << 5) | cppVar_80450;
	cppVar_80451 = (cppVar_80451 & cppMask_un_8_);
	bool cppVar_80453 = (cppVar_80451 == 208);
	if (cppVar_80453) {
	cppVar_80448 = PSW;
	} else {
	BIT_VEC cppVar_80454;
	BIT_VEC cppVar_80455 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80456 = (cppVar_80455 << 3) | 3;
	cppVar_80456 = (cppVar_80456 & cppMask_un_5_);
	BIT_VEC cppVar_80457 = (0 << 5) | cppVar_80456;
	cppVar_80457 = (cppVar_80457 & cppMask_un_8_);
	bool cppVar_80459 = (cppVar_80457 == 224);
	if (cppVar_80459) {
	cppVar_80454 = ACC;
	} else {
	BIT_VEC cppVar_80460;
	BIT_VEC cppVar_80461 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80462 = (cppVar_80461 << 3) | 3;
	cppVar_80462 = (cppVar_80462 & cppMask_un_5_);
	BIT_VEC cppVar_80463 = (0 << 5) | cppVar_80462;
	cppVar_80463 = (cppVar_80463 & cppMask_un_8_);
	bool cppVar_80465 = (cppVar_80463 == 240);
	if (cppVar_80465) {
	cppVar_80460 = B;
	} else {
	cppVar_80460 = 0;
	}
	cppVar_80454 = cppVar_80460;
	}
	cppVar_80448 = cppVar_80454;
	}
	cppVar_80442 = cppVar_80448;
	}
	cppVar_80436 = cppVar_80442;
	}
	cppVar_80430 = cppVar_80436;
	}
	cppVar_80424 = cppVar_80430;
	}
	cppVar_80418 = cppVar_80424;
	}
	cppVar_80412 = cppVar_80418;
	}
	cppVar_80406 = cppVar_80412;
	}
	cppVar_80400 = cppVar_80406;
	}
	cppVar_80394 = cppVar_80400;
	}
	cppVar_80388 = cppVar_80394;
	}
	cppVar_80382 = cppVar_80388;
	}
	cppVar_80376 = cppVar_80382;
	}
	cppVar_80370 = cppVar_80376;
	}
	cppVar_80364 = cppVar_80370;
	}
	cppVar_80358 = cppVar_80364;
	}
	cppVar_80352 = cppVar_80358;
	}
	cppVar_80346 = cppVar_80352;
	}
	cppVar_80340 = cppVar_80346;
	}
	cppVar_80327 = cppVar_80340;
	}
	cppVar_80321 = cppVar_80327;
	} else {
	cppVar_80321 = TL1;
	}
	cppVar_80317 = cppVar_80321;
	} else {
	BIT_VEC cppVar_80467;
	BIT_VEC cppVar_80468 = ROM.rd(PC);
	bool cppVar_80470 = (cppVar_80468 == 138);
	if (cppVar_80470) {
	BIT_VEC cppVar_80471;
	BIT_VEC cppVar_80473 = PC + 1;
	cppVar_80473 = (cppVar_80473 & cppMask_un_16_);
	BIT_VEC cppVar_80474 = ROM.rd(cppVar_80473);
	bool cppVar_80476 = (cppVar_80474 == 139);
	if (cppVar_80476) {
	BIT_VEC cppVar_80477;
	BIT_VEC cppVar_80479 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80481 = (cppVar_80479 << 3) | 2;
	cppVar_80481 = (cppVar_80481 & cppMask_un_5_);
	BIT_VEC cppVar_80482 = (0 << 5) | cppVar_80481;
	cppVar_80482 = (cppVar_80482 & cppMask_un_8_);
	BIT_VEC cppVar_80483 = (cppVar_80482 >> 7) & cppMask_un_1_;
	bool cppVar_80485 = (cppVar_80483 == 0);
	if (cppVar_80485) {
	BIT_VEC cppVar_80486 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80487 = (cppVar_80486 << 3) | 2;
	cppVar_80487 = (cppVar_80487 & cppMask_un_5_);
	BIT_VEC cppVar_80488 = (0 << 5) | cppVar_80487;
	cppVar_80488 = (cppVar_80488 & cppMask_un_8_);
	BIT_VEC cppVar_80489 = IRAM.rd(cppVar_80488);
	cppVar_80477 = cppVar_80489;
	} else {
	BIT_VEC cppVar_80490;
	BIT_VEC cppVar_80491 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80492 = (cppVar_80491 << 3) | 2;
	cppVar_80492 = (cppVar_80492 & cppMask_un_5_);
	BIT_VEC cppVar_80493 = (0 << 5) | cppVar_80492;
	cppVar_80493 = (cppVar_80493 & cppMask_un_8_);
	bool cppVar_80495 = (cppVar_80493 == 128);
	if (cppVar_80495) {
	cppVar_80490 = P0;
	} else {
	BIT_VEC cppVar_80496;
	BIT_VEC cppVar_80497 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80498 = (cppVar_80497 << 3) | 2;
	cppVar_80498 = (cppVar_80498 & cppMask_un_5_);
	BIT_VEC cppVar_80499 = (0 << 5) | cppVar_80498;
	cppVar_80499 = (cppVar_80499 & cppMask_un_8_);
	bool cppVar_80501 = (cppVar_80499 == 129);
	if (cppVar_80501) {
	cppVar_80496 = SP;
	} else {
	BIT_VEC cppVar_80502;
	BIT_VEC cppVar_80503 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80504 = (cppVar_80503 << 3) | 2;
	cppVar_80504 = (cppVar_80504 & cppMask_un_5_);
	BIT_VEC cppVar_80505 = (0 << 5) | cppVar_80504;
	cppVar_80505 = (cppVar_80505 & cppMask_un_8_);
	bool cppVar_80507 = (cppVar_80505 == 130);
	if (cppVar_80507) {
	cppVar_80502 = DPL;
	} else {
	BIT_VEC cppVar_80508;
	BIT_VEC cppVar_80509 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80510 = (cppVar_80509 << 3) | 2;
	cppVar_80510 = (cppVar_80510 & cppMask_un_5_);
	BIT_VEC cppVar_80511 = (0 << 5) | cppVar_80510;
	cppVar_80511 = (cppVar_80511 & cppMask_un_8_);
	bool cppVar_80513 = (cppVar_80511 == 131);
	if (cppVar_80513) {
	cppVar_80508 = DPH;
	} else {
	BIT_VEC cppVar_80514;
	BIT_VEC cppVar_80515 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80516 = (cppVar_80515 << 3) | 2;
	cppVar_80516 = (cppVar_80516 & cppMask_un_5_);
	BIT_VEC cppVar_80517 = (0 << 5) | cppVar_80516;
	cppVar_80517 = (cppVar_80517 & cppMask_un_8_);
	bool cppVar_80519 = (cppVar_80517 == 135);
	if (cppVar_80519) {
	cppVar_80514 = PCON;
	} else {
	BIT_VEC cppVar_80520;
	BIT_VEC cppVar_80521 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80522 = (cppVar_80521 << 3) | 2;
	cppVar_80522 = (cppVar_80522 & cppMask_un_5_);
	BIT_VEC cppVar_80523 = (0 << 5) | cppVar_80522;
	cppVar_80523 = (cppVar_80523 & cppMask_un_8_);
	bool cppVar_80525 = (cppVar_80523 == 136);
	if (cppVar_80525) {
	cppVar_80520 = TCON;
	} else {
	BIT_VEC cppVar_80526;
	BIT_VEC cppVar_80527 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80528 = (cppVar_80527 << 3) | 2;
	cppVar_80528 = (cppVar_80528 & cppMask_un_5_);
	BIT_VEC cppVar_80529 = (0 << 5) | cppVar_80528;
	cppVar_80529 = (cppVar_80529 & cppMask_un_8_);
	bool cppVar_80531 = (cppVar_80529 == 137);
	if (cppVar_80531) {
	cppVar_80526 = TMOD;
	} else {
	BIT_VEC cppVar_80532;
	BIT_VEC cppVar_80533 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80534 = (cppVar_80533 << 3) | 2;
	cppVar_80534 = (cppVar_80534 & cppMask_un_5_);
	BIT_VEC cppVar_80535 = (0 << 5) | cppVar_80534;
	cppVar_80535 = (cppVar_80535 & cppMask_un_8_);
	bool cppVar_80537 = (cppVar_80535 == 138);
	if (cppVar_80537) {
	cppVar_80532 = TL0;
	} else {
	BIT_VEC cppVar_80538;
	BIT_VEC cppVar_80539 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80540 = (cppVar_80539 << 3) | 2;
	cppVar_80540 = (cppVar_80540 & cppMask_un_5_);
	BIT_VEC cppVar_80541 = (0 << 5) | cppVar_80540;
	cppVar_80541 = (cppVar_80541 & cppMask_un_8_);
	bool cppVar_80543 = (cppVar_80541 == 140);
	if (cppVar_80543) {
	cppVar_80538 = TH0;
	} else {
	BIT_VEC cppVar_80544;
	BIT_VEC cppVar_80545 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80546 = (cppVar_80545 << 3) | 2;
	cppVar_80546 = (cppVar_80546 & cppMask_un_5_);
	BIT_VEC cppVar_80547 = (0 << 5) | cppVar_80546;
	cppVar_80547 = (cppVar_80547 & cppMask_un_8_);
	bool cppVar_80549 = (cppVar_80547 == 139);
	if (cppVar_80549) {
	cppVar_80544 = TL1;
	} else {
	BIT_VEC cppVar_80550;
	BIT_VEC cppVar_80551 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80552 = (cppVar_80551 << 3) | 2;
	cppVar_80552 = (cppVar_80552 & cppMask_un_5_);
	BIT_VEC cppVar_80553 = (0 << 5) | cppVar_80552;
	cppVar_80553 = (cppVar_80553 & cppMask_un_8_);
	bool cppVar_80555 = (cppVar_80553 == 141);
	if (cppVar_80555) {
	cppVar_80550 = TH1;
	} else {
	BIT_VEC cppVar_80556;
	BIT_VEC cppVar_80557 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80558 = (cppVar_80557 << 3) | 2;
	cppVar_80558 = (cppVar_80558 & cppMask_un_5_);
	BIT_VEC cppVar_80559 = (0 << 5) | cppVar_80558;
	cppVar_80559 = (cppVar_80559 & cppMask_un_8_);
	bool cppVar_80561 = (cppVar_80559 == 144);
	if (cppVar_80561) {
	cppVar_80556 = P1;
	} else {
	BIT_VEC cppVar_80562;
	BIT_VEC cppVar_80563 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80564 = (cppVar_80563 << 3) | 2;
	cppVar_80564 = (cppVar_80564 & cppMask_un_5_);
	BIT_VEC cppVar_80565 = (0 << 5) | cppVar_80564;
	cppVar_80565 = (cppVar_80565 & cppMask_un_8_);
	bool cppVar_80567 = (cppVar_80565 == 152);
	if (cppVar_80567) {
	cppVar_80562 = SCON;
	} else {
	BIT_VEC cppVar_80568;
	BIT_VEC cppVar_80569 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80570 = (cppVar_80569 << 3) | 2;
	cppVar_80570 = (cppVar_80570 & cppMask_un_5_);
	BIT_VEC cppVar_80571 = (0 << 5) | cppVar_80570;
	cppVar_80571 = (cppVar_80571 & cppMask_un_8_);
	bool cppVar_80573 = (cppVar_80571 == 153);
	if (cppVar_80573) {
	cppVar_80568 = SBUF;
	} else {
	BIT_VEC cppVar_80574;
	BIT_VEC cppVar_80575 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80576 = (cppVar_80575 << 3) | 2;
	cppVar_80576 = (cppVar_80576 & cppMask_un_5_);
	BIT_VEC cppVar_80577 = (0 << 5) | cppVar_80576;
	cppVar_80577 = (cppVar_80577 & cppMask_un_8_);
	bool cppVar_80579 = (cppVar_80577 == 160);
	if (cppVar_80579) {
	cppVar_80574 = P2;
	} else {
	BIT_VEC cppVar_80580;
	BIT_VEC cppVar_80581 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80582 = (cppVar_80581 << 3) | 2;
	cppVar_80582 = (cppVar_80582 & cppMask_un_5_);
	BIT_VEC cppVar_80583 = (0 << 5) | cppVar_80582;
	cppVar_80583 = (cppVar_80583 & cppMask_un_8_);
	bool cppVar_80585 = (cppVar_80583 == 168);
	if (cppVar_80585) {
	cppVar_80580 = IE;
	} else {
	BIT_VEC cppVar_80586;
	BIT_VEC cppVar_80587 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80588 = (cppVar_80587 << 3) | 2;
	cppVar_80588 = (cppVar_80588 & cppMask_un_5_);
	BIT_VEC cppVar_80589 = (0 << 5) | cppVar_80588;
	cppVar_80589 = (cppVar_80589 & cppMask_un_8_);
	bool cppVar_80591 = (cppVar_80589 == 176);
	if (cppVar_80591) {
	cppVar_80586 = P3;
	} else {
	BIT_VEC cppVar_80592;
	BIT_VEC cppVar_80593 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80594 = (cppVar_80593 << 3) | 2;
	cppVar_80594 = (cppVar_80594 & cppMask_un_5_);
	BIT_VEC cppVar_80595 = (0 << 5) | cppVar_80594;
	cppVar_80595 = (cppVar_80595 & cppMask_un_8_);
	bool cppVar_80597 = (cppVar_80595 == 184);
	if (cppVar_80597) {
	cppVar_80592 = IP;
	} else {
	BIT_VEC cppVar_80598;
	BIT_VEC cppVar_80599 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80600 = (cppVar_80599 << 3) | 2;
	cppVar_80600 = (cppVar_80600 & cppMask_un_5_);
	BIT_VEC cppVar_80601 = (0 << 5) | cppVar_80600;
	cppVar_80601 = (cppVar_80601 & cppMask_un_8_);
	bool cppVar_80603 = (cppVar_80601 == 208);
	if (cppVar_80603) {
	cppVar_80598 = PSW;
	} else {
	BIT_VEC cppVar_80604;
	BIT_VEC cppVar_80605 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80606 = (cppVar_80605 << 3) | 2;
	cppVar_80606 = (cppVar_80606 & cppMask_un_5_);
	BIT_VEC cppVar_80607 = (0 << 5) | cppVar_80606;
	cppVar_80607 = (cppVar_80607 & cppMask_un_8_);
	bool cppVar_80609 = (cppVar_80607 == 224);
	if (cppVar_80609) {
	cppVar_80604 = ACC;
	} else {
	BIT_VEC cppVar_80610;
	BIT_VEC cppVar_80611 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80612 = (cppVar_80611 << 3) | 2;
	cppVar_80612 = (cppVar_80612 & cppMask_un_5_);
	BIT_VEC cppVar_80613 = (0 << 5) | cppVar_80612;
	cppVar_80613 = (cppVar_80613 & cppMask_un_8_);
	bool cppVar_80615 = (cppVar_80613 == 240);
	if (cppVar_80615) {
	cppVar_80610 = B;
	} else {
	cppVar_80610 = 0;
	}
	cppVar_80604 = cppVar_80610;
	}
	cppVar_80598 = cppVar_80604;
	}
	cppVar_80592 = cppVar_80598;
	}
	cppVar_80586 = cppVar_80592;
	}
	cppVar_80580 = cppVar_80586;
	}
	cppVar_80574 = cppVar_80580;
	}
	cppVar_80568 = cppVar_80574;
	}
	cppVar_80562 = cppVar_80568;
	}
	cppVar_80556 = cppVar_80562;
	}
	cppVar_80550 = cppVar_80556;
	}
	cppVar_80544 = cppVar_80550;
	}
	cppVar_80538 = cppVar_80544;
	}
	cppVar_80532 = cppVar_80538;
	}
	cppVar_80526 = cppVar_80532;
	}
	cppVar_80520 = cppVar_80526;
	}
	cppVar_80514 = cppVar_80520;
	}
	cppVar_80508 = cppVar_80514;
	}
	cppVar_80502 = cppVar_80508;
	}
	cppVar_80496 = cppVar_80502;
	}
	cppVar_80490 = cppVar_80496;
	}
	cppVar_80477 = cppVar_80490;
	}
	cppVar_80471 = cppVar_80477;
	} else {
	cppVar_80471 = TL1;
	}
	cppVar_80467 = cppVar_80471;
	} else {
	BIT_VEC cppVar_80617;
	BIT_VEC cppVar_80618 = ROM.rd(PC);
	bool cppVar_80620 = (cppVar_80618 == 137);
	if (cppVar_80620) {
	BIT_VEC cppVar_80621;
	BIT_VEC cppVar_80623 = PC + 1;
	cppVar_80623 = (cppVar_80623 & cppMask_un_16_);
	BIT_VEC cppVar_80624 = ROM.rd(cppVar_80623);
	bool cppVar_80626 = (cppVar_80624 == 139);
	if (cppVar_80626) {
	BIT_VEC cppVar_80627;
	BIT_VEC cppVar_80629 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80631 = (cppVar_80629 << 3) | 1;
	cppVar_80631 = (cppVar_80631 & cppMask_un_5_);
	BIT_VEC cppVar_80632 = (0 << 5) | cppVar_80631;
	cppVar_80632 = (cppVar_80632 & cppMask_un_8_);
	BIT_VEC cppVar_80633 = (cppVar_80632 >> 7) & cppMask_un_1_;
	bool cppVar_80635 = (cppVar_80633 == 0);
	if (cppVar_80635) {
	BIT_VEC cppVar_80636 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80637 = (cppVar_80636 << 3) | 1;
	cppVar_80637 = (cppVar_80637 & cppMask_un_5_);
	BIT_VEC cppVar_80638 = (0 << 5) | cppVar_80637;
	cppVar_80638 = (cppVar_80638 & cppMask_un_8_);
	BIT_VEC cppVar_80639 = IRAM.rd(cppVar_80638);
	cppVar_80627 = cppVar_80639;
	} else {
	BIT_VEC cppVar_80640;
	BIT_VEC cppVar_80641 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80642 = (cppVar_80641 << 3) | 1;
	cppVar_80642 = (cppVar_80642 & cppMask_un_5_);
	BIT_VEC cppVar_80643 = (0 << 5) | cppVar_80642;
	cppVar_80643 = (cppVar_80643 & cppMask_un_8_);
	bool cppVar_80645 = (cppVar_80643 == 128);
	if (cppVar_80645) {
	cppVar_80640 = P0;
	} else {
	BIT_VEC cppVar_80646;
	BIT_VEC cppVar_80647 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80648 = (cppVar_80647 << 3) | 1;
	cppVar_80648 = (cppVar_80648 & cppMask_un_5_);
	BIT_VEC cppVar_80649 = (0 << 5) | cppVar_80648;
	cppVar_80649 = (cppVar_80649 & cppMask_un_8_);
	bool cppVar_80651 = (cppVar_80649 == 129);
	if (cppVar_80651) {
	cppVar_80646 = SP;
	} else {
	BIT_VEC cppVar_80652;
	BIT_VEC cppVar_80653 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80654 = (cppVar_80653 << 3) | 1;
	cppVar_80654 = (cppVar_80654 & cppMask_un_5_);
	BIT_VEC cppVar_80655 = (0 << 5) | cppVar_80654;
	cppVar_80655 = (cppVar_80655 & cppMask_un_8_);
	bool cppVar_80657 = (cppVar_80655 == 130);
	if (cppVar_80657) {
	cppVar_80652 = DPL;
	} else {
	BIT_VEC cppVar_80658;
	BIT_VEC cppVar_80659 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80660 = (cppVar_80659 << 3) | 1;
	cppVar_80660 = (cppVar_80660 & cppMask_un_5_);
	BIT_VEC cppVar_80661 = (0 << 5) | cppVar_80660;
	cppVar_80661 = (cppVar_80661 & cppMask_un_8_);
	bool cppVar_80663 = (cppVar_80661 == 131);
	if (cppVar_80663) {
	cppVar_80658 = DPH;
	} else {
	BIT_VEC cppVar_80664;
	BIT_VEC cppVar_80665 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80666 = (cppVar_80665 << 3) | 1;
	cppVar_80666 = (cppVar_80666 & cppMask_un_5_);
	BIT_VEC cppVar_80667 = (0 << 5) | cppVar_80666;
	cppVar_80667 = (cppVar_80667 & cppMask_un_8_);
	bool cppVar_80669 = (cppVar_80667 == 135);
	if (cppVar_80669) {
	cppVar_80664 = PCON;
	} else {
	BIT_VEC cppVar_80670;
	BIT_VEC cppVar_80671 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80672 = (cppVar_80671 << 3) | 1;
	cppVar_80672 = (cppVar_80672 & cppMask_un_5_);
	BIT_VEC cppVar_80673 = (0 << 5) | cppVar_80672;
	cppVar_80673 = (cppVar_80673 & cppMask_un_8_);
	bool cppVar_80675 = (cppVar_80673 == 136);
	if (cppVar_80675) {
	cppVar_80670 = TCON;
	} else {
	BIT_VEC cppVar_80676;
	BIT_VEC cppVar_80677 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80678 = (cppVar_80677 << 3) | 1;
	cppVar_80678 = (cppVar_80678 & cppMask_un_5_);
	BIT_VEC cppVar_80679 = (0 << 5) | cppVar_80678;
	cppVar_80679 = (cppVar_80679 & cppMask_un_8_);
	bool cppVar_80681 = (cppVar_80679 == 137);
	if (cppVar_80681) {
	cppVar_80676 = TMOD;
	} else {
	BIT_VEC cppVar_80682;
	BIT_VEC cppVar_80683 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80684 = (cppVar_80683 << 3) | 1;
	cppVar_80684 = (cppVar_80684 & cppMask_un_5_);
	BIT_VEC cppVar_80685 = (0 << 5) | cppVar_80684;
	cppVar_80685 = (cppVar_80685 & cppMask_un_8_);
	bool cppVar_80687 = (cppVar_80685 == 138);
	if (cppVar_80687) {
	cppVar_80682 = TL0;
	} else {
	BIT_VEC cppVar_80688;
	BIT_VEC cppVar_80689 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80690 = (cppVar_80689 << 3) | 1;
	cppVar_80690 = (cppVar_80690 & cppMask_un_5_);
	BIT_VEC cppVar_80691 = (0 << 5) | cppVar_80690;
	cppVar_80691 = (cppVar_80691 & cppMask_un_8_);
	bool cppVar_80693 = (cppVar_80691 == 140);
	if (cppVar_80693) {
	cppVar_80688 = TH0;
	} else {
	BIT_VEC cppVar_80694;
	BIT_VEC cppVar_80695 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80696 = (cppVar_80695 << 3) | 1;
	cppVar_80696 = (cppVar_80696 & cppMask_un_5_);
	BIT_VEC cppVar_80697 = (0 << 5) | cppVar_80696;
	cppVar_80697 = (cppVar_80697 & cppMask_un_8_);
	bool cppVar_80699 = (cppVar_80697 == 139);
	if (cppVar_80699) {
	cppVar_80694 = TL1;
	} else {
	BIT_VEC cppVar_80700;
	BIT_VEC cppVar_80701 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80702 = (cppVar_80701 << 3) | 1;
	cppVar_80702 = (cppVar_80702 & cppMask_un_5_);
	BIT_VEC cppVar_80703 = (0 << 5) | cppVar_80702;
	cppVar_80703 = (cppVar_80703 & cppMask_un_8_);
	bool cppVar_80705 = (cppVar_80703 == 141);
	if (cppVar_80705) {
	cppVar_80700 = TH1;
	} else {
	BIT_VEC cppVar_80706;
	BIT_VEC cppVar_80707 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80708 = (cppVar_80707 << 3) | 1;
	cppVar_80708 = (cppVar_80708 & cppMask_un_5_);
	BIT_VEC cppVar_80709 = (0 << 5) | cppVar_80708;
	cppVar_80709 = (cppVar_80709 & cppMask_un_8_);
	bool cppVar_80711 = (cppVar_80709 == 144);
	if (cppVar_80711) {
	cppVar_80706 = P1;
	} else {
	BIT_VEC cppVar_80712;
	BIT_VEC cppVar_80713 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80714 = (cppVar_80713 << 3) | 1;
	cppVar_80714 = (cppVar_80714 & cppMask_un_5_);
	BIT_VEC cppVar_80715 = (0 << 5) | cppVar_80714;
	cppVar_80715 = (cppVar_80715 & cppMask_un_8_);
	bool cppVar_80717 = (cppVar_80715 == 152);
	if (cppVar_80717) {
	cppVar_80712 = SCON;
	} else {
	BIT_VEC cppVar_80718;
	BIT_VEC cppVar_80719 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80720 = (cppVar_80719 << 3) | 1;
	cppVar_80720 = (cppVar_80720 & cppMask_un_5_);
	BIT_VEC cppVar_80721 = (0 << 5) | cppVar_80720;
	cppVar_80721 = (cppVar_80721 & cppMask_un_8_);
	bool cppVar_80723 = (cppVar_80721 == 153);
	if (cppVar_80723) {
	cppVar_80718 = SBUF;
	} else {
	BIT_VEC cppVar_80724;
	BIT_VEC cppVar_80725 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80726 = (cppVar_80725 << 3) | 1;
	cppVar_80726 = (cppVar_80726 & cppMask_un_5_);
	BIT_VEC cppVar_80727 = (0 << 5) | cppVar_80726;
	cppVar_80727 = (cppVar_80727 & cppMask_un_8_);
	bool cppVar_80729 = (cppVar_80727 == 160);
	if (cppVar_80729) {
	cppVar_80724 = P2;
	} else {
	BIT_VEC cppVar_80730;
	BIT_VEC cppVar_80731 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80732 = (cppVar_80731 << 3) | 1;
	cppVar_80732 = (cppVar_80732 & cppMask_un_5_);
	BIT_VEC cppVar_80733 = (0 << 5) | cppVar_80732;
	cppVar_80733 = (cppVar_80733 & cppMask_un_8_);
	bool cppVar_80735 = (cppVar_80733 == 168);
	if (cppVar_80735) {
	cppVar_80730 = IE;
	} else {
	BIT_VEC cppVar_80736;
	BIT_VEC cppVar_80737 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80738 = (cppVar_80737 << 3) | 1;
	cppVar_80738 = (cppVar_80738 & cppMask_un_5_);
	BIT_VEC cppVar_80739 = (0 << 5) | cppVar_80738;
	cppVar_80739 = (cppVar_80739 & cppMask_un_8_);
	bool cppVar_80741 = (cppVar_80739 == 176);
	if (cppVar_80741) {
	cppVar_80736 = P3;
	} else {
	BIT_VEC cppVar_80742;
	BIT_VEC cppVar_80743 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80744 = (cppVar_80743 << 3) | 1;
	cppVar_80744 = (cppVar_80744 & cppMask_un_5_);
	BIT_VEC cppVar_80745 = (0 << 5) | cppVar_80744;
	cppVar_80745 = (cppVar_80745 & cppMask_un_8_);
	bool cppVar_80747 = (cppVar_80745 == 184);
	if (cppVar_80747) {
	cppVar_80742 = IP;
	} else {
	BIT_VEC cppVar_80748;
	BIT_VEC cppVar_80749 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80750 = (cppVar_80749 << 3) | 1;
	cppVar_80750 = (cppVar_80750 & cppMask_un_5_);
	BIT_VEC cppVar_80751 = (0 << 5) | cppVar_80750;
	cppVar_80751 = (cppVar_80751 & cppMask_un_8_);
	bool cppVar_80753 = (cppVar_80751 == 208);
	if (cppVar_80753) {
	cppVar_80748 = PSW;
	} else {
	BIT_VEC cppVar_80754;
	BIT_VEC cppVar_80755 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80756 = (cppVar_80755 << 3) | 1;
	cppVar_80756 = (cppVar_80756 & cppMask_un_5_);
	BIT_VEC cppVar_80757 = (0 << 5) | cppVar_80756;
	cppVar_80757 = (cppVar_80757 & cppMask_un_8_);
	bool cppVar_80759 = (cppVar_80757 == 224);
	if (cppVar_80759) {
	cppVar_80754 = ACC;
	} else {
	BIT_VEC cppVar_80760;
	BIT_VEC cppVar_80761 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80762 = (cppVar_80761 << 3) | 1;
	cppVar_80762 = (cppVar_80762 & cppMask_un_5_);
	BIT_VEC cppVar_80763 = (0 << 5) | cppVar_80762;
	cppVar_80763 = (cppVar_80763 & cppMask_un_8_);
	bool cppVar_80765 = (cppVar_80763 == 240);
	if (cppVar_80765) {
	cppVar_80760 = B;
	} else {
	cppVar_80760 = 0;
	}
	cppVar_80754 = cppVar_80760;
	}
	cppVar_80748 = cppVar_80754;
	}
	cppVar_80742 = cppVar_80748;
	}
	cppVar_80736 = cppVar_80742;
	}
	cppVar_80730 = cppVar_80736;
	}
	cppVar_80724 = cppVar_80730;
	}
	cppVar_80718 = cppVar_80724;
	}
	cppVar_80712 = cppVar_80718;
	}
	cppVar_80706 = cppVar_80712;
	}
	cppVar_80700 = cppVar_80706;
	}
	cppVar_80694 = cppVar_80700;
	}
	cppVar_80688 = cppVar_80694;
	}
	cppVar_80682 = cppVar_80688;
	}
	cppVar_80676 = cppVar_80682;
	}
	cppVar_80670 = cppVar_80676;
	}
	cppVar_80664 = cppVar_80670;
	}
	cppVar_80658 = cppVar_80664;
	}
	cppVar_80652 = cppVar_80658;
	}
	cppVar_80646 = cppVar_80652;
	}
	cppVar_80640 = cppVar_80646;
	}
	cppVar_80627 = cppVar_80640;
	}
	cppVar_80621 = cppVar_80627;
	} else {
	cppVar_80621 = TL1;
	}
	cppVar_80617 = cppVar_80621;
	} else {
	BIT_VEC cppVar_80767;
	BIT_VEC cppVar_80768 = ROM.rd(PC);
	bool cppVar_80770 = (cppVar_80768 == 136);
	if (cppVar_80770) {
	BIT_VEC cppVar_80771;
	BIT_VEC cppVar_80773 = PC + 1;
	cppVar_80773 = (cppVar_80773 & cppMask_un_16_);
	BIT_VEC cppVar_80774 = ROM.rd(cppVar_80773);
	bool cppVar_80776 = (cppVar_80774 == 139);
	if (cppVar_80776) {
	BIT_VEC cppVar_80777;
	BIT_VEC cppVar_80779 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80781 = (cppVar_80779 << 3) | 0;
	cppVar_80781 = (cppVar_80781 & cppMask_un_5_);
	BIT_VEC cppVar_80782 = (0 << 5) | cppVar_80781;
	cppVar_80782 = (cppVar_80782 & cppMask_un_8_);
	BIT_VEC cppVar_80783 = (cppVar_80782 >> 7) & cppMask_un_1_;
	bool cppVar_80785 = (cppVar_80783 == 0);
	if (cppVar_80785) {
	BIT_VEC cppVar_80786 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80787 = (cppVar_80786 << 3) | 0;
	cppVar_80787 = (cppVar_80787 & cppMask_un_5_);
	BIT_VEC cppVar_80788 = (0 << 5) | cppVar_80787;
	cppVar_80788 = (cppVar_80788 & cppMask_un_8_);
	BIT_VEC cppVar_80789 = IRAM.rd(cppVar_80788);
	cppVar_80777 = cppVar_80789;
	} else {
	BIT_VEC cppVar_80790;
	BIT_VEC cppVar_80791 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80792 = (cppVar_80791 << 3) | 0;
	cppVar_80792 = (cppVar_80792 & cppMask_un_5_);
	BIT_VEC cppVar_80793 = (0 << 5) | cppVar_80792;
	cppVar_80793 = (cppVar_80793 & cppMask_un_8_);
	bool cppVar_80795 = (cppVar_80793 == 128);
	if (cppVar_80795) {
	cppVar_80790 = P0;
	} else {
	BIT_VEC cppVar_80796;
	BIT_VEC cppVar_80797 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80798 = (cppVar_80797 << 3) | 0;
	cppVar_80798 = (cppVar_80798 & cppMask_un_5_);
	BIT_VEC cppVar_80799 = (0 << 5) | cppVar_80798;
	cppVar_80799 = (cppVar_80799 & cppMask_un_8_);
	bool cppVar_80801 = (cppVar_80799 == 129);
	if (cppVar_80801) {
	cppVar_80796 = SP;
	} else {
	BIT_VEC cppVar_80802;
	BIT_VEC cppVar_80803 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80804 = (cppVar_80803 << 3) | 0;
	cppVar_80804 = (cppVar_80804 & cppMask_un_5_);
	BIT_VEC cppVar_80805 = (0 << 5) | cppVar_80804;
	cppVar_80805 = (cppVar_80805 & cppMask_un_8_);
	bool cppVar_80807 = (cppVar_80805 == 130);
	if (cppVar_80807) {
	cppVar_80802 = DPL;
	} else {
	BIT_VEC cppVar_80808;
	BIT_VEC cppVar_80809 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80810 = (cppVar_80809 << 3) | 0;
	cppVar_80810 = (cppVar_80810 & cppMask_un_5_);
	BIT_VEC cppVar_80811 = (0 << 5) | cppVar_80810;
	cppVar_80811 = (cppVar_80811 & cppMask_un_8_);
	bool cppVar_80813 = (cppVar_80811 == 131);
	if (cppVar_80813) {
	cppVar_80808 = DPH;
	} else {
	BIT_VEC cppVar_80814;
	BIT_VEC cppVar_80815 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80816 = (cppVar_80815 << 3) | 0;
	cppVar_80816 = (cppVar_80816 & cppMask_un_5_);
	BIT_VEC cppVar_80817 = (0 << 5) | cppVar_80816;
	cppVar_80817 = (cppVar_80817 & cppMask_un_8_);
	bool cppVar_80819 = (cppVar_80817 == 135);
	if (cppVar_80819) {
	cppVar_80814 = PCON;
	} else {
	BIT_VEC cppVar_80820;
	BIT_VEC cppVar_80821 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80822 = (cppVar_80821 << 3) | 0;
	cppVar_80822 = (cppVar_80822 & cppMask_un_5_);
	BIT_VEC cppVar_80823 = (0 << 5) | cppVar_80822;
	cppVar_80823 = (cppVar_80823 & cppMask_un_8_);
	bool cppVar_80825 = (cppVar_80823 == 136);
	if (cppVar_80825) {
	cppVar_80820 = TCON;
	} else {
	BIT_VEC cppVar_80826;
	BIT_VEC cppVar_80827 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80828 = (cppVar_80827 << 3) | 0;
	cppVar_80828 = (cppVar_80828 & cppMask_un_5_);
	BIT_VEC cppVar_80829 = (0 << 5) | cppVar_80828;
	cppVar_80829 = (cppVar_80829 & cppMask_un_8_);
	bool cppVar_80831 = (cppVar_80829 == 137);
	if (cppVar_80831) {
	cppVar_80826 = TMOD;
	} else {
	BIT_VEC cppVar_80832;
	BIT_VEC cppVar_80833 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80834 = (cppVar_80833 << 3) | 0;
	cppVar_80834 = (cppVar_80834 & cppMask_un_5_);
	BIT_VEC cppVar_80835 = (0 << 5) | cppVar_80834;
	cppVar_80835 = (cppVar_80835 & cppMask_un_8_);
	bool cppVar_80837 = (cppVar_80835 == 138);
	if (cppVar_80837) {
	cppVar_80832 = TL0;
	} else {
	BIT_VEC cppVar_80838;
	BIT_VEC cppVar_80839 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80840 = (cppVar_80839 << 3) | 0;
	cppVar_80840 = (cppVar_80840 & cppMask_un_5_);
	BIT_VEC cppVar_80841 = (0 << 5) | cppVar_80840;
	cppVar_80841 = (cppVar_80841 & cppMask_un_8_);
	bool cppVar_80843 = (cppVar_80841 == 140);
	if (cppVar_80843) {
	cppVar_80838 = TH0;
	} else {
	BIT_VEC cppVar_80844;
	BIT_VEC cppVar_80845 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80846 = (cppVar_80845 << 3) | 0;
	cppVar_80846 = (cppVar_80846 & cppMask_un_5_);
	BIT_VEC cppVar_80847 = (0 << 5) | cppVar_80846;
	cppVar_80847 = (cppVar_80847 & cppMask_un_8_);
	bool cppVar_80849 = (cppVar_80847 == 139);
	if (cppVar_80849) {
	cppVar_80844 = TL1;
	} else {
	BIT_VEC cppVar_80850;
	BIT_VEC cppVar_80851 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80852 = (cppVar_80851 << 3) | 0;
	cppVar_80852 = (cppVar_80852 & cppMask_un_5_);
	BIT_VEC cppVar_80853 = (0 << 5) | cppVar_80852;
	cppVar_80853 = (cppVar_80853 & cppMask_un_8_);
	bool cppVar_80855 = (cppVar_80853 == 141);
	if (cppVar_80855) {
	cppVar_80850 = TH1;
	} else {
	BIT_VEC cppVar_80856;
	BIT_VEC cppVar_80857 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80858 = (cppVar_80857 << 3) | 0;
	cppVar_80858 = (cppVar_80858 & cppMask_un_5_);
	BIT_VEC cppVar_80859 = (0 << 5) | cppVar_80858;
	cppVar_80859 = (cppVar_80859 & cppMask_un_8_);
	bool cppVar_80861 = (cppVar_80859 == 144);
	if (cppVar_80861) {
	cppVar_80856 = P1;
	} else {
	BIT_VEC cppVar_80862;
	BIT_VEC cppVar_80863 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80864 = (cppVar_80863 << 3) | 0;
	cppVar_80864 = (cppVar_80864 & cppMask_un_5_);
	BIT_VEC cppVar_80865 = (0 << 5) | cppVar_80864;
	cppVar_80865 = (cppVar_80865 & cppMask_un_8_);
	bool cppVar_80867 = (cppVar_80865 == 152);
	if (cppVar_80867) {
	cppVar_80862 = SCON;
	} else {
	BIT_VEC cppVar_80868;
	BIT_VEC cppVar_80869 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80870 = (cppVar_80869 << 3) | 0;
	cppVar_80870 = (cppVar_80870 & cppMask_un_5_);
	BIT_VEC cppVar_80871 = (0 << 5) | cppVar_80870;
	cppVar_80871 = (cppVar_80871 & cppMask_un_8_);
	bool cppVar_80873 = (cppVar_80871 == 153);
	if (cppVar_80873) {
	cppVar_80868 = SBUF;
	} else {
	BIT_VEC cppVar_80874;
	BIT_VEC cppVar_80875 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80876 = (cppVar_80875 << 3) | 0;
	cppVar_80876 = (cppVar_80876 & cppMask_un_5_);
	BIT_VEC cppVar_80877 = (0 << 5) | cppVar_80876;
	cppVar_80877 = (cppVar_80877 & cppMask_un_8_);
	bool cppVar_80879 = (cppVar_80877 == 160);
	if (cppVar_80879) {
	cppVar_80874 = P2;
	} else {
	BIT_VEC cppVar_80880;
	BIT_VEC cppVar_80881 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80882 = (cppVar_80881 << 3) | 0;
	cppVar_80882 = (cppVar_80882 & cppMask_un_5_);
	BIT_VEC cppVar_80883 = (0 << 5) | cppVar_80882;
	cppVar_80883 = (cppVar_80883 & cppMask_un_8_);
	bool cppVar_80885 = (cppVar_80883 == 168);
	if (cppVar_80885) {
	cppVar_80880 = IE;
	} else {
	BIT_VEC cppVar_80886;
	BIT_VEC cppVar_80887 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80888 = (cppVar_80887 << 3) | 0;
	cppVar_80888 = (cppVar_80888 & cppMask_un_5_);
	BIT_VEC cppVar_80889 = (0 << 5) | cppVar_80888;
	cppVar_80889 = (cppVar_80889 & cppMask_un_8_);
	bool cppVar_80891 = (cppVar_80889 == 176);
	if (cppVar_80891) {
	cppVar_80886 = P3;
	} else {
	BIT_VEC cppVar_80892;
	BIT_VEC cppVar_80893 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80894 = (cppVar_80893 << 3) | 0;
	cppVar_80894 = (cppVar_80894 & cppMask_un_5_);
	BIT_VEC cppVar_80895 = (0 << 5) | cppVar_80894;
	cppVar_80895 = (cppVar_80895 & cppMask_un_8_);
	bool cppVar_80897 = (cppVar_80895 == 184);
	if (cppVar_80897) {
	cppVar_80892 = IP;
	} else {
	BIT_VEC cppVar_80898;
	BIT_VEC cppVar_80899 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80900 = (cppVar_80899 << 3) | 0;
	cppVar_80900 = (cppVar_80900 & cppMask_un_5_);
	BIT_VEC cppVar_80901 = (0 << 5) | cppVar_80900;
	cppVar_80901 = (cppVar_80901 & cppMask_un_8_);
	bool cppVar_80903 = (cppVar_80901 == 208);
	if (cppVar_80903) {
	cppVar_80898 = PSW;
	} else {
	BIT_VEC cppVar_80904;
	BIT_VEC cppVar_80905 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80906 = (cppVar_80905 << 3) | 0;
	cppVar_80906 = (cppVar_80906 & cppMask_un_5_);
	BIT_VEC cppVar_80907 = (0 << 5) | cppVar_80906;
	cppVar_80907 = (cppVar_80907 & cppMask_un_8_);
	bool cppVar_80909 = (cppVar_80907 == 224);
	if (cppVar_80909) {
	cppVar_80904 = ACC;
	} else {
	BIT_VEC cppVar_80910;
	BIT_VEC cppVar_80911 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80912 = (cppVar_80911 << 3) | 0;
	cppVar_80912 = (cppVar_80912 & cppMask_un_5_);
	BIT_VEC cppVar_80913 = (0 << 5) | cppVar_80912;
	cppVar_80913 = (cppVar_80913 & cppMask_un_8_);
	bool cppVar_80915 = (cppVar_80913 == 240);
	if (cppVar_80915) {
	cppVar_80910 = B;
	} else {
	cppVar_80910 = 0;
	}
	cppVar_80904 = cppVar_80910;
	}
	cppVar_80898 = cppVar_80904;
	}
	cppVar_80892 = cppVar_80898;
	}
	cppVar_80886 = cppVar_80892;
	}
	cppVar_80880 = cppVar_80886;
	}
	cppVar_80874 = cppVar_80880;
	}
	cppVar_80868 = cppVar_80874;
	}
	cppVar_80862 = cppVar_80868;
	}
	cppVar_80856 = cppVar_80862;
	}
	cppVar_80850 = cppVar_80856;
	}
	cppVar_80844 = cppVar_80850;
	}
	cppVar_80838 = cppVar_80844;
	}
	cppVar_80832 = cppVar_80838;
	}
	cppVar_80826 = cppVar_80832;
	}
	cppVar_80820 = cppVar_80826;
	}
	cppVar_80814 = cppVar_80820;
	}
	cppVar_80808 = cppVar_80814;
	}
	cppVar_80802 = cppVar_80808;
	}
	cppVar_80796 = cppVar_80802;
	}
	cppVar_80790 = cppVar_80796;
	}
	cppVar_80777 = cppVar_80790;
	}
	cppVar_80771 = cppVar_80777;
	} else {
	cppVar_80771 = TL1;
	}
	cppVar_80767 = cppVar_80771;
	} else {
	BIT_VEC cppVar_80917;
	BIT_VEC cppVar_80918 = ROM.rd(PC);
	bool cppVar_80920 = (cppVar_80918 == 135);
	if (cppVar_80920) {
	BIT_VEC cppVar_80921;
	BIT_VEC cppVar_80923 = PC + 1;
	cppVar_80923 = (cppVar_80923 & cppMask_un_16_);
	BIT_VEC cppVar_80924 = ROM.rd(cppVar_80923);
	bool cppVar_80926 = (cppVar_80924 == 139);
	if (cppVar_80926) {
	BIT_VEC cppVar_80928 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80930 = (cppVar_80928 << 3) | 1;
	cppVar_80930 = (cppVar_80930 & cppMask_un_5_);
	BIT_VEC cppVar_80931 = (0 << 5) | cppVar_80930;
	cppVar_80931 = (cppVar_80931 & cppMask_un_8_);
	BIT_VEC cppVar_80932 = IRAM.rd(cppVar_80931);
	BIT_VEC cppVar_80933 = IRAM.rd(cppVar_80932);
	cppVar_80921 = cppVar_80933;
	} else {
	cppVar_80921 = TL1;
	}
	cppVar_80917 = cppVar_80921;
	} else {
	BIT_VEC cppVar_80934;
	BIT_VEC cppVar_80935 = ROM.rd(PC);
	bool cppVar_80937 = (cppVar_80935 == 134);
	if (cppVar_80937) {
	BIT_VEC cppVar_80938;
	BIT_VEC cppVar_80940 = PC + 1;
	cppVar_80940 = (cppVar_80940 & cppMask_un_16_);
	BIT_VEC cppVar_80941 = ROM.rd(cppVar_80940);
	bool cppVar_80943 = (cppVar_80941 == 139);
	if (cppVar_80943) {
	BIT_VEC cppVar_80945 = (PSW >> 3) & cppMask_un_2_;
	BIT_VEC cppVar_80947 = (cppVar_80945 << 3) | 0;
	cppVar_80947 = (cppVar_80947 & cppMask_un_5_);
	BIT_VEC cppVar_80948 = (0 << 5) | cppVar_80947;
	cppVar_80948 = (cppVar_80948 & cppMask_un_8_);
	BIT_VEC cppVar_80949 = IRAM.rd(cppVar_80948);
	BIT_VEC cppVar_80950 = IRAM.rd(cppVar_80949);
	cppVar_80938 = cppVar_80950;
	} else {
	cppVar_80938 = TL1;
	}
	cppVar_80934 = cppVar_80938;
	} else {
	BIT_VEC cppVar_80951;
	BIT_VEC cppVar_80952 = ROM.rd(PC);
	bool cppVar_80954 = (cppVar_80952 == 133);
	if (cppVar_80954) {
	BIT_VEC cppVar_80955;
	BIT_VEC cppVar_80957 = PC + 2;
	cppVar_80957 = (cppVar_80957 & cppMask_un_16_);
	BIT_VEC cppVar_80958 = ROM.rd(cppVar_80957);
	bool cppVar_80960 = (cppVar_80958 == 139);
	if (cppVar_80960) {
	BIT_VEC cppVar_80961;
	BIT_VEC cppVar_80963 = PC + 1;
	cppVar_80963 = (cppVar_80963 & cppMask_un_16_);
	BIT_VEC cppVar_80964 = ROM.rd(cppVar_80963);
	BIT_VEC cppVar_80965 = (cppVar_80964 >> 7) & cppMask_un_1_;
	bool cppVar_80967 = (cppVar_80965 == 0);
	if (cppVar_80967) {
	BIT_VEC cppVar_80968 = PC + 1;
	cppVar_80968 = (cppVar_80968 & cppMask_un_16_);
	BIT_VEC cppVar_80969 = ROM.rd(cppVar_80968);
	BIT_VEC cppVar_80970 = IRAM.rd(cppVar_80969);
	cppVar_80961 = cppVar_80970;
	} else {
	BIT_VEC cppVar_80971;
	BIT_VEC cppVar_80972 = PC + 1;
	cppVar_80972 = (cppVar_80972 & cppMask_un_16_);
	BIT_VEC cppVar_80973 = ROM.rd(cppVar_80972);
	bool cppVar_80975 = (cppVar_80973 == 128);
	if (cppVar_80975) {
	cppVar_80971 = P0;
	} else {
	BIT_VEC cppVar_80976;
	BIT_VEC cppVar_80977 = PC + 1;
	cppVar_80977 = (cppVar_80977 & cppMask_un_16_);
	BIT_VEC cppVar_80978 = ROM.rd(cppVar_80977);
	bool cppVar_80980 = (cppVar_80978 == 129);
	if (cppVar_80980) {
	cppVar_80976 = SP;
	} else {
	BIT_VEC cppVar_80981;
	BIT_VEC cppVar_80982 = PC + 1;
	cppVar_80982 = (cppVar_80982 & cppMask_un_16_);
	BIT_VEC cppVar_80983 = ROM.rd(cppVar_80982);
	bool cppVar_80985 = (cppVar_80983 == 130);
	if (cppVar_80985) {
	cppVar_80981 = DPL;
	} else {
	BIT_VEC cppVar_80986;
	BIT_VEC cppVar_80987 = PC + 1;
	cppVar_80987 = (cppVar_80987 & cppMask_un_16_);
	BIT_VEC cppVar_80988 = ROM.rd(cppVar_80987);
	bool cppVar_80990 = (cppVar_80988 == 131);
	if (cppVar_80990) {
	cppVar_80986 = DPH;
	} else {
	BIT_VEC cppVar_80991;
	BIT_VEC cppVar_80992 = PC + 1;
	cppVar_80992 = (cppVar_80992 & cppMask_un_16_);
	BIT_VEC cppVar_80993 = ROM.rd(cppVar_80992);
	bool cppVar_80995 = (cppVar_80993 == 135);
	if (cppVar_80995) {
	cppVar_80991 = PCON;
	} else {
	BIT_VEC cppVar_80996;
	BIT_VEC cppVar_80997 = PC + 1;
	cppVar_80997 = (cppVar_80997 & cppMask_un_16_);
	BIT_VEC cppVar_80998 = ROM.rd(cppVar_80997);
	bool cppVar_81000 = (cppVar_80998 == 136);
	if (cppVar_81000) {
	cppVar_80996 = TCON;
	} else {
	BIT_VEC cppVar_81001;
	BIT_VEC cppVar_81002 = PC + 1;
	cppVar_81002 = (cppVar_81002 & cppMask_un_16_);
	BIT_VEC cppVar_81003 = ROM.rd(cppVar_81002);
	bool cppVar_81005 = (cppVar_81003 == 137);
	if (cppVar_81005) {
	cppVar_81001 = TMOD;
	} else {
	BIT_VEC cppVar_81006;
	BIT_VEC cppVar_81007 = PC + 1;
	cppVar_81007 = (cppVar_81007 & cppMask_un_16_);
	BIT_VEC cppVar_81008 = ROM.rd(cppVar_81007);
	bool cppVar_81010 = (cppVar_81008 == 138);
	if (cppVar_81010) {
	cppVar_81006 = TL0;
	} else {
	BIT_VEC cppVar_81011;
	BIT_VEC cppVar_81012 = PC + 1;
	cppVar_81012 = (cppVar_81012 & cppMask_un_16_);
	BIT_VEC cppVar_81013 = ROM.rd(cppVar_81012);
	bool cppVar_81015 = (cppVar_81013 == 140);
	if (cppVar_81015) {
	cppVar_81011 = TH0;
	} else {
	BIT_VEC cppVar_81016;
	BIT_VEC cppVar_81017 = PC + 1;
	cppVar_81017 = (cppVar_81017 & cppMask_un_16_);
	BIT_VEC cppVar_81018 = ROM.rd(cppVar_81017);
	bool cppVar_81020 = (cppVar_81018 == 139);
	if (cppVar_81020) {
	cppVar_81016 = TL1;
	} else {
	BIT_VEC cppVar_81021;
	BIT_VEC cppVar_81022 = PC + 1;
	cppVar_81022 = (cppVar_81022 & cppMask_un_16_);
	BIT_VEC cppVar_81023 = ROM.rd(cppVar_81022);
	bool cppVar_81025 = (cppVar_81023 == 141);
	if (cppVar_81025) {
	cppVar_81021 = TH1;
	} else {
	BIT_VEC cppVar_81026;
	BIT_VEC cppVar_81027 = PC + 1;
	cppVar_81027 = (cppVar_81027 & cppMask_un_16_);
	BIT_VEC cppVar_81028 = ROM.rd(cppVar_81027);
	bool cppVar_81030 = (cppVar_81028 == 144);
	if (cppVar_81030) {
	cppVar_81026 = P1;
	} else {
	BIT_VEC cppVar_81031;
	BIT_VEC cppVar_81032 = PC + 1;
	cppVar_81032 = (cppVar_81032 & cppMask_un_16_);
	BIT_VEC cppVar_81033 = ROM.rd(cppVar_81032);
	bool cppVar_81035 = (cppVar_81033 == 152);
	if (cppVar_81035) {
	cppVar_81031 = SCON;
	} else {
	BIT_VEC cppVar_81036;
	BIT_VEC cppVar_81037 = PC + 1;
	cppVar_81037 = (cppVar_81037 & cppMask_un_16_);
	BIT_VEC cppVar_81038 = ROM.rd(cppVar_81037);
	bool cppVar_81040 = (cppVar_81038 == 153);
	if (cppVar_81040) {
	cppVar_81036 = SBUF;
	} else {
	BIT_VEC cppVar_81041;
	BIT_VEC cppVar_81042 = PC + 1;
	cppVar_81042 = (cppVar_81042 & cppMask_un_16_);
	BIT_VEC cppVar_81043 = ROM.rd(cppVar_81042);
	bool cppVar_81045 = (cppVar_81043 == 160);
	if (cppVar_81045) {
	cppVar_81041 = P2;
	} else {
	BIT_VEC cppVar_81046;
	BIT_VEC cppVar_81047 = PC + 1;
	cppVar_81047 = (cppVar_81047 & cppMask_un_16_);
	BIT_VEC cppVar_81048 = ROM.rd(cppVar_81047);
	bool cppVar_81050 = (cppVar_81048 == 168);
	if (cppVar_81050) {
	cppVar_81046 = IE;
	} else {
	BIT_VEC cppVar_81051;
	BIT_VEC cppVar_81052 = PC + 1;
	cppVar_81052 = (cppVar_81052 & cppMask_un_16_);
	BIT_VEC cppVar_81053 = ROM.rd(cppVar_81052);
	bool cppVar_81055 = (cppVar_81053 == 176);
	if (cppVar_81055) {
	cppVar_81051 = P3;
	} else {
	BIT_VEC cppVar_81056;
	BIT_VEC cppVar_81057 = PC + 1;
	cppVar_81057 = (cppVar_81057 & cppMask_un_16_);
	BIT_VEC cppVar_81058 = ROM.rd(cppVar_81057);
	bool cppVar_81060 = (cppVar_81058 == 184);
	if (cppVar_81060) {
	cppVar_81056 = IP;
	} else {
	BIT_VEC cppVar_81061;
	BIT_VEC cppVar_81062 = PC + 1;
	cppVar_81062 = (cppVar_81062 & cppMask_un_16_);
	BIT_VEC cppVar_81063 = ROM.rd(cppVar_81062);
	bool cppVar_81065 = (cppVar_81063 == 208);
	if (cppVar_81065) {
	cppVar_81061 = PSW;
	} else {
	BIT_VEC cppVar_81066;
	BIT_VEC cppVar_81067 = PC + 1;
	cppVar_81067 = (cppVar_81067 & cppMask_un_16_);
	BIT_VEC cppVar_81068 = ROM.rd(cppVar_81067);
	bool cppVar_81070 = (cppVar_81068 == 224);
	if (cppVar_81070) {
	cppVar_81066 = ACC;
	} else {
	BIT_VEC cppVar_81071;
	BIT_VEC cppVar_81072 = PC + 1;
	cppVar_81072 = (cppVar_81072 & cppMask_un_16_);
	BIT_VEC cppVar_81073 = ROM.rd(cppVar_81072);
	bool cppVar_81075 = (cppVar_81073 == 240);
	if (cppVar_81075) {
	cppVar_81071 = B;
	} else {
	cppVar_81071 = 0;
	}
	cppVar_81066 = cppVar_81071;
	}
	cppVar_81061 = cppVar_81066;
	}
	cppVar_81056 = cppVar_81061;
	}
	cppVar_81051 = cppVar_81056;
	}
	cppVar_81046 = cppVar_81051;
	}
	cppVar_81041 = cppVar_81046;
	}
	cppVar_81036 = cppVar_81041;
	}
	cppVar_81031 = cppVar_81036;
	}
	cppVar_81026 = cppVar_81031;
	}
	cppVar_81021 = cppVar_81026;
	}
	cppVar_81016 = cppVar_81021;
	}
	cppVar_81011 = cppVar_81016;
	}
	cppVar_81006 = cppVar_81011;
	}
	cppVar_81001 = cppVar_81006;
	}
	cppVar_80996 = cppVar_81001;
	}
	cppVar_80991 = cppVar_80996;
	}
	cppVar_80986 = cppVar_80991;
	}
	cppVar_80981 = cppVar_80986;
	}
	cppVar_80976 = cppVar_80981;
	}
	cppVar_80971 = cppVar_80976;
	}
	cppVar_80961 = cppVar_80971;
	}
	cppVar_80955 = cppVar_80961;
	} else {
	cppVar_80955 = TL1;
	}
	cppVar_80951 = cppVar_80955;
	} else {
	BIT_VEC cppVar_81077;
	BIT_VEC cppVar_81078 = ROM.rd(PC);
	bool cppVar_81080 = (cppVar_81078 == 117);
	if (cppVar_81080) {
	BIT_VEC cppVar_81081;
	BIT_VEC cppVar_81083 = PC + 1;
	cppVar_81083 = (cppVar_81083 & cppMask_un_16_);
	BIT_VEC cppVar_81084 = ROM.rd(cppVar_81083);
	bool cppVar_81086 = (cppVar_81084 == 139);
	if (cppVar_81086) {
	BIT_VEC cppVar_81088 = PC + 2;
	cppVar_81088 = (cppVar_81088 & cppMask_un_16_);
	BIT_VEC cppVar_81089 = ROM.rd(cppVar_81088);
	cppVar_81081 = cppVar_81089;
	} else {
	cppVar_81081 = TL1;
	}
	cppVar_81077 = cppVar_81081;
	} else {
	BIT_VEC cppVar_81090;
	BIT_VEC cppVar_81091 = ROM.rd(PC);
	bool cppVar_81093 = (cppVar_81091 == 99);
	if (cppVar_81093) {
	BIT_VEC cppVar_81094;
	BIT_VEC cppVar_81096 = PC + 1;
	cppVar_81096 = (cppVar_81096 & cppMask_un_16_);
	BIT_VEC cppVar_81097 = ROM.rd(cppVar_81096);
	bool cppVar_81099 = (cppVar_81097 == 139);
	if (cppVar_81099) {
	BIT_VEC cppVar_81100;
	BIT_VEC cppVar_81101 = PC + 1;
	cppVar_81101 = (cppVar_81101 & cppMask_un_16_);
	BIT_VEC cppVar_81102 = ROM.rd(cppVar_81101);
	BIT_VEC cppVar_81103 = (cppVar_81102 >> 7) & cppMask_un_1_;
	bool cppVar_81105 = (cppVar_81103 == 0);
	if (cppVar_81105) {
	BIT_VEC cppVar_81106 = PC + 1;
	cppVar_81106 = (cppVar_81106 & cppMask_un_16_);
	BIT_VEC cppVar_81107 = ROM.rd(cppVar_81106);
	BIT_VEC cppVar_81108 = IRAM.rd(cppVar_81107);
	cppVar_81100 = cppVar_81108;
	} else {
	BIT_VEC cppVar_81109;
	BIT_VEC cppVar_81110 = PC + 1;
	cppVar_81110 = (cppVar_81110 & cppMask_un_16_);
	BIT_VEC cppVar_81111 = ROM.rd(cppVar_81110);
	bool cppVar_81113 = (cppVar_81111 == 128);
	if (cppVar_81113) {
	cppVar_81109 = P0;
	} else {
	BIT_VEC cppVar_81114;
	BIT_VEC cppVar_81115 = PC + 1;
	cppVar_81115 = (cppVar_81115 & cppMask_un_16_);
	BIT_VEC cppVar_81116 = ROM.rd(cppVar_81115);
	bool cppVar_81118 = (cppVar_81116 == 129);
	if (cppVar_81118) {
	cppVar_81114 = SP;
	} else {
	BIT_VEC cppVar_81119;
	BIT_VEC cppVar_81120 = PC + 1;
	cppVar_81120 = (cppVar_81120 & cppMask_un_16_);
	BIT_VEC cppVar_81121 = ROM.rd(cppVar_81120);
	bool cppVar_81123 = (cppVar_81121 == 130);
	if (cppVar_81123) {
	cppVar_81119 = DPL;
	} else {
	BIT_VEC cppVar_81124;
	BIT_VEC cppVar_81125 = PC + 1;
	cppVar_81125 = (cppVar_81125 & cppMask_un_16_);
	BIT_VEC cppVar_81126 = ROM.rd(cppVar_81125);
	bool cppVar_81128 = (cppVar_81126 == 131);
	if (cppVar_81128) {
	cppVar_81124 = DPH;
	} else {
	BIT_VEC cppVar_81129;
	BIT_VEC cppVar_81130 = PC + 1;
	cppVar_81130 = (cppVar_81130 & cppMask_un_16_);
	BIT_VEC cppVar_81131 = ROM.rd(cppVar_81130);
	bool cppVar_81133 = (cppVar_81131 == 135);
	if (cppVar_81133) {
	cppVar_81129 = PCON;
	} else {
	BIT_VEC cppVar_81134;
	BIT_VEC cppVar_81135 = PC + 1;
	cppVar_81135 = (cppVar_81135 & cppMask_un_16_);
	BIT_VEC cppVar_81136 = ROM.rd(cppVar_81135);
	bool cppVar_81138 = (cppVar_81136 == 136);
	if (cppVar_81138) {
	cppVar_81134 = TCON;
	} else {
	BIT_VEC cppVar_81139;
	BIT_VEC cppVar_81140 = PC + 1;
	cppVar_81140 = (cppVar_81140 & cppMask_un_16_);
	BIT_VEC cppVar_81141 = ROM.rd(cppVar_81140);
	bool cppVar_81143 = (cppVar_81141 == 137);
	if (cppVar_81143) {
	cppVar_81139 = TMOD;
	} else {
	BIT_VEC cppVar_81144;
	BIT_VEC cppVar_81145 = PC + 1;
	cppVar_81145 = (cppVar_81145 & cppMask_un_16_);
	BIT_VEC cppVar_81146 = ROM.rd(cppVar_81145);
	bool cppVar_81148 = (cppVar_81146 == 138);
	if (cppVar_81148) {
	cppVar_81144 = TL0;
	} else {
	BIT_VEC cppVar_81149;
	BIT_VEC cppVar_81150 = PC + 1;
	cppVar_81150 = (cppVar_81150 & cppMask_un_16_);
	BIT_VEC cppVar_81151 = ROM.rd(cppVar_81150);
	bool cppVar_81153 = (cppVar_81151 == 140);
	if (cppVar_81153) {
	cppVar_81149 = TH0;
	} else {
	BIT_VEC cppVar_81154;
	BIT_VEC cppVar_81155 = PC + 1;
	cppVar_81155 = (cppVar_81155 & cppMask_un_16_);
	BIT_VEC cppVar_81156 = ROM.rd(cppVar_81155);
	bool cppVar_81158 = (cppVar_81156 == 139);
	if (cppVar_81158) {
	cppVar_81154 = TL1;
	} else {
	BIT_VEC cppVar_81159;
	BIT_VEC cppVar_81160 = PC + 1;
	cppVar_81160 = (cppVar_81160 & cppMask_un_16_);
	BIT_VEC cppVar_81161 = ROM.rd(cppVar_81160);
	bool cppVar_81163 = (cppVar_81161 == 141);
	if (cppVar_81163) {
	cppVar_81159 = TH1;
	} else {
	BIT_VEC cppVar_81164;
	BIT_VEC cppVar_81165 = PC + 1;
	cppVar_81165 = (cppVar_81165 & cppMask_un_16_);
	BIT_VEC cppVar_81166 = ROM.rd(cppVar_81165);
	bool cppVar_81168 = (cppVar_81166 == 144);
	if (cppVar_81168) {
	cppVar_81164 = P1;
	} else {
	BIT_VEC cppVar_81169;
	BIT_VEC cppVar_81170 = PC + 1;
	cppVar_81170 = (cppVar_81170 & cppMask_un_16_);
	BIT_VEC cppVar_81171 = ROM.rd(cppVar_81170);
	bool cppVar_81173 = (cppVar_81171 == 152);
	if (cppVar_81173) {
	cppVar_81169 = SCON;
	} else {
	BIT_VEC cppVar_81174;
	BIT_VEC cppVar_81175 = PC + 1;
	cppVar_81175 = (cppVar_81175 & cppMask_un_16_);
	BIT_VEC cppVar_81176 = ROM.rd(cppVar_81175);
	bool cppVar_81178 = (cppVar_81176 == 153);
	if (cppVar_81178) {
	cppVar_81174 = SBUF;
	} else {
	BIT_VEC cppVar_81179;
	BIT_VEC cppVar_81180 = PC + 1;
	cppVar_81180 = (cppVar_81180 & cppMask_un_16_);
	BIT_VEC cppVar_81181 = ROM.rd(cppVar_81180);
	bool cppVar_81183 = (cppVar_81181 == 160);
	if (cppVar_81183) {
	cppVar_81179 = P2;
	} else {
	BIT_VEC cppVar_81184;
	BIT_VEC cppVar_81185 = PC + 1;
	cppVar_81185 = (cppVar_81185 & cppMask_un_16_);
	BIT_VEC cppVar_81186 = ROM.rd(cppVar_81185);
	bool cppVar_81188 = (cppVar_81186 == 168);
	if (cppVar_81188) {
	cppVar_81184 = IE;
	} else {
	BIT_VEC cppVar_81189;
	BIT_VEC cppVar_81190 = PC + 1;
	cppVar_81190 = (cppVar_81190 & cppMask_un_16_);
	BIT_VEC cppVar_81191 = ROM.rd(cppVar_81190);
	bool cppVar_81193 = (cppVar_81191 == 176);
	if (cppVar_81193) {
	cppVar_81189 = P3;
	} else {
	BIT_VEC cppVar_81194;
	BIT_VEC cppVar_81195 = PC + 1;
	cppVar_81195 = (cppVar_81195 & cppMask_un_16_);
	BIT_VEC cppVar_81196 = ROM.rd(cppVar_81195);
	bool cppVar_81198 = (cppVar_81196 == 184);
	if (cppVar_81198) {
	cppVar_81194 = IP;
	} else {
	BIT_VEC cppVar_81199;
	BIT_VEC cppVar_81200 = PC + 1;
	cppVar_81200 = (cppVar_81200 & cppMask_un_16_);
	BIT_VEC cppVar_81201 = ROM.rd(cppVar_81200);
	bool cppVar_81203 = (cppVar_81201 == 208);
	if (cppVar_81203) {
	cppVar_81199 = PSW;
	} else {
	BIT_VEC cppVar_81204;
	BIT_VEC cppVar_81205 = PC + 1;
	cppVar_81205 = (cppVar_81205 & cppMask_un_16_);
	BIT_VEC cppVar_81206 = ROM.rd(cppVar_81205);
	bool cppVar_81208 = (cppVar_81206 == 224);
	if (cppVar_81208) {
	cppVar_81204 = ACC;
	} else {
	BIT_VEC cppVar_81209;
	BIT_VEC cppVar_81210 = PC + 1;
	cppVar_81210 = (cppVar_81210 & cppMask_un_16_);
	BIT_VEC cppVar_81211 = ROM.rd(cppVar_81210);
	bool cppVar_81213 = (cppVar_81211 == 240);
	if (cppVar_81213) {
	cppVar_81209 = B;
	} else {
	cppVar_81209 = 0;
	}
	cppVar_81204 = cppVar_81209;
	}
	cppVar_81199 = cppVar_81204;
	}
	cppVar_81194 = cppVar_81199;
	}
	cppVar_81189 = cppVar_81194;
	}
	cppVar_81184 = cppVar_81189;
	}
	cppVar_81179 = cppVar_81184;
	}
	cppVar_81174 = cppVar_81179;
	}
	cppVar_81169 = cppVar_81174;
	}
	cppVar_81164 = cppVar_81169;
	}
	cppVar_81159 = cppVar_81164;
	}
	cppVar_81154 = cppVar_81159;
	}
	cppVar_81149 = cppVar_81154;
	}
	cppVar_81144 = cppVar_81149;
	}
	cppVar_81139 = cppVar_81144;
	}
	cppVar_81134 = cppVar_81139;
	}
	cppVar_81129 = cppVar_81134;
	}
	cppVar_81124 = cppVar_81129;
	}
	cppVar_81119 = cppVar_81124;
	}
	cppVar_81114 = cppVar_81119;
	}
	cppVar_81109 = cppVar_81114;
	}
	cppVar_81100 = cppVar_81109;
	}
	BIT_VEC cppVar_81216 = PC + 2;
	cppVar_81216 = (cppVar_81216 & cppMask_un_16_);
	BIT_VEC cppVar_81217 = ROM.rd(cppVar_81216);
	BIT_VEC cppVar_81218 = cppVar_81100 ^ cppVar_81217;
	cppVar_81094 = cppVar_81218;
	} else {
	cppVar_81094 = TL1;
	}
	cppVar_81090 = cppVar_81094;
	} else {
	BIT_VEC cppVar_81219;
	BIT_VEC cppVar_81220 = ROM.rd(PC);
	bool cppVar_81222 = (cppVar_81220 == 98);
	if (cppVar_81222) {
	BIT_VEC cppVar_81223;
	BIT_VEC cppVar_81225 = PC + 1;
	cppVar_81225 = (cppVar_81225 & cppMask_un_16_);
	BIT_VEC cppVar_81226 = ROM.rd(cppVar_81225);
	bool cppVar_81228 = (cppVar_81226 == 139);
	if (cppVar_81228) {
	BIT_VEC cppVar_81229;
	BIT_VEC cppVar_81230 = PC + 1;
	cppVar_81230 = (cppVar_81230 & cppMask_un_16_);
	BIT_VEC cppVar_81231 = ROM.rd(cppVar_81230);
	BIT_VEC cppVar_81232 = (cppVar_81231 >> 7) & cppMask_un_1_;
	bool cppVar_81234 = (cppVar_81232 == 0);
	if (cppVar_81234) {
	BIT_VEC cppVar_81235 = PC + 1;
	cppVar_81235 = (cppVar_81235 & cppMask_un_16_);
	BIT_VEC cppVar_81236 = ROM.rd(cppVar_81235);
	BIT_VEC cppVar_81237 = IRAM.rd(cppVar_81236);
	cppVar_81229 = cppVar_81237;
	} else {
	BIT_VEC cppVar_81238;
	BIT_VEC cppVar_81239 = PC + 1;
	cppVar_81239 = (cppVar_81239 & cppMask_un_16_);
	BIT_VEC cppVar_81240 = ROM.rd(cppVar_81239);
	bool cppVar_81242 = (cppVar_81240 == 128);
	if (cppVar_81242) {
	cppVar_81238 = P0;
	} else {
	BIT_VEC cppVar_81243;
	BIT_VEC cppVar_81244 = PC + 1;
	cppVar_81244 = (cppVar_81244 & cppMask_un_16_);
	BIT_VEC cppVar_81245 = ROM.rd(cppVar_81244);
	bool cppVar_81247 = (cppVar_81245 == 129);
	if (cppVar_81247) {
	cppVar_81243 = SP;
	} else {
	BIT_VEC cppVar_81248;
	BIT_VEC cppVar_81249 = PC + 1;
	cppVar_81249 = (cppVar_81249 & cppMask_un_16_);
	BIT_VEC cppVar_81250 = ROM.rd(cppVar_81249);
	bool cppVar_81252 = (cppVar_81250 == 130);
	if (cppVar_81252) {
	cppVar_81248 = DPL;
	} else {
	BIT_VEC cppVar_81253;
	BIT_VEC cppVar_81254 = PC + 1;
	cppVar_81254 = (cppVar_81254 & cppMask_un_16_);
	BIT_VEC cppVar_81255 = ROM.rd(cppVar_81254);
	bool cppVar_81257 = (cppVar_81255 == 131);
	if (cppVar_81257) {
	cppVar_81253 = DPH;
	} else {
	BIT_VEC cppVar_81258;
	BIT_VEC cppVar_81259 = PC + 1;
	cppVar_81259 = (cppVar_81259 & cppMask_un_16_);
	BIT_VEC cppVar_81260 = ROM.rd(cppVar_81259);
	bool cppVar_81262 = (cppVar_81260 == 135);
	if (cppVar_81262) {
	cppVar_81258 = PCON;
	} else {
	BIT_VEC cppVar_81263;
	BIT_VEC cppVar_81264 = PC + 1;
	cppVar_81264 = (cppVar_81264 & cppMask_un_16_);
	BIT_VEC cppVar_81265 = ROM.rd(cppVar_81264);
	bool cppVar_81267 = (cppVar_81265 == 136);
	if (cppVar_81267) {
	cppVar_81263 = TCON;
	} else {
	BIT_VEC cppVar_81268;
	BIT_VEC cppVar_81269 = PC + 1;
	cppVar_81269 = (cppVar_81269 & cppMask_un_16_);
	BIT_VEC cppVar_81270 = ROM.rd(cppVar_81269);
	bool cppVar_81272 = (cppVar_81270 == 137);
	if (cppVar_81272) {
	cppVar_81268 = TMOD;
	} else {
	BIT_VEC cppVar_81273;
	BIT_VEC cppVar_81274 = PC + 1;
	cppVar_81274 = (cppVar_81274 & cppMask_un_16_);
	BIT_VEC cppVar_81275 = ROM.rd(cppVar_81274);
	bool cppVar_81277 = (cppVar_81275 == 138);
	if (cppVar_81277) {
	cppVar_81273 = TL0;
	} else {
	BIT_VEC cppVar_81278;
	BIT_VEC cppVar_81279 = PC + 1;
	cppVar_81279 = (cppVar_81279 & cppMask_un_16_);
	BIT_VEC cppVar_81280 = ROM.rd(cppVar_81279);
	bool cppVar_81282 = (cppVar_81280 == 140);
	if (cppVar_81282) {
	cppVar_81278 = TH0;
	} else {
	BIT_VEC cppVar_81283;
	BIT_VEC cppVar_81284 = PC + 1;
	cppVar_81284 = (cppVar_81284 & cppMask_un_16_);
	BIT_VEC cppVar_81285 = ROM.rd(cppVar_81284);
	bool cppVar_81287 = (cppVar_81285 == 139);
	if (cppVar_81287) {
	cppVar_81283 = TL1;
	} else {
	BIT_VEC cppVar_81288;
	BIT_VEC cppVar_81289 = PC + 1;
	cppVar_81289 = (cppVar_81289 & cppMask_un_16_);
	BIT_VEC cppVar_81290 = ROM.rd(cppVar_81289);
	bool cppVar_81292 = (cppVar_81290 == 141);
	if (cppVar_81292) {
	cppVar_81288 = TH1;
	} else {
	BIT_VEC cppVar_81293;
	BIT_VEC cppVar_81294 = PC + 1;
	cppVar_81294 = (cppVar_81294 & cppMask_un_16_);
	BIT_VEC cppVar_81295 = ROM.rd(cppVar_81294);
	bool cppVar_81297 = (cppVar_81295 == 144);
	if (cppVar_81297) {
	cppVar_81293 = P1;
	} else {
	BIT_VEC cppVar_81298;
	BIT_VEC cppVar_81299 = PC + 1;
	cppVar_81299 = (cppVar_81299 & cppMask_un_16_);
	BIT_VEC cppVar_81300 = ROM.rd(cppVar_81299);
	bool cppVar_81302 = (cppVar_81300 == 152);
	if (cppVar_81302) {
	cppVar_81298 = SCON;
	} else {
	BIT_VEC cppVar_81303;
	BIT_VEC cppVar_81304 = PC + 1;
	cppVar_81304 = (cppVar_81304 & cppMask_un_16_);
	BIT_VEC cppVar_81305 = ROM.rd(cppVar_81304);
	bool cppVar_81307 = (cppVar_81305 == 153);
	if (cppVar_81307) {
	cppVar_81303 = SBUF;
	} else {
	BIT_VEC cppVar_81308;
	BIT_VEC cppVar_81309 = PC + 1;
	cppVar_81309 = (cppVar_81309 & cppMask_un_16_);
	BIT_VEC cppVar_81310 = ROM.rd(cppVar_81309);
	bool cppVar_81312 = (cppVar_81310 == 160);
	if (cppVar_81312) {
	cppVar_81308 = P2;
	} else {
	BIT_VEC cppVar_81313;
	BIT_VEC cppVar_81314 = PC + 1;
	cppVar_81314 = (cppVar_81314 & cppMask_un_16_);
	BIT_VEC cppVar_81315 = ROM.rd(cppVar_81314);
	bool cppVar_81317 = (cppVar_81315 == 168);
	if (cppVar_81317) {
	cppVar_81313 = IE;
	} else {
	BIT_VEC cppVar_81318;
	BIT_VEC cppVar_81319 = PC + 1;
	cppVar_81319 = (cppVar_81319 & cppMask_un_16_);
	BIT_VEC cppVar_81320 = ROM.rd(cppVar_81319);
	bool cppVar_81322 = (cppVar_81320 == 176);
	if (cppVar_81322) {
	cppVar_81318 = P3;
	} else {
	BIT_VEC cppVar_81323;
	BIT_VEC cppVar_81324 = PC + 1;
	cppVar_81324 = (cppVar_81324 & cppMask_un_16_);
	BIT_VEC cppVar_81325 = ROM.rd(cppVar_81324);
	bool cppVar_81327 = (cppVar_81325 == 184);
	if (cppVar_81327) {
	cppVar_81323 = IP;
	} else {
	BIT_VEC cppVar_81328;
	BIT_VEC cppVar_81329 = PC + 1;
	cppVar_81329 = (cppVar_81329 & cppMask_un_16_);
	BIT_VEC cppVar_81330 = ROM.rd(cppVar_81329);
	bool cppVar_81332 = (cppVar_81330 == 208);
	if (cppVar_81332) {
	cppVar_81328 = PSW;
	} else {
	BIT_VEC cppVar_81333;
	BIT_VEC cppVar_81334 = PC + 1;
	cppVar_81334 = (cppVar_81334 & cppMask_un_16_);
	BIT_VEC cppVar_81335 = ROM.rd(cppVar_81334);
	bool cppVar_81337 = (cppVar_81335 == 224);
	if (cppVar_81337) {
	cppVar_81333 = ACC;
	} else {
	BIT_VEC cppVar_81338;
	BIT_VEC cppVar_81339 = PC + 1;
	cppVar_81339 = (cppVar_81339 & cppMask_un_16_);
	BIT_VEC cppVar_81340 = ROM.rd(cppVar_81339);
	bool cppVar_81342 = (cppVar_81340 == 240);
	if (cppVar_81342) {
	cppVar_81338 = B;
	} else {
	cppVar_81338 = 0;
	}
	cppVar_81333 = cppVar_81338;
	}
	cppVar_81328 = cppVar_81333;
	}
	cppVar_81323 = cppVar_81328;
	}
	cppVar_81318 = cppVar_81323;
	}
	cppVar_81313 = cppVar_81318;
	}
	cppVar_81308 = cppVar_81313;
	}
	cppVar_81303 = cppVar_81308;
	}
	cppVar_81298 = cppVar_81303;
	}
	cppVar_81293 = cppVar_81298;
	}
	cppVar_81288 = cppVar_81293;
	}
	cppVar_81283 = cppVar_81288;
	}
	cppVar_81278 = cppVar_81283;
	}
	cppVar_81273 = cppVar_81278;
	}
	cppVar_81268 = cppVar_81273;
	}
	cppVar_81263 = cppVar_81268;
	}
	cppVar_81258 = cppVar_81263;
	}
	cppVar_81253 = cppVar_81258;
	}
	cppVar_81248 = cppVar_81253;
	}
	cppVar_81243 = cppVar_81248;
	}
	cppVar_81238 = cppVar_81243;
	}
	cppVar_81229 = cppVar_81238;
	}
	BIT_VEC cppVar_81344 = cppVar_81229 ^ ACC;
	cppVar_81223 = cppVar_81344;
	} else {
	cppVar_81223 = TL1;
	}
	cppVar_81219 = cppVar_81223;
	} else {
	BIT_VEC cppVar_81345;
	BIT_VEC cppVar_81346 = ROM.rd(PC);
	bool cppVar_81348 = (cppVar_81346 == 83);
	if (cppVar_81348) {
	BIT_VEC cppVar_81349;
	BIT_VEC cppVar_81351 = PC + 1;
	cppVar_81351 = (cppVar_81351 & cppMask_un_16_);
	BIT_VEC cppVar_81352 = ROM.rd(cppVar_81351);
	bool cppVar_81354 = (cppVar_81352 == 139);
	if (cppVar_81354) {
	BIT_VEC cppVar_81355;
	BIT_VEC cppVar_81356 = PC + 1;
	cppVar_81356 = (cppVar_81356 & cppMask_un_16_);
	BIT_VEC cppVar_81357 = ROM.rd(cppVar_81356);
	BIT_VEC cppVar_81358 = (cppVar_81357 >> 7) & cppMask_un_1_;
	bool cppVar_81360 = (cppVar_81358 == 0);
	if (cppVar_81360) {
	BIT_VEC cppVar_81361 = PC + 1;
	cppVar_81361 = (cppVar_81361 & cppMask_un_16_);
	BIT_VEC cppVar_81362 = ROM.rd(cppVar_81361);
	BIT_VEC cppVar_81363 = IRAM.rd(cppVar_81362);
	cppVar_81355 = cppVar_81363;
	} else {
	BIT_VEC cppVar_81364;
	BIT_VEC cppVar_81365 = PC + 1;
	cppVar_81365 = (cppVar_81365 & cppMask_un_16_);
	BIT_VEC cppVar_81366 = ROM.rd(cppVar_81365);
	bool cppVar_81368 = (cppVar_81366 == 128);
	if (cppVar_81368) {
	cppVar_81364 = P0;
	} else {
	BIT_VEC cppVar_81369;
	BIT_VEC cppVar_81370 = PC + 1;
	cppVar_81370 = (cppVar_81370 & cppMask_un_16_);
	BIT_VEC cppVar_81371 = ROM.rd(cppVar_81370);
	bool cppVar_81373 = (cppVar_81371 == 129);
	if (cppVar_81373) {
	cppVar_81369 = SP;
	} else {
	BIT_VEC cppVar_81374;
	BIT_VEC cppVar_81375 = PC + 1;
	cppVar_81375 = (cppVar_81375 & cppMask_un_16_);
	BIT_VEC cppVar_81376 = ROM.rd(cppVar_81375);
	bool cppVar_81378 = (cppVar_81376 == 130);
	if (cppVar_81378) {
	cppVar_81374 = DPL;
	} else {
	BIT_VEC cppVar_81379;
	BIT_VEC cppVar_81380 = PC + 1;
	cppVar_81380 = (cppVar_81380 & cppMask_un_16_);
	BIT_VEC cppVar_81381 = ROM.rd(cppVar_81380);
	bool cppVar_81383 = (cppVar_81381 == 131);
	if (cppVar_81383) {
	cppVar_81379 = DPH;
	} else {
	BIT_VEC cppVar_81384;
	BIT_VEC cppVar_81385 = PC + 1;
	cppVar_81385 = (cppVar_81385 & cppMask_un_16_);
	BIT_VEC cppVar_81386 = ROM.rd(cppVar_81385);
	bool cppVar_81388 = (cppVar_81386 == 135);
	if (cppVar_81388) {
	cppVar_81384 = PCON;
	} else {
	BIT_VEC cppVar_81389;
	BIT_VEC cppVar_81390 = PC + 1;
	cppVar_81390 = (cppVar_81390 & cppMask_un_16_);
	BIT_VEC cppVar_81391 = ROM.rd(cppVar_81390);
	bool cppVar_81393 = (cppVar_81391 == 136);
	if (cppVar_81393) {
	cppVar_81389 = TCON;
	} else {
	BIT_VEC cppVar_81394;
	BIT_VEC cppVar_81395 = PC + 1;
	cppVar_81395 = (cppVar_81395 & cppMask_un_16_);
	BIT_VEC cppVar_81396 = ROM.rd(cppVar_81395);
	bool cppVar_81398 = (cppVar_81396 == 137);
	if (cppVar_81398) {
	cppVar_81394 = TMOD;
	} else {
	BIT_VEC cppVar_81399;
	BIT_VEC cppVar_81400 = PC + 1;
	cppVar_81400 = (cppVar_81400 & cppMask_un_16_);
	BIT_VEC cppVar_81401 = ROM.rd(cppVar_81400);
	bool cppVar_81403 = (cppVar_81401 == 138);
	if (cppVar_81403) {
	cppVar_81399 = TL0;
	} else {
	BIT_VEC cppVar_81404;
	BIT_VEC cppVar_81405 = PC + 1;
	cppVar_81405 = (cppVar_81405 & cppMask_un_16_);
	BIT_VEC cppVar_81406 = ROM.rd(cppVar_81405);
	bool cppVar_81408 = (cppVar_81406 == 140);
	if (cppVar_81408) {
	cppVar_81404 = TH0;
	} else {
	BIT_VEC cppVar_81409;
	BIT_VEC cppVar_81410 = PC + 1;
	cppVar_81410 = (cppVar_81410 & cppMask_un_16_);
	BIT_VEC cppVar_81411 = ROM.rd(cppVar_81410);
	bool cppVar_81413 = (cppVar_81411 == 139);
	if (cppVar_81413) {
	cppVar_81409 = TL1;
	} else {
	BIT_VEC cppVar_81414;
	BIT_VEC cppVar_81415 = PC + 1;
	cppVar_81415 = (cppVar_81415 & cppMask_un_16_);
	BIT_VEC cppVar_81416 = ROM.rd(cppVar_81415);
	bool cppVar_81418 = (cppVar_81416 == 141);
	if (cppVar_81418) {
	cppVar_81414 = TH1;
	} else {
	BIT_VEC cppVar_81419;
	BIT_VEC cppVar_81420 = PC + 1;
	cppVar_81420 = (cppVar_81420 & cppMask_un_16_);
	BIT_VEC cppVar_81421 = ROM.rd(cppVar_81420);
	bool cppVar_81423 = (cppVar_81421 == 144);
	if (cppVar_81423) {
	cppVar_81419 = P1;
	} else {
	BIT_VEC cppVar_81424;
	BIT_VEC cppVar_81425 = PC + 1;
	cppVar_81425 = (cppVar_81425 & cppMask_un_16_);
	BIT_VEC cppVar_81426 = ROM.rd(cppVar_81425);
	bool cppVar_81428 = (cppVar_81426 == 152);
	if (cppVar_81428) {
	cppVar_81424 = SCON;
	} else {
	BIT_VEC cppVar_81429;
	BIT_VEC cppVar_81430 = PC + 1;
	cppVar_81430 = (cppVar_81430 & cppMask_un_16_);
	BIT_VEC cppVar_81431 = ROM.rd(cppVar_81430);
	bool cppVar_81433 = (cppVar_81431 == 153);
	if (cppVar_81433) {
	cppVar_81429 = SBUF;
	} else {
	BIT_VEC cppVar_81434;
	BIT_VEC cppVar_81435 = PC + 1;
	cppVar_81435 = (cppVar_81435 & cppMask_un_16_);
	BIT_VEC cppVar_81436 = ROM.rd(cppVar_81435);
	bool cppVar_81438 = (cppVar_81436 == 160);
	if (cppVar_81438) {
	cppVar_81434 = P2;
	} else {
	BIT_VEC cppVar_81439;
	BIT_VEC cppVar_81440 = PC + 1;
	cppVar_81440 = (cppVar_81440 & cppMask_un_16_);
	BIT_VEC cppVar_81441 = ROM.rd(cppVar_81440);
	bool cppVar_81443 = (cppVar_81441 == 168);
	if (cppVar_81443) {
	cppVar_81439 = IE;
	} else {
	BIT_VEC cppVar_81444;
	BIT_VEC cppVar_81445 = PC + 1;
	cppVar_81445 = (cppVar_81445 & cppMask_un_16_);
	BIT_VEC cppVar_81446 = ROM.rd(cppVar_81445);
	bool cppVar_81448 = (cppVar_81446 == 176);
	if (cppVar_81448) {
	cppVar_81444 = P3;
	} else {
	BIT_VEC cppVar_81449;
	BIT_VEC cppVar_81450 = PC + 1;
	cppVar_81450 = (cppVar_81450 & cppMask_un_16_);
	BIT_VEC cppVar_81451 = ROM.rd(cppVar_81450);
	bool cppVar_81453 = (cppVar_81451 == 184);
	if (cppVar_81453) {
	cppVar_81449 = IP;
	} else {
	BIT_VEC cppVar_81454;
	BIT_VEC cppVar_81455 = PC + 1;
	cppVar_81455 = (cppVar_81455 & cppMask_un_16_);
	BIT_VEC cppVar_81456 = ROM.rd(cppVar_81455);
	bool cppVar_81458 = (cppVar_81456 == 208);
	if (cppVar_81458) {
	cppVar_81454 = PSW;
	} else {
	BIT_VEC cppVar_81459;
	BIT_VEC cppVar_81460 = PC + 1;
	cppVar_81460 = (cppVar_81460 & cppMask_un_16_);
	BIT_VEC cppVar_81461 = ROM.rd(cppVar_81460);
	bool cppVar_81463 = (cppVar_81461 == 224);
	if (cppVar_81463) {
	cppVar_81459 = ACC;
	} else {
	BIT_VEC cppVar_81464;
	BIT_VEC cppVar_81465 = PC + 1;
	cppVar_81465 = (cppVar_81465 & cppMask_un_16_);
	BIT_VEC cppVar_81466 = ROM.rd(cppVar_81465);
	bool cppVar_81468 = (cppVar_81466 == 240);
	if (cppVar_81468) {
	cppVar_81464 = B;
	} else {
	cppVar_81464 = 0;
	}
	cppVar_81459 = cppVar_81464;
	}
	cppVar_81454 = cppVar_81459;
	}
	cppVar_81449 = cppVar_81454;
	}
	cppVar_81444 = cppVar_81449;
	}
	cppVar_81439 = cppVar_81444;
	}
	cppVar_81434 = cppVar_81439;
	}
	cppVar_81429 = cppVar_81434;
	}
	cppVar_81424 = cppVar_81429;
	}
	cppVar_81419 = cppVar_81424;
	}
	cppVar_81414 = cppVar_81419;
	}
	cppVar_81409 = cppVar_81414;
	}
	cppVar_81404 = cppVar_81409;
	}
	cppVar_81399 = cppVar_81404;
	}
	cppVar_81394 = cppVar_81399;
	}
	cppVar_81389 = cppVar_81394;
	}
	cppVar_81384 = cppVar_81389;
	}
	cppVar_81379 = cppVar_81384;
	}
	cppVar_81374 = cppVar_81379;
	}
	cppVar_81369 = cppVar_81374;
	}
	cppVar_81364 = cppVar_81369;
	}
	cppVar_81355 = cppVar_81364;
	}
	BIT_VEC cppVar_81471 = PC + 2;
	cppVar_81471 = (cppVar_81471 & cppMask_un_16_);
	BIT_VEC cppVar_81472 = ROM.rd(cppVar_81471);
	BIT_VEC cppVar_81473 = cppVar_81355 & cppVar_81472;
	cppVar_81349 = cppVar_81473;
	} else {
	cppVar_81349 = TL1;
	}
	cppVar_81345 = cppVar_81349;
	} else {
	BIT_VEC cppVar_81474;
	BIT_VEC cppVar_81475 = ROM.rd(PC);
	bool cppVar_81477 = (cppVar_81475 == 82);
	if (cppVar_81477) {
	BIT_VEC cppVar_81478;
	BIT_VEC cppVar_81480 = PC + 1;
	cppVar_81480 = (cppVar_81480 & cppMask_un_16_);
	BIT_VEC cppVar_81481 = ROM.rd(cppVar_81480);
	bool cppVar_81483 = (cppVar_81481 == 139);
	if (cppVar_81483) {
	BIT_VEC cppVar_81484;
	BIT_VEC cppVar_81485 = PC + 1;
	cppVar_81485 = (cppVar_81485 & cppMask_un_16_);
	BIT_VEC cppVar_81486 = ROM.rd(cppVar_81485);
	BIT_VEC cppVar_81487 = (cppVar_81486 >> 7) & cppMask_un_1_;
	bool cppVar_81489 = (cppVar_81487 == 0);
	if (cppVar_81489) {
	BIT_VEC cppVar_81490 = PC + 1;
	cppVar_81490 = (cppVar_81490 & cppMask_un_16_);
	BIT_VEC cppVar_81491 = ROM.rd(cppVar_81490);
	BIT_VEC cppVar_81492 = IRAM.rd(cppVar_81491);
	cppVar_81484 = cppVar_81492;
	} else {
	BIT_VEC cppVar_81493;
	BIT_VEC cppVar_81494 = PC + 1;
	cppVar_81494 = (cppVar_81494 & cppMask_un_16_);
	BIT_VEC cppVar_81495 = ROM.rd(cppVar_81494);
	bool cppVar_81497 = (cppVar_81495 == 128);
	if (cppVar_81497) {
	cppVar_81493 = P0;
	} else {
	BIT_VEC cppVar_81498;
	BIT_VEC cppVar_81499 = PC + 1;
	cppVar_81499 = (cppVar_81499 & cppMask_un_16_);
	BIT_VEC cppVar_81500 = ROM.rd(cppVar_81499);
	bool cppVar_81502 = (cppVar_81500 == 129);
	if (cppVar_81502) {
	cppVar_81498 = SP;
	} else {
	BIT_VEC cppVar_81503;
	BIT_VEC cppVar_81504 = PC + 1;
	cppVar_81504 = (cppVar_81504 & cppMask_un_16_);
	BIT_VEC cppVar_81505 = ROM.rd(cppVar_81504);
	bool cppVar_81507 = (cppVar_81505 == 130);
	if (cppVar_81507) {
	cppVar_81503 = DPL;
	} else {
	BIT_VEC cppVar_81508;
	BIT_VEC cppVar_81509 = PC + 1;
	cppVar_81509 = (cppVar_81509 & cppMask_un_16_);
	BIT_VEC cppVar_81510 = ROM.rd(cppVar_81509);
	bool cppVar_81512 = (cppVar_81510 == 131);
	if (cppVar_81512) {
	cppVar_81508 = DPH;
	} else {
	BIT_VEC cppVar_81513;
	BIT_VEC cppVar_81514 = PC + 1;
	cppVar_81514 = (cppVar_81514 & cppMask_un_16_);
	BIT_VEC cppVar_81515 = ROM.rd(cppVar_81514);
	bool cppVar_81517 = (cppVar_81515 == 135);
	if (cppVar_81517) {
	cppVar_81513 = PCON;
	} else {
	BIT_VEC cppVar_81518;
	BIT_VEC cppVar_81519 = PC + 1;
	cppVar_81519 = (cppVar_81519 & cppMask_un_16_);
	BIT_VEC cppVar_81520 = ROM.rd(cppVar_81519);
	bool cppVar_81522 = (cppVar_81520 == 136);
	if (cppVar_81522) {
	cppVar_81518 = TCON;
	} else {
	BIT_VEC cppVar_81523;
	BIT_VEC cppVar_81524 = PC + 1;
	cppVar_81524 = (cppVar_81524 & cppMask_un_16_);
	BIT_VEC cppVar_81525 = ROM.rd(cppVar_81524);
	bool cppVar_81527 = (cppVar_81525 == 137);
	if (cppVar_81527) {
	cppVar_81523 = TMOD;
	} else {
	BIT_VEC cppVar_81528;
	BIT_VEC cppVar_81529 = PC + 1;
	cppVar_81529 = (cppVar_81529 & cppMask_un_16_);
	BIT_VEC cppVar_81530 = ROM.rd(cppVar_81529);
	bool cppVar_81532 = (cppVar_81530 == 138);
	if (cppVar_81532) {
	cppVar_81528 = TL0;
	} else {
	BIT_VEC cppVar_81533;
	BIT_VEC cppVar_81534 = PC + 1;
	cppVar_81534 = (cppVar_81534 & cppMask_un_16_);
	BIT_VEC cppVar_81535 = ROM.rd(cppVar_81534);
	bool cppVar_81537 = (cppVar_81535 == 140);
	if (cppVar_81537) {
	cppVar_81533 = TH0;
	} else {
	BIT_VEC cppVar_81538;
	BIT_VEC cppVar_81539 = PC + 1;
	cppVar_81539 = (cppVar_81539 & cppMask_un_16_);
	BIT_VEC cppVar_81540 = ROM.rd(cppVar_81539);
	bool cppVar_81542 = (cppVar_81540 == 139);
	if (cppVar_81542) {
	cppVar_81538 = TL1;
	} else {
	BIT_VEC cppVar_81543;
	BIT_VEC cppVar_81544 = PC + 1;
	cppVar_81544 = (cppVar_81544 & cppMask_un_16_);
	BIT_VEC cppVar_81545 = ROM.rd(cppVar_81544);
	bool cppVar_81547 = (cppVar_81545 == 141);
	if (cppVar_81547) {
	cppVar_81543 = TH1;
	} else {
	BIT_VEC cppVar_81548;
	BIT_VEC cppVar_81549 = PC + 1;
	cppVar_81549 = (cppVar_81549 & cppMask_un_16_);
	BIT_VEC cppVar_81550 = ROM.rd(cppVar_81549);
	bool cppVar_81552 = (cppVar_81550 == 144);
	if (cppVar_81552) {
	cppVar_81548 = P1;
	} else {
	BIT_VEC cppVar_81553;
	BIT_VEC cppVar_81554 = PC + 1;
	cppVar_81554 = (cppVar_81554 & cppMask_un_16_);
	BIT_VEC cppVar_81555 = ROM.rd(cppVar_81554);
	bool cppVar_81557 = (cppVar_81555 == 152);
	if (cppVar_81557) {
	cppVar_81553 = SCON;
	} else {
	BIT_VEC cppVar_81558;
	BIT_VEC cppVar_81559 = PC + 1;
	cppVar_81559 = (cppVar_81559 & cppMask_un_16_);
	BIT_VEC cppVar_81560 = ROM.rd(cppVar_81559);
	bool cppVar_81562 = (cppVar_81560 == 153);
	if (cppVar_81562) {
	cppVar_81558 = SBUF;
	} else {
	BIT_VEC cppVar_81563;
	BIT_VEC cppVar_81564 = PC + 1;
	cppVar_81564 = (cppVar_81564 & cppMask_un_16_);
	BIT_VEC cppVar_81565 = ROM.rd(cppVar_81564);
	bool cppVar_81567 = (cppVar_81565 == 160);
	if (cppVar_81567) {
	cppVar_81563 = P2;
	} else {
	BIT_VEC cppVar_81568;
	BIT_VEC cppVar_81569 = PC + 1;
	cppVar_81569 = (cppVar_81569 & cppMask_un_16_);
	BIT_VEC cppVar_81570 = ROM.rd(cppVar_81569);
	bool cppVar_81572 = (cppVar_81570 == 168);
	if (cppVar_81572) {
	cppVar_81568 = IE;
	} else {
	BIT_VEC cppVar_81573;
	BIT_VEC cppVar_81574 = PC + 1;
	cppVar_81574 = (cppVar_81574 & cppMask_un_16_);
	BIT_VEC cppVar_81575 = ROM.rd(cppVar_81574);
	bool cppVar_81577 = (cppVar_81575 == 176);
	if (cppVar_81577) {
	cppVar_81573 = P3;
	} else {
	BIT_VEC cppVar_81578;
	BIT_VEC cppVar_81579 = PC + 1;
	cppVar_81579 = (cppVar_81579 & cppMask_un_16_);
	BIT_VEC cppVar_81580 = ROM.rd(cppVar_81579);
	bool cppVar_81582 = (cppVar_81580 == 184);
	if (cppVar_81582) {
	cppVar_81578 = IP;
	} else {
	BIT_VEC cppVar_81583;
	BIT_VEC cppVar_81584 = PC + 1;
	cppVar_81584 = (cppVar_81584 & cppMask_un_16_);
	BIT_VEC cppVar_81585 = ROM.rd(cppVar_81584);
	bool cppVar_81587 = (cppVar_81585 == 208);
	if (cppVar_81587) {
	cppVar_81583 = PSW;
	} else {
	BIT_VEC cppVar_81588;
	BIT_VEC cppVar_81589 = PC + 1;
	cppVar_81589 = (cppVar_81589 & cppMask_un_16_);
	BIT_VEC cppVar_81590 = ROM.rd(cppVar_81589);
	bool cppVar_81592 = (cppVar_81590 == 224);
	if (cppVar_81592) {
	cppVar_81588 = ACC;
	} else {
	BIT_VEC cppVar_81593;
	BIT_VEC cppVar_81594 = PC + 1;
	cppVar_81594 = (cppVar_81594 & cppMask_un_16_);
	BIT_VEC cppVar_81595 = ROM.rd(cppVar_81594);
	bool cppVar_81597 = (cppVar_81595 == 240);
	if (cppVar_81597) {
	cppVar_81593 = B;
	} else {
	cppVar_81593 = 0;
	}
	cppVar_81588 = cppVar_81593;
	}
	cppVar_81583 = cppVar_81588;
	}
	cppVar_81578 = cppVar_81583;
	}
	cppVar_81573 = cppVar_81578;
	}
	cppVar_81568 = cppVar_81573;
	}
	cppVar_81563 = cppVar_81568;
	}
	cppVar_81558 = cppVar_81563;
	}
	cppVar_81553 = cppVar_81558;
	}
	cppVar_81548 = cppVar_81553;
	}
	cppVar_81543 = cppVar_81548;
	}
	cppVar_81538 = cppVar_81543;
	}
	cppVar_81533 = cppVar_81538;
	}
	cppVar_81528 = cppVar_81533;
	}
	cppVar_81523 = cppVar_81528;
	}
	cppVar_81518 = cppVar_81523;
	}
	cppVar_81513 = cppVar_81518;
	}
	cppVar_81508 = cppVar_81513;
	}
	cppVar_81503 = cppVar_81508;
	}
	cppVar_81498 = cppVar_81503;
	}
	cppVar_81493 = cppVar_81498;
	}
	cppVar_81484 = cppVar_81493;
	}
	BIT_VEC cppVar_81599 = cppVar_81484 & ACC;
	cppVar_81478 = cppVar_81599;
	} else {
	cppVar_81478 = TL1;
	}
	cppVar_81474 = cppVar_81478;
	} else {
	BIT_VEC cppVar_81600;
	BIT_VEC cppVar_81601 = ROM.rd(PC);
	bool cppVar_81603 = (cppVar_81601 == 67);
	if (cppVar_81603) {
	BIT_VEC cppVar_81604;
	BIT_VEC cppVar_81606 = PC + 1;
	cppVar_81606 = (cppVar_81606 & cppMask_un_16_);
	BIT_VEC cppVar_81607 = ROM.rd(cppVar_81606);
	bool cppVar_81609 = (cppVar_81607 == 139);
	if (cppVar_81609) {
	BIT_VEC cppVar_81610;
	BIT_VEC cppVar_81611 = PC + 1;
	cppVar_81611 = (cppVar_81611 & cppMask_un_16_);
	BIT_VEC cppVar_81612 = ROM.rd(cppVar_81611);
	BIT_VEC cppVar_81613 = (cppVar_81612 >> 7) & cppMask_un_1_;
	bool cppVar_81615 = (cppVar_81613 == 0);
	if (cppVar_81615) {
	BIT_VEC cppVar_81616 = PC + 1;
	cppVar_81616 = (cppVar_81616 & cppMask_un_16_);
	BIT_VEC cppVar_81617 = ROM.rd(cppVar_81616);
	BIT_VEC cppVar_81618 = IRAM.rd(cppVar_81617);
	cppVar_81610 = cppVar_81618;
	} else {
	BIT_VEC cppVar_81619;
	BIT_VEC cppVar_81620 = PC + 1;
	cppVar_81620 = (cppVar_81620 & cppMask_un_16_);
	BIT_VEC cppVar_81621 = ROM.rd(cppVar_81620);
	bool cppVar_81623 = (cppVar_81621 == 128);
	if (cppVar_81623) {
	cppVar_81619 = P0;
	} else {
	BIT_VEC cppVar_81624;
	BIT_VEC cppVar_81625 = PC + 1;
	cppVar_81625 = (cppVar_81625 & cppMask_un_16_);
	BIT_VEC cppVar_81626 = ROM.rd(cppVar_81625);
	bool cppVar_81628 = (cppVar_81626 == 129);
	if (cppVar_81628) {
	cppVar_81624 = SP;
	} else {
	BIT_VEC cppVar_81629;
	BIT_VEC cppVar_81630 = PC + 1;
	cppVar_81630 = (cppVar_81630 & cppMask_un_16_);
	BIT_VEC cppVar_81631 = ROM.rd(cppVar_81630);
	bool cppVar_81633 = (cppVar_81631 == 130);
	if (cppVar_81633) {
	cppVar_81629 = DPL;
	} else {
	BIT_VEC cppVar_81634;
	BIT_VEC cppVar_81635 = PC + 1;
	cppVar_81635 = (cppVar_81635 & cppMask_un_16_);
	BIT_VEC cppVar_81636 = ROM.rd(cppVar_81635);
	bool cppVar_81638 = (cppVar_81636 == 131);
	if (cppVar_81638) {
	cppVar_81634 = DPH;
	} else {
	BIT_VEC cppVar_81639;
	BIT_VEC cppVar_81640 = PC + 1;
	cppVar_81640 = (cppVar_81640 & cppMask_un_16_);
	BIT_VEC cppVar_81641 = ROM.rd(cppVar_81640);
	bool cppVar_81643 = (cppVar_81641 == 135);
	if (cppVar_81643) {
	cppVar_81639 = PCON;
	} else {
	BIT_VEC cppVar_81644;
	BIT_VEC cppVar_81645 = PC + 1;
	cppVar_81645 = (cppVar_81645 & cppMask_un_16_);
	BIT_VEC cppVar_81646 = ROM.rd(cppVar_81645);
	bool cppVar_81648 = (cppVar_81646 == 136);
	if (cppVar_81648) {
	cppVar_81644 = TCON;
	} else {
	BIT_VEC cppVar_81649;
	BIT_VEC cppVar_81650 = PC + 1;
	cppVar_81650 = (cppVar_81650 & cppMask_un_16_);
	BIT_VEC cppVar_81651 = ROM.rd(cppVar_81650);
	bool cppVar_81653 = (cppVar_81651 == 137);
	if (cppVar_81653) {
	cppVar_81649 = TMOD;
	} else {
	BIT_VEC cppVar_81654;
	BIT_VEC cppVar_81655 = PC + 1;
	cppVar_81655 = (cppVar_81655 & cppMask_un_16_);
	BIT_VEC cppVar_81656 = ROM.rd(cppVar_81655);
	bool cppVar_81658 = (cppVar_81656 == 138);
	if (cppVar_81658) {
	cppVar_81654 = TL0;
	} else {
	BIT_VEC cppVar_81659;
	BIT_VEC cppVar_81660 = PC + 1;
	cppVar_81660 = (cppVar_81660 & cppMask_un_16_);
	BIT_VEC cppVar_81661 = ROM.rd(cppVar_81660);
	bool cppVar_81663 = (cppVar_81661 == 140);
	if (cppVar_81663) {
	cppVar_81659 = TH0;
	} else {
	BIT_VEC cppVar_81664;
	BIT_VEC cppVar_81665 = PC + 1;
	cppVar_81665 = (cppVar_81665 & cppMask_un_16_);
	BIT_VEC cppVar_81666 = ROM.rd(cppVar_81665);
	bool cppVar_81668 = (cppVar_81666 == 139);
	if (cppVar_81668) {
	cppVar_81664 = TL1;
	} else {
	BIT_VEC cppVar_81669;
	BIT_VEC cppVar_81670 = PC + 1;
	cppVar_81670 = (cppVar_81670 & cppMask_un_16_);
	BIT_VEC cppVar_81671 = ROM.rd(cppVar_81670);
	bool cppVar_81673 = (cppVar_81671 == 141);
	if (cppVar_81673) {
	cppVar_81669 = TH1;
	} else {
	BIT_VEC cppVar_81674;
	BIT_VEC cppVar_81675 = PC + 1;
	cppVar_81675 = (cppVar_81675 & cppMask_un_16_);
	BIT_VEC cppVar_81676 = ROM.rd(cppVar_81675);
	bool cppVar_81678 = (cppVar_81676 == 144);
	if (cppVar_81678) {
	cppVar_81674 = P1;
	} else {
	BIT_VEC cppVar_81679;
	BIT_VEC cppVar_81680 = PC + 1;
	cppVar_81680 = (cppVar_81680 & cppMask_un_16_);
	BIT_VEC cppVar_81681 = ROM.rd(cppVar_81680);
	bool cppVar_81683 = (cppVar_81681 == 152);
	if (cppVar_81683) {
	cppVar_81679 = SCON;
	} else {
	BIT_VEC cppVar_81684;
	BIT_VEC cppVar_81685 = PC + 1;
	cppVar_81685 = (cppVar_81685 & cppMask_un_16_);
	BIT_VEC cppVar_81686 = ROM.rd(cppVar_81685);
	bool cppVar_81688 = (cppVar_81686 == 153);
	if (cppVar_81688) {
	cppVar_81684 = SBUF;
	} else {
	BIT_VEC cppVar_81689;
	BIT_VEC cppVar_81690 = PC + 1;
	cppVar_81690 = (cppVar_81690 & cppMask_un_16_);
	BIT_VEC cppVar_81691 = ROM.rd(cppVar_81690);
	bool cppVar_81693 = (cppVar_81691 == 160);
	if (cppVar_81693) {
	cppVar_81689 = P2;
	} else {
	BIT_VEC cppVar_81694;
	BIT_VEC cppVar_81695 = PC + 1;
	cppVar_81695 = (cppVar_81695 & cppMask_un_16_);
	BIT_VEC cppVar_81696 = ROM.rd(cppVar_81695);
	bool cppVar_81698 = (cppVar_81696 == 168);
	if (cppVar_81698) {
	cppVar_81694 = IE;
	} else {
	BIT_VEC cppVar_81699;
	BIT_VEC cppVar_81700 = PC + 1;
	cppVar_81700 = (cppVar_81700 & cppMask_un_16_);
	BIT_VEC cppVar_81701 = ROM.rd(cppVar_81700);
	bool cppVar_81703 = (cppVar_81701 == 176);
	if (cppVar_81703) {
	cppVar_81699 = P3;
	} else {
	BIT_VEC cppVar_81704;
	BIT_VEC cppVar_81705 = PC + 1;
	cppVar_81705 = (cppVar_81705 & cppMask_un_16_);
	BIT_VEC cppVar_81706 = ROM.rd(cppVar_81705);
	bool cppVar_81708 = (cppVar_81706 == 184);
	if (cppVar_81708) {
	cppVar_81704 = IP;
	} else {
	BIT_VEC cppVar_81709;
	BIT_VEC cppVar_81710 = PC + 1;
	cppVar_81710 = (cppVar_81710 & cppMask_un_16_);
	BIT_VEC cppVar_81711 = ROM.rd(cppVar_81710);
	bool cppVar_81713 = (cppVar_81711 == 208);
	if (cppVar_81713) {
	cppVar_81709 = PSW;
	} else {
	BIT_VEC cppVar_81714;
	BIT_VEC cppVar_81715 = PC + 1;
	cppVar_81715 = (cppVar_81715 & cppMask_un_16_);
	BIT_VEC cppVar_81716 = ROM.rd(cppVar_81715);
	bool cppVar_81718 = (cppVar_81716 == 224);
	if (cppVar_81718) {
	cppVar_81714 = ACC;
	} else {
	BIT_VEC cppVar_81719;
	BIT_VEC cppVar_81720 = PC + 1;
	cppVar_81720 = (cppVar_81720 & cppMask_un_16_);
	BIT_VEC cppVar_81721 = ROM.rd(cppVar_81720);
	bool cppVar_81723 = (cppVar_81721 == 240);
	if (cppVar_81723) {
	cppVar_81719 = B;
	} else {
	cppVar_81719 = 0;
	}
	cppVar_81714 = cppVar_81719;
	}
	cppVar_81709 = cppVar_81714;
	}
	cppVar_81704 = cppVar_81709;
	}
	cppVar_81699 = cppVar_81704;
	}
	cppVar_81694 = cppVar_81699;
	}
	cppVar_81689 = cppVar_81694;
	}
	cppVar_81684 = cppVar_81689;
	}
	cppVar_81679 = cppVar_81684;
	}
	cppVar_81674 = cppVar_81679;
	}
	cppVar_81669 = cppVar_81674;
	}
	cppVar_81664 = cppVar_81669;
	}
	cppVar_81659 = cppVar_81664;
	}
	cppVar_81654 = cppVar_81659;
	}
	cppVar_81649 = cppVar_81654;
	}
	cppVar_81644 = cppVar_81649;
	}
	cppVar_81639 = cppVar_81644;
	}
	cppVar_81634 = cppVar_81639;
	}
	cppVar_81629 = cppVar_81634;
	}
	cppVar_81624 = cppVar_81629;
	}
	cppVar_81619 = cppVar_81624;
	}
	cppVar_81610 = cppVar_81619;
	}
	BIT_VEC cppVar_81726 = PC + 2;
	cppVar_81726 = (cppVar_81726 & cppMask_un_16_);
	BIT_VEC cppVar_81727 = ROM.rd(cppVar_81726);
	BIT_VEC cppVar_81728 = cppVar_81610 | cppVar_81727;
	cppVar_81604 = cppVar_81728;
	} else {
	cppVar_81604 = TL1;
	}
	cppVar_81600 = cppVar_81604;
	} else {
	BIT_VEC cppVar_81729;
	BIT_VEC cppVar_81730 = ROM.rd(PC);
	bool cppVar_81732 = (cppVar_81730 == 66);
	if (cppVar_81732) {
	BIT_VEC cppVar_81733;
	BIT_VEC cppVar_81735 = PC + 1;
	cppVar_81735 = (cppVar_81735 & cppMask_un_16_);
	BIT_VEC cppVar_81736 = ROM.rd(cppVar_81735);
	bool cppVar_81738 = (cppVar_81736 == 139);
	if (cppVar_81738) {
	BIT_VEC cppVar_81739;
	BIT_VEC cppVar_81740 = PC + 1;
	cppVar_81740 = (cppVar_81740 & cppMask_un_16_);
	BIT_VEC cppVar_81741 = ROM.rd(cppVar_81740);
	BIT_VEC cppVar_81742 = (cppVar_81741 >> 7) & cppMask_un_1_;
	bool cppVar_81744 = (cppVar_81742 == 0);
	if (cppVar_81744) {
	BIT_VEC cppVar_81745 = PC + 1;
	cppVar_81745 = (cppVar_81745 & cppMask_un_16_);
	BIT_VEC cppVar_81746 = ROM.rd(cppVar_81745);
	BIT_VEC cppVar_81747 = IRAM.rd(cppVar_81746);
	cppVar_81739 = cppVar_81747;
	} else {
	BIT_VEC cppVar_81748;
	BIT_VEC cppVar_81749 = PC + 1;
	cppVar_81749 = (cppVar_81749 & cppMask_un_16_);
	BIT_VEC cppVar_81750 = ROM.rd(cppVar_81749);
	bool cppVar_81752 = (cppVar_81750 == 128);
	if (cppVar_81752) {
	cppVar_81748 = P0;
	} else {
	BIT_VEC cppVar_81753;
	BIT_VEC cppVar_81754 = PC + 1;
	cppVar_81754 = (cppVar_81754 & cppMask_un_16_);
	BIT_VEC cppVar_81755 = ROM.rd(cppVar_81754);
	bool cppVar_81757 = (cppVar_81755 == 129);
	if (cppVar_81757) {
	cppVar_81753 = SP;
	} else {
	BIT_VEC cppVar_81758;
	BIT_VEC cppVar_81759 = PC + 1;
	cppVar_81759 = (cppVar_81759 & cppMask_un_16_);
	BIT_VEC cppVar_81760 = ROM.rd(cppVar_81759);
	bool cppVar_81762 = (cppVar_81760 == 130);
	if (cppVar_81762) {
	cppVar_81758 = DPL;
	} else {
	BIT_VEC cppVar_81763;
	BIT_VEC cppVar_81764 = PC + 1;
	cppVar_81764 = (cppVar_81764 & cppMask_un_16_);
	BIT_VEC cppVar_81765 = ROM.rd(cppVar_81764);
	bool cppVar_81767 = (cppVar_81765 == 131);
	if (cppVar_81767) {
	cppVar_81763 = DPH;
	} else {
	BIT_VEC cppVar_81768;
	BIT_VEC cppVar_81769 = PC + 1;
	cppVar_81769 = (cppVar_81769 & cppMask_un_16_);
	BIT_VEC cppVar_81770 = ROM.rd(cppVar_81769);
	bool cppVar_81772 = (cppVar_81770 == 135);
	if (cppVar_81772) {
	cppVar_81768 = PCON;
	} else {
	BIT_VEC cppVar_81773;
	BIT_VEC cppVar_81774 = PC + 1;
	cppVar_81774 = (cppVar_81774 & cppMask_un_16_);
	BIT_VEC cppVar_81775 = ROM.rd(cppVar_81774);
	bool cppVar_81777 = (cppVar_81775 == 136);
	if (cppVar_81777) {
	cppVar_81773 = TCON;
	} else {
	BIT_VEC cppVar_81778;
	BIT_VEC cppVar_81779 = PC + 1;
	cppVar_81779 = (cppVar_81779 & cppMask_un_16_);
	BIT_VEC cppVar_81780 = ROM.rd(cppVar_81779);
	bool cppVar_81782 = (cppVar_81780 == 137);
	if (cppVar_81782) {
	cppVar_81778 = TMOD;
	} else {
	BIT_VEC cppVar_81783;
	BIT_VEC cppVar_81784 = PC + 1;
	cppVar_81784 = (cppVar_81784 & cppMask_un_16_);
	BIT_VEC cppVar_81785 = ROM.rd(cppVar_81784);
	bool cppVar_81787 = (cppVar_81785 == 138);
	if (cppVar_81787) {
	cppVar_81783 = TL0;
	} else {
	BIT_VEC cppVar_81788;
	BIT_VEC cppVar_81789 = PC + 1;
	cppVar_81789 = (cppVar_81789 & cppMask_un_16_);
	BIT_VEC cppVar_81790 = ROM.rd(cppVar_81789);
	bool cppVar_81792 = (cppVar_81790 == 140);
	if (cppVar_81792) {
	cppVar_81788 = TH0;
	} else {
	BIT_VEC cppVar_81793;
	BIT_VEC cppVar_81794 = PC + 1;
	cppVar_81794 = (cppVar_81794 & cppMask_un_16_);
	BIT_VEC cppVar_81795 = ROM.rd(cppVar_81794);
	bool cppVar_81797 = (cppVar_81795 == 139);
	if (cppVar_81797) {
	cppVar_81793 = TL1;
	} else {
	BIT_VEC cppVar_81798;
	BIT_VEC cppVar_81799 = PC + 1;
	cppVar_81799 = (cppVar_81799 & cppMask_un_16_);
	BIT_VEC cppVar_81800 = ROM.rd(cppVar_81799);
	bool cppVar_81802 = (cppVar_81800 == 141);
	if (cppVar_81802) {
	cppVar_81798 = TH1;
	} else {
	BIT_VEC cppVar_81803;
	BIT_VEC cppVar_81804 = PC + 1;
	cppVar_81804 = (cppVar_81804 & cppMask_un_16_);
	BIT_VEC cppVar_81805 = ROM.rd(cppVar_81804);
	bool cppVar_81807 = (cppVar_81805 == 144);
	if (cppVar_81807) {
	cppVar_81803 = P1;
	} else {
	BIT_VEC cppVar_81808;
	BIT_VEC cppVar_81809 = PC + 1;
	cppVar_81809 = (cppVar_81809 & cppMask_un_16_);
	BIT_VEC cppVar_81810 = ROM.rd(cppVar_81809);
	bool cppVar_81812 = (cppVar_81810 == 152);
	if (cppVar_81812) {
	cppVar_81808 = SCON;
	} else {
	BIT_VEC cppVar_81813;
	BIT_VEC cppVar_81814 = PC + 1;
	cppVar_81814 = (cppVar_81814 & cppMask_un_16_);
	BIT_VEC cppVar_81815 = ROM.rd(cppVar_81814);
	bool cppVar_81817 = (cppVar_81815 == 153);
	if (cppVar_81817) {
	cppVar_81813 = SBUF;
	} else {
	BIT_VEC cppVar_81818;
	BIT_VEC cppVar_81819 = PC + 1;
	cppVar_81819 = (cppVar_81819 & cppMask_un_16_);
	BIT_VEC cppVar_81820 = ROM.rd(cppVar_81819);
	bool cppVar_81822 = (cppVar_81820 == 160);
	if (cppVar_81822) {
	cppVar_81818 = P2;
	} else {
	BIT_VEC cppVar_81823;
	BIT_VEC cppVar_81824 = PC + 1;
	cppVar_81824 = (cppVar_81824 & cppMask_un_16_);
	BIT_VEC cppVar_81825 = ROM.rd(cppVar_81824);
	bool cppVar_81827 = (cppVar_81825 == 168);
	if (cppVar_81827) {
	cppVar_81823 = IE;
	} else {
	BIT_VEC cppVar_81828;
	BIT_VEC cppVar_81829 = PC + 1;
	cppVar_81829 = (cppVar_81829 & cppMask_un_16_);
	BIT_VEC cppVar_81830 = ROM.rd(cppVar_81829);
	bool cppVar_81832 = (cppVar_81830 == 176);
	if (cppVar_81832) {
	cppVar_81828 = P3;
	} else {
	BIT_VEC cppVar_81833;
	BIT_VEC cppVar_81834 = PC + 1;
	cppVar_81834 = (cppVar_81834 & cppMask_un_16_);
	BIT_VEC cppVar_81835 = ROM.rd(cppVar_81834);
	bool cppVar_81837 = (cppVar_81835 == 184);
	if (cppVar_81837) {
	cppVar_81833 = IP;
	} else {
	BIT_VEC cppVar_81838;
	BIT_VEC cppVar_81839 = PC + 1;
	cppVar_81839 = (cppVar_81839 & cppMask_un_16_);
	BIT_VEC cppVar_81840 = ROM.rd(cppVar_81839);
	bool cppVar_81842 = (cppVar_81840 == 208);
	if (cppVar_81842) {
	cppVar_81838 = PSW;
	} else {
	BIT_VEC cppVar_81843;
	BIT_VEC cppVar_81844 = PC + 1;
	cppVar_81844 = (cppVar_81844 & cppMask_un_16_);
	BIT_VEC cppVar_81845 = ROM.rd(cppVar_81844);
	bool cppVar_81847 = (cppVar_81845 == 224);
	if (cppVar_81847) {
	cppVar_81843 = ACC;
	} else {
	BIT_VEC cppVar_81848;
	BIT_VEC cppVar_81849 = PC + 1;
	cppVar_81849 = (cppVar_81849 & cppMask_un_16_);
	BIT_VEC cppVar_81850 = ROM.rd(cppVar_81849);
	bool cppVar_81852 = (cppVar_81850 == 240);
	if (cppVar_81852) {
	cppVar_81848 = B;
	} else {
	cppVar_81848 = 0;
	}
	cppVar_81843 = cppVar_81848;
	}
	cppVar_81838 = cppVar_81843;
	}
	cppVar_81833 = cppVar_81838;
	}
	cppVar_81828 = cppVar_81833;
	}
	cppVar_81823 = cppVar_81828;
	}
	cppVar_81818 = cppVar_81823;
	}
	cppVar_81813 = cppVar_81818;
	}
	cppVar_81808 = cppVar_81813;
	}
	cppVar_81803 = cppVar_81808;
	}
	cppVar_81798 = cppVar_81803;
	}
	cppVar_81793 = cppVar_81798;
	}
	cppVar_81788 = cppVar_81793;
	}
	cppVar_81783 = cppVar_81788;
	}
	cppVar_81778 = cppVar_81783;
	}
	cppVar_81773 = cppVar_81778;
	}
	cppVar_81768 = cppVar_81773;
	}
	cppVar_81763 = cppVar_81768;
	}
	cppVar_81758 = cppVar_81763;
	}
	cppVar_81753 = cppVar_81758;
	}
	cppVar_81748 = cppVar_81753;
	}
	cppVar_81739 = cppVar_81748;
	}
	BIT_VEC cppVar_81854 = cppVar_81739 | ACC;
	cppVar_81733 = cppVar_81854;
	} else {
	cppVar_81733 = TL1;
	}
	cppVar_81729 = cppVar_81733;
	} else {
	BIT_VEC cppVar_81855;
	BIT_VEC cppVar_81856 = ROM.rd(PC);
	bool cppVar_81858 = (cppVar_81856 == 213);
	BIT_VEC cppVar_81859 = ROM.rd(PC);
	bool cppVar_81861 = (cppVar_81859 == 21);
	bool cppVar_81862 = cppVar_81858 || cppVar_81861;
	if (cppVar_81862) {
	BIT_VEC cppVar_81863;
	BIT_VEC cppVar_81865 = PC + 1;
	cppVar_81865 = (cppVar_81865 & cppMask_un_16_);
	BIT_VEC cppVar_81866 = ROM.rd(cppVar_81865);
	bool cppVar_81868 = (cppVar_81866 == 139);
	if (cppVar_81868) {
	BIT_VEC cppVar_81869;
	BIT_VEC cppVar_81870 = PC + 1;
	cppVar_81870 = (cppVar_81870 & cppMask_un_16_);
	BIT_VEC cppVar_81871 = ROM.rd(cppVar_81870);
	BIT_VEC cppVar_81872 = (cppVar_81871 >> 7) & cppMask_un_1_;
	bool cppVar_81874 = (cppVar_81872 == 0);
	if (cppVar_81874) {
	BIT_VEC cppVar_81875 = PC + 1;
	cppVar_81875 = (cppVar_81875 & cppMask_un_16_);
	BIT_VEC cppVar_81876 = ROM.rd(cppVar_81875);
	BIT_VEC cppVar_81877 = IRAM.rd(cppVar_81876);
	cppVar_81869 = cppVar_81877;
	} else {
	BIT_VEC cppVar_81878;
	BIT_VEC cppVar_81879 = PC + 1;
	cppVar_81879 = (cppVar_81879 & cppMask_un_16_);
	BIT_VEC cppVar_81880 = ROM.rd(cppVar_81879);
	bool cppVar_81882 = (cppVar_81880 == 128);
	if (cppVar_81882) {
	cppVar_81878 = P0;
	} else {
	BIT_VEC cppVar_81883;
	BIT_VEC cppVar_81884 = PC + 1;
	cppVar_81884 = (cppVar_81884 & cppMask_un_16_);
	BIT_VEC cppVar_81885 = ROM.rd(cppVar_81884);
	bool cppVar_81887 = (cppVar_81885 == 129);
	if (cppVar_81887) {
	cppVar_81883 = SP;
	} else {
	BIT_VEC cppVar_81888;
	BIT_VEC cppVar_81889 = PC + 1;
	cppVar_81889 = (cppVar_81889 & cppMask_un_16_);
	BIT_VEC cppVar_81890 = ROM.rd(cppVar_81889);
	bool cppVar_81892 = (cppVar_81890 == 130);
	if (cppVar_81892) {
	cppVar_81888 = DPL;
	} else {
	BIT_VEC cppVar_81893;
	BIT_VEC cppVar_81894 = PC + 1;
	cppVar_81894 = (cppVar_81894 & cppMask_un_16_);
	BIT_VEC cppVar_81895 = ROM.rd(cppVar_81894);
	bool cppVar_81897 = (cppVar_81895 == 131);
	if (cppVar_81897) {
	cppVar_81893 = DPH;
	} else {
	BIT_VEC cppVar_81898;
	BIT_VEC cppVar_81899 = PC + 1;
	cppVar_81899 = (cppVar_81899 & cppMask_un_16_);
	BIT_VEC cppVar_81900 = ROM.rd(cppVar_81899);
	bool cppVar_81902 = (cppVar_81900 == 135);
	if (cppVar_81902) {
	cppVar_81898 = PCON;
	} else {
	BIT_VEC cppVar_81903;
	BIT_VEC cppVar_81904 = PC + 1;
	cppVar_81904 = (cppVar_81904 & cppMask_un_16_);
	BIT_VEC cppVar_81905 = ROM.rd(cppVar_81904);
	bool cppVar_81907 = (cppVar_81905 == 136);
	if (cppVar_81907) {
	cppVar_81903 = TCON;
	} else {
	BIT_VEC cppVar_81908;
	BIT_VEC cppVar_81909 = PC + 1;
	cppVar_81909 = (cppVar_81909 & cppMask_un_16_);
	BIT_VEC cppVar_81910 = ROM.rd(cppVar_81909);
	bool cppVar_81912 = (cppVar_81910 == 137);
	if (cppVar_81912) {
	cppVar_81908 = TMOD;
	} else {
	BIT_VEC cppVar_81913;
	BIT_VEC cppVar_81914 = PC + 1;
	cppVar_81914 = (cppVar_81914 & cppMask_un_16_);
	BIT_VEC cppVar_81915 = ROM.rd(cppVar_81914);
	bool cppVar_81917 = (cppVar_81915 == 138);
	if (cppVar_81917) {
	cppVar_81913 = TL0;
	} else {
	BIT_VEC cppVar_81918;
	BIT_VEC cppVar_81919 = PC + 1;
	cppVar_81919 = (cppVar_81919 & cppMask_un_16_);
	BIT_VEC cppVar_81920 = ROM.rd(cppVar_81919);
	bool cppVar_81922 = (cppVar_81920 == 140);
	if (cppVar_81922) {
	cppVar_81918 = TH0;
	} else {
	BIT_VEC cppVar_81923;
	BIT_VEC cppVar_81924 = PC + 1;
	cppVar_81924 = (cppVar_81924 & cppMask_un_16_);
	BIT_VEC cppVar_81925 = ROM.rd(cppVar_81924);
	bool cppVar_81927 = (cppVar_81925 == 139);
	if (cppVar_81927) {
	cppVar_81923 = TL1;
	} else {
	BIT_VEC cppVar_81928;
	BIT_VEC cppVar_81929 = PC + 1;
	cppVar_81929 = (cppVar_81929 & cppMask_un_16_);
	BIT_VEC cppVar_81930 = ROM.rd(cppVar_81929);
	bool cppVar_81932 = (cppVar_81930 == 141);
	if (cppVar_81932) {
	cppVar_81928 = TH1;
	} else {
	BIT_VEC cppVar_81933;
	BIT_VEC cppVar_81934 = PC + 1;
	cppVar_81934 = (cppVar_81934 & cppMask_un_16_);
	BIT_VEC cppVar_81935 = ROM.rd(cppVar_81934);
	bool cppVar_81937 = (cppVar_81935 == 144);
	if (cppVar_81937) {
	cppVar_81933 = P1;
	} else {
	BIT_VEC cppVar_81938;
	BIT_VEC cppVar_81939 = PC + 1;
	cppVar_81939 = (cppVar_81939 & cppMask_un_16_);
	BIT_VEC cppVar_81940 = ROM.rd(cppVar_81939);
	bool cppVar_81942 = (cppVar_81940 == 152);
	if (cppVar_81942) {
	cppVar_81938 = SCON;
	} else {
	BIT_VEC cppVar_81943;
	BIT_VEC cppVar_81944 = PC + 1;
	cppVar_81944 = (cppVar_81944 & cppMask_un_16_);
	BIT_VEC cppVar_81945 = ROM.rd(cppVar_81944);
	bool cppVar_81947 = (cppVar_81945 == 153);
	if (cppVar_81947) {
	cppVar_81943 = SBUF;
	} else {
	BIT_VEC cppVar_81948;
	BIT_VEC cppVar_81949 = PC + 1;
	cppVar_81949 = (cppVar_81949 & cppMask_un_16_);
	BIT_VEC cppVar_81950 = ROM.rd(cppVar_81949);
	bool cppVar_81952 = (cppVar_81950 == 160);
	if (cppVar_81952) {
	cppVar_81948 = P2;
	} else {
	BIT_VEC cppVar_81953;
	BIT_VEC cppVar_81954 = PC + 1;
	cppVar_81954 = (cppVar_81954 & cppMask_un_16_);
	BIT_VEC cppVar_81955 = ROM.rd(cppVar_81954);
	bool cppVar_81957 = (cppVar_81955 == 168);
	if (cppVar_81957) {
	cppVar_81953 = IE;
	} else {
	BIT_VEC cppVar_81958;
	BIT_VEC cppVar_81959 = PC + 1;
	cppVar_81959 = (cppVar_81959 & cppMask_un_16_);
	BIT_VEC cppVar_81960 = ROM.rd(cppVar_81959);
	bool cppVar_81962 = (cppVar_81960 == 176);
	if (cppVar_81962) {
	cppVar_81958 = P3;
	} else {
	BIT_VEC cppVar_81963;
	BIT_VEC cppVar_81964 = PC + 1;
	cppVar_81964 = (cppVar_81964 & cppMask_un_16_);
	BIT_VEC cppVar_81965 = ROM.rd(cppVar_81964);
	bool cppVar_81967 = (cppVar_81965 == 184);
	if (cppVar_81967) {
	cppVar_81963 = IP;
	} else {
	BIT_VEC cppVar_81968;
	BIT_VEC cppVar_81969 = PC + 1;
	cppVar_81969 = (cppVar_81969 & cppMask_un_16_);
	BIT_VEC cppVar_81970 = ROM.rd(cppVar_81969);
	bool cppVar_81972 = (cppVar_81970 == 208);
	if (cppVar_81972) {
	cppVar_81968 = PSW;
	} else {
	BIT_VEC cppVar_81973;
	BIT_VEC cppVar_81974 = PC + 1;
	cppVar_81974 = (cppVar_81974 & cppMask_un_16_);
	BIT_VEC cppVar_81975 = ROM.rd(cppVar_81974);
	bool cppVar_81977 = (cppVar_81975 == 224);
	if (cppVar_81977) {
	cppVar_81973 = ACC;
	} else {
	BIT_VEC cppVar_81978;
	BIT_VEC cppVar_81979 = PC + 1;
	cppVar_81979 = (cppVar_81979 & cppMask_un_16_);
	BIT_VEC cppVar_81980 = ROM.rd(cppVar_81979);
	bool cppVar_81982 = (cppVar_81980 == 240);
	if (cppVar_81982) {
	cppVar_81978 = B;
	} else {
	cppVar_81978 = 0;
	}
	cppVar_81973 = cppVar_81978;
	}
	cppVar_81968 = cppVar_81973;
	}
	cppVar_81963 = cppVar_81968;
	}
	cppVar_81958 = cppVar_81963;
	}
	cppVar_81953 = cppVar_81958;
	}
	cppVar_81948 = cppVar_81953;
	}
	cppVar_81943 = cppVar_81948;
	}
	cppVar_81938 = cppVar_81943;
	}
	cppVar_81933 = cppVar_81938;
	}
	cppVar_81928 = cppVar_81933;
	}
	cppVar_81923 = cppVar_81928;
	}
	cppVar_81918 = cppVar_81923;
	}
	cppVar_81913 = cppVar_81918;
	}
	cppVar_81908 = cppVar_81913;
	}
	cppVar_81903 = cppVar_81908;
	}
	cppVar_81898 = cppVar_81903;
	}
	cppVar_81893 = cppVar_81898;
	}
	cppVar_81888 = cppVar_81893;
	}
	cppVar_81883 = cppVar_81888;
	}
	cppVar_81878 = cppVar_81883;
	}
	cppVar_81869 = cppVar_81878;
	}
	BIT_VEC cppVar_81985 = cppVar_81869 - 1;
	cppVar_81985 = (cppVar_81985 & cppMask_un_8_);
	cppVar_81863 = cppVar_81985;
	} else {
	cppVar_81863 = TL1;
	}
	cppVar_81855 = cppVar_81863;
	} else {
	BIT_VEC cppVar_81986;
	BIT_VEC cppVar_81987 = ROM.rd(PC);
	bool cppVar_81989 = (cppVar_81987 == 5);
	if (cppVar_81989) {
	BIT_VEC cppVar_81990;
	BIT_VEC cppVar_81992 = PC + 1;
	cppVar_81992 = (cppVar_81992 & cppMask_un_16_);
	BIT_VEC cppVar_81993 = ROM.rd(cppVar_81992);
	bool cppVar_81995 = (cppVar_81993 == 139);
	if (cppVar_81995) {
	BIT_VEC cppVar_81996;
	BIT_VEC cppVar_81997 = PC + 1;
	cppVar_81997 = (cppVar_81997 & cppMask_un_16_);
	BIT_VEC cppVar_81998 = ROM.rd(cppVar_81997);
	BIT_VEC cppVar_81999 = (cppVar_81998 >> 7) & cppMask_un_1_;
	bool cppVar_82001 = (cppVar_81999 == 0);
	if (cppVar_82001) {
	BIT_VEC cppVar_82002 = PC + 1;
	cppVar_82002 = (cppVar_82002 & cppMask_un_16_);
	BIT_VEC cppVar_82003 = ROM.rd(cppVar_82002);
	BIT_VEC cppVar_82004 = IRAM.rd(cppVar_82003);
	cppVar_81996 = cppVar_82004;
	} else {
	BIT_VEC cppVar_82005;
	BIT_VEC cppVar_82006 = PC + 1;
	cppVar_82006 = (cppVar_82006 & cppMask_un_16_);
	BIT_VEC cppVar_82007 = ROM.rd(cppVar_82006);
	bool cppVar_82009 = (cppVar_82007 == 128);
	if (cppVar_82009) {
	cppVar_82005 = P0;
	} else {
	BIT_VEC cppVar_82010;
	BIT_VEC cppVar_82011 = PC + 1;
	cppVar_82011 = (cppVar_82011 & cppMask_un_16_);
	BIT_VEC cppVar_82012 = ROM.rd(cppVar_82011);
	bool cppVar_82014 = (cppVar_82012 == 129);
	if (cppVar_82014) {
	cppVar_82010 = SP;
	} else {
	BIT_VEC cppVar_82015;
	BIT_VEC cppVar_82016 = PC + 1;
	cppVar_82016 = (cppVar_82016 & cppMask_un_16_);
	BIT_VEC cppVar_82017 = ROM.rd(cppVar_82016);
	bool cppVar_82019 = (cppVar_82017 == 130);
	if (cppVar_82019) {
	cppVar_82015 = DPL;
	} else {
	BIT_VEC cppVar_82020;
	BIT_VEC cppVar_82021 = PC + 1;
	cppVar_82021 = (cppVar_82021 & cppMask_un_16_);
	BIT_VEC cppVar_82022 = ROM.rd(cppVar_82021);
	bool cppVar_82024 = (cppVar_82022 == 131);
	if (cppVar_82024) {
	cppVar_82020 = DPH;
	} else {
	BIT_VEC cppVar_82025;
	BIT_VEC cppVar_82026 = PC + 1;
	cppVar_82026 = (cppVar_82026 & cppMask_un_16_);
	BIT_VEC cppVar_82027 = ROM.rd(cppVar_82026);
	bool cppVar_82029 = (cppVar_82027 == 135);
	if (cppVar_82029) {
	cppVar_82025 = PCON;
	} else {
	BIT_VEC cppVar_82030;
	BIT_VEC cppVar_82031 = PC + 1;
	cppVar_82031 = (cppVar_82031 & cppMask_un_16_);
	BIT_VEC cppVar_82032 = ROM.rd(cppVar_82031);
	bool cppVar_82034 = (cppVar_82032 == 136);
	if (cppVar_82034) {
	cppVar_82030 = TCON;
	} else {
	BIT_VEC cppVar_82035;
	BIT_VEC cppVar_82036 = PC + 1;
	cppVar_82036 = (cppVar_82036 & cppMask_un_16_);
	BIT_VEC cppVar_82037 = ROM.rd(cppVar_82036);
	bool cppVar_82039 = (cppVar_82037 == 137);
	if (cppVar_82039) {
	cppVar_82035 = TMOD;
	} else {
	BIT_VEC cppVar_82040;
	BIT_VEC cppVar_82041 = PC + 1;
	cppVar_82041 = (cppVar_82041 & cppMask_un_16_);
	BIT_VEC cppVar_82042 = ROM.rd(cppVar_82041);
	bool cppVar_82044 = (cppVar_82042 == 138);
	if (cppVar_82044) {
	cppVar_82040 = TL0;
	} else {
	BIT_VEC cppVar_82045;
	BIT_VEC cppVar_82046 = PC + 1;
	cppVar_82046 = (cppVar_82046 & cppMask_un_16_);
	BIT_VEC cppVar_82047 = ROM.rd(cppVar_82046);
	bool cppVar_82049 = (cppVar_82047 == 140);
	if (cppVar_82049) {
	cppVar_82045 = TH0;
	} else {
	BIT_VEC cppVar_82050;
	BIT_VEC cppVar_82051 = PC + 1;
	cppVar_82051 = (cppVar_82051 & cppMask_un_16_);
	BIT_VEC cppVar_82052 = ROM.rd(cppVar_82051);
	bool cppVar_82054 = (cppVar_82052 == 139);
	if (cppVar_82054) {
	cppVar_82050 = TL1;
	} else {
	BIT_VEC cppVar_82055;
	BIT_VEC cppVar_82056 = PC + 1;
	cppVar_82056 = (cppVar_82056 & cppMask_un_16_);
	BIT_VEC cppVar_82057 = ROM.rd(cppVar_82056);
	bool cppVar_82059 = (cppVar_82057 == 141);
	if (cppVar_82059) {
	cppVar_82055 = TH1;
	} else {
	BIT_VEC cppVar_82060;
	BIT_VEC cppVar_82061 = PC + 1;
	cppVar_82061 = (cppVar_82061 & cppMask_un_16_);
	BIT_VEC cppVar_82062 = ROM.rd(cppVar_82061);
	bool cppVar_82064 = (cppVar_82062 == 144);
	if (cppVar_82064) {
	cppVar_82060 = P1;
	} else {
	BIT_VEC cppVar_82065;
	BIT_VEC cppVar_82066 = PC + 1;
	cppVar_82066 = (cppVar_82066 & cppMask_un_16_);
	BIT_VEC cppVar_82067 = ROM.rd(cppVar_82066);
	bool cppVar_82069 = (cppVar_82067 == 152);
	if (cppVar_82069) {
	cppVar_82065 = SCON;
	} else {
	BIT_VEC cppVar_82070;
	BIT_VEC cppVar_82071 = PC + 1;
	cppVar_82071 = (cppVar_82071 & cppMask_un_16_);
	BIT_VEC cppVar_82072 = ROM.rd(cppVar_82071);
	bool cppVar_82074 = (cppVar_82072 == 153);
	if (cppVar_82074) {
	cppVar_82070 = SBUF;
	} else {
	BIT_VEC cppVar_82075;
	BIT_VEC cppVar_82076 = PC + 1;
	cppVar_82076 = (cppVar_82076 & cppMask_un_16_);
	BIT_VEC cppVar_82077 = ROM.rd(cppVar_82076);
	bool cppVar_82079 = (cppVar_82077 == 160);
	if (cppVar_82079) {
	cppVar_82075 = P2;
	} else {
	BIT_VEC cppVar_82080;
	BIT_VEC cppVar_82081 = PC + 1;
	cppVar_82081 = (cppVar_82081 & cppMask_un_16_);
	BIT_VEC cppVar_82082 = ROM.rd(cppVar_82081);
	bool cppVar_82084 = (cppVar_82082 == 168);
	if (cppVar_82084) {
	cppVar_82080 = IE;
	} else {
	BIT_VEC cppVar_82085;
	BIT_VEC cppVar_82086 = PC + 1;
	cppVar_82086 = (cppVar_82086 & cppMask_un_16_);
	BIT_VEC cppVar_82087 = ROM.rd(cppVar_82086);
	bool cppVar_82089 = (cppVar_82087 == 176);
	if (cppVar_82089) {
	cppVar_82085 = P3;
	} else {
	BIT_VEC cppVar_82090;
	BIT_VEC cppVar_82091 = PC + 1;
	cppVar_82091 = (cppVar_82091 & cppMask_un_16_);
	BIT_VEC cppVar_82092 = ROM.rd(cppVar_82091);
	bool cppVar_82094 = (cppVar_82092 == 184);
	if (cppVar_82094) {
	cppVar_82090 = IP;
	} else {
	BIT_VEC cppVar_82095;
	BIT_VEC cppVar_82096 = PC + 1;
	cppVar_82096 = (cppVar_82096 & cppMask_un_16_);
	BIT_VEC cppVar_82097 = ROM.rd(cppVar_82096);
	bool cppVar_82099 = (cppVar_82097 == 208);
	if (cppVar_82099) {
	cppVar_82095 = PSW;
	} else {
	BIT_VEC cppVar_82100;
	BIT_VEC cppVar_82101 = PC + 1;
	cppVar_82101 = (cppVar_82101 & cppMask_un_16_);
	BIT_VEC cppVar_82102 = ROM.rd(cppVar_82101);
	bool cppVar_82104 = (cppVar_82102 == 224);
	if (cppVar_82104) {
	cppVar_82100 = ACC;
	} else {
	BIT_VEC cppVar_82105;
	BIT_VEC cppVar_82106 = PC + 1;
	cppVar_82106 = (cppVar_82106 & cppMask_un_16_);
	BIT_VEC cppVar_82107 = ROM.rd(cppVar_82106);
	bool cppVar_82109 = (cppVar_82107 == 240);
	if (cppVar_82109) {
	cppVar_82105 = B;
	} else {
	cppVar_82105 = 0;
	}
	cppVar_82100 = cppVar_82105;
	}
	cppVar_82095 = cppVar_82100;
	}
	cppVar_82090 = cppVar_82095;
	}
	cppVar_82085 = cppVar_82090;
	}
	cppVar_82080 = cppVar_82085;
	}
	cppVar_82075 = cppVar_82080;
	}
	cppVar_82070 = cppVar_82075;
	}
	cppVar_82065 = cppVar_82070;
	}
	cppVar_82060 = cppVar_82065;
	}
	cppVar_82055 = cppVar_82060;
	}
	cppVar_82050 = cppVar_82055;
	}
	cppVar_82045 = cppVar_82050;
	}
	cppVar_82040 = cppVar_82045;
	}
	cppVar_82035 = cppVar_82040;
	}
	cppVar_82030 = cppVar_82035;
	}
	cppVar_82025 = cppVar_82030;
	}
	cppVar_82020 = cppVar_82025;
	}
	cppVar_82015 = cppVar_82020;
	}
	cppVar_82010 = cppVar_82015;
	}
	cppVar_82005 = cppVar_82010;
	}
	cppVar_81996 = cppVar_82005;
	}
	BIT_VEC cppVar_82112 = cppVar_81996 + 1;
	cppVar_82112 = (cppVar_82112 & cppMask_un_8_);
	cppVar_81990 = cppVar_82112;
	} else {
	cppVar_81990 = TL1;
	}
	cppVar_81986 = cppVar_81990;
	} else {
	cppVar_81986 = TL1;
	}
	cppVar_81855 = cppVar_81986;
	}
	cppVar_81729 = cppVar_81855;
	}
	cppVar_81600 = cppVar_81729;
	}
	cppVar_81474 = cppVar_81600;
	}
	cppVar_81345 = cppVar_81474;
	}
	cppVar_81219 = cppVar_81345;
	}
	cppVar_81090 = cppVar_81219;
	}
	cppVar_81077 = cppVar_81090;
	}
	cppVar_80951 = cppVar_81077;
	}
	cppVar_80934 = cppVar_80951;
	}
	cppVar_80917 = cppVar_80934;
	}
	cppVar_80767 = cppVar_80917;
	}
	cppVar_80617 = cppVar_80767;
	}
	cppVar_80467 = cppVar_80617;
	}
	cppVar_80317 = cppVar_80467;
	}
	cppVar_80167 = cppVar_80317;
	}
	cppVar_80017 = cppVar_80167;
	}
	cppVar_79867 = cppVar_80017;
	}
	cppVar_79717 = cppVar_79867;
	}
	cppVar_79703 = cppVar_79717;
	}
	cppVar_79692 = cppVar_79703;
	}
	return cppVar_79692;
}
