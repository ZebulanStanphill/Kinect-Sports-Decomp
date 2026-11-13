int fn_82E08BE0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (*(char *)(param_1 + 8) != '\x01') {
    return 0;
  }
  return iVar1 / 3;
}

