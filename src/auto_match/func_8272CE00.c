unsigned int fn_8272CE00(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if (iVar2 == 0) {
    uVar1 = *(unsigned short *)(*(int *)(param_1 + 0x9c) + 0x50) >> 3;
  }
  else {
    uVar1 = *(unsigned short *)(iVar2 + 0x68);
  }
  if ((uVar1 & 1) != 0) {
    if (iVar2 == 0) {
      uVar1 = *(unsigned short *)(*(int *)(param_1 + 0x9c) + 0x50) >> 5;
    }
    else {
      uVar1 = *(unsigned short *)(iVar2 + 0x68) >> 1;
    }
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  if (iVar2 == 0) {
    return 0;
  }
  uVar4 = *(unsigned int *)(*(int *)(iVar2 + 8) + 0x20);
  uVar3 = *(unsigned int *)(*(int *)(iVar2 + 8) + 0x1c);
  if (uVar4 < uVar3) {
    uVar4 = uVar3;
  }
  return uVar4;
}

