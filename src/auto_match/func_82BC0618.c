extern int fn_82BC0088();


void fn_82BC0618(int *param_1)

{
  int *piVar1;
  unsigned int uVar2;
  int iVar3;
  
  uVar2 = param_1[3];
  if ((int)uVar2 < 0) {
    do {
      uVar2 = param_1[1] + 1;
      param_1[1] = uVar2;
      if (*(unsigned int *)*param_1 <= uVar2) {
        iVar3 = 0;
        goto LAB_82bc06b8;
      }
      iVar3 = *(int *)(((unsigned int *)*param_1)[2] + uVar2 * 4);
      param_1[2] = iVar3;
    } while ((iVar3 == 0) || (*(int *)(iVar3 + 4) == 0));
    uVar2 = *(int *)(iVar3 + 4) - 1;
  }
  param_1[3] = uVar2 - 1;
  if (uVar2 < *(unsigned int *)(param_1[2] + 4)) {
    piVar1 = (int *)(uVar2 * 4 + *(int *)(param_1[2] + 8));
  }
  else {
    piVar1 = (int *)fn_82BC0088();
  }
  iVar3 = *piVar1;
LAB_82bc06b8:
  param_1[4] = iVar3;
  return;
}

