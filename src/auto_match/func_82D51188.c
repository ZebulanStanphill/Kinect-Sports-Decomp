int fn_82D51188(int self, int param_2)
{
  int iVar1;

  iVar1 = (*(int (**)())(**(int **)(self + 0x18) + 0x18))(*(int **)(self + 0x18), param_2, 0x100);
  if (iVar1 >= 0 && iVar1 <= 0x100) {
    *(int *)(self + 0x1c) = iVar1;
    return 0x30;
  }
  return -1;
}
