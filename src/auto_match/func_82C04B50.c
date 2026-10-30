extern void fn_8265C990(void *p, unsigned int tag);
extern void fn_82C06390(void *p);
extern void *lbl_820EC870[];

void *fn_82C04B50(void **p, unsigned int flags)
{
  p[0] = lbl_820EC870;
  ((void (*)(void *))lbl_820EC870[0x19])(p);
  fn_82C06390(p);
  if ((flags & 1) != 0) {
    fn_8265C990(p, 0x208c800c);
  }
  return p;
}
