void fn_829B76A0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1a8);
  if (*(int *)(param_1 + 0x54) != 0) {
    (*(int (**)())(*(int *)(param_1 + 0x1d0) + 8))();
  }
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  return;
}

