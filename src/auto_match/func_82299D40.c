extern int fn_82273C88(void *);
extern int fn_82273CD8(void *, int);
extern int fn_8229A0B8(void *);
extern int fn_82672C20(int, const char *, void *, int);
extern int fn_82F64988(void *, int, int);

typedef struct Val_82299D40 {
  int m0;
  int m4;
  union {
    double d;
    int i;
  } v;
} Val_82299D40;

void fn_82299D40(int *self, int param_2, int param_3)
{
  Val_82299D40 args[3];
  Val_82299D40 *p;
  int i;
  int st;
  int other;
  double d;

  st = self[0x484];
  other = 1;
  if (st >= 0 && (st <= 3 || (st > 7 && st <= 10))) {
    other = 0;
  }
  if (self[0x48a] == 0 || (other && self[0x485] != 3)) {
    fn_82F64988(self + 0x83, 0x400, param_2);
    fn_82F64988(self + 0x283, 0x400, param_3);
    self[0x485] = 3;
    fn_8229A0B8(self);
  } else {
    for (i = 0; i < 3; i++) {
      args[i].m0 = 0;
      args[i].m4 = 0;
    }
    d = (double)(unsigned int)self[2];
    fn_82273CD8(&args[0], 3);
    args[0].v.d = d;
    fn_82273CD8(&args[1], 5);
    args[1].v.i = param_2;
    fn_82273CD8(&args[2], 5);
    args[2].v.i = param_3;
    fn_82672C20(self[0], "_root.mainCtrl.displayDoubleCaption", args, 3);
    self[0x489] = 0;
    self[0x483] = 3;
    self[0x488] = 1;
    p = args + 3;
    i = 2;
    do {
      p--;
      fn_82273C88(p);
    } while (--i >= 0);
  }
}
