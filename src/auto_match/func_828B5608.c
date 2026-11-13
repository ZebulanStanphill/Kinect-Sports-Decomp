void fn_828B5608(unsigned short *param_1)

{
  *(unsigned char *)(param_1 + 3) = 0xde;
  *param_1 = 0x8000;
  param_1[1] = 0x8000;
  param_1[2] = 0x8000;
  *(unsigned char *)((int)param_1 + 7) = 0;
  return;
}

