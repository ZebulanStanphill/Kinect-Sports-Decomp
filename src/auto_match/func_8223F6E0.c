typedef struct { int a; int b; } P8_8223F6E0;
extern P8_8223F6E0 *fn_8223F670(P8_8223F6E0 *, void *, P8_8223F6E0, const char *, unsigned);
extern P8_8223F6E0 *fn_8223F7A8(P8_8223F6E0 *, void *, P8_8223F6E0, char, unsigned);
extern char *memchr(const char *, int, unsigned);
P8_8223F6E0 *fn_8223F6E0(P8_8223F6E0 *out, void *os, P8_8223F6E0 state, const char *p, unsigned len, char sep)
{
  P8_8223F6E0 t1;
  P8_8223F6E0 t2;
  P8_8223F6E0 *r;
  int a, b;
  for (;;) {
    char *q = memchr(p, 0, len);
    unsigned n;
    if (q != 0) n = q - p; else n = len;
    r = fn_8223F670(&t1, os, state, p, n);
    state = *r;
    len -= n;
    p += n;
    if (len == 0) break;
    if (sep != 0) {
      r = fn_8223F7A8(&t2, os, state, sep, 1);
      state = *r;
    }
    p++;
    len--;
  }
  a = r->a; b = r->b; out->b = b; out->a = a;
  return out;
}
