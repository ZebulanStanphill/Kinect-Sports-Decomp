extern int RtlLeaveCriticalSection();


void fn_82BEA230(__int64 param_1)

{
  RtlLeaveCriticalSection(param_1 + 0x14);
  return;
}
