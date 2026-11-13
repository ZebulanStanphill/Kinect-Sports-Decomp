extern int _blkmov();


unsigned int * fn_830214B8(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = (unsigned __int64)*param_3;
  uVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 4) - 4;
  if (uVar1 < (uVar2 & 0xffffffff)) {
    _blkmov(uVar1,uVar1 + 4,((((uVar2 - uVar1) - 1 & 0xffffffff) >> 2) + 1) * 4 & 0xfffffffc);
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -4;
  *param_1 = *param_3;
  return param_1;
}

