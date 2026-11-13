void fn_82250BD0(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  *(unsigned char *)(param_1 + 3) = 0;
  param_1[2] = 2;
  param_1[5] = 1;
  param_1[4] = 0xffffffff;
  param_1[7] = 1;
  param_1[6] = 0xffffffff;
  param_1[8] = 0;
  for (puVar1 = param_1 + 9; puVar1 != param_1 + 0x10; puVar1 = puVar1 + 1) {
    *puVar1 = 0xffffffff;
  }
  param_1[0x10] = 0;
  for (puVar1 = param_1 + 0x11; puVar1 != param_1 + 0x18; puVar1 = puVar1 + 1) {
    *puVar1 = 0xffffffff;
  }
  return;
}

