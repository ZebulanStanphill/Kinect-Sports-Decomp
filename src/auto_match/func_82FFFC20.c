extern int fn_82F65350();
extern unsigned int lbl_8217BB90;
extern unsigned int lbl_821AAD20;


double fn_82FFFC20(float *param_1)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  dVar3 = (double)(param_1[1] - *param_1);
  if (dVar3 == (double)lbl_821AAD20) {
    fVar1 = (float)((double)*param_1 + (double)lbl_821AAD20);
  }
  else {
    iVar2 = fn_82F65350();
    fVar1 = *param_1 + (float)((double)(__int64)iVar2 * lbl_8217BB90 * dVar3);
  }
  return (double)fVar1;
}

