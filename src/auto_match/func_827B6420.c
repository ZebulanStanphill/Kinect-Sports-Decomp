#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_827B5B58();
extern int fn_827B6018();
extern int memcpy();
extern int fn_82F6A538();
extern int fn_82F6A584();
extern int fn_82F6B2A8();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82016260;
extern unsigned int lbl_82016264;
extern unsigned int lbl_82016268;
extern unsigned int lbl_8201626C;
extern unsigned int lbl_82016270;
extern unsigned int lbl_82016274;
extern unsigned int lbl_82016278;
extern unsigned int lbl_8201627C;
extern unsigned int lbl_82016280;
extern unsigned int lbl_82016284;
extern float lbl_82016288;
extern unsigned int lbl_8201628C;
extern unsigned int lbl_82016290;
extern unsigned int lbl_82016294;
extern unsigned int uStack_b9;


void fn_827B6420(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  float *pfVar4;
  int *piVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  int *piVar13;
  int iVar15;
  __int64 lVar14;
  __int64 lVar16;
  __int64 lVar17;
  unsigned char bVar19;
  __int64 lVar18;
  __int64 lVar20;
  __int64 lVar21;
  int iVar22;
  unsigned __int64 uVar23;
  unsigned __int64 uVar24;
  int iVar25;
  double dVar26;
  double extraout_f1;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  unsigned char uStack_b9;
  
  piVar13 = (int *)fn_82F6A538();
  dVar31 = extraout_f1;
  if (extraout_f1 < (double)lbl_82016294) {
    dVar31 = (double)lbl_82016294;
  }
  uVar2 = piVar13[3];
  iVar3 = piVar13[4];
  dVar27 = (double)fn_82F6B2A8(dVar31);
  uVar24 = (unsigned __int64)(unsigned int)(int)dVar27 + (unsigned __int64)uVar2;
  iVar25 = (int)uVar24;
  if (2 < iVar25) {
    dVar27 = (double)lbl_82002C5C;
    fVar1 = (float)(dVar31 * dVar27);
    if (lbl_82016290 <= fVar1) {
      fVar1 = fVar1 * lbl_82016280 - lbl_8201627C;
    }
    else {
      fVar1 = -(SQRT(-(fVar1 * lbl_8201628C - lbl_82002AE0)) * lbl_82016288 - lbl_82016284);
    }
    fVar9 = fVar1 * fVar1;
    lVar21 = (uVar24 & 0x7fffffff) << 1;
    fVar11 = fVar9 * fVar1 * lbl_8201626C;
    fVar12 = fVar9 * fVar1 * lbl_82016270;
    fVar10 = fVar9 * lbl_82016268 - fVar11;
    fVar11 = fVar9 * lbl_82016264 + fVar11 + fVar1 * lbl_82016278;
    fVar1 = lbl_82002AE0 / (fVar9 * lbl_82016274 + fVar1 * lbl_82016278 + fVar12 + lbl_82016260);
    dVar33 = (double)(fVar11 * fVar1);
    dVar32 = (double)(fVar10 * fVar1);
    dVar34 = -(double)((fVar12 + fVar10 + fVar11) * fVar1 - lbl_82002AE0);
    dVar31 = (double)(fVar12 * fVar1);
    fn_827B5B58(param_3,lVar21,0);
    ((unsigned int *)param_3)[1] = (int)lVar21;
    fn_827B6018(param_4,uVar24,0);
    lVar21 = (uVar24 & 0x3fffffff) * 4;
    piVar5 = (int *)param_4;
    piVar5[1] = iVar25;
    iVar22 = 0;
    pfVar4 = (float *)*(unsigned int *)param_3;
    uVar23 = ZEXT48(pfVar4);
    lVar20 = lVar21 + uVar23;
    if (0 < iVar3) {
      dVar30 = (double)(float)(dVar31 + dVar32);
      iVar7 = (int)lVar20;
      dVar29 = (double)(float)(dVar30 + dVar33);
      dVar28 = (double)(float)((double)(float)((double)(float)(dVar34 + dVar31) + dVar32) + dVar33);
      do {
        iVar15 = 3;
        fVar1 = (float)((double)*(unsigned char *)((iVar22 + piVar13[2]) * *(int *)(*piVar13 + 0x14) +
                                          *(int *)(*piVar13 + 0x18) + piVar13[1]) * dVar28);
        dVar26 = (double)fVar1;
        *pfVar4 = fVar1;
        fVar1 = (float)((double)*(unsigned char *)((iVar22 + piVar13[2]) * *(int *)(*piVar13 + 0x14) +
                                          *(int *)(*piVar13 + 0x18) + piVar13[1] + 1) * dVar34 +
                       (double)(float)(dVar26 * dVar29));
        pfVar4[1] = fVar1;
        pfVar4[2] = (float)(dVar26 * dVar30 +
                           (double)(float)((double)*(unsigned char *)((iVar22 + piVar13[2]) *
                                                             *(int *)(*piVar13 + 0x14) +
                                                             *(int *)(*piVar13 + 0x18) + piVar13[1]
                                                            + 2) * dVar34 +
                                          (double)(float)((double)fVar1 * dVar33)));
        if (3 < iVar25) {
          lVar17 = uVar24 - 3;
          lVar16 = uVar23 + 8;
          do {
            if (iVar15 < (int)uVar2) {
              bVar19 = *(unsigned char *)((iVar22 + piVar13[2]) * *(int *)(*piVar13 + 0x14) +
                                 *(int *)(*piVar13 + 0x18) + iVar15 + piVar13[1]);
            }
            else {
              bVar19 = 0;
            }
            pfVar6 = (float *)lVar16;
            iVar15 = iVar15 + 1;
            lVar16 = lVar16 + 4;
            *(float *)lVar16 =
                 (float)((double)*pfVar6 * dVar33 +
                        (double)(float)((double)pfVar6[-2] * dVar31 +
                                       (double)(float)((double)bVar19 * dVar34 +
                                                      (double)(float)((double)pfVar6[-1] * dVar32)))
                        );
            lVar17 = lVar17 + -1;
          } while (lVar17 != 0);
        }
        fVar1 = (float)(dVar28 * (double)*(float *)(iVar7 + -4));
        dVar26 = (double)fVar1;
        *(float *)((int)lVar21 + iVar7 + -4) = fVar1;
        iVar15 = (int)((uVar24 - 2 & 0x3fffffff) << 2);
        fVar1 = (float)((double)*(float *)(iVar15 + (int)pfVar4) * dVar34 +
                       (double)(float)(dVar26 * dVar29));
        *(float *)(iVar15 + iVar7) = fVar1;
        iVar8 = (int)((uVar24 - 3 & 0x3fffffff) << 2);
        *(float *)(iVar8 + iVar7) =
             (float)(dVar30 * dVar26 +
                    (double)(float)((double)fVar1 * dVar33 +
                                   (double)(float)((double)*(float *)(iVar8 + (int)pfVar4) * dVar34)
                                   ));
        uStack_b9 = (unsigned char)(__int64)(dVar26 + dVar27);
        *(unsigned char *)(*piVar5 + iVar25 + -1) = uStack_b9;
        uStack_b9 = (unsigned char)(__int64)((double)*(float *)(iVar15 + iVar7) + dVar27);
        *(unsigned char *)(*piVar5 + iVar25 + -2) = uStack_b9;
        uStack_b9 = (unsigned char)(__int64)((double)*(float *)(iVar8 + iVar7) + dVar27);
        *(unsigned char *)(*piVar5 + iVar25 + -3) = uStack_b9;
        if (-1 < (int)(uVar24 - 4)) {
          lVar14 = uVar24 - 3;
          lVar16 = (uVar24 - 3 & 0x3fffffff) * 4 + uVar23;
          lVar17 = (uVar24 - 3 & 0x3fffffff) * 4 + lVar20;
          lVar18 = uVar24 - 4;
          do {
            pfVar6 = (float *)lVar17;
            lVar16 = lVar16 + -4;
            fVar1 = (float)((double)*pfVar6 * dVar33 +
                           (double)(float)((double)*(float *)lVar16 * dVar34 +
                                          (double)(float)((double)pfVar6[1] * dVar32 +
                                                         (double)(float)((double)pfVar6[2] * dVar31)
                                                         )));
            lVar17 = lVar17 + -4;
            *(float *)lVar17 = fVar1;
            uStack_b9 = (unsigned char)(__int64)((double)fVar1 + dVar27);
            *(unsigned char *)(*piVar5 + (int)lVar18) = uStack_b9;
            lVar18 = lVar18 + -1;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
        memcpy((__int64)(iVar22 + piVar13[2]) * (__int64)*(int *)(*piVar13 + 0x14) +
                     (unsigned __int64)*(unsigned int *)(*piVar13 + 0x18) + (unsigned __int64)(unsigned int)piVar13[1],*piVar5,
                     (unsigned __int64)uVar2);
        iVar22 = iVar22 + 1;
      } while (iVar22 < iVar3);
    }
  }
  fn_82F6A584();
  return;
}

