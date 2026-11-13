void fn_82250D10(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = 0;
  puVar1 = param_1;
  while (puVar1 = puVar1 + 1, puVar1 != param_1 + 8) {
    *puVar1 = 0xffffffff;
  }
  param_1[8] = 0;
  for (puVar1 = param_1 + 9; puVar1 != param_1 + 0x10; puVar1 = puVar1 + 1) {
    *puVar1 = 0xffffffff;
  }
  param_1[0x10] = 0xffffffff;
  param_1[0x11] = 0xffffffff;
  param_1[0x12] = 0xffffffff;
  return;
}

