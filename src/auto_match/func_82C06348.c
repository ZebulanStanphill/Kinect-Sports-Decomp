int fn_82C06348(int param_1)

{
  *(int *)(param_1 + 4) = param_1;
  *(int *)(param_1 + 8) = param_1;
  *(unsigned int *)(param_1 + 0xc) = 1;
  RtlInitializeCriticalSection(param_1 + 0x10);
  return param_1;
}

