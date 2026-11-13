extern int fn_82B16720();
extern int fn_82F6DF80();
extern int fn_82F6FC80();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;


double fn_82B16770(double param_1,unsigned __int64 param_2)

{
  double dVar1;
  double adStack_20;
  
  fn_82F6FC80(param_2,&adStack_20);
  if ((param_1 < lbl_82005710) && (param_1 != adStack_20)) {
    dVar1 = (double)fn_82F6DF80(lbl_82005758);
    adStack_20 = (double)fn_82B16720(dVar1 + adStack_20);
  }
  return adStack_20;
}

