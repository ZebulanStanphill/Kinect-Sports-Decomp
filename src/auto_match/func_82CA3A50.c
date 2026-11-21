void fn_82CA3A50(int param_1)

{
  if (*(int *)(param_1 + 0x3d10) != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      fn_82CA2BA8();
      return;
    }
    fn_82CA36D0();
    return;
  }
  if (*(int *)(param_1 + 0xf8c) != 0) {
    fn_82CA3548();
    return;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    fn_82CA2BA8();
    return;
  }
  fn_82CA32C8();
  return;
}
