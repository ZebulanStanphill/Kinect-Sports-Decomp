extern int fn_829EF778();


unsigned __int64 fn_829F12C8(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  
  if ((param_1 == 0) || ((param_2 & 0xffffffff) == 0)) {
    uVar1 = 0xffffffff80070057;
  }
  else {
    uVar3 = *(unsigned int *)(param_1 + 0x280);
    if (uVar3 == 0) {
      uVar3 = 0;
      do {
        uVar1 = fn_829EF778(param_1,param_2);
        if ((int)uVar1 < 0) {
          return uVar1;
        }
        uVar3 = uVar3 + 1;
        param_2 = param_2 + 0xa0;
      } while (uVar3 < 2);
    }
    else {
      lVar2 = (unsigned __int64)uVar3 - 1;
      uVar1 = fn_829EF778(param_1,(lVar2 - (((unsigned __int64)uVar3 - 2) + (unsigned __int64)(lVar2 == 0)))
                                        * 0xa0 + param_2);
    }
  }
  return uVar1;
}

