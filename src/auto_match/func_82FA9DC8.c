void fn_82FA9DC8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x34);
  iVar3 = iVar1;
  if (iVar1 < iVar2) {
    iVar3 = iVar2;
  }
  piVar5 = *(int **)(param_1 + 0x14);
  for (piVar4 = piVar5; piVar4 != *(int **)(param_1 + 0x18); piVar4 = piVar4 + 3) {
    if (iVar3 < *piVar4) {
      iVar3 = *piVar4;
    }
  }
  *(int *)(param_1 + 8) = iVar3;
  if ((param_2 <= iVar1) && (iVar1 < iVar3)) {
    *(int *)(param_1 + 8) = iVar1;
  }
  if ((param_2 <= iVar2) && (iVar2 < *(int *)(param_1 + 8))) {
    *(int *)(param_1 + 8) = iVar2;
  }
  if (piVar5 != *(int **)(param_1 + 0x18)) {
    do {
      if (*piVar5 < *(int *)(param_1 + 8)) {
        *(int *)(param_1 + 8) = *piVar5;
      }
      piVar5 = piVar5 + 3;
    } while (piVar5 != *(int **)(param_1 + 0x18));
  }
  return;
}

