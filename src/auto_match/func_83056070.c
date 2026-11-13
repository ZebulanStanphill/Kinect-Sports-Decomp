extern int fn_82A1E810();


void fn_83056070(int param_1)

{
  int iVar1;
  
  RtlEnterCriticalSection(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(param_1 + 0x3c) = iVar1;
  if (iVar1 == 1) {
    fn_82A1E810(*(unsigned int *)(param_1 + 0x34));
  }
  RtlLeaveCriticalSection(param_1 + 0x10);
  return;
}

