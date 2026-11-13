void fn_82377030(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x28) < **(int **)(param_1 + 4)) {
    return;
  }
  *(unsigned int *)(*(int *)(param_2 + 0x14) + 0x1d0) = 1;
  return;
}

