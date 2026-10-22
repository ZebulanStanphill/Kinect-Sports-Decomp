typedef unsigned __int64 U64;
extern int fn_82F72E58();

typedef struct {
  int a;
  unsigned char b;
  unsigned char c;
} Str;

Str *fn_82F73108(Str *s, U64 n)
{
  char buf[21];
  char *p;

  s->b = 0;
  p = buf + 20;
  s->a = 0;
  s->c = 0;
  *p = 0;
  do {
    *--p = (char)(n % 10) + '0';
    n /= 10;
  } while (n != 0);
  fn_82F72E58(s, p, buf + 20 - p);
  return s;
}
