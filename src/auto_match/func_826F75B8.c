void fn_826F75B8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if ((*(unsigned char *)((int)piVar1 + 0x66) & 0x10) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 1) {
                    /* WARNING: Could not recover jumptable at 0x826f764c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(*piVar1 + 0x128))(piVar1,*(unsigned int *)(param_1 + 0xc));
    return;
  }
  if (iVar2 != 2) {
    if (iVar2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x826f7624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(int (***)())(*piVar1 + 0x130))(piVar1,param_1 + 0x20,param_1 + 0x30);
      return;
    }
    if (iVar2 != 4) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x826f760c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(int (***)())(*piVar1 + 0x134))(piVar1,*(unsigned int *)(param_1 + 0x2c),param_1 + 0x30);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x826f7638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*piVar1 + 300))(piVar1,param_1 + 0x10);
  return;
}

