extern float fRam831bca00;
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005344;
extern unsigned int lbl_8217E3C0;
extern unsigned int lbl_821AAD20;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_830588A0(__int64 param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  unsigned int uVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  __int64 lVar20;
  unsigned __int64 uVar21;
  __int64 lVar22;
  int iVar23;
  unsigned __int64 uVar24;
  unsigned __int64 uVar25;
  float *pfVar26;
  unsigned __int64 uVar27;
  float *pfVar28;
  float *pfVar29;
  unsigned __int64 uVar30;
  unsigned int uVar31;
  unsigned __int64 uVar32;
  unsigned __int64 uVar33;
  
  fVar18 = lbl_821AAD20;
  iVar11 = (int)param_1;
  uVar1 = (unsigned int)*(float *)(iVar11 + 4);
  uVar33 = (unsigned __int64)uVar1;
  fVar3 = *(float *)(iVar11 + 8);
  uVar21 = (unsigned __int64)(unsigned int)(int)*(float *)(iVar11 + 0xca8);
  fVar4 = *(float *)(iVar11 + 0x14);
  uVar31 = (unsigned int)*(float *)(iVar11 + 0xcb0);
  uVar30 = (unsigned __int64)uVar31;
  fVar5 = *(float *)(iVar11 + 0x28);
  uVar2 = (unsigned int)*(float *)(iVar11 + 0x2c);
  param_1 = param_1 + 0xca4;
  uVar32 = (unsigned __int64)(unsigned int)(int)*(float *)(iVar11 + 0x30);
  *(float *)(iVar11 + 0x34) = lbl_821AAD20;
  *(float *)(iVar11 + 0x38) = fVar18;
  *(float *)(iVar11 + 0x44) = fVar18;
  fVar19 = fRam831bca00;
  fVar17 = lbl_8217E3C0;
  fVar16 = lbl_82005344;
  fVar15 = lbl_82002AE0;
  fVar14 = lbl_8200133C;
  if (param_4 != 0) {
    pfVar29 = (float *)(param_2 + -4);
    pfVar28 = (float *)(param_3 + -4);
    do {
      pfVar29 = pfVar29 + 1;
      uVar27 = (unsigned int)(int)fVar3 + uVar21;
      uVar24 = uVar21 + 1;
      iVar13 = (int)((uVar27 & 0xffffffff) << 2);
      uVar27 = uVar27 - uVar21;
      iVar23 = (int)param_1;
      uVar9 = *(unsigned int *)(iVar13 + iVar23);
      uVar21 = (unsigned __int64)(uVar1 >> 0x1f) -
               (((uVar24 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar24 < uVar33)) & uVar24;
      param_4 = param_4 + -1;
      lVar20 = (uVar27 & 0x3fffffff) * 4 + param_1;
      uVar24 = 0;
      fVar6 = fVar15;
      if (*pfVar29 * fVar19 - fVar15 < 0.0) {
        fVar6 = *pfVar29 * fVar19;
      }
      if (fVar6 - fVar14 < 0.0) {
        fVar6 = fVar14;
      }
      *(float *)(iVar13 + iVar23) = fVar6;
      *(unsigned int *)(iVar11 + 0xcac) = uVar9;
      fVar10 = fVar18;
      if (3 < (int)uVar1) {
        lVar22 = ((uVar33 - 4 & 0xffffffff) >> 2) + 1;
        uVar24 = lVar22 * 4 & 0xfffffffc;
        do {
          pfVar26 = (float *)lVar20;
          lVar20 = lVar20 + 0x10;
          if (ABS(fVar10) - ABS(*pfVar26) < 0.0) {
            fVar10 = *pfVar26;
          }
          if (ABS(fVar10) - ABS(pfVar26[1]) < 0.0) {
            fVar10 = pfVar26[1];
          }
          if (ABS(fVar10) - ABS(pfVar26[2]) < 0.0) {
            fVar10 = pfVar26[2];
          }
          if (ABS(fVar10) - ABS(pfVar26[3]) < 0.0) {
            fVar10 = pfVar26[3];
          }
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      if ((int)uVar24 < (int)uVar1) {
        lVar22 = uVar33 - uVar24;
        lVar20 = lVar20 + -4;
        do {
          lVar20 = lVar20 + 4;
          if (ABS(fVar10) - ABS(*(float *)lVar20) < 0.0) {
            fVar10 = *(float *)lVar20;
          }
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      fVar7 = *(float *)(iVar11 + 0xcb4);
      fVar8 = fVar15;
      if (ABS(fVar6) - fVar15 < 0.0) {
        fVar8 = ABS(fVar6);
      }
      fVar6 = *(float *)(iVar11 + 0xc);
      if (ABS(fVar8) - ABS(*(float *)(iVar11 + 0xc)) < 0.0) {
        fVar6 = fVar8;
      }
      if (ABS(fVar7) < ABS(fVar6)) {
        uVar30 = (unsigned __int64)(unsigned int)(int)fVar4;
        fVar7 = fVar6;
      }
      *(float *)(iVar11 + 0xcb4) = ABS(fVar7);
      pfVar26 = (float *)(iVar11 + 0xcb8);
      fVar6 = ABS(fVar7) - *(float *)(iVar11 + 0x10);
      uVar30 = ((uVar30 - 1 & 0xffffffff) >> 0x1f) - 1 & uVar30 - 1;
      uVar31 = (unsigned int)uVar30;
      if (ABS(fVar6) - ABS(*pfVar26) < 0.0) {
        fVar6 = *pfVar26;
      }
      *pfVar26 = fVar6;
      fVar6 = *(float *)(iVar11 + 0x1c);
      fVar7 = fVar18;
      if ((int)uVar31 < 1) {
        fVar6 = fVar18;
        fVar7 = *(float *)(iVar11 + 0x18);
      }
      fVar8 = *pfVar26;
      fVar6 = (ABS(fVar10) - *(float *)(iVar11 + 0x10)) * fVar7 +
              *pfVar26 * fVar6 + *(float *)(iVar11 + 0x10);
      fVar7 = *(float *)(iVar11 + 0xcb4);
      if (ABS(fVar6) - ABS(*(float *)(iVar11 + 0xcb4)) < 0.0) {
        fVar7 = fVar6;
      }
      if ((int)uVar31 < 1) {
        fVar8 = (float)(__int64)(int)uVar31;
      }
      *pfVar26 = fVar8;
      fVar6 = *(float *)(iVar11 + 0xcac);
      if (ABS(fVar7) - ABS(fVar6) < 0.0) {
        fVar7 = fVar6;
      }
      *(float *)(iVar11 + 0x10) = ABS(fVar7);
      fVar8 = *(float *)(iVar11 + 0xcb4);
      if (ABS(ABS(fVar7)) - ABS(fVar6) < 0.0) {
        fVar8 = fVar6;
      }
      *(float *)(iVar11 + 0xcb4) = ABS(fVar8);
      fVar6 = *(float *)(iVar11 + 0xcbc);
      fVar7 = *(float *)(iVar11 + 0x20);
      if (ABS(fVar6) - ABS(ABS(fVar10)) < 0.0) {
        fVar7 = *(float *)(iVar11 + 0x24);
      }
      fVar6 = fVar7 * (ABS(fVar10) - fVar6) + fVar6;
      *(float *)(iVar11 + 0xcbc) = fVar6;
      fVar10 = *(float *)(iVar11 + 0x10);
      if (*(float *)(iVar11 + 0x10) - fVar6 < 0.0) {
        fVar10 = fVar6;
      }
      *(float *)(iVar11 + 0x10) = fVar10;
      fVar6 = *(float *)(iVar11 + 0xcb4);
      if ((int)uVar31 < 1) {
        fVar6 = fVar10;
      }
      uVar24 = uVar32 + (unsigned int)(int)fVar5;
      *(float *)(iVar11 + 0xcb4) = fVar6;
      uVar25 = uVar32 + 1;
      uVar27 = uVar24 - uVar32;
      *(float *)((int)((uVar24 & 0xffffffff) << 2) + iVar23) = fVar10;
      uVar32 = (unsigned __int64)(uVar2 >> 0x1f) -
               (((uVar25 & 0xffffffff) >> 0x1f) + (unsigned __int64)(uVar25 < uVar2)) & uVar25;
      fVar6 = *(float *)((int)((uVar27 & 0xffffffff) << 2) + iVar23);
      iVar23 = 0;
      fVar10 = *(float *)((int)fVar5 * 4 + iVar11);
      fVar7 = fVar18;
      fVar8 = fVar18;
      if (1 < (int)uVar2) {
        lVar22 = (((unsigned __int64)uVar2 - 2 & 0xffffffff) >> 1) + 1;
        lVar20 = (uVar27 + 1 & 0x3fffffff) * 4 + param_1 + -4;
        iVar23 = (int)lVar22 * 2;
        do {
          iVar13 = (int)lVar20;
          fVar8 = fVar6 * fVar10 + fVar8;
          lVar20 = lVar20 + 8;
          fVar6 = *(float *)lVar20;
          fVar7 = *(float *)(iVar13 + 4) * fVar10 + fVar7;
          lVar22 = lVar22 + -1;
        } while (lVar22 != 0);
      }
      fVar12 = fVar18;
      if (iVar23 < (int)uVar2) {
        fVar12 = fVar6 * fVar10;
      }
      fVar6 = *(float *)(iVar11 + 0x34);
      fVar12 = fVar7 + fVar8 + fVar12;
      fVar10 = fVar12 * fVar16 - fVar12 * fVar12;
      fVar7 = (fVar10 * fVar16 - fVar10 * fVar10) * fVar17;
      iVar23 = (int)fVar7;
      pfVar26 = (float *)(iVar23 * 4 + iVar11 + 0xcc4);
      fVar10 = *pfVar26;
      fVar10 = (pfVar26[1] - fVar10) * (fVar7 - (float)(__int64)iVar23) + fVar10;
      fVar7 = fVar10;
      if (ABS(fVar10) - ABS(fVar6) < 0.0) {
        fVar7 = fVar6;
      }
      *(float *)(iVar11 + 0x34) = fVar7;
      fVar6 = *(float *)(iVar11 + 0xcac);
      fVar7 = *(float *)(iVar11 + 0x38);
      if (ABS(fVar7) - ABS(fVar6) < 0.0) {
        fVar7 = fVar6;
      }
      *(float *)(iVar11 + 0x38) = fVar7;
      fVar10 = fVar6 * fVar10 * *(float *)(iVar11 + 0x3c);
      fVar6 = *(float *)(iVar11 + 0x44);
      if (ABS(fVar6) - ABS(fVar10) < 0.0) {
        fVar6 = fVar10;
      }
      *(float *)(iVar11 + 0x44) = fVar6;
      pfVar28 = pfVar28 + 1;
      *pfVar28 = fVar10;
    } while (param_4 != 0);
  }
  *(float *)(iVar11 + 0xca8) = (float)(__int64)(int)uVar21;
  *(float *)(iVar11 + 0xcb0) = (float)(__int64)(int)uVar31;
  *(float *)(iVar11 + 0x30) = (float)(__int64)(int)uVar32;
  return;
}

