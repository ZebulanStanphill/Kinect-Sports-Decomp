extern unsigned int lbl_8327F678;


void fn_82592238(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (iVar1 == 6) {
    param_2[2] = *(int *)(param_1 + 0x30);
    return;
  }
  if (iVar1 == 0x46) {
    if (param_2[2] != param_1) {
      return;
    }
    iVar1 = 0;
  }
  else {
    if (iVar1 == 0x4b) {
      if (*(int *)(param_1 + 0x50) != 0) {
        return;
      }
      for (iVar1 = *(int *)(param_1 + 0x30) + 0x98; *(int *)(iVar1 + 4) != 0;
          iVar1 = *(int *)(iVar1 + 4)) {
      }
      *(int **)(iVar1 + 4) = (int *)(param_1 + 0x50);
      *(int *)(param_1 + 0x50) = iVar1;
      *(unsigned int *)(param_1 + 0x54) = 0;
      return;
    }
    if (iVar1 == 0x52) {
      return;
    }
    if (iVar1 == 0x53) {
      if (lbl_8327F678 == param_2[2]) {
        return;
      }
      lbl_8327F678 = param_2[2];
      return;
    }
    if (iVar1 != 0x5a) {
      return;
    }
    iVar1 = param_2[2];
  }
  *(int *)(param_1 + 0x30) = iVar1;
  return;
}

