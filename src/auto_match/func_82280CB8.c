void fn_82280CB8(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x44);
  if (iVar1 == 1) {
    iVar2 = param_1 + 0x4c;
  }
  else {
    if (iVar1 != 3) {
      return;
    }
    iVar2 = param_1 + 0x54;
  }
  if (*(int *)(iVar2 + 4) != 0) {
    if ((iVar1 == 1) || (iVar2 = param_1 + 0x54, iVar1 == 0)) {
      iVar2 = param_1 + 0x4c;
    }
                    /* WARNING: Could not recover jumptable at 0x82280d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(**(int **)(iVar2 + 4) + 8))();
    return;
  }
  return;
}

