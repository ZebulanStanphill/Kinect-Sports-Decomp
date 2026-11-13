extern unsigned int lbl_82011638;
extern unsigned int lbl_8201435C;


void fn_82755510(double param_1,int param_2)

{
  if (param_1 < (double)lbl_8201435C) {
    if (((__int64)(param_1 * (double)lbl_82011638) & 0xfU) != 0) {
      *(unsigned short *)(param_2 + 4) =
           (unsigned short)(__int64)(param_1 * (double)lbl_82011638) & 0xfff |
           *(unsigned short *)(param_2 + 4) & 0xf000;
      *(unsigned short *)(param_2 + 6) = *(unsigned short *)(param_2 + 6) | 0x10;
      return;
    }
  }
  *(unsigned short *)(param_2 + 4) = (unsigned short)(__int64)param_1 & 0xfff | *(unsigned short *)(param_2 + 4) & 0xf000;
  *(unsigned short *)(param_2 + 6) = *(unsigned short *)(param_2 + 6) & 0xffef;
  return;
}

