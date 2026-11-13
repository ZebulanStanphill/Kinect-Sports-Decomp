unsigned int fn_824A5DE0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x3c);
  if (*(int *)(iVar2 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = *(int *)(iVar2 + 0x14) + -1;
    if ((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 0xc)) / 0x60 <= iVar1) {
      iVar1 = iVar1 - (*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x60;
    }
    iVar2 = iVar1 * 0x60 + *(int *)(iVar2 + 0xc);
  }
  if (iVar2 != 0) {
    return *(unsigned int *)(iVar2 + 0x54);
  }
  return 0;
}

