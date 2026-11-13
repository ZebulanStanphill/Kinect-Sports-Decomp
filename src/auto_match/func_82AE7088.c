extern int fn_82AE5DE8();


void fn_82AE7088(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = param_2 + param_3;
  if ((param_2 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    do {
      uVar1 = param_2 & 0x3f;
      uVar1 = 1 - ((*(unsigned __int64 *)(((int)((param_2 & 0xffffffff) >> 6) + 1) * 8 + param_1) &
                    (2L << uVar1) - 1U & -1L << uVar1) >> uVar1 & 0xffffffff);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82AE5DE8(param_1,(param_2 & 0xfffffff) << 4 | uVar1 & 0xffffffff0000000f);
      }
      param_2 = param_2 + 1;
    } while ((param_2 & 0xffffffff) < (uVar2 & 0xffffffff));
  }
  return;
}

