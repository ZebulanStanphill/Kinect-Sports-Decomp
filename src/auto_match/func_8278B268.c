void fn_8278B268(int param_1,unsigned int param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 8);
  if (puVar1 == (unsigned int *)0x0) {
    return;
  }
  if (param_2 >= *puVar1) {
    return;
  }
  puVar1[param_2 + 1] = param_3;
  return;
}

