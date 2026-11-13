void fn_8260EFC8(int param_1)

{
  int in_r7;
  unsigned int uVar1;
  
  if (in_r7 == 0) {
    uVar1 = 1;
  }
  else {
    if ((in_r7 != 1) && (in_r7 != 3)) {
      return;
    }
    uVar1 = 0;
  }
  *(unsigned int *)(*(int *)(**(int **)(param_1 + 0x60) + 0xb8) + 0x28) = uVar1;
  return;
}

