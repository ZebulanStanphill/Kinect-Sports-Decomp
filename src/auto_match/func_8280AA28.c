extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005C88;
extern unsigned int lbl_8201DF54;
extern unsigned int lbl_8201DF58;
extern unsigned int lbl_8201DF5C;
extern unsigned int lbl_8201DF60;
extern unsigned int lbl_8201DF64;
extern unsigned int lbl_8201DF68;
extern unsigned int lbl_8201DF70;
extern unsigned int lbl_8201DFEC;
extern unsigned int lbl_821AAD20;


double fn_8280AA28(double param_1)

{
  float fVar1;
  unsigned int uVar2;
  double dVar3;
  short sStack_a;
  
  if (param_1 < (double)lbl_8201DF70) {
    return (double)lbl_821AAD20;
  }
  if (param_1 < (double)lbl_8201DFEC) {
    sStack_a = (short)(int)param_1;
    uVar2 = (int)param_1 & 0xffff;
    dVar3 = (double)(float)(param_1 - (double)(__int64)(int)sStack_a);
    fVar1 = lbl_82002AE0;
    if (dVar3 != (double)lbl_821AAD20) {
      if (param_1 < (double)lbl_821AAD20) {
        uVar2 = (unsigned int)(short)(sStack_a + -1);
        dVar3 = (double)(float)(dVar3 + (double)lbl_82002AE0);
      }
      fVar1 = (float)((double)(float)((double)(float)((double)(float)((double)(float)(dVar3 * (
                                                  double)lbl_8201DF68 + (double)lbl_8201DF64) *
                                                  dVar3 + (double)lbl_8201DF60) * dVar3 +
                                                  (double)lbl_8201DF5C) * dVar3 +
                                     (double)lbl_8201DF58) * dVar3 + (double)lbl_8201DF54);
    }
    return (double)(float)(uVar2 * 0x800000 + (int)fVar1);
  }
  return (double)lbl_82005C88;
}

