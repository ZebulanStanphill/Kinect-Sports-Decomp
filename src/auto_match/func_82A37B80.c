void fn_82A37B80(int param_1)

{
  RtlEnterCriticalSection(param_1 + 0x10);
  NtWaitForSingleObjectEx(*(unsigned int *)(param_1 + 0x2c),1,0,0);
  return;
}

