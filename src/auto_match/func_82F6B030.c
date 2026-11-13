unsigned __int64 fn_82F6B030(__int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = param_1 << LZCOUNT(param_1);
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = (0x43eU - LZCOUNT(param_1) & 0x7ff) << 0x34 | uVar1 >> 0xb & 0xfffffffffffff;
  }
  return uVar2;
}

