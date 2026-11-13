void fn_82DA3048(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x127);
  *(char *)(param_1 + 0x127) = cVar1 + '\x01';
  if ((cVar1 - 3U & 7) == 0) {
    *(unsigned char *)(param_1 + 0x125) = *(unsigned char *)(param_1 + 0x125) ^ 1;
  }
  if ((*(unsigned char *)(param_1 + 0x127) & 7) == 0) {
    *(unsigned char *)(param_1 + 0x125) = *(unsigned char *)(param_1 + 0x125) ^ 2;
  }
  if ((*(unsigned char *)(param_1 + 0x127) & 0xf) != 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0x127) = *(unsigned char *)(param_1 + 0x127) & 0xf;
  *(char *)(param_1 + 0x126) = '\x01' - *(char *)(param_1 + 0x126);
  return;
}

