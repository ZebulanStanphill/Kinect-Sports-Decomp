extern __int64 fn_82BD62B0();


unsigned __int64 fn_82BD4A58(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = 0;
  RtlEnterCriticalSection(param_1 + 0xf0);
  if (*(unsigned int *)((param_2 + 0x14) * 4 + param_1) != 0) {
    uVar1 = fn_82BD62B0(*(unsigned int *)((param_2 + 0x14) * 4 + param_1));
  }
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return uVar1;
}

