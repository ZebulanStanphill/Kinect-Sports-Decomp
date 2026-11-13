__int64 fn_82FEF328(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    if ((int *)param_1[1] == (int *)0x0) {
      *param_1 = iVar1;
    }
    else {
      *(int *)param_1[1] = iVar1;
    }
    piVar2 = (int *)param_1[2];
    param_1[1] = (int)piVar2;
    param_1[2] = *piVar2;
    *piVar2 = 0;
    param_1[5] = param_1[5] + 1;
    return (unsigned __int64)(unsigned int)param_1[1] + 4;
  }
  return 0;
}

