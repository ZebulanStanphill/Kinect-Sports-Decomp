void fn_82BEB6B8(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x14) = param_2 + *(int *)(param_1 + 0x14);
  *(int *)(param_1 + 0x18) = param_3 + *(int *)(param_1 + 0x18);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
  return;
}

