void fn_829EE638(double param_1,int param_2,float *param_3,unsigned __int64 param_4,__int64 param_5)

{
  if ((int)param_5 < 1) {
    return;
  }
  param_2 = param_2 - (int)param_3;
  do {
    *param_3 = (float)((double)*(float *)(param_2 + (int)param_3) * param_1);
    param_3 = param_3 + 1;
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}

