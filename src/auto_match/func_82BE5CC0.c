unsigned int fn_82BE5CC0(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
     (iVar1 = *(int *)(param_1 + 0x20), 3 < *(int *)(param_1 + 0x24) - iVar1)) {
    uVar2 = *(unsigned int *)(iVar1 + *(int *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = iVar1 + 4;
    return uVar2;
  }
  return 0;
}

