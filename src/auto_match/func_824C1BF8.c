void fn_824C1BF8(unsigned char *param_1)

{
  unsigned int *puVar1;
  
  *param_1 = 0;
  param_1[0x100] = 0;
  param_1[0x200] = 0;
  param_1[0x300] = 0;
  for (puVar1 = (unsigned int *)(param_1 + 0x400); puVar1 != (unsigned int *)(param_1 + 0x40c);
      puVar1 = puVar1 + 1) {
    *puVar1 = 0;
  }
  *(unsigned int *)(param_1 + 0x40c) = 0;
  *(unsigned int *)(param_1 + 0x420) = 0;
  *(unsigned int *)(param_1 + 0x418) = 10;
  *(unsigned int *)(param_1 + 0x410) = 4;
  *(unsigned int *)(param_1 + 0x414) = 8;
  *(unsigned int *)(param_1 + 0x41c) = 10;
  *(unsigned int *)(param_1 + 0x424) = 0;
  return;
}

