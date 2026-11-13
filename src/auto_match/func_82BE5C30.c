unsigned char fn_82BE5C30(int param_1)

{
  unsigned char uVar1;
  int iVar2;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
     (iVar2 = *(int *)(param_1 + 0x20), 0 < *(int *)(param_1 + 0x24) - iVar2)) {
    uVar1 = *(unsigned char *)(iVar2 + *(int *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = iVar2 + 1;
    return uVar1;
  }
  return 0;
}

