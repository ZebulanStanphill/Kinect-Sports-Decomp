extern void *fn_8236D8F8(void *, int, int);
extern void *fn_8265C9E0(int);
extern unsigned int lbl_821B9658;
extern unsigned int lbl_821B96A8;

unsigned int *fn_8242D750(int a, int b)
{
  unsigned int *p;

  p = (unsigned int *)fn_8265C9E0(0x88);
  if (p != 0) {
    fn_8236D8F8(p, b, a);
    p[0] = (unsigned int)&lbl_821B9658;
    p[0x1a] = (unsigned int)&lbl_821B96A8;
    return p;
  }
  return 0;
}
