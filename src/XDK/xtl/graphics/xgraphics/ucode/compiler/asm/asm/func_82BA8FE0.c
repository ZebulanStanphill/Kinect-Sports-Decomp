void fn_82BA8FE0(unsigned __int64 param_1,int param_2)

{
  *(unsigned int *)(param_2 + 0x10) = *(unsigned int *)(param_2 + 0x1c);
  *(unsigned int *)(param_2 + 0x3c) = *(unsigned int *)(param_2 + 0x28);
  if (*(char *)(param_2 + 0x30) == '\0') {
    return;
  }
  *(unsigned char *)(param_2 + 0x30) = 0;
  *(unsigned int *)(param_2 + 0x38) = *(unsigned int *)(param_2 + 0x2c);
  *(unsigned int *)(param_2 + 0x18) = *(unsigned int *)(param_2 + 0x20);
  *(unsigned int *)(param_2 + 0xc) = *(unsigned int *)(param_2 + 0x24);
  return;
}

