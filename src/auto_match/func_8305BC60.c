void fn_8305BC60(unsigned __int64 param_1,double *param_2,int param_3,int param_4)

{
  float *pfVar1;
  
  pfVar1 = (float *)(param_4 * 4 + param_3);
  *pfVar1 = (float)*param_2;
  pfVar1[1] = (float)param_2[1];
  *(float *)((param_4 + 2) * 4 + param_3) = (float)param_2[2];
  *(float *)((param_4 + 3) * 4 + param_3) = (float)param_2[4];
  *(float *)((param_4 + 4) * 4 + param_3) = (float)param_2[5];
  return;
}

