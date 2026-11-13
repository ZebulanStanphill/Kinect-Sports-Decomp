void fn_82BE8B10(int param_1,int param_2)

{
  if (param_2 >= 3) {
    return;
  }
  if (*(int *)(param_1 + 0x58) == param_2) {
    return;
  }
  *(int *)(param_1 + 0x58) = param_2;
  return;
}

