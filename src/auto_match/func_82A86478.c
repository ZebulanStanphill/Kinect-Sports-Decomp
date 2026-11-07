extern int fn_82A93C18(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8,
                       int a9, void *a10, void *a11, void *a12);
extern int fn_82A94048(void *buf, int a2, unsigned int n);

void fn_82A86478(int param_1, int param_2, int param_3, unsigned int param_4)
{
  unsigned char buf[64];
  int x;
  int y;

  if (param_4 <= 1) {
    param_4 = 1;
  }
  fn_82A93C18(param_2, param_3, 0, 0, param_1, 0, 0, 0, 0, buf, &x, &y);
  fn_82A94048(buf, 0, param_4);
}
