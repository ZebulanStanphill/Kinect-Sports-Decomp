extern void *lbl_83264300;
extern int fn_830158F8(void *, void *, void *, void *, void *, int);

int fn_82FE7CF0(void *a, void *b, void *c, void *d)
{
  void *p = lbl_83264300;
  if (!p) return 2;
  return fn_830158F8(p, a, b, c, d, 0);
}
