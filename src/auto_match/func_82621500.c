extern unsigned int lbl_82195590;
extern unsigned int lbl_821955A0;


void fn_82621500(double param_1,float *param_2)

{
  if (param_2[9] != 0.0) {
    *param_2 = (float)(((double)(float)(param_1 * (double)lbl_82195590) -
                       (double)(__int64)(param_1 * (double)lbl_82195590)) * lbl_821955A0);
    return;
  }
  *param_2 = (float)param_1;
  return;
}

