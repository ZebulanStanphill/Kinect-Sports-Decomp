unsigned int fn_82FF65D0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  
  for (piVar2 = *(int **)(param_1 + 4); (piVar2 != *(int **)(param_1 + 8) && (*piVar2 != param_2));
      piVar2 = piVar2 + 2) {
  }
  iVar1 = *(int *)(-(unsigned int)(*(int **)(param_1 + 8) != piVar2) & (unsigned int)(piVar2 + 1));
  piVar2 = *(int **)(iVar1 + 0x14);
  for (piVar3 = *(int **)(iVar1 + 0x10); (piVar3 != piVar2 && (*piVar3 != param_3));
      piVar3 = piVar3 + 4) {
  }
  puVar4 = (unsigned int *)(-(unsigned int)(piVar2 != piVar3) & (unsigned int)(piVar3 + 1));
  if (puVar4 == (unsigned int *)0x0) {
    return 0;
  }
  return *puVar4;
}

