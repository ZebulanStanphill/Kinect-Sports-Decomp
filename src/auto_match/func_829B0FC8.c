extern unsigned int fStack_24;
extern unsigned int fStack_28;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8200D4C0;
extern unsigned int lbl_820540D4;
extern unsigned int lbl_820540D8;
extern unsigned int lbl_820540F8;
extern unsigned int lbl_82054118;
extern unsigned int lbl_82054130;
extern unsigned int lbl_821AAD20;


void fn_829B0FC8(float *param_1,float *param_2,float *param_3,__int64 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  unsigned int uVar12;
  float *pfVar13;
  float *pfVar14;
  unsigned int uVar15;
  unsigned int *puVar16;
  unsigned int uVar17;
  __int64 lVar18;
  float afStack_40 [6];
  float fStack_28;
  float fStack_24;
  
  fVar5 = lbl_821AAD20;
  fVar11 = lbl_82002AE0;
  uVar12 = (unsigned int)param_4;
  if (uVar12 == 6) {
    pfVar13 = (float *)&lbl_82054130;
    puVar16 = &lbl_82054118;
  }
  else {
    pfVar13 = (float *)&lbl_820540F8;
    puVar16 = (unsigned int *)&lbl_820540D8;
  }
  lVar18 = 0x10;
  fVar9 = lbl_82002AE0;
  fVar10 = lbl_821AAD20;
  pfVar14 = param_3;
  if (uVar12 == 8) {
    do {
      fVar1 = *pfVar14;
      if (fVar1 < fVar9) {
        fVar9 = fVar1;
      }
      if (fVar10 < fVar1) {
        fVar10 = fVar1;
      }
      pfVar14 = pfVar14 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  else {
    do {
      fVar1 = *pfVar14;
      if ((fVar1 < fVar9) && (lbl_821AAD20 < fVar1)) {
        fVar9 = fVar1;
      }
      if ((fVar10 < fVar1) && (fVar1 < lbl_82002AE0)) {
        fVar10 = fVar1;
      }
      pfVar14 = pfVar14 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (fVar9 == fVar10) {
      fVar10 = lbl_82002AE0;
    }
  }
  uVar17 = 0;
  while (lbl_8200D4C0 <= fVar10 - fVar9) {
    if (uVar12 != 0) {
      lVar18 = param_4;
      pfVar14 = pfVar13;
      do {
        *(float *)(((int)afStack_40 - (int)pfVar13) + (int)pfVar14) =
             *(float *)(((int)puVar16 - (int)pfVar13) + (int)pfVar14) * fVar10 + *pfVar14 * fVar9;
        pfVar14 = pfVar14 + 1;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    if (uVar12 == 6) {
      fStack_28 = lbl_821AAD20;
      fStack_24 = lbl_82002AE0;
    }
    lVar18 = 0x10;
    fVar6 = lbl_821AAD20;
    fVar7 = lbl_821AAD20;
    fVar8 = lbl_821AAD20;
    fVar1 = lbl_821AAD20;
    pfVar14 = param_3;
    do {
      fVar2 = *pfVar14;
      fVar3 = (fVar2 - fVar9) * ((float)(uVar12 - 1) / (fVar10 - fVar9));
      if (lbl_821AAD20 < fVar3) {
        if (fVar3 < (float)(uVar12 - 1)) {
          uVar15 = (int)(fVar3 + 0.5f);
        }
        else {
          uVar15 = uVar12 - 1;
          if ((uVar12 == 6) && ((fVar10 + lbl_82002AE0) * 0.5f <= fVar2)) goto LAB_829b11d8;
        }
LAB_829b11a8:
        if (uVar15 < uVar12) {
          fVar3 = pfVar13[uVar15];
          fVar8 = fVar3 * fVar3 + fVar8;
          fVar4 = (float)puVar16[uVar15];
          fVar1 = fVar4 * fVar4 + fVar1;
          fVar7 = fVar3 * (afStack_40[uVar15] - fVar2) + fVar7;
          fVar6 = fVar4 * (afStack_40[uVar15] - fVar2) + fVar6;
        }
      }
      else if ((uVar12 != 6) || (fVar9 * 0.5f < fVar2)) {
        uVar15 = 0;
        goto LAB_829b11a8;
      }
LAB_829b11d8:
      pfVar14 = pfVar14 + 1;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
    if (lbl_821AAD20 < fVar8) {
      fVar9 = fVar9 - fVar7 / fVar8;
    }
    fVar8 = fVar10;
    if (lbl_821AAD20 < fVar1) {
      fVar8 = fVar10 - fVar6 / fVar1;
    }
    fVar10 = fVar8;
    if (fVar8 < fVar9) {
      fVar10 = fVar9;
      fVar9 = fVar8;
    }
    if (((fVar7 * fVar7 < lbl_820540D4) && (fVar6 * fVar6 < lbl_820540D4)) ||
       (uVar17 = uVar17 + 1, 7 < uVar17)) break;
  }
  fVar1 = lbl_821AAD20;
  if ((lbl_821AAD20 <= fVar9) && (fVar1 = fVar9, lbl_82002AE0 < fVar9)) {
    fVar1 = lbl_82002AE0;
  }
  *param_1 = fVar1;
  if ((fVar5 <= fVar10) && (fVar5 = fVar10, fVar11 < fVar10)) {
    fVar5 = fVar11;
  }
  *param_2 = fVar5;
  return;
}

