unsigned __int64 fn_8272D0E8(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  
  if ((*(unsigned short *)(param_1 + 200) >> 0xb & 1) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xa0) + 0x114);
    if (iVar2 == 0) {
      uVar1 = *(unsigned short *)(*(int *)(param_1 + 0x9c) + 0x50) >> 3;
    }
    else {
      uVar1 = *(unsigned short *)(iVar2 + 0x68);
    }
    if (((uVar1 & 1) == 0) && ((*(unsigned short *)(param_1 + 200) >> 2 & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}

