extern void fn_82522838(void);
extern int fn_82522CF8(void *, int);
extern int fn_8259A230(void);
extern int *fn_8259C458(int);
extern void fn_8259C5D8(int *, int, int);
extern void fn_8259C738(int *);
extern int fn_82A1BB18(void);
extern int lbl_8326B7D0[];
extern int *lbl_832767CC;

typedef struct Obj_82598738 {
  int f0;
  unsigned f4;
  unsigned f8;
} Obj_82598738;

int fn_82598738(Obj_82598738 *param_1, int param_2)
{
  int *piVar1;
  int *e;
  int r;
  unsigned old;
  unsigned t;
  unsigned v;

  t = param_2 + param_1->f4;
  param_1->f4 = t;
  if (t > param_1->f8)
    param_1->f8 = t;
  if (lbl_832767CC == 0) {
    fn_82522838();
    if (lbl_832767CC == 0)
      fn_82522838();
  }
  piVar1 = lbl_832767CC;
  if (*piVar1 == 0)
    fn_82522838();
  fn_8259C5D8(piVar1 + 2, 1, fn_82A1BB18() + 1);
  fn_82A1BB18();
  e = fn_8259C458(lbl_8326B7D0[fn_8259A230()]);
  old = e[10];
  e[10] = 0x10;
  r = fn_82522CF8(e, param_2);
  v = old;
  if (old > 0x10)
    v = 0x10;
  e[10] = v;
  fn_82A1BB18();
  fn_8259C738(piVar1 + 2);
  return r;
}
