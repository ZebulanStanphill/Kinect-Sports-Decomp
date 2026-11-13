extern unsigned int lbl_82057B9C;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64 fn_829E59D8(double param_1,double param_2,double param_3,double param_4,int *param_5)

{
  unsigned int *in_r8;
  double dVar1;
  double dVar2;
  double dVar3;
  
  if ((double)lbl_821AAD20 < param_4) {
    if (in_r8 == (unsigned int *)0x0) {
      return 0xffffffff80070057;
    }
    if (*param_5 != 0) {
      dVar1 = (double)(float)((double)(float)(param_2 / param_4) * param_1);
      dVar2 = dVar1;
      if (dVar1 < param_3) {
        dVar2 = param_3;
      }
      if (param_3 < dVar1) {
        dVar1 = param_3;
      }
      dVar3 = (double)lbl_82057B9C;
      if (dVar1 <= dVar3) {
        dVar1 = dVar3;
      }
      *in_r8 = (unsigned int)(dVar3 < (double)(float)((double)(float)(dVar2 / dVar1) - dVar3));
      return 0;
    }
  }
  return 0xffffffff8000ffff;
}

