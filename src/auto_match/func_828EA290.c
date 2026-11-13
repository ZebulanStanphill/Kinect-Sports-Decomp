__int64 fn_828EA290(__int64 param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  
  if ((int)param_1 == -0x80000000) {
    lVar1 = -0x80000000;
  }
  else {
    lVar1 = -param_1;
    if (-1 < (int)param_1) {
      lVar1 = param_1 + 1;
    }
  }
  uVar2 = lVar1 - 1;
  lVar1 = 1;
  if (uVar2 == 0) {
    return lVar1;
  }
  do {
    uVar2 = (uVar2 & 0xffffffff) >> 1;
    lVar1 = lVar1 + 1;
  } while (uVar2 != 0);
  return lVar1;
}

