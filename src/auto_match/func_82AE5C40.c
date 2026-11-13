extern int fn_82AE50A8();
extern int fn_82AE56A8();


unsigned __int64 fn_82AE5C40(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  uVar1 = fn_82AE50A8(param_1 + 8,(param_2 & 0x3fffffff) << 2);
  if ((int)uVar1 != -1) {
    while (uVar2 = (param_3 & 0x3fffffff) * 4 + uVar1, (uVar2 & 0xffffffff) < 0x401) {
      uVar2 = fn_82AE56A8(param_1 + 8,uVar1,uVar2 - 1);
      if (((int)uVar2 == -1) && (uVar2 = uVar1, (uVar1 & 3) == 0)) {
        return (uVar1 & 0xffffffff) >> 2;
      }
      uVar1 = uVar2 + 4 & 0xfffffffc;
    }
  }
  return 0xffffffffffffffff;
}

