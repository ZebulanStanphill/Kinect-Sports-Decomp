void fn_82DAD5A8(unsigned int *param_1)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  
  uVar3 = (unsigned __int64)param_1[1] - 1;
  if ((__int64)uVar3 < 0) {
    return;
  }
  lVar2 = (uVar3 & 0x3fffffff) << 2;
  do {
    lVar5 = lVar2 + (unsigned __int64)*param_1;
    if (*(int *)lVar5 == 0) {
      uVar1 = param_1[1];
      param_1[1] = (unsigned int)((unsigned __int64)uVar1 - 1);
      lVar4 = (((unsigned __int64)uVar1 - 1) - uVar3 & 0x3fffffff) * 4;
      if (0 < (int)lVar4) {
        lVar4 = ((lVar4 - 1U & 0xffffffff) >> 2) + 1;
        do {
          *(unsigned int *)lVar5 = ((unsigned int *)lVar5)[1];
          lVar5 = lVar5 + 4;
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    uVar3 = uVar3 - 1;
    lVar2 = lVar2 + -4;
  } while (-1 < (__int64)uVar3);
  return;
}

