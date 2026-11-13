void fn_827554A8(int param_1,int param_2)

{
  unsigned char uVar1;
  
  *(unsigned char *)(param_1 + 8) = *(unsigned char *)(param_2 + 8);
  uVar1 = *(unsigned char *)(param_2 + 9);
  *(unsigned char *)(param_1 + 7) = 0x80;
  *(unsigned char *)(param_1 + 9) = uVar1;
  *(unsigned char *)(param_1 + 10) = *(unsigned char *)(param_2 + 10);
  if ((*(unsigned char *)(param_2 + 0xb) & 1) != 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0x13) = *(unsigned char *)(param_2 + 0xb) & 0xfe;
  *(unsigned char *)(param_1 + 0x14) = *(unsigned char *)(param_2 + 0xc);
  *(unsigned char *)(param_1 + 0x15) = *(unsigned char *)(param_2 + 0xd);
  *(unsigned char *)(param_1 + 0x16) = *(unsigned char *)(param_2 + 0xe);
  *(unsigned int *)(param_1 + 0x18) = *(unsigned int *)(param_2 + 0x18);
  *(unsigned short *)(param_1 + 0x1c) = *(unsigned short *)(param_2 + 0x14);
  *(unsigned short *)(param_1 + 0x1e) = *(unsigned short *)(param_2 + 0x16);
  return;
}

