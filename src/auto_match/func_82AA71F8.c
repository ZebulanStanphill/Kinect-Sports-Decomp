extern void *memset(void *, int, unsigned);
typedef struct T_82AA71F8 { int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q; } T_82AA71F8;
typedef struct S_82AA71F8 { int p0; unsigned f4; char pad8[0x20]; unsigned f28; unsigned f2c; unsigned f30; int f34; } S_82AA71F8;
extern void fn_82B629B8(S_82AA71F8 *);
extern void fn_82B44EB0(S_82AA71F8 *);
extern void fn_82B43380(S_82AA71F8 *);
extern void fn_82AA6868(void *);
extern void fn_82AA6A30(S_82AA71F8 *, int, int, int, int, T_82AA71F8 *);
static unsigned sel(unsigned x) { return (x & 1) == 0 ? x : 0; }
void fn_82AA71F8(S_82AA71F8 *s, int unused, int unused2, int a, int b, T_82AA71F8 *src)
{
  unsigned v;
  T_82AA71F8 t;
  unsigned k;
  s->f34 = a;
  s->f28 = s->f28 | 0x10000;
  fn_82B629B8(s);
  fn_82B44EB0(s);
  v = *(unsigned *)((sel(s->f4) & 0xfffffffe) + 4);
  if ((v & 1) == 0 && v != 0) fn_82B43380(s);
  fn_82AA6868((char *)s + 0x3cc);
  memset(&t, 0, sizeof(t));
  if (src != 0) {
    t.a = src->a; t.b = src->b; t.c = src->c; t.f = src->f;
  }
  k = (s->f30 & 0xffff0000) == 0xffff0000 ? 0xffff0000 : 0xfffe0000;
  fn_82AA6A30(s, k, a, b, 0, &t);
  if (src != 0) src->d = t.d;
}
