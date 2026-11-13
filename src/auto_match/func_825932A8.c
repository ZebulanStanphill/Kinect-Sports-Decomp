int * fn_825932A8(int param_1,short param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(param_1 + 0x8c0) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (**(int (***)())(**(int **)(param_1 + 0x8c0) + 0x1c))();
  }
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = *(int **)(*(int *)(iVar1 + 0x10) + 0x10);
  }
  if (piVar2 != (int *)0x0) {
    piVar3 = piVar2 + 1;
    piVar2 = piVar3 + *piVar2 * 0x11;
    for (; piVar3 < piVar2; piVar3 = piVar3 + 0x11) {
      if (*(short *)piVar3 == param_2) {
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}

