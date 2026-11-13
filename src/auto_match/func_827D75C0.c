extern int fn_827E0658();


unsigned int fn_827D75C0(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int aiStack_30;
  
  RtlEnterCriticalSection(param_1 + 0x3c8);
  fn_827E0658(&aiStack_30,param_1 + 0x350,param_2);
  if (aiStack_30 != *(int *)(param_1 + 0x354)) {
    uVar1 = *(unsigned int *)(aiStack_30 + 0xc);
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x400);
  }
  RtlLeaveCriticalSection(param_1 + 0x3c8);
  return uVar1;
}

