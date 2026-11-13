void fn_82EFE758(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2a4);
  if (*(int *)(param_1 + 0x868) == -1) {
    if ((iVar1 < 0x13) && (*(int *)(param_1 + 0x1f58) == 0)) {
      if (iVar1 < 0xb) {
        if (2 < iVar1) {
          *(int *)(param_1 + 0x2a4) = iVar1 + 1;
          return;
        }
        goto LAB_82efe7b8;
      }
      iVar1 = iVar1 + 2;
    }
    else {
      iVar1 = iVar1 + 3;
    }
  }
  else {
    iVar1 = *(int *)(param_1 + 0x868) + iVar1;
  }
  if (0x1f < iVar1) {
    iVar1 = 0x1f;
  }
LAB_82efe7b8:
  *(int *)(param_1 + 0x2a4) = iVar1;
  return;
}

