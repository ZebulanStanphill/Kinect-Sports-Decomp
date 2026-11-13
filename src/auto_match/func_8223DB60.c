extern int fn_8265CA20();


void fn_8223DB60(int param_1)

{
  if ((*(unsigned int *)(param_1 + 0x40) & 1) != 0) {
    fn_8265CA20(**(unsigned int **)(param_1 + 0x10));
  }
  **(unsigned int **)(param_1 + 0x10) = 0;
  **(unsigned int **)(param_1 + 0x20) = 0;
  **(unsigned int **)(param_1 + 0x30) = 0;
  **(unsigned int **)(param_1 + 0x14) = 0;
  **(unsigned int **)(param_1 + 0x24) = 0;
  **(unsigned int **)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x3c) = 0;
  *(unsigned int *)(param_1 + 0x40) = *(unsigned int *)(param_1 + 0x40) & 0xfffffffe;
  return;
}

