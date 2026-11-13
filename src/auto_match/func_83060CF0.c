void fn_83060CF0(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
  }
  *(int *)(param_1 + 4) = iVar1;
  return;
}

