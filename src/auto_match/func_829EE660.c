void fn_829EE660(double param_1,int param_2,float *param_3,int param_4,unsigned __int64 param_5,
                  __int64 param_6)

{
  if ((int)param_6 < 1) {
    return;
  }
  param_2 = param_2 - (int)param_3;
  param_4 = param_4 - (int)param_3;
  do {
    *(float *)(param_4 + (int)param_3) =
         (float)((double)*param_3 * param_1 + (double)*(float *)(param_2 + (int)param_3));
    param_3 = param_3 + 1;
    param_6 = param_6 + -1;
  } while (param_6 != 0);
  return;
}

