extern int fn_827DDE28();


void fn_8260CB58(__int64 param_1,unsigned __int64 param_2)

{
  RtlEnterCriticalSection(param_1 + 0x1a0);
  fn_827DDE28(param_1 + 200,param_2);
  RtlLeaveCriticalSection(param_1 + 0x1a0);
  return;
}

