__int64 fn_82AE51F8(__int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (param_2 & 0xffffffff) >> 6;
  uVar1 = -1L << (param_2 & 0x3f);
  if (uVar2 < 4) {
    param_1 = uVar2 * 8 + param_1;
    do {
      uVar1 = uVar1 & ~*(unsigned __int64 *)param_1;
      if (uVar1 != 0) {
        return ((uVar2 & 0x3ffffff) * 0x40 - LZCOUNT(uVar1 & ~(uVar1 - 1))) + 0x3f;
      }
      uVar2 = uVar2 + 1;
      uVar1 = 0xffffffffffffffff;
      param_1 = param_1 + 8;
    } while ((uVar2 & 0xffffffff) < 4);
  }
  return -1;
}

