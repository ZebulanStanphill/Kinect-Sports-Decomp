extern int fn_828648F0();


int fn_8286E250(int param_1,unsigned __int64 param_2,unsigned char param_3)

{
  fn_828648F0();
  *(unsigned char *)(param_1 + 0x28) = param_3;
  *(unsigned char *)(param_1 + 0x29) = 0;
  *(unsigned int *)(param_1 + 0x24) = 1;
  *(unsigned char *)(param_1 + 0x2a) = 0;
  *(unsigned char *)(param_1 + 0x2b) = 0;
  RtlInitializeCriticalSection(param_1 + 0x2c);
  return param_1;
}

