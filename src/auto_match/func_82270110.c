extern int fn_82270B70();


void fn_82270110(unsigned int param_1)

{
  unsigned int *piVar1;
  unsigned int iVar2;
  int iVar3;
  
  iVar3 = fn_82270B70();
  piVar1 = *(int **)(iVar3 + 0x5c);
  for (iVar3 = *piVar1; iVar3 != piVar1[1]; iVar3 = iVar3 + 0x30) {
    iVar2 = *(int *)(iVar3 + 0x24);
    if (((iVar2 != 0) && (*(int *)(iVar2 + 0x54c) == 0)) && (*(int *)(iVar2 + 0x548) == 0)) {
      *(unsigned int *)(iVar2 + 0x10c) = param_1;
    }
  }
  return;
}

