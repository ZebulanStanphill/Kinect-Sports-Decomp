extern void *fn_8265C9E0(int);
extern int fn_8289DC68(void *, void *);
extern void fn_8289FC80(void *, void *, int, int, int, int, int, int);
extern void *fn_828B0458(void *, void *, void *);
extern int lbl_82023BDC[];
int *fn_8289D8D8(int *self, void *p2, int p3, int p4, int p5, int p6, int p7)
{
  void *m;
  void *o;
  fn_8289FC80(self, p2, p3, p4, p5, p6, p7, 1);
  *self = (int)lbl_82023BDC;
  fn_8289DC68(p2, self);
  m = fn_8265C9E0(0x20);
  if (m != 0) o = fn_828B0458(m, p2, self); else o = 0;
  self[0x19] = (int)o;
  return self;
}