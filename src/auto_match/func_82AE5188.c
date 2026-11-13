__int64 fn_82AE5188(__int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (param_2 & 0xffffffff) >> 6;
  uVar1 = (2L << (param_2 & 0x3f)) - 1;
  param_1 = uVar2 * 8 + param_1;
  do {
    uVar1 = uVar1 & ~*(unsigned __int64 *)param_1;
    if (uVar1 != 0) {
      uVar1 = 0x3f - LZCOUNT(uVar1);
      *param_3 = (unsigned int)(*(unsigned __int64 *)param_1 >> (uVar1 & 0x7c)) & 0xf;
      return (uVar2 & 0x3ffffff) * 0x40 + uVar1;
    }
    uVar2 = uVar2 - 1;
    uVar1 = 0xffffffffffffffff;
    param_1 = param_1 + -8;
  } while (-1 < (__int64)uVar2);
  return -1;
}

