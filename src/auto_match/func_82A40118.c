extern int RtlLeaveCriticalSection();


void fn_82A40118(__int64 param_1)

{
  RtlLeaveCriticalSection(param_1 + 4);
  return;
}
