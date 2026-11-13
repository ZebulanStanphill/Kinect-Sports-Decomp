void fn_82FFDF28(int *param_1,int param_2,unsigned int param_3)

{
  int *piVar1;
  int iVar2;
  
  *param_1 = param_2 + 4;
  param_1[3] = 0;
  param_1[1] = param_3 % 0xc1;
  iVar2 = *(int *)((param_3 % 0xc1 + 1) * 4 + param_2);
  param_1[2] = iVar2;
  if (iVar2 == 0) {
    return;
  }
  do {
    piVar1 = (int *)param_1[2];
    if (piVar1[1] == param_3) {
      return;
    }
    iVar2 = *piVar1;
    param_1[3] = (int)piVar1;
    param_1[2] = iVar2;
  } while (iVar2 != 0);
  return;
}

