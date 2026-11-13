extern int fn_826DF020();


void fn_826DF2E8(__int64 param_1,unsigned __int64 param_2)

{
  RtlEnterCriticalSection(param_1 + 0xd4);
  fn_826DF020(param_1 + 0x10c,param_2,param_1 + 0x78);
  RtlLeaveCriticalSection(param_1 + 0xd4);
  return;
}

