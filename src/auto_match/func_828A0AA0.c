void fn_828A0AA0(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(int *)(param_1 + 0x1f8) + 1;
  *(unsigned int *)(param_1 + 0x1f8) = uVar1;
  if (uVar1 < 0x10000) {
    return;
  }
  *(unsigned int *)(param_1 + 0x1f8) = 1;
  return;
}

