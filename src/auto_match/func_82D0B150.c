void fn_82D0B150(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x10);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0x10) = 0;
    return;
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}

