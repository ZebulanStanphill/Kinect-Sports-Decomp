void fn_82638100(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x29b8) = (param_2 & 1) << 10 | *(unsigned int *)(param_1 + 0x29b8) & 0xfffffbff;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x2000000000;
  return;
}

