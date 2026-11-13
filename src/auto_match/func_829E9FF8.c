extern unsigned int lbl_821AAD20;


void fn_829E9FF8(int param_1,int param_2,int *param_3,__int64 param_4,unsigned int param_5,int param_6)

{
  int iVar1;
  float fVar2;
  float fVar3;
  unsigned char *pbVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  
  fVar3 = lbl_821AAD20;
  iVar11 = 0;
  if (0 < (int)param_4) {
    iVar9 = *(int *)(param_1 + 0x20);
    pfVar10 = (float *)(param_6 + -4);
    iVar7 = iVar9;
    do {
      piVar8 = (int *)(param_5 * 0xc + param_3[2]);
      iVar6 = iVar7 * iVar11;
      iVar1 = *piVar8;
      iVar5 = 0;
      if (0 < iVar7) {
        do {
          iVar7 = 0;
          fVar2 = fVar3;
          if (0 < piVar8[1]) {
            pfVar12 = (float *)(piVar8[2] + -4);
            pbVar4 = (unsigned char *)((iVar5 + iVar6 + iVar1 + param_2) - iVar9);
            do {
              pbVar4 = pbVar4 + iVar9;
              iVar7 = iVar7 + 1;
              pfVar12 = pfVar12 + 1;
              fVar2 = (float)*pbVar4 * *pfVar12 + fVar2;
            } while (iVar7 < piVar8[1]);
          }
          iVar5 = iVar5 + 1;
          pfVar10 = pfVar10 + 1;
          *pfVar10 = fVar2;
          iVar9 = *(int *)(param_1 + 0x20);
          iVar7 = iVar9;
        } while (iVar5 < iVar9);
      }
      param_5 = param_5 + 1;
      if ((unsigned int)((param_3[3] - param_3[2]) / 0xc) <= param_5) {
        param_5 = 0;
        iVar11 = *param_3 + iVar11;
      }
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}

