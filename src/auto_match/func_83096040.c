extern int RtlLeaveCriticalSection();


void fn_83096040(int param_1)

{
  RtlLeaveCriticalSection(*(unsigned int *)(param_1 + 0x10));
  return;
}
