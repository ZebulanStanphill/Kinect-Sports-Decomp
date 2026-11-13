extern unsigned int fStack_38;
extern int fn_8255AE78();
extern unsigned int lbl_82192734;
extern unsigned int lbl_831CCE4C;


double fn_822F7690(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  int in_r0;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float afStack_40 [2];
  float fStack_38;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
  pfVar4 = (float *)(*(int *)(param_1 + 0xc) + 0x80U & 0xfffffff0);
  fVar13 = *pfVar4;
  fVar14 = pfVar4[1];
  fVar15 = pfVar4[2];
  fVar16 = pfVar4[3];
  pfVar4 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *pfVar4 = fVar13;
  pfVar4[1] = fVar14;
  pfVar4[2] = fVar15;
  pfVar4[3] = fVar16;
  if (iVar1 == 0) {
    afStack_40[0] = afStack_40[0] * lbl_82192734;
    fStack_38 = fStack_38 * lbl_82192734;
    pfVar4 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
    fVar13 = *pfVar4;
    fVar14 = pfVar4[1];
    fVar15 = pfVar4[2];
    fVar16 = pfVar4[3];
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0x1c);
  pfVar4 = (float *)(param_2 + 0x10U & 0xfffffff0);
  fVar5 = *pfVar4;
  fVar7 = pfVar4[1];
  fVar9 = pfVar4[2];
  fVar11 = pfVar4[3];
  fn_8255AE78((double)*(float *)(*(int *)(piVar2[4] * 4 + *piVar2) + 0x14));
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + 0x1c);
  pfVar4 = (float *)(param_2 + 0x30U & 0xfffffff0);
  fVar6 = *pfVar4;
  fVar8 = pfVar4[1];
  fVar10 = pfVar4[2];
  fVar12 = pfVar4[3];
  iVar1 = piVar2[4];
  iVar3 = *piVar2;
  pfVar4 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *pfVar4 = fVar13 + fVar5;
  pfVar4[1] = fVar14 + fVar7;
  pfVar4[2] = fVar15 + fVar9;
  pfVar4[3] = fVar16 + fVar11;
  fn_8255AE78((double)*(float *)(*(int *)(iVar1 * 4 + iVar3) + 0x14));
  fVar5 = lbl_831CCE4C;
  pfVar4 = (float *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *pfVar4 = fVar13 + fVar6;
  pfVar4[1] = fVar14 + fVar8;
  pfVar4[2] = fVar15 + fVar10;
  pfVar4[3] = fVar16 + fVar12;
  return (double)(fVar5 - fStack_38);
}

