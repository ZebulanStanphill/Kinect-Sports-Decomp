extern int _blkmov();


unsigned int * fn_82FB93C8(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = (unsigned __int64)*param_3;
  uVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 4) - 2;
  if (uVar1 < (uVar2 & 0xffffffff)) {
    _blkmov(uVar1,uVar1 + 2,((((uVar2 - uVar1) - 1 & 0xffffffff) >> 1) + 1) * 2 & 0xfffffffe);
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -2;
  *param_1 = *param_3;
  return param_1;
}

