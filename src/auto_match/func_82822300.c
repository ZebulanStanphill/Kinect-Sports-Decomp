void fn_82822300(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 4);
  iVar1 = *piVar2;
  while (iVar1 != 0) {
    param_1 = *piVar2;
    piVar2 = (int *)(param_1 + 4);
    iVar1 = *(int *)(param_1 + 4);
  }
  *piVar2 = (int)param_2;
  *param_2 = param_1;
  param_2[1] = 0;
  return;
}

