extern unsigned int lbl_82169D70;
extern unsigned int lbl_832635DC;
extern unsigned int lbl_832635E0;
extern unsigned int lbl_832635E4;
extern unsigned int lbl_832635E8;
extern unsigned int lbl_832635EC;
extern unsigned int lbl_832635F0;
extern unsigned int lbl_832635F4;
extern unsigned int lbl_832635F8;
extern unsigned int lbl_832635FC;
extern unsigned int lbl_83263600;
extern unsigned int lbl_83263604;
extern unsigned int lbl_83263608;
extern unsigned int lbl_8326360C;


__int64 fn_82F724D8(__int64 param_1)

{
  if ((lbl_8326360C & 1) == 0) {
    lbl_8326360C = lbl_8326360C | 1;
    lbl_832635DC = &lbl_82169D70;
    lbl_832635E0 = 0;
    lbl_832635E8 = &lbl_82169D70;
    lbl_832635E4 = 0;
    lbl_832635F4 = &lbl_82169D70;
    lbl_83263600 = &lbl_82169D70;
    lbl_832635EC = 1;
    lbl_832635F0 = 4;
    lbl_832635F8 = 2;
    lbl_832635FC = 0;
    lbl_83263604 = 3;
    lbl_83263608 = 0;
  }
  if ((-1 < (int)param_1) && ((int)param_1 < 4)) {
    return param_1 * 0xc + -0x7cd9ca24;
  }
  return -0x7cd9ca00;
}

