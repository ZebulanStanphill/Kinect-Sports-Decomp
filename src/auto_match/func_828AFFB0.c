void fn_828AFFB0(int param_1,unsigned char param_2)

{
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  *(unsigned __int64 *)(param_1 + 0x20) = 0;
  *(unsigned __int64 *)(param_1 + 0x28) = 0;
  *(unsigned __int64 *)(param_1 + 0x30) = 0;
  *(unsigned char *)(param_1 + 0x18) = 0;
  *(unsigned __int64 *)(param_1 + 0x38) = 0;
  if (param_2 == '\0') {
    return;
  }
  *(unsigned char *)(param_1 + 0x18) = 1;
  return;
}

