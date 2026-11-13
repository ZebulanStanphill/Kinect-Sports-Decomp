void fn_82FBAB20(int param_1,unsigned int *param_2)

{
  float fVar1;
  unsigned short uVar2;
  float *pfVar3;
  float *pfVar4;
  unsigned int uVar6;
  __int64 lVar5;
  unsigned __int64 uVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  
  uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14);
  if (uVar7 == 0) {
    return;
  }
  pfVar4 = (float *)*param_2;
  fVar1 = *(float *)(param_1 + 0xc);
  uVar2 = *(unsigned short *)(param_2 + 3);
  pfVar8 = pfVar4 + *(unsigned short *)((int)param_2 + 0xe);
  pfVar3 = pfVar8 + -3;
  do {
    if (pfVar4 < pfVar8) {
      uVar6 = (int)pfVar8 + (3 - (int)pfVar4);
      pfVar9 = pfVar4;
      if (3 < (int)(((int)uVar6 >> 2) + (unsigned int)((int)uVar6 < 0 && (uVar6 & 3) != 0))) {
        do {
          *pfVar9 = fVar1 * *pfVar9;
          pfVar9[1] = pfVar9[1] * fVar1;
          pfVar9[2] = pfVar9[2] * fVar1;
          pfVar9[3] = pfVar9[3] * fVar1;
          pfVar9 = pfVar9 + 4;
        } while ((int)pfVar9 < (int)pfVar3);
      }
      if (pfVar9 < pfVar8) {
        pfVar10 = pfVar9 + -1;
        lVar5 = (unsigned __int64)((unsigned int)((int)pfVar8 + (-1 - (int)pfVar9)) >> 2) + 1;
        do {
          pfVar9 = pfVar10 + 1;
          pfVar10 = pfVar10 + 1;
          *pfVar10 = *pfVar9 * fVar1;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
    }
    uVar7 = uVar7 - 1;
    pfVar4 = pfVar4 + uVar2;
    pfVar8 = pfVar8 + uVar2;
    pfVar3 = pfVar3 + uVar2;
  } while (uVar7 != 0);
  return;
}

