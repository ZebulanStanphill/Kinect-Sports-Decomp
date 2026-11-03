extern unsigned strlen(const char *);
int fn_828F9D90(int *p, char *s, unsigned len, int a, int b, unsigned c, unsigned d)
{
  if (c != 0 && d != 0) {
    if (len == -1) {
      if (s != 0) {
        len = strlen(s);
      } else {
        len = 0;
      }
    }
    if (s != 0 || len == 0) {
      p[0] = (int)s;
      p[6] = a;
      p[1] = (int)s + len;
      p[7] = b;
      p[0xb] = c;
      p[0xc] = d;
      p[0xd] = 0;
      return 0;
    }
  }
  return 0x80004005;
}
