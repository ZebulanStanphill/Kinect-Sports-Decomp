extern void fn_826BEF40(int);
extern void fn_826820F0(int);

void fn_82740240(int param_1)
{
  fn_826BEF40(param_1);
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_826820F0(*(int *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_826820F0(*(int *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_826820F0(*(int *)(param_1 + 0x40));
  }
}
