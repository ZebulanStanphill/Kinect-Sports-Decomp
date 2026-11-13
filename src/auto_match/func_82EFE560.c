extern unsigned int lbl_82005758;
extern unsigned int lbl_82015610;
extern unsigned int lbl_82160710;
extern unsigned int lbl_82160718;


double fn_82EFE560(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,__int64 param_4,
                    __int64 param_5)

{
  int iVar1;
  double dVar2;
  double dVar3;
  
  iVar1 = (int)(param_5 - param_4);
  if (-1 < param_5 - param_4) {
    dVar2 = ((double)(__int64)iVar1 / (double)(__int64)(int)param_4) * param_1 * lbl_82160710;
    if (param_1 * lbl_82160718 <= dVar2) {
      return dVar2;
    }
    return param_1 * lbl_82160718;
  }
  dVar3 = -((double)(__int64)iVar1 / (double)(__int64)(int)param_5);
  dVar2 = dVar3 * param_1 * lbl_82015610;
  if (dVar3 <= lbl_82005758) {
    return dVar2;
  }
  return dVar2 + lbl_82005758;
}

