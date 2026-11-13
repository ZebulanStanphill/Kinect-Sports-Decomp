extern int fn_827A8630();
extern unsigned int lbl_821AAD20;


unsigned int * fn_827A9470(unsigned int *param_1,int *param_2,float *param_3)

{
  unsigned char bVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  
  if (param_2[1] != 0) {
    iVar8 = fn_827A8630(param_2,0,param_2[1],param_3 + 1,0xffffffff827a83f8);
    if (iVar8 == param_2[1]) {
      iVar8 = iVar8 + -1;
    }
    iVar11 = iVar8 * 4;
    fVar2 = param_3[1];
    piVar12 = *(int **)(*param_2 + iVar11);
    iVar10 = *piVar12;
    piVar5 = piVar12 + 4;
    iVar4 = *piVar5;
    do {
      if (fVar2 < (float)(__int64)iVar4) break;
      if (iVar10 < 0) {
        uVar9 = (unsigned int)*(unsigned short *)((int)piVar12 + 0x16);
        iVar10 = (int)*(char *)((int)piVar12 + 0x1d);
      }
      else {
        uVar9 = piVar12[6];
        iVar10 = (int)*(short *)(piVar12 + 10);
      }
      if ((float)(__int64)(int)(iVar10 + uVar9 + iVar4) <= fVar2) break;
      fVar3 = *param_3;
      fVar6 = (float)(__int64)piVar12[3];
      if (fVar6 <= fVar3) {
        if (fVar3 == fVar6) {
          uVar9 = piVar12[5];
        }
        else {
          uVar9 = (unsigned int)*(unsigned short *)(piVar12 + 5);
        }
        if (fVar3 < (float)(__int64)(int)(uVar9 + piVar12[3])) {
          bVar1 = *(unsigned char *)(param_2 + 0x1d);
          param_1[2] = iVar8;
          *param_1 = param_2;
          param_1[1] = 0;
          *(unsigned char *)(param_1 + 4) = bVar1 >> 2 & 1;
          uVar7 = lbl_821AAD20;
          goto LAB_827a95e8;
        }
      }
      iVar8 = iVar8 + 1;
      iVar11 = iVar11 + 4;
      if (iVar8 == param_2[1]) break;
      piVar12 = *(int **)(iVar11 + *param_2);
      iVar10 = *piVar12;
      iVar4 = piVar12[4];
    } while (iVar4 == *piVar5);
  }
  *param_1 = 0;
  param_1[1] = 0;
  uVar7 = lbl_821AAD20;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
LAB_827a95e8:
  param_1[3] = uVar7;
  return param_1;
}

