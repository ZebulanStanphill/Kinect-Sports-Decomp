unsigned int fn_83007190(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  unsigned int *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    for (piVar2 = *(int **)(iVar1 + 0x24);
        (piVar2 != *(int **)(iVar1 + 0x28) && (*piVar2 != param_2)); piVar2 = piVar2 + 4) {
    }
    puVar3 = (unsigned int *)(-(unsigned int)(*(int **)(iVar1 + 0x28) != piVar2) & (unsigned int)(piVar2 + 1));
    if (puVar3 != (unsigned int *)0x0) {
      return *puVar3;
    }
  }
  return 0;
}

