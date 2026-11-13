extern int fn_826BCFF8();


__int64 fn_826BD598(__int64 param_1,int param_2)

{
  short sVar1;
  __int64 lVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  lVar3 = 0;
  uVar4 = 0;
  if (param_2 == -1) {
    sVar1 = *(short *)param_1;
    while (sVar1 != 0) {
      lVar2 = fn_826BCFF8();
      uVar4 = uVar4 + 1;
      lVar3 = lVar2 + lVar3;
      sVar1 = *(short *)((int)((uVar4 & 0xffffffff) << 1) + (int)param_1);
    }
  }
  else if (0 < param_2) {
    do {
      if (*(short *)param_1 == 0) {
        return lVar3;
      }
      lVar2 = fn_826BCFF8();
      uVar4 = uVar4 + 1;
      lVar3 = lVar2 + lVar3;
      param_1 = param_1 + 2;
    } while ((int)uVar4 < param_2);
  }
  return lVar3;
}

