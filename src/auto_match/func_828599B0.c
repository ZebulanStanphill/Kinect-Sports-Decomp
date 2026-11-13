extern int fn_828116D8();


void fn_828599B0(float *param_1,unsigned __int64 param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = *param_4;
  fVar4 = param_4[1];
  *param_3 = *param_3 * fVar1;
  param_3[1] = param_3[1] * fVar2;
  *param_4 = fVar1 * fVar3;
  param_4[1] = fVar4 * fVar2;
  fn_828116D8(param_3);
  fn_828116D8(param_4,param_2,param_4);
  fVar1 = param_3[1];
  param_3[1] = param_4[1];
  param_4[1] = fVar1;
  return;
}

