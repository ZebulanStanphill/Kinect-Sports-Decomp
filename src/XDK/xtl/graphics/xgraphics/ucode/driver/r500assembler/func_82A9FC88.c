__int64 fn_82A9FC88(__int64 param_1,unsigned int param_2)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  uVar2 = (__int64)((int)param_2 >> 5) + (unsigned __int64)((int)param_2 < 0 && (param_2 & 0x1f) != 0);
  if (-1 < (__int64)uVar2) {
    param_1 = (uVar2 & 0x3fffffff) * 4 + param_1;
    do {
      if (*(unsigned int *)param_1 != 0xffffffff) {
        lVar1 = 0x1f;
        do {
          if ((1 << ((unsigned int)lVar1 & 0x3f) & *(unsigned int *)param_1) == 0) {
            return (uVar2 & 0x7ffffff) * 0x20 + lVar1;
          }
          lVar1 = lVar1 + -1;
        } while (-1 < lVar1);
      }
      uVar2 = uVar2 - 1;
      param_1 = param_1 + -4;
    } while (-1 < (__int64)uVar2);
  }
  return -1;
}

