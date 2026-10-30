extern unsigned int strlen(const char *);
extern int fn_82F85C08(unsigned short *dst, const char *src, unsigned int n, int *state, int loc);
extern void *fn_8265CA60(unsigned int n);

unsigned short *fn_82296D40(const char *s, int loc)
{
  struct { unsigned short tmp[2]; int st1; int st2; } L;
  unsigned int n;
  unsigned int cnt;
  unsigned int rem;
  const char *p;
  unsigned int total;
  unsigned int size;
  unsigned short *buf;
  unsigned short *w;
  int r;
  L.st1 = 0;
  n = strlen(s) + 1;
  cnt = 0;
  rem = n;
  p = s;
  while (rem != 0 && (r = fn_82F85C08(L.tmp, p, rem, &L.st1, loc)) > 0) {
    rem -= r;
    p += r;
    cnt++;
  }
  total = cnt + 1;
  size = total * 2;
  if (total > 0x7fffffff) size = (unsigned int)-1;
  buf = (unsigned short *)fn_8265CA60(size);
  L.st2 = 0;
  w = buf;
  while (total != 0 && (r = fn_82F85C08(w, s, n, &L.st2, loc)) > 0) {
    total--;
    s += r;
    w++;
  }
  *w = 0;
  return buf;
}
