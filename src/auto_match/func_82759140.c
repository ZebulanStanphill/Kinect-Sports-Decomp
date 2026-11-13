extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82759140(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_1[2];
  fVar2 = *param_1;
  fVar3 = param_1[1];
  fVar5 = fVar2 * fVar2;
  param_1[3] = fVar5;
  fVar7 = lbl_821AAD20;
  fVar6 = lbl_82002AE0;
  fVar4 = fVar5 - (fVar3 * fVar3 + fVar1 * fVar1);
  if (fVar4 == lbl_821AAD20) {
    if (fVar3 != lbl_821AAD20) {
      if (lbl_821AAD20 <= fVar3) {
        fVar3 = fVar3 - lbl_82002AE0;
      }
      else {
        fVar3 = fVar3 + lbl_82002AE0;
      }
      param_1[1] = fVar3;
    }
    if (fVar1 != fVar7) {
      if (fVar7 <= fVar1) {
        fVar1 = fVar1 - fVar6;
      }
      else {
        fVar1 = fVar1 + fVar6;
      }
      param_1[2] = fVar1;
    }
    fVar4 = fVar5 - (param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  }
  param_1[4] = fVar2 / fVar4;
  return;
}

