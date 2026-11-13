extern unsigned int lbl_8201543C;
extern unsigned int lbl_8201DDF4;
extern unsigned int lbl_82022E58;
extern unsigned int lbl_82022E5C;
extern unsigned int lbl_82022E64;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double fn_8287C238(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  
  fVar3 = lbl_82022E58;
  fVar2 = lbl_8201543C;
  fVar1 = *param_1;
  if ((lbl_8201DDF4 <= fVar1) && (fVar1 <= lbl_82022E64)) {
    while (fVar1 < fVar3) {
      fVar1 = *param_1 + fVar2;
      *param_1 = fVar1;
    }
    dVar4 = (double)lbl_82022E5C;
    while (dVar4 <= (double)*param_1) {
      *param_1 = *param_1 - fVar2;
    }
    return (double)*param_1;
  }
  dVar4 = (double)lbl_821AAD20;
  *param_1 = lbl_821AAD20;
  return dVar4;
}

