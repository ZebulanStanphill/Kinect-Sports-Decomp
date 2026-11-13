unsigned __int64 fn_8242CE98(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x174);
  if ((*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) == -1) ||
     (*(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) * 4 +
              *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c4)) == 0)) {
    iVar1 = 0;
  }
  else {
    if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) == -1) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) * 4 +
                      *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c4));
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x40) + 0x114);
  }
  if (iVar1 == 1) {
    return 0xffffffff821b8d14;
  }
  if (iVar1 == 2) {
    return 0xffffffff821b8d1c;
  }
  if (iVar1 != 3) {
    if (iVar1 == 4) {
      return 0xffffffff821b8d0c;
    }
    if (iVar1 != 5) {
      return 0xffffffff82196582;
    }
    return 0xffffffff821b8d04;
  }
  return 0xffffffff821b8d24;
}

