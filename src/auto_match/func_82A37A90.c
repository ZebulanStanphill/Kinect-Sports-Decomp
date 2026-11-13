int fn_82A37A90(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  int uVar1;
  
  if (param_4 != 0) {
    uVar1 = NtCreateEvent(param_1 + 0xb,0,0,1);
    if ((int)uVar1 < 0) {
      param_1[0xb] = 0;
      return uVar1;
    }
    param_1[1] = param_3;
    param_1[2] = param_3;
    param_1[3] = param_4;
    RtlInitializeCriticalSection(param_1 + 4);
  }
  *param_1 = param_2;
  return 0;
}

