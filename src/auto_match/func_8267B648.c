int fn_8267B648(int param_1,unsigned int param_2)

{
  int iVar1;
  
  iVar1 = param_1 + 0x2c4;
  RtlEnterCriticalSection(iVar1);
  if (param_2 != 0) {
    param_1 = *(int *)(*(int *)(param_1 + 0x2e0) + param_2 * 4 + -4);
  }
  RtlLeaveCriticalSection(iVar1);
  return param_1;
}

