void fn_8242D888(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x174);
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) == -1) {
    return;
  }
  if (*(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) * 4 +
              *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c4)) == 0) {
    return;
  }
  if (*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x5c) + 0x1d4) * 4 +
                    *(int *)(*(int *)(iVar1 + 0x5c) + 0x1c4));
  }
  *(unsigned int *)(*(int *)(iVar1 + 0x40) + 0x1d0) = 1;
  return;
}

