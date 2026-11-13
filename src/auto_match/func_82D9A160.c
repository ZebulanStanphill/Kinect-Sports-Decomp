void fn_82D9A160(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0x90) - 1;
  if ((__int64)uVar2 < 0) {
    return;
  }
  lVar1 = (uVar2 & 0x3fffffff) << 2;
  do {
    if (*(int *)(*(int *)(param_1 + 0x8c) + (int)lVar1) == 0) {
      lVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x90) - 1;
      lVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x8c) + lVar1;
      *(int *)(param_1 + 0x90) = (int)lVar3;
      lVar3 = (lVar3 - uVar2 & 0x3fffffff) * 4;
      if (0 < (int)lVar3) {
        lVar3 = ((lVar3 - 1U & 0xffffffff) >> 2) + 1;
        do {
          *(unsigned int *)lVar4 = ((unsigned int *)lVar4)[1];
          lVar4 = lVar4 + 4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
    }
    uVar2 = uVar2 - 1;
    lVar1 = lVar1 + -4;
  } while (-1 < (__int64)uVar2);
  return;
}

