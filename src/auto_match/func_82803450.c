void fn_82803450(int param_1, int *param_2, unsigned int *param_3, unsigned int *param_4, unsigned int *param_5, unsigned int *param_6, int *param_7, int *param_8, unsigned __int64 unused_arg_9, unsigned __int64 unused_arg_10, int in_stack_00000064, int in_stack_0000006c, int in_stack_00000074, int in_stack_0000007c)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int in_r0;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  int *in_stack_00000054;
  int *in_stack_0000005c;




  
  uVar1 = *(unsigned short *)(param_1 + 0x1c);
  iVar4 = param_2[1];
  iVar5 = param_2[2];
  uVar2 = *(unsigned short *)(param_1 + 0x18);
  iVar6 = param_2[3];
  uVar3 = *(unsigned short *)(param_1 + 0x1a);
  iVar7 = *(int *)(param_1 + 0x10);
  *param_3 = *param_2 * (unsigned int)uVar1 + (unsigned int)uVar2 + (unsigned int)uVar3 + iVar7;
  *param_4 = iVar4 * (unsigned int)uVar1 + (unsigned int)uVar2 + (unsigned int)uVar3 + iVar7;
  *param_5 = iVar5 * (unsigned int)uVar1 + (unsigned int)uVar2 + (unsigned int)uVar3 + iVar7;
  *param_6 = iVar6 * (unsigned int)uVar1 + (unsigned int)uVar2 + (unsigned int)uVar3 + iVar7;
  *param_7 = (*param_3 & 3) << 3;
  *param_8 = (*param_4 & 3) << 3;
  *in_stack_00000054 = (*param_5 & 3) << 3;
  *in_stack_0000005c = (*param_6 & 3) << 3;
  *param_3 = *param_3 & 0xfffffffc;
  *param_4 = *param_4 & 0xfffffffc;
  *param_5 = *param_5 & 0xfffffffc;
  *param_6 = *param_6 & 0xfffffffc;
  *(int *)(in_stack_00000064 + 0xc) = *param_7;
  *(int *)(in_stack_0000006c + 0xc) = *param_8;
  *(int *)(in_stack_00000074 + 0xc) = *in_stack_00000054;
  *(int *)(in_stack_0000007c + 0xc) = *in_stack_0000005c;
  puVar8 = (unsigned int *)(in_r0 + in_stack_00000064 & 0xfffffff0);
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  uVar12 = puVar8[3];
  puVar9 = (unsigned int *)(in_r0 + in_stack_00000064 & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  puVar8 = (unsigned int *)(in_r0 + in_stack_0000006c & 0xfffffff0);
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  uVar12 = puVar8[3];
  puVar9 = (unsigned int *)(in_r0 + in_stack_0000006c & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  puVar8 = (unsigned int *)(in_r0 + in_stack_00000074 & 0xfffffff0);
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  uVar12 = puVar8[3];
  puVar9 = (unsigned int *)(in_r0 + in_stack_00000074 & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  puVar8 = (unsigned int *)(in_r0 + in_stack_0000007c & 0xfffffff0);
  uVar10 = puVar8[1];
  uVar11 = puVar8[2];
  uVar12 = puVar8[3];
  puVar9 = (unsigned int *)(in_r0 + in_stack_0000007c & 0xfffffff0);
  *puVar9 = *puVar8;
  puVar9[1] = uVar10;
  puVar9[2] = uVar11;
  puVar9[3] = uVar12;
  return;
}

