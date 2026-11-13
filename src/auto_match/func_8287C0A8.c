extern unsigned int lbl_8201543C;
extern unsigned int lbl_82022E58;
extern unsigned int lbl_82022E5C;


double fn_8287C0A8(double param_1,double param_2)

{
  if ((float)(param_1 - param_2) < lbl_82022E5C) {
    if ((float)(param_1 - param_2) <= lbl_82022E58) {
      param_2 = (double)(float)(param_2 - (double)lbl_8201543C);
    }
  }
  else {
    param_1 = (double)(float)(param_1 - (double)lbl_8201543C);
  }
  return (double)(float)(param_2 - param_1);
}

