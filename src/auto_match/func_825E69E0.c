void fn_825E69E0(float *param_1,int param_2,int param_3,int param_4,float *param_5,float *param_6)

{
  *param_5 = ((float)(__int64)param_2 - param_1[0x10]) * param_1[8] + *param_1;
  param_5[1] = ((float)(__int64)param_3 - param_1[0x10]) * param_1[9] + param_1[1];
  param_5[2] = ((float)(__int64)param_4 - param_1[0x10]) * param_1[10] + param_1[2];
  *param_6 = ((float)(__int64)(param_2 + 1) + param_1[0x10]) * param_1[8] + *param_1;
  param_6[1] = ((float)(__int64)(param_3 + 1) + param_1[0x10]) * param_1[9] + param_1[1];
  param_6[2] = ((float)(__int64)(param_4 + 1) + param_1[0x10]) * param_1[10] + param_1[2];
  return;
}

