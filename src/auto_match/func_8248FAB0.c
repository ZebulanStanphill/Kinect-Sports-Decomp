extern int fn_82490EA0();


void fn_8248FAB0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned int *puVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  int *piVar12;
  
  uVar6 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1c);
  uVar3 = fn_82490EA0(-(double)*(float *)(param_1 + 0x24),param_2,uVar6);
  *(int *)(param_1 + 0x34) = (int)uVar3;
  uVar4 = fn_82490EA0((double)*(float *)(param_1 + 0x28),param_2,*(unsigned int *)(param_1 + 0x20));
  iVar5 = (int)uVar4;
  *(int *)(param_1 + 0x38) = iVar5;
  iVar1 = (int)param_2;
  if ((int)uVar3 == -1) {
    if (iVar5 == -1) {
      for (puVar9 = *(unsigned int **)(iVar1 + 4); puVar9 != *(unsigned int **)(iVar1 + 8); puVar9 = puVar9 + 2) {
        uVar10 = *puVar9;
        if ((uVar6 & 0xffffffff) < (unsigned __int64)uVar10) goto LAB_8248fb3c;
      }
      uVar10 = 0xffffffff;
LAB_8248fb3c:
      *(unsigned int *)(param_1 + 0x34) = uVar10;
      if (uVar10 == 0xffffffff) {
        if (*(unsigned int **)(iVar1 + 4) == *(unsigned int **)(iVar1 + 8)) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = **(unsigned int **)(iVar1 + 4);
        }
        *(unsigned int *)(param_1 + 0x34) = uVar11;
      }
      iVar5 = *(int *)(param_1 + 0x34);
      for (piVar12 = *(int **)(iVar1 + 4);
          (iVar2 = iVar5, piVar12 != *(int **)(iVar1 + 8) && (*piVar12 != iVar5));
          piVar12 = piVar12 + 2) {
      }
      do {
        iVar8 = iVar2;
        piVar12 = piVar12 + 2;
        if (piVar12 == *(int **)(iVar1 + 8)) break;
        iVar2 = *piVar12;
        iVar5 = iVar8;
      } while (iVar8 + 1 == *piVar12);
      *(int *)(param_1 + 0x38) = iVar5;
    }
    else {
      for (puVar9 = *(unsigned int **)(iVar1 + 4);
          (uVar3 = uVar4, puVar9 != *(unsigned int **)(iVar1 + 8) &&
          ((unsigned __int64)*puVar9 != (uVar4 & 0xffffffff))); puVar9 = puVar9 + 2) {
      }
      do {
        uVar11 = (unsigned int)uVar4;
        puVar9 = puVar9 + -2;
        if (puVar9 == *(unsigned int **)(iVar1 + 4)) break;
        uVar11 = (unsigned int)uVar3;
        uVar6 = uVar3 - 1;
        uVar4 = uVar3;
        uVar3 = (unsigned __int64)*puVar9;
      } while ((uVar6 & 0xffffffff) == (unsigned __int64)*puVar9);
      *(unsigned int *)(param_1 + 0x34) = uVar11;
    }
  }
  else {
    for (puVar9 = *(unsigned int **)(iVar1 + 4);
        (uVar6 = uVar3, puVar9 != *(unsigned int **)(iVar1 + 8) &&
        ((unsigned __int64)*puVar9 != (uVar3 & 0xffffffff))); puVar9 = puVar9 + 2) {
    }
    do {
      uVar7 = uVar6;
      puVar9 = puVar9 + 2;
      if (puVar9 == *(unsigned int **)(iVar1 + 8)) break;
      uVar6 = (unsigned __int64)*puVar9;
      uVar3 = uVar7;
    } while ((uVar7 + 1 & 0xffffffff) == (unsigned __int64)*puVar9);
    if ((iVar5 == -1) || ((uVar3 & 0xffffffff) < (uVar4 & 0xffffffff))) {
      *(int *)(param_1 + 0x38) = (int)uVar3;
    }
  }
  return;
}

