extern void fn_8269A5F8(int p);
extern void fn_82758568(int p);

void fn_826C83B8(int param_1)
{
  if (*(int *)(param_1 + 0x1b8) != 0) {
    fn_82758568(*(int *)(param_1 + 0x1b8));
  }
  fn_8269A5F8(param_1);
  *(unsigned int *)(*(int *)(param_1 + 0xa0) + 0xb00) |= 0x400;
}
