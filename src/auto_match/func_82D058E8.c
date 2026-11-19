extern void closesocket(int h);

void fn_82D058E8(int self)
{
  if (*(int *)(self + 0x20) != -1) {
    closesocket(*(int *)(self + 0x20));
    *(int *)(self + 0x20) = -1;
  }
}
