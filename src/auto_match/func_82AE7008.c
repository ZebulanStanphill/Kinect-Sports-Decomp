extern int fn_82AE5CC8();


void fn_82AE7008(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  
  uVar3 = param_2 + param_3;
  if ((param_2 & 0xffffffff) < (uVar3 & 0xffffffff)) {
    do {
      uVar2 = (unsigned int)param_2 & 0x1f;
      uVar1 = 1 - (unsigned __int64)
                  ((*(unsigned int *)(((int)((param_2 & 0xffffffff) >> 5) + 1) * 4 + param_1) &
                    (2 << uVar2) - 1U & -1 << uVar2) >> uVar2);
      if ((uVar1 & 0xffffffff) != 0) {
        fn_82AE5CC8(param_1,(param_2 & 0xfffffff) << 4 | uVar1 & 0xffffffff0000000f);
      }
      param_2 = param_2 + 1;
    } while ((param_2 & 0xffffffff) < (uVar3 & 0xffffffff));
  }
  return;
}

