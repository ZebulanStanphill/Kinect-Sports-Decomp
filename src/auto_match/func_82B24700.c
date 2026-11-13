void fn_82B24700(unsigned int *param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  int iVar2;
  
  *param_1 = param_2;
  uVar1 = param_2[1];
  param_1[2] = 0;
  param_1[1] = -(unsigned int)((uVar1 & 1) == 0) & uVar1;
  if ((param_2[1] & 1) == 0) {
    iVar2 = (*param_2 & 0xfffffffe) - 4;
  }
  else {
    iVar2 = 0;
  }
  param_1[1] = iVar2;
  if (iVar2 != 0) {
    param_1[2] = *(unsigned int *)(iVar2 + 8);
    return;
  }
  param_1[2] = 0;
  return;
}

