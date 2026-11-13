void fn_826EA7E8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x20);
  if (puVar1 == (unsigned int *)0x0) {
    return;
  }
  puVar1[1] = 0;
  *puVar1 = 0;
  return;
}

