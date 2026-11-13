void fn_82DA10B8(float *param_1,int param_2,int param_3,float *param_4)

{
  *param_4 = param_1[2] * *(float *)(param_2 + 4);
  param_4[1] = param_1[3] * *(float *)(param_2 + 4);
  param_4[2] = param_1[1];
  param_4[3] = param_1[4];
  param_4[4] = param_1[5];
  *(float *)(param_3 + 0x1c) = *(float *)(param_2 + 8) * *param_1;
  return;
}

