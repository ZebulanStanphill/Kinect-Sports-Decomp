extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8268CD40(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar2 = lbl_821AAD20;
  fVar1 = *param_2 * param_2[4] - param_2[1] * param_2[3];
  if (fVar1 == lbl_821AAD20) {
    param_1[2] = lbl_821AAD20;
    param_1[5] = fVar2;
    param_1[1] = fVar2;
    param_1[3] = fVar2;
    fVar1 = lbl_82002AE0;
    *param_1 = lbl_82002AE0;
    param_1[4] = fVar1;
    param_1[2] = -param_2[2];
    fVar1 = param_2[5];
  }
  else {
    fVar1 = lbl_82002AE0 / fVar1;
    *param_1 = param_2[4] * fVar1;
    param_1[4] = *param_2 * fVar1;
    param_1[1] = -(param_2[1] * fVar1);
    param_1[3] = -(param_2[3] * fVar1);
    param_1[2] = -(param_2[2] * *param_1 + param_2[5] * param_1[1]);
    fVar1 = param_2[5] * param_1[4] + param_2[2] * param_1[3];
  }
  param_1[5] = -fVar1;
  return;
}

