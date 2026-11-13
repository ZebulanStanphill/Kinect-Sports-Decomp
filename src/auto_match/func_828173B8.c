extern unsigned int lbl_82002C40;
extern unsigned int lbl_82005758;


double fn_828173B8(double param_1,double param_2,double param_3,double param_4)

{
  double dVar1;
  
  dVar1 = lbl_82005758 - param_1;
  return (double)(float)(param_1 * param_3 * dVar1 * lbl_82002C40 + param_2 * dVar1 * dVar1 +
                        (double)(float)((double)(float)(param_1 * param_1) * param_4));
}

