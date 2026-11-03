extern int fn_82230218(int, int, int, unsigned int);
extern int fn_822315A0(unsigned int);
extern int fn_822C7578(int, int);

void fn_822D4F18(int param_1, unsigned int *param_2, unsigned int *param_3)
{
  int u;
  u = fn_822C7578(*param_2 + 0x40, param_1);
  fn_82230218(u, param_1, 0, 0xffffffff);
  u = fn_822C7578(*param_3 + 0x40, param_1);
  fn_82230218(u, param_1, 0, 0xffffffff);
  if (param_2[1] != 0) fn_822315A0(param_2[1]);
  if (param_3[1] != 0) fn_822315A0(param_3[1]);
}
