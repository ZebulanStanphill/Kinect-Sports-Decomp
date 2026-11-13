extern int fn_82DB0380();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_82002AE0;


void fn_82DB4770(int param_1,int param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double dVar12;
  
  fVar5 = param_3[1] - *param_3;
  fVar1 = *(float *)(param_1 + 8);
  *(float *)(param_2 + 0x1d0) = fVar1;
  fVar7 = lbl_82002AE0;
  fVar2 = *(float *)(param_1 + 8);
  *(float *)(param_2 + 0x1d8) = fVar5;
  fVar6 = lbl_8200133C;
  *(float *)(param_2 + 0x1d4) = fVar2 + fVar5;
  *(float *)(param_2 + 0x1dc) = fVar7 / fVar5;
  iVar10 = *(int *)(param_2 + 8);
  dVar12 = (double)(fVar1 - *param_3);
  *(float *)(iVar10 + 0x14) = (float)((double)*(float *)(iVar10 + 0x14) + dVar12);
  *(unsigned int *)(iVar10 + 0x18) = *(unsigned int *)(param_2 + 0x1d0);
  if (*(float *)(iVar10 + 0x20) != fVar6) {
    *(float *)(iVar10 + 0x20) = (float)((double)*(float *)(iVar10 + 0x20) + dVar12);
  }
  iVar10 = 0;
  if (0 < *(int *)(param_2 + 0x2c)) {
    iVar11 = 0;
    do {
      iVar9 = 0;
      iVar3 = *(int *)(*(int *)(param_2 + 0x28) + iVar11);
      if (0 < *(int *)(iVar3 + 0x4c)) {
        iVar8 = 0;
        do {
          iVar9 = iVar9 + 1;
          iVar4 = *(int *)(*(int *)(iVar3 + 0x48) + iVar8);
          iVar8 = iVar8 + 4;
          *(float *)(iVar4 + 0x13c) = (float)((double)*(float *)(iVar4 + 0x13c) + dVar12);
        } while (iVar9 < *(int *)(iVar3 + 0x4c));
      }
      fn_82DB0380((double)param_3[1],(double)*(float *)(param_2 + 0x1d4));
      iVar10 = iVar10 + 1;
      iVar11 = iVar11 + 4;
    } while (iVar10 < *(int *)(param_2 + 0x2c));
  }
  (**(int (***)())(**(int **)(param_2 + 8) + 0x38))(dVar12);
  *(unsigned __int64 *)param_3 = *(unsigned __int64 *)(param_2 + 0x1d0);
  *(unsigned __int64 *)(param_3 + 2) = *(unsigned __int64 *)(param_2 + 0x1d8);
  iVar10 = *(int *)(param_2 + 0x78);
  *(unsigned __int64 *)(iVar10 + 0x50) = *(unsigned __int64 *)(param_2 + 0x1d0);
  *(unsigned __int64 *)(iVar10 + 0x58) = *(unsigned __int64 *)(param_2 + 0x1d8);
  return;
}

