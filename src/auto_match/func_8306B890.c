extern int fn_8280A550();


void fn_8306B890(float *param_1,float *param_2)

{
  double dVar1;
  
  dVar1 = (double)fn_8280A550((double)(param_1[3] * param_1[3] +
                                            param_1[2] * param_1[2] +
                                            *param_1 * *param_1 + param_1[1] * param_1[1]));
  *param_2 = (float)((double)*param_1 * dVar1);
  param_2[1] = (float)((double)param_1[1] * dVar1);
  param_2[2] = (float)((double)param_1[2] * dVar1);
  param_2[3] = (float)(dVar1 * (double)param_1[3]);
  return;
}

