__int64 fn_82F69B70(unsigned int *param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  lVar2 = 0;
  if (*(char *)param_1 == '\0') {
    return lVar2;
  }
  do {
    param_1 = (unsigned int *)((int)param_1 + 1);
    if (((unsigned int)param_1 & 3) == 0) {
      uVar1 = *param_1;
      lVar2 = lVar2 + 1;
      while (uVar3 = ~(((unsigned __int64)uVar1 & 0x7f7f7f7f) + 0x7f7f7f7f | (unsigned __int64)uVar1 | 0x7f7f7f7f)
            , uVar3 == 0) {
        param_1 = param_1 + 1;
        uVar1 = *param_1;
        lVar2 = lVar2 + 4;
      }
      return lVar2 + ((unsigned __int64)LZCOUNT((int)uVar3) >> 3);
    }
    lVar2 = lVar2 + 1;
  } while (*(char *)param_1 != '\0');
  return lVar2;
}

