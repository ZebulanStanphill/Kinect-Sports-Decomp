unsigned __int64 fn_827DEE98(int param_1)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(param_1 + 400);
  if ((*(unsigned int *)(param_1 + 8) != 0) || (uVar1 = 1, *(unsigned int *)(param_1 + 0x80) != 0)) {
    uVar1 = 0;
  }
  RtlLeaveCriticalSection(param_1 + 400);
  return uVar1;
}

