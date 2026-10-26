extern void fn_82FB4CB8(int);
extern void fn_82FB5D80(int, unsigned int);

void fn_82FB6060(int param_1)
{
  if (*(unsigned int *)(param_1 + 0x50) != 0) {
    fn_82FB5D80(param_1, *(unsigned int *)(param_1 + 0x50));
  }
  fn_82FB4CB8(param_1);
}
