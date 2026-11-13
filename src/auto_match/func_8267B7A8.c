void fn_8267B7A8(int param_1,unsigned int param_2)

{
  RtlEnterCriticalSection(param_1 + 0x48);
  *(unsigned int *)(*(int *)(param_1 + 0x68) + 0x224) = param_2;
  RtlLeaveCriticalSection(param_1 + 0x48);
  return;
}

