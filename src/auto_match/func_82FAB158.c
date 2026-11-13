typedef struct Arg_82FAB158 { int len; int zero; unsigned obj; } Arg_82FAB158;
extern int fn_82FAA780(int, Arg_82FAB158 *);
extern unsigned fn_82FAAA98(int, int, int, int, int);
extern void fn_82FAAF20(int, unsigned);

int fn_82FAB158(int p1, int p2, int p3, int p4, int p5, int p6, int p7)
{
  unsigned o = fn_82FAAA98(p1, p4, p3, p6, p7);
  if (o != 0) {
    Arg_82FAB158 a;
    int r;
    a.obj = o;
    a.zero = 0;
    a.len = p5 - p6;
    r = fn_82FAA780(p2, &a);
    if (r == 1) {
      return r;
    }
    fn_82FAAF20(p1, o);
  }
  return 2;
}
