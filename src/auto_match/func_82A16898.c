extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82015BD4;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_a0;
extern unsigned int uStack_a2;


void fn_82A16898(int param_1,int param_2)

{
  float fVar1;
  __int64 lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned int uVar6;
  float fVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  unsigned short uVar11;
  unsigned short uVar12;
  unsigned short uVar13;
  unsigned int *puVar14;
  int *piVar16;
  unsigned __int64 uVar15;
  unsigned int *puVar18;
  unsigned __int64 uVar17;
  unsigned short uVar21;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned __int64 uVar22;
  unsigned short *puVar23;
  float *pfVar24;
  unsigned short *puVar25;
  unsigned __int64 uVar26;
  __int64 lVar27;
  unsigned short uStack_a2;
  unsigned __int64 uStack_a0;
  
  fVar7 = lbl_821AAD20;
  fVar1 = lbl_82015BD4;
  uVar8 = lbl_82002AE0;
  uVar22 = (unsigned __int64)*(unsigned int *)(param_1 + 0x1b90) + (unsigned __int64)*(unsigned int *)(param_1 + 0x1b8c);
  if (uVar22 != 0) {
    piVar16 = (int *)(param_1 + 0x10);
    puVar14 = (unsigned int *)(param_2 + 0xdc);
    fVar5 = (float)*(unsigned int *)(param_1 + 0x1b94);
    uVar26 = uVar22;
    do {
      uVar6 = uVar8;
      if (param_2 != 0) {
        uVar6 = *puVar14;
      }
      if (fVar7 < fVar5) {
        puVar18 = (unsigned int *)(*piVar16 + -4);
        fVar4 = fVar7;
        do {
          puVar18[3] = uVar6;
          fVar3 = fVar4 + fVar1;
          puVar18[1] = fVar4;
          puVar18[2] = fVar7;
          fVar5 = (float)*(unsigned int *)(param_1 + 0x1b94);
          if (fVar3 < (float)*(unsigned int *)(param_1 + 0x1b94)) {
            fVar5 = fVar3;
          }
          puVar18[7] = fVar4;
          puVar18[5] = fVar7;
          puVar18[4] = fVar5;
          puVar18[6] = uVar6;
          puVar18[8] = (float)*(unsigned int *)(param_1 + 0x1b98);
          puVar18 = puVar18 + 9;
          *puVar18 = uVar6;
          fVar5 = (float)*(unsigned int *)(param_1 + 0x1b94);
          fVar4 = fVar3;
        } while (fVar3 < fVar5);
      }
      puVar14 = puVar14 + 1;
      piVar16 = piVar16 + 1;
      uVar26 = uVar26 - 1;
    } while (uVar26 != 0);
  }
  if ((uVar22 & 0xffffffff) != 0) {
    pfVar24 = (float *)(param_1 + 0x1b34);
    uVar26 = uVar22;
    do {
      uVar9 = 0;
      puVar25 = (unsigned short *)((int)pfVar24[-0x673] + -2);
      lVar27 = 8;
      do {
        fVar1 = *pfVar24;
        uVar17 = ((unsigned __int64)(uVar9 & 0x1fffffff) & 0x1ffffe00) +
                 ((unsigned __int64)((uVar9 & 0x1fffffff) << 1) & 0x1c0) + ((unsigned __int64)(uVar9 << 3) & 0x3f)
        ;
        uVar19 = (unsigned int)uVar17;
        uVar15 = ((unsigned __int64)(uVar9 & 0x1fffffff) & 0x1ffffe00) +
                 ((unsigned __int64)((uVar9 & 0x1fffffff) << 1) & 0x1c0) + ((unsigned __int64)(uVar9 << 3) & 0x3f)
        ;
        lVar2 = ((((((unsigned __int64)(uVar19 >> 9) & 1) + (unsigned __int64)(uVar19 >> 10) * 4 +
                   ((unsigned __int64)((uVar9 & 0x1fffffff) >> 7) & 2)) * 4 +
                  ((uVar15 >> 8 & 0xfffffe) + (unsigned __int64)((uVar9 & 0x1fffffff) >> 3) & 3)) * 2 +
                 (uVar17 >> 4 & 1 |
                 (unsigned __int64)((uVar19 * 2 & 0x1e) + (uVar19 & 0x1e0) >> 6) & 0xfffffffffffffffe)) * 4
                + (unsigned __int64)(((unsigned int)(uVar15 >> 1) & 0x30 | (unsigned int)uVar15 & 0xf) >> 3)) * 4;
        iVar10 = (int)lVar2;
        fVar7 = fVar1;
        if (lVar2 + 3U < 0x1f) {
          fVar7 = *(float *)((iVar10 + 0x6b1) * 4 + param_1) * fVar1;
        }
        fVar5 = *(float *)((iVar10 + 0x6ae) * 4 + param_1) * fVar1;
        uVar15 = (unsigned __int64)(unsigned int)fVar5 & 0x7fffffff;
        uVar11 = (unsigned short)((unsigned int)fVar5 >> 0x10) & 0x8000;
        if (uVar15 < 0x47fff000) {
          if (uVar15 < 0x38800000) {
            uVar15 = (unsigned __int64)
                     (((unsigned int)uVar15 & 0x7fffff | 0x800000) >> (0x71 - ((unsigned int)uVar15 >> 0x17) & 0x3f)
                     );
          }
          else {
            uVar15 = uVar15 - 0x38000000;
          }
          uVar11 = (unsigned short)((((uVar15 & 0xffffffff) >> 0xd & 1) + uVar15 + 0xfff & 0xffffffff) >>
                           0xd) | uVar11;
        }
        else {
          uVar11 = uVar11 | 0x7fff;
        }
        fVar5 = *(float *)((iVar10 + 0x6af) * 4 + param_1) * fVar1;
        uVar15 = (unsigned __int64)(unsigned int)fVar5 & 0x7fffffff;
        uVar12 = (unsigned short)((unsigned int)fVar5 >> 0x10) & 0x8000;
        if (uVar15 < 0x47fff000) {
          if (uVar15 < 0x38800000) {
            uVar15 = (unsigned __int64)
                     (((unsigned int)uVar15 & 0x7fffff | 0x800000) >> (0x71 - ((unsigned int)uVar15 >> 0x17) & 0x3f)
                     );
          }
          else {
            uVar15 = uVar15 - 0x38000000;
          }
          uVar12 = (unsigned short)((((uVar15 & 0xffffffff) >> 0xd & 1) + uVar15 + 0xfff & 0xffffffff) >>
                           0xd) | uVar12;
        }
        else {
          uVar12 = uVar12 | 0x7fff;
        }
        fVar1 = *(float *)((iVar10 + 0x6b0) * 4 + param_1) * fVar1;
        uVar15 = (unsigned __int64)(unsigned int)fVar1 & 0x7fffffff;
        uVar13 = (unsigned short)((unsigned int)fVar1 >> 0x10) & 0x8000;
        if (uVar15 < 0x47fff000) {
          if (uVar15 < 0x38800000) {
            uVar15 = (unsigned __int64)
                     (((unsigned int)uVar15 & 0x7fffff | 0x800000) >> (0x71 - ((unsigned int)uVar15 >> 0x17) & 0x3f)
                     );
          }
          else {
            uVar15 = uVar15 - 0x38000000;
          }
          uVar13 = (unsigned short)((((uVar15 & 0xffffffff) >> 0xd & 1) + uVar15 + 0xfff & 0xffffffff) >>
                           0xd) | uVar13;
        }
        else {
          uVar13 = uVar13 | 0x7fff;
        }
        uStack_a0 = (unsigned __int64)(unsigned int)fVar7 << 0x20;
        uVar15 = (unsigned __int64)(unsigned int)fVar7 & 0x7fffffff;
        uVar21 = (unsigned short)((unsigned int)fVar7 >> 0x10) & 0x8000;
        if (uVar15 < 0x47fff000) {
          if (uVar15 < 0x38800000) {
            uVar15 = (unsigned __int64)
                     (((unsigned int)uVar15 & 0x7fffff | 0x800000) >> (0x71 - ((unsigned int)uVar15 >> 0x17) & 0x3f)
                     );
          }
          else {
            uVar15 = uVar15 - 0x38000000;
          }
          uVar21 = (unsigned short)((((uVar15 & 0xffffffff) >> 0xd & 1) + uVar15 + 0xfff & 0xffffffff) >>
                           0xd) | uVar21;
        }
        else {
          uVar21 = uVar21 | 0x7fff;
        }
        puVar25[1] = uVar11;
        uVar9 = uVar9 + 1;
        puVar25[2] = uVar12;
        puVar25[3] = uVar13;
        puVar25 = puVar25 + 4;
        *puVar25 = uVar21;
        lVar27 = lVar27 + -1;
      } while (lVar27 != 0);
      uVar26 = uVar26 - 1;
      pfVar24 = pfVar24 + 1;
    } while (uVar26 != 0);
    if ((uVar22 & 0xffffffff) != 0) {
      pfVar24 = (float *)(param_1 + 0x1b34);
      do {
        uVar9 = 0;
        puVar23 = (unsigned short *)((int)pfVar24[-0x645] + -2);
        do {
          fVar1 = *pfVar24;
          iVar10 = 0;
          puVar25 = &uStack_a2;
          lVar27 = 2;
          do {
            uVar19 = uVar9 + iVar10;
            uVar15 = ((unsigned __int64)((uVar19 & 0x7fffffff) >> 2) & 0x1ffffe00) +
                     ((unsigned __int64)((uVar19 & 0x7fffffff) >> 1) & 0x1c0) +
                     ((unsigned __int64)(uVar19 * 2) & 0x3f);
            uVar20 = (unsigned int)uVar15;
            uVar26 = ((unsigned __int64)((uVar19 & 0x7fffffff) >> 1) & 0x1c0) +
                     ((unsigned __int64)(uVar19 * 2) & 0x3f);
            uVar26 = ((((unsigned __int64)(uVar20 >> 7) & 1) + (unsigned __int64)(uVar20 >> 8) * 4 +
                      ((unsigned __int64)((uVar19 & 0x7fffffff) >> 9) & 2)) * 8 +
                      ((unsigned __int64)((uVar20 * 2 & 0x1e) + (uVar20 & 0x60) >> 4) & 0xfffffffe) +
                      ((uVar26 >> 6 & 0x3fffffe) + (unsigned __int64)((uVar19 & 0x7fffffff) >> 5) & 3) +
                     (uVar15 >> 4 & 1)) * 8 + (unsigned __int64)(((unsigned int)uVar26 & 0xf) >> 1);
            fVar7 = fVar1;
            if (uVar26 < 0x1f) {
              fVar7 = *(float *)(((int)uVar26 + 0x6ae) * 4 + param_1) * fVar1;
            }
            uVar26 = (unsigned __int64)(unsigned int)fVar7 & 0x7fffffff;
            uVar11 = (unsigned short)((unsigned int)fVar7 >> 0x10) & 0x8000;
            if (uVar26 < 0x47fff000) {
              if (uVar26 < 0x38800000) {
                uVar26 = (unsigned __int64)
                         (((unsigned int)uVar26 & 0x7fffff | 0x800000) >>
                         (0x71 - ((unsigned int)uVar26 >> 0x17) & 0x3f));
              }
              else {
                uVar26 = uVar26 - 0x38000000;
              }
              uVar11 = (unsigned short)((((uVar26 & 0xffffffff) >> 0xd & 1) + uVar26 + 0xfff & 0xffffffff)
                               >> 0xd) | uVar11;
            }
            else {
              uVar11 = uVar11 | 0x7fff;
            }
            puVar25 = puVar25 + 1;
            *puVar25 = uVar11;
            iVar10 = iVar10 + 1;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          uVar9 = uVar9 + 2;
          puVar23[1] = (((unsigned __int64)(uStack_a0) >> 0) & 0xFFFF);
          puVar23 = puVar23 + 2;
          *puVar23 = (((unsigned __int64)(uStack_a0) >> 16) & 0xFFFF);
        } while (uVar9 < 0x20);
        uVar22 = uVar22 - 1;
        pfVar24 = pfVar24 + 1;
      } while (uVar22 != 0);
    }
  }
  return;
}

