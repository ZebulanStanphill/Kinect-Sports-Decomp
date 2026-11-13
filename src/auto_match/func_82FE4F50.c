extern unsigned int lbl_8200533C;
extern unsigned int lbl_8217BA98;


void fn_82FE4F50(unsigned int *param_1,int param_2,int param_3,unsigned __int64 param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  float fVar9;
  float *pfVar10;
  float fVar11;
  float *pfVar12;
  float *pfVar13;
  unsigned int uVar14;
  unsigned int uVar15;
  unsigned int uVar16;
  unsigned int uVar17;
  
  fVar11 = lbl_8200533C;
  uVar17 = param_1[2];
  fVar1 = (float)param_1[0xc];
  uVar16 = param_1[5];
  fVar2 = (float)param_1[0xf];
  uVar15 = param_1[8];
  fVar3 = (float)param_1[0x12];
  uVar14 = param_1[0xb];
  fVar4 = (float)param_1[0x15];
  if ((param_4 & 0xffffffff) != 0) {
    pfVar13 = (float *)(param_3 + -4);
    pfVar12 = (float *)(param_2 + -4);
    do {
      uVar6 = param_1[1];
      pfVar12 = pfVar12 + 1;
      fVar5 = *pfVar12;
      fVar3 = (float)param_1[0x13] * *(float *)(uVar15 * 4 + param_1[7]) -
              (float)param_1[0x14] * fVar3;
      fVar4 = *(float *)(param_1[10] + uVar14 * 4) * (float)param_1[0x16] -
              (float)param_1[0x17] * fVar4;
      fVar2 = (float)param_1[0x10] * *(float *)(uVar16 * 4 + param_1[4]) -
              (float)param_1[0x11] * fVar2;
      pfVar10 = pfVar13 + 1;
      fVar1 = (float)param_1[0xd] * *(float *)(uVar17 * 4 + uVar6) - fVar1 * (float)param_1[0xe];
      fVar9 = (fVar4 + fVar3 + fVar2 + fVar1) * fVar11;
      pfVar13 = pfVar13 + 1;
      *pfVar13 = (((fVar1 - fVar2) + fVar3) - fVar4) + *pfVar10;
      *(float *)(uVar17 * 4 + uVar6) = fVar2 + fVar9 + fVar5;
      uVar6 = *param_1;
      *(float *)(param_1[4] + uVar16 * 4) = fVar3 + fVar9 + fVar5;
      uVar7 = param_1[3];
      *(float *)(param_1[7] + uVar15 * 4) = fVar4 + fVar9 + fVar5;
      uVar8 = param_1[6];
      *(float *)(uVar14 * 4 + param_1[10]) = fVar1 + fVar9 + fVar5;
      uVar17 = -(unsigned int)(uVar6 != uVar17 + 1) & uVar17 + 1;
      uVar16 = -(unsigned int)(uVar7 != uVar16 + 1) & uVar16 + 1;
      uVar15 = -(unsigned int)(uVar8 != uVar15 + 1) & uVar15 + 1;
      uVar14 = -(unsigned int)(param_1[9] != uVar14 + 1) & uVar14 + 1;
      param_4 = param_4 - 1;
    } while (param_4 != 0);
  }
  param_1[2] = uVar17;
  param_1[5] = uVar16;
  param_1[8] = uVar15;
  param_1[0xb] = uVar14;
  fVar11 = lbl_8217BA98;
  fVar3 = fVar3 + lbl_8217BA98;
  fVar4 = fVar4 + lbl_8217BA98;
  fVar1 = fVar1 + lbl_8217BA98;
  param_1[0xf] = (unsigned int)((fVar2 + lbl_8217BA98) - lbl_8217BA98);
  param_1[0x12] = (unsigned int)(fVar3 - fVar11);
  param_1[0x15] = (unsigned int)(fVar4 - fVar11);
  param_1[0xc] = (unsigned int)(fVar1 - fVar11);
  return;
}

