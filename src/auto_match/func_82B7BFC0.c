extern void fn_82AB7B18(int);

void fn_82B7BFC0(int param_1)
{
  if (*(char *)(*(int *)(param_1 + 0x10) + 0x564) != 0) {
    fn_82AB7B18(*(int *)(param_1 + 4));
  } else {
    fn_82AB7B18(*(int *)(param_1 + 8));
  }
}
