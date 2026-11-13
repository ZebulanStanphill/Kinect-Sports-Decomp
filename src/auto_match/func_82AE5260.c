__int64 fn_82AE5260(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  
  uVar2 = (unsigned __int64)(unsigned int)(-1 << (param_2 & 0x1f));
  if (param_2 >> 5 != 0) {
    return -1;
  }
  uVar3 = 0;
  do {
    if ((uVar2 & ~(unsigned __int64)*param_1) != 0) {
      uVar1 = (unsigned int)(uVar2 & ~(unsigned __int64)*param_1);
      return ((uVar3 & 0x7ffffff) * 0x20 - LZCOUNT(uVar1 & ~(uVar1 - 1))) + 0x1f;
    }
    uVar3 = uVar3 + 1;
    uVar2 = 0xffffffffffffffff;
    param_1 = param_1 + 1;
  } while ((uVar3 & 0xffffffff) == 0);
  return -1;
}

