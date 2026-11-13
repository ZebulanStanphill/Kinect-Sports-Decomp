#define true 1


int fn_82FAB9C0(int param_1,unsigned int param_2)

{
  unsigned int iVar1;
  
  RtlEnterCriticalSection();
  iVar1 = *(int *)((param_2 % 0xc1 + 7) * 4 + param_1);
  while( true ) {
    if (iVar1 == 0) {
      RtlLeaveCriticalSection(param_1);
      return 0;
    }
    if (*(unsigned int *)(iVar1 + 0xc) == param_2) break;
    iVar1 = *(int *)(iVar1 + 8);
  }
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  RtlLeaveCriticalSection(param_1);
  return iVar1;
}

