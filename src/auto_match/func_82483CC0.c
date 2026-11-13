char fn_82483CC0(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x5c);
  if (*(int *)(param_1 + 0x60) == 0) {
    uVar1 = -(unsigned int)(*(int *)(param_1 + 0x88) == 0) & uVar1;
  }
  if (uVar1 != 0) {
    if (*(int *)(param_1 + 0x84) != 0) {
      return '\x05';
    }
    return (-(*(int *)(param_1 + 0x60) != 0) & 4U) + 6;
  }
  return '\0';
}

