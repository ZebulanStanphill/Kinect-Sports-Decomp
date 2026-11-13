extern int fn_82539560();
extern unsigned int lbl_821917C0;
extern unsigned int lbl_821917D4;
extern unsigned int lbl_82191FC8;
extern unsigned int lbl_821922C0;
extern unsigned int lbl_821922C4;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821922D4;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82195530;
extern unsigned int ltcg_pool_0_0f;


double fn_823D2A60(double param_1,int param_2)

{
  float fVar1;
  
  if ((param_2 != 3) && (param_2 != 2)) {
    if (param_2 < 9) {
      if (6 < param_2) {
        if ((double)(float)(param_1 * (double)lbl_82191FC8) < (double)lbl_82192604) {
          return (double)(float)(param_1 * (double)lbl_82191FC8);
        }
        return (double)lbl_82192604;
      }
      fVar1 = lbl_821917C0;
      if (param_2 == 1) {
LAB_823d2b44:
        return (double)(float)(param_1 * (double)fVar1);
      }
      if ((4 < param_2) && (param_2 < 7)) {
                    /* WARNING: Subroutine does not return */
        fn_82539560(param_1,(double)lbl_821922D0,(double)lbl_821922D4,(double)lbl_821922C0,
                     (double)lbl_821922C4);
      }
    }
    else {
      fVar1 = lbl_821917D4;
      if (param_2 == 0xb) goto LAB_823d2b44;
      if ((0xb < param_2) && (param_2 < 0x10)) {
        return (double)lbl_82195530;
      }
    }
  }
  return (double)ltcg_pool_0_0f;
}

