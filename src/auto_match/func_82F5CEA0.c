extern float fRam8326316c;
extern unsigned int lbl_82002AE0;


void fn_82F5CEA0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  fVar2 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0x24);
  *(float *)(param_1 + 0x28) = fVar2;
  if (1 < iVar1) {
    if ((iVar1 < 3) || (ABS(*(float *)(param_1 + 0x2c) / fVar2 - lbl_82002AE0) <= fRam8326316c)) {
      fVar2 = (lbl_82002AE0 / (float)(__int64)(iVar1 + -1)) * (fVar2 - *(float *)(param_1 + 0x2c))
              + *(float *)(param_1 + 0x2c);
    }
    else {
      *(unsigned int *)(param_1 + 0x30) = 2;
    }
    *(float *)(param_1 + 0x2c) = fVar2;
  }
  *(float *)(param_1 + 0x24) = *(float *)(param_1 + 0x20);
  return;
}

