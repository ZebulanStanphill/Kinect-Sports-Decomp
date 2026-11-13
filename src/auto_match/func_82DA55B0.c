extern unsigned int *auStack_10;


void fn_82DA55B0(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_10 [16];
  
  uVar1 = *(unsigned int *)(param_1 + 0xc0);
  puVar2 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  uVar3 = *puVar2;
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar2 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *param_2 = uVar1;
  param_2[5] = uVar1;
  param_2[10] = uVar1;
  return;
}

