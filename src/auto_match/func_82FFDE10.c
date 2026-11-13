void fn_82FFDE10(unsigned int *param_1,int *param_2)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *param_2;
  uVar2 = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  do {
    uVar2 = uVar2 + 1;
    param_1[1] = uVar2;
    if (0x1e < uVar2) {
      return;
    }
    iVar1 = param_2[uVar2];
    param_1[2] = iVar1;
  } while (iVar1 == 0);
  return;
}

