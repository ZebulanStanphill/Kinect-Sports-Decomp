void fn_82DC3940(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x1c) = param_2;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  return;
}

