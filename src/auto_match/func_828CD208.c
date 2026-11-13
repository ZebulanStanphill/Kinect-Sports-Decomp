extern int fn_8288C268();
extern int fn_82F63CA0();


void fn_828CD208(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned __int64 uVar5;
  
  uVar1 = param_1[1];
  uVar2 = (int)(uVar1 - *param_1) >> 2;
  if ((param_2 & 0xffffffff) < (unsigned __int64)uVar2) {
    uVar5 = (param_2 & 0x3fffffff) * 4 + (unsigned __int64)*param_1;
    if ((uVar5 & 0xffffffff) != (unsigned __int64)uVar1) {
      fn_82F63CA0(uVar5,(unsigned __int64)uVar1,0);
      param_1[1] = (unsigned int)uVar5;
    }
  }
  else if ((unsigned __int64)uVar2 < (param_2 & 0xffffffff)) {
    fn_8288C268(param_1,param_2 - (__int64)(int)uVar2);
    uVar5 = param_2 - (__int64)((int)(param_1[1] - *param_1) >> 2);
    if (uVar5 != 0) {
      puVar4 = (unsigned int *)(param_1[1] - 4);
      uVar3 = uVar5 & 0xffffffff;
      while (uVar3 != 0) {
        puVar4 = puVar4 + 1;
        *puVar4 = 0;
        uVar5 = uVar5 - 1;
        uVar3 = uVar5;
      }
    }
    param_1[1] = (int)((param_2 - (__int64)((int)(param_1[1] - *param_1) >> 2) & 0xffffffff) << 2)
                 + param_1[1];
  }
  return;
}

