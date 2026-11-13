unsigned __int64 fn_8281C5B0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0xc) + 0x30);
    *(int *)(param_1 + 0x1c) = iVar2;
  }
  else {
    if (*(int *)(param_1 + 0x24) != 0) {
      return 1;
    }
    iVar2 = *(int *)(param_1 + 0x1c) + 0x21;
    *(int *)(param_1 + 0x1c) = iVar2;
    if ((int)(unsigned int)*(unsigned char *)(*(int *)(*(int *)(param_1 + 0xc) + 0x1c) + 0x51) <=
        (iVar2 - *(int *)(*(int *)(param_1 + 0xc) + 0x30)) / 0x21) {
      return 0;
    }
  }
  uVar1 = *(unsigned int *)(iVar2 + 9);
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0x24) = uVar1;
  return 1;
}

