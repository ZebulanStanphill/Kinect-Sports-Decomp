extern unsigned int iStack00000014;


unsigned __int64 fn_82A40070(int param_1)

{
  int iStack00000014;
  
  iStack00000014 = param_1;
  RtlInitializeCriticalSection(param_1 + 4);
  *(unsigned int *)(param_1 + 0x20) = 1;
  return 0;
}

