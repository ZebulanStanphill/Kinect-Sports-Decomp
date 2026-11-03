typedef int (*Cb_82E13058)(int, int, int);
extern int fn_82CEAC20(int);
extern unsigned fn_82CEAC28(int);
extern int fn_82CEAF18(int);
extern unsigned *fn_82CEAF20(int, int);
extern int fn_82CFD5A8();
extern void fn_82D000A0(int, int, int);
extern int fn_82D001D8(int, int);
extern void fn_82D002F0(char *, int, int);

int fn_82E13058(int p1, int a, int b, Cb_82E13058 cb, int e)
{
  int r, i;
  char flag;

  r = fn_82CEAC20(a);
  r = fn_82D001D8(b, r);
  fn_82D002F0(&flag, b, r);
  if (flag == 0) {
    if (cb(p1, a, e) == 1) return 1;
    r = fn_82CEAC20(a);
    fn_82D000A0(b, r, 1);
    if (fn_82CEAC28(a) != 0) {
      if (fn_82E13058(p1, fn_82CEAC28(a), b, cb, e) == 1) return 1;
    }
    i = 0;
    if (fn_82CEAF18(a) > 0) {
      do {
        if (fn_82CEAF20(a, i)[1] != 0) {
          if (fn_82E13058(p1, fn_82CFD5A8(), b, cb, e) == 1) return 1;
        }
        i++;
      } while (i < fn_82CEAF18(a));
    }
  }
  return 0;
}
