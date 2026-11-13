extern float lbl_82005748;
extern unsigned int lbl_8207F418;
extern unsigned int lbl_821AAD20;


void fn_82A04650(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  unsigned int uVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  int *piVar10;
  int iVar11;
  unsigned int uVar12;
  int iVar13;
  float *pfVar14;
  __int64 lVar15;
  
  pfVar14 = param_2 + -1;
  lVar15 = 10;
  do {
    pfVar14 = pfVar14 + 1;
    *pfVar14 = 0.0;
    fVar9 = lbl_821AAD20;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  if ((*(int *)(param_1 + 0x4148) == 0) && (*(int *)(param_1 + 0x414c) == 0)) {
    return;
  }
  param_1 = param_1 + 0x59c;
  piVar10 = (int *)&lbl_8207F418;
  lVar15 = 0x1f;
  do {
    uVar3 = *(unsigned int *)(param_1 + -0x20);
    iVar11 = param_1 + -0x10c;
    uVar12 = 0;
    fVar1 = fVar9;
    if (3 < (int)uVar3) {
      pfVar14 = (float *)(param_1 + -0x50);
      do {
        pfVar5 = pfVar14 + 0x1c;
        uVar12 = uVar12 + 4;
        pfVar6 = pfVar14 + 0x18;
        pfVar7 = pfVar14 + 0x14;
        pfVar14 = pfVar14 + 0x10;
        fVar1 = *pfVar14 + fVar1 + *pfVar7 + *pfVar6 + *pfVar5;
      } while (uVar12 < uVar3 - 3);
    }
    if (uVar12 < uVar3) {
      iVar13 = uVar3 - uVar12;
      pfVar14 = (float *)(uVar12 * 0x10 + iVar11 + 0xec);
      do {
        pfVar14 = pfVar14 + 4;
        fVar1 = *pfVar14 + fVar1;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
    }
    fVar4 = *param_2 + fVar1;
    *param_2 = fVar4;
    if (*piVar10 != 0) {
      param_2[5] = param_2[5] + fVar1;
    }
    if (*(unsigned int *)(param_1 + -0x28) < 8) {
      fVar1 = *(float *)(*(unsigned int *)(param_1 + -0x28) * 0x10 + iVar11 + 0xfc);
      param_2[1] = fVar1 + param_2[1];
      if (*piVar10 != 0) {
        param_2[6] = fVar1 + param_2[6];
      }
      fVar2 = fVar9;
      if (*(unsigned int *)(param_1 + -0x24) < 8) {
        fVar2 = *(float *)(*(unsigned int *)(param_1 + -0x24) * 0x10 + iVar11 + 0xfc);
      }
      param_2[3] = param_2[3] + fVar2 + fVar1;
      if (*piVar10 != 0) {
        param_2[8] = param_2[8] + fVar2 + fVar1;
      }
    }
    fVar1 = lbl_82005748;
    lVar15 = lVar15 + -1;
    param_1 = param_1 + 0x1f0;
    piVar10 = piVar10 + 1;
  } while (lVar15 != 0);
  fVar2 = param_2[5];
  if (fVar9 < fVar2) {
    fVar8 = (param_2[8] / fVar2) * lbl_82005748;
    param_2[7] = lbl_82005748 - (param_2[6] / fVar2) * lbl_82005748;
    param_2[9] = fVar1 - fVar8;
  }
  if (fVar4 <= fVar9) {
    return;
  }
  param_2[2] = fVar1 - (param_2[1] / fVar4) * fVar1;
  param_2[4] = fVar1 - (param_2[3] / fVar4) * fVar1;
  return;
}

