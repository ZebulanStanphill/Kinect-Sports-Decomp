unsigned int fn_826D7038(int param_1)

{
  unsigned int uVar1;
  
  RtlEnterCriticalSection(param_1 + 0xd4);
  uVar1 = *(unsigned int *)(param_1 + 0x100);
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return uVar1;
}

