void fn_82A4AE20(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0x24);
  KeSetEvent(*(unsigned int *)(param_1 + 0x20),1,0);
  RtlLeaveCriticalSection(param_1 + 0x24);
  return;
}

