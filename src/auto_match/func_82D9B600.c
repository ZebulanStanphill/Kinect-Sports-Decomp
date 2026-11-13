extern unsigned int *auStack_10;


void fn_82D9B600(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_10 [16];
  
  uVar1 = *(unsigned int *)(param_1 + 0xc0);
  uVar2 = *(unsigned int *)(param_1 + 0xc4);
  uVar3 = *(unsigned int *)(param_1 + 200);
  puVar4 = (unsigned int *)((unsigned int)(auStack_10 + in_r0) & 0xfffffff0);
  uVar5 = *puVar4;
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar8 = puVar4[3];
  puVar4 = (unsigned int *)(in_r0 + (int)param_2 & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  puVar4 = (unsigned int *)((unsigned int)(param_2 + 8) & 0xfffffff0);
  *puVar4 = uVar5;
  puVar4[1] = uVar6;
  puVar4[2] = uVar7;
  puVar4[3] = uVar8;
  *param_2 = uVar1;
  param_2[5] = uVar2;
  param_2[10] = uVar3;
  return;
}

