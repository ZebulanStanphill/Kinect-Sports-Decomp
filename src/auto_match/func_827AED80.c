void fn_827AED80(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  
  if ((*(unsigned char *)(param_2 + 3) & 7) != 0) {
    *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_2 + 3) & 7 | *(unsigned char *)(param_1 + 3) & 0xf8;
  }
  if ((*(unsigned char *)(param_2 + 3) & 8) != 0) {
    *param_1 = *param_2;
    *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) | 8;
  }
  if ((*(unsigned char *)(param_2 + 3) & 0x10) != 0) {
    uVar1 = param_2[1];
    *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) | 0x10;
    param_1[1] = uVar1;
  }
  if ((*(unsigned char *)(param_2 + 3) & 0x20) == 0) {
    return;
  }
  uVar1 = param_2[2];
  *(unsigned char *)(param_1 + 3) = *(unsigned char *)(param_1 + 3) | 0x20;
  param_1[2] = uVar1;
  return;
}

