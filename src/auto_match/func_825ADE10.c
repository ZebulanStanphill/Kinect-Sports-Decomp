void fn_825ADE10(unsigned int *param_1,int *param_2,int param_3,__int64 param_4)

{
  int *piVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  
  piVar1 = (int *)*param_2;
  piVar3 = (int *)0x0;
  if ((piVar1 != (int *)0x0) && ((unsigned int *)*piVar1 != (unsigned int *)0x0)) {
    piVar3 = *(int **)*piVar1;
  }
  uVar5 = param_2[2];
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
  }
  if (uVar5 != *(unsigned int *)(param_3 + 8)) {
    do {
      uVar2 = uVar5;
      if (*(unsigned int *)(iVar4 + 8) <= uVar5) {
        uVar2 = uVar5 - *(unsigned int *)(iVar4 + 8);
      }
    } while ((*(__int64 *)(*(int *)(uVar2 * 4 + *(int *)(iVar4 + 4)) + 0x40) != param_4) &&
            (uVar5 = uVar5 + 1, uVar5 != *(unsigned int *)(param_3 + 8)));
  }
  param_2[2] = uVar5;
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar1 != (int *)0x0) && ((unsigned int *)*piVar1 != (unsigned int *)0x0)) {
    *param_1 = *(unsigned int *)*piVar1;
  }
  param_1[2] = uVar5;
  return;
}

