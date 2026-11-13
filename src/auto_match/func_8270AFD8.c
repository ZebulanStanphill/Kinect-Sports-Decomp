void fn_8270AFD8(unsigned int *param_1,int *param_2)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)param_2[2];
  piVar5 = param_2 + 2;
  if (piVar4 == (int *)0x0) {
    piVar4 = (int *)param_2[1];
    piVar5 = param_2 + 1;
    if (piVar4 == (int *)0x0) goto code_r0x8270b02c;
  }
  while ((piVar3 = piVar4 + 2, piVar4[2] != 0 || (piVar3 = piVar4 + 1, piVar4[1] != 0))) {
    piVar5 = piVar3;
    piVar4 = (int *)*piVar5;
  }
  *piVar5 = 0;
code_r0x8270b02c:
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (param_2 == (int *)*param_1) {
      *param_1 = piVar4;
    }
    else {
      *(int **)((2 - (unsigned int)(param_2 == *(int **)(iVar1 + 4))) * 4 + iVar1) = piVar4;
    }
    if (piVar4 != (int *)0x0) {
      *piVar4 = iVar1;
      puVar2 = (unsigned int *)param_2[1];
      if (puVar2 != (unsigned int *)0x0) {
        piVar4[1] = (int)puVar2;
        *puVar2 = piVar4;
      }
      puVar2 = (unsigned int *)param_2[2];
      if (puVar2 != (unsigned int *)0x0) {
        piVar4[2] = (int)puVar2;
        *puVar2 = piVar4;
      }
    }
  }
  param_2[2] = 0;
  param_2[1] = 0;
  *param_2 = 0;
  return;
}

