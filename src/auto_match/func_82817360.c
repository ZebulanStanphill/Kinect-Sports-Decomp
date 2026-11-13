extern unsigned int lbl_82002C5C;
extern unsigned int lbl_820151C0;
extern unsigned int lbl_8201E104;


double fn_82817360(double param_1,double param_2,double param_3,double param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar1 = (double)lbl_82002C5C;
  dVar2 = (double)(float)(param_4 * dVar1);
  dVar3 = (double)lbl_8201E104;
  return (double)(float)((double)(float)((double)(float)((double)((float)(param_5 * dVar3 +
                                                                         (double)(float)(param_3 * 
                                                  dVar1 - dVar2)) - (float)(param_2 * dVar3)) *
                                                  param_1 + (double)(float)((double)(float)((double)
                                                  (float)(param_2 * dVar1) - param_3) + dVar2)) *
                                         param_1 +
                                        (double)(float)(dVar2 - (double)(float)(param_2 * dVar1))) *
                         param_1 +
                        (double)((float)(param_3 * (double)lbl_820151C0 +
                                        (double)(float)(param_4 * dVar3)) + (float)(param_2 * dVar3)
                                ));
}

