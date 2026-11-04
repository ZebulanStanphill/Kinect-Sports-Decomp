extern char *fn_8223FA88(void *, void *, const char *, int);
extern int fn_82F64020(char *, unsigned, const char *, int);
extern void fn_8223F810(void *, void *, void *, void *, void *, char *, int);

void *fn_8223FB30(void *a, void *b, void *c, int *d, void *e, int f)
{
  char fmt[16];
  char buf[64];
  int n;
  n = fn_82F64020(buf, 0x40, fn_8223FA88(b, fmt, "ld", d[5]), f);
  fn_8223F810(a, b, c, d, e, buf, n);
  return a;
}
