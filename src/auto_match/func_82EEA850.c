extern int fn_82A1E7D8();
extern int fn_82A2A700();
extern int fn_82EEA6E8();
extern unsigned int uStack_2c;
extern unsigned int uStack_30;


unsigned __int64 fn_82EEA850(int param_1,unsigned int *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_30;

  
  stack_pair_30.second = *(unsigned int *)(param_1 + 0x40);
  uVar2 = 0;
  stack_pair_30.first = *(unsigned int *)(param_1 + 0x70);
  *param_2 = 0;
  iVar1 = fn_82A2A700(2,&stack_pair_30.first,0,0xffffffffffffffff);
  if (iVar1 == 0) {
    RtlEnterCriticalSection(param_1 + 0x54);
    if (*(int *)(param_1 + 0x50) != 0) {
      fn_82EEA6E8(*(int *)(param_1 + 0x50),param_2);
    }
    if ((*(int *)(*(int *)(param_1 + 0x50) + 100) == 0) &&
       (iVar1 = fn_82A1E7D8(*(unsigned int *)(param_1 + 0x70)), iVar1 == 0)) {
      uVar2 = thunk_FUN_82a2b798();
      if (0 < (int)uVar2) {
        uVar2 = uVar2 & 0xffff | 0x80070000;
      }
      if (-1 < (int)uVar2) {
        uVar2 = 0xffffffff8000ffff;
      }
    }
    RtlLeaveCriticalSection(param_1 + 0x54);
  }
  else if (iVar1 != 1) {
    uVar2 = thunk_FUN_82a2b798();
    if (0 < (int)uVar2) {
      uVar2 = uVar2 & 0xffff | 0x80070000;
    }
    if (-1 < (int)uVar2) {
      uVar2 = 0xffffffff8000ffff;
    }
  }
  return uVar2;
}

