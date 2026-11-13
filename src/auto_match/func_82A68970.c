void fn_82A68970(int *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  unsigned int uVar8;
  int iVar9;
  float fVar10;
  float *pfVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  
  fVar3 = (float)param_1[7];
  fVar4 = (float)param_1[8];
  pfVar5 = (float *)param_1[2];
  pfVar6 = (float *)param_1[3];
  uVar12 = (unsigned __int64)(unsigned int)param_1[4];
  iVar7 = *param_1;
  fVar1 = *pfVar5;
  uVar8 = param_1[1];
  uVar13 = (unsigned __int64)uVar8;
  fVar2 = *pfVar6;
  iVar9 = param_1[6];
  if (uVar12 != 0) {
    do {
      pfVar11 = (float *)uVar13;
      fVar10 = -(fVar4 * fVar2 - (*(float *)((iVar7 - uVar8) + (int)pfVar11) - fVar1));
      fVar2 = fVar10 * fVar3 + fVar2;
      fVar1 = fVar2 * fVar3 + fVar1;
      dataCacheBlockTouch(uVar13 + 0x10);
      if (iVar9 == 0) {
        *pfVar11 = fVar1;
      }
      else {
        if (iVar9 != 2) {
          if (iVar9 == 1) {
            *pfVar11 = fVar2;
            goto code_r0x82a68a04;
          }
          fVar10 = fVar1 + fVar10;
        }
        *pfVar11 = fVar10;
      }
code_r0x82a68a04:
      uVar13 = uVar13 + 4;
      uVar12 = uVar12 - 1;
    } while (uVar12 != 0);
  }
  *pfVar5 = fVar1;
  *pfVar6 = fVar2;
  return;
}

