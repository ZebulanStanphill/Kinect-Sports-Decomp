void fn_82837DC0(int param_1,int param_2,unsigned int param_3)

{
  if (*(unsigned int *)(param_1 + 0x1c) == 6) {
    return;
  }
  if (*(unsigned int *)(param_1 + 0x1c) != 4) {
    *(unsigned int *)(param_1 + 0x34) = param_3;
    return;
  }
  *(unsigned int *)(*(unsigned int *)(param_1 + 0x34) + param_2 * 4) = param_3;
  return;
}

