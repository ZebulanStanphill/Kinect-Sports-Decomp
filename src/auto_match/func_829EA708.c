extern int fn_829E9B90();
extern int fn_829EA168();


unsigned __int64 fn_829EA708(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  
  uVar5 = *(unsigned int *)(param_1 + 4);
  uVar2 = (unsigned __int64)(unsigned int)((int)(*(int *)(param_1 + 8) - uVar5) >> 1);
  if (uVar2 < (param_2 & 0xffffffff)) {
    uVar5 = (int)(*(int *)(param_1 + 0xc) - uVar5) >> 1;
    lVar4 = (__int64)(int)uVar5;
    if ((unsigned __int64)uVar5 < (param_2 & 0xffffffff)) {
      if (uVar5 == 0) {
        uVar2 = 4;
      }
      else {
        uVar2 = (lVar4 + 7U & 0xffffffff) >> 3;
      }
      uVar3 = param_2 - lVar4;
      if ((uVar3 & 0xffffffff) <= uVar2) {
        if (uVar5 == 0) {
          uVar3 = 4;
        }
        else {
          uVar3 = (lVar4 + 7U & 0xffffffff) >> 3;
        }
      }
      cVar1 = fn_829EA168(param_1,uVar3);
      if (cVar1 == '\0') {
        return 0xffffffff8007000e;
      }
    }
    lVar4 = (param_2 & 0x7fffffff) * 2;
    uVar5 = *(unsigned int *)(param_1 + 8);
    if ((unsigned __int64)uVar5 != ((unsigned __int64)*(unsigned int *)(param_1 + 4) + lVar4 & 0xffffffff)) {
      do {
        uVar5 = uVar5 + 2;
      } while ((unsigned __int64)uVar5 != ((unsigned __int64)*(unsigned int *)(param_1 + 4) + lVar4 & 0xffffffff));
    }
    *(unsigned int *)(param_1 + 8) = uVar5;
  }
  else if ((param_2 & 0xffffffff) < uVar2) {
    fn_829E9B90(param_1,(param_2 & 0x7fffffff) * 2 + (unsigned __int64)uVar5);
  }
  return 0;
}

