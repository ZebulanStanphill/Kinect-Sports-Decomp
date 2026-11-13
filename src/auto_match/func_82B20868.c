unsigned __int64 fn_82B20868(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  if ((uVar1 & 1) == 0) {
    if ((uVar1 != 0) && (*(unsigned int *)(uVar1 + 8) < 2)) {
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4);
      if (((uVar1 & 1) == 0) && (uVar1 != 0)) {
        return 0;
      }
      return 1;
    }
  }
  return 0;
}

