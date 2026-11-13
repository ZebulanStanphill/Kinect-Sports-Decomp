extern int fn_82CE4040();
extern int fn_82CE4118();
extern int fn_82CE5410();
extern int fn_82CE6310();


int fn_82D43AA0(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned int *puVar12;
  int *piVar13;
  __int64 lVar11;
  __int64 lVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  
  puVar12 = (unsigned int *)(param_2 + -4);
  puVar4 = (unsigned int *)(param_1 + -4);
  lVar14 = 5;
  do {
    puVar12 = puVar12 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *puVar12;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  puVar6 = (unsigned int *)(param_1 + 0x14);
  iVar3 = fn_82CE5410();
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  uVar2 = *(unsigned int *)(param_2 + 0x18);
  uVar7 = (unsigned __int64)uVar2;
  uVar8 = (unsigned __int64)uVar1;
  if ((int)uVar2 <= (int)uVar1) {
    uVar8 = uVar7;
  }
  if ((int)(*(unsigned int *)(param_1 + 0x1c) & 0x3fffffff) < (int)uVar2) {
    uVar9 = ((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) & 0x3fffffff) << 1;
    if ((int)uVar9 <= (int)uVar2) {
      uVar9 = uVar7;
    }
    fn_82CE6310(*(unsigned int *)(iVar3 + 0x10),puVar6,uVar9,4);
  }
  lVar14 = uVar1 - uVar7;
  if (0 < lVar14) {
    puVar12 = (unsigned int *)(uVar2 * 4 + *puVar6 + -4);
    do {
      if (puVar12[1] != 0) {
        fn_82CE4118();
      }
      lVar14 = lVar14 + -1;
      puVar12 = puVar12 + 1;
      *puVar12 = 0;
    } while (lVar14 != 0);
  }
  piVar13 = (int *)*puVar6;
  if (0 < (int)uVar8) {
    iVar3 = *(int *)(param_2 + 0x14) - (int)piVar13;
    uVar9 = uVar8;
    do {
      if (*(int *)(iVar3 + (int)piVar13) != 0) {
        fn_82CE4040();
      }
      if (*piVar13 != 0) {
        fn_82CE4118();
      }
      uVar9 = uVar9 - 1;
      *piVar13 = *(int *)(iVar3 + (int)piVar13);
      piVar13 = piVar13 + 1;
    } while (uVar9 != 0);
  }
  lVar5 = (uVar8 & 0x3fffffff) * 4;
  lVar14 = uVar7 - uVar8;
  lVar11 = (unsigned __int64)*(unsigned int *)(param_2 + 0x14) + lVar5;
  if (0 < lVar14) {
    lVar5 = ((unsigned __int64)*puVar6 + lVar5) - lVar11;
    do {
      lVar10 = lVar5 + lVar11;
      if (lVar10 != 0) {
        if (*(int *)lVar11 != 0) {
          fn_82CE4040();
        }
        *(int *)lVar10 = *(int *)lVar11;
      }
      lVar14 = lVar14 + -1;
      lVar11 = lVar11 + 4;
    } while (lVar14 != 0);
  }
  *(unsigned int *)(param_1 + 0x18) = uVar2;
  puVar12 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uVar15 = puVar12[1];
  uVar16 = puVar12[2];
  uVar17 = puVar12[3];
  puVar4 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar4 = *puVar12;
  puVar4[1] = uVar15;
  puVar4[2] = uVar16;
  puVar4[3] = uVar17;
  puVar12 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
  uVar15 = puVar12[1];
  uVar16 = puVar12[2];
  uVar17 = puVar12[3];
  puVar4 = (unsigned int *)(param_1 + 0x30U & 0xfffffff0);
  *puVar4 = *puVar12;
  puVar4[1] = uVar15;
  puVar4[2] = uVar16;
  puVar4[3] = uVar17;
  return param_1;
}

