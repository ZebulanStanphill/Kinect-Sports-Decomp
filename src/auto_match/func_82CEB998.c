unsigned __int64 fn_82CEB998(int param_1,int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_3 != 0) {
    if (param_3 == 1) {
      iVar2 = *(int *)(param_1 + 0xc) + param_2;
    }
    else {
      iVar2 = -1;
      if (param_3 < 3) {
        iVar2 = *(int *)(param_1 + 0x10) - param_2;
      }
    }
  }
  uVar1 = 0;
  if (iVar2 < 0) {
    iVar2 = 0;
    uVar1 = 1;
  }
  else if (*(int *)(param_1 + 0x10) < iVar2) {
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x10);
    return 1;
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return uVar1;
}

