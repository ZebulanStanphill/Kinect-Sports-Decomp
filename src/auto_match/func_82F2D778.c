typedef unsigned char bool;


void fn_82F2D778(int param_1,__int64 param_2,__int64 param_3)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  int iVar6;
  __int64 lVar7;
  unsigned char *puVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  unsigned int uVar12;
  unsigned __int64 uVar13;
  int iVar14;
  int iVar15;
  __int64 lVar16;
  __int64 lVar17;
  int iVar18;
  unsigned int uVar19;
  int iVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  __int64 lVar23;
  
  iVar6 = (int)param_3;
  iVar14 = (int)param_2;
  uVar12 = *(unsigned int *)(param_1 + 0x60);
  uVar9 = *(unsigned int *)(param_1 + 0x58);
  uVar3 = *(unsigned int *)(param_1 + 0x5c);
  trapWord(6,(unsigned __int64)uVar12,0);
  uVar4 = *(unsigned int *)(*(int *)(param_1 + 0x74) + 4);
  uVar13 = (unsigned __int64)uVar4;
  iVar5 = *(int *)(*(int *)(param_1 + 0x74) + 8);
  uVar19 = (uVar4 - 1) * uVar12;
  uVar22 = (((int)uVar4 >> 1) + (unsigned int)((int)uVar4 < 0 && (uVar4 & 1) != 0) + -1) * uVar12;
  uVar21 = (int)(((unsigned __int64)uVar4 & 0x1ffffff) << 7) / (int)uVar12;
  lVar17 = (__int64)((int)uVar12 >> 1) + (unsigned __int64)((int)uVar12 < 0 && (uVar12 & 1) != 0);
  iVar20 = ((int)uVar9 >> 1) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 1) != 0);
  lVar7 = (__int64)(int)uVar4 * (__int64)iVar14 + (unsigned __int64)*(unsigned int *)(param_1 + 0x78);
  trapWord(5,(unsigned __int64)uVar12 &
             ~((((unsigned __int64)uVar4 & 0xffffff) << 8 | ((unsigned __int64)uVar4 & 0x1ffffff) >> 0x18) - 1),
           0xffff);
  iVar10 = (int)uVar19 / (int)uVar4;
  trapWord(6,uVar13,0);
  trapWord(5,uVar13 & ~((((unsigned __int64)uVar19 & 0x7fffffff) << 1 | (unsigned __int64)(uVar19 >> 0x1f)) - 1),
           0xffff);
  iVar2 = (int)uVar22 / (int)uVar4;
  lVar16 = (__int64)iVar2;
  trapWord(6,uVar13,0);
  trapWord(5,uVar13 & ~((((unsigned __int64)uVar22 & 0x7fffffff) << 1 | (unsigned __int64)(uVar22 >> 0x1f)) - 1),
           0xffff);
  uVar21 = 0xffffffffU - ((int)uVar21 >> 0x1f) & uVar21;
  if (iVar14 < iVar6) {
    param_3 = param_3 - param_2;
    puVar8 = (unsigned char *)(uVar12 * iVar14 + *(int *)(param_1 + 0x84) + -1);
    do {
      uVar9 = 0;
      iVar11 = (int)lVar7;
      if (0 < iVar10) {
        lVar23 = (__int64)iVar10;
        do {
          iVar15 = (int)uVar9 >> 7;
          uVar12 = uVar9 & 0x7f;
          uVar9 = uVar9 + uVar21;
          puVar8[1] = (char)((int)((unsigned int)*(unsigned char *)(iVar15 + iVar11) * (0x80 - uVar12) +
                                  *(unsigned char *)(iVar11 + 1 + iVar15) * uVar12) >> 7);
          puVar8 = puVar8 + 1;
          lVar23 = lVar23 + -1;
        } while (lVar23 != 0);
      }
      uVar12 = *(unsigned int *)(param_1 + 0x60);
      lVar23 = (__int64)iVar10;
      if (iVar10 < (int)uVar12) {
        do {
          iVar15 = (int)uVar9 >> 7;
          lVar23 = lVar23 + 1;
          uVar9 = uVar9 + uVar21;
          puVar8 = puVar8 + 1;
          *puVar8 = *(unsigned char *)(iVar15 + iVar11);
          uVar12 = *(unsigned int *)(param_1 + 0x60);
        } while ((int)lVar23 < (int)uVar12);
      }
      param_3 = param_3 + -1;
      lVar7 = lVar7 + uVar13;
    } while (param_3 != 0);
  }
  uVar9 = iVar14 * *(int *)(param_1 + 0x6c);
  uVar22 = iVar6 * *(int *)(param_1 + 0x6c);
  iVar15 = ((int)uVar9 >> 1) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 1) != 0);
  iVar18 = (int)lVar17;
  iVar11 = ((int)uVar22 >> 1) + (unsigned int)((int)uVar22 < 0 && (uVar22 & 1) != 0);
  iVar10 = iVar15 * iVar20 + uVar4 * iVar5 + *(int *)(param_1 + 0x78);
  if (iVar15 < iVar11) {
    puVar8 = (unsigned char *)(iVar15 * iVar18 + uVar12 * iVar5 + *(int *)(param_1 + 0x84) + -1);
    do {
      uVar12 = 0;
      if (0 < iVar2) {
        lVar7 = lVar16;
        do {
          uVar9 = uVar12 & 0x7f;
          iVar11 = ((int)uVar12 >> 7) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 0x7f) != 0);
          uVar12 = uVar12 + uVar21;
          puVar8[1] = (char)((int)((unsigned int)*(unsigned char *)(iVar11 + iVar10) * (0x80 - uVar9) +
                                  *(unsigned char *)(iVar10 + 1 + iVar11) * uVar9) >> 7);
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (iVar2 < iVar18) {
        lVar7 = lVar17 - lVar16;
        do {
          bVar1 = (int)uVar12 < 0;
          uVar9 = uVar12 & 0x7f;
          iVar11 = (int)uVar12 >> 7;
          uVar12 = uVar12 + uVar21;
          puVar8 = puVar8 + 1;
          *puVar8 = *(unsigned char *)(iVar11 + (unsigned int)(bVar1 && uVar9 != 0) + iVar10);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar10 = iVar10 + iVar20;
      uVar12 = iVar6 * *(int *)(param_1 + 0x6c);
      iVar11 = ((int)uVar12 >> 1) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0);
    } while (iVar15 < iVar11);
  }
  uVar12 = *(int *)(param_1 + 0x6c) * iVar14;
  iVar15 = ((int)uVar12 >> 1) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0);
  iVar14 = *(int *)(param_1 + 0x6c) *
           (((int)uVar3 >> 1) + (unsigned int)((int)uVar3 < 0 && (uVar3 & 1) != 0)) + iVar15;
  iVar10 = iVar14 * iVar20 + uVar4 * iVar5 + *(int *)(param_1 + 0x78);
  if (iVar15 < iVar11) {
    puVar8 = (unsigned char *)
             (iVar14 * iVar18 + *(int *)(param_1 + 0x60) * iVar5 + *(int *)(param_1 + 0x84) + -1);
    do {
      uVar12 = 0;
      if (0 < iVar2) {
        lVar7 = lVar16;
        do {
          iVar5 = (int)uVar12 >> 7;
          uVar9 = uVar12 & 0x7f;
          uVar12 = uVar12 + uVar21;
          puVar8[1] = (char)((int)((unsigned int)*(unsigned char *)(iVar5 + iVar10) * (0x80 - uVar9) +
                                  *(unsigned char *)(iVar10 + 1 + iVar5) * uVar9) >> 7);
          puVar8 = puVar8 + 1;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      if (iVar2 < iVar18) {
        lVar7 = lVar17 - lVar16;
        do {
          iVar5 = (int)uVar12 >> 7;
          uVar12 = uVar12 + uVar21;
          puVar8 = puVar8 + 1;
          *puVar8 = *(unsigned char *)(iVar5 + iVar10);
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      iVar15 = iVar15 + 1;
      iVar10 = iVar10 + iVar20;
      uVar12 = iVar6 * *(int *)(param_1 + 0x6c);
    } while (iVar15 < (int)(((int)uVar12 >> 1) + (unsigned int)((int)uVar12 < 0 && (uVar12 & 1) != 0)));
  }
  return;
}

