extern void fn_827C1650(int, int);
extern void fn_827C8EE0(int, int, int);
extern void fn_827C90F0(int);

void fn_827C17D0(int param_1)
{
  int i;
  for (i = 1; i >= 0; i--) {
    fn_827C1650(param_1, i);
  }
  fn_827C8EE0(param_1, *(int *)(param_1 + 4), 0x54);
  *(int *)(param_1 + 4) = 0;
  fn_827C90F0(param_1);
}
