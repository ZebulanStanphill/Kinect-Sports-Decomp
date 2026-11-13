extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82021544;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_821AAD20;


double fn_82D40880(void)

{
  double dVar1;
  
  dVar1 = (double)lbl_821AAD20;
  do {
    if ((int)dVar1 != 0) {
      return dVar1;
    }
    dVar1 = (double)(float)(dVar1 + (double)lbl_82021544);
  } while (dVar1 < (double)lbl_82186E18);
  return (double)lbl_82002AE0;
}

