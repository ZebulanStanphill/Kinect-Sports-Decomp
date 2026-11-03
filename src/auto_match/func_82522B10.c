extern int fn_82522838();
extern int fn_82522CF8();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int lbl_8326B7D0[];

static __forceinline unsigned lim(unsigned v) { if (v > 0x10) v = 0x10; return v; }
int fn_82522B10(int *param_1, int param_2, unsigned param_3)
{
  int r;
  int *o;
  unsigned old;
  if (*param_1 == 0) {
    fn_82522838();
  }
  fn_8259C5D8(param_1 + 2, 1, fn_82A1BB18() + 1);
  fn_82A1BB18();
  o = (int *)fn_8259C458(lbl_8326B7D0[fn_8259A230()]);
  old = o[10];
  o[10] = lim(param_3);
  r = fn_82522CF8(o, param_2);
  o[10] = lim(old);
  fn_82A1BB18();
  fn_8259C738(param_1 + 2);
  return r;
}
