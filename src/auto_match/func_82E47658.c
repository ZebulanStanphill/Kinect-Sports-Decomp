extern int fn_82E47028();


unsigned __int64 fn_82E47658(__int64 param_1)

{
  RtlEnterCriticalSection(param_1 + 4);
  fn_82E47028(param_1);
  RtlLeaveCriticalSection(param_1 + 4);
  return 0;
}

