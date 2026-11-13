unsigned __int64 fn_83046238(unsigned __int64 param_1,unsigned int param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  
  if ((param_2 & 8) == 0) {
    return param_1;
  }
  uVar1 = 0;
  for (uVar3 = param_2 & 7; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
    uVar1 = uVar1 + 1;
  }
  if ((param_1 & 0xffffffff) != (uVar1 & 0xffffffff)) {
    if ((uVar1 & 0xffffffff) < (param_1 & 0xffffffff)) {
      return param_1 - 1;
    }
    return param_1;
  }
  lVar2 = 0;
  for (; param_2 != 0; param_2 = param_2 - 1 & param_2) {
    lVar2 = lVar2 + 1;
  }
  return lVar2 - 1;
}

