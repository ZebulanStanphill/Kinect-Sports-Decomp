unsigned __int64 fn_829EE5F8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (((param_1 & 0xffffffff) != 0) && ((param_2 & 0xffffffff) != 0)) {
    if ((param_2 & 0xffffffff) == 0) {
      return param_1;
    }
    do {
      uVar2 = param_1 - (__int64)(int)((param_1 & 0xffffffff) / (param_2 & 0xffffffff)) *
                        (__int64)(int)param_2;
      uVar1 = param_2;
      param_1 = param_2;
      param_2 = uVar2;
    } while (uVar2 != 0);
    return uVar1;
  }
  return 1;
}

