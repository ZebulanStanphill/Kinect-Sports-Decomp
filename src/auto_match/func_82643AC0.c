void fn_82643AC0(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    **(int **)(param_1 + 4) =
         ((*(unsigned int *)(param_1 + 0xc) >> 0x14) + 0x200 & 0x1000) +
         (*(unsigned int *)(param_1 + 0xc) & 0x1fffffff) + -0x40000000;
    **(unsigned int **)(param_1 + 0xc) = 0xc0000000;
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}

