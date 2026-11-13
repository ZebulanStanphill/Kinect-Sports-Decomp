extern int fn_82E27CF8();


unsigned __int64 fn_82E2AAF8(__int64 param_1)

{
  RtlEnterCriticalSection(param_1 + 8);
  fn_82E27CF8(param_1);
  RtlLeaveCriticalSection(param_1 + 8);
  return 0;
}

