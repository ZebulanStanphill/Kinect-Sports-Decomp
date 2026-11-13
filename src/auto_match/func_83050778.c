extern unsigned int lbl_83264210;


void fn_83050778(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x60) + 0x8c) * 0x50 + lbl_83264210;
  piVar1 = *(int **)(iVar3 + 0x10);
  if (piVar1 == (int *)0x0) {
    return;
  }
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 0) {
      iVar2 = 0;
      *(unsigned int *)(iVar3 + 0x14) = 0;
    }
    else {
      iVar2 = *piVar1;
    }
    *(int *)(iVar3 + 0x10) = iVar2;
    *(int *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) + -1;
  }
  *(int *)(iVar3 + 0x48) = *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0x48);
  return;
}

