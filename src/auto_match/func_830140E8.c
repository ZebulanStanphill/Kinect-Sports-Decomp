extern int fn_830141C8();


unsigned __int64 fn_830140E8(__int64 param_1,unsigned __int64 param_2)

{
  RtlEnterCriticalSection(param_1 + 0x10);
  fn_830141C8(param_1 + 4,param_2);
  RtlLeaveCriticalSection(param_1 + 0x10);
  return 1;
}

