unsigned __int64 fn_82850EF8(int param_1)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  if (*(int *)(param_1 + 0x178) != 0) {
    uVar1 = (unsigned __int64)**(unsigned int **)(param_1 + 0x17c) - 1;
    if (-1 < (__int64)uVar1) {
      lVar2 = (uVar1 & 0xfffffff) << 4;
      do {
        if (*(int *)((int)lVar2 + (*(unsigned int **)(param_1 + 0x17c))[1] + 8) != 0) {
          return uVar1;
        }
        uVar1 = uVar1 - 1;
        lVar2 = lVar2 + -0x10;
      } while (-1 < (__int64)uVar1);
    }
  }
  return 0xffffffffffffffff;
}

