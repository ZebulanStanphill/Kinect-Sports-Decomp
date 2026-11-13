__int64 fn_82AE52C8(unsigned int *param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  uVar2 = (unsigned __int64)(unsigned int)(-1 << (param_2 & 0x1f));
  if (param_2 >> 5 != 0) {
    return -1;
  }
  uVar3 = 0;
  do {
    uVar2 = uVar2 & ~(unsigned __int64)*param_1;
    if (uVar2 != 0) {
      uVar1 = (unsigned int)uVar2;
      lVar4 = 0x1f - LZCOUNT(uVar1 & ~(uVar1 - 1));
      *param_3 = *param_1 >> ((unsigned int)lVar4 & 0x3c) & 0xf;
      return (uVar3 & 0x7ffffff) * 0x20 + lVar4;
    }
    uVar3 = uVar3 + 1;
    uVar2 = 0xffffffffffffffff;
    param_1 = param_1 + 1;
  } while ((uVar3 & 0xffffffff) == 0);
  return -1;
}

