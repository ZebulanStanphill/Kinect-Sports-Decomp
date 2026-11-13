typedef struct { int pad0[2]; __int64 m8; char m10[0x1d0 - 0x10]; int m1d0; int pad1; int m1d8; int pad2; int m1e0; int pad3; int m1e8; } S_82F566C8;
extern __int64 fn_824B42A0(void);
extern double fn_824B42C8(__int64);
extern void fn_824B4298(void *, void *, int);
extern void fn_82F53CF0(int, int, int, double);
extern void fn_82F5AF98(int, int, int);
extern void fn_82F5B3C8(int, int, int);
extern void fn_82F5C9D0(int, int, int, double);

void fn_82F566C8(S_82F566C8 *s, int a, int b)
{
  __int64 t;
  double d;
  t = fn_824B42A0();
  d = fn_824B42C8(t - s->m8);
  if (s->m1e8 != 0) {
    fn_82F5AF98(s->m1e8, a, b);
  }
  if (s->m1e0 != 0) {
    fn_82F53CF0(s->m1e0, a, b, d);
  }
  if (s->m1d0 != 0) {
    fn_82F5B3C8(s->m1d0, a, b);
  }
  if (s->m1d8 != 0) {
    fn_82F5C9D0(s->m1d8, a, b, d);
  }
  fn_824B4298(s->m10, (char *)a + b * 0x1c0 + 0x30, 0x1c0);
  s->m8 = t;
}
