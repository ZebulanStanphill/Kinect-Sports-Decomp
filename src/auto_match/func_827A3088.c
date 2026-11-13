void fn_827A3088(unsigned int *param_1)

{
  unsigned int *puVar1;
  __int64 lVar2;
  
  puVar1 = param_1 + -1;
  lVar2 = 5;
  do {
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 4;
    *(unsigned char *)puVar1 = 0;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(unsigned char *)(param_1 + 0x14) = 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(unsigned char *)(param_1 + 3) = 3;
  *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_1 + 0x14) | 2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(unsigned char *)(param_1 + 7) = 2;
  *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_1 + 0x14) | 4;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *(unsigned char *)(param_1 + 0xb) = 1;
  *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_1 + 0x14) | 8;
  param_1[0xc] = 0xff000000;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0;
  *(unsigned char *)(param_1 + 0xf) = 0x18;
  *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_1 + 0x14) | 0x10;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0xff00;
  *(unsigned char *)(param_1 + 0x13) = 0x21;
  return;
}

