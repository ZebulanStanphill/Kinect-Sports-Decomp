typedef int (*code)();

extern unsigned char fn_82237E40(int *p);
extern void fn_82237BF8(int *p, int *list);

static __forceinline unsigned char isReady_82237B78(int *p)
{
  return (p[3] == 0 && fn_82237E40(p) != 0) ? 1 : 0;
}

void fn_82237B78(int *param_1)
{
  int *p;

  p = (int *)*param_1;
  if (p == 0) {
    return;
  }
  for (;;) {
    if (isReady_82237B78(p)) {
      fn_82237BF8(p, param_1);
      return;
    }
    p = (int *)*p;
  }
}
