unsigned __int64 fn_82BE5D08(int param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  if (((*(int *)(param_1 + 0x1c) != 0) && (0 < *(int *)(param_1 + 0x28))) &&
     (iVar1 = *(int *)(param_1 + 0x20), 7 < *(int *)(param_1 + 0x24) - iVar1)) {
    uVar2 = *(unsigned __int64 *)(iVar1 + *(int *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x20) = iVar1 + 8;
    return uVar2;
  }
  return 0;
}

