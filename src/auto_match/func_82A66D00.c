#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int fStack_90;
extern int fn_82A66A48();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201467C;
extern unsigned int uStack_8c;


void fn_82A66D00(unsigned int *param_1)

{
  float fVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short *psVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  float *pfVar9;
  short *psVar10;
  int iVar11;
  __int64 lVar12;
  unsigned __int64 uVar13;
  int iVar14;
  unsigned __int64 uVar15;
  __int64 lVar16;
  float *pfVar17;
  float *pfVar18;
  __int64 lVar19;
  unsigned __int64 uVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  float *pfVar23;
  unsigned int uVar24;
  unsigned __int64 uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fStack_90;
  unsigned int uStack_8c;
  __int64 lStack_88;
  __int64 lStack_80;
  __int64 lStack_78;
  
  fStack_90 = (float)param_1[3];
  uVar24 = 0;
  uVar20 = (unsigned __int64)(unsigned int)param_1[6];
  psVar6 = (short *)*param_1;
  uVar21 = ZEXT48(psVar6);
  lVar22 = (unsigned __int64)(unsigned int)param_1[2] + 0x10;
  dVar26 = (double)fStack_90;
  uStack_8c = (unsigned int)(float)param_1[4];
  pfVar18 = (float *)param_1[1];
  uVar7 = param_1[7];
  uVar8 = param_1[9];
  uVar25 = (unsigned __int64)uVar8;
  dVar29 = (double)lbl_8201467C;
  lVar19 = ((unsigned __int64)uStack_8c & 0x7fffffff) * 2;
  dVar28 = (double)((float)param_1[4] - (float)(__int64)(int)uStack_8c);
  pfVar23 = (float *)lVar22;
  if (uVar20 != 0) {
    lStack_88 = (__int64)*psVar6;
    *(float *)(param_1[2] + 0x14) = (float)((double)(__int64)psVar6[1] * dVar29);
    *pfVar23 = (float)((double)lStack_88 * dVar29);
  }
  dVar30 = (double)lbl_82002AE0;
  pfVar17 = pfVar18;
  if ((int)uVar8 < 2) {
    do {
      if (uVar7 <= uVar24) break;
      uVar15 = uVar25 - 2;
      pfVar9 = pfVar23 + (int)uVar25;
      uVar24 = uVar24 + 2;
      uVar25 = lVar19 + uVar25;
      fVar1 = pfVar9[-1];
      dVar27 = (double)*(float *)((int)((uVar15 & 0xffffffff) << 2) + (int)pfVar23);
      fVar2 = pfVar9[1];
      *pfVar17 = (float)((double)(float)((double)*pfVar9 - dVar27) * dVar26 + dVar27);
      pfVar17[1] = (float)((double)(float)((double)fVar2 - (double)fVar1) * dVar26 + (double)fVar1);
      for (dVar26 = dVar28 + dVar26; dVar26 = (double)(float)dVar26, dVar30 <= dVar26;
          dVar26 = dVar26 - dVar30) {
        uVar25 = uVar25 + 2;
      }
      pfVar17 = pfVar17 + 2;
    } while ((int)uVar25 < 2);
    fStack_90 = (float)dVar26;
  }
  pfVar17 = pfVar18 + uVar24;
  if (((unsigned int)pfVar17 & 0xc) != 0) {
    if (uVar7 - uVar24 < 0x10) goto LAB_82a66f8c;
    do {
      uVar15 = uVar25 - 2;
      psVar10 = psVar6 + (int)uVar25;
      uVar24 = uVar24 + 2;
      uVar25 = lVar19 + uVar25;
      sVar4 = *(short *)((int)((uVar15 & 0xffffffff) << 1) + (int)psVar6);
      uStack_8c = (int)psVar10[1] - (int)psVar10[-1];
      lStack_80 = (__int64)(int)psVar10[-1];
      lStack_88 = (__int64)(int)sVar4;
      lStack_78 = (__int64)((int)*psVar10 - (int)sVar4);
      dVar27 = dVar28 + dVar26;
      *pfVar17 = (float)((double)(float)((double)lStack_78 * dVar26 + (double)lStack_88) * dVar29);
      pfVar17[1] = (float)((double)(float)((double)(__int64)(int)uStack_8c * dVar26 +
                                          (double)lStack_80) * dVar29);
      pfVar17 = pfVar17 + 2;
      while( true ) {
        fStack_90 = (float)dVar27;
        dVar26 = (double)fStack_90;
        if (dVar26 < dVar30) break;
        dVar27 = dVar26 - dVar30;
        uVar25 = uVar25 + 2;
      }
    } while (((unsigned int)pfVar17 & 0xc) != 0);
  }
  if (0xf < uVar7 - uVar24) {
    uVar8 = uVar7 - uVar24 & 0xfffffff0;
    lVar12 = fn_82A66A48((uVar25 - 2 & 0x7fffffff) * 2 + uVar21,pfVar18 + uVar24,uVar8,
                             &fStack_90);
    dVar26 = (double)fStack_90;
    uVar24 = uVar8 + uVar24;
    uVar25 = lVar12 + uVar25;
  }
LAB_82a66f8c:
  if (uVar24 < uVar7) {
    pfVar18 = pfVar18 + uVar24;
    do {
      uVar15 = uVar25 - 2;
      psVar10 = psVar6 + (int)uVar25;
      uVar24 = uVar24 + 2;
      uVar25 = lVar19 + uVar25;
      sVar5 = *(short *)((int)((uVar15 & 0xffffffff) << 1) + (int)psVar6);
      sVar4 = psVar10[-1];
      sVar3 = psVar10[1];
      *pfVar18 = (float)((double)(float)((double)(__int64)((int)*psVar10 - (int)sVar5) * dVar26 +
                                        (double)(__int64)(int)sVar5) * dVar29);
      pfVar18[1] = (float)((double)(float)((double)(__int64)((int)sVar3 - (int)sVar4) * dVar26 +
                                          (double)(__int64)(int)sVar4) * dVar29);
      pfVar18 = pfVar18 + 2;
      for (dVar26 = dVar28 + dVar26; dVar26 = (double)(float)dVar26, dVar30 <= dVar26;
          dVar26 = dVar26 - dVar30) {
        uVar25 = uVar25 + 2;
      }
    } while (uVar24 < uVar7);
  }
  if ((int)uVar25 < (int)(uVar20 - 2)) {
    uVar25 = uVar20 - 2;
  }
  uVar15 = (uVar25 - uVar20) - 2;
  param_1[3] = (float)dVar26;
  param_1[9] = (int)(uVar25 - uVar20);
  iVar14 = (int)-uVar20;
  if ((int)uVar15 < iVar14) {
    if (3 < iVar14 - (int)uVar15) {
      lVar12 = (uVar15 & 0x3fffffff) * 4 + lVar22 + -4;
      lVar19 = ((uVar15 + uVar20) - 3 & 0x3fffffff) * 4 + lVar22;
      do {
        uVar13 = uVar20 + 2 + uVar15;
        iVar11 = (int)lVar12;
        *(unsigned int *)(iVar11 + 4) = *(unsigned int *)((int)lVar19 + 0xc);
        uVar25 = uVar20 + 3 + uVar15;
        lVar19 = lVar19 + 0x10;
        *(unsigned int *)(iVar11 + 8) = *(unsigned int *)lVar19;
        uVar15 = uVar15 + 4;
        *(unsigned int *)(iVar11 + 0xc) =
             *(unsigned int *)((int)((uVar13 & 0xffffffff) << 2) + (int)pfVar23);
        lVar12 = lVar12 + 0x10;
        *(unsigned int *)lVar12 = *(unsigned int *)((int)((uVar25 & 0xffffffff) << 2) + (int)pfVar23);
      } while ((int)uVar15 < iVar14 + -3);
    }
    if ((int)uVar15 < iVar14) {
      lVar16 = -uVar20 - uVar15;
      lVar12 = (uVar15 & 0x3fffffff) * 4 + lVar22 + -4;
      lVar19 = (uVar15 + uVar20 & 0x3fffffff) * 4 + lVar22 + -4;
      uVar15 = lVar16 + uVar15;
      do {
        lVar19 = lVar19 + 4;
        lVar12 = lVar12 + 4;
        *(unsigned int *)lVar12 = *(unsigned int *)lVar19;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
  }
  if (3 < -(int)uVar15) {
    lVar16 = ((-uVar15 - 4 & 0xffffffff) >> 2) + 1;
    lVar12 = (uVar15 & 0x3fffffff) * 4 + lVar22 + -4;
    lVar19 = ((uVar15 + uVar20) - 3 & 0x7fffffff) * 2 + uVar21;
    do {
      iVar14 = (int)lVar19;
      lVar19 = lVar19 + 8;
      sVar4 = *(short *)lVar19;
      sVar3 = *(short *)((int)((uVar20 + 3 + uVar15 & 0xffffffff) << 1) + (int)psVar6);
      sVar5 = *(short *)((int)((uVar20 + 2 + uVar15 & 0xffffffff) << 1) + (int)psVar6);
      uVar15 = uVar15 + 4;
      iVar11 = (int)lVar12;
      *(float *)(iVar11 + 4) = (float)((double)(__int64)*(short *)(iVar14 + 6) * dVar29);
      *(float *)(iVar11 + 8) = (float)((double)(__int64)sVar4 * dVar29);
      *(float *)(iVar11 + 0xc) = (float)((double)(__int64)sVar5 * dVar29);
      lVar12 = lVar12 + 0x10;
      *(float *)lVar12 = (float)((double)(__int64)sVar3 * dVar29);
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
  }
  if ((int)uVar15 < 0) {
    lVar12 = -uVar15;
    lVar22 = (uVar15 & 0x3fffffff) * 4 + lVar22 + -4;
    lVar19 = (uVar15 + uVar20 & 0x7fffffff) * 2 + uVar21 + -2;
    do {
      lVar19 = lVar19 + 2;
      lVar22 = lVar22 + 4;
      *(float *)lVar22 = (float)((double)(__int64)*(short *)lVar19 * dVar29);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  return;
}

