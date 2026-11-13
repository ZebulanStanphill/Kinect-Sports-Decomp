void fn_82404B30(unsigned int *param_1,int param_2)

{
  if (*(int *)(param_2 + 0x24) != 0) {
    *param_1 = *param_1 | 0x400;
  }
  param_1[0x19] = param_1[0x19] - 1;
  return;
}

