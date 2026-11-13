extern unsigned int lbl_821CA460;


double fn_8260DA20(double param_1,unsigned __int64 param_2,float *param_3,int param_4)

{
  float fVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  
  dVar8 = (double)*param_3;
  iVar5 = param_4 + -1;
  iVar6 = 0;
  if (dVar8 <= param_1) {
    if (param_1 <= (double)param_3[param_4 * 2 + -2]) {
      iVar4 = iVar5;
      if (1 < iVar5) {
        do {
          uVar2 = iVar4 - iVar6;
          iVar3 = ((int)uVar2 >> 1) + (unsigned int)((int)uVar2 < 0 && (uVar2 & 1) != 0) + iVar6;
          iVar5 = iVar3;
          if ((double)param_3[iVar3 * 2] <= param_1) {
            iVar5 = iVar4;
            iVar6 = iVar3;
          }
          iVar4 = iVar5;
        } while (iVar6 + 1 < iVar5);
      }
      iVar6 = iVar6 << 3;
      fVar1 = param_3[iVar5 * 2];
    }
    else {
      iVar6 = iVar5 * 8;
      iVar5 = 0;
      fVar1 = *param_3 + lbl_821CA460;
    }
    dVar8 = (double)fVar1;
    pfVar7 = (float *)(iVar6 + (int)param_3);
    fVar1 = *pfVar7;
  }
  else {
    pfVar7 = param_3 + iVar5 * 2;
    iVar5 = 0;
    fVar1 = *pfVar7 - lbl_821CA460;
  }
  dVar9 = (double)fVar1;
  dVar10 = (double)pfVar7[1];
  dVar11 = (double)param_3[iVar5 * 2 + 1];
  if (dVar8 != dVar9) {
    dVar8 = (double)(float)((double)((float)(param_1 - dVar9) / (float)(dVar8 - dVar9)) *
                            (double)(float)(dVar11 - dVar10) + dVar10);
    if (dVar11 <= dVar10) {
      if (dVar11 <= dVar8) {
        if (dVar10 < dVar8) {
          return dVar10;
        }
        return dVar8;
      }
    }
    else if (dVar8 <= dVar11) {
      if (dVar8 < dVar10) {
        return dVar10;
      }
      return dVar8;
    }
  }
  return dVar11;
}

