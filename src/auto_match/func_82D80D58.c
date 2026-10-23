extern void fn_82CEFB20(int p);
extern void fn_82CEFB30(int p);

void fn_82D80D58(int param_1, int param_2)
{
  if (param_2 == 0) {
    fn_82CEFB30(param_1 + 0xa8);
    fn_82CEFB30(*(int *)(param_1 + 0x58) + 8);
  } else {
    fn_82CEFB20(param_1 + 0xa8);
    fn_82CEFB20(*(int *)(param_1 + 0x58) + 8);
  }
}
