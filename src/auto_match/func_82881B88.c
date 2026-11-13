void fn_82881B88(unsigned int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = param_2[4];
  iVar2 = param_2[3];
  piVar4 = (int *)0x0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar3 = *(unsigned int **)*param_2, puVar3 != (unsigned int *)0x0)) {
    piVar4 = (int *)*puVar3;
  }
  piVar5 = (int *)0x0;
  if ((piVar4 != (int *)0x0) && ((unsigned int *)*piVar4 != (unsigned int *)0x0)) {
    piVar5 = *(int **)*piVar4;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar1 + iVar2;
  if (piVar5 == (int *)0x0) {
    return;
  }
  if ((unsigned int *)*piVar5 == (unsigned int *)0x0) {
    return;
  }
  *param_1 = *(unsigned int *)*piVar5;
  return;
}

