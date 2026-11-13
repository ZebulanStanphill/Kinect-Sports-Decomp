void fn_826EF2B8(int param_1)

{
  char *pcVar1;
  unsigned int uVar2;
  
  if (*(char *)(param_1 + 8) != '\0') {
    return;
  }
  if ((*(unsigned char *)(param_1 + 0xc) & 0x40) == 0) {
    if ((*(unsigned char *)(param_1 + 0xc) & 0x80) == 0) {
      uVar2 = 5;
      pcVar1 = "false";
    }
    else {
      uVar2 = 4;
      pcVar1 = "true";
    }
    *(char **)(param_1 + 0x10) = pcVar1;
    *(unsigned int *)(param_1 + 0x14) = uVar2;
  }
  *(unsigned char *)(param_1 + 8) = 1;
  return;
}

