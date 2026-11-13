unsigned __int64 fn_8294C7E0(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  uVar5 = (unsigned __int64)uVar1 & 0xfffff;
  if ((*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int **)(param_1 + 0x104))
                                                                      [2] * 4 +
                                                             *(int *)(param_1 + 0x14)) + 0x30) * 4 +
                                           *(int *)(param_1 + 0x14)) + 4) * 4 +
                         *(int *)(param_1 + 0x10)) + 4) & 0x80) == 0) {
    return 1;
  }
  if ((uVar1 & 0xfffff) != 0) {
    iVar4 = 0;
    do {
      piVar2 = (int *)(*(int *)(*(int *)(param_1 + 0x104) + 8) + iVar4);
      piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0x104) + 0x10) + iVar4);
      iVar4 = iVar4 + 4;
      *(unsigned int *)(*(int *)(*piVar3 * 4 + *(int *)(param_1 + 0x14)) + 0x30) =
           *(unsigned int *)(*(int *)(*piVar2 * 4 + *(int *)(param_1 + 0x14)) + 0x30);
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  **(unsigned int **)(param_1 + 0x104) = 0;
  return 0;
}

