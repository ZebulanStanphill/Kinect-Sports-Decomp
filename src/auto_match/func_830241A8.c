void fn_830241A8(int param_1,unsigned int param_2,unsigned int param_3)

{
  if ((param_3 & 1) != 0) {
    *(unsigned char *)(param_1 + 0x2c) =
         (unsigned char)(param_2 << 7) | *(unsigned char *)(param_1 + 0x2c) & 0x7f;
  }
  if ((param_3 & 2) != 0) {
    *(unsigned char *)(param_1 + 0x40) =
         (unsigned char)(param_2 << 6) & 0x80 | *(unsigned char *)(param_1 + 0x40) & 0x7f;
  }
  if ((param_3 & 4) != 0) {
    *(unsigned char *)(param_1 + 0x54) =
         (unsigned char)(param_2 << 5) & 0x80 | *(unsigned char *)(param_1 + 0x54) & 0x7f;
  }
  if ((param_3 & 8) != 0) {
    *(unsigned char *)(param_1 + 0x68) =
         (unsigned char)(param_2 << 4) & 0x80 | *(unsigned char *)(param_1 + 0x68) & 0x7f;
  }
  if ((param_3 & 0x10) == 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0x6c) =
       (unsigned char)(param_2 << 3) & 0x80 | *(unsigned char *)(param_1 + 0x6c) & 0x7f;
  return;
}

