void fn_8286E310(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0x2c);
  *(unsigned char *)(param_1 + 0x2a) = 0;
  *(unsigned char *)(param_1 + 0x2b) = 1;
  RtlLeaveCriticalSection(param_1 + 0x2c);
  return;
}

