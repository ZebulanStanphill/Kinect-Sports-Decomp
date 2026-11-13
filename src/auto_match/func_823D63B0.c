extern unsigned int ltcg_pool_0_0f;


void fn_823D63B0(int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  int in_r0;
  int iVar3;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  uVar2 = ltcg_pool_0_0f;
  *(unsigned int *)(param_1 + 0x28) = 2;
  *(unsigned int *)(param_1 + 0x24) = uVar2;
  iVar3 = param_1;
  if (param_1 == param_1 + 0x20) {
    return;
  }
  do {
    puVar1 = (unsigned int *)(in_r0 + iVar3 & 0xfffffff0);
    *puVar1 = in_register_000104d0;
    puVar1[1] = in_register_000104d4;
    puVar1[2] = in_register_000104d8;
    puVar1[3] = in_vr77;
    iVar3 = iVar3 + 0x10;
  } while (iVar3 != param_1 + 0x20);
  return;
}

