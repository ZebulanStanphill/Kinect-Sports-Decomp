void fn_82441EF0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[1];
  iVar2 = piVar1[0xb];
  if (*piVar1 != 0) {
    iVar3 = *(int *)(*piVar1 + 0x1d0);
    if (iVar3 == iVar2) {
      if (iVar2 == 0) {
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      *(int *)(*piVar1 + 0x1d0) = iVar3;
    }
  }
  *(int *)(param_1[1] + 0x2c) = iVar2;
  if (*(int *)(param_1[1] + 0x28) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x82441f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_1 + 0x10))();
  return;
}

