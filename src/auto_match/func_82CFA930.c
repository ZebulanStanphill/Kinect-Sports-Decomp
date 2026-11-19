int fn_82CFA930(int self)

{
  int lVar1;
  
  lVar1 = (*(int (**)())(**(int **)(self + 8) + 0x2c))(*(int **)(self + 8));
  if (lVar1 >= 0) {
    return (*(unsigned int *)(self + 0x10) - *(unsigned int *)(self + 0x14)) + lVar1;
  }
  return -1;
}

