extern void *fn_82517C10(void *, int, int, int, void *, void *, void *, void *, void *);
extern void fn_82359C18(void *);
extern void *fn_82518120(void);
extern void fn_82518248(void *, int, void *);
extern void fn_82238CD8(void);
extern void fn_8251C5A0(void);
extern void fn_82238D20(void);
extern void fn_82238D68(void);

void *fn_82235D10(void *self, int a, int b)
{
  int fn[5];
  void *p;
  fn[4] = 0;
  fn_82517C10(self, a, 7, 4, fn_82238CD8, fn_8251C5A0, fn_82238D20, fn_82238D68, fn);
  fn_82359C18(fn);
  *(int *)((char *)self + 0x50) = b;
  p = fn_82518120();
  fn_82518248(p, b, self);
  return self;
}
