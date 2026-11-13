void fn_8226A680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = 0;
  piVar4 = *(int **)(iVar1 + 700);
  iVar2 = *(int *)(iVar1 + 0x390) + 1;
  *(int *)(iVar1 + 0x390) = iVar2;
  for (; (piVar4 != (int *)0x0 && (*piVar4 != 0));
      piVar4 = (int *)(-(unsigned int)(piVar4[1] != 0) & (unsigned int)(piVar4 + 1))) {
    iVar3 = iVar3 + 1;
  }
  if (iVar2 == iVar3) {
    *(unsigned int *)(iVar1 + 0x390) = 0;
  }
  *(unsigned int *)(iVar1 + 0x2b8) = 1;
  return;
}

