void fn_82A07810(double param_1,float *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2[3] + 4;
  if ((unsigned int)param_2[2] < 0x1e) {
    param_2[iVar1] = (float)param_1;
    param_2[1] = (float)((double)param_2[1] + param_1);
    param_2[2] = (float)((int)param_2[2] + 1);
  }
  else {
    param_2[1] = (float)((double)(param_2[1] - param_2[iVar1]) + param_1);
    param_2[iVar1] = (float)param_1;
  }
  *param_2 = param_2[1] / (float)(unsigned int)param_2[2];
  param_2[3] = (float)(((int)param_2[3] + 1U) % 0x1e);
  return;
}

