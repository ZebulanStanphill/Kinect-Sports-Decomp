void fn_830673D0(float *param_1,float *param_2)

{
  *param_1 = *param_2 * *param_1;
  param_1[1] = param_1[1] * param_2[1];
  param_1[2] = param_1[2] * param_2[2];
  param_1[3] = param_1[3] * *param_2;
  param_1[4] = param_1[4] * param_2[1];
  param_1[5] = param_1[5] * param_2[2];
  return;
}

