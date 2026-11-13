extern int fn_82CE5410();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82057518;


void fn_82DDAB60(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  int *piVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  
  iVar1 = ((int *)*param_1)[2];
  iVar2 = ((int *)param_1[1])[2];
  piVar3 = *(int **)*param_1;
  iVar4 = *(int *)param_1[1];
  *param_2 = iVar1;
  param_2[1] = iVar2;
  param_2[5] = (int)(*(float *)(iVar4 + 0x10) + (float)piVar3[4]);
  puVar5 = (unsigned int *)((unsigned int)(param_1 + 0x1c) & 0xfffffff0);
  uVar12 = puVar5[1];
  uVar13 = puVar5[2];
  uVar14 = puVar5[3];
  puVar6 = (unsigned int *)((unsigned int)(param_2 + 0x14) & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar12;
  puVar6[2] = uVar13;
  puVar6[3] = uVar14;
  param_2[0x10] = param_1[3] + 0x50;
  iVar10 = (**(int (***)())(*piVar3 + 0x2c))(piVar3);
  param_2[4] = iVar10;
  param_2[3] = iVar10;
  piVar11 = (int *)fn_82CE5410();
  iVar4 = *piVar11;
  *piVar11 = (iVar10 * 0x10 + 0x7fU & 0xffffff80) + iVar4;
  param_2[2] = iVar4;
  (**(int (***)())(*piVar3 + 0x30))(piVar3);
  fVar9 = lbl_82057518;
  fVar8 = lbl_82002AE0;
  fVar7 = *(float *)(iVar1 + 0xa0) * (float)param_2[0x1b] * (float)param_2[0x1b] +
          *(float *)(iVar2 + 0xa0) * (float)param_2[0x1f] * (float)param_2[0x1f];
  param_2[6] = (int)fVar7;
  param_2[7] = (int)(fVar8 / (fVar7 + fVar9));
  return;
}

