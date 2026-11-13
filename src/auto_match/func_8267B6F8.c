extern __int64 fn_826914D0();


unsigned __int64 fn_8267B6F8(int param_1)

{
  unsigned __int64 uVar1;
  
  RtlEnterCriticalSection(param_1 + 0x48);
  uVar1 = fn_826914D0(*(unsigned int *)(param_1 + 0x68));
  RtlLeaveCriticalSection(param_1 + 0x48);
  return uVar1;
}

