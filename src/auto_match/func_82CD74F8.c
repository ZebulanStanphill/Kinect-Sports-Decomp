#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


void fn_82CD74F8(__int64 param_1,int param_2,int param_3,unsigned __int64 param_4,int param_5,
                  unsigned __int64 param_6)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned char *puVar5;
  int iVar6;
  __int64 lVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned char *puVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  unsigned char *puVar14;
  unsigned int *puVar15;
  unsigned int uVar16;
  unsigned __int64 uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  unsigned __int64 uVar21;
  unsigned __int64 uVar22;
  unsigned __int64 uVar23;
  int iVar24;
  unsigned char *puVar25;
  
  uVar22 = 0;
  uVar17 = (__int64)((int)param_4 >> 2) + (unsigned __int64)((int)param_4 < 0 && (param_4 & 3) != 0);
  uVar21 = param_6 - 0x1f;
  uVar8 = param_4;
  uVar9 = param_6;
  if (0 < (__int64)uVar21) {
    iVar20 = 0;
    iVar18 = param_3 * 3;
    iVar19 = param_3 << 1;
    uVar23 = uVar21;
    do {
      iVar24 = 0;
      uVar12 = (uVar22 & 0xffffffff) + param_1;
      if (0 < param_5 + -3) {
        do {
          uVar23 = uVar12 + 0x20;
          puVar15 = (unsigned int *)(iVar20 + param_2 + iVar24);
          if ((uVar12 & 0xffffffff) < (uVar23 & 0xffffffff)) {
            uVar8 = uVar17 & 0x3fffffff;
            do {
              uVar16 = *puVar15;
              uVar2 = *(unsigned int *)((int)puVar15 + param_3);
              puVar15 = (unsigned int *)((int)puVar15 + param_3 + param_3);
              uVar3 = *puVar15;
              puVar15 = (unsigned int *)((int)puVar15 + param_3);
              uVar4 = *puVar15;
              lVar13 = uVar12 + (uVar17 + (uVar17 & 0x7fffffff) * 2 & 0x3fffffff) * 4;
              *(unsigned int *)lVar13 =
                   (uVar2 >> 8 & 0xff00ff | uVar16 >> 0x10 | uVar3 & 0xff0000ff) >> 8 |
                   uVar4 & 0xff000000;
              lVar13 = lVar13 + uVar8 * -4;
              lVar7 = lVar13 + uVar8 * -4;
              lVar10 = lVar7 + uVar8 * -4;
              *(unsigned int *)lVar13 =
                   (uVar2 & 0xff0000 | uVar16 >> 8 & 0xffff) >> 8 | (uVar4 & 0xff0000) << 8 |
                   uVar3 & 0xff0000;
              uVar12 = lVar10 + 4;
              *(unsigned int *)lVar7 =
                   (unsigned int)((((unsigned __int64)uVar4 & 0xffff00) << 8 | (unsigned __int64)uVar3 & 0xff00) << 8) |
                   uVar16 >> 8 & 0xff | uVar2 & 0xff00;
              puVar15 = (unsigned int *)((int)puVar15 + param_3);
              *(unsigned int *)lVar10 =
                   (unsigned int)(((((unsigned __int64)uVar4 & 0xffff) << 8 | (unsigned __int64)uVar3 & 0xffffffff000000ff
                           ) << 8 | (unsigned __int64)uVar2 & 0xffffffff000000ff) << 8) | uVar16 & 0xff;
            } while ((uVar12 & 0xffffffff) < (uVar23 & 0xffffffff));
            uVar9 = param_6 & 0xffffffff;
            uVar8 = param_4 & 0xffffffff;
          }
          iVar24 = iVar24 + 4;
          uVar12 = (uVar17 - 2 & 0xfffffff) * 0x10 + uVar12;
        } while (iVar24 < param_5 + -3);
        uVar23 = uVar21 & 0xffffffff;
      }
      if (iVar24 < param_5) {
        lVar13 = (__int64)iVar24 * (__int64)(int)uVar8;
        do {
          if ((int)uVar22 < (int)(uVar22 + 0x20)) {
            iVar6 = param_3 * 4;
            lVar7 = ((((uVar22 + 0x20) - uVar22) - 1 & 0xffffffff) >> 2) + 1;
            puVar14 = (unsigned char *)(iVar20 + iVar24 + param_2);
            puVar11 = (unsigned char *)(iVar19 + param_3 * -4 + iVar24 + param_2);
            puVar25 = (unsigned char *)(iVar18 + param_3 * -4 + iVar24 + param_2);
            uVar12 = uVar22;
            do {
              puVar25 = puVar25 + iVar6;
              uVar16 = (int)lVar13 + (int)uVar12;
              puVar11 = puVar11 + iVar6;
              uVar12 = uVar12 + 4;
              puVar5 = puVar14 + param_3;
              uVar1 = *puVar14;
              puVar14 = puVar14 + iVar6;
              *(unsigned int *)((((int)uVar16 >> 2) + (unsigned int)((int)uVar16 < 0 && (uVar16 & 3) != 0)) * 4 +
                       (int)param_1) = CONCAT31(CONCAT21(CONCAT11(*puVar25,*puVar11),*puVar5),uVar1)
              ;
              lVar7 = lVar7 + -1;
            } while (lVar7 != 0);
          }
          iVar24 = iVar24 + 1;
          lVar13 = lVar13 + uVar8;
        } while (iVar24 < param_5);
      }
      iVar24 = param_3 * 0x20;
      uVar22 = uVar22 + 0x20;
      iVar20 = iVar20 + iVar24;
      iVar19 = iVar24 + iVar19;
      iVar18 = iVar24 + iVar18;
    } while ((int)uVar22 < (int)uVar23);
  }
  iVar18 = 0;
  if (0 < param_5) {
    do {
      if ((int)uVar22 < (int)uVar9) {
        lVar13 = uVar9 - uVar22;
        puVar25 = (unsigned char *)(((int)uVar22 + -1) * param_3 + iVar18 + param_2);
        uVar17 = uVar22;
        do {
          puVar25 = puVar25 + param_3;
          *(unsigned char *)((int)param_1 + (int)uVar17) = *puVar25;
          uVar17 = uVar17 + 1;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      iVar18 = iVar18 + 1;
      param_1 = param_1 + uVar8;
    } while (iVar18 < param_5);
  }
  return;
}

