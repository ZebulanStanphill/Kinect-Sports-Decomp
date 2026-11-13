extern int fn_829E99A0();
extern int fn_829E9EA0();


unsigned __int64 fn_829EA3B0(int param_1,unsigned __int64 param_2)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  unsigned int uVar5;
  
  uVar5 = *(unsigned int *)(param_1 + 4);
  uVar2 = (unsigned __int64)(unsigned int)((int)(*(int *)(param_1 + 8) - uVar5) / 0xc);
  if (uVar2 < (param_2 & 0xffffffff)) {
    uVar5 = (int)(*(int *)(param_1 + 0xc) - uVar5) / 0xc;
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
      cVar1 = fn_829E9EA0(param_1,uVar3);
      if (cVar1 == '\0') {
        return 0xffffffff8007000e;
      }
    }
    uVar5 = *(unsigned int *)(param_1 + 8);
    if ((unsigned __int64)uVar5 != ((unsigned __int64)*(unsigned int *)(param_1 + 4) + param_2 * 0xc & 0xffffffff)) {
      do {
        uVar5 = uVar5 + 0xc;
      } while ((unsigned __int64)uVar5 != ((unsigned __int64)*(unsigned int *)(param_1 + 4) + param_2 * 0xc & 0xffffffff))
      ;
    }
    *(unsigned int *)(param_1 + 8) = uVar5;
  }
  else if ((param_2 & 0xffffffff) < uVar2) {
    fn_829E99A0(param_1,param_2 * 0xc + (unsigned __int64)uVar5);
  }
  return 0;
}

