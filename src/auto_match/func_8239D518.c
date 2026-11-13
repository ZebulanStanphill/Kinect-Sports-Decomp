void fn_8239D518(int param_1,int param_2)

{
  unsigned int uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned int uVar10;
  __int64 lVar11;
  
  if (*(int *)(param_1 + 0x178) == 0) {
    iVar9 = param_1 + 0x8d4;
    iVar7 = 0;
    iVar3 = param_2 * 2;
    lVar11 = 2;
    do {
      iVar4 = iVar3 + iVar7;
      iVar7 = iVar7 + 1;
      iVar4 = iVar4 * 0xb0 + iVar9;
      *(int *)(iVar4 + 0x60) = *(int *)(iVar4 + 0x60) + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar4 = 0;
    iVar7 = (unsigned int)(param_2 == 0) * 2;
    lVar11 = 2;
    do {
      iVar8 = iVar7 + iVar4;
      iVar4 = iVar4 + 1;
      iVar8 = iVar8 * 0xb0 + iVar9;
      *(int *)(iVar8 + 0x5c) = *(int *)(iVar8 + 0x5c) + 1;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    iVar4 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x3c))();
    if ((iVar4 == 0) && (*(int *)(*(int *)(param_1 + 0x2e0) + 0xc) == param_2)) {
      iVar4 = 0;
      lVar11 = 2;
      do {
        iVar8 = iVar3 + iVar4;
        iVar4 = iVar4 + 1;
        iVar8 = iVar8 * 0xb0 + iVar9;
        *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + 1;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
    }
    uVar10 = 0;
    piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
    if (*(int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) != 0) {
      do {
        iVar9 = (iVar3 + uVar10) * 0xb0 + param_1;
        uVar1 = *(unsigned int *)(iVar9 + 0x8e4);
        uVar5 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x3c))();
        if (uVar1 < uVar5) {
          uVar6 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x3c))();
          *(unsigned int *)(iVar9 + 0x8e4) = uVar6;
          uVar6 = (**(int (***)())(**(int **)(param_1 + 0x2e0) + 0x3c))();
          *(unsigned int *)((iVar7 + uVar10) * 0xb0 + param_1 + 0x8e4) = uVar6;
        }
        uVar10 = uVar10 + 1;
        piVar2 = *(int **)(**(int **)(param_1 + 8) + param_2 * 4);
      } while (uVar10 < *(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8));
    }
  }
  return;
}

