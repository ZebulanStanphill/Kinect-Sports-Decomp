extern unsigned int ltcg_pool_0_0f;


void fn_825A8140(int param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  unsigned int uVar4;
  
  fVar1 = ltcg_pool_0_0f;
  iVar2 = *(int *)(param_1 + 0x10);
  if (iVar2 != 0) {
    fVar3 = ltcg_pool_0_0f;
    if (*(int *)(iVar2 + 0x1c) != 0) {
      fVar3 = *(float *)(*(int *)(iVar2 + 0x1c) + 0x118);
    }
    *(float *)(param_1 + 0x18) = fVar3;
    if (*(int *)(iVar2 + 0x1c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(unsigned int *)(*(int *)(iVar2 + 0x1c) + 0x40);
    }
    *(unsigned int *)(param_1 + 0x24) = uVar4 & 1;
    if (*(int *)(iVar2 + 0x1c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(unsigned int *)(*(int *)(iVar2 + 0x1c) + 0x40);
    }
    *(unsigned int *)(param_1 + 0x28) = uVar4 >> 1 & 1;
    iVar2 = *(int *)(iVar2 + 0x1c);
    if (iVar2 != 0) {
      if ((float *)(param_1 + 0x20) != (float *)0x0) {
        if (fVar1 < *(float *)(iVar2 + 0x114)) {
          fVar1 = *(float *)(iVar2 + 0x124) / *(float *)(iVar2 + 0x114);
        }
        *(float *)(param_1 + 0x20) = fVar1;
      }
      fVar1 = *(float *)(iVar2 + 0x124);
    }
    *(float *)(param_1 + 0x1c) = fVar1;
    return;
  }
  return;
}

