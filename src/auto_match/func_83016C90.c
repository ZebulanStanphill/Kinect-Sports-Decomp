void fn_83016C90(int *param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  iVar1 = *(int *)(param_2 + 4);
  *param_1 = param_2 + 4;
  param_1[1] = 0;
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    return;
  }
  uVar3 = 0;
  do {
    uVar2 = uVar3 + 1;
    param_1[1] = uVar2;
    if (0xc0 < uVar2) {
      return;
    }
    iVar1 = *(int *)((uVar3 + 2) * 4 + param_2);
    param_1[2] = iVar1;
    uVar3 = uVar2;
  } while (iVar1 == 0);
  return;
}

