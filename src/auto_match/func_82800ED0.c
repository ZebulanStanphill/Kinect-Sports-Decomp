extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_820145BC;
extern unsigned int lbl_82016290;


double fn_82800ED0(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  
  dVar1 = (double)lbl_82002C5C;
  return (double)(float)((double)(float)((double)(float)((double)((float)(param_3 * (double)
                                                  lbl_820145BC -
                                                  (double)(float)(param_4 * (double)lbl_820145BC)) +
                                                  (float)((double)(float)(param_5 * dVar1) -
                                                         (double)(float)(param_2 * dVar1))) *
                                                  param_1 + (double)(-(float)(param_3 * (double)
                                                  lbl_82016290 - param_2) +
                                                  (float)(param_4 * (double)lbl_82005344 -
                                                         (double)(float)(param_5 * dVar1)))) *
                                         param_1 +
                                        (double)(float)(param_4 * dVar1 -
                                                       (double)(float)(param_2 * dVar1))) * param_1
                        + param_3);
}

