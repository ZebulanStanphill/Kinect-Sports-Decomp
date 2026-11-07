extern void fn_827F7268(int p);
extern void fn_827F87A0(int p, int a);
extern void fn_827F8B30(int p, int a);
extern void fn_827F9090(int p, int a);

void fn_827F93E8(int param_1)
{
  if (*(unsigned int *)(param_1 + 0x1c) != 0) {
    fn_827F9090(param_1, 1);
  }
  else if (*(unsigned int *)(param_1 + 0x20) != 0) {
    fn_827F8B30(param_1, 1);
  }
  else {
    fn_827F87A0(param_1, 1);
  }
  fn_827F7268(param_1);
}
