unsigned int fn_827E3AA8(int param_1)

{
  unsigned int uVar1;
  
  if (*(int *)(param_1 + 0x68) - *(int *)(param_1 + 100) >> 2 == 0) {
    return 0;
  }
  uVar1 = *(unsigned int *)(*(int *)(param_1 + 0x68) + -4);
  if (*(int *)(param_1 + 100) == *(int *)(param_1 + 0x68)) {
    return uVar1;
  }
  *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + -4;
  return uVar1;
}

