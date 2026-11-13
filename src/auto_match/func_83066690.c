void fn_83066690(double param_1,double param_2,double param_3,double param_4,float *param_5)

{
  *param_5 = (float)param_1;
  param_5[1] = (float)param_2;
  param_4 = -param_4;
  param_5[2] = (float)param_3;
  param_5[3] = (float)((double)*param_5 * param_4);
  param_5[4] = (float)((double)param_5[1] * param_4);
  param_5[5] = (float)((double)param_5[2] * param_4);
  return;
}

