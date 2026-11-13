extern int fn_82809558();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_82800F28(float *param_1)

{
  unsigned short *in_r7;
  double dVar1;
  
  if (lbl_821AAD20 <
      lbl_82002AE0 - (param_1[2] * param_1[2] + *param_1 * *param_1 + param_1[1] * param_1[1])) {
    dVar1 = (double)fn_82809558();
    param_1[3] = (float)dVar1;
  }
  else {
    param_1[3] = lbl_821AAD20;
  }
  *in_r7 = 4;
  return;
}

