extern unsigned *fn_82E4FE08(unsigned);
extern void *memcpy(void *, const void *, unsigned);

unsigned *fn_82EE00C0(void *src, unsigned n)
{
  unsigned *p;

  if (n > 0xfffffffa) {
    return 0;
  }
  p = fn_82E4FE08((n + 0x15) & 0xfffffff0);
  if (p != 0) {
    *p = n;
    p = p + 1;
    if (src != 0) {
      memcpy(p, src, n);
    }
    *((unsigned char *)p + n) = 0;
    *(unsigned short *)((char *)p + ((n + 1) & 0xfffffffe)) = 0;
  }
  return p;
}
