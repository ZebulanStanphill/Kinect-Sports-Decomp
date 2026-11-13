unsigned int fn_82417F58(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int **ppuVar7;
  unsigned int *puStack_10;
  unsigned int *apuStack_c [3];
  
  uVar1 = param_1[7];
  iVar3 = *(int *)(param_1[6] * 0x1ac + param_1[2]);
  iVar2 = **(int **)(*param_1 + 8);
  if ((iVar3 < (*(int **)(*param_1 + 8))[1] - iVar2 >> 2) &&
     (piVar4 = *(int **)(iVar3 * 4 + iVar2), iVar2 = *(int *)(piVar4[4] * 4 + *piVar4),
     uVar1 < *(unsigned int *)(iVar2 + 8))) {
    puVar5 = (unsigned int *)(*(unsigned int **)(iVar2 + 4))[1];
    puStack_10 = *(unsigned int **)(iVar2 + 4);
    while (puVar6 = puVar5, *(char *)((int)puVar6 + 0x15) == '\0') {
      if ((unsigned int)puVar6[3] < uVar1) {
        puVar5 = (unsigned int *)puVar6[2];
      }
      else {
        puVar5 = (unsigned int *)*puVar6;
        puStack_10 = puVar6;
      }
    }
    if ((puStack_10 == *(unsigned int **)(iVar2 + 4)) || (uVar1 < (unsigned int)puStack_10[3])) {
      apuStack_c[0] = *(unsigned int **)(iVar2 + 4);
      ppuVar7 = apuStack_c;
    }
    else {
      ppuVar7 = &puStack_10;
    }
    return (*ppuVar7)[4];
  }
  return 0;
}

