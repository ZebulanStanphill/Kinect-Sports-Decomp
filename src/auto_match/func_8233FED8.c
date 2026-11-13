void fn_8233FED8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = *param_2;
  if ((*param_1 < fVar1) && (param_2 != param_1)) {
    *param_2 = *param_1;
    *param_1 = fVar1;
    fVar1 = param_2[1];
    param_2[1] = param_1[1];
    param_1[1] = fVar1;
  }
  fVar1 = *param_3;
  if ((*param_2 < fVar1) && (param_3 != param_2)) {
    *param_3 = *param_2;
    *param_2 = fVar1;
    fVar1 = param_3[1];
    param_3[1] = param_2[1];
    param_2[1] = fVar1;
  }
  fVar1 = *param_2;
  if (fVar1 <= *param_1) {
    return;
  }
  if (param_2 == param_1) {
    return;
  }
  *param_2 = *param_1;
  *param_1 = fVar1;
  fVar1 = param_2[1];
  param_2[1] = param_1[1];
  param_1[1] = fVar1;
  return;
}

