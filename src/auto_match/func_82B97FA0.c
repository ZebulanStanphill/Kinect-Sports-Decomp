typedef struct S_82B97FA0 {
  int p0[4];
  int f10;
  int f14;
  int f18;
  int f1c;
  int f20;
  int pad[15];
  int f60;
  int f64;
  int f68;
} S_82B97FA0;
extern int fn_828F0E38(int, int, int, int, int);
extern int fn_82B8FD40(S_82B97FA0 *, int);
extern int fn_82B90110(S_82B97FA0 *, int);

void fn_82B97FA0(S_82B97FA0 *p, int a, int b, int out)
{
  fn_828F0E38(out, 4, p->f60 * a + p->f64 * b + p->f20, 2, p->f68 << 2);
  if (p->f18 != 0)
    fn_82B8FD40(p, out);
  if (p->f10 != 0)
    fn_82B90110(p, out);
}
