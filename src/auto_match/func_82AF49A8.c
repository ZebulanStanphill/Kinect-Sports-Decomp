unsigned __int64 fn_82AF49A8(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  
  uVar1 = param_1 & 3;
  if ((param_2 & 1) != 0) {
    uVar1 = param_1 & 1 | 2;
  }
  if (((param_2 & 2) != 0) && (uVar1 != 3)) {
    uVar1 = 2;
  }
  if (((param_2 & 4) != 0) && (uVar1 != 3)) {
    if ((uVar1 & 1) == 0) {
      uVar1 = uVar1 >> 1;
    }
    else {
      uVar1 = 2;
    }
  }
  return param_1 & 0xfffffffc | uVar1;
}

