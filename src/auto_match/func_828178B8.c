void fn_828178B8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
  piVar2 = (int *)(param_1 + 0x14);
  do {
    piVar1 = piVar2 + 1;
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 2;
    *(int *)(*piVar1 + param_2) = *piVar2 + param_2;
  } while (iVar3 < *(int *)(param_1 + 0x10));
  return;
}

