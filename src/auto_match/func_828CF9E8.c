extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8202676C;
extern float lbl_8202677C;
extern unsigned int lbl_821AAD20;


double fn_828CF9E8(int param_1)

{
  double dVar1;
  
  dVar1 = (double)(((float)*(unsigned short *)(param_1 + 0xa6) - lbl_8202676C) * lbl_8202677C);
  if ((double)lbl_82002AE0 < dVar1) {
    return (double)lbl_82002AE0;
  }
  if (dVar1 < (double)lbl_821AAD20) {
    return (double)lbl_821AAD20;
  }
  return dVar1;
}

