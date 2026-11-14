extern int XMemSet();
extern int fn_82BD82D0();
extern int fn_82BD8860();
extern int fn_82F68CC0();


unsigned __int64 fn_82BD8970(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int *piVar5;
  
  lVar4 = -0x7fffbffb;
  iVar3 = fn_82BD82D0();
  if (iVar3 == 0) {
LAB_82bd8ae4:
    *(unsigned __int64 *)(param_1 + 0x38) = 0;
  }
  else {
    piVar1 = *(int **)(param_1 + 0x188);
    piVar5 = (int *)(param_1 + 0x188);
    if (piVar1 == (int *)0x0) {
      *(unsigned int *)(param_1 + 0x4c) = 0;
      goto LAB_82bd8ae4;
    }
    iVar3 = *piVar1;
    if (*(__int64 *)(iVar3 + 0x18) == *(__int64 *)(param_1 + 0x10)) {
      iVar2 = *piVar5;
      if (iVar2 != 0) {
        if (iVar2 == *(int *)(param_1 + 0x18c)) {
          *(unsigned int *)(param_1 + 0x18c) = 0;
        }
        *piVar5 = *(int *)(iVar2 + 4);
        *(unsigned int *)(iVar2 + 4) = 0;
      }
      fn_82F68CC0(param_1 + 0x148,*(unsigned int *)(iVar3 + 8),*(unsigned int *)(iVar3 + 0xc));
      *(unsigned int *)(param_1 + 0x174) = 1;
      lVar4 = fn_82BD8860(param_1,piVar1);
      if (lVar4 < 0) {
        piVar1[1] = *piVar5;
        *piVar5 = (int)piVar1;
        if (*(int *)(param_1 + 0x18c) == 0) {
          *(int **)(param_1 + 0x18c) = piVar1;
        }
      }
      else {
        *(__int64 *)(param_1 + 0x38) = *(__int64 *)(param_1 + 0x38) + 0x14;
      }
    }
    else {
      *(int *)(param_1 + 0x13c) = *(int *)(param_1 + 0x13c) + 1;
      if (*(int *)(param_1 + 0x174) == 0) {
        lVar4 = 0;
      }
      else {
        piVar1 = *(int **)(param_1 + 0x180);
        piVar5 = (int *)(param_1 + 0x180);
        if (piVar1 == (int *)0x0) goto LAB_82bd8b18;
        if (piVar1 == *(int **)(param_1 + 0x184)) {
          *(unsigned int *)(param_1 + 0x184) = 0;
        }
        *piVar5 = piVar1[1];
        piVar1[1] = 0;
        fn_82F68CC0(*(unsigned int *)(*piVar1 + 8),param_1 + 0x148,0x2a);
        *(unsigned int *)(*piVar1 + 4) = 0x2a;
        lVar4 = fn_82BD8860(param_1,piVar1);
        if (lVar4 < 0) {
          *(unsigned int *)(*piVar1 + 4) = 0;
          piVar1[1] = *piVar5;
          *piVar5 = (int)piVar1;
          if (*(int *)(param_1 + 0x184) == 0) {
            *(int **)(param_1 + 0x184) = piVar1;
          }
        }
        else {
          *(unsigned int *)(param_1 + 0x174) = 0;
        }
      }
    }
  }
  if (-1 < (int)lVar4) {
    *(__int64 *)(param_1 + 0x10) = *(__int64 *)(param_1 + 0x10) + 0x14;
    *(int *)(param_1 + 0x140) = *(int *)(param_1 + 0x140) + 1;
  }
LAB_82bd8b18:
  if (0 < *(__int64 *)(param_1 + 0x38)) {
    *(__int64 *)(param_1 + 0x38) = *(__int64 *)(param_1 + 0x38) + -0x14;
  }
  piVar1 = *(int **)(param_1 + 400);
  if ((piVar1 != (int *)0x0) && (*(int *)*piVar1 != 0x103)) {
    iVar3 = *(int *)(param_1 + 400);
    if (iVar3 != 0) {
      if (iVar3 == *(int *)(param_1 + 0x194)) {
        *(unsigned int *)(param_1 + 0x194) = 0;
      }
      *(int *)(param_1 + 400) = *(int *)(iVar3 + 4);
      *(unsigned int *)(iVar3 + 4) = 0;
    }
    *(int *)(*piVar1 + 8) = *(int *)(*piVar1 + 8) + -2;
    *(int *)(*piVar1 + 0xc) = *(int *)(*piVar1 + 0xc) + 2;
    *(unsigned int *)(*piVar1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
    XMemSet(*(unsigned int *)(*piVar1 + 8),0,*(unsigned int *)(*piVar1 + 0xc));
  }
  return 0;
}

