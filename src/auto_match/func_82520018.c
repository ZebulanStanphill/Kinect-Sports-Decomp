extern void *fn_82A1E6A0(int, int, int, int);
extern int fn_82A1E7D8(void *);
extern int fn_82BFE530(unsigned int, void **);
extern unsigned int lbl_832961CC;

void *fn_82520018(void)
{
  void *p;
  void *out;
  out = 0;
  p = fn_82BFE530(lbl_832961CC, &out) >= 0 ? out : 0;
  if (p == 0) {
    p = fn_82A1E6A0(0,0,0,0);
  }
  else {
    fn_82A1E7D8(p);
  }
  return p;
}
