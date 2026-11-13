extern float fRam83263168;
extern float fRam83263170;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_82F5CCB0(double param_1,int param_2)

{
  float fVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  fVar1 = (float)(param_1 + (double)*(float *)(param_2 + 0x3c));
  *(float *)(param_2 + 0x3c) = fVar1;
  uVar2 = lbl_821AAD20;
  uVar3 = 0;
  if (fVar1 <= fRam83263168) {
    if (*(int *)(param_2 + 0x40) != 0) {
      *(unsigned int *)(param_2 + 0x10) = lbl_821AAD20;
      *(unsigned int *)(param_2 + 0x30) = 0;
      *(unsigned int *)(param_2 + 0x20) = uVar2;
      *(unsigned int *)(param_2 + 0x14) = 1;
      *(unsigned int *)(param_2 + 0x24) = uVar2;
      uVar3 = 0;
      *(unsigned int *)(param_2 + 0x2c) = uVar2;
    }
  }
  else {
    uVar3 = 1;
    *(unsigned int *)(param_2 + 0x38) = 1;
  }
  if (*(int *)(param_2 + 0x30) < 1) {
    return uVar3;
  }
  fVar1 = (float)((double)*(float *)(param_2 + 0x20) + param_1);
  *(float *)(param_2 + 0x20) = fVar1;
  if (fVar1 - *(float *)(param_2 + 0x24) <= fRam83263170) {
    return uVar3;
  }
  *(unsigned int *)(param_2 + 0x10) = uVar2;
  *(unsigned int *)(param_2 + 0x30) = 0;
  *(unsigned int *)(param_2 + 0x20) = uVar2;
  *(unsigned int *)(param_2 + 0x14) = 1;
  *(unsigned int *)(param_2 + 0x24) = uVar2;
  *(unsigned int *)(param_2 + 0x2c) = uVar2;
  return uVar3;
}

