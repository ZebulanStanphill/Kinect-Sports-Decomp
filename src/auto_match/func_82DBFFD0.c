extern unsigned int lbl_821AAD20;


void fn_82DBFFD0(int param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  unsigned char *puVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  int in_r0;
  int iVar6;
  int iVar7;
  unsigned int in_register_00010000;
  unsigned int in_ACC;
  unsigned int in_register_00010008;
  unsigned int in_vr0;
  unsigned int in_register_00010060;
  unsigned int in_register_00010064;
  unsigned int in_register_00010068;
  unsigned int in_vr6;
  unsigned int in_register_00010080;
  unsigned int in_register_00010084;
  unsigned int in_register_00010088;
  unsigned int in_vr8;
  unsigned int in_register_000100a0;
  unsigned int in_register_000100a4;
  unsigned int in_register_000100a8;
  unsigned int in_vr10;
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  
  *(int *)(param_4 + 0x14) = param_2;
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_4 + 0x30) = param_2;
  iVar6 = *(int *)(param_1 + 0x1c) / 0x90 + 4;
  iVar7 = *(int *)(param_1 + 0x4c) * 0x80 + param_2 + 0x90;
  *(int *)(param_4 + 0x3c) = iVar7;
  iVar2 = *(int *)(param_1 + 0x14);
  iVar7 = (iVar6 * 2 + 1) * 0x10 + *(int *)(param_1 + 0xc) + iVar7;
  *(int *)(param_4 + 0x40) = iVar7;
  *(unsigned int *)(param_4 + 0x18) = (((iVar6 * 6 + iVar2) * 4 + 0x17U & 0xfffffff0) - param_2) + iVar7;
  uVar5 = lbl_821AAD20;
  if (param_2 != 0) {
    puVar3 = *(unsigned char **)(param_4 + 0x30);
    *puVar3 = 1;
    *(unsigned int *)(puVar3 + 8) = uVar5;
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + in_r0 + 0x30) & 0xfffffff0);
    *puVar4 = in_register_000100c0;
    puVar4[1] = in_register_000100c4;
    puVar4[2] = in_register_000100c8;
    puVar4[3] = in_vr12;
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + in_r0 + 0x10) & 0xfffffff0);
    *puVar4 = in_register_000100a0;
    puVar4[1] = in_register_000100a4;
    puVar4[2] = in_register_000100a8;
    puVar4[3] = in_vr10;
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + in_r0 + 0x20) & 0xfffffff0);
    *puVar4 = in_register_00010080;
    puVar4[1] = in_register_00010084;
    puVar4[2] = in_register_00010088;
    puVar4[3] = in_vr8;
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + in_r0 + 0x40) & 0xfffffff0);
    *puVar4 = in_register_00010060;
    puVar4[1] = in_register_00010064;
    puVar4[2] = in_register_00010068;
    puVar4[3] = in_vr6;
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + in_r0 + 0x50) & 0xfffffff0);
    *puVar4 = in_register_00010000;
    puVar4[1] = in_ACC;
    puVar4[2] = in_register_00010008;
    puVar4[3] = in_vr0;
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + 0x60) & 0xfffffff0);
    *puVar4 = in_register_00010000;
    puVar4[1] = in_ACC;
    puVar4[2] = in_register_00010008;
    puVar4[3] = in_vr0;
    puVar4 = (unsigned int *)((unsigned int)(puVar3 + 0x70) & 0xfffffff0);
    *puVar4 = in_register_00010000;
    puVar4[1] = in_ACC;
    puVar4[2] = in_register_00010008;
    puVar4[3] = in_vr0;
    puVar3[(iVar1 + 1) * 0x80] = 3;
  }
  return;
}

