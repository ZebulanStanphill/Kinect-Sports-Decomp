extern unsigned int lbl_8217BA98;


void fn_82FE5618(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  unsigned int uVar7;
  float fVar8;
  float fVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  float *pfVar13;
  __int64 lVar12;
  unsigned __int64 uVar14;
  float *pfVar15;
  float *pfVar16;
  unsigned __int64 uVar17;
  
  fVar9 = lbl_8217BA98;
  uVar7 = param_1[2];
  uVar14 = (unsigned __int64)uVar7;
  uVar17 = (unsigned __int64)*param_1;
  pfVar13 = (float *)param_1[1];
  uVar11 = uVar17 - uVar14;
  pfVar16 = pfVar13 + uVar7 * 2;
  if ((param_3 & 0xffffffff) < (uVar11 & 0xffffffff)) {
    fVar1 = (float)param_1[3];
    pfVar13 = (float *)(param_2 + -4);
    uVar14 = param_3;
    do {
      fVar2 = *pfVar16;
      fVar3 = pfVar13[1];
      *pfVar16 = fVar3;
      fVar2 = ((fVar3 - pfVar16[1]) * fVar1 + fVar2 + fVar9) - fVar9;
      pfVar16[1] = fVar2;
      pfVar13 = pfVar13 + 1;
      *pfVar13 = fVar2;
      pfVar16 = pfVar16 + 2;
      uVar14 = uVar14 - 1;
    } while (uVar14 != 0);
    param_1[2] = uVar7 + (int)param_3;
    return;
  }
  pfVar15 = (float *)(param_2 + -4);
  do {
    uVar10 = param_3;
    if ((uVar11 & 0xffffffff) <= (param_3 & 0xffffffff)) {
      uVar10 = uVar11;
    }
    uVar11 = 0;
    if (3 < (int)uVar10) {
      fVar1 = (float)param_1[3];
      do {
        fVar2 = *pfVar16;
        uVar11 = uVar11 + 4;
        fVar3 = pfVar15[1];
        *pfVar16 = fVar3;
        fVar4 = pfVar15[2];
        fVar5 = pfVar15[3];
        fVar6 = pfVar15[4];
        fVar8 = ((fVar3 - pfVar16[1]) * fVar1 + fVar2 + fVar9) - fVar9;
        pfVar16[1] = fVar8;
        fVar2 = pfVar16[2];
        pfVar16[2] = fVar4;
        fVar3 = pfVar16[3];
        pfVar15[1] = fVar8;
        fVar4 = ((fVar4 - fVar3) * fVar1 + fVar2 + fVar9) - fVar9;
        pfVar16[3] = fVar4;
        fVar2 = pfVar16[4];
        pfVar16[4] = fVar5;
        fVar3 = pfVar16[5];
        pfVar15[2] = fVar4;
        fVar4 = ((fVar5 - fVar3) * fVar1 + fVar2 + fVar9) - fVar9;
        pfVar16[5] = fVar4;
        fVar2 = pfVar16[6];
        pfVar16[6] = fVar6;
        fVar3 = pfVar16[7];
        pfVar15[3] = fVar4;
        fVar2 = ((fVar6 - fVar3) * fVar1 + fVar2 + fVar9) - fVar9;
        pfVar16[7] = fVar2;
        pfVar15[4] = fVar2;
        pfVar16 = pfVar16 + 8;
        pfVar15 = pfVar15 + 4;
      } while ((uVar11 & 0xffffffff) < (uVar10 - 3 & 0xffffffff));
    }
    if ((uVar11 & 0xffffffff) < (uVar10 & 0xffffffff)) {
      lVar12 = uVar10 - uVar11;
      fVar1 = (float)param_1[3];
      do {
        fVar2 = *pfVar16;
        fVar3 = pfVar15[1];
        *pfVar16 = fVar3;
        fVar2 = ((fVar3 - pfVar16[1]) * fVar1 + fVar2 + fVar9) - fVar9;
        pfVar16[1] = fVar2;
        pfVar15 = pfVar15 + 1;
        *pfVar15 = fVar2;
        pfVar16 = pfVar16 + 2;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
    }
    uVar14 = uVar14 + uVar10;
    param_1[2] = (unsigned int)uVar14;
    if ((uVar14 & 0xffffffff) == uVar17) {
      param_1[2] = 0;
      uVar14 = 0;
      pfVar16 = pfVar13;
    }
    param_3 = param_3 - uVar10;
    uVar11 = uVar17 - uVar14;
  } while (param_3 != 0);
  return;
}

