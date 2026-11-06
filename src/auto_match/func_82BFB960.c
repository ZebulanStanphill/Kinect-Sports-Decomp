extern unsigned int fn_82BFB7E0(unsigned int *, int, void *);

unsigned int fn_82BFB960(unsigned int *p, unsigned int *out, int n, void *ctx)
{
  if (n > 0) {
    unsigned int al = 0x80;
    unsigned int lim;
    if ((unsigned int)n <= 0x40) {
      unsigned int v = 0x40;
      do {
        al = v;
        v = al >> 1;
      } while ((unsigned int)n <= v);
    }
    lim = 8;
    if (p != 0) lim = *p;
    if (al <= lim) al = 1;
    if ((int)(al + n) > 1 && (int)al > 0) {
      unsigned int base = fn_82BFB7E0(p, al + n - 1, ctx);
      *out = base;
      return ((al - base) & (al - 1)) + base;
    }
  }
  *out = 0;
  return 0;
}
