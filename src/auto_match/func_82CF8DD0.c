void fn_82CF8DD0(int param_1,unsigned int param_2)

{
  RtlEnterCriticalSection(param_1 + 4);
  *(unsigned int *)(param_1 + 0x8fc) = param_2;
  RtlLeaveCriticalSection(param_1 + 4);
  return;
}

