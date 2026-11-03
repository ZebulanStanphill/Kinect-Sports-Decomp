typedef struct S_82A86338 { char p0[0x14]; int f14; char p1[0x8]; int f20; int f24; char p2[0x4]; int f2c; char p3[0x10]; } S_82A86338;
typedef struct L_82A86338 { char buf[0x40]; S_82A86338 s; } L_82A86338;
extern void fn_82A93C18(int, int, int, int, int, int, int, int, int, void *, int, int);
extern void fn_82A94798(void *, int, void *);
void fn_82A86338(int a, int b, int c, int d, int *o1, int *o2, int *o3)
{
  L_82A86338 l;
  fn_82A93C18(b, c, 0, 0, a, 0, 0, 0, 0, l.buf, 0, 0);
  fn_82A94798(l.buf, d, &l.s);
  *o1 = l.s.f20 * l.s.f2c;
  *o2 = l.s.f14;
  *o3 = l.s.f24;
}
