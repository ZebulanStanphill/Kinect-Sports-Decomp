__int64 fn_829D6C98(int param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  
  RtlEnterCriticalSection();
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  if (uVar1 < 0x100) {
    lVar2 = *(__int64 *)((uVar1 + 5) * 8 + param_1);
    if (lVar2 != 0) {
      *(unsigned int *)(param_1 + 0x20) = uVar1 + 1;
      goto LAB_829d6cc4;
    }
    *(unsigned int *)(param_1 + 0x20) = 0x100;
  }
  lVar2 = 0;
LAB_829d6cc4:
  RtlLeaveCriticalSection(param_1);
  return lVar2;
}

