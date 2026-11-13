extern int fn_828AFE88();


void fn_828AFFE8(int param_1)

{
  __int64 lVar1;
  __int64 lVar2;
  __int64 lVar3;
  
  lVar1 = fn_828AFE88();
  lVar2 = *(__int64 *)(param_1 + 0x28);
  if (lVar2 != 0) {
    lVar3 = *(__int64 *)(param_1 + 0x30);
    *(__int64 *)(param_1 + 0x30) = lVar1;
    lVar3 = (lVar1 - lVar3) / 2;
    if (lVar3 != 0) {
      if (lVar2 < 1) {
        if (-lVar2 < lVar3) {
          lVar3 = -lVar2;
        }
        *(__int64 *)(param_1 + 0x28) = lVar2 + lVar3;
        *(__int64 *)(param_1 + 0x20) = *(__int64 *)(param_1 + 0x20) - lVar3;
      }
      else {
        if (lVar2 < lVar3) {
          lVar3 = lVar2;
        }
        *(__int64 *)(param_1 + 0x28) = lVar2 - lVar3;
        *(__int64 *)(param_1 + 0x20) = lVar3 + *(__int64 *)(param_1 + 0x20);
      }
    }
  }
  *(__int64 *)(param_1 + 0x38) = *(__int64 *)(param_1 + 0x20) + lVar1;
  return;
}

