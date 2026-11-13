void fn_82D47B60(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  if (*(float *)(param_1 + 4) <= *(float *)(param_3 + 0x10)) {
    return;
  }
  *(float *)(param_1 + 4) = *(float *)(param_3 + 0x10);
  puVar1 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + *(int *)(param_1 + 0xc) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x10) = *(unsigned int *)(param_3 + 0x10);
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x14) = *(unsigned int *)(param_3 + 0x14);
  *(unsigned int *)((*(int *)(*(int *)(param_1 + 0xc) + 0x40) + 8) * 4 + *(int *)(param_1 + 0xc)) =
       0xffffffff;
  *(unsigned char *)(param_1 + 8) = 1;
  return;
}

