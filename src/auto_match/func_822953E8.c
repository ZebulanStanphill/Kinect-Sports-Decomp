extern char *fn_82296010(void *, const char *, int);
extern int fn_82F64020(char *, unsigned, const char *, int);
extern void fn_822960B0(void *, void *, void *, void *, void *, char *, int);

void *fn_822953E8(void *a, void *b, void *c, int *d, void *e, int f)
{
  char fmt[16];
  char buf[64];
  int n;
  n = fn_82F64020(buf, 0x40, fn_82296010(fmt, "ld", d[5]), f);
  fn_822960B0(a, b, c, d, e, buf, n);
  return a;
}
