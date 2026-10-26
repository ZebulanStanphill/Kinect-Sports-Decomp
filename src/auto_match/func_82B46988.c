extern int *fn_82AC6560(void *, int, int);
extern void fn_82932B38(int *);

int *fn_82B46988(void *a)
{
  int *p;
  int v;
  int buf[16];

  p = fn_82AC6560(a, 0x34, 0x10);
  fn_82932B38(buf);
  v = buf[0];
  p[1] = 0xc;
  p[0] = v;
  return p;
}
