extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8217BA98;
extern unsigned int lbl_821AAD20;


void fn_82FC8FD0(double param_1,unsigned int *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  
  uVar4 = lbl_821AAD20;
  fVar3 = lbl_8217BA98;
  fVar2 = lbl_82002AE0;
  if (param_1 < (double)((float)*param_2 * lbl_82002C5C)) {
    fVar1 = lbl_82002AE0 - (float)(param_1 * (double)lbl_82005344) / (float)*param_2;
    fVar1 = fVar1 * fVar1;
    param_2[3] = (unsigned int)fVar1;
    fVar2 = fVar2 - fVar1;
    param_2[2] = (unsigned int)fVar2;
    param_2[2] = (unsigned int)((fVar2 + fVar3) - fVar3);
    param_2[3] = (unsigned int)(((float)param_2[3] + fVar3) - fVar3);
    return;
  }
  param_2[2] = (unsigned int)lbl_82002AE0;
  param_2[3] = uVar4;
  return;
}

