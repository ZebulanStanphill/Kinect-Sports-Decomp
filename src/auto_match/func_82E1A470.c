extern int fn_82CEA220(int *, int);
extern void fn_82E1A150(int, int, int *, int);

void fn_82E1A470(int a, int b, int *c, int d)
{
  if (fn_82CEA220(c, b) > c[2]) {
    fn_82E1A150(b, a, c, d);
  }
}
