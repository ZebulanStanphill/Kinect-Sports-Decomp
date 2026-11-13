extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern float lbl_8327F894;


void fn_8236AE80(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = ltcg_pool_0_0f;
  fVar5 = lbl_821CA460;
  if (*(char *)(param_1 + 0x1350) != '\0') {
    *(float *)(*(int *)(param_1 + 0x1360) + 4) = lbl_821CA460;
    iVar2 = *(int *)(param_1 + 0x1360);
    fVar3 = fVar4;
    if (*(float *)(iVar2 + 0x1c) <= fVar4) {
      fVar3 = *(float *)(iVar2 + 4) * lbl_8327F894;
    }
    fVar1 = *(float *)(param_1 + 0x1358);
    if (fVar1 <= fVar3) {
      *(float *)(param_1 + 0x1358) = fVar4;
      fVar4 = *(float *)(param_1 + 0x135c) * (fVar3 - fVar1) + *(float *)(param_1 + 0x1354);
      *(float *)(param_1 + 0x1354) = fVar4;
      if (fVar5 <= fVar4) {
        *(float *)(param_1 + 0x1354) = fVar5;
        *(unsigned char *)(param_1 + 0x1350) = 0;
      }
    }
    else {
      *(float *)(param_1 + 0x1358) = fVar1 - fVar3;
    }
    *(unsigned int *)(iVar2 + 4) = *(unsigned int *)(param_1 + 0x1354);
    return;
  }
  return;
}

