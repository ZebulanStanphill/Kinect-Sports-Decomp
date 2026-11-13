void fn_82E8D780(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xaf0);
  if (*(int *)(param_1 + 4) == 8) {
    if ((iVar1 != 0) && (iVar1 != 4)) {
      *(unsigned int *)(param_1 + 0x618) = *(unsigned int *)(param_1 + 0x618) ^ 1;
      return;
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return;
      }
      if ((*(int *)(param_1 + 0x4f20) != 0) && (*(int *)(param_1 + 0x4f20) != 4)) {
        return;
      }
      *(unsigned int *)(param_1 + 0x618) = 1;
      return;
    }
    if ((*(int *)(param_1 + 0x4f20) != 0) && (*(int *)(param_1 + 0x4f20) != 4)) {
      if (*(int *)(param_1 + 0x1fec) != 0) {
        return;
      }
      *(unsigned int *)(param_1 + 0x618) = *(unsigned int *)(param_1 + 0x4b14) & (*(unsigned int *)(param_1 + 0x618) ^ 1);
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x618) = 0;
  return;
}

