extern void fn_826BE840(int);
extern void fn_82681F88(int);

void fn_82740138(int param_1)
{
  fn_826BE840(param_1);
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_82681F88(*(int *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_82681F88(*(int *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_82681F88(*(int *)(param_1 + 0x40));
  }
}
