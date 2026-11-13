extern int fn_82A1E810();


void fn_83056130(int param_1)

{
  int iVar1;
  
  RtlEnterCriticalSection(param_1 + 0x10);
  iVar1 = *(int *)(param_1 + 0x40) + 1;
  *(int *)(param_1 + 0x40) = iVar1;
  if ((iVar1 == 1) && (*(char *)(param_1 + 0x44) == '\0')) {
    fn_82A1E810(*(unsigned int *)(param_1 + 0x38));
  }
  RtlLeaveCriticalSection(param_1 + 0x10);
  return;
}

