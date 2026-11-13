extern int fn_82CE5410();
extern int fn_8308B0C0();
extern int fn_83095D20();


void fn_83092850(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  unsigned short *puVar13;
  unsigned short *puVar14;
  int iVar17;
  unsigned __int64 uVar15;
  __int64 lVar16;
  
  uVar1 = *(unsigned int *)(param_1 + 0xa4);
  piVar6 = (int *)fn_82CE5410();
  iVar2 = *piVar6;
  *piVar6 = (uVar1 * 0x10 + 0x7f & 0xffffff80) + iVar2;
  piVar6 = (int *)fn_82CE5410();
  iVar3 = *piVar6;
  uVar5 = uVar1 * 4 + 0x7f & 0xffffff80;
  *piVar6 = uVar5 + iVar3;
  piVar6 = (int *)fn_82CE5410();
  iVar4 = *piVar6;
  *piVar6 = uVar5 + iVar4;
  if (0 < *(int *)(param_1 + 0xa4)) {
    iVar17 = 0;
    puVar14 = (unsigned short *)(iVar3 + -2);
    iVar10 = 0;
    do {
      iVar9 = iVar17 + iVar2;
      iVar12 = iVar17 + *(int *)(param_1 + 0xa0);
      iVar11 = iVar10 + 1;
      *(unsigned int *)(iVar17 + iVar2) = *(unsigned int *)(iVar17 + *(int *)(param_1 + 0xa0));
      *(unsigned int *)(iVar9 + 4) = *(unsigned int *)(iVar12 + 4);
      *(unsigned int *)(iVar9 + 8) = *(unsigned int *)(iVar12 + 8);
      *(unsigned int *)(iVar9 + 0xc) = *(unsigned int *)(iVar12 + 0xc);
      iVar12 = iVar17 + *(int *)(param_1 + 0xa0);
      iVar17 = iVar17 + 0x10;
      puVar14[1] = *(unsigned short *)(iVar12 + 8);
      puVar14 = puVar14 + 2;
      *puVar14 = (short)iVar10;
      iVar10 = iVar11;
    } while (iVar11 < *(int *)(param_1 + 0xa4));
  }
  if (1 < (int)(uVar1 - 1)) {
    fn_83095D20(iVar3 + 4,0,(unsigned __int64)uVar1 - 2,0);
  }
  iVar10 = *(int *)(param_1 + 0xa4);
  iVar17 = 0;
  if (0 < iVar10) {
    iVar12 = 0;
    puVar13 = (unsigned short *)(iVar3 + -2);
    do {
      puVar13 = puVar13 + 2;
      puVar8 = (unsigned int *)((unsigned int)*puVar13 * 0x10 + iVar2);
      *(int *)((unsigned int)*puVar13 * 4 + iVar4) = iVar17;
      iVar17 = iVar17 + 1;
      puVar7 = (unsigned int *)(iVar12 + *(int *)(param_1 + 0xa0));
      iVar12 = iVar12 + 0x10;
      *puVar7 = *puVar8;
      puVar7[1] = puVar8[1];
      puVar7[2] = puVar8[2];
      puVar7[3] = puVar8[3];
      iVar10 = *(int *)(param_1 + 0xa4);
    } while (iVar17 < iVar10);
  }
  iVar17 = 1;
  if (1 < iVar10) {
    iVar10 = 0x10;
    do {
      piVar6 = *(int **)(iVar10 + *(int *)(param_1 + 0xa0) + 0xc);
      if (((unsigned int)piVar6 & 1) == 0) {
        *piVar6 = iVar17;
      }
      else {
        *(short *)(((unsigned int)piVar6 & 0xfffffffe) + *(int *)(param_1 + 0xd8)) = (short)iVar17;
      }
      iVar17 = iVar17 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar17 < *(int *)(param_1 + 0xa4));
  }
  iVar10 = 0;
  if (0 < *(int *)(param_1 + 0xd0)) {
    iVar17 = 0;
    do {
      iVar12 = iVar17 + *(int *)(param_1 + 0xd8);
      uVar15 = (unsigned __int64)*(unsigned int *)(iVar12 + 8);
      if (-1 < (__int64)(uVar15 - 1)) {
        lVar16 = (uVar15 - 1 & 0x7fffffff) << 1;
        do {
          puVar13 = (unsigned short *)((int)lVar16 + *(int *)(iVar12 + 4));
          lVar16 = lVar16 + -2;
          *puVar13 = (unsigned short)*(unsigned int *)((unsigned int)*puVar13 * 4 + iVar4);
          uVar15 = uVar15 - 1;
        } while (uVar15 != 0);
      }
      iVar10 = iVar10 + 1;
      iVar17 = iVar17 + 0x10;
    } while (iVar10 < *(int *)(param_1 + 0xd0));
  }
  piVar6 = (int *)(param_1 + 0xb0);
  lVar16 = 3;
  do {
    iVar10 = 0;
    if (0 < *piVar6) {
      puVar14 = (unsigned short *)(piVar6[-1] + -2);
      do {
        puVar13 = puVar14 + 2;
        iVar10 = iVar10 + 1;
        puVar14 = puVar14 + 2;
        *puVar14 = (short)*(unsigned int *)((unsigned int)*puVar13 * 4 + iVar4);
      } while (iVar10 < *piVar6);
    }
    piVar6 = piVar6 + 3;
    lVar16 = lVar16 + -1;
  } while (lVar16 != 0);
  lVar16 = 1;
  if (1 < *(int *)(param_1 + 0xa4)) {
    do {
      fn_8308B0C0(param_1);
      lVar16 = lVar16 + 1;
    } while ((int)lVar16 < *(int *)(param_1 + 0xa4));
  }
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar4;
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar3;
  piVar6 = (int *)fn_82CE5410();
  *piVar6 = iVar2;
  return;
}

