extern int memmove();


void fn_8239A928(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar1 = *(int **)(param_1 + 0x1d8);
  for (piVar4 = *(int **)(param_1 + 0x1d4); piVar4 != piVar1; piVar4 = piVar4 + 1) {
    for (piVar3 = *(int **)(param_1 + 0x1b4);
        (piVar3 != *(int **)(param_1 + 0x1b8) && (*piVar3 != *piVar4)); piVar3 = piVar3 + 1) {
    }
    memmove(piVar3,piVar3 + 1,(*(int *)(param_1 + 0x1b8) - (int)(piVar3 + 1) >> 2) << 2);
    *(int *)(param_1 + 0x1b8) = *(int *)(param_1 + 0x1b8) + -4;
  }
  iVar2 = *(int *)(param_1 + 0x1d4);
  if (iVar2 != *(int *)(param_1 + 0x1d8)) {
    memmove(iVar2,*(int *)(param_1 + 0x1d8),0);
    *(int *)(param_1 + 0x1d8) = iVar2;
  }
  return;
}

