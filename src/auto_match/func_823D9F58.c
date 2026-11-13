unsigned __int64 fn_823D9F58(int *param_1,unsigned int param_2,float param_3)

{
  if (param_1[1] < (unsigned int)param_1[3]) {
    *(unsigned int *)(param_1[1] * 0xc + *param_1) = param_2;
    *(unsigned int *)(param_1[1] * 0xc + *param_1 + 4) = 0;
    *(float *)(param_1[1] * 0xc + *param_1 + 8) = (float)param_3;
    param_1[1] = param_1[1] + 1;
    return 1;
  }
  return 0;
}

