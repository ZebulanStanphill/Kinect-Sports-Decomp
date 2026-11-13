extern int fn_82522ED8();


unsigned __int64 fn_825E78C8(unsigned int *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  __int64 lVar9;
  int iVar10;
  int aiStack_a8 [16];
  
  uVar8 = *param_1;
  uVar4 = (unsigned __int64)uVar8;
  puVar3 = param_1 + 2;
  puVar5 = puVar3;
  if (-1 < (int)uVar8) {
    lVar9 = (uVar4 + 0x12 & 0x3fffffff) << 2;
    do {
      iVar6 = (int)lVar9;
      puVar7 = *(unsigned int **)(iVar6 + (int)puVar5);
      while ((puVar1 = puVar7, puVar1 != puVar3 && ((int)*puVar1 < (int)param_2))) {
        puVar5 = puVar1;
        puVar7 = *(unsigned int **)(iVar6 + (int)puVar1);
      }
      *(unsigned int **)((int)aiStack_a8 + iVar6) = puVar5;
      uVar4 = uVar4 - 1;
      lVar9 = lVar9 + -4;
    } while (-1 < (__int64)uVar4);
  }
  puVar5 = (unsigned int *)puVar5[0x12];
  if ((puVar5 == puVar3) || (*puVar5 != param_2)) {
    uVar2 = 0;
  }
  else {
    iVar6 = 0;
    if (-1 < (int)uVar8) {
      iVar10 = 0x48;
      do {
        puVar7 = (unsigned int *)(*(int *)((int)aiStack_a8 + iVar10) + iVar10);
        if ((unsigned int *)*puVar7 != puVar5) break;
        puVar1 = (unsigned int *)(iVar10 + (int)puVar5);
        iVar6 = iVar6 + 1;
        iVar10 = iVar10 + 4;
        *puVar7 = *puVar1;
      } while (iVar6 <= (int)*param_1);
    }
    while ((0 < (int)*param_1 && ((unsigned int *)param_1[*param_1 + 0x14] == puVar3))) {
      *param_1 = *param_1 - 1;
    }
    param_1[1] = param_1[1] - 1;
    if (puVar5[0xd] != 0) {
      uVar8 = 0;
      if (puVar5[0x11] != 0) {
        do {
          uVar8 = uVar8 + 1;
        } while (uVar8 < puVar5[0x11]);
      }
      puVar5[0xe] = puVar5[0xd];
      puVar5[0x11] = 0;
      fn_82522ED8();
    }
    uVar8 = param_1[0x25];
    uVar2 = 1;
    *(unsigned int **)(*(int *)(uVar8 + 0xc) * 4 + *(int *)(uVar8 + 0x10)) = puVar5;
    *(int *)(uVar8 + 0xc) = *(int *)(uVar8 + 0xc) + 1;
  }
  return uVar2;
}

