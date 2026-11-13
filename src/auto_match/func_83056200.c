extern int fn_82A1E7D8();


void fn_83056200(int param_1)

{
  unsigned int uVar1;
  
  RtlEnterCriticalSection(param_1 + 0x10);
  uVar1 = *(int *)(param_1 + 0x48) + 1;
  *(unsigned int *)(param_1 + 0x48) = uVar1;
  if (uVar1 >= *(unsigned int *)(param_1 + 8)) {
    fn_82A1E7D8(*(unsigned int *)(param_1 + 0x30));
  }
  RtlLeaveCriticalSection(param_1 + 0x10);
  return;
}

