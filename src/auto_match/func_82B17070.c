__int64 fn_82B17070(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = -1 << (param_2 & 0x1f);
  if (param_2 >> 5 != 0) {
    return -1;
  }
  uVar2 = 0;
  do {
    uVar1 = *param_1 & uVar1;
    if (uVar1 != 0) {
      return ((uVar2 & 0x7ffffff) * 0x20 - LZCOUNT(uVar1 & ~(uVar1 - 1))) + 0x1f;
    }
    uVar2 = uVar2 + 1;
    uVar1 = 0xffffffff;
    param_1 = param_1 + 1;
  } while ((uVar2 & 0xffffffff) == 0);
  return -1;
}

