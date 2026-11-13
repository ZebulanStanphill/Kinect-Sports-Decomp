typedef struct Str_822DB628 { void *p; int pad; unsigned cap; int extra; } Str_822DB628;
extern Str_822DB628 *fn_822DB770(Str_822DB628 *, Str_822DB628 *);
extern long fn_822DBA58(void *, void *, Str_822DB628 *);
extern void fn_8265CAA0(void *);

long fn_822DB628(void *param_1, void *param_2, Str_822DB628 *param_3)
{
  struct { Str_822DB628 a, b, c, d; } L;
  Str_822DB628 *pa, *pb;
  long r;
  pa = fn_822DB770(&L.a, param_3);
  pb = fn_822DB770(&L.b, pa);
  fn_822DB770(&L.c, pb);
  L.c.extra = 1;
  if (pb->cap > 8 && pb->p != 0) fn_8265CAA0(pb->p);
  fn_822DB770(&L.d, &L.c);
  L.d.extra = L.c.extra;
  if (L.c.cap > 8 && L.c.p != 0) fn_8265CAA0(L.c.p);
  if (pa->cap > 8 && pa->p != 0) fn_8265CAA0(pa->p);
  r = fn_822DBA58(param_1, param_2, &L.d);
  if (param_3->cap > 8 && param_3->p != 0) fn_8265CAA0(param_3->p);
  return r;
}
