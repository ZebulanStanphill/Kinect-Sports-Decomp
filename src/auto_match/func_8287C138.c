extern unsigned int lbl_8201543C;
extern unsigned int lbl_8201DDF4;
extern unsigned int lbl_82022E64;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_8287C138(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  
  fVar4 = lbl_821AAD20;
  fVar3 = lbl_8201543C;
  fVar1 = *param_1;
  if ((lbl_8201DDF4 <= fVar1) && (fVar1 <= lbl_82022E64)) {
    while (fVar2 = *param_1, fVar1 < fVar4) {
      fVar1 = fVar2 + fVar3;
      *param_1 = fVar1;
    }
    while (fVar3 <= fVar2) {
      fVar2 = *param_1 - fVar3;
      *param_1 = fVar2;
    }
    return (double)*param_1;
  }
  dVar5 = (double)lbl_821AAD20;
  *param_1 = lbl_821AAD20;
  return dVar5;
}

