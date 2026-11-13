extern int _blkmov();


void fn_8308B338(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  unsigned __int64 uVar4;
  
  uVar4 = (param_2 & 0x3fffffff) * 4 + (unsigned __int64)*param_1;
  uVar2 = ((param_3 & 0x3fffffff) * 4 + (unsigned __int64)*param_1) - 4;
  if ((uVar4 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    lVar3 = (((uVar2 - uVar4) - 1 & 0xffffffff) >> 2) + 1;
    _blkmov(uVar4,uVar4 + 4,lVar3 * 4 & 0xfffffffc);
    uVar4 = (lVar3 * 4 & 0xfffffffcU) + uVar4;
  }
  uVar1 = param_1[1];
  param_1[1] = uVar1 - 2;
  uVar2 = ((unsigned __int64)(uVar1 - 2) & 0x3fffffff) * 4 + (unsigned __int64)*param_1;
  if ((uVar4 & 0xffffffff) < (uVar2 & 0xffffffff)) {
    _blkmov(uVar4,uVar4 + 8,((((uVar2 - uVar4) - 1 & 0xffffffff) >> 2) + 1) * 4 & 0xfffffffc);
  }
  return;
}

