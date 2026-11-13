void fn_82E3C860(unsigned int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  
  if (param_1[1] != 0) {
    return;
  }
  param_1[2] = param_2;
  param_1[1] = (int)(param_1 + 3);
  iVar1 = 0;
  param_1[3] = 0;
  lVar3 = 8;
  do {
    iVar2 = iVar1 + param_1[1] + 4;
    if (iVar2 != 0) {
      *(unsigned int *)(iVar2 + 0x18) = 0;
    }
    else {
      iVar2 = 0;
    }
    iVar1 = iVar1 + 0x1c;
    *(int *)(iVar2 + 0x18) = *param_1;
    *param_1 = iVar2;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

