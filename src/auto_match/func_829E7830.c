extern void *fn_82A28568(void *heap, unsigned flags, unsigned size);
extern int fn_82A28E60(void *heap, unsigned flags, void *p);
extern char *lbl_832179FC;

int fn_829E7830(void **pp, unsigned n)
{
  void *p;
  unsigned size;
  if (*pp != 0) {
    fn_82A28E60(*(void **)(lbl_832179FC + 0x8f4cc), 0, *pp);
    *pp = 0;
  }
  size = n << 2;
  if (n > 0x3fffffff)
    size = 0xffffffff;
  p = fn_82A28568(*(void **)(lbl_832179FC + 0x8f4cc), 0, size);
  *pp = p;
  return p ? 0 : 0x8007000e;
}
