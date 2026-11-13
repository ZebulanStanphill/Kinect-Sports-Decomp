extern int fn_83061A90();


void fn_83061F30(int param_1)

{
  unsigned int *puVar1;
  
  fn_83061A90();
  for (puVar1 = *(unsigned int **)(param_1 + 0x14); puVar1 != (unsigned int *)0x0;
      puVar1 = (unsigned int *)puVar1[2]) {
    puVar1[3] = 0;
    *puVar1 = 0;
  }
  return;
}

