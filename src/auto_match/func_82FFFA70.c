void fn_82FFFA70(int param_1,unsigned int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = (param_2 % 0xc1) * 4;
  iVar1 = *(int *)(iVar2 + param_1);
  iVar4 = 0;
  if (iVar1 == 0) {
    return;
  }
  do {
    iVar3 = iVar1;
    if (*(unsigned int *)(iVar3 + 0xc) == param_2) {
      if (iVar4 != 0) {
        *(unsigned int *)(iVar4 + 8) = *(unsigned int *)(iVar3 + 8);
        *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + -1;
        return;
      }
      *(unsigned int *)(iVar2 + param_1) = *(unsigned int *)(iVar3 + 8);
      *(int *)(param_1 + 0x304) = *(int *)(param_1 + 0x304) + -1;
      return;
    }
    iVar1 = *(int *)(iVar3 + 8);
    iVar4 = iVar3;
  } while (*(int *)(iVar3 + 8) != 0);
  return;
}

