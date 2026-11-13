unsigned int fn_825ACB58(int *param_1,int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  unsigned int uVar4;
  
  piVar3 = (int *)0x0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_1, puVar1 != (unsigned int *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  uVar4 = param_1[3] + param_2;
  if (((piVar3 == (int *)0x0) || ((int *)*piVar3 == (int *)0x0)) ||
     (piVar3 = *(int **)*piVar3, piVar3 == (int *)0x0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *piVar3;
  }
  if (*(unsigned int *)(iVar2 + 8) <= uVar4) {
    uVar4 = uVar4 - *(unsigned int *)(iVar2 + 8);
  }
  return *(unsigned int *)(uVar4 * 4 + *(int *)(iVar2 + 4));
}

