void fn_82250C58(unsigned int *param_1)

{
  unsigned int *puVar1;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 8) & 0xfffffff0);
  *puVar1 = in_register_000104d0;
  puVar1[1] = in_register_000104d4;
  puVar1[2] = in_register_000104d8;
  puVar1[3] = in_vr77;
  for (puVar1 = param_1 + 2; puVar1 != param_1 + 5; puVar1 = puVar1 + 1) {
    *puVar1 = 0xffffffff;
  }
  param_1[0xc] = 0xffffffff;
  param_1[0xd] = 1;
  param_1[0xe] = 0;
  for (puVar1 = param_1 + 0xf; puVar1 != param_1 + 0x16; puVar1 = puVar1 + 1) {
    *puVar1 = 0xffffffff;
  }
  param_1[0x16] = 0;
  puVar1 = param_1 + 0x17;
  if (puVar1 != param_1 + 0x1e) {
    do {
      *puVar1 = 0xffffffff;
      puVar1 = puVar1 + 1;
    } while (puVar1 != param_1 + 0x1e);
    return;
  }
  return;
}

