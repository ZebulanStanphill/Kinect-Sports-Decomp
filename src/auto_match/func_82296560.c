typedef struct { int a; int b; } P8_82296560;
extern P8_82296560 *fn_822964C0(P8_82296560 *, void *, P8_82296560, const char *, unsigned);
extern P8_82296560 *fn_82296328(P8_82296560 *, P8_82296560, unsigned short, unsigned);
extern char *memchr(const char *, int, unsigned);
P8_82296560 *fn_82296560(P8_82296560 *out, void *os, P8_82296560 state, const char *p, unsigned len, unsigned short sep)
{
  P8_82296560 t1;
  P8_82296560 t2;
  P8_82296560 *r;
  int a, b;
  for (;;) {
    char *q = memchr(p, 0, len);
    unsigned n;
    if (q != 0) n = q - p; else n = len;
    r = fn_822964C0(&t1, os, state, p, n);
    state = *r;
    len -= n;
    p += n;
    if (len == 0) break;
    if (sep != 0) {
      r = fn_82296328(&t2, state, sep, 1);
      state = *r;
    }
    p++;
    len--;
  }
  a = r->a; b = r->b; out->b = b; out->a = a;
  return out;
}
