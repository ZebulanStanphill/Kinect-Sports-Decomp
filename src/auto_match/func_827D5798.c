unsigned int fn_827D5798(int param_1)

{
  unsigned int uVar1;
  
  RtlEnterCriticalSection(param_1 + 0x88);
  uVar1 = *(unsigned int *)(param_1 + 8);
  RtlLeaveCriticalSection(param_1 + 0x88);
  return uVar1;
}

