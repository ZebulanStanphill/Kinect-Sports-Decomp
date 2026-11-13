extern int fn_82D14080();


void fn_82D0CFD0(int param_1)

{
  unsigned int *puVar1;
  
  fn_82D14080(*(unsigned int *)(param_1 + 8),0);
  puVar1 = *(unsigned int **)(param_1 + 0x10);
  if (puVar1 != (unsigned int *)0x0) {
    (*(int (**)())*puVar1)(puVar1,1);
    *(unsigned int *)(param_1 + 0x10) = 0;
    return;
  }
  *(unsigned int *)(param_1 + 0x10) = 0;
  return;
}

