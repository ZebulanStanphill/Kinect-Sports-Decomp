extern int _blkmov();


unsigned int * fn_82FF5F30(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = (unsigned __int64)*param_3;
  uVar2 = (unsigned __int64)*(unsigned int *)(param_2 + 4) - 0x10;
  if (uVar1 < (uVar2 & 0xffffffff)) {
    _blkmov(uVar1,uVar1 + 0x10,
                 ((((uVar2 - uVar1) - 1 & 0xffffffff) >> 3 & 0x1ffffffe) + 2) * 8 & 0xfffffff0);
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -0x10;
  *param_1 = *param_3;
  return param_1;
}

