extern int fn_82F68CC0();


unsigned int * fn_82D9C790(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  fn_82F68CC0(param_1,param_2,0x50);
  param_1[0x19] = 0;
  *param_1 = *param_2;
  *(unsigned char *)(param_1 + 1) = *(unsigned char *)(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  puVar1 = (unsigned int *)((int)param_2 + in_r0 + 0x20 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((int)param_1 + in_r0 + 0x20 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 0xc) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0xc) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (unsigned int *)((unsigned int)(param_2 + 0x10) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x10) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(unsigned __int64 *)(param_1 + 0x14) = *(unsigned __int64 *)(param_2 + 0x14);
  *(unsigned __int64 *)(param_1 + 0x16) = *(unsigned __int64 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  param_1[0x1a] = param_2[0x1a];
  *(unsigned char *)(param_1 + 0x1b) = *(unsigned char *)(param_2 + 0x1b);
  *(unsigned char *)((int)param_1 + 0x6d) = *(unsigned char *)((int)param_2 + 0x6d);
  param_1[0x1c] = param_2[0x1c];
  return param_1;
}

