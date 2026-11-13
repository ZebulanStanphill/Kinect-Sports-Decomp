extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8280DD78(double param_1,float *param_2,float *param_3,float *param_4)

{
  double dVar1;
  
  dVar1 = (double)(float)((double)lbl_82002AE0 - param_1);
  if (param_3[2] * param_2[2] +
      *param_2 * *param_3 +
      param_3[1] * param_2[1] + (float)((double)param_3[3] * (double)param_2[3]) < lbl_821AAD20) {
    param_1 = -param_1;
  }
  param_4[3] = (float)((double)param_3[3] * param_1 + (double)(float)((double)param_2[3] * dVar1));
  *param_4 = (float)((double)*param_2 * dVar1 + (double)(float)((double)*param_3 * param_1));
  param_4[1] = (float)((double)param_3[1] * param_1 + (double)(float)((double)param_2[1] * dVar1));
  param_4[2] = (float)((double)param_3[2] * param_1 + (double)(float)((double)param_2[2] * dVar1));
  return;
}

