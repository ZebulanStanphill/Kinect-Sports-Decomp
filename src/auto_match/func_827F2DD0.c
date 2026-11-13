extern int fn_827F2C38();


void fn_827F2DD0(int param_1)

{
  unsigned int uVar1;
  
  fn_827F2C38();
  uVar1 = (unsigned int)(*(unsigned char *)(param_1 + 0x53) >> 3);
  *(unsigned char *)(uVar1 + param_1 + 0x51) =
       *(unsigned char *)(uVar1 + param_1 + 0x51) & ~(unsigned char)(1 << (*(unsigned char *)(param_1 + 0x53) & 7));
  uVar1 = (unsigned int)(*(unsigned char *)(param_1 + 0x53) >> 3);
  *(unsigned char *)(uVar1 + param_1 + 0x52) =
       *(unsigned char *)(uVar1 + param_1 + 0x52) & ~(unsigned char)(1 << (*(unsigned char *)(param_1 + 0x53) & 7));
  return;
}

