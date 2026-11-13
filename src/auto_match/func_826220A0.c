#define NAN(x) ((x) != (x))
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956B4;
extern unsigned int ltcg_pool_0_0f;


void fn_826220A0(int param_1,float *param_2,float *param_3,float *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float fVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned int uVar13;
  __int64 lVar12;
  unsigned int uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  __int64 lVar19;
  unsigned int uVar21;
  unsigned int uVar22;
  __int64 lVar20;
  unsigned int uVar24;
  __int64 lVar23;
  float fVar25;
  unsigned int uVar28;
  __int64 lVar26;
  __int64 lVar27;
  unsigned __int64 uVar29;
  unsigned __int64 uVar30;
  unsigned __int64 uVar31;
  unsigned __int64 uVar32;
  unsigned __int64 uVar33;
  __int64 lVar34;
  __int64 lVar35;
  unsigned __int64 uVar36;
  unsigned __int64 uVar37;
  unsigned __int64 uVar38;
  unsigned __int64 uVar39;
  __int64 lVar40;
  unsigned __int64 uVar41;
  __int64 lVar42;
  __int64 lVar43;
  __int64 lVar44;
  
  fVar25 = param_2[2] - param_3[2];
  uVar1 = (unsigned int)(param_3[1] * lbl_821956B4 + lbl_8218E8E8);
  uVar2 = (unsigned int)(param_4[1] * lbl_821956B4 + lbl_8218E8E8);
  uVar3 = (unsigned int)(param_2[1] * lbl_821956B4 + lbl_8218E8E8);
  uVar4 = (unsigned int)(*param_4 * lbl_821956B4 + lbl_8218E8E8);
  uVar5 = (unsigned int)(*param_2 * lbl_821956B4 + lbl_8218E8E8);
  uVar6 = (unsigned int)(*param_3 * lbl_821956B4 + lbl_8218E8E8);
  fVar7 = param_2[2];
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar25 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar25) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar7 = param_3[2];
  }
  fVar25 = fVar7 - param_4[2];
  uVar32 = (unsigned __int64)uVar1 - (unsigned __int64)uVar2;
  uVar31 = (unsigned __int64)uVar2 - (unsigned __int64)uVar3;
  uVar30 = (unsigned __int64)uVar5 - (unsigned __int64)uVar6;
  uVar33 = (unsigned __int64)uVar3 - (unsigned __int64)uVar1;
  uVar29 = (unsigned __int64)uVar6 - (unsigned __int64)uVar4;
  uVar11 = (unsigned __int64)uVar4 - (unsigned __int64)uVar5;
  uVar39 = (uVar32 & 0xfffffff) * 0x10;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar25 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar25) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar7 = param_4[2];
  }
  uVar37 = (uVar31 & 0xfffffff) * 0x10;
  uVar41 = (uVar30 & 0xfffffff) << 4;
  uVar38 = (uVar29 & 0xfffffff) << 4;
  uVar36 = (uVar11 & 0xfffffff) << 4;
  if (*(float *)(&lbl_821954D8 +
                ((unsigned int)(unsigned char)((fVar7 < ltcg_pool_0_0f) << 2) |
                (unsigned int)(NAN(fVar7) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
    fVar7 = ltcg_pool_0_0f;
  }
  uVar14 = (unsigned int)((uVar41 & 0x1fffffff) << 3);
  if ((int)uVar41 < 1) {
    uVar14 = 0;
  }
  iVar15 = (int)((uVar39 & 0x1fffffff) << 3);
  if (-1 < (int)uVar39) {
    iVar15 = 0;
  }
  iVar16 = (int)((uVar38 & 0x1fffffff) << 3);
  if ((int)uVar38 < 1) {
    iVar16 = 0;
  }
  iVar17 = (int)((uVar37 & 0x1fffffff) << 3);
  if (-1 < (int)uVar37) {
    iVar17 = 0;
  }
  iVar18 = (int)((uVar36 & 0x1fffffff) << 3);
  if ((int)uVar36 < 1) {
    iVar18 = 0;
  }
  uVar28 = uVar5;
  if ((int)uVar6 <= (int)uVar5) {
    uVar28 = uVar6;
  }
  if ((int)uVar4 <= (int)uVar28) {
    uVar28 = uVar4;
  }
  uVar24 = uVar3;
  if ((int)uVar1 <= (int)uVar3) {
    uVar24 = uVar1;
  }
  if ((int)uVar2 <= (int)uVar24) {
    uVar24 = uVar2;
  }
  uVar21 = uVar5;
  if ((int)uVar5 < (int)uVar6) {
    uVar21 = uVar6;
  }
  uVar22 = uVar4;
  if ((int)uVar4 <= (int)uVar21) {
    uVar22 = uVar21;
  }
  uVar21 = uVar3;
  if ((int)uVar3 < (int)uVar1) {
    uVar21 = uVar1;
  }
  uVar13 = uVar2;
  if ((int)uVar2 <= (int)uVar21) {
    uVar13 = uVar21;
  }
  uVar28 = -((int)(uVar28 + 0xf) >> 0x1f) - 1U & (int)(uVar28 + 0xf) >> 4;
  if (0xbf < (int)uVar28) {
    uVar28 = 0xc0;
  }
  uVar24 = -((int)(uVar24 + 0xf) >> 0x1f) - 1U & (int)(uVar24 + 0xf) >> 4;
  if (0x5f < (int)uVar24) {
    uVar24 = 0x60;
  }
  uVar21 = -((int)(uVar22 + 0xf) >> 0x1f) - 1U & (int)(uVar22 + 0xf) >> 4;
  if (0xbf < (int)uVar21) {
    uVar21 = 0xc0;
  }
  uVar22 = -((int)(uVar13 + 0xf) >> 0x1f) - 1U & (int)(uVar13 + 0xf) >> 4;
  if (0x5f < (int)uVar22) {
    uVar22 = 0x60;
  }
  uVar36 = (__int64)((int)uVar28 >> 3) + (unsigned __int64)((int)uVar28 < 0 && (uVar28 & 7) != 0);
  uVar39 = (__int64)((int)uVar24 >> 3) + (unsigned __int64)((int)uVar24 < 0 && (uVar24 & 7) != 0);
  uVar28 = ((int)uVar21 >> 3) + (unsigned int)((int)uVar21 < 0 && (uVar21 & 7) != 0);
  uVar28 = -((int)uVar28 >> 0x1f) - 1U & uVar28;
  if (0x16 < (int)uVar28) {
    uVar28 = 0x17;
  }
  uVar37 = (__int64)((int)uVar22 >> 3) + (unsigned __int64)((int)uVar22 < 0 && (uVar22 & 7) != 0);
  uVar37 = ((uVar37 & 0xffffffff) >> 0x1f) - 1 & uVar37;
  if (10 < (int)uVar37) {
    uVar37 = 0xb;
  }
  if ((int)uVar39 <= (int)uVar37) {
    lVar35 = uVar39 * 0x18;
    uVar38 = (uVar39 & 0x1fffffff) << 3;
    lVar34 = (uVar37 - uVar39) + 1;
    do {
      if ((int)uVar36 <= (int)uVar28) {
        iVar9 = (int)((uVar38 & 0xffffffff) << 4);
        uVar37 = (uVar36 & 0x1fffffff) << 3;
        uVar39 = uVar36;
        do {
          iVar10 = (int)((uVar37 & 0xffffffff) << 4);
          lVar12 = ((__int64)iVar9 * (__int64)(int)uVar30 -
                   (__int64)iVar10 * (__int64)(int)uVar33) +
                   (unsigned __int64)((int)uVar33 * uVar5 - (int)uVar30 * uVar3);
          lVar42 = ((__int64)iVar9 * (__int64)(int)uVar29 -
                   (__int64)iVar10 * (__int64)(int)uVar32) +
                   (unsigned __int64)((int)uVar32 * uVar6 - (int)uVar29 * uVar1);
          lVar40 = ((__int64)iVar9 * (__int64)(int)uVar11 -
                   (__int64)iVar10 * (__int64)(int)uVar31) +
                   (unsigned __int64)((int)uVar31 * uVar4 - (int)uVar11 * uVar2);
          if (((-1 < (__int64)(lVar12 + (unsigned __int64)uVar14)) &&
              (-1 < (__int64)(lVar42 + (unsigned __int64)(unsigned int)(iVar16 - iVar15)))) &&
             (-1 < (__int64)(lVar40 + (unsigned __int64)(unsigned int)(iVar18 - iVar17)))) {
            lVar26 = (lVar35 + uVar39) * 0x108 + (unsigned __int64)*(unsigned int *)(param_1 + 0xd0);
            pfVar8 = (float *)lVar26;
            if ((unsigned int)fVar7 <= (unsigned int)pfVar8[1]) {
              if (((0 < (__int64)
                        (lVar12 + (unsigned __int64)
                                  (((int)((uVar30 & 0xffffffff) << 7) -
                                   (int)((uVar33 & 0xffffffff) << 7)) - uVar14))) &&
                  (0 < (__int64)
                       (lVar42 + (unsigned __int64)
                                 (unsigned int)(((int)((uVar29 & 0xffffffff) << 7) -
                                        (int)((uVar32 & 0xffffffff) << 7)) - (iVar16 - iVar15)))))
                 && (0 < (__int64)
                         (lVar40 + (unsigned __int64)
                                   (unsigned int)(((int)((uVar11 & 0xffffffff) << 7) -
                                          (int)((uVar31 & 0xffffffff) << 7)) - (iVar18 - iVar17)))))
              {
                if ((unsigned int)fVar7 < (unsigned int)*pfVar8) {
                  lVar23 = lVar26 + 4;
                  lVar43 = 0x40;
                  do {
                    lVar23 = lVar23 + 4;
                    *(float *)lVar23 = fVar7;
                    lVar43 = lVar43 + -1;
                  } while (lVar43 != 0);
                  pfVar8[1] = fVar7;
                  *pfVar8 = fVar7;
                }
                if (*pfVar8 == fVar7) goto LAB_82622610;
              }
              fVar25 = *pfVar8;
              if ((unsigned int)fVar7 <= (unsigned int)*pfVar8) {
                fVar25 = fVar7;
              }
              *pfVar8 = fVar25;
              fVar25 = pfVar8[1];
              if ((unsigned int)pfVar8[1] <= (unsigned int)fVar7) {
                fVar25 = fVar7;
              }
              pfVar8[1] = fVar25;
              lVar26 = lVar26 + 8;
              lVar23 = 8;
              do {
                lVar44 = 8;
                lVar43 = lVar40;
                lVar19 = lVar42;
                lVar20 = lVar12;
                lVar27 = lVar26;
                do {
                  if (((-1 < (int)lVar20) && (-1 < (int)lVar19)) && (-1 < (int)lVar43)) {
                    fVar25 = *(float *)lVar27;
                    if ((unsigned int)fVar7 <= (unsigned int)fVar25) {
                      fVar25 = fVar7;
                    }
                    *(float *)lVar27 = fVar25;
                  }
                  lVar27 = lVar27 + 4;
                  lVar43 = lVar43 + (uVar31 & 0xfffffff) * -0x10;
                  lVar20 = lVar20 + (uVar33 & 0xfffffff) * -0x10;
                  lVar19 = lVar19 + (uVar32 & 0xfffffff) * -0x10;
                  lVar44 = lVar44 + -1;
                } while (lVar44 != 0);
                lVar23 = lVar23 + -1;
                lVar12 = lVar12 + (uVar30 & 0xfffffff) * 0x10;
                lVar26 = lVar26 + 0x20;
                lVar42 = lVar42 + (uVar29 & 0xfffffff) * 0x10;
                lVar40 = lVar40 + (uVar11 & 0xfffffff) * 0x10;
              } while (lVar23 != 0);
            }
          }
LAB_82622610:
          uVar39 = uVar39 + 1;
          uVar37 = uVar37 + 8;
        } while ((int)uVar39 <= (int)uVar28);
      }
      lVar34 = lVar34 + -1;
      uVar38 = uVar38 + 8;
      lVar35 = lVar35 + 0x18;
    } while (lVar34 != 0);
  }
  return;
}

