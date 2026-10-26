extern void fn_83049D68(int a, int b, int c);
extern int fn_8307E600(int a, int b, int c, int d);

char fn_83049E78(int param_1, int param_2, int param_3)
{
  int r;
  fn_83049D68(param_1, param_2, param_3);
  r = fn_8307E600(*(int *)(param_1 + 0x28), 0, param_3, param_2);
  return r == 0 ? 1 : 2;
}
