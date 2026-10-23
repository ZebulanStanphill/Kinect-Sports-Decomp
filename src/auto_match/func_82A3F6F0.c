extern void fn_82BFE3B0(int h);
extern int fn_82BFE530(int h, void *out);

void fn_82A3F6F0(int *param_1)
{
  unsigned char buf[8];

  if (param_1[1] != 0) {
    param_1[1] = 0;
    while (fn_82BFE530(param_1[0], buf) >= 0) {
    }
    fn_82BFE3B0(param_1[0]);
    param_1[0] = 0;
  }
}
