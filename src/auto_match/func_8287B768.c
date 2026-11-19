int fn_8287B768(int self)
{
  if (*(int **)(self + 0x68) != 0 &&
      (*(int (**)())(**(int **)(self + 0x68) + 4))(*(int **)(self + 0x68)) < 0) {
    return 0xa0250000;
  }
  return 0x20250000;
}
