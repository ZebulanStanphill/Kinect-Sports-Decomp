void fn_82D3BB70(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    *(unsigned short *)(param_1 + 0x40) = 0;
    *(unsigned short *)(param_1 + 0x42) = 0;
    *(unsigned int *)(param_1 + 0x44) = 0;
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned int *)(param_1 + 0x20) = 1;
    *(unsigned int *)(param_1 + 0x30) = 0;
    *(unsigned char *)(param_1 + 0x19) = 0xec;
  }
  *(unsigned int *)(param_1 + 0x50) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0x80000000;
  return;
}

