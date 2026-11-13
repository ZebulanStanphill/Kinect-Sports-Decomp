int fn_82BD3440(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)(param_1 * 4 + param_2);
  iVar2 = *(int *)(param_1 * 4 + param_2);
  piVar3 = piVar1;
  iVar4 = param_1;
  if (iVar2 != param_1) {
    do {
      iVar4 = *(int *)(iVar2 * 4 + param_2);
      iVar2 = *(int *)(iVar4 * 4 + param_2);
    } while (iVar2 != iVar4);
  }
  while (param_1 != iVar4) {
    param_1 = *piVar3;
    piVar3 = (int *)(param_1 * 4 + param_2);
    *piVar3 = iVar4;
  }
  *piVar1 = iVar4;
  return iVar4;
}

