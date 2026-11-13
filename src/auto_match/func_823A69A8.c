extern unsigned int lbl_82005748;
extern unsigned int uStack_c;


void fn_823A69A8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  float fVar4;
  unsigned int uStack_c;
  
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = (unsigned int)*(float *)(*(int *)((*(int **)**(unsigned int **)(iVar2 + 8))[4] * 4 +
                                   **(int **)**(unsigned int **)(iVar2 + 8)) + 0x20);
  if (*(unsigned int *)(iVar2 + 0x974) < uVar1) {
    *(unsigned int *)(iVar2 + 0x974) = uVar1;
  }
  if (uVar1 != 0) {
    uVar3 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x97c);
    if ((uVar1 < uVar3) || (uVar3 == 0)) {
      *(unsigned int *)(*(int *)(param_1 + 8) + 0x97c) = uVar1;
    }
  }
  fVar4 = lbl_82005748;
  *(int *)(*(int *)(param_1 + 8) + 0x980) = *(int *)(*(int *)(param_1 + 8) + 0x980) + 1;
  iVar2 = *(int *)(param_1 + 8);
  uStack_c = (unsigned int)(__int64)(*(float *)(*(int *)(iVar2 + 0x2e0) + 0x94) * fVar4);
  if (*(unsigned int *)(iVar2 + 0x978) < uStack_c) {
    *(unsigned int *)(iVar2 + 0x978) = uStack_c;
  }
  iVar2 = *(int *)(param_1 + 8);
  uStack_c = (unsigned int)(__int64)*(float *)(iVar2 + 0x878);
  *(unsigned int *)(iVar2 + 0x984) = uStack_c + *(int *)(iVar2 + 0x984);
  return;
}

