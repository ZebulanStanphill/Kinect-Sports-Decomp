extern unsigned int lbl_82005758;
extern unsigned int lbl_820105A0;


double fn_828173F8(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = lbl_82005758 - param_1;
  return (double)(float)(param_2 * dVar1 * dVar1 * dVar1 +
                         param_1 * param_3 * dVar1 * dVar1 * lbl_820105A0 +
                         param_4 * param_1 * param_1 * dVar1 * lbl_820105A0 +
                        (double)(float)((double)(float)((double)(float)(param_1 * param_1) * param_1
                                                       ) * param_5));
}

