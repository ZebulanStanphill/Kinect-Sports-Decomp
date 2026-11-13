void fn_825B5598(int param_1,int param_2,int param_3,int param_4,int param_5,unsigned int *param_6,
                  unsigned int *param_7,unsigned int *param_8)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  param_2 = param_2 * 0x40;
  puVar2 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + param_2 & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + param_3 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar2 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + param_2 + 0x10U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + param_4 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  puVar2 = (unsigned int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + param_2 + 0x20U & 0xfffffff0);
  uVar4 = puVar2[1];
  uVar5 = puVar2[2];
  uVar6 = puVar2[3];
  puVar3 = (unsigned int *)(in_r0 + param_5 & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  puVar3[3] = uVar6;
  iVar1 = *(int *)(param_1 + 0x10);
  *param_6 = *(unsigned int *)(*(int *)(iVar1 + 4) + param_2 + 0x30);
  *param_8 = *(unsigned int *)(*(int *)(iVar1 + 4) + param_2 + 0x38);
  *param_7 = *(unsigned int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + param_2 + 0x34);
  return;
}

