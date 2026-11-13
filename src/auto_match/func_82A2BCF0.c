__int64 fn_82A2BCF0(unsigned __int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  
  if (0x4bda84 < (param_1 & 0xffffffff)) {
    return 0x4af768;
  }
  if ((param_1 & 0xffffffff) < 0x723a) {
    if ((0xab < (param_1 & 0xffffffff)) &&
       (uVar2 = param_1 & 0xffffffff, param_1 = param_1 - 2, uVar2 < 0xb1)) {
      param_1 = 0xac;
    }
  }
  else {
    uVar2 = param_1 - 2;
    if ((param_1 & 0xffffffff) < 0x7241) {
      uVar2 = 0x723a;
    }
    uVar1 = uVar2 + ((uVar2 & 0xffffffff) / 0x723a) * -0x723a;
    if ((uVar1 & 0xffffffff) < 5) {
      uVar2 = uVar2 - uVar1;
    }
    param_1 = uVar2 + ((uVar2 + 0x7239 & 0xffffffff) / 0x723a) * -2;
  }
  uVar2 = param_1 + ((param_1 & 0xffffffff) / 0xac) * -0xac;
  if ((uVar2 & 0xffffffff) < 3) {
    param_1 = param_1 - uVar2;
  }
  return param_1 + ((param_1 + 0xab & 0xffffffff) / 0xac) * -2;
}

