extern int fn_829689A0();
extern int fn_82968BC8();


unsigned __int64 fn_82968E08(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  int iVar3;
  unsigned __int64 uVar1;
  
  iVar2 = fn_82968BC8();
  iVar3 = fn_82968BC8(param_1,param_2,param_3);
  if (iVar2 != 0) {
    return 1;
  }
  if (iVar3 == 0) {
    uVar1 = fn_829689A0(param_1,param_2,param_3);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    if ((param_2 & 0xffffffff) <= (param_1 & 0xffffffff)) {
      return -(unsigned __int64)(param_2 < param_1) & 1;
    }
  }
  return 0xffffffffffffffff;
}

