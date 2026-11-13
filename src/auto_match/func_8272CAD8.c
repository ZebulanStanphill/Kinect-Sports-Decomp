unsigned char fn_8272CAD8(int param_1)

{
  int iVar1;
  unsigned short uVar2;
  
  if ((*(unsigned short *)(param_1 + 200) >> 5 & 1) != 0) {
    return 1;
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
  if (iVar1 == 0) {
    uVar2 = *(unsigned short *)(*(int *)(param_1 + 0x9c) + 0x50) >> 5;
  }
  else {
    uVar2 = *(unsigned short *)(iVar1 + 0x68) >> 1;
  }
  return -((uVar2 & 1) != 0) & 2;
}

