void fn_828D57B0(unsigned int *param_1,int *param_2,int param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar1 = *(unsigned int **)*param_2, puVar1 != (unsigned int *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = param_2[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_3;
  if (piVar3 == (int *)0x0) {
    return;
  }
  if ((unsigned int *)*piVar3 == (unsigned int *)0x0) {
    return;
  }
  *param_1 = *(unsigned int *)*piVar3;
  return;
}

