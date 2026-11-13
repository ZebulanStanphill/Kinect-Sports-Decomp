extern int fn_830141C8();


void fn_82FA80E8(__int64 param_1,unsigned __int64 param_2)

{
  RtlEnterCriticalSection(param_1 + 0xc);
  fn_830141C8(param_1,param_2);
  RtlLeaveCriticalSection(param_1 + 0xc);
  return;
}

