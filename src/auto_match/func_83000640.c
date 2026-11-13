unsigned int fn_83000640(int param_1)

{
  unsigned char uVar1;
  
  if (*(int *)(param_1 + 100) == 0) {
    return 0;
  }
  if (((*(unsigned int *)(param_1 + 0x40) >> 0x14 & 1) != 0) ||
     (uVar1 = 0, (*(unsigned int *)(param_1 + 0x40) >> 0x15 & 1) != 0)) {
    uVar1 = 1;
  }
  *(unsigned char *)(*(int *)(param_1 + 100) + 0x30) = uVar1;
  return 1;
}

