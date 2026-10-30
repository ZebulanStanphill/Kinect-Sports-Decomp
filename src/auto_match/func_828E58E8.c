extern void fn_822315A0(void *rep);
extern void fn_828BDE70(void *p);
extern void fn_8265CA20(void *p);

void *fn_828E58E8(char *p, unsigned int flags)
{
  if (*(void **)(p + 0x8c) != 0) {
    fn_822315A0(*(void **)(p + 0x8c));
  }
  if (*(void **)(p + 0x84) != 0) {
    fn_822315A0(*(void **)(p + 0x84));
  }
  fn_828BDE70(p);
  if (flags & 1) {
    fn_8265CA20(p);
  }
  return p;
}
