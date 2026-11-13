extern unsigned int *auStack_40;
extern int fn_82810280();
extern int fn_828102A8();
extern int fn_82810308();
extern int fn_82810590();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_827EC650(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  float fVar1;
  double dVar2;
  double dVar3;
  unsigned char auStack_40 [1];

  dVar2 = (double)fn_82810308();
  dVar3 = (double)fn_82810280(param_1,param_2);
  dVar2 = (double)(float)(dVar2 - dVar3);
  if ((double)lbl_821AAD20 <= dVar2) {
    dVar3 = (double)fn_82810308(param_2);
    if (dVar3 <= dVar2) {
      dVar2 = (double)fn_82810308(param_2);
      if ((double)lbl_82002AE0 < dVar2) {
        return 0;
      }
      return 1;
    }
    fn_828102A8(-dVar3,param_1,auStack_40);
    fn_82810590(dVar2,param_2,auStack_40,param_3,auStack_40);
    dVar2 = (double)fn_82810308(auStack_40);
    fVar1 = (float)(dVar3 * dVar3);
  }
  else {
    dVar2 = (double)fn_82810308(param_1);
    fVar1 = lbl_82002AE0;
  }
  if ((double)fVar1 < dVar2) {
    return 0;
  }
  return 1;
}
