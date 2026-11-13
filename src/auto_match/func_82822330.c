void fn_82822330(int param_1,int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = *(unsigned int **)(param_1 + 4);
  *(int **)(param_1 + 4) = param_2;
  *param_2 = param_1;
  param_2[1] = (int)puVar1;
  if (puVar1 == (unsigned int *)0x0) {
    return;
  }
  *puVar1 = param_2;
  return;
}

