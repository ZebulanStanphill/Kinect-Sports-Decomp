void fn_82639068(int param_1,unsigned int param_2)

{
  *(unsigned int *)(param_1 + 0x29c0) = *(unsigned int *)(param_1 + 0x29c0) & 0xfffffffe | param_2 & 1;
  *(unsigned __int64 *)(param_1 + 0x20) = *(unsigned __int64 *)(param_1 + 0x20) | 0x800000000;
  return;
}

