extern void fn_82CE08D0(int h);

void fn_82D058E8(int self)
{
  if (*(int *)(self + 0x20) != -1) {
    fn_82CE08D0(*(int *)(self + 0x20));
    *(int *)(self + 0x20) = -1;
  }
}
