void fn_82639150(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x29cc) = param_2;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x100000000;
  return;
}

