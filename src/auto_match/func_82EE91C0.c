extern int fn_8306C5D0();


unsigned __int64 fn_82EE91C0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  RtlEnterCriticalSection(param_1 + 0x50);
  if (*(int *)(param_1 + 0x4c) == 0) {
    iVar1 = fn_8306C5D0(param_2,*(unsigned int *)(param_1 + 0x70),0,
                              *(unsigned int *)(param_1 + 0x6c));
    if ((iVar1 == 0) && (uVar2 = thunk_FUN_82a2b798(), 0 < (int)uVar2)) {
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
  }
  else {
    uVar2 = 0xffffffff8000ffff;
  }
  RtlLeaveCriticalSection(param_1 + 0x50);
  return uVar2;
}

