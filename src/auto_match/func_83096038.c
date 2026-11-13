extern int RtlEnterCriticalSection();


void fn_83096038(int param_1)

{
  RtlEnterCriticalSection(*(unsigned int *)(param_1 + 0x10));
  return;
}
