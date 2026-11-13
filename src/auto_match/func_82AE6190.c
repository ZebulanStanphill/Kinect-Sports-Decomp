#define true 1
extern unsigned int fStack_b4;
extern int fn_82ABE9F0();
extern int fn_82AF04D0();
extern int fn_82B86348();
extern int fn_82B8AC10();
extern int fn_82F65FE0();
extern int fn_82F68CC0();


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_82AE6190(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  float *pfVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  int *piVar14;
  unsigned int *puVar15;
  float *pfVar16;
  unsigned int uVar17;
  unsigned int uVar18;
  float *pfVar19;
  unsigned int uVar20;
  int *piVar21;
  unsigned int *puVar22;
  unsigned int uVar24;
  unsigned __int64 uVar23;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  __int64 lVar29;
  unsigned int *puVar30;
  unsigned int uVar31;
  unsigned int uVar32;
  unsigned int uVar33;
  float fStack_b4;
  float afStack_b0 [44];
  
  puVar6 = (unsigned int *)fn_82ABE9F0(param_1,*(int *)(param_1 + 0x58) << 2,0);
  uVar27 = 0;
  puVar30 = (unsigned int *)(param_1 + 0x3c);
  lVar29 = 7;
  do {
    uVar32 = *puVar30;
    if (uVar32 != 0) {
      puVar15 = puVar6 + (uVar27 - 1);
      do {
        if ((*(unsigned int *)(uVar32 + 8) & 0x3f80) != 0x3980) {
          fn_82AF04D0(uVar32,param_1);
          puVar1 = *(unsigned int **)(uVar32 + 4);
          if (puVar1 == (unsigned int *)0x0) {
            fn_82B8AC10(param_1,uVar32,0,1);
          }
          else {
            uVar33 = 0;
            uVar31 = 0;
            uVar9 = 0;
            for (; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
              if (puVar1[4] != 0) {
                uVar7 = 0;
                uVar24 = 0;
                uVar28 = *puVar1 >> 0x19 & 7;
                if (uVar28 != 0) {
                  uVar18 = 0;
                  do {
                    uVar24 = uVar24 + 1;
                    uVar17 = uVar18 & 0x3f;
                    uVar18 = uVar18 + 2;
                    uVar7 = 1 << ((*puVar1 >> 5 & 0xff) >> uVar17 & 3) | uVar7;
                  } while (uVar24 < uVar28);
                }
                uVar9 = uVar7 | uVar9;
              }
            }
            uVar28 = 1;
            uVar7 = 0;
            pfVar10 = &fStack_b4;
            pfVar19 = (float *)(uVar32 + 0x2c);
            do {
              if ((uVar28 & uVar9) != 0) {
                uVar24 = 0;
                if (uVar33 != 0) {
                  pfVar16 = afStack_b0;
                  do {
                    if (*pfVar16 == *pfVar19) break;
                    uVar24 = uVar24 + 1;
                    pfVar16 = pfVar16 + 1;
                  } while (uVar24 < uVar33);
                }
                if (uVar24 == uVar33) {
                  pfVar10 = pfVar10 + 1;
                  *pfVar10 = *pfVar19;
                  uVar33 = uVar33 + 1;
                }
                uVar31 = uVar31 & ~(3 << (uVar7 & 0x3f)) | uVar24 << (uVar7 & 0x3f);
              }
              uVar7 = uVar7 + 2;
              pfVar19 = pfVar19 + 1;
              uVar28 = uVar28 << 1;
            } while (uVar7 < 8);
            if ((uVar33 != (*(unsigned int *)(uVar32 + 8) >> 0xe & 7)) || (uVar9 >> (uVar33 & 0x3f) != 0)) {
              fn_82F68CC0((float *)(uVar32 + 0x2c),afStack_b0,uVar33 << 2);
              uVar9 = *(unsigned int *)(uVar32 + 8);
              puVar1 = *(unsigned int **)(uVar32 + 4);
              uVar23 = (unsigned __int64)(unsigned int)(1 << (uVar33 & 0x3f)) - 1;
              *(unsigned int *)(uVar32 + 8) = (uVar33 & 7) << 0xe | uVar9 & 0xfffe3fff;
              *(unsigned int *)(uVar32 + 8) =
                   (unsigned int)((((0x8da691691448U >> (uVar23 & 0x7f)) >> (uVar23 & 0x7f)) >>
                           (uVar23 & 0x7f) & 7) << 0xe) |
                   (unsigned int)((uVar23 & 0xffff1fff) << 1) & 0x1e | uVar9 & 0xfffe3fe1;
              for (; puVar1 != (unsigned int *)0x0; puVar1 = (unsigned int *)puVar1[2]) {
                if (puVar1[4] != 0) {
                  uVar9 = *puVar1;
                  *puVar1 = ((((uVar31 >> (uVar9 >> 10 & 6) & 3) << 2 |
                              uVar31 >> (uVar9 >> 8 & 6) & 3) << 2 | uVar31 >> (uVar9 >> 6 & 6) & 3)
                             << 2 | uVar31 >> (uVar9 >> 4 & 6) & 3) << 5 | uVar9 & 0xffffe01f;
                }
              }
            }
            puVar15 = puVar15 + 1;
            *puVar15 = uVar32;
            uVar27 = uVar27 + 1;
          }
        }
        uVar32 = *(unsigned int *)(uVar32 + 0x20);
      } while (uVar32 != 0);
    }
    lVar29 = lVar29 + -1;
    puVar30 = puVar30 + 1;
  } while (lVar29 != 0);
  fn_82F65FE0(puVar6,uVar27,4,0xffffffff82ae5020);
  uVar32 = 0;
  puVar30 = puVar6;
  if (uVar27 != 0) {
    do {
      uVar9 = *puVar30;
      if (uVar9 != 0) {
        uVar33 = 0;
        uVar31 = *(unsigned int *)(uVar9 + 8) >> 0xe & 7;
        puVar15 = puVar6;
        if (uVar32 != 0) {
LAB_82ae6458:
          uVar28 = *puVar15;
          if (uVar28 == 0) goto LAB_82ae64ec;
          uVar24 = 0;
          uVar18 = 0;
          uVar7 = *(unsigned int *)(uVar28 + 8) >> 0xe & 7;
          if (uVar31 != 0) {
            uVar17 = 0;
            pfVar10 = (float *)(uVar9 + 0x2c);
            do {
              uVar25 = 0;
              if (uVar7 != 0) {
                pfVar19 = (float *)(uVar28 + 0x2c);
                do {
                  if (*pfVar10 == *pfVar19) {
                    uVar24 = uVar24 & ~(3 << (uVar17 & 0x3f)) | uVar25 << (uVar17 & 0x3f);
                    break;
                  }
                  uVar25 = uVar25 + 1;
                  pfVar19 = pfVar19 + 1;
                } while (uVar25 < uVar7);
              }
              if (uVar25 == uVar7) break;
              uVar18 = uVar18 + 1;
              pfVar10 = pfVar10 + 1;
              uVar17 = uVar17 + 2;
            } while (uVar18 < uVar31);
          }
          if (uVar18 != uVar31) goto LAB_82ae64ec;
          puVar15 = (unsigned int *)(uVar9 + 4);
          while( true ) {
            puVar1 = (unsigned int *)*puVar15;
            if (puVar1 == (unsigned int *)0x0) break;
            if (puVar1[4] != 0) {
              puVar22 = (unsigned int *)(puVar1[3] + 4);
              for (puVar4 = (unsigned int *)*puVar22; puVar4 != puVar1; puVar4 = (unsigned int *)puVar4[2]) {
                puVar22 = puVar4 + 2;
              }
              *puVar22 = puVar1[2];
              puVar1[2] = *(unsigned int *)(uVar28 + 4);
              *(unsigned int **)(uVar28 + 4) = puVar1;
              uVar31 = *puVar1;
              puVar1[3] = uVar28;
              *puVar1 = ((((uVar24 >> (uVar31 >> 10 & 6) & 3) << 2 | uVar24 >> (uVar31 >> 8 & 6) & 3
                          ) << 2 | uVar24 >> (uVar31 >> 6 & 6) & 3) << 2 |
                        uVar24 >> (uVar31 >> 4 & 6) & 3) << 5 | uVar31 & 0xffffe01f;
            }
            if ((unsigned int *)*puVar15 == puVar1) {
              puVar15 = puVar1 + 2;
            }
          }
          fn_82B8AC10(param_1,uVar9,0,1);
          *puVar30 = 0;
LAB_82ae65c4:
          if (uVar32 <= uVar33) goto LAB_82ae65cc;
          goto LAB_82ae68f4;
        }
LAB_82ae65cc:
        uVar31 = uVar32 + 1;
        while( true ) {
          uVar7 = 0;
          uVar24 = 0;
          uVar18 = 0xffffffff;
          uVar28 = 0;
          uVar33 = *(unsigned int *)(uVar9 + 8) >> 0xe;
          uVar17 = uVar33 & 7;
          if (uVar27 <= uVar31) break;
          puVar15 = puVar6 + uVar31;
          uVar25 = uVar31;
          do {
            uVar20 = *puVar15;
            if (uVar20 != 0) {
              uVar13 = 0;
              uVar11 = 0;
              uVar5 = *(unsigned int *)(uVar20 + 8) >> 0xe & 7;
              uVar8 = 0;
              uVar12 = uVar17;
              if (uVar5 != 0) {
                uVar26 = 0;
                pfVar10 = (float *)(uVar20 + 0x2c);
                do {
                  uVar20 = 0;
                  if ((uVar33 & 7) != 0) {
                    pfVar19 = (float *)(uVar9 + 0x2c);
                    do {
                      if (*pfVar10 == *pfVar19) {
                        uVar11 = uVar11 + 1;
                        uVar13 = uVar13 & ~(3 << (uVar26 & 0x3f)) | uVar20 << (uVar26 & 0x3f);
                        break;
                      }
                      uVar20 = uVar20 + 1;
                      pfVar19 = pfVar19 + 1;
                    } while (uVar20 < uVar17);
                  }
                  if (uVar20 == uVar17) {
                    if (uVar12 == 4) break;
                    uVar20 = uVar12 << (uVar26 & 0x3f);
                    uVar12 = uVar12 + 1;
                    uVar13 = uVar13 & ~(3 << (uVar26 & 0x3f)) | uVar20;
                  }
                  uVar8 = uVar8 + 1;
                  pfVar10 = pfVar10 + 1;
                  uVar26 = uVar26 + 2;
                } while (uVar8 < uVar5);
              }
              if (((uVar8 == uVar5) && (uVar24 <= uVar12)) && (uVar7 <= uVar11)) {
                uVar28 = uVar13;
                uVar7 = uVar11;
                uVar24 = uVar12;
                uVar18 = uVar25;
              }
            }
            uVar25 = uVar25 + 1;
            puVar15 = puVar15 + 1;
          } while (uVar25 < uVar27);
          if (uVar24 == 0) break;
          uVar33 = puVar6[uVar18];
          fn_82F68CC0(afStack_b0,uVar9 + 0x2c,uVar17);
          if (uVar24 != 0) {
            uVar25 = 0;
            pfVar10 = (float *)(uVar33 + 0x2c);
            uVar7 = uVar24;
            do {
              uVar20 = uVar28 >> (uVar25 & 0x3f) & 3;
              if (uVar17 <= uVar20) {
                afStack_b0[uVar20] = *pfVar10;
              }
              pfVar10 = pfVar10 + 1;
              uVar25 = uVar25 + 2;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          uVar7 = fn_82B86348(param_1,uVar24,afStack_b0,0);
          uVar23 = (unsigned __int64)(unsigned int)(1 << (uVar24 & 0x3f)) - 1;
          piVar14 = (int *)(uVar9 + 4);
          *(unsigned int *)(uVar7 + 8) =
               (unsigned int)((((0x8da691691448U >> (uVar23 & 0x7f)) >> (uVar23 & 0x7f)) >> (uVar23 & 0x7f)
                      & 7) << 0xe) |
               (unsigned int)((uVar23 & 0xffff1fff) << 1) & 0x1e | *(unsigned int *)(uVar7 + 8) & 0xfffe3fe1;
          while( true ) {
            iVar2 = *piVar14;
            if (iVar2 == 0) break;
            if (*(int *)(iVar2 + 0x10) != 0) {
              piVar21 = (int *)(*(int *)(iVar2 + 0xc) + 4);
              for (iVar3 = *piVar21; iVar3 != iVar2; iVar3 = *(int *)(iVar3 + 8)) {
                piVar21 = (int *)(iVar3 + 8);
              }
              *piVar21 = *(int *)(iVar2 + 8);
              *(unsigned int *)(iVar2 + 8) = *(unsigned int *)(uVar7 + 4);
              *(int *)(uVar7 + 4) = iVar2;
              *(unsigned int *)(iVar2 + 0xc) = uVar7;
            }
            if (*piVar14 == iVar2) {
              piVar14 = (int *)(iVar2 + 8);
            }
          }
          puVar15 = (unsigned int *)(uVar33 + 4);
          while (puVar1 = (unsigned int *)*puVar15, puVar1 != (unsigned int *)0x0) {
            if (puVar1[4] != 0) {
              puVar22 = (unsigned int *)(puVar1[3] + 4);
              for (puVar4 = (unsigned int *)*puVar22; puVar4 != puVar1; puVar4 = (unsigned int *)puVar4[2]) {
                puVar22 = puVar4 + 2;
              }
              *puVar22 = puVar1[2];
              puVar1[2] = *(unsigned int *)(uVar7 + 4);
              *(unsigned int **)(uVar7 + 4) = puVar1;
              uVar24 = *puVar1;
              puVar1[3] = uVar7;
              *puVar1 = ((((uVar28 >> (uVar24 >> 10 & 6) & 3) << 2 | uVar28 >> (uVar24 >> 8 & 6) & 3
                          ) << 2 | uVar28 >> (uVar24 >> 6 & 6) & 3) << 2 |
                        uVar28 >> (uVar24 >> 4 & 6) & 3) << 5 | uVar24 & 0xffffe01f;
            }
            if ((unsigned int *)*puVar15 == puVar1) {
              puVar15 = puVar1 + 2;
            }
          }
          fn_82B8AC10(param_1,uVar9,0,1);
          *puVar30 = uVar7;
          fn_82B8AC10(param_1,uVar33,0,1);
          puVar6[uVar18] = 0;
          uVar9 = uVar7;
        }
      }
LAB_82ae68f4:
      uVar32 = uVar32 + 1;
      puVar30 = puVar30 + 1;
    } while (uVar32 < uVar27);
  }
  return;
LAB_82ae64ec:
  uVar33 = uVar33 + 1;
  puVar15 = puVar15 + 1;
  if (uVar32 <= uVar33) goto LAB_82ae65c4;
  goto LAB_82ae6458;
}

