extern int fn_82BD6990();


unsigned __int64 fn_82BD4A10(int param_1,int param_2)

{
  RtlEnterCriticalSection(param_1 + 0xf0);
  fn_82BD6990(*(unsigned int *)((param_2 + 0x14) * 4 + param_1));
  RtlLeaveCriticalSection(param_1 + 0xf0);
  return 0;
}

