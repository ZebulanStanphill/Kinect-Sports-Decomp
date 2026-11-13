extern unsigned int lbl_82005758;
extern unsigned int lbl_82168360;


double fn_82F6B2A8(double param_1)

{
  double dVar1;
  
  dVar1 = (double)(__int64)param_1;
  if (dVar1 - param_1 < 0.0) {
    dVar1 = dVar1 + lbl_82005758;
  }
  if (lbl_82168360 - ABS(param_1) < 0.0) {
    dVar1 = param_1;
  }
  if (-ABS(param_1) < 0.0) {
    param_1 = dVar1;
  }
  return param_1;
}

