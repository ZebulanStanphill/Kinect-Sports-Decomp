extern int fn_82FF5200();


void fn_82FF5140(__int64 param_1,unsigned int param_2)

{
  unsigned int iVar1;
  
  if ((param_2 & 0xffffffff) != 0) {
    RtlEnterCriticalSection(param_1 + 0x88);
    iVar1 = fn_82FF5200(param_1 + 4,param_2);
    if (iVar1 != 0) {
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
    }
    RtlLeaveCriticalSection(param_1 + 0x88);
  }
  return;
}

