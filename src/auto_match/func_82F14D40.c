void fn_82F14D40(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0xc) <= 0) {
    return;
  }
  piVar3 = (int *)(param_1 + 0x28);
  do {
    iVar1 = *piVar3;
    if ((*(unsigned int *)(iVar1 + 0x34) != 0) || (*(int *)(*(int *)(iVar1 + 0x48) + 8) != 0)) {
      *(unsigned int *)(iVar1 + 0x40) = *(unsigned int *)(iVar1 + 0x28);
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 1;
  } while (iVar2 < *(int *)(param_1 + 0xc));
  return;
}

