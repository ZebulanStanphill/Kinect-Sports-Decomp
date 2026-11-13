void fn_8260A770(unsigned short *param_1,unsigned short *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int *puVar3;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  *param_1 = *param_2;
  lVar4 = 3;
  puVar3 = (unsigned int *)(param_1 + 0x20);
  *(unsigned char *)(param_1 + 1) = *(unsigned char *)(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  puVar1 = (unsigned int *)((int)param_2 + in_r0 + 0x10 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((int)param_1 + in_r0 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 0x10) & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 0x18) & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x18) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  do {
    *puVar3 = *(unsigned int *)(((int)param_2 - (int)param_1) + (int)puVar3);
    puVar3 = puVar3 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

