void _RtlCheckStack(int param_1)

{
  __int64 lVar1;
  
  lVar1 = (__int64)(param_1 + 0xfff >> 0xc);
  if (0 < lVar1) {
    do {
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
    return;
  }
  return;
}

