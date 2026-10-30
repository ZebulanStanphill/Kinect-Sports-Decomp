typedef struct { char *s; int len; unsigned cap; } Str_82D04F70;
typedef struct { int pad[3]; void *alloc; } Ctx_82D04F70;
extern Ctx_82D04F70 *fn_82CE5410();
extern int fn_82CE6310(void *, void *, int, int);
extern int fn_82CF68D0(char *, const char *, int);
extern int fn_82CFBE40(const char *);

void fn_82D04F70(Str_82D04F70 *p, const char *src, int n)
{
  int base, end, newlen, cap;
  void *a;
  if (n < 0) {
    n = fn_82CFBE40(src);
  }
  base = p->len - 1;
  end = base + n;
  newlen = end + 1;
  a = fn_82CE5410()->alloc;
  cap = p->cap & 0x3fffffff;
  if (cap < newlen) {
    int g = cap << 1;
    fn_82CE6310(a, p, newlen < g ? g : newlen, 1);
  }
  p->len = newlen;
  p->s[end] = 0;
  fn_82CF68D0(p->s + base, src, n);
}
