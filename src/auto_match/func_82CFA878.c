unsigned __int64 fn_82CFA878(int param_1,unsigned __int64 param_2)

{
  *(int *)(param_1 + 0x20) = (int)param_2;
  *(unsigned int *)(param_1 + 0x1c) = *(unsigned int *)(param_1 + 0x10);
  return ((~(param_2 ^ *(unsigned int *)(param_1 + 0x18)) & 0xffffffff) >> 0x1f) +
         (unsigned __int64)(param_2 <= *(unsigned int *)(param_1 + 0x18)) & 1;
}

