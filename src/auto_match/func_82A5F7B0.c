unsigned __int64 fn_82A5F7B0(unsigned __int64 param_1)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  __int64 lVar11;
  unsigned __int64 uVar12;
  float *pfVar13;
  unsigned __int64 uVar14;
  float *pfVar15;
  unsigned __int64 uVar16;
  unsigned __int64 uVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  
  puVar5 = (unsigned int *)param_1;
  uVar17 = (unsigned __int64)*puVar5;
  uVar14 = (unsigned __int64)puVar5[1];
  uVar18 = (unsigned __int64)puVar5[6];
  uVar19 = (unsigned __int64)puVar5[7];
  uVar2 = puVar5[8];
  if (puVar5[9] != 0) {
    uVar19 = 1;
    uVar18 = 1;
  }
  uVar3 = puVar5[3];
  if (uVar3 == 0) {
    uVar16 = puVar5[5] / uVar18;
    if ((int)uVar16 != 0) {
      uVar3 = puVar5[2];
      do {
        if (uVar19 != 0) {
          fVar1 = *(float *)uVar17;
          param_1 = uVar17 + 0x30;
          pfVar13 = (float *)(uVar3 - 4);
          uVar9 = uVar19;
          uVar10 = uVar14;
          do {
            pfVar15 = pfVar13 + 1;
            pfVar13 = pfVar13 + 1;
            fVar6 = *pfVar15 * fVar1;
            if (1 < uVar18) {
              lVar11 = uVar18 - 1;
              uVar12 = uVar17;
              do {
                uVar12 = uVar12 + 4;
                pfVar13 = pfVar13 + 1;
                fVar6 = *(float *)uVar12 * *pfVar13 + fVar6;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            dataCacheBlockTouch(param_1);
            dataCacheBlockTouch(uVar14 + 0x6c);
            if (uVar2 != 0) {
              fVar6 = *(float *)uVar10 + fVar6;
            }
            *(float *)uVar10 = fVar6;
            uVar9 = uVar9 - 1;
            uVar10 = uVar10 + 4;
          } while (uVar9 != 0);
        }
        uVar16 = uVar16 - 1;
        uVar17 = (uVar18 & 0x3fffffff) * 4 + uVar17;
        uVar14 = (uVar19 & 0x3fffffff) * 4 + uVar14;
      } while (uVar16 != 0);
    }
  }
  else {
    uVar9 = puVar5[5] / uVar18;
    uVar16 = 0;
    if ((int)uVar9 != 0) {
      uVar4 = puVar5[2];
      do {
        if (uVar19 != 0) {
          fVar1 = *(float *)uVar17;
          pfVar13 = (float *)(uVar3 - 4);
          pfVar15 = (float *)(uVar4 - 4);
          param_1 = uVar19;
          uVar10 = uVar14;
          do {
            pfVar7 = pfVar13 + 1;
            pfVar13 = pfVar13 + 1;
            pfVar8 = pfVar15 + 1;
            pfVar15 = pfVar15 + 1;
            fVar6 = (*pfVar7 * (float)(uVar16 & 0xffffffff) + *pfVar8) * fVar1;
            if (1 < uVar18) {
              lVar11 = uVar18 - 1;
              uVar12 = uVar17;
              do {
                pfVar13 = pfVar13 + 1;
                pfVar15 = pfVar15 + 1;
                uVar12 = uVar12 + 4;
                fVar6 = (*pfVar13 * (float)(uVar16 & 0xffffffff) + *pfVar15) * *(float *)uVar12 +
                        fVar6;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            dataCacheBlockTouch(uVar17 + 0x30);
            dataCacheBlockTouch(uVar14 + 0x6c);
            if (uVar2 != 0) {
              fVar6 = *(float *)uVar10 + fVar6;
            }
            *(float *)uVar10 = fVar6;
            param_1 = param_1 - 1;
            uVar10 = uVar10 + 4;
          } while (param_1 != 0);
        }
        uVar16 = uVar16 + 1;
        uVar17 = (uVar18 & 0x3fffffff) * 4 + uVar17;
        uVar14 = (uVar19 & 0x3fffffff) * 4 + uVar14;
      } while ((uVar16 & 0xffffffff) < uVar9);
    }
  }
  return param_1;
}

