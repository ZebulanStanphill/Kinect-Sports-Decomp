void fn_82FB9FC0(int *param_1,float *param_2,int param_3,unsigned int param_4)

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
  float fVar12;
  int iVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  __int64 lVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  
  fVar1 = *param_2;
  uVar15 = 0;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_2[4];
  if (param_4 == 0) {
    return;
  }
  pfVar17 = (float *)(param_3 + 8);
  do {
    fVar6 = pfVar17[-2];
    fVar7 = pfVar17[-1];
    fVar8 = *pfVar17;
    fVar9 = pfVar17[1];
    pfVar18 = (float *)(*(unsigned short *)(param_1 + 3) * uVar15 * 4 + *param_1);
    iVar13 = uVar15 * 4;
    pfVar20 = pfVar18 + *(unsigned short *)((int)param_1 + 0xe);
    if (pfVar18 < pfVar20) {
      uVar14 = (int)pfVar20 + (3 - (int)pfVar18);
      if (3 < (int)(((int)uVar14 >> 2) + (unsigned int)((int)uVar14 < 0 && (uVar14 & 3) != 0))) {
        do {
          fVar10 = *pfVar18;
          fVar12 = fVar7 * fVar3;
          fVar11 = pfVar18[1];
          fVar7 = pfVar18[2];
          fVar9 = fVar8 * fVar4 + fVar9 * fVar5 + fVar6 * fVar2 + fVar12 + fVar10 * fVar1;
          *pfVar18 = fVar9;
          fVar8 = fVar9 * fVar4 + fVar8 * fVar5 + fVar10 * fVar2 + fVar6 * fVar3 + fVar11 * fVar1;
          fVar6 = pfVar18[3];
          pfVar18[1] = fVar8;
          fVar9 = fVar8 * fVar4 + fVar9 * fVar5 + fVar11 * fVar2 + fVar10 * fVar3 + fVar7 * fVar1;
          pfVar18[2] = fVar9;
          fVar8 = fVar9 * fVar4 + fVar8 * fVar5 + fVar7 * fVar2 + fVar11 * fVar3 + fVar6 * fVar1;
          pfVar18[3] = fVar8;
          pfVar18 = pfVar18 + 4;
        } while ((int)pfVar18 < (int)(pfVar20 + -3));
      }
      if (pfVar18 < pfVar20) {
        pfVar19 = pfVar18 + -1;
        lVar16 = (unsigned __int64)((unsigned int)((int)pfVar20 + (-1 - (int)pfVar18)) >> 2) + 1;
        fVar10 = fVar7;
        fVar11 = fVar9;
        do {
          fVar9 = fVar8;
          fVar7 = fVar6;
          fVar6 = pfVar19[1];
          fVar8 = fVar9 * fVar4 + fVar11 * fVar5 + fVar7 * fVar2 + fVar10 * fVar3 + fVar6 * fVar1;
          pfVar19 = pfVar19 + 1;
          *pfVar19 = fVar8;
          lVar16 = lVar16 + -1;
          fVar10 = fVar7;
          fVar11 = fVar9;
        } while (lVar16 != 0);
      }
    }
    pfVar20 = (float *)(uVar15 * 0x10 + param_3);
    uVar15 = uVar15 + 1;
    pfVar17 = pfVar17 + 4;
    *(float *)((iVar13 + 2) * 4 + param_3) = fVar8;
    *pfVar20 = fVar6;
    pfVar20[1] = fVar7;
    *(float *)((iVar13 + 3) * 4 + param_3) = fVar9;
  } while (uVar15 < param_4);
  return;
}

