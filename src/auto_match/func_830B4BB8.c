void fn_830B4BB8(int param_1)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 8) = 0;
  }
  return;
}

