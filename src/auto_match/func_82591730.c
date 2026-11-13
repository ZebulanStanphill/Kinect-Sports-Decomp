unsigned __int64 fn_82591730(int param_1,int param_2,int param_3)

{
  unsigned char uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 4) == 0) {
      return 0;
    }
    *(int *)(*(int *)(param_1 + 4) + 400) = param_3;
    return 1;
  }
  if (param_2 == 1) {
    if (*(int *)(param_1 + 4) != 0) {
      *(int *)(*(int *)(param_1 + 4) + 0x194) = param_3;
    }
  }
  else if (param_2 != 0x13) {
    if (param_2 != 0x14) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      return 0;
    }
    uVar1 = 0;
    goto LAB_82591760;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = 1;
LAB_82591760:
  *(unsigned char *)(iVar2 + param_3 + 0x1a9) = uVar1;
  return 0;
}

