void fn_82783FB8(int param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  float *pfVar4;
  
  fVar1 = 1.0f;
  *param_2 = 1.0f;
  fVar2 = 0.0f;
  *param_3 = fVar1;
  *param_4 = fVar2;
  *param_5 = fVar2;
  if (*(unsigned int *)(param_1 + 8) == 0) {
    return;
  }
  uVar3 = 1;
  fVar1 = *(float *)**(unsigned int **)(param_1 + 0x14);
  *param_4 = fVar1;
  *param_2 = fVar1;
  fVar1 = *(float *)(**(int **)(param_1 + 0x14) + 4);
  *param_5 = fVar1;
  *param_3 = fVar1;
  if (*(unsigned int *)(param_1 + 8) <= 1) {
    return;
  }
  do {
    pfVar4 = (float *)(*(int *)((uVar3 >> 6 & 0x3fffffc) + *(int *)(param_1 + 0x14)) +
                      (uVar3 & 0xff) * 8);
    if (*pfVar4 < *param_2) {
      *param_2 = *pfVar4;
    }
    if (pfVar4[1] < *param_3) {
      *param_3 = pfVar4[1];
    }
    if (*pfVar4 > *param_4) {
      *param_4 = *pfVar4;
    }
    if (pfVar4[1] > *param_5) {
      *param_5 = pfVar4[1];
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < *(unsigned int *)(param_1 + 8));
  return;
}

