extern int fn_8245B458();


void fn_8245AA30(int param_1)

{
  unsigned int iVar1;
  
  if (*(int *)(param_1 + 0x80068) != 0) {
    iVar1 = fn_8245B458();
    RtlEnterCriticalSection();
    *(unsigned int *)(iVar1 + 0x58c) = 1;
    RtlLeaveCriticalSection(iVar1);
    iVar1 = param_1 + 0x8008c;
    RtlEnterCriticalSection(iVar1);
    *(unsigned int *)(param_1 + 0x800bc) = 1;
    if (iVar1 != 0) {
      RtlLeaveCriticalSection(iVar1);
    }
  }
  return;
}

