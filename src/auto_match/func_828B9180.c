extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82186E74;
extern unsigned int lbl_821AAD20;


double fn_828B9180(int param_1)

{
  float *pfVar1;
  float afStack_10 [4];
  
  if (*(float *)(param_1 + 0xb4) + *(float *)(param_1 + 0xb0) < lbl_82186E74) {
    return (double)lbl_821AAD20;
  }
  pfVar1 = afStack_10;
  afStack_10[2] = lbl_82002AE0;
  afStack_10[0] = lbl_821AAD20;
  afStack_10[1] =
       ((*(float *)(param_1 + 0xac) + *(float *)(param_1 + 0xb4)) * 0.5f +
       *(float *)(param_1 + 0xb0)) * 0.5f;
  if (lbl_821AAD20 <= afStack_10[1]) {
    pfVar1 = afStack_10 + 1;
  }
  if (lbl_82002AE0 < *pfVar1) {
    pfVar1 = afStack_10 + 2;
  }
  return (double)*pfVar1;
}

