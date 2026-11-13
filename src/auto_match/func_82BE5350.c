unsigned int fn_82BE5350(int param_1)

{
  unsigned int uVar1;
  
  if (*(unsigned int **)(param_1 + 8) == (unsigned int *)0x0) {
    return 0;
  }
  uVar1 = **(unsigned int **)(param_1 + 8);
  *(unsigned int *)(param_1 + 8) = uVar1;
  return uVar1;
}

