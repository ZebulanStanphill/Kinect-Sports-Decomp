extern void fn_82CE08D0(int h);

void fn_82D058E8(int param_1)
{
  if (*(int *)(param_1 + 0x20) != -1) {
    fn_82CE08D0(*(int *)(param_1 + 0x20));
    *(int *)(param_1 + 0x20) = -1;
  }
}
