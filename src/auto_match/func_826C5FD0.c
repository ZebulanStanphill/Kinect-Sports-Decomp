unsigned char fn_826C5FD0(int *param_1,int *param_2)

{
  int iVar1;
  unsigned int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (*(int *)(iVar1 + 0x168) == iVar2) {
    return 1;
  }
  if (*(int *)(iVar1 + 0x16c) == iVar2) {
    return 2;
  }
  if (*(int *)(iVar1 + 0x170) == iVar2) {
    return 4;
  }
  if (*(int *)(iVar1 + 0x174) == iVar2) {
    return 8;
  }
  if (*(int *)(iVar1 + 0x178) == iVar2) {
    return 0x10;
  }
  if (*(int *)(iVar1 + 0x17c) == iVar2) {
    return 0x20;
  }
  return *(unsigned *)(iVar1 + 0x180) == iVar2 ? 0x40 : 0;
}

