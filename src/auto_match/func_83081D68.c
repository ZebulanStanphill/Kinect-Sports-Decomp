void fn_83081D68(unsigned int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)*param_1;
  piVar2 = piVar4 + param_1[1];
  piVar3 = piVar4;
  if (piVar4 != piVar2) {
    do {
      if (-1 < *piVar4) {
        for (iVar1 = piVar3[*piVar4]; -1 < iVar1; iVar1 = piVar3[iVar1]) {
          iVar1 = piVar3[*piVar4];
          *piVar4 = iVar1;
          piVar3 = *(int **)*param_1;
        }
      }
      piVar4 = piVar4 + 1;
    } while (piVar4 != piVar2);
    return;
  }
  return;
}

