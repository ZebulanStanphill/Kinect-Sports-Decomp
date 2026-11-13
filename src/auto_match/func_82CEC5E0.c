extern unsigned int *auStack_10;
extern unsigned int lbl_82002AE0;


void fn_82CEC5E0(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_10 [16];
  
  uVar2 = lbl_82002AE0;
  puVar1 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 4) & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
  *puVar1 = uVar3;
  puVar1[1] = uVar4;
  puVar1[2] = uVar5;
  puVar1[3] = uVar6;
  *param_1 = uVar2;
  param_1[5] = uVar2;
  param_1[10] = uVar2;
  param_1[param_2[2] * 5] = *param_2;
  param_1[param_2[3] * 4 + param_2[2]] = param_2[1];
  param_1[param_2[2] * 4 + param_2[3]] = -(float)param_2[1];
  param_1[param_2[3] * 5] = *param_2;
  return;
}

