extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_821AAD20;


void fn_82DFB678(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = *param_5;
  param_6[1] = fVar1;
  fVar2 = *(float *)(param_1 + 8);
  fVar3 = *param_4;
  if (fVar1 < fVar2) {
    fVar4 = *(float *)(param_1 + 0x2c) * fVar3;
    fVar5 = fVar2 * lbl_82002C5C;
    if (fVar5 <= fVar1) {
      param_6[1] = ((fVar1 - fVar5) * fVar4) / (*(float *)(param_1 + 8) - fVar5) +
                   *(float *)(param_1 + 8);
    }
    else {
      param_6[1] = fVar2 + fVar4;
    }
  }
  fVar5 = lbl_821AAD20;
  fVar1 = *(float *)(param_1 + 0xc);
  fVar2 = param_6[1] - fVar1;
  if (fVar2 < lbl_821AAD20) {
    fVar1 = lbl_82002AE0 / (*(float *)(param_1 + 8) - fVar1);
    fVar5 = ((*(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x24)) * fVar1 * fVar2 +
            *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x14);
    fVar1 = ((*(float *)(param_1 + 0x18) - lbl_82002AE0) * fVar1 * fVar1 * fVar2 * fVar2 +
            lbl_82002AE0) * *(float *)(param_1 + 0x14);
    if (*param_5 < *(float *)(param_1 + 8)) {
      *param_6 = fVar1 * fVar3 - (*param_5 / *(float *)(param_1 + 8)) * fVar5;
      return;
    }
    *param_6 = fVar1 * fVar3 - fVar5;
    return;
  }
  fVar4 = *(float *)(param_1 + 0x10);
  if (param_6[1] < fVar4) {
    fVar1 = lbl_82002AE0 / (fVar4 - fVar1);
    *param_6 = ((*(float *)(param_1 + 0x1c) - lbl_82002AE0) * fVar1 * fVar1 * fVar2 * fVar2 +
               lbl_82002AE0) * *(float *)(param_1 + 0x14) * fVar3 -
               ((*(float *)(param_1 + 0x28) - *(float *)(param_1 + 0x24)) * fVar1 * fVar2 +
               *(float *)(param_1 + 0x24)) * *(float *)(param_1 + 0x14);
    return;
  }
  param_6[1] = fVar4;
  *param_6 = fVar5 * fVar3 - *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x14);
  return;
}

