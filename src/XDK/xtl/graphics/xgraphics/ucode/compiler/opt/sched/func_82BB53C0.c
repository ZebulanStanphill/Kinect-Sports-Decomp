unsigned int  fn_82BB53C0(int param_1)

{
  unsigned int uVar1;
  
  uVar1 = 0;
  if (*(unsigned int *)(param_1 + 4) != 0) {
    do {
      if ((*(unsigned int *)(((int)((uVar1 & 0xffffffff) >> 5) + 2) * 4 + param_1) >> ((unsigned int)uVar1 & 0x1f) &
          1) == 0) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((uVar1 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 4));
  }
  return 0xffffffffffffffff;
}

