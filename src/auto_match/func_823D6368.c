extern unsigned int ltcg_pool_0_0f;


void fn_823D6368(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  int iVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *(unsigned int *)(param_1 + 0x20) = 0;
  iVar2 = param_1;
  if (param_1 != param_1 + 0x20) {
    do {
      puVar1 = (unsigned int *)(in_r0 + iVar2 & 0xfffffff0);
      *puVar1 = in_register_000104d0;
      puVar1[1] = in_register_000104d4;
      puVar1[2] = in_register_000104d8;
      puVar1[3] = in_vr77;
      iVar2 = iVar2 + 0x10;
    } while (iVar2 != param_1 + 0x20);
  }
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x38) = ltcg_pool_0_0f;
  return;
}

