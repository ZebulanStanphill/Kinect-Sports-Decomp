extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


double fn_8301E2A0(double param_1,double param_2,double param_3)

{
  if (param_3 <= (double)lbl_821AAD20) {
    return param_1;
  }
  if ((double)lbl_82002AE0 <= param_3) {
    return param_2;
  }
  return (double)(float)((double)(float)(param_2 - param_1) * param_3 + param_1);
}

