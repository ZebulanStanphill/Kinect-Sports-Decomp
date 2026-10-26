extern void fn_82F72E58(void *, const char *, int);

typedef struct { int a; unsigned char b; unsigned char c; } S;

S *fn_82F73308(S *p, const char *s)
{
  int n = 0;
  p->b = 0;
  p->a = 0;
  p->c = 0;
  while (s[n] != 0) {
    n++;
  }
  fn_82F72E58(p, s, n);
  return p;
}
