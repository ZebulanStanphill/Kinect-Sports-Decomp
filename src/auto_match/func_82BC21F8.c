extern unsigned int lbl_82002AE0;


int fn_82BC21F8(double param_1,unsigned __int64 param_2,int param_3,unsigned int param_4)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)(__int64)(-1 << (param_3 - 1U & 0x3f));
  dVar1 = (double)((float)(__int64)(1 << (param_3 - 1U & 0x3f)) -
                  lbl_82002AE0 / (float)(__int64)(1 << (param_4 - 1 & 0x3f)));
  if (dVar1 < param_1) {
    param_1 = dVar1;
  }
  if (param_1 < dVar2) {
    param_1 = dVar2;
  }
  return (int)((double)(__int64)(1 << (param_4 & 0x3f)) * param_1);
}

