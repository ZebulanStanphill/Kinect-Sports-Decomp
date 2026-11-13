void fn_8282F8F8(int param_1,__int64 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if ((int)param_2 == 0) {
    return;
  }
  piVar3 = (int *)(param_1 + -4);
  do {
    iVar1 = piVar3[1];
    piVar3 = piVar3 + 1;
    *piVar3 = iVar2;
    iVar2 = iVar1 + iVar2;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

