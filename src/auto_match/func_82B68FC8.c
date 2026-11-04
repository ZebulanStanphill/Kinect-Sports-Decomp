extern void fn_82B68DA8(unsigned *, unsigned *, unsigned *, unsigned *);
void fn_82B68FC8(unsigned *a, unsigned *b, unsigned *c, unsigned *d)
{
  unsigned t[16];
  unsigned *p = t;
  int i;
  for (i = 0; i < 4; i++) *p++ = a[i * 4];
  for (i = 0; i < 4; i++) *p++ = b[i * 4];
  for (i = 0; i < 4; i++) *p++ = c[i * 4];
  for (i = 0; i < 4; i++) *p++ = d[i * 4];
  fn_82B68DA8(t, t + 4, t + 8, t + 12);
  p = t;
  for (i = 0; i < 4; i++) a[i * 4] = *p++;
  for (i = 0; i < 4; i++) b[i * 4] = *p++;
  for (i = 0; i < 4; i++) c[i * 4] = *p++;
  for (i = 0; i < 4; i++) d[i * 4] = *p++;
}
