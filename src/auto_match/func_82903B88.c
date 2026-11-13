int fn_82903B88(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 1) {
    iVar2 = fn_82903B88(*(unsigned int *)(param_1 + 8));
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar1 = *(unsigned int *)(param_1 + 0xc);
  }
  else {
    if (iVar2 == 3) {
      return param_1 + 0x10;
    }
    if (iVar2 == 6) {
      if (*(int *)(param_1 + 0x14) == 0) {
        return 0;
      }
      return *(int *)(param_1 + 0x14) + 0x10;
    }
    if (iVar2 == 0xb) {
      return 0;
    }
    if (iVar2 != 0xc) {
      if (iVar2 != 0xe) {
        return 0;
      }
      return param_1 + 0x30;
    }
    iVar2 = fn_82903B88(*(unsigned int *)(param_1 + 0x14));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = fn_82903B88(*(unsigned int *)(param_1 + 0x18));
    if (iVar2 != 0) {
      return iVar2;
    }
    iVar2 = fn_82903B88(*(unsigned int *)(param_1 + 0x1c));
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar1 = *(unsigned int *)(param_1 + 0x20);
  }
  iVar2 = fn_82903B88(uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  return iVar2;
}

