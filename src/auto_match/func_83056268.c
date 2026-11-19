extern int SetEvent();


void fn_83056268(int param_1)

{
  unsigned int iVar1;
  
  RtlEnterCriticalSection(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x48) + -1;
  *(int *)(param_1 + 0x48) = iVar1;
  if (iVar1 == *(int *)(param_1 + 8) + -1) {
    SetEvent(*(unsigned int *)(param_1 + 0x30));
  }
  RtlLeaveCriticalSection(param_1 + 0x10);
  return;
}

