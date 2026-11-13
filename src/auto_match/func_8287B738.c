unsigned __int64 fn_8287B738(int param_1,int *param_2)

{
  if (*(unsigned int *)(param_1 + 0x68) == 0) {
    *param_2 = 0;
    return 0xffffffffa0250000;
  }
  *param_2 = *(int *)(param_1 + 0x68);
  *(unsigned int *)(param_1 + 0x68) = 0;
  return 0x20250000;
}

