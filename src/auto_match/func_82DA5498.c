extern unsigned int *auStack_10;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82057518;


void fn_82DA5498(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int *puVar5;
  int in_r0;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned char auStack_10 [16];
  
  fVar3 = lbl_82057518;
  fVar4 = lbl_82002AE0;
  fVar1 = *(float *)(param_1 + 0xc0);
  fVar2 = lbl_82057518 - fVar1;
  puVar5 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  uVar6 = *puVar5;
  uVar7 = puVar5[1];
  uVar8 = puVar5[2];
  uVar9 = puVar5[3];
  puVar5 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  puVar5 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  puVar5 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
  *puVar5 = uVar6;
  puVar5[1] = uVar7;
  puVar5[2] = uVar8;
  puVar5[3] = uVar9;
  if (fVar2 < 0.0) {
    fVar3 = fVar1;
  }
  fVar4 = fVar4 / fVar3;
  *param_2 = fVar4;
  param_2[5] = fVar4;
  param_2[10] = fVar4;
  return;
}

