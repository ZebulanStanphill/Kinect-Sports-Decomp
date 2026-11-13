typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82A3FF60();
extern int fn_82A4F4E0();
extern int fn_82F643F8();
extern int fn_82F68918();
extern int fn_82F6A53C();
extern int fn_82F6A588();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200DFF4;
extern unsigned int lbl_82015438;
extern unsigned int lbl_8201543C;
extern unsigned int lbl_82089F00;
extern unsigned int lbl_821AAD20;


void fn_82A4E008(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4,
                  int param_5)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  float *pfVar9;
  __int64 lVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  int iVar14;
  unsigned __int64 uVar13;
  int iVar16;
  __int64 lVar15;
  unsigned int *puVar17;
  int *piVar20;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  float *pfVar21;
  unsigned __int64 uVar22;
  int iVar23;
  int iVar24;
  unsigned __int64 uVar25;
  int iVar26;
  unsigned __int64 uVar27;
  unsigned __int64 uVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  
  uVar7 = fn_82F6A53C();
  uVar22 = 0;
  pfVar9 = (float *)0x0;
  lVar10 = (uVar7 & 0x3fffffff) << 2;
  if (0x3fffffff < (uVar7 & 0xffffffff)) {
    lVar10 = -1;
  }
  lVar10 = fn_82A3FF60(0xffffffff83219d50,lVar10,0x2097000a,0);
  if (lVar10 == 0) {
    uVar22 = 0xffffffff8007000e;
    goto LAB_82a4e588;
  }
  lVar11 = (param_2 & 0x3fffffff) << 2;
  if (0x3fffffff < (param_2 & 0xffffffff)) {
    lVar11 = -1;
  }
  puVar8 = (unsigned int *)fn_82A3FF60(0xffffffff83219d50,lVar11,0x2097000a,0);
  if (puVar8 == (unsigned int *)0x0) {
LAB_82a4e0d8:
    uVar22 = 0xffffffff8007000e;
  }
  else {
    lVar11 = (param_2 & 0x3fffffff) << 2;
    if (0x3fffffff < (param_2 & 0xffffffff)) {
      lVar11 = -1;
    }
    pfVar9 = (float *)fn_82A3FF60(0xffffffff83219d50,lVar11,0x2097000a,0);
    if (pfVar9 == (float *)0x0) goto LAB_82a4e0d8;
    iVar16 = 0;
    iVar24 = (int)uVar7;
    if (0 < iVar24) {
      lVar11 = lVar10 + -4;
      uVar27 = uVar7;
      do {
        lVar11 = lVar11 + 4;
        *(int *)lVar11 = iVar16;
        iVar16 = iVar16 + 1;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    iVar16 = 0;
    iVar23 = (int)param_2;
    if (0 < iVar23) {
      piVar20 = puVar8 + -1;
      uVar27 = param_2;
      do {
        piVar20 = piVar20 + 1;
        *piVar20 = iVar16;
        iVar16 = iVar16 + 1;
        uVar27 = uVar27 - 1;
      } while (uVar27 != 0);
    }
    do {
      bVar4 = false;
      iVar14 = 0;
      iVar16 = (int)param_3;
      if (0 < iVar24 + -1) {
        iVar26 = (int)lVar10 - iVar16;
        lVar15 = lVar10;
        lVar11 = param_3;
        do {
          pfVar21 = (float *)(lVar11 + 4);
          fVar1 = pfVar21[-1];
          if (*pfVar21 < fVar1) {
            *(float *)lVar11 = *pfVar21;
            bVar4 = true;
            *pfVar21 = fVar1;
            uVar2 = *(unsigned int *)lVar15;
            *(unsigned int *)lVar15 = *(unsigned int *)(iVar26 + (int)pfVar21);
            *(unsigned int *)(iVar26 + (int)pfVar21) = uVar2;
          }
          iVar14 = iVar14 + 1;
          lVar15 = lVar15 + 4;
          lVar11 = lVar11 + 4;
        } while (iVar14 < iVar24 + -1);
      }
    } while (bVar4);
    do {
      bVar4 = false;
      iVar26 = 0;
      iVar14 = (int)param_4;
      if (0 < iVar23 + -1) {
        lVar11 = param_4;
        puVar17 = puVar8;
        do {
          pfVar21 = (float *)(lVar11 + 4);
          fVar1 = pfVar21[-1];
          if (*pfVar21 < fVar1) {
            *(float *)lVar11 = *pfVar21;
            bVar4 = true;
            *pfVar21 = fVar1;
            uVar2 = *puVar17;
            *puVar17 = *(unsigned int *)(((int)puVar8 - iVar14) + (int)pfVar21);
            *(unsigned int *)(((int)puVar8 - iVar14) + (int)pfVar21) = uVar2;
          }
          iVar26 = iVar26 + 1;
          puVar17 = puVar17 + 1;
          lVar11 = lVar11 + 4;
        } while (iVar26 < iVar23 + -1);
      }
      fVar1 = lbl_821AAD20;
    } while (bVar4);
    uVar18 = 0;
    dVar34 = (double)lbl_821AAD20;
    uVar27 = uVar7;
    if (0 < iVar24) {
      do {
        uVar27 = uVar18;
        if (dVar34 <= (double)*(float *)param_3) break;
        uVar18 = uVar18 + 1;
        param_3 = param_3 + 4;
        uVar27 = uVar7;
      } while ((int)uVar18 < iVar24);
    }
    uVar19 = 0;
    lVar11 = param_4;
    uVar18 = param_2;
    if (0 < iVar23) {
      do {
        uVar18 = uVar19;
        if (dVar34 <= (double)*(float *)lVar11) break;
        uVar19 = uVar19 + 1;
        lVar11 = lVar11 + 4;
        uVar18 = param_2;
      } while ((int)uVar19 < iVar23);
    }
    uVar19 = param_2 - uVar18;
    if (0 < iVar23) {
      lVar11 = 0;
      uVar13 = param_2;
      pfVar21 = pfVar9;
      do {
        *pfVar21 = fVar1;
        lVar15 = 0;
        uVar28 = uVar7;
        if (0 < iVar24) {
          do {
            uVar12 = lVar11 + lVar15;
            lVar15 = lVar15 + 1;
            *(float *)((int)((uVar12 & 0xffffffff) << 2) + param_5) = fVar1;
            uVar28 = uVar28 - 1;
          } while (uVar28 != 0);
        }
        uVar13 = uVar13 - 1;
        pfVar21 = pfVar21 + 1;
        lVar11 = lVar11 + uVar7;
      } while (uVar13 != 0);
    }
    iVar26 = (int)uVar19;
    if (0 < iVar26) {
      dVar31 = (double)lbl_82002AE0;
      if ((int)uVar27 < iVar24) {
        lVar11 = (uVar27 & 0x3fffffff) * 4 + lVar10;
        iVar16 = iVar16 - (int)lVar10;
        dVar32 = (double)lbl_8201543C;
        dVar33 = (double)lbl_82015438;
        dVar30 = lbl_82089F00;
        do {
          piVar20 = (int *)lVar11;
          uVar13 = uVar18;
          if ((int)uVar18 < iVar23) {
            lVar15 = (uVar18 & 0x3fffffff) * 4 + param_4;
            do {
              if (*(float *)(iVar16 + (int)piVar20) <= *(float *)lVar15) break;
              uVar13 = uVar13 + 1;
              lVar15 = lVar15 + 4;
            } while ((int)uVar13 < iVar23);
          }
          uVar13 = uVar13 - uVar18;
          trapWord(6,uVar19,0);
          uVar28 = (uVar13 + uVar19) - 1;
          uVar25 = (uVar13 - (__int64)((int)uVar13 / iVar26) * (__int64)iVar26) + uVar18;
          uVar12 = (uVar28 - (__int64)((int)uVar28 / iVar26) * (__int64)iVar26) + uVar18;
          iVar3 = (int)((uVar12 & 0x3fffffff) << 2);
          dVar36 = (double)(*(float *)((int)((uVar25 & 0xffffffff) << 2) + iVar14) -
                           *(float *)(iVar3 + iVar14));
          trapWord(6,uVar19,0);
          trapWord(5,uVar19 & ~(((uVar13 & 0x7fffffff) << 1 | (uVar13 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          trapWord(5,uVar19 & ~(((uVar28 & 0x7fffffff) << 1 | (uVar28 & 0xffffffff) >> 0x1f) - 1),
                   0xffff);
          dVar29 = (double)fn_82F68918((double)(float)(dVar36 * dVar33));
          dVar35 = (double)(*(float *)(iVar16 + (int)piVar20) - *(float *)(iVar3 + iVar14));
          dVar36 = -(double)(float)((double)(float)dVar29 * dVar32 - dVar36);
          dVar29 = (double)fn_82F68918((double)(float)(dVar35 * dVar33));
          if ((int)uVar12 != (int)uVar25) {
            if (dVar36 != dVar34) {
                    /* WARNING: Subroutine does not return */
              fn_82F643F8((double)(float)(-(double)(float)((double)(float)dVar29 * dVar32 -
                                                                dVar35) / dVar36) * dVar30);
            }
            uVar22 = 0xffffffff80070057;
            goto LAB_82a4e560;
          }
          *(float *)((*(int *)(iVar3 + (int)puVar8) * iVar24 + *piVar20) * 4 + param_5) =
               (float)dVar31;
          uVar27 = uVar27 + 1;
          pfVar9[*(int *)(iVar3 + (int)puVar8)] =
               (float)((double)pfVar9[*(int *)(iVar3 + (int)puVar8)] + dVar31);
          lVar11 = lVar11 + 4;
        } while ((int)uVar27 < iVar24);
      }
      fVar6 = lbl_8200DFF4;
      fVar5 = lbl_82006848;
      fVar1 = lbl_82002C5C;
      uVar27 = param_2;
      dVar30 = dVar34;
      pfVar21 = pfVar9;
      if (0 < iVar23) {
        do {
          if (dVar30 < (double)*pfVar21) {
            dVar30 = (double)*pfVar21;
          }
          uVar27 = uVar27 - 1;
          pfVar21 = pfVar21 + 1;
        } while (uVar27 != 0);
        if (dVar30 != dVar34) {
          lVar11 = 0;
          do {
            lVar15 = 0;
            if (0 < iVar24) {
              uVar27 = uVar7;
              do {
                uVar18 = lVar11 + lVar15;
                lVar15 = lVar15 + 1;
                iVar16 = (int)((uVar18 & 0xffffffff) << 2);
                *(float *)(iVar16 + param_5) =
                     (float)(__int64)
                            (int)((float)(dVar31 / dVar30) * *(float *)(iVar16 + param_5) * fVar6 +
                                 fVar1) * fVar5;
                uVar27 = uVar27 - 1;
              } while (uVar27 != 0);
            }
            param_2 = param_2 - 1;
            lVar11 = lVar11 + uVar7;
          } while (param_2 != 0);
        }
      }
    }
  }
LAB_82a4e560:
  fn_82A4F4E0(lVar10);
  if (puVar8 != (unsigned int *)0x0) {
    fn_82A4F4E0(puVar8);
  }
  if (pfVar9 != (float *)0x0) {
    fn_82A4F4E0(pfVar9);
  }
LAB_82a4e588:
  fn_82F6A588(uVar22);
  return;
}

