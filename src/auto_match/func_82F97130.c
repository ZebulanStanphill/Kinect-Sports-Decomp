void fn_82F97130(double param_1,int param_2,unsigned int *param_3)

{
  unsigned short uVar1;
  float *pfVar2;
  float *pfVar3;
  unsigned int uVar5;
  __int64 lVar4;
  unsigned __int64 uVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  
  uVar1 = *(unsigned short *)(param_3 + 3);
  dVar13 = (double)*(float *)(param_2 + 0xc);
  dVar14 = (double)((float)(param_1 - dVar13) / (float)uVar1);
  if (((param_3[1] & 8) == 0) || (*(char *)(param_2 + 0x34) != '\0')) {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x10);
  }
  else {
    uVar6 = (unsigned __int64)*(unsigned int *)(param_2 + 0x10) - 1;
  }
  if ((uVar6 & 0xffffffff) == 0) {
    return;
  }
  pfVar3 = (float *)*param_3;
  pfVar7 = pfVar3 + *(unsigned short *)((int)param_3 + 0xe);
  pfVar2 = pfVar7 + -3;
  do {
    if (pfVar3 < pfVar7) {
      uVar5 = (int)pfVar7 + (3 - (int)pfVar3);
      dVar10 = dVar13;
      pfVar8 = pfVar3;
      if (3 < (int)(((int)uVar5 >> 2) + (unsigned int)((int)uVar5 < 0 && (uVar5 & 3) != 0))) {
        do {
          dVar12 = (double)(float)((double)(float)(dVar10 + dVar14) + dVar14);
          *pfVar8 = (float)((double)(float)(dVar10 + dVar14) * (double)*pfVar8);
          dVar11 = (double)(float)(dVar12 + dVar14);
          pfVar8[1] = (float)((double)pfVar8[1] * dVar12);
          dVar10 = (double)(float)(dVar11 + dVar14);
          pfVar8[2] = (float)((double)pfVar8[2] * dVar11);
          pfVar8[3] = (float)((double)pfVar8[3] * dVar10);
          pfVar8 = pfVar8 + 4;
        } while ((int)pfVar8 < (int)pfVar2);
      }
      if (pfVar8 < pfVar7) {
        pfVar9 = pfVar8 + -1;
        lVar4 = (unsigned __int64)((unsigned int)((int)pfVar7 + (-1 - (int)pfVar8)) >> 2) + 1;
        do {
          dVar10 = (double)(float)(dVar10 + dVar14);
          pfVar8 = pfVar9 + 1;
          pfVar9 = pfVar9 + 1;
          *pfVar9 = (float)((double)*pfVar8 * dVar10);
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    uVar6 = uVar6 - 1;
    pfVar3 = pfVar3 + uVar1;
    pfVar7 = pfVar7 + uVar1;
    pfVar2 = pfVar2 + uVar1;
  } while (uVar6 != 0);
  return;
}

