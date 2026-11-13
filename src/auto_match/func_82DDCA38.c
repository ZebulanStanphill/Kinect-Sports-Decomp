void fn_82DDCA38(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int in_r0;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  iVar1 = *(int *)(param_1 + 0x6c);
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  iVar4 = iVar1 * 0x10;
  puVar3 = (unsigned int *)(*(int *)(param_1 + 0x68) + iVar4 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar2 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (unsigned int *)(*(int *)(param_1 + 0x60) + iVar4 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  puVar2 = (unsigned int *)(param_2 + 0x20U & 0xfffffff0);
  uVar5 = puVar2[1];
  uVar6 = puVar2[2];
  uVar7 = puVar2[3];
  puVar3 = (unsigned int *)(*(int *)(param_1 + 100) + iVar4 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar5;
  puVar3[2] = uVar6;
  puVar3[3] = uVar7;
  *(int *)(param_1 + 0x6c) = iVar1 + 1;
  return;
}

