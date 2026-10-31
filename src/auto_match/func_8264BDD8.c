// Built with link-time code generation together with its "ltcg_units" (objects.json):
// 0x40000000 stays in volatile r7 across fn_82643AC0, which LTCG knows leaves it alone.
typedef unsigned __int64 u64;
typedef struct {
  char pad0[0x6c]; union { unsigned flags; struct { unsigned hi : 28; unsigned state : 4; } b; } u; char pad1[0x78 - 0x70]; int f78; char pad2[0x88 - 0x7c];
  int f88; int f8c; unsigned f90; char pad3[0x98 - 0x94]; unsigned f98;
} Ctx_8264BDD8;
typedef struct {
  u64 q0, q1, q2, q3, q4, q5;
  int cur; int f34;
  char pad0[0x2940 - 0x38]; int f2940;
  char pad1[0x2abd - 0x2944]; unsigned char f2abd; char pad2[2]; unsigned char f2ac0;
  char pad3[0x3470 - 0x2ac1]; unsigned f3470;
  char pad4[0x35a0 - 0x3474]; Ctx_8264BDD8 *ctx; char *f35a4; char *f35a8; int pad5; char *f35b0; unsigned *f35b4; unsigned *f35b8;
  char pad6[0x3b24 - 0x35bc]; int f3b24;
} Dev_8264BDD8;
extern u64 fn_826417C8(Dev_8264BDD8 *, u64, int);
extern void fn_82641B60(Dev_8264BDD8 *, u64, int, void *);
extern void fn_82641C20(Dev_8264BDD8 *, u64);
extern void fn_82641DA0(Dev_8264BDD8 *, u64);
extern void fn_82641EF8(Dev_8264BDD8 *, u64, int, void *);
extern u64 fn_82642F50(Dev_8264BDD8 *, u64);
extern void fn_82643AC0(void *);
extern void fn_82643CE0(Dev_8264BDD8 *);
extern void fn_82644C68(Dev_8264BDD8 *);
extern void fn_82647258(Dev_8264BDD8 *);
extern void fn_82647620(Dev_8264BDD8 *);
extern unsigned *fn_8264B568(Dev_8264BDD8 *);
extern void __emit(unsigned int);
#define __sync() __emit(0x7C0004AC)

int fn_8264BDD8(Dev_8264BDD8 *d)
{
  Ctx_8264BDD8 *c = d->ctx;
  u64 a, b, m, e, n;
  unsigned t;
  int r;
  int base;
  unsigned *p;
  unsigned v, w;
  if ((c->u.flags & 0x8000) != 0) {
    e = d->q4;
    b = d->q3;
    m = d->q2;
    a = d->q1;
    if (d->q0 != 0) {
      fn_82641EF8(d, d->q0, 0x4000, (char *)d + 0x780);
      d->q0 = 0;
    }
    if (a != 0) {
      fn_82641EF8(d, a, 0x4400, (char *)d + 0x1780);
      d->q1 = 0;
    }
    if (m != 0) {
      if ((m & 0x1e0000) != 0) m = fn_82642F50(d, m);
      if ((d->q5 & m) != 0) m = fn_826417C8(d, m, d->f2940);
      if ((m & 0xfff) != 0) fn_82641B60(d, m << 0x34, 0x2200, (char *)d + 0x2934);
      if ((m & 0x1f000) != 0) fn_82641B60(d, (m & 0x1f000) << 0x2f, 0x2180, (char *)d + 0x2920);
      if ((m & 0x3fffc0000000000) != 0) fn_82641B60(d, (m & 0x3fffc0000000000) << 6, 0x2000, (char *)d + 0x2880);
      if ((m & 0x3ffffe00000) != 0) fn_82641B60(d, (m & 0x3ffffe00000) << 0x16, 0x2100, (char *)d + 0x28cc);
      d->q2 = 0;
    }
    if (b != 0) {
      if ((b & 0xffffffff) != 0) fn_82641DA0(d, b << 0x20);
      if ((b & 0x7ffffc00000000) != 0) fn_82641B60(d, (b & 0x7ffffc00000000) << 9, 0x2280, (char *)d + 0x2964);
      d->q3 = 0;
    }
    if (e != 0) {
      if ((e & 0x3fc000000000) != 0) fn_82641B60(d, (e & 0x3fc000000000) << 0x12, 0x2380, (char *)d + 0x2a50);
      if ((e & 0x7e000000000000) != 0) fn_82641C20(d, (e & 0x7e000000000000) << 9);
      if ((e & 0x100000000000000) != 0) fn_82641B60(d, 0xffffffffff000000, 0x4900, (char *)d + 0x2780);
      if ((e & 0x3fffffffff) != 0) fn_82641B60(d, e << 0x1a, 0x2300, (char *)d + 0x29b8);
      if ((e & 0xc000000000000000) != 0) {
        if ((d->f2ac0 & 0x80) != 0 || (d->f2ac0 & 0x40) != 0) fn_82647258(d);
      }
      d->q4 = 0;
    }
  } else {
    if ((d->f2ac0 & 0x80) != 0 || (d->f2ac0 & 0x40) != 0) fn_82647258(d);
  }
  fn_82647620(d);
  if (c->f98 != 0) {
    v = (d->cur - d->f3b24 + 4) >> 2;
    if (v > 0x100000) d->f2abd |= 0x20;
    p = d->f35b4;
    w = c->f98;
    if (p >= d->f35b8) p = fn_8264B568(d);
    p[0] = v | 0x81000000;
    p[1] = ((w >> 0x14) + 0x200 & 0x1000) + (w & 0x1fffffff);
    d->f35b4 = p + 2;
  } else {
    fn_82644C68(d);
  }
  if (d->f35a4 != 0) {
    *(int *)(d->f35a4 + 4) = (int)(d->f35a8 - d->f35a4 - 8) >> 3;
  }
  if (d->f35b0 != 0) {
    *(int *)(d->f35b0 + 4) = (int)((char *)d->f35b4 - d->f35b0 - 8) >> 3;
  }
  base = 0x40000000;
  if ((c->u.flags & 0x1000) != 0) {
    fn_82643AC0((char *)d + 0x3470);
    t = d->f3470;
    if (t == 0) r = 0;
    else r = (((t >> 0x14) + 0x200 & 0x1000) + (t & 0x1fffffff)) - base;
    c->f78 = r;
  }
  d->ctx = 0;
  __sync();
  c->f88 = d->cur + 4;
  c->f8c = d->f34;
  c->f90 = ((((unsigned)d->cur + 4) >> 0x14) + 0x200 & 0x1000) + (((unsigned)d->cur + 4) & 0x1fffffff) - base;
  if ((d->f2abd & 0x20) != 0) {
    c->u.b.state = 7;
    r = 0x8007000e;
  } else {
    c->u.b.state = 1;
    r = 0;
  }
  fn_82643CE0(d);
  return r;
}
