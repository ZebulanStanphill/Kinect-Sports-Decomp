void fn_827F5978(int param_1,int param_2)

{
  *(unsigned short *)(param_1 + 0x20) = *(unsigned short *)(param_2 + 0x20);
  *(unsigned short *)(param_1 + 0x22) = *(unsigned short *)(param_2 + 0x22);
  *(unsigned int *)(param_1 + 0x24) = *(unsigned int *)(param_2 + 0x24);
  *(unsigned int *)(param_1 + 0x28) = *(unsigned int *)(param_2 + 0x28);
  *(unsigned int *)(param_1 + 0x2c) = *(unsigned int *)(param_2 + 0x2c);
  *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_2 + 0x30);
  *(unsigned char *)(param_1 + 0xdc) = *(unsigned char *)(param_2 + 0xdc) & 0x20 | *(unsigned char *)(param_1 + 0xdc) & 0xdf;
  return;
}

