extern int fn_8251E4D0();


void fn_825A88B8(int param_1)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  piVar1 = *(int **)(param_1 + 0x890);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[4];
    if ((iVar2 != 0) || (piVar1[6] != 0)) {
      uVar3 = 0;
      if (piVar1[1] != 0) {
        iVar4 = 0;
        do {
          if (*(int *)(iVar4 + *piVar1) == 5) {
            iVar4 = *(int *)(uVar3 * 8 + *piVar1 + 4);
            goto LAB_825a8930;
          }
          uVar3 = uVar3 + 1;
          iVar4 = iVar4 + 8;
        } while (uVar3 < (unsigned int)piVar1[1]);
      }
      iVar4 = 0;
LAB_825a8930:
      if (iVar4 == 0) {
        if ((iVar2 != 0) && (0 < *(int *)(iVar2 + 0x10))) {
                    /* WARNING: Subroutine does not return */
          fn_8251E4D0(param_1 + 0x794);
        }
        if (piVar1[6] != 0) {
                    /* WARNING: Subroutine does not return */
          fn_8251E4D0(param_1 + 0x794);
        }
      }
    }
  }
  return;
}

