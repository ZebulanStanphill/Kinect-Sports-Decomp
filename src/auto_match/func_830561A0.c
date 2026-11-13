extern int fn_82A1E7D8();


void fn_830561A0(int param_1)

{
  int lVar1;
  
  RtlEnterCriticalSection(param_1 + 0x10);
  lVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x40) - 1;
  *(int *)(param_1 + 0x40) = (int)lVar1;
  if (lVar1 == 0) {
    fn_82A1E7D8(*(unsigned int *)(param_1 + 0x38));
  }
  RtlLeaveCriticalSection(param_1 + 0x10);
  return;
}

