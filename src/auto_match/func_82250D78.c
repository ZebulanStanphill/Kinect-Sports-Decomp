extern unsigned int ltcg_pool_0_0f;


void fn_82250D78(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  uVar1 = ltcg_pool_0_0f;
  param_1[10] = ltcg_pool_0_0f;
  param_1[0xc] = uVar1;
  *param_1 = 0xffffffff;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 4) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *(unsigned char *)(param_1 + 8) = 0;
  param_1[9] = 0xffffffff;
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x10) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  param_1[0xb] = 0xffffffff;
  param_1[0x14] = 0;
  for (puVar2 = param_1 + 0x15; puVar2 != param_1 + 0x1c; puVar2 = puVar2 + 1) {
    *puVar2 = 0xffffffff;
  }
  param_1[0x1c] = 0;
  for (puVar2 = param_1 + 0x1d; puVar2 != param_1 + 0x24; puVar2 = puVar2 + 1) {
    *puVar2 = 0xffffffff;
  }
  return;
}

