extern void *fn_822C7578(unsigned, void *);
extern void *fn_82230218(void *, void *, unsigned, unsigned);
extern void fn_822315A0(unsigned);

void fn_8233D150(void *a, void *b, unsigned *c, unsigned *d)
{
  unsigned n1 = -1;
  void *t;
  t = fn_822C7578(*c + 0x40, a);
  fn_82230218(t, b, 0, n1);
  t = fn_822C7578(*d + 0x40, a);
  fn_82230218(t, b, 0, n1);
  if (c[1] != 0) fn_822315A0(c[1]);
  if (d[1] != 0) fn_822315A0(d[1]);
}
