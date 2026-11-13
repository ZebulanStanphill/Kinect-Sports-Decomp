void fn_82DAF400(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x28);
  if ((iVar1 == 0) || (iVar1 == 2)) {
    (*(int (**)())(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8));
  }
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x28);
  if ((iVar1 == 0) || (iVar1 == 3)) {
    (*(int (**)())(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8));
  }
  return;
}

