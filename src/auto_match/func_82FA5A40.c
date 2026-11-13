unsigned __int64 fn_82FA5A40(unsigned __int64 param_1,__int64 param_2)

{
  unsigned __int64 uVar1;
  
  if ((param_1 & 0xffffffff) == 0) {
    return 0;
  }
  if (0x3fffffff < (param_1 & 0xffffffff)) {
    return 0;
  }
  uVar1 = (param_1 + param_2) - 1 & ~(param_2 - 1U);
  if (0xc < (uVar1 & 0xffffffff)) {
    return uVar1;
  }
  return 0xc;
}

