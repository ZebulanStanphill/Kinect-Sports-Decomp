void fn_82898240(int param_1,unsigned int param_2)

{
  *(int *)(param_1 + 0x30) = param_2;
  if (param_2 == 0) {
    return;
  }
  *(int *)(param_2 + 0x34) = param_1;
  return;
}

