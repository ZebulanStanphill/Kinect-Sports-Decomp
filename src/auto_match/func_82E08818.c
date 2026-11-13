extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE6310();


int fn_82E08818(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  int *piVar7;
  unsigned int *puVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  __int64 lVar12;
  unsigned int *puVar14;
  int *piVar15;
  __int64 lVar13;
  
  *(unsigned short *)(param_1 + 4) = *(unsigned short *)(param_2 + 4);
  *(unsigned short *)(param_1 + 6) = *(unsigned short *)(param_2 + 6);
  if (*(int *)(param_2 + 8) != 0) {
    fn_82CE4040();
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_82CE4118();
  }
  puVar8 = (unsigned int *)(param_1 + 0xc);
  *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_2 + 8);
  iVar4 = fn_82CE5410();
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  uVar2 = *(unsigned int *)(param_2 + 0x10);
  uVar9 = (unsigned __int64)uVar2;
  uVar10 = (unsigned __int64)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar10 = uVar9;
  }
  if ((int)(*(unsigned int *)(param_1 + 0x14) & 0x3fffffff) < (int)uVar2) {
    uVar11 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x14) & 0x3fffffff) << 1;
    if ((int)uVar11 <= (int)uVar2) {
      uVar11 = uVar9;
    }
    fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),puVar8,uVar11,4);
  }
  lVar5 = uVar1 - uVar9;
  if (0 < lVar5) {
    puVar14 = (unsigned int *)(uVar2 * 4 + *puVar8 + -4);
    do {
      if (puVar14[1] != 0) {
        fn_82CE4118();
      }
      lVar5 = lVar5 + -1;
      puVar14 = puVar14 + 1;
      *puVar14 = 0;
    } while (lVar5 != 0);
  }
  piVar15 = (int *)*puVar8;
  if (0 < (int)uVar10) {
    iVar4 = *(int *)(param_2 + 0xc) - (int)piVar15;
    uVar11 = uVar10;
    do {
      if (*(int *)(iVar4 + (int)piVar15) != 0) {
        fn_82CE4040();
      }
      if (*piVar15 != 0) {
        fn_82CE4118();
      }
      uVar11 = uVar11 - 1;
      *piVar15 = *(int *)(iVar4 + (int)piVar15);
      piVar15 = piVar15 + 1;
    } while (uVar11 != 0);
  }
  lVar6 = (uVar10 & 0x3fffffff) * 4;
  lVar5 = uVar9 - uVar10;
  lVar13 = (unsigned __int64)*(unsigned int *)(param_2 + 0xc) + lVar6;
  if (0 < lVar5) {
    lVar6 = ((unsigned __int64)*puVar8 + lVar6) - lVar13;
    do {
      lVar12 = lVar6 + lVar13;
      if (lVar12 != 0) {
        if (*(int *)lVar13 != 0) {
          fn_82CE4040();
        }
        *(int *)lVar12 = *(int *)lVar13;
      }
      lVar5 = lVar5 + -1;
      lVar13 = lVar13 + 4;
    } while (lVar5 != 0);
  }
  *(unsigned int *)(param_1 + 0x10) = uVar2;
  if (*(int *)(param_2 + 0x18) != 0) {
    fn_82CE4040();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_82CE4118();
  }
  puVar8 = (unsigned int *)(param_1 + 0x1c);
  *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 0x18);
  iVar4 = fn_82CE5410();
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  uVar2 = *(unsigned int *)(param_2 + 0x20);
  uVar9 = (unsigned __int64)uVar2;
  uVar10 = (unsigned __int64)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar10 = uVar9;
  }
  if ((int)(*(unsigned int *)(param_1 + 0x24) & 0x3fffffff) < (int)uVar2) {
    uVar11 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x24) & 0x3fffffff) << 1;
    if ((int)uVar11 <= (int)uVar2) {
      uVar11 = uVar9;
    }
    fn_82CE6310(*(unsigned int *)(iVar4 + 0x10),puVar8,uVar11,4);
  }
  lVar5 = uVar1 - uVar9;
  if (0 < lVar5) {
    puVar14 = (unsigned int *)(uVar2 * 4 + *puVar8 + -4);
    do {
      if (puVar14[1] != 0) {
        fn_82CE4118();
      }
      lVar5 = lVar5 + -1;
      puVar14 = puVar14 + 1;
      *puVar14 = 0;
    } while (lVar5 != 0);
  }
  piVar15 = (int *)*puVar8;
  if (0 < (int)uVar10) {
    iVar4 = *(int *)(param_2 + 0x1c) - (int)piVar15;
    uVar11 = uVar10;
    do {
      piVar7 = (int *)(iVar4 + (int)piVar15);
      if (piVar15 != piVar7) {
        iVar3 = *piVar7;
        if (iVar3 != 0) {
          fn_82CE4040(iVar3);
        }
        if (*piVar15 != 0) {
          fn_82CE4118();
        }
        *piVar15 = iVar3;
      }
      uVar11 = uVar11 - 1;
      piVar15 = piVar15 + 1;
    } while (uVar11 != 0);
  }
  lVar6 = (uVar10 & 0x3fffffff) * 4;
  lVar5 = uVar9 - uVar10;
  lVar13 = lVar6 + (unsigned __int64)*(unsigned int *)(param_2 + 0x1c);
  if (0 < lVar5) {
    lVar6 = (lVar6 + (unsigned __int64)*puVar8) - lVar13;
    do {
      lVar12 = lVar6 + lVar13;
      if (lVar12 != 0) {
        if (*(int *)lVar13 != 0) {
          fn_82CE4040();
        }
        *(int *)lVar12 = *(int *)lVar13;
      }
      lVar5 = lVar5 + -1;
      lVar13 = lVar13 + 4;
    } while (lVar5 != 0);
  }
  *(unsigned int *)(param_1 + 0x20) = uVar2;
  return param_1;
}

