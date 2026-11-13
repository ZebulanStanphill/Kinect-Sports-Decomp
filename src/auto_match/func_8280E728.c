extern int fn_8280A5E8(double);


int fn_8280E728(float *param_1)

{
  __int64 lVar1;
  
  lVar1 = fn_8280A5E8((double)(param_1[3] * param_1[3] +
                                    param_1[2] * param_1[2] +
                                    *param_1 * *param_1 + param_1[1] * param_1[1]));
  return lVar1 != 0;
}

