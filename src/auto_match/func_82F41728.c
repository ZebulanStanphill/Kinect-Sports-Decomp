void fn_82F41728(int param_1,unsigned int param_2,unsigned int param_3)

{
  *(unsigned int *)(param_1 + 0x60) = param_2;
  *(unsigned int *)(param_1 + 100) = param_3;
  *(unsigned int *)(param_1 + 0x5c) = 1;
  return;
}

