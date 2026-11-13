void fn_828AEBD8(int param_1)

{
  if (*(char *)(param_1 + 0xb1) != '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x88) != 0) {
    return;
  }
  *(unsigned char *)(param_1 + 0xb1) = 1;
  return;
}

