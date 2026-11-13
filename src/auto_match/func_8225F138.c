void fn_8225F138(int param_1,unsigned int param_2)

{
  if (param_2 == *(int *)(param_1 + 4)) {
    return;
  }
  **(int **)(param_1 + 8) = param_2;
  return;
}

