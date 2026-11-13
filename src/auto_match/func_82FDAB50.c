void fn_82FDAB50(__int64 param_1,__int64 param_2,__int64 param_3,unsigned __int64 param_4)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  if (0x3ff < (param_4 & 0xffffffff)) {
    param_4 = 0x400;
  }
  uVar2 = param_3 - param_2;
  if ((param_4 & 0xffffffff) <= (param_3 - param_2 & 0xffffffffU)) {
    uVar2 = param_4;
  }
  lVar3 = 0;
  if ((uVar2 & 0xffffffff) != 0) {
    lVar1 = ((uVar2 - 1 & 0xffffffff) >> 7) + 1;
    do {
      dataCacheBlockTouch(lVar3 + param_2);
      lVar3 = lVar3 + 0x80;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if ((param_4 & 0xffffffff) <= (uVar2 & 0xffffffff)) {
    return;
  }
  uVar4 = param_3 - param_1;
  if ((param_4 - uVar2 & 0xffffffff) <= (param_3 - param_1 & 0xffffffffU)) {
    uVar4 = param_4 - uVar2;
  }
  lVar3 = 0;
  if ((uVar4 & 0xffffffff) == 0) {
    return;
  }
  lVar1 = ((uVar4 - 1 & 0xffffffff) >> 7) + 1;
  do {
    dataCacheBlockTouch(lVar3 + param_2);
    lVar3 = lVar3 + 0x80;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  return;
}

