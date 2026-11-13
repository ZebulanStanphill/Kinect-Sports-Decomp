void fn_82BEEAC8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  *param_1 = *param_2 - *param_3;
  param_1[1] = fVar1 - fVar2;
  return;
}

