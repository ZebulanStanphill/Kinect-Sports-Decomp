void fn_82371E10(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  
  iVar3 = param_1 + 0xa14;
  iVar5 = 0;
  iVar2 = param_2 * 2;
  lVar8 = 2;
  do {
    iVar4 = iVar2 + iVar5;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 * 0x88 + iVar3;
    *(int *)(iVar4 + 0x50) = *(int *)(iVar4 + 0x50) + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar4 = 0;
  iVar5 = (unsigned int)(param_2 == 0) * 2;
  lVar8 = 2;
  do {
    iVar6 = iVar5 + iVar4;
    iVar4 = iVar4 + 1;
    iVar6 = iVar6 * 0x88 + iVar3;
    *(int *)(iVar6 + 0x4c) = *(int *)(iVar6 + 0x4c) + 1;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  if (*(int *)(param_1 + 0x200) == 1) {
    iVar4 = 0;
    lVar8 = 2;
    do {
      iVar6 = iVar2 + iVar4;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 * 0x88 + iVar3;
      *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    iVar4 = 0;
    lVar8 = 2;
    do {
      iVar6 = iVar5 + iVar4;
      iVar4 = iVar4 + 1;
      iVar6 = iVar6 * 0x88 + iVar3;
      *(int *)(iVar6 + 0x1c) = *(int *)(iVar6 + 0x1c) + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  uVar7 = 0;
  piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  if (*(int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8) == 0) {
    return;
  }
  do {
    iVar3 = (iVar2 + 0x13 + uVar7) * 0x88;
    if (*(unsigned int *)(iVar3 + param_1) < *(unsigned int *)(param_1 + 0x200)) {
      *(unsigned int *)(iVar3 + param_1) = *(unsigned int *)(param_1 + 0x200);
    }
    uVar7 = uVar7 + 1;
    piVar1 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
  } while (uVar7 < *(unsigned int *)(*(int *)(piVar1[4] * 4 + *piVar1) + 8));
  return;
}

