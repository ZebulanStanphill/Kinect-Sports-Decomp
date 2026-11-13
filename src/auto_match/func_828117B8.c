void fn_828117B8(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  
  fVar1 = 0.5f;
  *param_3 = (*param_1 + *param_2) * 0.5f;
  param_3[1] = (param_1[1] + param_2[1]) * fVar1;
  return;
}

