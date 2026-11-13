extern int fn_829E9888();
extern int fn_829EE280();
extern int fn_829EE368();


unsigned __int64 fn_829EE3F8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar1 = *(unsigned int *)(param_1 + 4);
  uVar3 = (unsigned __int64)(unsigned int)((int)(*(int *)(param_1 + 8) - uVar1) / 0x24);
  if (uVar3 < (param_2 & 0xffffffff)) {
    uVar1 = (int)(*(int *)(param_1 + 0xc) - uVar1) / 0x24;
    lVar5 = (__int64)(int)uVar1;
    if ((unsigned __int64)uVar1 < (param_2 & 0xffffffff)) {
      if (uVar1 == 0) {
        uVar3 = 4;
      }
      else {
        uVar3 = (lVar5 + 7U & 0xffffffff) >> 3;
      }
      uVar4 = param_2 - lVar5;
      if ((uVar4 & 0xffffffff) <= uVar3) {
        if (uVar1 == 0) {
          uVar4 = 4;
        }
        else {
          uVar4 = (lVar5 + 7U & 0xffffffff) >> 3;
        }
      }
      cVar2 = fn_829EE280(param_1,uVar4);
      if (cVar2 == '\0') {
        return 0xffffffff8007000e;
      }
    }
    for (uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
        (uVar3 & 0xffffffff) != ((unsigned __int64)*(unsigned int *)(param_1 + 4) + param_2 * 0x24 & 0xffffffff);
        uVar3 = uVar3 + 0x24) {
      if ((uVar3 & 0xffffffff) != 0) {
        fn_829E9888(uVar3);
      }
    }
    *(int *)(param_1 + 8) = (int)uVar3;
  }
  else if ((param_2 & 0xffffffff) < uVar3) {
    fn_829EE368(param_1,param_2 * 0x24 + (unsigned __int64)uVar1);
  }
  return 0;
}

