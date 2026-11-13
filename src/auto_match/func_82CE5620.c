extern int fn_82F65E18();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821AAD20;


double fn_82CE5620(int param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = ABS((double)*(float *)(param_1 + 0xc));
  if (ABS(dVar1) < (double)lbl_82002AE0) {
    dVar1 = (double)fn_82F65E18(dVar1);
    dVar2 = (double)(float)dVar1;
  }
  else {
    dVar2 = (double)lbl_821AAD20;
    if (dVar1 <= dVar2) {
      dVar2 = (double)lbl_8201DD74;
    }
  }
  return (double)(float)(dVar2 * (double)lbl_82005344);
}

