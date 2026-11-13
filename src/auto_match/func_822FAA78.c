extern int fn_822ABA88();
extern unsigned int lbl_82192734;
extern float lbl_831CC9B4;


void fn_822FAA78(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  float afStack_30 [6];
  
  piVar3 = *(int **)(((unsigned int)((unsigned __int64)LZCOUNT(*(unsigned int *)(*(int *)(param_2 + 8) + 0x2c)) >> 3)
                     & 4) + **(int **)(*(int *)(param_2 + 4) + 8));
  uVar6 = (**(int (***)())(**(int **)(*(int *)(param_2 + 4) + 0x2e0) + 0x1c))();
  iVar7 = fn_822ABA88(*(unsigned int *)(piVar3[4] * 4 + *piVar3),uVar6);
  iVar2 = *(int *)(*(int *)(param_2 + 8) + 0x2c);
  puVar4 = (unsigned int *)(iVar7 + 0x80U & 0xfffffff0);
  uVar8 = puVar4[1];
  uVar9 = puVar4[2];
  uVar10 = puVar4[3];
  puVar5 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar8;
  puVar5[2] = uVar9;
  puVar5[3] = uVar10;
  if (iVar2 == 0) {
    afStack_30[0] = afStack_30[0] * lbl_82192734;
  }
  fVar1 = *(float *)(param_2 + 0x1c);
  puVar4 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  uVar8 = puVar4[1];
  uVar9 = puVar4[2];
  uVar10 = puVar4[3];
  puVar5 = (unsigned int *)((int)afStack_30 + in_r0 & 0xfffffff0);
  *puVar5 = *puVar4;
  puVar5[1] = uVar8;
  puVar5[2] = uVar9;
  puVar5[3] = uVar10;
  *(float *)(param_2 + 0x1c) =
       (float)((double)afStack_30[0] * param_1 + (double)fVar1) * lbl_831CC9B4;
  return;
}

