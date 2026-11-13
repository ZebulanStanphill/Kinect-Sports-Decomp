void fn_82D75C10(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  int iVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  if ((*(int *)(param_1 + 0x30) != 0) && (*(float *)(param_1 + 0x2c) <= *(float *)(param_2 + 0x1c)))
  {
    return;
  }
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)(in_r0 + param_1 + 0x10 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  iVar3 = *(int *)(param_2 + 0x20);
  for (iVar4 = *(int *)(*(int *)(param_2 + 0x20) + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc))
  {
    iVar3 = iVar4;
  }
  *(int *)(param_1 + 0x30) = iVar3;
  *(unsigned int *)(param_1 + 0x34) = *(unsigned int *)(*(int *)(param_2 + 0x20) + 4);
  iVar3 = *(int *)(param_2 + 0x24);
  for (iVar4 = *(int *)(*(int *)(param_2 + 0x24) + 0xc); iVar4 != 0; iVar4 = *(int *)(iVar4 + 0xc))
  {
    iVar3 = iVar4;
  }
  *(int *)(param_1 + 0x38) = iVar3;
  *(unsigned int *)(param_1 + 0x3c) = *(unsigned int *)(*(int *)(param_2 + 0x24) + 4);
  *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 0x1c);
  return;
}

