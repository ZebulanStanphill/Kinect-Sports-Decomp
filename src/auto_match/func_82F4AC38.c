extern int fn_82F49EA0();
extern int fn_82F4A850();

void fn_82F4AC38(int param_1, int param_2, int param_3, int param_4,
                 int param_5, int param_6, int param_7, int param_8)
{
  int n;
  unsigned char buf[1024];

  n = 1 << (param_7 + 3);
  fn_82F49EA0(param_1, param_2, buf, 0x20, n, param_8, 5);
  fn_82F4A850(buf, 0x20, param_3, param_4, n, param_8);
}
