extern int fn_82641518();


void fn_82641B60(int param_1,unsigned __int64 param_2,__int64 param_3,__int64 param_4)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  
  uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
  param_4 = param_4 + -4;
  do {
    lVar2 = LZCOUNT(param_2);
    param_2 = param_2 << lVar2;
    param_4 = lVar2 * 4 + param_4;
    lVar4 = LZCOUNT(~param_2);
    lVar2 = lVar2 + param_3;
    if ((lVar4 * 4 + uVar1 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x34)) {
      uVar1 = uVar1 + 4;
      *(unsigned int *)uVar1 = (unsigned int)((lVar4 - 1U & 0xffffffff) << 0x10) | (unsigned int)lVar2;
      lVar3 = lVar4;
      do {
        param_4 = param_4 + 4;
        lVar3 = lVar3 + -1;
        param_2 = param_2 << 1;
        uVar1 = uVar1 + 4;
        *(unsigned int *)uVar1 = *(unsigned int *)param_4;
      } while (lVar3 != 0);
    }
    else {
      uVar1 = fn_82641518(param_1,uVar1,lVar2,param_4,lVar4,1);
      param_4 = lVar4 * 4 + param_4;
      param_2 = param_2 << lVar4;
    }
    param_3 = lVar4 + lVar2;
  } while (param_2 != 0);
  *(int *)(param_1 + 0x30) = (int)uVar1;
  return;
}

