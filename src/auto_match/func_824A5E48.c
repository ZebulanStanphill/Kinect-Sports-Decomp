unsigned __int64 fn_824A5E48(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar3 + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar3 + 0x14) + -1;
    if ((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 0xc)) / 0x60 <= iVar1) {
      iVar1 = iVar1 - (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x60;
    }
    iVar1 = iVar1 * 0x60 + *(int *)(iVar3 + 0xc);
  }
  if (*(unsigned int *)(iVar3 + 0x14) < 2) {
    iVar3 = 0;
  }
  else {
    iVar2 = *(unsigned int *)(iVar3 + 0x14) - 2;
    if ((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 0xc)) / 0x60 <= iVar2) {
      iVar2 = iVar2 - (*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x60;
    }
    iVar3 = iVar2 * 0x60 + *(int *)(iVar3 + 0xc);
  }
  if ((((iVar1 != 0) && (iVar3 != 0)) && (*(int *)(iVar1 + 0x54) != 0)) &&
     (*(int *)(iVar3 + 0x54) == 0)) {
    return 1;
  }
  return 0;
}

