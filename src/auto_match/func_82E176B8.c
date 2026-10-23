extern int fn_82CEB1A8(int fmt);
extern int fn_82E17878(char *p, int fmt, int arg);

int fn_82E176B8(char *p, int count, int fmt, int arg)
{
  int stride;
  int i;

  stride = fn_82CEB1A8(fmt);
  for (i = 0; i < count; i++) {
    if (fn_82E17878(p + i * stride, fmt, arg) == 1) {
      return 1;
    }
  }
  return 0;
}
