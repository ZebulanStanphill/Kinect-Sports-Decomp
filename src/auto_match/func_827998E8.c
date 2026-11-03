extern char *fn_82794B88(void);
extern void *fn_8267B890(int, int, int);
extern void *fn_82797870(void *, char *);
extern void fn_827979F8(void *, void *, void *, void *);
void *fn_827998E8(void *a, void *b, void *c)
{
  char *p;
  void *m;
  void *r;
  p = fn_82794B88();
  m = fn_8267B890(*(int *)(p + 0x1c), 0x24, 0);
  if (m != 0) r = fn_82797870(m, p); else r = 0;
  fn_827979F8(a, r, b, c);
  return r;
}
