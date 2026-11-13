void fn_82A77490(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xb0) == 0) {
    iVar1 = *(int *)(param_1 + 0xb8);
    if (iVar1 == 0) {
      return;
    }
  }
  else if (*(int **)(param_1 + 0xac) == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = **(int **)(param_1 + 0xac);
  }
  *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(iVar1 + 8) | 0x40;
  return;
}

