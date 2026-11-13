void fn_82490FC8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 0x1c);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0x1c) = 0;
  }
  return;
}

