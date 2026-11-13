extern unsigned int fStack_10;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x0000001c;


void fn_828B9208(double param_1,int param_2)

{
  float *pfVar1;
  float fStack_10;
  float afStack_c [3];
  
  pfVar1 = &fStack_10;
  afStack_c[0] = lbl_82002AE0;
  fStack_10 = lbl_821AAD20;
  if ((double)lbl_821AAD20 <= param_1) {
    pfVar1 = (float *)&stack0x0000001c;
  }
  if (lbl_82002AE0 < *pfVar1) {
    pfVar1 = afStack_c;
  }
  *(float *)(param_2 + 0xb0) = *pfVar1;
  return;
}

