extern unsigned int *auStack_40;
extern int fn_822C5B18();
extern int fn_823000E0();
extern int fn_8230BBC0();
extern unsigned int ltcg_pool_0_0f;


void fn_823090B0(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_40 [1];
  
  uVar3 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = uVar3;
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x3c) = uVar3;
  puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  puVar2 = (unsigned int *)(param_1 + 0x40U & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  fn_8230BBC0();
  *(unsigned int *)(param_1 + 0xd0) = 0;
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(unsigned int *)(param_1 + 0x70) = 1;
  iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x1e8);
  *(unsigned int *)(iVar1 + 0x578) = 0x7fe;
  uVar4 = fn_822C5B18(auStack_40,param_1 + 0xd8);
  fn_823000E0(iVar1,uVar4);
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x234) = 0;
  *(unsigned int *)(*(int *)(param_1 + 0xc) + 0x220) = 1;
  return;
}

