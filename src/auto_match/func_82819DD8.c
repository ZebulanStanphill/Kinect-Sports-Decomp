typedef struct N_82819DD8 { char pad[0x20]; unsigned f20; unsigned f24; } N_82819DD8;
extern void fn_82823080(N_82819DD8 *, N_82819DD8 **);
extern void fn_828230A8(N_82819DD8 *, N_82819DD8 **);
extern N_82819DD8 *lbl_8320A5F0;

int fn_82819DD8(N_82819DD8 *p, int a, unsigned b, int c)
{
  int d;
  unsigned al;
  unsigned e;
  N_82819DD8 *q;
  N_82819DD8 *q2;

  d = p->f24 - a;
  if (d >= 0) {
    e = p->f20 + c;
    al = b & 0xffff;
    if (((al - 1) & e) != 0) {
      d = (e - ((e + al - 1) & ~(al - 1))) + d;
    }
    if (d >= 0) {
      if (lbl_8320A5F0 == 0 || p->f20 > lbl_8320A5F0->f20) {
        lbl_8320A5F0 = p;
      }
      fn_828230A8(p, &q);
      if (q != 0) {
        fn_82819DD8(q, a, b, c);
      }
      return 1;
    }
  }
  fn_828230A8(p, &q);
  if (q != 0 && fn_82819DD8(q, a, b, c) != 0) {
    return 1;
  }
  fn_82823080(p, &q2);
  if (q2 != 0 && fn_82819DD8(q2, a, b, c) != 0) {
    return 1;
  }
  return 0;
}
