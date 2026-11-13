void fn_830B4A30(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 4) = 0;
  }
  return;
}

