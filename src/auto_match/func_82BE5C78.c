unsigned short fn_82BE5C78(int param_1)

{
  unsigned short uVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
     (iVar2 = *(int *)(param_1 + 0x20), 1 < *(int *)(param_1 + 0x24) - iVar2)) {
    uVar1 = *(unsigned short *)(iVar2 + *(int *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = iVar2 + 2;
    return uVar1;
  }
  return 0;
}

