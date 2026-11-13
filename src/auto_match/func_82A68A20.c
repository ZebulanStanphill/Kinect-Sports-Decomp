void fn_82A68A20(unsigned int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  __int64 lVar14;
  float *pfVar15;
  __int64 lVar16;
  
  fVar5 = (float)param_1[7];
  fVar6 = (float)param_1[8];
  pfVar7 = (float *)param_1[2];
  pfVar8 = (float *)param_1[3];
  pfVar15 = (float *)*param_1;
  fVar1 = *pfVar7;
  fVar2 = *pfVar8;
  fVar3 = pfVar7[1];
  iVar9 = param_1[6];
  fVar4 = pfVar8[1];
  if (param_1[4] != 0) {
    lVar16 = (unsigned __int64)(unsigned int)param_1[1] + 4;
    lVar14 = (unsigned __int64)(param_1[4] - 1 >> 1) + 1;
    iVar12 = (int)pfVar15 - param_1[1];
    do {
      pfVar13 = (float *)lVar16;
      fVar11 = -(fVar6 * fVar2 - (*pfVar15 - fVar1));
      fVar10 = -(fVar6 * fVar4 - (*(float *)(iVar12 + (int)pfVar13) - fVar3));
      fVar2 = fVar11 * fVar5 + fVar2;
      fVar4 = fVar10 * fVar5 + fVar4;
      fVar1 = fVar2 * fVar5 + fVar1;
      fVar3 = fVar4 * fVar5 + fVar3;
      dataCacheBlockTouch(lVar16 + 0xc);
      if (iVar9 == 0) {
        pfVar13[-1] = fVar1;
        *pfVar13 = fVar3;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 1) {
            pfVar13[-1] = fVar2;
            *pfVar13 = fVar4;
            goto code_r0x82a68af0;
          }
          fVar11 = fVar1 + fVar11;
          fVar10 = fVar3 + fVar10;
        }
        *pfVar13 = fVar10;
        pfVar13[-1] = fVar11;
      }
code_r0x82a68af0:
      pfVar15 = pfVar15 + 2;
      lVar16 = lVar16 + 8;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  *pfVar7 = fVar1;
  pfVar7[1] = fVar3;
  *pfVar8 = fVar2;
  pfVar8[1] = fVar4;
  return;
}

