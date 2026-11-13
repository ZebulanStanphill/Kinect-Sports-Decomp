extern int fn_82F68CC0();


unsigned __int64 fn_82950E98(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned __int64 uVar8;
  __int64 lVar9;
  unsigned __int64 uVar10;
  int iVar11;
  
  uVar10 = 0;
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  uVar8 = (unsigned __int64)uVar1;
  if ((uVar1 & 0xfffff) != 0) {
    iVar2 = *(int *)(param_1 + 0x14);
    iVar11 = 0;
    lVar9 = (uVar8 & 0xfffff) << 2;
    do {
      iVar7 = (int)(((uVar8 & 0xfffff) * 2 + uVar10 & 0xffffffff) << 2);
      iVar3 = *(int *)(*(int *)(param_1 + 0x104) + 8);
      iVar4 = *(int *)(*(int *)(iVar11 + iVar3) * 4 + iVar2);
      iVar5 = *(int *)(*(int *)((int)lVar9 + iVar3) * 4 + iVar2);
      iVar6 = *(int *)(*(int *)(iVar7 + iVar3) * 4 + iVar2);
      if (*(int *)(iVar11 + iVar3) != *(int *)((int)lVar9 + iVar3)) {
        return 1;
      }
      iVar3 = *(int *)(iVar5 + 0x38);
      iVar7 = *(int *)((*(unsigned int **)(param_1 + 0x104))[2] + iVar7);
      if (iVar3 != iVar7) {
        if (iVar3 == -1) {
          return 1;
        }
        if (iVar3 != *(int *)(iVar6 + 0x38)) {
          return 1;
        }
      }
      if ((*(unsigned int *)(iVar5 + 0x3c) ^ 0x80000) != *(unsigned int *)(iVar6 + 0x3c)) {
        return 1;
      }
      iVar3 = *(int *)(iVar4 + 0x38);
      if (iVar3 != iVar7) {
        if (iVar3 == -1) {
          return 1;
        }
        if (iVar3 != *(int *)(iVar6 + 0x38)) {
          return 1;
        }
      }
      if ((*(unsigned int *)(iVar4 + 0x3c) ^ 0x80000) != *(unsigned int *)(iVar6 + 0x3c)) {
        return 1;
      }
      uVar10 = uVar10 + 1;
      iVar11 = iVar11 + 4;
      lVar9 = lVar9 + 4;
    } while ((uVar10 & 0xffffffff) < (uVar8 & 0xfffff));
  }
  uVar1 = (unsigned int)(uVar8 & 0xfffff);
  **(unsigned int **)(param_1 + 0x104) = uVar1 | 0x70000000;
  *(unsigned int *)(*(int *)(param_1 + 0x104) + 4) = uVar1;
  uVar10 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x104) + 8);
  fn_82F68CC0(uVar10,(uVar8 & 0xfffff) * 8 + uVar10,(uVar8 & 0xfffff) << 2);
  return 0;
}

