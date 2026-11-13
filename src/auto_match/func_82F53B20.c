void fn_82F53B20(int param_1,unsigned __int64 *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  if (param_2 == (unsigned __int64 *)0x0) {
    return;
  }
  *param_2 = *(unsigned __int64 *)(param_1 + 0x30);
  *(unsigned int *)(param_2 + 1) = *(unsigned int *)(param_1 + 0x38);
  *(unsigned int *)((int)param_2 + 0xc) = *(unsigned int *)(param_1 + 0x3c);
  puVar1 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 2) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar1 = (unsigned int *)(param_1 + 0x50U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_2 + 4) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

