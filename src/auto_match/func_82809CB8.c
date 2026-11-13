extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DF18;
extern unsigned int lbl_821AAD20;


double fn_82809CB8(double param_1)

{
  double dVar1;
  
  if ((double)lbl_8201DF18 <= ABS(param_1)) {
    return param_1;
  }
  dVar1 = (double)(__int64)param_1;
  if ((param_1 < (double)lbl_821AAD20) && (param_1 != dVar1)) {
    dVar1 = (double)(float)(dVar1 - (double)lbl_82002AE0);
  }
  return dVar1;
}

