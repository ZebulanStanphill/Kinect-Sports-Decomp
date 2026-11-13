extern float lbl_82057B54;


float fn_82FD3CC0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *param_1;
  fVar2 = *param_2;
  *param_2 = fVar1;
  param_2[1] = (fVar1 - param_2[1]) * lbl_82057B54 + fVar2;
  return param_2[1];
}

