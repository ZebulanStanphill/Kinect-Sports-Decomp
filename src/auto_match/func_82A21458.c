void fn_82A21458(unsigned __int64 param_1,unsigned int param_2)

{
  if (param_2 != 0) {
    RtlEnterCriticalSection();
    *(short *)(param_2 + -2) = (short)*(unsigned int *)(param_2 + -4) + 1;
    RtlLeaveCriticalSection(param_1);
  }
  return;
}

