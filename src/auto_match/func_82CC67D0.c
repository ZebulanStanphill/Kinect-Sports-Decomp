void fn_82CC67D0(int param_1,__int64 param_2,__int64 param_3)

{
  int iVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned char *puVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  __int64 lVar12;
  int iVar13;
  unsigned int uVar15;
  __int64 lVar14;
  int iVar16;
  unsigned int uVar18;
  __int64 lVar17;
  __int64 lVar19;
  
  iVar6 = (int)param_3;
  iVar5 = (int)param_2;
  uVar11 = *(unsigned int *)(param_1 + 0x20);
  trapWord(6,(unsigned __int64)uVar11,0);
  uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x30) + 4);
  uVar10 = (unsigned __int64)uVar2;
  iVar3 = *(int *)(*(int *)(param_1 + 0x30) + 8);
  uVar18 = (uVar2 - 1) * uVar11;
  uVar15 = (((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + -1) * uVar11;
  uVar7 = (int)(((unsigned __int64)uVar2 & 0x1ffffff) << 7) / (int)uVar11;
  iVar4 = uVar2 * 2;
  iVar16 = iVar4 * iVar5;
  iVar8 = (int)uVar18 / (int)uVar2;
  trapWord(6,uVar10,0);
  iVar1 = (int)uVar15 / (int)uVar2;
  lVar14 = (__int64)iVar1;
  trapWord(6,uVar10,0);
  iVar13 = iVar16 + *(int *)(param_1 + 0x34);
  trapWord(5,uVar10 & ~((((unsigned __int64)uVar15 & 0x7fffffff) << 1 | (unsigned __int64)(uVar15 >> 0x1f)) - 1),
           0xffff);
  trapWord(5,(unsigned __int64)uVar11 &
             ~((((unsigned __int64)uVar2 & 0xffffff) << 8 | ((unsigned __int64)uVar2 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  trapWord(5,uVar10 & ~((((unsigned __int64)uVar18 & 0x7fffffff) << 1 | (unsigned __int64)(uVar18 >> 0x1f)) - 1),
           0xffff);
  lVar12 = (__int64)((int)uVar11 >> 1) + (unsigned __int64)((int)uVar11 < 0 && (uVar11 & 1) != 0);
  uVar7 = 0xffffffffU - ((int)uVar7 >> 0x1f) & uVar7;
  if (iVar5 < iVar6) {
    lVar17 = param_3 - param_2;
    puVar9 = (unsigned char *)(uVar11 * iVar5 + *(int *)(param_1 + 0x40) + -1);
    do {
      uVar11 = 0;
      if (0 < iVar8) {
        lVar19 = (__int64)iVar8;
        do {
          uVar2 = uVar11 & 0x7f;
          uVar15 = (int)uVar11 >> 6 & 0xfffffffe;
          uVar11 = uVar11 + uVar7;
          puVar9[1] = (char)((int)((unsigned int)*(unsigned char *)(uVar15 + iVar13) * (0x80 - uVar2) +
                                  *(unsigned char *)(iVar13 + 2 + uVar15) * uVar2) >> 7);
          puVar9 = puVar9 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      lVar19 = (__int64)iVar8;
      if (iVar8 < *(int *)(param_1 + 0x20)) {
        do {
          uVar2 = (int)uVar11 >> 6;
          lVar19 = lVar19 + 1;
          uVar11 = uVar11 + uVar7;
          puVar9 = puVar9 + 1;
          *puVar9 = *(unsigned char *)((uVar2 & 0xfffffffe) + iVar13);
        } while ((int)lVar19 < *(int *)(param_1 + 0x20));
      }
      lVar17 = lVar17 + -1;
      iVar13 = iVar13 + iVar4;
    } while (lVar17 != 0);
  }
  iVar13 = (int)lVar12;
  iVar8 = iVar16 + *(int *)(param_1 + 0x34) + 1;
  if (iVar5 < iVar6) {
    lVar17 = param_3 - param_2;
    puVar9 = (unsigned char *)
             (*(int *)(param_1 + 0x20) * iVar3 + iVar13 * iVar5 + *(int *)(param_1 + 0x40) + -1);
    do {
      uVar11 = 0;
      if (0 < iVar1) {
        lVar19 = lVar14;
        do {
          uVar2 = uVar11 & 0x7f;
          uVar15 = (int)uVar11 >> 5 & 0xfffffffc;
          uVar11 = uVar11 + uVar7;
          puVar9[1] = (char)((int)((unsigned int)*(unsigned char *)(uVar15 + iVar8) * (0x80 - uVar2) +
                                  *(unsigned char *)(iVar8 + 4 + uVar15) * uVar2) >> 7);
          puVar9 = puVar9 + 1;
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      if (iVar1 < iVar13) {
        lVar19 = lVar12 - lVar14;
        do {
          uVar2 = (int)uVar11 >> 5;
          uVar11 = uVar11 + uVar7;
          puVar9 = puVar9 + 1;
          *puVar9 = *(unsigned char *)((uVar2 & 0xfffffffc) + iVar8);
          lVar19 = lVar19 + -1;
        } while (lVar19 != 0);
      }
      lVar17 = lVar17 + -1;
      iVar8 = iVar8 + iVar4;
    } while (lVar17 != 0);
  }
  iVar8 = iVar16 + *(int *)(param_1 + 0x34) + 3;
  if (iVar5 < iVar6) {
    param_3 = param_3 - param_2;
    puVar9 = (unsigned char *)
             ((*(int *)(param_1 + 0x20) + iVar13) * iVar3 + iVar13 * iVar5 +
              *(int *)(param_1 + 0x40) + -1);
    do {
      uVar11 = 0;
      if (0 < iVar1) {
        lVar17 = lVar14;
        do {
          uVar2 = uVar11 & 0x7f;
          uVar15 = (int)uVar11 >> 5 & 0xfffffffc;
          uVar11 = uVar11 + uVar7;
          puVar9[1] = (char)((int)((unsigned int)*(unsigned char *)(uVar15 + iVar8) * (0x80 - uVar2) +
                                  *(unsigned char *)(iVar8 + 4 + uVar15) * uVar2) >> 7);
          puVar9 = puVar9 + 1;
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      if (iVar1 < iVar13) {
        lVar17 = lVar12 - lVar14;
        do {
          uVar2 = (int)uVar11 >> 5;
          uVar11 = uVar11 + uVar7;
          puVar9 = puVar9 + 1;
          *puVar9 = *(unsigned char *)((uVar2 & 0xfffffffc) + iVar8);
          lVar17 = lVar17 + -1;
        } while (lVar17 != 0);
      }
      param_3 = param_3 + -1;
      iVar8 = iVar8 + iVar4;
    } while (param_3 != 0);
  }
  return;
}

