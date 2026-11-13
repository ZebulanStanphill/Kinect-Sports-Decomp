extern int fn_82243728(void *, int);
extern void fn_82243668(void *, int, void *, int);
extern void fn_828AC670(void *, int, int);
extern void fn_828AC4E8(void *);
extern void *memset(void *, int, unsigned);

unsigned char fn_822437F0(void *a, char *buf, void *c)
{
  unsigned char ok = fn_82243728(a, 0) != 0;
  if (ok) {
    int lo, hi;
    fn_82243668(a, 1, buf, 8);
    fn_82243668(a, 2, buf + 0x2c, 0x10);
    fn_82243668(a, 3, buf + 8, 0x24);
    lo = fn_82243728(a, 4);
    hi = fn_82243728(a, 5);
    fn_828AC670(c, lo, hi);
  } else {
    memset(buf, 0, 0x3c);
    fn_828AC4E8(c);
  }
  return ok;
}
