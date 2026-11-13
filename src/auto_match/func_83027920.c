extern int fn_8301E4B8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_820145F8;
extern unsigned int lbl_821AAD20;


double fn_83027920(double param_1)

{
  double dVar1;
  double dVar2;
  
  dVar2 = (double)lbl_821AAD20;
  if (param_1 <= dVar2) {
    dVar2 = (double)fn_8301E4B8();
    return dVar2;
  }
  dVar1 = (double)fn_8301E4B8(-param_1);
  if (dVar2 < dVar1) {
    return (double)(float)((double)lbl_82002AE0 / dVar1);
  }
  return (double)lbl_820145F8;
}

