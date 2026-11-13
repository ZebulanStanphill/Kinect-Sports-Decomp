unsigned __int64 fn_82950DB8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  int iVar8;
  
  uVar6 = 0;
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  uVar5 = (unsigned __int64)uVar1;
  if ((uVar1 & 0xfffff) != 0) {
    iVar8 = 0;
    lVar7 = (uVar5 & 0xfffff) << 2;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x104) + 8);
      iVar3 = *(int *)(*(int *)(iVar8 + iVar2) * 4 + *(int *)(param_1 + 0x14));
      iVar4 = *(int *)(*(int *)((int)(((uVar5 & 0xfffff) * 2 + uVar6 & 0xffffffff) << 2) + iVar2) *
                       4 + *(int *)(param_1 + 0x14));
      if ((*(int *)(iVar8 + iVar2) != *(int *)((int)lVar7 + iVar2)) ||
         (((iVar2 = *(int *)(iVar4 + 0x38),
           iVar2 != *(int *)((*(unsigned int **)(param_1 + 0x104))[2] + iVar8) &&
           ((iVar2 == -1 || (iVar2 != *(int *)(iVar3 + 0x38))))) ||
          ((*(unsigned int *)(iVar4 + 0x3c) ^ 0x80000) != *(unsigned int *)(iVar3 + 0x3c))))) {
        return 1;
      }
      uVar6 = uVar6 + 1;
      iVar8 = iVar8 + 4;
      lVar7 = lVar7 + 4;
    } while ((uVar6 & 0xffffffff) < (uVar5 & 0xfffff));
  }
  uVar1 = (unsigned int)(uVar5 & 0xfffff);
  **(unsigned int **)(param_1 + 0x104) = uVar1 | 0x70000000;
  *(unsigned int *)(*(int *)(param_1 + 0x104) + 4) = uVar1;
  return 0;
}

