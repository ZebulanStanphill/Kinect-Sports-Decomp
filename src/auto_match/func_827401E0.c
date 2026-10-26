extern void fn_826BEDE8(int);
extern void fn_826824B0(int);

void fn_827401E0(int param_1)
{
  fn_826BEDE8(param_1);
  if (*(int *)(param_1 + 0x38) != 0) {
    fn_826824B0(*(int *)(param_1 + 0x38));
  }
  if (*(int *)(param_1 + 0x3c) != 0) {
    fn_826824B0(*(int *)(param_1 + 0x3c));
  }
  if (*(int *)(param_1 + 0x40) != 0) {
    fn_826824B0(*(int *)(param_1 + 0x40));
  }
}
