extern int fn_82A1F2F8();


unsigned __int64 fn_82EE80A8(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  
  if (*(int (***)())(param_1 + 0x30) == (int (**)())0x0) {
    uVar2 = fn_82A1F2F8();
    if (((uVar2 < *(unsigned int *)(param_1 + 0x24)) && ((int)*(unsigned int *)(param_1 + 0x24) < 0)) &&
       (0 < (int)uVar2)) {
      RtlEnterCriticalSection(param_1);
      if (*(int *)(param_1 + 0x24) < 0) {
        *(unsigned int *)(param_1 + 0x24) = uVar2;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      RtlLeaveCriticalSection(param_1);
    }
    *(unsigned int *)(param_1 + 0x24) = uVar2;
  }
  else {
    uVar1 = (**(int (***)())(param_1 + 0x30))();
    *(unsigned __int64 *)(param_1 + 0x20) = uVar1;
  }
  return *(unsigned __int64 *)(param_1 + 0x20);
}

