extern int fn_829C8918();
extern int fn_82F655D8();
extern unsigned int lbl_82002C40;
extern unsigned int lbl_82028800;
extern unsigned int lbl_820570D4;
extern unsigned int lbl_820570E0;
extern unsigned int lbl_820570E4;
extern unsigned int lbl_820570E8;
extern unsigned int lbl_83214FFC;
extern unsigned int lbl_832156B0;
extern unsigned int lbl_832156C4;
extern unsigned int lbl_832156C8;
extern unsigned int lbl_832156EC;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_829C8DF8(double param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  double dVar1;
  
  if (param_3 < 2) {
    if (lbl_83214FFC == 0) {
      return 0xffffffff8000ffff;
    }
    if ((((param_2 == 0) && (param_4 < 9)) && (param_4 != 1)) &&
       (((param_4 != 2 && (param_4 != 3)) && (param_4 != 4)))) {
      if (param_4 == 5) {
        if (((double)lbl_820570E8 <= param_1) && (param_1 <= (double)lbl_820570E4)) {
          (&lbl_832156C4)[param_3 * 0x61] = (int)(param_1 * (double)lbl_820570D4);
          fn_829C8918(param_3);
          return 0;
        }
      }
      else if (((param_4 == 6) || (param_4 == 7)) || (param_4 != 0)) {
        if (((*(int *)(&lbl_832156C8 + param_3 * 0x184) != 1) && ((double)lbl_820570E0 <= param_1))
           && (param_1 <= (double)lbl_82028800)) {
          dVar1 = (double)fn_82F655D8(lbl_82002C40);
          *(int *)(&lbl_832156C8 + (param_3 * 0x61 + param_4) * 4) =
               (int)((float)dVar1 * lbl_820570D4);
          (&lbl_832156B0)[param_3 * 0x61] =
               2 << (param_4 - 6 & 0x3f) | (&lbl_832156B0)[param_3 * 0x61];
          fn_829C8918(param_3);
          return 0;
        }
      }
      else if (*(int *)(&lbl_832156C8 + param_3 * 0x184) != 1) {
        dVar1 = (double)lbl_820570D4;
        (&lbl_832156B0)[param_3 * 0x61] = (&lbl_832156B0)[param_3 * 0x61] | 1;
        (&lbl_832156EC)[param_3 * 0x61] = (int)(param_1 * dVar1);
        fn_829C8918(param_3);
        return 0;
      }
    }
  }
  return 0xffffffff80070057;
}

