extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_8281D9B0(double param_1,double param_2,float *param_3,unsigned char param_4)

{
  float fVar1;
  float fVar2;
  
  param_4 = param_4 | 0x20;
  if (param_4 == 0x78) {
    param_3[7] = (float)-param_1;
    param_3[5] = (float)param_1;
    param_3[8] = (float)param_2;
    fVar1 = lbl_821AAD20;
    *param_3 = lbl_82002AE0;
    param_3[3] = fVar1;
    param_3[1] = fVar1;
  }
  else {
    if (param_4 == 0x79) {
      param_3[2] = (float)-param_1;
      *param_3 = (float)param_2;
      param_3[6] = (float)param_1;
      param_3[8] = (float)param_2;
      fVar2 = lbl_821AAD20;
      fVar1 = lbl_82002AE0;
      param_3[3] = lbl_821AAD20;
      param_3[1] = fVar2;
      param_3[4] = fVar1;
      param_3[7] = fVar2;
      param_3[5] = fVar2;
      return;
    }
    if (param_4 != 0x7a) {
      return;
    }
    param_3[3] = (float)-param_1;
    *param_3 = (float)param_2;
    param_3[1] = (float)param_1;
    fVar1 = lbl_821AAD20;
    fVar2 = lbl_82002AE0;
    param_3[7] = lbl_821AAD20;
    param_3[5] = fVar1;
    param_3[8] = fVar2;
  }
  param_3[2] = fVar1;
  param_3[6] = fVar1;
  param_3[4] = (float)param_2;
  return;
}

