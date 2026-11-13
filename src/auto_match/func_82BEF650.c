unsigned __int64 fn_82BEF650(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (iVar1 == 0) {
    *(unsigned int *)(param_1 + 4) = 0x197;
    if (*(int *)(param_1 + 8) != 0x197) {
      *(unsigned int *)(param_1 + 8) = 0x197;
    }
    return 0x197;
  }
  *(int *)(param_1 + 0x38) = param_2;
  if (param_2 == 1) {
    iVar2 = 0x20;
  }
  else {
    if (param_2 != 2) {
      *(unsigned int *)(iVar1 + 0xe0) = 0;
      return 0x197;
    }
    iVar2 = 0x80;
  }
  *(int *)(iVar1 + 0xe0) = iVar1 + iVar2;
  iVar1 = *(int *)(*(int *)(param_1 + 0x3c) + 0xe0);
  *(short *)(iVar1 + 0x58) = *(short *)(iVar1 + 0x58) + 1;
  return 0;
}

