void fn_82CF6F38(int param_1,unsigned int param_2,unsigned int param_3)

{
  if (param_2 != 0) {
    *(int *)(param_1 + 4) = param_2;
    *(unsigned int *)(param_1 + 8) = param_3;
    return;
  }
  *(unsigned int *)(param_1 + 4) = 0;
  return;
}

