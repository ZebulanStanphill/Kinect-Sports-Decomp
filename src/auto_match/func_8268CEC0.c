void fn_8268CEC0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[3];
  fVar4 = param_1[4];
  *param_1 = param_2[3] * fVar2 + *param_2 * fVar1;
  param_1[3] = param_2[3] * fVar4 + *param_2 * fVar3;
  param_1[1] = fVar2 * param_2[4] + fVar1 * param_2[1];
  param_1[4] = fVar4 * param_2[4] + fVar3 * param_2[1];
  param_1[2] = fVar2 * param_2[5] + fVar1 * param_2[2] + param_1[2];
  param_1[5] = fVar4 * param_2[5] + fVar3 * param_2[2] + param_1[5];
  return;
}

