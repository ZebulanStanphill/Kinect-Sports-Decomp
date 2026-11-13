void fn_82DB0990(int param_1,int param_2)

{
  *(int *)(param_1 + 0x30) = param_2;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x38) * 0x10 + param_2;
  return;
}

