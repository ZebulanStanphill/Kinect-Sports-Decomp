#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_827B5B58();
extern int fn_827B6018();
extern int fn_82F6A544();
extern int fn_82F6A590();
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
extern unsigned int lbl_82016288;
extern unsigned int lbl_8201628C;
extern unsigned int lbl_82016290;
extern unsigned int lbl_82016294;
extern unsigned int uStack_89;


void fn_827B6880(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int uVar4;
  int iVar5;
  float *pfVar6;
  int *piVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int *piVar14;
  int iVar16;
  __int64 lVar15;
  unsigned char *puVar17;
  int iVar18;
  __int64 lVar19;
  __int64 lVar20;
  unsigned char bVar23;
  __int64 lVar21;
  unsigned char *puVar22;
  unsigned __int64 uVar24;
  __int64 lVar25;
  unsigned __int64 uVar26;
  int iVar27;
  unsigned __int64 uVar28;
  double dVar29;
  double extraout_f1;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  unsigned char uStack_89;
  
  piVar14 = (int *)fn_82F6A544();
  dVar32 = extraout_f1;
  if (extraout_f1 < (double)lbl_82016294) {
    dVar32 = (double)lbl_82016294;
  }
  uVar4 = piVar14[4];
  iVar5 = piVar14[3];
  dVar30 = (double)fn_82F6B2A8(dVar32);
  uVar26 = (unsigned __int64)(unsigned int)(int)dVar30 + (unsigned __int64)uVar4;
  iVar27 = (int)uVar26;
  if (2 < iVar27) {
    dVar30 = (double)lbl_82002C5C;
    fVar2 = (float)(dVar32 * dVar30);
    if (lbl_82016290 <= fVar2) {
      fVar2 = fVar2 * lbl_82016280 - lbl_8201627C;
    }
    else {
      fVar2 = -(SQRT(-(fVar2 * lbl_8201628C - lbl_82002AE0)) * lbl_82016288 - lbl_82016284);
    }
    fVar1 = fVar2 * fVar2;
    lVar25 = (uVar26 & 0x7fffffff) << 1;
    fVar11 = fVar1 * fVar2 * lbl_8201626C;
    fVar12 = fVar1 * fVar2 * lbl_82016270;
    fVar3 = fVar1 * lbl_82016268 - fVar11;
    fVar11 = fVar1 * lbl_82016264 + fVar11 + fVar2 * lbl_82016278;
    fVar2 = lbl_82002AE0 / (fVar1 * lbl_82016274 + fVar2 * lbl_82016278 + fVar12 + lbl_82016260);
    dVar34 = (double)(fVar11 * fVar2);
    dVar33 = (double)(fVar3 * fVar2);
    dVar35 = -(double)((fVar12 + fVar3 + fVar11) * fVar2 - lbl_82002AE0);
    dVar32 = (double)(fVar12 * fVar2);
    fn_827B5B58(param_3,lVar25,0);
    ((unsigned int *)param_3)[1] = (unsigned int)lVar25;
    fn_827B6018(param_4,uVar26,0);
    lVar19 = (uVar26 & 0x3fffffff) * 4;
    piVar7 = (int *)param_4;
    piVar7[1] = iVar27;
    iVar18 = 0;
    pfVar6 = (float *)*(unsigned int *)param_3;
    uVar24 = ZEXT48(pfVar6);
    lVar25 = lVar19 + uVar24;
    if (0 < iVar5) {
      dVar29 = (double)(float)(dVar32 + dVar33);
      iVar13 = (int)lVar25;
      iVar9 = (int)lVar19 + iVar13;
      fVar2 = (float)((double)(float)((double)(float)(dVar35 + dVar32) + dVar33) + dVar34);
      do {
        iVar16 = 3;
        fVar1 = (float)*(unsigned char *)(*(int *)(*piVar14 + 0x14) * piVar14[2] + *(int *)(*piVar14 + 0x18)
                                 + piVar14[1] + iVar18) * fVar2;
        dVar31 = (double)fVar1;
        *pfVar6 = fVar1;
        fVar1 = (float)((double)*(unsigned char *)((piVar14[2] + 1) * *(int *)(*piVar14 + 0x14) +
                                          *(int *)(*piVar14 + 0x18) + piVar14[1] + iVar18) * dVar35
                       + (double)(float)(dVar31 * (double)(float)(dVar29 + dVar34)));
        pfVar6[1] = fVar1;
        pfVar6[2] = (float)(dVar34 * (double)fVar1 +
                           (double)(float)((double)*(unsigned char *)((piVar14[2] + 2) *
                                                             *(int *)(*piVar14 + 0x14) +
                                                             *(int *)(*piVar14 + 0x18) + piVar14[1]
                                                            + iVar18) * dVar35 +
                                          (double)(float)(dVar31 * dVar29)));
        if (3 < iVar27) {
          lVar20 = uVar26 - 3;
          lVar19 = uVar24 + 8;
          do {
            if (iVar16 < (int)uVar4) {
              bVar23 = *(unsigned char *)((piVar14[2] + iVar16) * *(int *)(*piVar14 + 0x14) +
                                 *(int *)(*piVar14 + 0x18) + piVar14[1] + iVar18);
            }
            else {
              bVar23 = 0;
            }
            pfVar8 = (float *)lVar19;
            iVar16 = iVar16 + 1;
            lVar19 = lVar19 + 4;
            *(float *)lVar19 =
                 (float)((double)*pfVar8 * dVar34 +
                        (double)(float)((double)pfVar8[-2] * dVar32 +
                                       (double)(float)((double)bVar23 * dVar35 +
                                                      (double)(float)((double)pfVar8[-1] * dVar33)))
                        );
            lVar20 = lVar20 + -1;
          } while (lVar20 != 0);
        }
        fVar1 = fVar2 * *(float *)(iVar13 + -4);
        dVar31 = (double)fVar1;
        *(float *)(iVar9 + -4) = fVar1;
        iVar16 = (int)((uVar26 - 2 & 0x3fffffff) << 2);
        fVar3 = *(float *)(iVar9 + -4);
        fVar1 = (float)((double)*(float *)(iVar16 + (int)pfVar6) * dVar35 +
                       (double)(float)(dVar31 * (double)(float)(dVar29 + dVar34)));
        *(float *)(iVar16 + iVar13) = fVar1;
        uStack_89 = (unsigned char)(__int64)(dVar31 + dVar30);
        iVar10 = (int)((uVar26 - 3 & 0x3fffffff) << 2);
        *(float *)(iVar10 + iVar13) =
             (float)((double)fVar3 * dVar29 +
                    (double)(float)((double)*(float *)(iVar10 + (int)pfVar6) * dVar35 +
                                   (double)(float)((double)fVar1 * dVar34)));
        *(unsigned char *)(*piVar7 + iVar27 + -1) = uStack_89;
        uStack_89 = (unsigned char)(__int64)((double)*(float *)(iVar16 + iVar13) + dVar30);
        *(unsigned char *)(*piVar7 + iVar27 + -2) = uStack_89;
        uStack_89 = (unsigned char)(__int64)((double)*(float *)(iVar10 + iVar13) + dVar30);
        *(unsigned char *)(*piVar7 + iVar27 + -3) = uStack_89;
        if (-1 < (int)(uVar26 - 4)) {
          lVar15 = uVar26 - 3;
          lVar19 = (uVar26 - 3 & 0x3fffffff) * 4 + uVar24;
          lVar20 = (uVar26 - 3 & 0x3fffffff) * 4 + lVar25;
          lVar21 = uVar26 - 4;
          do {
            pfVar8 = (float *)lVar20;
            lVar19 = lVar19 + -4;
            fVar1 = (float)((double)*pfVar8 * dVar34 +
                           (double)(float)((double)*(float *)lVar19 * dVar35 +
                                          (double)(float)((double)pfVar8[1] * dVar33 +
                                                         (double)(float)((double)pfVar8[2] * dVar32)
                                                         )));
            lVar20 = lVar20 + -4;
            *(float *)lVar20 = fVar1;
            uStack_89 = (unsigned char)(__int64)((double)fVar1 + dVar30);
            *(unsigned char *)(*piVar7 + (int)lVar21) = uStack_89;
            lVar21 = lVar21 + -1;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        puVar17 = (unsigned char *)(*piVar7 + -1);
        puVar22 = (unsigned char *)
                  (*(int *)(*piVar14 + 0x14) * piVar14[2] + *(int *)(*piVar14 + 0x18) + piVar14[1] +
                  iVar18);
        uVar28 = (unsigned __int64)uVar4;
        do {
          puVar17 = puVar17 + 1;
          *puVar22 = *puVar17;
          puVar22 = puVar22 + *(int *)(*piVar14 + 0x14);
          uVar28 = uVar28 - 1;
        } while (uVar28 != 0);
        iVar18 = iVar18 + 1;
      } while (iVar18 < iVar5);
    }
  }
  fn_82F6A590();
  return;
}

