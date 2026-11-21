void fn_82F59160(int param_1)

{
  if (*(char *)(param_1 + 4) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x24) == 1) {
    fn_82F5E4D8(param_1 + 0x28);
    return;
  }
  if (*(int *)(param_1 + 0x24) != 2) {
    return;
  }
  fn_82F5DDA8(param_1 + 0x9c,param_1 + 0x28);
  return;
}
