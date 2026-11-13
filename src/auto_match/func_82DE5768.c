extern unsigned int *auStack_10;


void fn_82DE5768(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_10 [16];
  
  fVar1 = param_1[5];
  fVar2 = *param_1;
  fVar3 = param_1[10];
  puVar4 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar4 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4 = (unsigned int *)((unsigned int)(param_1 + 4) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  if (fVar2 - fVar1 < 0.0) {
    fVar2 = fVar1;
  }
  puVar4 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  if (fVar2 - fVar3 < 0.0) {
    fVar2 = fVar3;
  }
  *param_1 = fVar2;
  param_1[5] = fVar2;
  param_1[10] = fVar2;
  return;
}

