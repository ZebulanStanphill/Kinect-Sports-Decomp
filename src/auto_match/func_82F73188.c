extern int fn_82F72E58();

typedef struct {
  int a;
  unsigned char b;
  unsigned char c;
} Str;

Str *fn_82F73188(Str *s, __int64 n)
{
  char buf[22];
  char *p;
  unsigned char neg;

  s->b = 0;
  p = buf + 21;
  s->a = 0;
  s->c = 0;
  *p = 0;
  neg = 0;
  if (n < 0) {
    neg = 1;
    n = -n;
  }
  do {
    *--p = (char)((unsigned __int64)n % 10) + '0';
    n = (unsigned __int64)n / 10;
  } while (n != 0);
  if (neg)
    *--p = '-';
  fn_82F72E58(s, p, buf + 21 - p);
  return s;
}
