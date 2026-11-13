void fn_82FB4140(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x18) = param_2;
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}

