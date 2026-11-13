#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))


void fn_82CD7760(unsigned __int64 param_1,int param_2,int param_3,unsigned __int64 param_4,int param_5,
                  unsigned __int64 param_6)

{
  unsigned char uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned char *puVar6;
  unsigned __int64 uVar7;
  int iVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  int iVar15;
  unsigned __int64 uVar14;
  unsigned __int64 uVar16;
  unsigned char *puVar17;
  unsigned int *puVar18;
  unsigned __int64 uVar19;
  int iVar20;
  unsigned __int64 uVar21;
  int iVar22;
  unsigned __int64 uVar23;
  int iVar24;
  unsigned char *puVar25;
  __int64 lVar26;
  unsigned char *puVar27;
  
  uVar19 = (__int64)((int)param_4 >> 2) + (unsigned __int64)((int)param_4 < 0 && (param_4 & 3) != 0);
  uVar9 = param_6 - 0x1f;
  uVar21 = 0;
  uVar11 = param_4;
  uVar12 = param_6;
  if (0 < (__int64)uVar9) {
    iVar20 = 0;
    iVar22 = param_3 << 1;
    uVar23 = uVar9;
    do {
      iVar24 = 0;
      uVar16 = (param_1 - 3) - (uVar21 & 0xffffffff);
      if (0 < param_5 + -3) {
        do {
          uVar23 = uVar16 - 0x20;
          puVar18 = (unsigned int *)(iVar20 + param_2 + iVar24);
          if ((uVar23 & 0xffffffff) < (uVar16 & 0xffffffff)) {
            uVar11 = uVar19 & 0x3fffffff;
            do {
              uVar2 = *puVar18;
              uVar3 = *(unsigned int *)((int)puVar18 + param_3);
              puVar18 = (unsigned int *)((int)puVar18 + param_3 + param_3);
              uVar4 = *puVar18;
              puVar18 = (unsigned int *)((int)puVar18 + param_3);
              uVar5 = *puVar18;
              lVar10 = uVar16 + (uVar19 + (uVar19 & 0x7fffffff) * 2 & 0x3fffffff) * 4;
              *(unsigned int *)lVar10 =
                   (uVar4 >> 8 & 0xff00ff | uVar5 >> 0x10 | uVar3 & 0xff0000ff) >> 8 |
                   uVar2 & 0xff000000;
              lVar10 = lVar10 + uVar11 * -4;
              lVar26 = lVar10 + uVar11 * -4;
              lVar13 = lVar26 + uVar11 * -4;
              *(unsigned int *)lVar10 =
                   (uVar4 & 0xff0000 | uVar5 >> 8 & 0xffff) >> 8 | (uVar2 & 0xff0000) << 8 |
                   uVar3 & 0xff0000;
              uVar16 = lVar13 - 4;
              *(unsigned int *)lVar26 =
                   (unsigned int)((((unsigned __int64)uVar2 & 0xffff00) << 8 | (unsigned __int64)uVar3 & 0xff00) << 8) |
                   uVar5 >> 8 & 0xff | uVar4 & 0xff00;
              puVar18 = (unsigned int *)((int)puVar18 + param_3);
              *(unsigned int *)lVar13 =
                   (unsigned int)(((((unsigned __int64)uVar2 & 0xffff) << 8 | (unsigned __int64)uVar3 & 0xffffffff000000ff
                           ) << 8 | (unsigned __int64)uVar4 & 0xffffffff000000ff) << 8) | uVar5 & 0xff;
            } while ((uVar23 & 0xffffffff) < (uVar16 & 0xffffffff));
            uVar12 = param_6 & 0xffffffff;
            uVar11 = param_4 & 0xffffffff;
          }
          iVar24 = iVar24 + 4;
          uVar16 = (uVar19 + 2 & 0xfffffff) * 0x10 + uVar16;
        } while (iVar24 < param_5 + -3);
        uVar23 = uVar9 & 0xffffffff;
      }
      if (iVar24 < param_5) {
        uVar16 = (__int64)iVar24 * (__int64)(int)uVar11 - uVar21;
        do {
          if ((int)uVar21 < (int)(uVar21 + 0x20)) {
            iVar8 = param_3 * 4;
            lVar10 = ((((uVar21 + 0x20) - uVar21) - 1 & 0xffffffff) >> 2) + 1;
            puVar25 = (unsigned char *)(iVar22 + param_3 * -3 + iVar24 + param_2);
            puVar17 = (unsigned char *)(iVar20 + iVar24 + param_2);
            puVar27 = (unsigned char *)(iVar22 + param_3 * -4 + iVar24 + param_2);
            uVar14 = uVar16;
            do {
              uVar1 = *puVar17;
              iVar15 = (int)uVar14;
              uVar7 = uVar14 & 3;
              puVar6 = puVar17 + param_3;
              puVar17 = puVar17 + iVar8;
              puVar27 = puVar27 + iVar8;
              puVar25 = puVar25 + iVar8;
              uVar14 = uVar14 - 4;
              *(unsigned int *)(((iVar15 >> 2) + (unsigned int)(iVar15 < 0 && uVar7 != 0)) * 4 + (int)(param_1 - 3))
                   = CONCAT31(CONCAT21(CONCAT11(uVar1,*puVar6),*puVar27),*puVar25);
              lVar10 = lVar10 + -1;
            } while (lVar10 != 0);
          }
          iVar24 = iVar24 + 1;
          uVar16 = uVar16 + uVar11;
        } while (iVar24 < param_5);
      }
      uVar21 = uVar21 + 0x20;
      iVar20 = iVar20 + param_3 * 0x20;
      iVar22 = param_3 * 0x20 + iVar22;
    } while ((int)uVar21 < (int)uVar23);
    param_1 = param_1 & 0xffffffff;
  }
  iVar20 = 0;
  if (0 < param_5) {
    lVar10 = param_1 - uVar21;
    do {
      if ((int)uVar21 < (int)uVar12) {
        lVar26 = uVar12 - uVar21;
        lVar13 = lVar10 + 1;
        puVar27 = (unsigned char *)(((int)uVar21 + -1) * param_3 + iVar20 + param_2);
        do {
          puVar27 = puVar27 + param_3;
          lVar13 = lVar13 + -1;
          *(unsigned char *)lVar13 = *puVar27;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      iVar20 = iVar20 + 1;
      lVar10 = lVar10 + uVar11;
    } while (iVar20 < param_5);
  }
  return;
}

