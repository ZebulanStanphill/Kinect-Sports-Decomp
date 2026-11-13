extern unsigned int lbl_8201467C;


unsigned __int64 fn_82A61858(unsigned __int64 param_1)

{
  short sVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  float fVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  __int64 lVar13;
  float *pfVar15;
  unsigned __int64 uVar14;
  unsigned __int64 uVar16;
  float *pfVar17;
  unsigned __int64 uVar18;
  unsigned __int64 uVar19;
  unsigned __int64 uVar20;
  
  fVar9 = lbl_8201467C;
  puVar5 = (unsigned int *)param_1;
  uVar18 = (unsigned __int64)*puVar5;
  uVar12 = (unsigned __int64)puVar5[1];
  uVar19 = (unsigned __int64)puVar5[6];
  uVar20 = (unsigned __int64)puVar5[7];
  uVar2 = puVar5[8];
  if (puVar5[9] != 0) {
    uVar20 = 1;
    uVar19 = 1;
  }
  uVar3 = puVar5[3];
  if (uVar3 == 0) {
    uVar16 = puVar5[5] / uVar19;
    if ((int)uVar16 != 0) {
      uVar3 = puVar5[2];
      do {
        if (uVar20 != 0) {
          sVar1 = *(short *)uVar18;
          param_1 = uVar18 + 0x18;
          pfVar15 = (float *)(uVar3 - 4);
          uVar10 = uVar20;
          uVar11 = uVar12;
          do {
            pfVar17 = pfVar15 + 1;
            pfVar15 = pfVar15 + 1;
            fVar6 = *pfVar17 * (float)(__int64)sVar1 * fVar9;
            if (1 < uVar19) {
              lVar13 = uVar19 - 1;
              uVar14 = uVar18;
              do {
                uVar14 = uVar14 + 2;
                pfVar15 = pfVar15 + 1;
                fVar6 = (float)(__int64)*(short *)uVar14 * *pfVar15 * fVar9 + fVar6;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            dataCacheBlockTouch(param_1);
            dataCacheBlockTouch(uVar12 + 0x6c);
            if (uVar2 != 0) {
              fVar6 = *(float *)uVar11 + fVar6;
            }
            *(float *)uVar11 = fVar6;
            uVar10 = uVar10 - 1;
            uVar11 = uVar11 + 4;
          } while (uVar10 != 0);
        }
        uVar16 = uVar16 - 1;
        uVar18 = (uVar19 & 0x7fffffff) * 2 + uVar18;
        uVar12 = (uVar20 & 0x3fffffff) * 4 + uVar12;
      } while (uVar16 != 0);
    }
  }
  else {
    uVar10 = puVar5[5] / uVar19;
    uVar16 = 0;
    if ((int)uVar10 != 0) {
      uVar4 = puVar5[2];
      do {
        if (uVar20 != 0) {
          sVar1 = *(short *)uVar18;
          pfVar17 = (float *)(uVar3 - 4);
          pfVar15 = (float *)(uVar4 - 4);
          param_1 = uVar20;
          uVar11 = uVar12;
          do {
            pfVar7 = pfVar17 + 1;
            pfVar17 = pfVar17 + 1;
            pfVar8 = pfVar15 + 1;
            pfVar15 = pfVar15 + 1;
            fVar6 = (*pfVar7 * (float)(uVar16 & 0xffffffff) + *pfVar8) * (float)(__int64)sVar1 *
                    fVar9;
            if (1 < uVar19) {
              lVar13 = uVar19 - 1;
              uVar14 = uVar18;
              do {
                uVar14 = uVar14 + 2;
                pfVar15 = pfVar15 + 1;
                pfVar17 = pfVar17 + 1;
                fVar6 = (*pfVar17 * (float)(uVar16 & 0xffffffff) + *pfVar15) *
                        (float)(__int64)*(short *)uVar14 * fVar9 + fVar6;
                lVar13 = lVar13 + -1;
              } while (lVar13 != 0);
            }
            dataCacheBlockTouch(uVar18 + 0x18);
            dataCacheBlockTouch(uVar12 + 0x6c);
            if (uVar2 != 0) {
              fVar6 = *(float *)uVar11 + fVar6;
            }
            *(float *)uVar11 = fVar6;
            param_1 = param_1 - 1;
            uVar11 = uVar11 + 4;
          } while (param_1 != 0);
        }
        uVar16 = uVar16 + 1;
        uVar18 = (uVar19 & 0x7fffffff) * 2 + uVar18;
        uVar12 = (uVar20 & 0x3fffffff) * 4 + uVar12;
      } while ((uVar16 & 0xffffffff) < uVar10);
    }
  }
  return param_1;
}

