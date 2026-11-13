extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_82022E60;


double fn_8287C0F0(double param_1,double param_2)

{
  if ((float)(param_1 - param_2) < lbl_8201DD74) {
    if ((float)(param_1 - param_2) <= lbl_82022E60) {
      param_2 = (double)(float)(param_2 - (double)lbl_82015468);
    }
  }
  else {
    param_1 = (double)(float)(param_1 - (double)lbl_82015468);
  }
  return (double)(float)(param_2 - param_1);
}

