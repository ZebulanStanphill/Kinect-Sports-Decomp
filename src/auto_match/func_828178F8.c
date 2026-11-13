void fn_828178F8(int param_1,int param_2)

{
  int *piVar1;
  unsigned int *puVar2;
  int iVar3;
  
  iVar3 = 0;
  if (*(int *)(param_1 + 0x10) < 1) {
    return;
  }
  puVar2 = (unsigned int *)(param_1 + 0x14);
  do {
    piVar1 = puVar2 + 1;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 2;
    *(unsigned int *)(*piVar1 + param_2) = *puVar2;
  } while (iVar3 < *(int *)(param_1 + 0x10));
  return;
}

