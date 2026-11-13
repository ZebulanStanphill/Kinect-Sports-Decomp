unsigned __int64 fn_82ACA4F0(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  uVar1 = ((0x8da691691448U >> (param_1 & 0x7f)) >> (param_1 & 0x7f)) >> (param_1 & 0x7f) & 7;
  if (uVar1 <= (param_2 & 0xffffffff)) {
    return param_1;
  }
  lVar2 = uVar1 - param_2;
  do {
    uVar1 = 0x20U - (LZCOUNT((int)param_1) + 1) & 0x1f;
    param_1 = param_1 - ((0x100000001 << uVar1 | 0x100000001U >> 0x40 - uVar1) & 0xffffffff);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return param_1;
}

