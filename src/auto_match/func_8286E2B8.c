void fn_8286E2B8(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0x2c);
  *(unsigned char *)(param_1 + 0x2a) = 1;
  *(unsigned char *)(param_1 + 0x2b) = 0;
  RtlLeaveCriticalSection(param_1 + 0x2c);
  return;
}

