extern double sqrt(double);
#define SQRT(x) sqrt(x)


unsigned __int64 fn_82FC9E00(unsigned __int64 param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  iVar1 = (int)param_1;
  if (iVar1 != 2) {
    if ((param_1 & 1) == 0) {
      return 0;
    }
    uVar2 = 3;
    if (3 < (int)SQRT((float)(__int64)iVar1) + 1) {
      do {
        trapWord(6,uVar2,0);
        trapWord(5,uVar2 & ~(((param_1 & 0x7fffffff) << 1 | (param_1 & 0xffffffff) >> 0x1f) - 1),
                 0xffff);
        if (param_1 == (__int64)(iVar1 / (int)uVar2) * (__int64)(int)uVar2) {
          return 0;
        }
        uVar2 = uVar2 + 2;
      } while ((int)uVar2 < (int)SQRT((float)(__int64)iVar1) + 1);
    }
  }
  return 1;
}

